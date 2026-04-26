// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/SentryCmd.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/sentry_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_interfaces__msg__SentryCmd__init(rm_interfaces__msg__SentryCmd * msg)
{
  if (!msg) {
    return false;
  }
  // resurrection_en
  // buy_resurrection_en
  // buy_projectile_allowance
  // buy_projectile_times
  // buy_hp_times
  return true;
}

void
rm_interfaces__msg__SentryCmd__fini(rm_interfaces__msg__SentryCmd * msg)
{
  if (!msg) {
    return;
  }
  // resurrection_en
  // buy_resurrection_en
  // buy_projectile_allowance
  // buy_projectile_times
  // buy_hp_times
}

bool
rm_interfaces__msg__SentryCmd__are_equal(const rm_interfaces__msg__SentryCmd * lhs, const rm_interfaces__msg__SentryCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resurrection_en
  if (lhs->resurrection_en != rhs->resurrection_en) {
    return false;
  }
  // buy_resurrection_en
  if (lhs->buy_resurrection_en != rhs->buy_resurrection_en) {
    return false;
  }
  // buy_projectile_allowance
  if (lhs->buy_projectile_allowance != rhs->buy_projectile_allowance) {
    return false;
  }
  // buy_projectile_times
  if (lhs->buy_projectile_times != rhs->buy_projectile_times) {
    return false;
  }
  // buy_hp_times
  if (lhs->buy_hp_times != rhs->buy_hp_times) {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__SentryCmd__copy(
  const rm_interfaces__msg__SentryCmd * input,
  rm_interfaces__msg__SentryCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // resurrection_en
  output->resurrection_en = input->resurrection_en;
  // buy_resurrection_en
  output->buy_resurrection_en = input->buy_resurrection_en;
  // buy_projectile_allowance
  output->buy_projectile_allowance = input->buy_projectile_allowance;
  // buy_projectile_times
  output->buy_projectile_times = input->buy_projectile_times;
  // buy_hp_times
  output->buy_hp_times = input->buy_hp_times;
  return true;
}

rm_interfaces__msg__SentryCmd *
rm_interfaces__msg__SentryCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__SentryCmd * msg = (rm_interfaces__msg__SentryCmd *)allocator.allocate(sizeof(rm_interfaces__msg__SentryCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__SentryCmd));
  bool success = rm_interfaces__msg__SentryCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__SentryCmd__destroy(rm_interfaces__msg__SentryCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_interfaces__msg__SentryCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_interfaces__msg__SentryCmd__Sequence__init(rm_interfaces__msg__SentryCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__SentryCmd * data = NULL;

  if (size) {
    data = (rm_interfaces__msg__SentryCmd *)allocator.zero_allocate(size, sizeof(rm_interfaces__msg__SentryCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__SentryCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__SentryCmd__fini(&data[i - 1]);
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
rm_interfaces__msg__SentryCmd__Sequence__fini(rm_interfaces__msg__SentryCmd__Sequence * array)
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
      rm_interfaces__msg__SentryCmd__fini(&array->data[i]);
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

rm_interfaces__msg__SentryCmd__Sequence *
rm_interfaces__msg__SentryCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__SentryCmd__Sequence * array = (rm_interfaces__msg__SentryCmd__Sequence *)allocator.allocate(sizeof(rm_interfaces__msg__SentryCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__SentryCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__SentryCmd__Sequence__destroy(rm_interfaces__msg__SentryCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_interfaces__msg__SentryCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_interfaces__msg__SentryCmd__Sequence__are_equal(const rm_interfaces__msg__SentryCmd__Sequence * lhs, const rm_interfaces__msg__SentryCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__SentryCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__SentryCmd__Sequence__copy(
  const rm_interfaces__msg__SentryCmd__Sequence * input,
  rm_interfaces__msg__SentryCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__SentryCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_interfaces__msg__SentryCmd * data =
      (rm_interfaces__msg__SentryCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__SentryCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__SentryCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_interfaces__msg__SentryCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
