// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_interfaces:msg/SentryCmd.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/sentry_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_interfaces/msg/detail/sentry_cmd__struct.h"
#include "rm_interfaces/msg/detail/sentry_cmd__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SentryCmd__ros_msg_type = rm_interfaces__msg__SentryCmd;

static bool _SentryCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SentryCmd__ros_msg_type * ros_message = static_cast<const _SentryCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: resurrection_en
  {
    cdr << (ros_message->resurrection_en ? true : false);
  }

  // Field name: buy_resurrection_en
  {
    cdr << (ros_message->buy_resurrection_en ? true : false);
  }

  // Field name: buy_projectile_allowance
  {
    cdr << ros_message->buy_projectile_allowance;
  }

  // Field name: buy_projectile_times
  {
    cdr << ros_message->buy_projectile_times;
  }

  // Field name: buy_hp_times
  {
    cdr << ros_message->buy_hp_times;
  }

  return true;
}

static bool _SentryCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SentryCmd__ros_msg_type * ros_message = static_cast<_SentryCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: resurrection_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->resurrection_en = tmp ? true : false;
  }

  // Field name: buy_resurrection_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->buy_resurrection_en = tmp ? true : false;
  }

  // Field name: buy_projectile_allowance
  {
    cdr >> ros_message->buy_projectile_allowance;
  }

  // Field name: buy_projectile_times
  {
    cdr >> ros_message->buy_projectile_times;
  }

  // Field name: buy_hp_times
  {
    cdr >> ros_message->buy_hp_times;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t get_serialized_size_rm_interfaces__msg__SentryCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SentryCmd__ros_msg_type * ros_message = static_cast<const _SentryCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name resurrection_en
  {
    size_t item_size = sizeof(ros_message->resurrection_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name buy_resurrection_en
  {
    size_t item_size = sizeof(ros_message->buy_resurrection_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name buy_projectile_allowance
  {
    size_t item_size = sizeof(ros_message->buy_projectile_allowance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name buy_projectile_times
  {
    size_t item_size = sizeof(ros_message->buy_projectile_times);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name buy_hp_times
  {
    size_t item_size = sizeof(ros_message->buy_hp_times);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SentryCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_interfaces__msg__SentryCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t max_serialized_size_rm_interfaces__msg__SentryCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: resurrection_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: buy_resurrection_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: buy_projectile_allowance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: buy_projectile_times
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: buy_hp_times
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_interfaces__msg__SentryCmd;
    is_plain =
      (
      offsetof(DataType, buy_hp_times) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SentryCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_interfaces__msg__SentryCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SentryCmd = {
  "rm_interfaces::msg",
  "SentryCmd",
  _SentryCmd__cdr_serialize,
  _SentryCmd__cdr_deserialize,
  _SentryCmd__get_serialized_size,
  _SentryCmd__max_serialized_size
};

static rosidl_message_type_support_t _SentryCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SentryCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_interfaces, msg, SentryCmd)() {
  return &_SentryCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
