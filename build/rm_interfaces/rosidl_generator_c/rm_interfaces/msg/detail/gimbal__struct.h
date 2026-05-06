// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/Gimbal.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__GIMBAL__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__GIMBAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Gimbal in the package rm_interfaces.
/**
  * msg for Gimbal, pitch and yaw.
 */
typedef struct rm_interfaces__msg__Gimbal
{
  float yaw;
  float pitch;
} rm_interfaces__msg__Gimbal;

// Struct for a sequence of rm_interfaces__msg__Gimbal.
typedef struct rm_interfaces__msg__Gimbal__Sequence
{
  rm_interfaces__msg__Gimbal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__Gimbal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__GIMBAL__STRUCT_H_
