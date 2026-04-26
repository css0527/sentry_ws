// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/ShootCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOP'.
/**
  * stop shooting
 */
enum
{
  rm_interfaces__msg__ShootCmd__STOP = 0
};

/// Constant 'ONCE'.
/**
  * shoot once
 */
enum
{
  rm_interfaces__msg__ShootCmd__ONCE = 1
};

/// Constant 'CONTINUOUS'.
/**
  * shoot continuously
 */
enum
{
  rm_interfaces__msg__ShootCmd__CONTINUOUS = 2
};

/// Struct defined in msg/ShootCmd in the package rm_interfaces.
/**
  * cmd msg for shooter
 */
typedef struct rm_interfaces__msg__ShootCmd
{
  /// ONCE or CONTINUOUS
  uint8_t type;
  /// (optional) number of projectiles to shoot
  uint8_t projectile_num;
} rm_interfaces__msg__ShootCmd;

// Struct for a sequence of rm_interfaces__msg__ShootCmd.
typedef struct rm_interfaces__msg__ShootCmd__Sequence
{
  rm_interfaces__msg__ShootCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__ShootCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_H_
