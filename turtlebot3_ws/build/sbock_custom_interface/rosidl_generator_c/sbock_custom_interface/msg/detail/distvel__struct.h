// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbock_custom_interface:msg/Distvel.idl
// generated code does not contain a copyright notice

#ifndef SBOCK_CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_H_
#define SBOCK_CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Distvel in the package sbock_custom_interface.
typedef struct sbock_custom_interface__msg__Distvel
{
  int64_t distancia;
  double velocidad;
} sbock_custom_interface__msg__Distvel;

// Struct for a sequence of sbock_custom_interface__msg__Distvel.
typedef struct sbock_custom_interface__msg__Distvel__Sequence
{
  sbock_custom_interface__msg__Distvel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbock_custom_interface__msg__Distvel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBOCK_CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_H_
