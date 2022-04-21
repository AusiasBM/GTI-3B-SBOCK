// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbock_custom_interface:srv/NavToPose.idl
// generated code does not contain a copyright notice

#ifndef SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__NAV_TO_POSE__STRUCT_H_
#define SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__NAV_TO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/NavToPose in the package sbock_custom_interface.
typedef struct sbock_custom_interface__srv__NavToPose_Request
{
  double pos_x;
  double pos_y;
  double orien_z;
  double orien_w;
} sbock_custom_interface__srv__NavToPose_Request;

// Struct for a sequence of sbock_custom_interface__srv__NavToPose_Request.
typedef struct sbock_custom_interface__srv__NavToPose_Request__Sequence
{
  sbock_custom_interface__srv__NavToPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbock_custom_interface__srv__NavToPose_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/NavToPose in the package sbock_custom_interface.
typedef struct sbock_custom_interface__srv__NavToPose_Response
{
  bool success;
} sbock_custom_interface__srv__NavToPose_Response;

// Struct for a sequence of sbock_custom_interface__srv__NavToPose_Response.
typedef struct sbock_custom_interface__srv__NavToPose_Response__Sequence
{
  sbock_custom_interface__srv__NavToPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbock_custom_interface__srv__NavToPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__NAV_TO_POSE__STRUCT_H_
