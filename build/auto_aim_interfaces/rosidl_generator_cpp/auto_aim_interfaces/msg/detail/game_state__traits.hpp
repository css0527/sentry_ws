// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auto_aim_interfaces:msg/GameState.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__GAME_STATE__TRAITS_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__GAME_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "auto_aim_interfaces/msg/detail/game_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace auto_aim_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameState & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_hp
  {
    out << "current_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.current_hp, out);
    out << ", ";
  }

  // member: game_progress
  {
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << ", ";
  }

  // member: stage_remain_time
  {
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << ", ";
  }

  // member: armor_id
  {
    out << "armor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.armor_id, out);
    out << ", ";
  }

  // member: hurt_type
  {
    out << "hurt_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hurt_type, out);
    out << ", ";
  }

  // member: my_outpost_hp
  {
    out << "my_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.my_outpost_hp, out);
    out << ", ";
  }

  // member: enemy_outpost_hp
  {
    out << "enemy_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_outpost_hp, out);
    out << ", ";
  }

  // member: my_base_hp
  {
    out << "my_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.my_base_hp, out);
    out << ", ";
  }

  // member: enemy_base_hp
  {
    out << "enemy_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_base_hp, out);
    out << ", ";
  }

  // member: projectile_allowance_17mm
  {
    out << "projectile_allowance_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.projectile_allowance_17mm, out);
    out << ", ";
  }

  // member: enemy_outpost_occupied
  {
    out << "enemy_outpost_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_outpost_occupied, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.current_hp, out);
    out << "\n";
  }

  // member: game_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << "\n";
  }

  // member: stage_remain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << "\n";
  }

  // member: armor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.armor_id, out);
    out << "\n";
  }

  // member: hurt_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hurt_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hurt_type, out);
    out << "\n";
  }

  // member: my_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.my_outpost_hp, out);
    out << "\n";
  }

  // member: enemy_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_outpost_hp, out);
    out << "\n";
  }

  // member: my_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.my_base_hp, out);
    out << "\n";
  }

  // member: enemy_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_base_hp, out);
    out << "\n";
  }

  // member: projectile_allowance_17mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "projectile_allowance_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.projectile_allowance_17mm, out);
    out << "\n";
  }

  // member: enemy_outpost_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_outpost_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_outpost_occupied, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameState & msg, bool use_flow_style = false)
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
  const auto_aim_interfaces::msg::GameState & msg,
  std::ostream & out, size_t indentation = 0)
{
  auto_aim_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use auto_aim_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const auto_aim_interfaces::msg::GameState & msg)
{
  return auto_aim_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<auto_aim_interfaces::msg::GameState>()
{
  return "auto_aim_interfaces::msg::GameState";
}

template<>
inline const char * name<auto_aim_interfaces::msg::GameState>()
{
  return "auto_aim_interfaces/msg/GameState";
}

template<>
struct has_fixed_size<auto_aim_interfaces::msg::GameState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<auto_aim_interfaces::msg::GameState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<auto_aim_interfaces::msg::GameState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__GAME_STATE__TRAITS_HPP_
