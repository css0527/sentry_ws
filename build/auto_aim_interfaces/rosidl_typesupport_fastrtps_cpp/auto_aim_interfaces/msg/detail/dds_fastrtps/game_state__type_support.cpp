// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from auto_aim_interfaces:msg/GameState.idl
// generated code does not contain a copyright notice
#include "auto_aim_interfaces/msg/detail/game_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "auto_aim_interfaces/msg/detail/game_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace auto_aim_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_auto_aim_interfaces
cdr_serialize(
  const auto_aim_interfaces::msg::GameState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: current_hp
  cdr << ros_message.current_hp;
  // Member: game_progress
  cdr << ros_message.game_progress;
  // Member: stage_remain_time
  cdr << ros_message.stage_remain_time;
  // Member: armor_id
  cdr << ros_message.armor_id;
  // Member: hurt_type
  cdr << ros_message.hurt_type;
  // Member: my_outpost_hp
  cdr << ros_message.my_outpost_hp;
  // Member: enemy_outpost_hp
  cdr << ros_message.enemy_outpost_hp;
  // Member: my_base_hp
  cdr << ros_message.my_base_hp;
  // Member: enemy_base_hp
  cdr << ros_message.enemy_base_hp;
  // Member: projectile_allowance_17mm
  cdr << ros_message.projectile_allowance_17mm;
  // Member: enemy_outpost_occupied
  cdr << ros_message.enemy_outpost_occupied;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_auto_aim_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  auto_aim_interfaces::msg::GameState & ros_message)
{
  // Member: current_hp
  cdr >> ros_message.current_hp;

  // Member: game_progress
  cdr >> ros_message.game_progress;

  // Member: stage_remain_time
  cdr >> ros_message.stage_remain_time;

  // Member: armor_id
  cdr >> ros_message.armor_id;

  // Member: hurt_type
  cdr >> ros_message.hurt_type;

  // Member: my_outpost_hp
  cdr >> ros_message.my_outpost_hp;

  // Member: enemy_outpost_hp
  cdr >> ros_message.enemy_outpost_hp;

  // Member: my_base_hp
  cdr >> ros_message.my_base_hp;

  // Member: enemy_base_hp
  cdr >> ros_message.enemy_base_hp;

  // Member: projectile_allowance_17mm
  cdr >> ros_message.projectile_allowance_17mm;

  // Member: enemy_outpost_occupied
  cdr >> ros_message.enemy_outpost_occupied;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_auto_aim_interfaces
get_serialized_size(
  const auto_aim_interfaces::msg::GameState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: current_hp
  {
    size_t item_size = sizeof(ros_message.current_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: game_progress
  {
    size_t item_size = sizeof(ros_message.game_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stage_remain_time
  {
    size_t item_size = sizeof(ros_message.stage_remain_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: armor_id
  {
    size_t item_size = sizeof(ros_message.armor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hurt_type
  {
    size_t item_size = sizeof(ros_message.hurt_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: my_outpost_hp
  {
    size_t item_size = sizeof(ros_message.my_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_outpost_hp
  {
    size_t item_size = sizeof(ros_message.enemy_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: my_base_hp
  {
    size_t item_size = sizeof(ros_message.my_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_base_hp
  {
    size_t item_size = sizeof(ros_message.enemy_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: projectile_allowance_17mm
  {
    size_t item_size = sizeof(ros_message.projectile_allowance_17mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_outpost_occupied
  {
    size_t item_size = sizeof(ros_message.enemy_outpost_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_auto_aim_interfaces
max_serialized_size_GameState(
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


  // Member: current_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: game_progress
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stage_remain_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: armor_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hurt_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: my_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: enemy_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: my_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: enemy_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: projectile_allowance_17mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: enemy_outpost_occupied
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
    using DataType = auto_aim_interfaces::msg::GameState;
    is_plain =
      (
      offsetof(DataType, enemy_outpost_occupied) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GameState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const auto_aim_interfaces::msg::GameState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GameState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<auto_aim_interfaces::msg::GameState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GameState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const auto_aim_interfaces::msg::GameState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GameState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GameState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GameState__callbacks = {
  "auto_aim_interfaces::msg",
  "GameState",
  _GameState__cdr_serialize,
  _GameState__cdr_deserialize,
  _GameState__get_serialized_size,
  _GameState__max_serialized_size
};

static rosidl_message_type_support_t _GameState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GameState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace auto_aim_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_auto_aim_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<auto_aim_interfaces::msg::GameState>()
{
  return &auto_aim_interfaces::msg::typesupport_fastrtps_cpp::_GameState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, auto_aim_interfaces, msg, GameState)() {
  return &auto_aim_interfaces::msg::typesupport_fastrtps_cpp::_GameState__handle;
}

#ifdef __cplusplus
}
#endif
