// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/chassis_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ChassisCmd_twist
{
public:
  explicit Init_ChassisCmd_twist(::rm_interfaces::msg::ChassisCmd & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::ChassisCmd twist(::rm_interfaces::msg::ChassisCmd::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::ChassisCmd msg_;
};

class Init_ChassisCmd_type
{
public:
  Init_ChassisCmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChassisCmd_twist type(::rm_interfaces::msg::ChassisCmd::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ChassisCmd_twist(msg_);
  }

private:
  ::rm_interfaces::msg::ChassisCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::ChassisCmd>()
{
  return rm_interfaces::msg::builder::Init_ChassisCmd_type();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_
