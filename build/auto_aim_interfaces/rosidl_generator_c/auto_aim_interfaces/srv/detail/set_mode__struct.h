// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auto_aim_interfaces:srv/SetMode.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__SRV__DETAIL__SET_MODE__STRUCT_H_
#define AUTO_AIM_INTERFACES__SRV__DETAIL__SET_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetMode in the package auto_aim_interfaces.
typedef struct auto_aim_interfaces__srv__SetMode_Request
{
  /// 0:自瞄红 1:自瞄蓝 2:小符红 3:小符蓝 4：大符红 5：大符蓝
  uint8_t mode;
} auto_aim_interfaces__srv__SetMode_Request;

// Struct for a sequence of auto_aim_interfaces__srv__SetMode_Request.
typedef struct auto_aim_interfaces__srv__SetMode_Request__Sequence
{
  auto_aim_interfaces__srv__SetMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auto_aim_interfaces__srv__SetMode_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetMode in the package auto_aim_interfaces.
typedef struct auto_aim_interfaces__srv__SetMode_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} auto_aim_interfaces__srv__SetMode_Response;

// Struct for a sequence of auto_aim_interfaces__srv__SetMode_Response.
typedef struct auto_aim_interfaces__srv__SetMode_Response__Sequence
{
  auto_aim_interfaces__srv__SetMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auto_aim_interfaces__srv__SetMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTO_AIM_INTERFACES__SRV__DETAIL__SET_MODE__STRUCT_H_
