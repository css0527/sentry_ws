// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/SentryCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SentryCmd in the package rm_interfaces.
typedef struct rm_interfaces__msg__SentryCmd
{
  bool resurrection_en;
  bool buy_resurrection_en;
  uint16_t buy_projectile_allowance;
  uint16_t buy_projectile_times;
  uint16_t buy_hp_times;
} rm_interfaces__msg__SentryCmd;

// Struct for a sequence of rm_interfaces__msg__SentryCmd.
typedef struct rm_interfaces__msg__SentryCmd__Sequence
{
  rm_interfaces__msg__SentryCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__SentryCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__SENTRY_CMD__STRUCT_H_
