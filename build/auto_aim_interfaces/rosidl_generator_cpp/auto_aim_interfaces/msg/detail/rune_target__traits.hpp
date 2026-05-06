// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auto_aim_interfaces:msg/RuneTarget.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__RUNE_TARGET__TRAITS_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__RUNE_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "auto_aim_interfaces/msg/detail/rune_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pts'
#include "auto_aim_interfaces/msg/detail/point2d__traits.hpp"

namespace auto_aim_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RuneTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pts
  {
    if (msg.pts.size() == 0) {
      out << "pts: []";
    } else {
      out << "pts: [";
      size_t pending_items = msg.pts.size();
      for (auto item : msg.pts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_lost
  {
    out << "is_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.is_lost, out);
    out << ", ";
  }

  // member: is_big_rune
  {
    out << "is_big_rune: ";
    rosidl_generator_traits::value_to_yaml(msg.is_big_rune, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RuneTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pts.size() == 0) {
      out << "pts: []\n";
    } else {
      out << "pts:\n";
      for (auto item : msg.pts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.is_lost, out);
    out << "\n";
  }

  // member: is_big_rune
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_big_rune: ";
    rosidl_generator_traits::value_to_yaml(msg.is_big_rune, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RuneTarget & msg, bool use_flow_style = false)
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

}  // namespace auto_aim_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use auto_aim_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const auto_aim_interfaces::msg::RuneTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  auto_aim_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use auto_aim_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const auto_aim_interfaces::msg::RuneTarget & msg)
{
  return auto_aim_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<auto_aim_interfaces::msg::RuneTarget>()
{
  return "auto_aim_interfaces::msg::RuneTarget";
}

template<>
inline const char * name<auto_aim_interfaces::msg::RuneTarget>()
{
  return "auto_aim_interfaces/msg/RuneTarget";
}

template<>
struct has_fixed_size<auto_aim_interfaces::msg::RuneTarget>
  : std::integral_constant<bool, has_fixed_size<auto_aim_interfaces::msg::Point2d>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<auto_aim_interfaces::msg::RuneTarget>
  : std::integral_constant<bool, has_bounded_size<auto_aim_interfaces::msg::Point2d>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<auto_aim_interfaces::msg::RuneTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__RUNE_TARGET__TRAITS_HPP_
