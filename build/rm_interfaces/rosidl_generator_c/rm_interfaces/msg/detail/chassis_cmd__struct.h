// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__CHASSIS_CMD__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__CHASSIS_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VELOCITY'.
/**
  * velocity control, (vx,vy,w) in chassis frame.
 */
enum
{
  rm_interfaces__msg__ChassisCmd__VELOCITY = 1
};

/// Constant 'FOLLOW_GIMBAL'.
/**
  * no spin
  * (vx,vy) in gimbal's yaw frame.
 */
enum
{
  rm_interfaces__msg__ChassisCmd__FOLLOW_GIMBAL = 2
};

/// Constant 'SWING'.
/**
  * velocity control, swing around gimbal's yaw automatically,
  * (vx,vy) in gimbal's yaw frame.
 */
enum
{
  rm_interfaces__msg__ChassisCmd__SWING = 3
};

/// Constant 'SPIN'.
/**
  * spin
  * (vx,vy) in gimbal's yaw frame.
 */
enum
{
  rm_interfaces__msg__ChassisCmd__SPIN = 4
};

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/ChassisCmd in the package rm_interfaces.
/**
  * cmd msg for controlling chassis
  * constants for control type
 */
typedef struct rm_interfaces__msg__ChassisCmd
{
  /// control type
  uint8_t type;
  /// control data
  geometry_msgs__msg__Twist twist;
} rm_interfaces__msg__ChassisCmd;

// Struct for a sequence of rm_interfaces__msg__ChassisCmd.
typedef struct rm_interfaces__msg__ChassisCmd__Sequence
{
  rm_interfaces__msg__ChassisCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__ChassisCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__CHASSIS_CMD__STRUCT_H_
