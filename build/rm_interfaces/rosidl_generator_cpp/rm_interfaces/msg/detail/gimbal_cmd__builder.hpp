// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/GimbalCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/gimbal_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_GimbalCmd_velocity
{
public:
  explicit Init_GimbalCmd_velocity(::rm_interfaces::msg::GimbalCmd & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::GimbalCmd velocity(::rm_interfaces::msg::GimbalCmd::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::GimbalCmd msg_;
};

class Init_GimbalCmd_position
{
public:
  explicit Init_GimbalCmd_position(::rm_interfaces::msg::GimbalCmd & msg)
  : msg_(msg)
  {}
  Init_GimbalCmd_velocity position(::rm_interfaces::msg::GimbalCmd::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GimbalCmd_velocity(msg_);
  }

private:
  ::rm_interfaces::msg::GimbalCmd msg_;
};

class Init_GimbalCmd_pitch_type
{
public:
  explicit Init_GimbalCmd_pitch_type(::rm_interfaces::msg::GimbalCmd & msg)
  : msg_(msg)
  {}
  Init_GimbalCmd_position pitch_type(::rm_interfaces::msg::GimbalCmd::_pitch_type_type arg)
  {
    msg_.pitch_type = std::move(arg);
    return Init_GimbalCmd_position(msg_);
  }

private:
  ::rm_interfaces::msg::GimbalCmd msg_;
};

class Init_GimbalCmd_yaw_type
{
public:
  Init_GimbalCmd_yaw_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalCmd_pitch_type yaw_type(::rm_interfaces::msg::GimbalCmd::_yaw_type_type arg)
  {
    msg_.yaw_type = std::move(arg);
    return Init_GimbalCmd_pitch_type(msg_);
  }

private:
  ::rm_interfaces::msg::GimbalCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::GimbalCmd>()
{
  return rm_interfaces::msg::builder::Init_GimbalCmd_yaw_type();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__BUILDER_HPP_
