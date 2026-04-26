// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/chassis_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_ChassisCmd_twist
{
public:
  explicit Init_ChassisCmd_twist(::auto_aim_interfaces::msg::ChassisCmd & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::ChassisCmd twist(::auto_aim_interfaces::msg::ChassisCmd::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::ChassisCmd msg_;
};

class Init_ChassisCmd_is_navigating
{
public:
  explicit Init_ChassisCmd_is_navigating(::auto_aim_interfaces::msg::ChassisCmd & msg)
  : msg_(msg)
  {}
  Init_ChassisCmd_twist is_navigating(::auto_aim_interfaces::msg::ChassisCmd::_is_navigating_type arg)
  {
    msg_.is_navigating = std::move(arg);
    return Init_ChassisCmd_twist(msg_);
  }

private:
  ::auto_aim_interfaces::msg::ChassisCmd msg_;
};

class Init_ChassisCmd_is_spining
{
public:
  explicit Init_ChassisCmd_is_spining(::auto_aim_interfaces::msg::ChassisCmd & msg)
  : msg_(msg)
  {}
  Init_ChassisCmd_is_navigating is_spining(::auto_aim_interfaces::msg::ChassisCmd::_is_spining_type arg)
  {
    msg_.is_spining = std::move(arg);
    return Init_ChassisCmd_is_navigating(msg_);
  }

private:
  ::auto_aim_interfaces::msg::ChassisCmd msg_;
};

class Init_ChassisCmd_header
{
public:
  Init_ChassisCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChassisCmd_is_spining header(::auto_aim_interfaces::msg::ChassisCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ChassisCmd_is_spining(msg_);
  }

private:
  ::auto_aim_interfaces::msg::ChassisCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::ChassisCmd>()
{
  return auto_aim_interfaces::msg::builder::Init_ChassisCmd_header();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_
