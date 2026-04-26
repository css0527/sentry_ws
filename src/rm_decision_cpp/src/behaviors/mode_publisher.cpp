#include "rm_decision_cpp/behaviors/mode_publisher.hpp"

using namespace BT;

namespace rm_decision
{

ModePublisher::ModePublisher(const std::string& name,
                             const NodeConfig& config,
                             std::shared_ptr<rclcpp::Node> node)
  : SyncActionNode(name, config), node_(node)
{
  mode_pub_ = node_->create_publisher<std_msgs::msg::Int8>(
    "/robot_mode",
    rclcpp::QoS(1).transient_local());
}

NodeStatus ModePublisher::tick()
{
  auto mode = getInput<int>("mode");
  if (!mode) {
    RCLCPP_WARN(node_->get_logger(), "No input mode");
    return NodeStatus::FAILURE;
  }

  int value = mode.value();
  RCLCPP_INFO(node_->get_logger(), "[ModePublisher] Publishing mode: %d", value);

  std_msgs::msg::Int8 msg;
  msg.data = static_cast<int8_t>(value);
  mode_pub_->publish(msg);

  return NodeStatus::SUCCESS;
}

PortsList ModePublisher::providedPorts()
{
  return {
    InputPort<int8_t>("mode", "Robot mode: 0=offense, 1=defense, 2=mobile")
  };
}

} // namespace rm_decision