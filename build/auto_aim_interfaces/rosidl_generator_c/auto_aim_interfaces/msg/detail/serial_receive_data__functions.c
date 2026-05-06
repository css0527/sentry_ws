// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auto_aim_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice
#include "auto_aim_interfaces/msg/detail/serial_receive_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `gamestate`
#include "auto_aim_interfaces/msg/detail/game_state__functions.h"

bool
auto_aim_interfaces__msg__SerialReceiveData__init(auto_aim_interfaces__msg__SerialReceiveData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    auto_aim_interfaces__msg__SerialReceiveData__fini(msg);
    return false;
  }
  // mode
  // bullet_speed
  // roll
  // yaw
  // pitch
  // gamestate
  if (!auto_aim_interfaces__msg__GameState__init(&msg->gamestate)) {
    auto_aim_interfaces__msg__SerialReceiveData__fini(msg);
    return false;
  }
  return true;
}

void
auto_aim_interfaces__msg__SerialReceiveData__fini(auto_aim_interfaces__msg__SerialReceiveData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mode
  // bullet_speed
  // roll
  // yaw
  // pitch
  // gamestate
  auto_aim_interfaces__msg__GameState__fini(&msg->gamestate);
}

bool
auto_aim_interfaces__msg__SerialReceiveData__are_equal(const auto_aim_interfaces__msg__SerialReceiveData * lhs, const auto_aim_interfaces__msg__SerialReceiveData * rhs)
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
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // bullet_speed
  if (lhs->bullet_speed != rhs->bullet_speed) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // gamestate
  if (!auto_aim_interfaces__msg__GameState__are_equal(
      &(lhs->gamestate), &(rhs->gamestate)))
  {
    return false;
  }
  return true;
}

bool
auto_aim_interfaces__msg__SerialReceiveData__copy(
  const auto_aim_interfaces__msg__SerialReceiveData * input,
  auto_aim_interfaces__msg__SerialReceiveData * output)
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
  // mode
  output->mode = input->mode;
  // bullet_speed
  output->bullet_speed = input->bullet_speed;
  // roll
  output->roll = input->roll;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // gamestate
  if (!auto_aim_interfaces__msg__GameState__copy(
      &(input->gamestate), &(output->gamestate)))
  {
    return false;
  }
  return true;
}

auto_aim_interfaces__msg__SerialReceiveData *
auto_aim_interfaces__msg__SerialReceiveData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auto_aim_interfaces__msg__SerialReceiveData * msg = (auto_aim_interfaces__msg__SerialReceiveData *)allocator.allocate(sizeof(auto_aim_interfaces__msg__SerialReceiveData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auto_aim_interfaces__msg__SerialReceiveData));
  bool success = auto_aim_interfaces__msg__SerialReceiveData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
auto_aim_interfaces__msg__SerialReceiveData__destroy(auto_aim_interfaces__msg__SerialReceiveData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    auto_aim_interfaces__msg__SerialReceiveData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
auto_aim_interfaces__msg__SerialReceiveData__Sequence__init(auto_aim_interfaces__msg__SerialReceiveData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auto_aim_interfaces__msg__SerialReceiveData * data = NULL;

  if (size) {
    data = (auto_aim_interfaces__msg__SerialReceiveData *)allocator.zero_allocate(size, sizeof(auto_aim_interfaces__msg__SerialReceiveData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auto_aim_interfaces__msg__SerialReceiveData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auto_aim_interfaces__msg__SerialReceiveData__fini(&data[i - 1]);
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
auto_aim_interfaces__msg__SerialReceiveData__Sequence__fini(auto_aim_interfaces__msg__SerialReceiveData__Sequence * array)
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
      auto_aim_interfaces__msg__SerialReceiveData__fini(&array->data[i]);
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

auto_aim_interfaces__msg__SerialReceiveData__Sequence *
auto_aim_interfaces__msg__SerialReceiveData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auto_aim_interfaces__msg__SerialReceiveData__Sequence * array = (auto_aim_interfaces__msg__SerialReceiveData__Sequence *)allocator.allocate(sizeof(auto_aim_interfaces__msg__SerialReceiveData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = auto_aim_interfaces__msg__SerialReceiveData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
auto_aim_interfaces__msg__SerialReceiveData__Sequence__destroy(auto_aim_interfaces__msg__SerialReceiveData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    auto_aim_interfaces__msg__SerialReceiveData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
auto_aim_interfaces__msg__SerialReceiveData__Sequence__are_equal(const auto_aim_interfaces__msg__SerialReceiveData__Sequence * lhs, const auto_aim_interfaces__msg__SerialReceiveData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!auto_aim_interfaces__msg__SerialReceiveData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
auto_aim_interfaces__msg__SerialReceiveData__Sequence__copy(
  const auto_aim_interfaces__msg__SerialReceiveData__Sequence * input,
  auto_aim_interfaces__msg__SerialReceiveData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(auto_aim_interfaces__msg__SerialReceiveData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    auto_aim_interfaces__msg__SerialReceiveData * data =
      (auto_aim_interfaces__msg__SerialReceiveData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!auto_aim_interfaces__msg__SerialReceiveData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          auto_aim_interfaces__msg__SerialReceiveData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!auto_aim_interfaces__msg__SerialReceiveData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
