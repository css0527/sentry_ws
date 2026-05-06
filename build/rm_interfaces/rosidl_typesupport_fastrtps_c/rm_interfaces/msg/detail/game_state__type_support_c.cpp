// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_interfaces:msg/GameState.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/game_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_interfaces/msg/detail/game_state__struct.h"
#include "rm_interfaces/msg/detail/game_state__functions.h"
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


using _GameState__ros_msg_type = rm_interfaces__msg__GameState;

static bool _GameState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GameState__ros_msg_type * ros_message = static_cast<const _GameState__ros_msg_type *>(untyped_ros_message);
  // Field name: current_hp
  {
    cdr << ros_message->current_hp;
  }

  // Field name: game_progress
  {
    cdr << ros_message->game_progress;
  }

  // Field name: stage_remain_time
  {
    cdr << ros_message->stage_remain_time;
  }

  // Field name: armor_id
  {
    cdr << ros_message->armor_id;
  }

  // Field name: hurt_type
  {
    cdr << ros_message->hurt_type;
  }

  // Field name: my_outpost_hp
  {
    cdr << ros_message->my_outpost_hp;
  }

  // Field name: enemy_outpost_hp
  {
    cdr << ros_message->enemy_outpost_hp;
  }

  // Field name: my_base_hp
  {
    cdr << ros_message->my_base_hp;
  }

  // Field name: enemy_base_hp
  {
    cdr << ros_message->enemy_base_hp;
  }

  // Field name: projectile_allowance_17mm
  {
    cdr << ros_message->projectile_allowance_17mm;
  }

  // Field name: enemy_outpost_occupied
  {
    cdr << ros_message->enemy_outpost_occupied;
  }

  return true;
}

static bool _GameState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GameState__ros_msg_type * ros_message = static_cast<_GameState__ros_msg_type *>(untyped_ros_message);
  // Field name: current_hp
  {
    cdr >> ros_message->current_hp;
  }

  // Field name: game_progress
  {
    cdr >> ros_message->game_progress;
  }

  // Field name: stage_remain_time
  {
    cdr >> ros_message->stage_remain_time;
  }

  // Field name: armor_id
  {
    cdr >> ros_message->armor_id;
  }

  // Field name: hurt_type
  {
    cdr >> ros_message->hurt_type;
  }

  // Field name: my_outpost_hp
  {
    cdr >> ros_message->my_outpost_hp;
  }

  // Field name: enemy_outpost_hp
  {
    cdr >> ros_message->enemy_outpost_hp;
  }

  // Field name: my_base_hp
  {
    cdr >> ros_message->my_base_hp;
  }

  // Field name: enemy_base_hp
  {
    cdr >> ros_message->enemy_base_hp;
  }

  // Field name: projectile_allowance_17mm
  {
    cdr >> ros_message->projectile_allowance_17mm;
  }

  // Field name: enemy_outpost_occupied
  {
    cdr >> ros_message->enemy_outpost_occupied;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t get_serialized_size_rm_interfaces__msg__GameState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GameState__ros_msg_type * ros_message = static_cast<const _GameState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_hp
  {
    size_t item_size = sizeof(ros_message->current_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name game_progress
  {
    size_t item_size = sizeof(ros_message->game_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stage_remain_time
  {
    size_t item_size = sizeof(ros_message->stage_remain_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name armor_id
  {
    size_t item_size = sizeof(ros_message->armor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hurt_type
  {
    size_t item_size = sizeof(ros_message->hurt_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name my_outpost_hp
  {
    size_t item_size = sizeof(ros_message->my_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_outpost_hp
  {
    size_t item_size = sizeof(ros_message->enemy_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name my_base_hp
  {
    size_t item_size = sizeof(ros_message->my_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_base_hp
  {
    size_t item_size = sizeof(ros_message->enemy_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name projectile_allowance_17mm
  {
    size_t item_size = sizeof(ros_message->projectile_allowance_17mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_outpost_occupied
  {
    size_t item_size = sizeof(ros_message->enemy_outpost_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GameState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_interfaces__msg__GameState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t max_serialized_size_rm_interfaces__msg__GameState(
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

  // member: current_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: game_progress
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stage_remain_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: armor_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hurt_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: my_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: enemy_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: my_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: enemy_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: projectile_allowance_17mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: enemy_outpost_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_interfaces__msg__GameState;
    is_plain =
      (
      offsetof(DataType, enemy_outpost_occupied) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GameState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_interfaces__msg__GameState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GameState = {
  "rm_interfaces::msg",
  "GameState",
  _GameState__cdr_serialize,
  _GameState__cdr_deserialize,
  _GameState__get_serialized_size,
  _GameState__max_serialized_size
};

static rosidl_message_type_support_t _GameState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GameState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_interfaces, msg, GameState)() {
  return &_GameState__type_support;
}

#if defined(__cplusplus)
}
#endif
