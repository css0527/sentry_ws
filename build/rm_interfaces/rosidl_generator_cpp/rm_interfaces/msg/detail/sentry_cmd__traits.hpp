// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/SentryCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_interfaces/msg/detail/sentry_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SentryCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: resurrection_en
  {
    out << "resurrection_en: ";
    rosidl_generator_traits::value_to_yaml(msg.resurrection_en, out);
    out << ", ";
  }

  // member: buy_resurrection_en
  {
    out << "buy_resurrection_en: ";
    rosidl_generator_traits::value_to_yaml(msg.buy_resurrection_en, out);
    out << ", ";
  }

  // member: buy_projectile_allowance
  {
    out << "buy_projectile_allowance: ";
    rosidl_generator_traits::value_to_yaml(msg.buy_projectile_allowance, out);
    out << ", ";
  }

  // member: buy_projectile_times
  {
    out << "buy_projectile_times: ";
    rosidl_generator_traits::value_to_yaml(msg.buy_projectile_times, out);
    out << ", ";
  }

  // member: buy_hp_times
  {
    out << "buy_hp_times: ";
    rosidl_generator_traits::value_to_yaml(msg.buy_hp_times, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SentryCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resurrection_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resurrection_en: ";
    rosidl_generator_traits::value_to_yaml(msg.resurrection_en, out);
    out << "\n";
  }

  // member: buy_resurrection_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buy_resurrection_en: ";
    rosidl_generator_traits::value_to_yaml(msg.buy_resurrection_en, out);
    out << "\n";
  }

  // member: buy_projectile_allowance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buy_projectile_allowance: ";
    rosidl_generator_traits::value_to_yaml(msg.buy_projectile_allowance, out);
    out << "\n";
  }

  // member: buy_projectile_times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buy_projectile_times: ";
    rosidl_generator_traits::value_to_yaml(msg.buy_projectile_times, out);
    out << "\n";
  }

  // member: buy_hp_times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buy_hp_times: ";
    rosidl_generator_traits::value_to_yaml(msg.buy_hp_times, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SentryCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::msg::SentryCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::msg::SentryCmd & msg)
{
  return rm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::msg::SentryCmd>()
{
  return "rm_interfaces::msg::SentryCmd";
}

template<>
inline const char * name<rm_interfaces::msg::SentryCmd>()
{
  return "rm_interfaces/msg/SentryCmd";
}

template<>
struct has_fixed_size<rm_interfaces::msg::SentryCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_interfaces::msg::SentryCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_interfaces::msg::SentryCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__TRAITS_HPP_
