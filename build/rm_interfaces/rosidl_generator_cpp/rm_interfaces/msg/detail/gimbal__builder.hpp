// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/Gimbal.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__GIMBAL__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__GIMBAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/gimbal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Gimbal_pitch
{
public:
  explicit Init_Gimbal_pitch(::rm_interfaces::msg::Gimbal & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::Gimbal pitch(::rm_interfaces::msg::Gimbal::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::Gimbal msg_;
};

class Init_Gimbal_yaw
{
public:
  Init_Gimbal_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gimbal_pitch yaw(::rm_interfaces::msg::Gimbal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Gimbal_pitch(msg_);
  }

private:
  ::rm_interfaces::msg::Gimbal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::Gimbal>()
{
  return rm_interfaces::msg::builder::Init_Gimbal_yaw();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__GIMBAL__BUILDER_HPP_
