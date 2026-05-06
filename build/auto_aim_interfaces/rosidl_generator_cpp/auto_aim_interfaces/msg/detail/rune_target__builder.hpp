// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/RuneTarget.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__RUNE_TARGET__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__RUNE_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/rune_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_RuneTarget_is_big_rune
{
public:
  explicit Init_RuneTarget_is_big_rune(::auto_aim_interfaces::msg::RuneTarget & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::RuneTarget is_big_rune(::auto_aim_interfaces::msg::RuneTarget::_is_big_rune_type arg)
  {
    msg_.is_big_rune = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RuneTarget msg_;
};

class Init_RuneTarget_is_lost
{
public:
  explicit Init_RuneTarget_is_lost(::auto_aim_interfaces::msg::RuneTarget & msg)
  : msg_(msg)
  {}
  Init_RuneTarget_is_big_rune is_lost(::auto_aim_interfaces::msg::RuneTarget::_is_lost_type arg)
  {
    msg_.is_lost = std::move(arg);
    return Init_RuneTarget_is_big_rune(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RuneTarget msg_;
};

class Init_RuneTarget_pts
{
public:
  explicit Init_RuneTarget_pts(::auto_aim_interfaces::msg::RuneTarget & msg)
  : msg_(msg)
  {}
  Init_RuneTarget_is_lost pts(::auto_aim_interfaces::msg::RuneTarget::_pts_type arg)
  {
    msg_.pts = std::move(arg);
    return Init_RuneTarget_is_lost(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RuneTarget msg_;
};

class Init_RuneTarget_header
{
public:
  Init_RuneTarget_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RuneTarget_pts header(::auto_aim_interfaces::msg::RuneTarget::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RuneTarget_pts(msg_);
  }

private:
  ::auto_aim_interfaces::msg::RuneTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::RuneTarget>()
{
  return auto_aim_interfaces::msg::builder::Init_RuneTarget_header();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__RUNE_TARGET__BUILDER_HPP_
