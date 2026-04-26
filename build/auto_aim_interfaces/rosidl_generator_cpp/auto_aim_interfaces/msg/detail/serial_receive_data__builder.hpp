// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/serial_receive_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_SerialReceiveData_gamestate
{
public:
  explicit Init_SerialReceiveData_gamestate(::auto_aim_interfaces::msg::SerialReceiveData & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::SerialReceiveData gamestate(::auto_aim_interfaces::msg::SerialReceiveData::_gamestate_type arg)
  {
    msg_.gamestate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::SerialReceiveData msg_;
};

class Init_SerialReceiveData_pitch
{
public:
  explicit Init_SerialReceiveData_pitch(::auto_aim_interfaces::msg::SerialReceiveData & msg)
  : msg_(msg)
  {}
  Init_SerialReceiveData_gamestate pitch(::auto_aim_interfaces::msg::SerialReceiveData::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SerialReceiveData_gamestate(msg_);
  }

private:
  ::auto_aim_interfaces::msg::SerialReceiveData msg_;
};

class Init_SerialReceiveData_yaw
{
public:
  explicit Init_SerialReceiveData_yaw(::auto_aim_interfaces::msg::SerialReceiveData & msg)
  : msg_(msg)
  {}
  Init_SerialReceiveData_pitch yaw(::auto_aim_interfaces::msg::SerialReceiveData::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_SerialReceiveData_pitch(msg_);
  }

private:
  ::auto_aim_interfaces::msg::SerialReceiveData msg_;
};

class Init_SerialReceiveData_roll
{
public:
  explicit Init_SerialReceiveData_roll(::auto_aim_interfaces::msg::SerialReceiveData & msg)
  : msg_(msg)
  {}
  Init_SerialReceiveData_yaw roll(::auto_aim_interfaces::msg::SerialReceiveData::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_SerialReceiveData_yaw(msg_);
  }

private:
  ::auto_aim_interfaces::msg::SerialReceiveData msg_;
};

class Init_SerialReceiveData_bullet_speed
{
public:
  explicit Init_SerialReceiveData_bullet_speed(::auto_aim_interfaces::msg::SerialReceiveData & msg)
  : msg_(msg)
  {}
  Init_SerialReceiveData_roll bullet_speed(::auto_aim_interfaces::msg::SerialReceiveData::_bullet_speed_type arg)
  {
    msg_.bullet_speed = std::move(arg);
    return Init_SerialReceiveData_roll(msg_);
  }

private:
  ::auto_aim_interfaces::msg::SerialReceiveData msg_;
};

class Init_SerialReceiveData_mode
{
public:
  explicit Init_SerialReceiveData_mode(::auto_aim_interfaces::msg::SerialReceiveData & msg)
  : msg_(msg)
  {}
  Init_SerialReceiveData_bullet_speed mode(::auto_aim_interfaces::msg::SerialReceiveData::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_SerialReceiveData_bullet_speed(msg_);
  }

private:
  ::auto_aim_interfaces::msg::SerialReceiveData msg_;
};

class Init_SerialReceiveData_header
{
public:
  Init_SerialReceiveData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerialReceiveData_mode header(::auto_aim_interfaces::msg::SerialReceiveData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SerialReceiveData_mode(msg_);
  }

private:
  ::auto_aim_interfaces::msg::SerialReceiveData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::SerialReceiveData>()
{
  return auto_aim_interfaces::msg::builder::Init_SerialReceiveData_header();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__BUILDER_HPP_
