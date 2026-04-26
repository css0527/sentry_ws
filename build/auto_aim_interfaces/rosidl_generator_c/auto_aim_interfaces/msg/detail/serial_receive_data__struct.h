// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auto_aim_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__STRUCT_H_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'gamestate'
#include "auto_aim_interfaces/msg/detail/game_state__struct.h"

/// Struct defined in msg/SerialReceiveData in the package auto_aim_interfaces.
typedef struct auto_aim_interfaces__msg__SerialReceiveData
{
  std_msgs__msg__Header header;
  uint8_t mode;
  float bullet_speed;
  float roll;
  float yaw;
  float pitch;
  auto_aim_interfaces__msg__GameState gamestate;
} auto_aim_interfaces__msg__SerialReceiveData;

// Struct for a sequence of auto_aim_interfaces__msg__SerialReceiveData.
typedef struct auto_aim_interfaces__msg__SerialReceiveData__Sequence
{
  auto_aim_interfaces__msg__SerialReceiveData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auto_aim_interfaces__msg__SerialReceiveData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__STRUCT_H_
