#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>

#include "GxIAPI.h"
//#include "DxImageProc.h"

class DahengSimpleDriver : public rclcpp::Node
{
public:
    DahengSimpleDriver() : Node("daheng_simple_driver")
    {
        this->declare_parameter<std::string>("frame_id", "camera");
        frame_id_ = this->get_parameter("frame_id").as_string();

        image_pub_ = this->create_publisher<sensor_msgs::msg::Image>("daheng/image_raw", 10);

        if (!initCamera()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to initialize camera!");
            rclcpp::shutdown();
        }

        grab_thread_ = std::thread(&DahengSimpleDriver::grabLoop, this);
    }

    ~DahengSimpleDriver()
    {
        stop_ = true;
        if (grab_thread_.joinable()) grab_thread_.join();
        if (device_ != nullptr) {
            GXStreamOff(device_);
            GXCloseDevice(device_);
        }
        GXCloseLib();
    }

private:
    bool initCamera()
    {
        GX_STATUS status = GXInitLib();
        if (status != GX_STATUS_SUCCESS) {
            RCLCPP_ERROR(this->get_logger(), "GXInitLib failed");
            return false;
        }

        uint32_t device_num = 0;
        status = GXUpdateDeviceList(&device_num, 1000);
        if (status != GX_STATUS_SUCCESS || device_num == 0) {
            RCLCPP_ERROR(this->get_logger(), "No camera found");
            return false;
        }
        RCLCPP_INFO(this->get_logger(), "Found %d camera(s)", device_num);

        status = GXOpenDeviceByIndex(1, &device_);
        if (status != GX_STATUS_SUCCESS) {
            RCLCPP_ERROR(this->get_logger(), "GXOpenDeviceByIndex failed");
            return false;
        }

        status = GXSetEnum(device_, GX_ENUM_ACQUISITION_MODE, GX_ACQ_MODE_CONTINUOUS);
        if (status != GX_STATUS_SUCCESS) {
            RCLCPP_ERROR(this->get_logger(), "Set continuous mode failed");
            return false;
        }
	        // 设置采集模式为连续
        GXSetEnum(device_, GX_ENUM_ACQUISITION_MODE, GX_ACQ_MODE_CONTINUOUS);
        // 关闭触发（使用软件触发默认为关闭？但可以显式设置）
        GXSetEnum(device_, GX_ENUM_TRIGGER_MODE, GX_TRIGGER_MODE_OFF);
        
        status = GXStreamOn(device_);
        if (status != GX_STATUS_SUCCESS) {
            RCLCPP_ERROR(this->get_logger(), "GXStreamOn failed");
            return false;
        }
        return true;
    }

        void grabLoop()
    {
        int frame_count = 0;
        while (!stop_ && rclcpp::ok()) {
            GX_FRAME_DATA frame;
            memset(&frame, 0, sizeof(frame));
            GX_STATUS status = GXGetImage(device_, &frame, 1000);   // 超时 1000 毫秒
            if (status != GX_STATUS_SUCCESS) {
                RCLCPP_WARN(this->get_logger(), "GXGetImage failed with status: %d", status);
                continue;
            }
            if (frame.nStatus != 0) {
                RCLCPP_WARN(this->get_logger(), "Frame error status: %d", frame.nStatus);
                continue;
            }
            if (!frame.pImgBuf) {
                RCLCPP_WARN(this->get_logger(), "Null image buffer");
                continue;
            }
            
            // 检查图像格式（根据实际相机输出调整）
            RCLCPP_INFO(this->get_logger(), "Frame received: %dx%d, pixel format: 0x%X", 
                        frame.nWidth, frame.nHeight, frame.nPixelFormat);
            
            // 假设为 Mono8，如果是彩色需转换
            cv::Mat img(frame.nHeight, frame.nWidth, CV_8UC1, frame.pImgBuf);
            auto msg = cv_bridge::CvImage(std_msgs::msg::Header(), "mono8", img).toImageMsg();
            msg->header.stamp = this->now();
            msg->header.frame_id = frame_id_;
            image_pub_->publish(*msg);
            
            if (++frame_count % 30 == 0) {
                RCLCPP_INFO(this->get_logger(), "Published %d frames", frame_count);
            }
        }
    }

    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr image_pub_;
    std::string frame_id_;
    GX_DEV_HANDLE device_ = nullptr;
    std::thread grab_thread_;
    bool stop_ = false;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<DahengSimpleDriver>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

