// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/GameState.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/game_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_interfaces__msg__GameState__init(rm_interfaces__msg__GameState * msg)
{
  if (!msg) {
    return false;
  }
  // current_hp
  // game_progress
  // stage_remain_time
  // armor_id
  // hurt_type
  // my_outpost_hp
  // enemy_outpost_hp
  // my_base_hp
  // enemy_base_hp
  // projectile_allowance_17mm
  // enemy_outpost_occupied
  return true;
}

void
rm_interfaces__msg__GameState__fini(rm_interfaces__msg__GameState * msg)
{
  if (!msg) {
    return;
  }
  // current_hp
  // game_progress
  // stage_remain_time
  // armor_id
  // hurt_type
  // my_outpost_hp
  // enemy_outpost_hp
  // my_base_hp
  // enemy_base_hp
  // projectile_allowance_17mm
  // enemy_outpost_occupied
}

bool
rm_interfaces__msg__GameState__are_equal(const rm_interfaces__msg__GameState * lhs, const rm_interfaces__msg__GameState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_hp
  if (lhs->current_hp != rhs->current_hp) {
    return false;
  }
  // game_progress
  if (lhs->game_progress != rhs->game_progress) {
    return false;
  }
  // stage_remain_time
  if (lhs->stage_remain_time != rhs->stage_remain_time) {
    return false;
  }
  // armor_id
  if (lhs->armor_id != rhs->armor_id) {
    return false;
  }
  // hurt_type
  if (lhs->hurt_type != rhs->hurt_type) {
    return false;
  }
  // my_outpost_hp
  if (lhs->my_outpost_hp != rhs->my_outpost_hp) {
    return false;
  }
  // enemy_outpost_hp
  if (lhs->enemy_outpost_hp != rhs->enemy_outpost_hp) {
    return false;
  }
  // my_base_hp
  if (lhs->my_base_hp != rhs->my_base_hp) {
    return false;
  }
  // enemy_base_hp
  if (lhs->enemy_base_hp != rhs->enemy_base_hp) {
    return false;
  }
  // projectile_allowance_17mm
  if (lhs->projectile_allowance_17mm != rhs->projectile_allowance_17mm) {
    return false;
  }
  // enemy_outpost_occupied
  if (lhs->enemy_outpost_occupied != rhs->enemy_outpost_occupied) {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__GameState__copy(
  const rm_interfaces__msg__GameState * input,
  rm_interfaces__msg__GameState * output)
{
  if (!input || !output) {
    return false;
  }
  // current_hp
  output->current_hp = input->current_hp;
  // game_progress
  output->game_progress = input->game_progress;
  // stage_remain_time
  output->stage_remain_time = input->stage_remain_time;
  // armor_id
  output->armor_id = input->armor_id;
  // hurt_type
  output->hurt_type = input->hurt_type;
  // my_outpost_hp
  output->my_outpost_hp = input->my_outpost_hp;
  // enemy_outpost_hp
  output->enemy_outpost_hp = input->enemy_outpost_hp;
  // my_base_hp
  output->my_base_hp = input->my_base_hp;
  // enemy_base_hp
  output->enemy_base_hp = input->enemy_base_hp;
  // projectile_allowance_17mm
  output->projectile_allowance_17mm = input->projectile_allowance_17mm;
  // enemy_outpost_occupied
  output->enemy_outpost_occupied = input->enemy_outpost_occupied;
  return true;
}

rm_interfaces__msg__GameState *
rm_interfaces__msg__GameState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__GameState * msg = (rm_interfaces__msg__GameState *)allocator.allocate(sizeof(rm_interfaces__msg__GameState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__GameState));
  bool success = rm_interfaces__msg__GameState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__GameState__destroy(rm_interfaces__msg__GameState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_interfaces__msg__GameState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_interfaces__msg__GameState__Sequence__init(rm_interfaces__msg__GameState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__GameState * data = NULL;

  if (size) {
    data = (rm_interfaces__msg__GameState *)allocator.zero_allocate(size, sizeof(rm_interfaces__msg__GameState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__GameState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__GameState__fini(&data[i - 1]);
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
rm_interfaces__msg__GameState__Sequence__fini(rm_interfaces__msg__GameState__Sequence * array)
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
      rm_interfaces__msg__GameState__fini(&array->data[i]);
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

rm_interfaces__msg__GameState__Sequence *
rm_interfaces__msg__GameState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__GameState__Sequence * array = (rm_interfaces__msg__GameState__Sequence *)allocator.allocate(sizeof(rm_interfaces__msg__GameState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__GameState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__GameState__Sequence__destroy(rm_interfaces__msg__GameState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_interfaces__msg__GameState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_interfaces__msg__GameState__Sequence__are_equal(const rm_interfaces__msg__GameState__Sequence * lhs, const rm_interfaces__msg__GameState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__GameState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__GameState__Sequence__copy(
  const rm_interfaces__msg__GameState__Sequence * input,
  rm_interfaces__msg__GameState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__GameState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_interfaces__msg__GameState * data =
      (rm_interfaces__msg__GameState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__GameState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__GameState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_interfaces__msg__GameState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
