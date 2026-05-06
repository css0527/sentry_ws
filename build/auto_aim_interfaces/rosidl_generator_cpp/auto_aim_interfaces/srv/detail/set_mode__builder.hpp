// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:srv/SetMode.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__SRV__DETAIL__SET_MODE__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__SRV__DETAIL__SET_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/srv/detail/set_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMode_Request_mode
{
public:
  Init_SetMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::auto_aim_interfaces::srv::SetMode_Request mode(::auto_aim_interfaces::srv::SetMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::srv::SetMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::srv::SetMode_Request>()
{
  return auto_aim_interfaces::srv::builder::Init_SetMode_Request_mode();
}

}  // namespace auto_aim_interfaces


namespace auto_aim_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMode_Response_message
{
public:
  explicit Init_SetMode_Response_message(::auto_aim_interfaces::srv::SetMode_Response & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::srv::SetMode_Response message(::auto_aim_interfaces::srv::SetMode_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::srv::SetMode_Response msg_;
};

class Init_SetMode_Response_success
{
public:
  Init_SetMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMode_Response_message success(::auto_aim_interfaces::srv::SetMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetMode_Response_message(msg_);
  }

private:
  ::auto_aim_interfaces::srv::SetMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::srv::SetMode_Response>()
{
  return auto_aim_interfaces::srv::builder::Init_SetMode_Response_success();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__SRV__DETAIL__SET_MODE__BUILDER_HPP_
