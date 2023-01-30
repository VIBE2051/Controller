// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_interface:msg/Control.idl
// generated code does not contain a copyright notice
#include "controller_interface/msg/detail/control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
controller_interface__msg__Control__init(controller_interface__msg__Control * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // a_button
  // b_button
  // bumper_right
  return true;
}

void
controller_interface__msg__Control__fini(controller_interface__msg__Control * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // a_button
  // b_button
  // bumper_right
}

bool
controller_interface__msg__Control__are_equal(const controller_interface__msg__Control * lhs, const controller_interface__msg__Control * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // a_button
  if (lhs->a_button != rhs->a_button) {
    return false;
  }
  // b_button
  if (lhs->b_button != rhs->b_button) {
    return false;
  }
  // bumper_right
  if (lhs->bumper_right != rhs->bumper_right) {
    return false;
  }
  return true;
}

bool
controller_interface__msg__Control__copy(
  const controller_interface__msg__Control * input,
  controller_interface__msg__Control * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // a_button
  output->a_button = input->a_button;
  // b_button
  output->b_button = input->b_button;
  // bumper_right
  output->bumper_right = input->bumper_right;
  return true;
}

controller_interface__msg__Control *
controller_interface__msg__Control__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interface__msg__Control * msg = (controller_interface__msg__Control *)allocator.allocate(sizeof(controller_interface__msg__Control), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interface__msg__Control));
  bool success = controller_interface__msg__Control__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_interface__msg__Control__destroy(controller_interface__msg__Control * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_interface__msg__Control__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_interface__msg__Control__Sequence__init(controller_interface__msg__Control__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interface__msg__Control * data = NULL;

  if (size) {
    data = (controller_interface__msg__Control *)allocator.zero_allocate(size, sizeof(controller_interface__msg__Control), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interface__msg__Control__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interface__msg__Control__fini(&data[i - 1]);
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
controller_interface__msg__Control__Sequence__fini(controller_interface__msg__Control__Sequence * array)
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
      controller_interface__msg__Control__fini(&array->data[i]);
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

controller_interface__msg__Control__Sequence *
controller_interface__msg__Control__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interface__msg__Control__Sequence * array = (controller_interface__msg__Control__Sequence *)allocator.allocate(sizeof(controller_interface__msg__Control__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_interface__msg__Control__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_interface__msg__Control__Sequence__destroy(controller_interface__msg__Control__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_interface__msg__Control__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_interface__msg__Control__Sequence__are_equal(const controller_interface__msg__Control__Sequence * lhs, const controller_interface__msg__Control__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interface__msg__Control__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interface__msg__Control__Sequence__copy(
  const controller_interface__msg__Control__Sequence * input,
  controller_interface__msg__Control__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interface__msg__Control);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_interface__msg__Control * data =
      (controller_interface__msg__Control *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interface__msg__Control__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_interface__msg__Control__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interface__msg__Control__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
