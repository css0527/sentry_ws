// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auto_aim_interfaces:msg/RuneTarget.idl
// generated code does not contain a copyright notice
#include "auto_aim_interfaces/msg/detail/rune_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pts`
#include "auto_aim_interfaces/msg/detail/point2d__functions.h"

bool
auto_aim_interfaces__msg__RuneTarget__init(auto_aim_interfaces__msg__RuneTarget * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    auto_aim_interfaces__msg__RuneTarget__fini(msg);
    return false;
  }
  // pts
  for (size_t i = 0; i < 5; ++i) {
    if (!auto_aim_interfaces__msg__Point2d__init(&msg->pts[i])) {
      auto_aim_interfaces__msg__RuneTarget__fini(msg);
      return false;
    }
  }
  // is_lost
  // is_big_rune
  return true;
}

void
auto_aim_interfaces__msg__RuneTarget__fini(auto_aim_interfaces__msg__RuneTarget * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pts
  for (size_t i = 0; i < 5; ++i) {
    auto_aim_interfaces__msg__Point2d__fini(&msg->pts[i]);
  }
  // is_lost
  // is_big_rune
}

bool
auto_aim_interfaces__msg__RuneTarget__are_equal(const auto_aim_interfaces__msg__RuneTarget * lhs, const auto_aim_interfaces__msg__RuneTarget * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // pts
  for (size_t i = 0; i < 5; ++i) {
    if (!auto_aim_interfaces__msg__Point2d__are_equal(
        &(lhs->pts[i]), &(rhs->pts[i])))
    {
      return false;
    }
  }
  // is_lost
  if (lhs->is_lost != rhs->is_lost) {
    return false;
  }
  // is_big_rune
  if (lhs->is_big_rune != rhs->is_big_rune) {
    return false;
  }
  return true;
}

bool
auto_aim_interfaces__msg__RuneTarget__copy(
  const auto_aim_interfaces__msg__RuneTarget * input,
  auto_aim_interfaces__msg__RuneTarget * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // pts
  for (size_t i = 0; i < 5; ++i) {
    if (!auto_aim_interfaces__msg__Point2d__copy(
        &(input->pts[i]), &(output->pts[i])))
    {
      return false;
    }
  }
  // is_lost
  output->is_lost = input->is_lost;
  // is_big_rune
  output->is_big_rune = input->is_big_rune;
  return true;
}

auto_aim_interfaces__msg__RuneTarget *
auto_aim_interfaces__msg__RuneTarget__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auto_aim_interfaces__msg__RuneTarget * msg = (auto_aim_interfaces__msg__RuneTarget *)allocator.allocate(sizeof(auto_aim_interfaces__msg__RuneTarget), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auto_aim_interfaces__msg__RuneTarget));
  bool success = auto_aim_interfaces__msg__RuneTarget__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
auto_aim_interfaces__msg__RuneTarget__destroy(auto_aim_interfaces__msg__RuneTarget * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    auto_aim_interfaces__msg__RuneTarget__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
auto_aim_interfaces__msg__RuneTarget__Sequence__init(auto_aim_interfaces__msg__RuneTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auto_aim_interfaces__msg__RuneTarget * data = NULL;

  if (size) {
    data = (auto_aim_interfaces__msg__RuneTarget *)allocator.zero_allocate(size, sizeof(auto_aim_interfaces__msg__RuneTarget), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auto_aim_interfaces__msg__RuneTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auto_aim_interfaces__msg__RuneTarget__fini(&data[i - 1]);
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
auto_aim_interfaces__msg__RuneTarget__Sequence__fini(auto_aim_interfaces__msg__RuneTarget__Sequence * array)
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
      auto_aim_interfaces__msg__RuneTarget__fini(&array->data[i]);
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

auto_aim_interfaces__msg__RuneTarget__Sequence *
auto_aim_interfaces__msg__RuneTarget__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auto_aim_interfaces__msg__RuneTarget__Sequence * array = (auto_aim_interfaces__msg__RuneTarget__Sequence *)allocator.allocate(sizeof(auto_aim_interfaces__msg__RuneTarget__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = auto_aim_interfaces__msg__RuneTarget__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
auto_aim_interfaces__msg__RuneTarget__Sequence__destroy(auto_aim_interfaces__msg__RuneTarget__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    auto_aim_interfaces__msg__RuneTarget__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
auto_aim_interfaces__msg__RuneTarget__Sequence__are_equal(const auto_aim_interfaces__msg__RuneTarget__Sequence * lhs, const auto_aim_interfaces__msg__RuneTarget__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!auto_aim_interfaces__msg__RuneTarget__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
auto_aim_interfaces__msg__RuneTarget__Sequence__copy(
  const auto_aim_interfaces__msg__RuneTarget__Sequence * input,
  auto_aim_interfaces__msg__RuneTarget__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(auto_aim_interfaces__msg__RuneTarget);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    auto_aim_interfaces__msg__RuneTarget * data =
      (auto_aim_interfaces__msg__RuneTarget *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!auto_aim_interfaces__msg__RuneTarget__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          auto_aim_interfaces__msg__RuneTarget__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!auto_aim_interfaces__msg__RuneTarget__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
