// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auto_aim_interfaces:msg/GameState.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__GAME_STATE__STRUCT_H_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__GAME_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GameState in the package auto_aim_interfaces.
typedef struct auto_aim_interfaces__msg__GameState
{
  uint16_t current_hp;
  uint8_t game_progress;
  uint16_t stage_remain_time;
  uint8_t armor_id;
  uint8_t hurt_type;
  uint16_t my_outpost_hp;
  uint16_t enemy_outpost_hp;
  uint16_t my_base_hp;
  uint16_t enemy_base_hp;
  uint16_t projectile_allowance_17mm;
  uint8_t enemy_outpost_occupied;
} auto_aim_interfaces__msg__GameState;

// Struct for a sequence of auto_aim_interfaces__msg__GameState.
typedef struct auto_aim_interfaces__msg__GameState__Sequence
{
  auto_aim_interfaces__msg__GameState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auto_aim_interfaces__msg__GameState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__GAME_STATE__STRUCT_H_
