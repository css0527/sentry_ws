// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/DebugRuneAngle.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__DEBUG_RUNE_ANGLE__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__DEBUG_RUNE_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/debug_rune_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_DebugRuneAngle_data
{
public:
  explicit Init_DebugRuneAngle_data(::auto_aim_interfaces::msg::DebugRuneAngle & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::DebugRuneAngle data(::auto_aim_interfaces::msg::DebugRuneAngle::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::DebugRuneAngle msg_;
};

class Init_DebugRuneAngle_header
{
public:
  Init_DebugRuneAngle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugRuneAngle_data header(::auto_aim_interfaces::msg::DebugRuneAngle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DebugRuneAngle_data(msg_);
  }

private:
  ::auto_aim_interfaces::msg::DebugRuneAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::DebugRuneAngle>()
{
  return auto_aim_interfaces::msg::builder::Init_DebugRuneAngle_header();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__DEBUG_RUNE_ANGLE__BUILDER_HPP_
