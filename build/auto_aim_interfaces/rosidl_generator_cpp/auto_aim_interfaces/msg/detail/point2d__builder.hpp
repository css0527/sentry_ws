// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/Point2d.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__POINT2D__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__POINT2D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/point2d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_Point2d_y
{
public:
  explicit Init_Point2d_y(::auto_aim_interfaces::msg::Point2d & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::Point2d y(::auto_aim_interfaces::msg::Point2d::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Point2d msg_;
};

class Init_Point2d_x
{
public:
  Init_Point2d_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point2d_y x(::auto_aim_interfaces::msg::Point2d::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point2d_y(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Point2d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::Point2d>()
{
  return auto_aim_interfaces::msg::builder::Init_Point2d_x();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__POINT2D__BUILDER_HPP_
