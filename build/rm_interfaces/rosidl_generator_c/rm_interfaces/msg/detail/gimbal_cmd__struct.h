// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/GimbalCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ABSOLUTE_ANGLE'.
/**
  * position control, set position by absolute angle
 */
enum
{
  rm_interfaces__msg__GimbalCmd__ABSOLUTE_ANGLE = 1
};

/// Constant 'RELATIVE_ANGLE'.
/**
  * position control, set position by relative angle
 */
enum
{
  rm_interfaces__msg__GimbalCmd__RELATIVE_ANGLE = 2
};

/// Constant 'VELOCITY'.
/**
  * velocity control, set velocity
 */
enum
{
  rm_interfaces__msg__GimbalCmd__VELOCITY = 3
};

// Include directives for member types
// Member 'position'
// Member 'velocity'
#include "rm_interfaces/msg/detail/gimbal__struct.h"

/// Struct defined in msg/GimbalCmd in the package rm_interfaces.
/**
  * cmd msg for controlling gimbal
  * constants for control type
 */
typedef struct rm_interfaces__msg__GimbalCmd
{
  /// control type
  uint8_t yaw_type;
  uint8_t pitch_type;
  /// control dada
  rm_interfaces__msg__Gimbal position;
  rm_interfaces__msg__Gimbal velocity;
} rm_interfaces__msg__GimbalCmd;

// Struct for a sequence of rm_interfaces__msg__GimbalCmd.
typedef struct rm_interfaces__msg__GimbalCmd__Sequence
{
  rm_interfaces__msg__GimbalCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__GimbalCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__STRUCT_H_
