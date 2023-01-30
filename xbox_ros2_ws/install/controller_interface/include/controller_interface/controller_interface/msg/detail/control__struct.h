// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_interface:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__STRUCT_H_
#define CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Control in the package controller_interface.
typedef struct controller_interface__msg__Control
{
  float x;
  float y;
  uint16_t a_button;
  uint16_t b_button;
  uint16_t bumper_right;
} controller_interface__msg__Control;

// Struct for a sequence of controller_interface__msg__Control.
typedef struct controller_interface__msg__Control__Sequence
{
  controller_interface__msg__Control * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interface__msg__Control__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_INTERFACE__MSG__DETAIL__CONTROL__STRUCT_H_
