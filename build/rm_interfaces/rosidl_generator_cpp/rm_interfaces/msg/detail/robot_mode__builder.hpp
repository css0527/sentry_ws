// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/robot_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotMode_mode
{
public:
  Init_RobotMode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_interfaces::msg::RobotMode mode(::rm_interfaces::msg::RobotMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::RobotMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::RobotMode>()
{
  return rm_interfaces::msg::builder::Init_RobotMode_mode();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_
