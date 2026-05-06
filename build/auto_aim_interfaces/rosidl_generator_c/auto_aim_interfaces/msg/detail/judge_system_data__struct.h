// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auto_aim_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__STRUCT_H_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'operator_command'
#include "auto_aim_interfaces/msg/detail/operator_command__struct.h"

/// Struct defined in msg/JudgeSystemData in the package auto_aim_interfaces.
typedef struct auto_aim_interfaces__msg__JudgeSystemData
{
  uint8_t game_status;
  int16_t remaining_time;
  int16_t blood;
  int16_t outpost_hp;
  auto_aim_interfaces__msg__OperatorCommand operator_command;
} auto_aim_interfaces__msg__JudgeSystemData;

// Struct for a sequence of auto_aim_interfaces__msg__JudgeSystemData.
typedef struct auto_aim_interfaces__msg__JudgeSystemData__Sequence
{
  auto_aim_interfaces__msg__JudgeSystemData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auto_aim_interfaces__msg__JudgeSystemData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__STRUCT_H_
