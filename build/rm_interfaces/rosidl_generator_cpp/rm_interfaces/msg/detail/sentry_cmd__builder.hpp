// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/SentryCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/sentry_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_SentryCmd_buy_hp_times
{
public:
  explicit Init_SentryCmd_buy_hp_times(::rm_interfaces::msg::SentryCmd & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::SentryCmd buy_hp_times(::rm_interfaces::msg::SentryCmd::_buy_hp_times_type arg)
  {
    msg_.buy_hp_times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::SentryCmd msg_;
};

class Init_SentryCmd_buy_projectile_times
{
public:
  explicit Init_SentryCmd_buy_projectile_times(::rm_interfaces::msg::SentryCmd & msg)
  : msg_(msg)
  {}
  Init_SentryCmd_buy_hp_times buy_projectile_times(::rm_interfaces::msg::SentryCmd::_buy_projectile_times_type arg)
  {
    msg_.buy_projectile_times = std::move(arg);
    return Init_SentryCmd_buy_hp_times(msg_);
  }

private:
  ::rm_interfaces::msg::SentryCmd msg_;
};

class Init_SentryCmd_buy_projectile_allowance
{
public:
  explicit Init_SentryCmd_buy_projectile_allowance(::rm_interfaces::msg::SentryCmd & msg)
  : msg_(msg)
  {}
  Init_SentryCmd_buy_projectile_times buy_projectile_allowance(::rm_interfaces::msg::SentryCmd::_buy_projectile_allowance_type arg)
  {
    msg_.buy_projectile_allowance = std::move(arg);
    return Init_SentryCmd_buy_projectile_times(msg_);
  }

private:
  ::rm_interfaces::msg::SentryCmd msg_;
};

class Init_SentryCmd_buy_resurrection_en
{
public:
  explicit Init_SentryCmd_buy_resurrection_en(::rm_interfaces::msg::SentryCmd & msg)
  : msg_(msg)
  {}
  Init_SentryCmd_buy_projectile_allowance buy_resurrection_en(::rm_interfaces::msg::SentryCmd::_buy_resurrection_en_type arg)
  {
    msg_.buy_resurrection_en = std::move(arg);
    return Init_SentryCmd_buy_projectile_allowance(msg_);
  }

private:
  ::rm_interfaces::msg::SentryCmd msg_;
};

class Init_SentryCmd_resurrection_en
{
public:
  Init_SentryCmd_resurrection_en()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SentryCmd_buy_resurrection_en resurrection_en(::rm_interfaces::msg::SentryCmd::_resurrection_en_type arg)
  {
    msg_.resurrection_en = std::move(arg);
    return Init_SentryCmd_buy_resurrection_en(msg_);
  }

private:
  ::rm_interfaces::msg::SentryCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::SentryCmd>()
{
  return rm_interfaces::msg::builder::Init_SentryCmd_resurrection_en();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__BUILDER_HPP_
