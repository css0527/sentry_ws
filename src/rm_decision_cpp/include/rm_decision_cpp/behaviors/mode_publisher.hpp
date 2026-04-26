#ifndef RM_DECISION_MODE_PUBLISHER_HPP_
#define RM_DECISION_MODE_PUBLISHER_HPP_

#include "behaviortree_cpp/bt_factory.h"
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int8.hpp>
#include <rclcpp/qos.hpp>

using namespace BT;
namespace rm_decision
{

class ModePublisher : public SyncActionNode
{
public:
  ModePublisher(const std::string& name, 
                const NodeConfig& config,
                std::shared_ptr<rclcpp::Node> node);
  
  ~ModePublisher() override = default;

  NodeStatus tick() override;
  
  static PortsList providedPorts();

private:
  rclcpp::Node::SharedPtr node_;
  rclcpp::Publisher<std_msgs::msg::Int8>::SharedPtr mode_pub_;
};

} // namespace rm_decision

#endif