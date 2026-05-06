// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/ShootCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/shoot_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ShootCmd_projectile_num
{
public:
  explicit Init_ShootCmd_projectile_num(::rm_interfaces::msg::ShootCmd & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::ShootCmd projectile_num(::rm_interfaces::msg::ShootCmd::_projectile_num_type arg)
  {
    msg_.projectile_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::ShootCmd msg_;
};

class Init_ShootCmd_type
{
public:
  Init_ShootCmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShootCmd_projectile_num type(::rm_interfaces::msg::ShootCmd::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ShootCmd_projectile_num(msg_);
  }

private:
  ::rm_interfaces::msg::ShootCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::ShootCmd>()
{
  return rm_interfaces::msg::builder::Init_ShootCmd_type();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__BUILDER_HPP_
