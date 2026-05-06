// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auto_aim_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice
#include "auto_aim_interfaces/msg/detail/judge_system_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `operator_command`
#include "auto_aim_interfaces/msg/detail/operator_command__functions.h"

bool
auto_aim_interfaces__msg__JudgeSystemData__init(auto_aim_interfaces__msg__JudgeSystemData * msg)
{
  if (!msg) {
    return false;
  }
  // game_status
  // remaining_time
  // blood
  // outpost_hp
  // operator_command
  if (!auto_aim_interfaces__msg__OperatorCommand__init(&msg->operator_command)) {
    auto_aim_interfaces__msg__JudgeSystemData__fini(msg);
    return false;
  }
  return true;
}

void
auto_aim_interfaces__msg__JudgeSystemData__fini(auto_aim_interfaces__msg__JudgeSystemData * msg)
{
  if (!msg) {
    return;
  }
  // game_status
  // remaining_time
  // blood
  // outpost_hp
  // operator_command
  auto_aim_interfaces__msg__OperatorCommand__fini(&msg->operator_command);
}

bool
auto_aim_interfaces__msg__JudgeSystemData__are_equal(const auto_aim_interfaces__msg__JudgeSystemData * lhs, const auto_aim_interfaces__msg__JudgeSystemData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // game_status
  if (lhs->game_status != rhs->game_status) {
    return false;
  }
  // remaining_time
  if (lhs->remaining_time != rhs->remaining_time) {
    return false;
  }
  // blood
  if (lhs->blood != rhs->blood) {
    return false;
  }
  // outpost_hp
  if (lhs->outpost_hp != rhs->outpost_hp) {
    return false;
  }
  // operator_command
  if (!auto_aim_interfaces__msg__OperatorCommand__are_equal(
      &(lhs->operator_command), &(rhs->operator_command)))
  {
    return false;
  }
  return true;
}

bool
auto_aim_interfaces__msg__JudgeSystemData__copy(
  const auto_aim_interfaces__msg__JudgeSystemData * input,
  auto_aim_interfaces__msg__JudgeSystemData * output)
{
  if (!input || !output) {
    return false;
  }
  // game_status
  output->game_status = input->game_status;
  // remaining_time
  output->remaining_time = input->remaining_time;
  // blood
  output->blood = input->blood;
  // outpost_hp
  output->outpost_hp = input->outpost_hp;
  // operator_command
  if (!auto_aim_interfaces__msg__OperatorCommand__copy(
      &(input->operator_command), &(output->operator_command)))
  {
    return false;
  }
  return true;
}

auto_aim_interfaces__msg__JudgeSystemData *
auto_aim_interfaces__msg__JudgeSystemData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auto_aim_interfaces__msg__JudgeSystemData * msg = (auto_aim_interfaces__msg__JudgeSystemData *)allocator.allocate(sizeof(auto_aim_interfaces__msg__JudgeSystemData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auto_aim_interfaces__msg__JudgeSystemData));
  bool success = auto_aim_interfaces__msg__JudgeSystemData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
auto_aim_interfaces__msg__JudgeSystemData__destroy(auto_aim_interfaces__msg__JudgeSystemData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    auto_aim_interfaces__msg__JudgeSystemData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
auto_aim_interfaces__msg__JudgeSystemData__Sequence__init(auto_aim_interfaces__msg__JudgeSystemData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auto_aim_interfaces__msg__JudgeSystemData * data = NULL;

  if (size) {
    data = (auto_aim_interfaces__msg__JudgeSystemData *)allocator.zero_allocate(size, sizeof(auto_aim_interfaces__msg__JudgeSystemData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auto_aim_interfaces__msg__JudgeSystemData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auto_aim_interfaces__msg__JudgeSystemData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
auto_aim_interfaces__msg__JudgeSystemData__Sequence__fini(auto_aim_interfaces__msg__JudgeSystemData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      auto_aim_interfaces__msg__JudgeSystemData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

auto_aim_interfaces__msg__JudgeSystemData__Sequence *
auto_aim_interfaces__msg__JudgeSystemData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auto_aim_interfaces__msg__JudgeSystemData__Sequence * array = (auto_aim_interfaces__msg__JudgeSystemData__Sequence *)allocator.allocate(sizeof(auto_aim_interfaces__msg__JudgeSystemData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = auto_aim_interfaces__msg__JudgeSystemData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
auto_aim_interfaces__msg__JudgeSystemData__Sequence__destroy(auto_aim_interfaces__msg__JudgeSystemData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    auto_aim_interfaces__msg__JudgeSystemData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
auto_aim_interfaces__msg__JudgeSystemData__Sequence__are_equal(const auto_aim_interfaces__msg__JudgeSystemData__Sequence * lhs, const auto_aim_interfaces__msg__JudgeSystemData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!auto_aim_interfaces__msg__JudgeSystemData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
auto_aim_interfaces__msg__JudgeSystemData__Sequence__copy(
  const auto_aim_interfaces__msg__JudgeSystemData__Sequence * input,
  auto_aim_interfaces__msg__JudgeSystemData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(auto_aim_interfaces__msg__JudgeSystemData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    auto_aim_interfaces__msg__JudgeSystemData * data =
      (auto_aim_interfaces__msg__JudgeSystemData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!auto_aim_interfaces__msg__JudgeSystemData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          auto_aim_interfaces__msg__JudgeSystemData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!auto_aim_interfaces__msg__JudgeSystemData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
