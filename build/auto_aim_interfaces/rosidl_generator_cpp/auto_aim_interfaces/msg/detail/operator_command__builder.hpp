// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/OperatorCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__OPERATOR_COMMAND__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__OPERATOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/operator_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_OperatorCommand_is_outpost_attacking
{
public:
  explicit Init_OperatorCommand_is_outpost_attacking(::auto_aim_interfaces::msg::OperatorCommand & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::OperatorCommand is_outpost_attacking(::auto_aim_interfaces::msg::OperatorCommand::_is_outpost_attacking_type arg)
  {
    msg_.is_outpost_attacking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::OperatorCommand msg_;
};

class Init_OperatorCommand_is_drone_avoiding
{
public:
  explicit Init_OperatorCommand_is_drone_avoiding(::auto_aim_interfaces::msg::OperatorCommand & msg)
  : msg_(msg)
  {}
  Init_OperatorCommand_is_outpost_attacking is_drone_avoiding(::auto_aim_interfaces::msg::OperatorCommand::_is_drone_avoiding_type arg)
  {
    msg_.is_drone_avoiding = std::move(arg);
    return Init_OperatorCommand_is_outpost_attacking(msg_);
  }

private:
  ::auto_aim_interfaces::msg::OperatorCommand msg_;
};

class Init_OperatorCommand_is_retreating
{
public:
  Init_OperatorCommand_is_retreating()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperatorCommand_is_drone_avoiding is_retreating(::auto_aim_interfaces::msg::OperatorCommand::_is_retreating_type arg)
  {
    msg_.is_retreating = std::move(arg);
    return Init_OperatorCommand_is_drone_avoiding(msg_);
  }

private:
  ::auto_aim_interfaces::msg::OperatorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::OperatorCommand>()
{
  return auto_aim_interfaces::msg::builder::Init_OperatorCommand_is_retreating();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__OPERATOR_COMMAND__BUILDER_HPP_
