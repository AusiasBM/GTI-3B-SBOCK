// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbock_custom_interface:srv/MyMoveMsg.idl
// generated code does not contain a copyright notice

#ifndef SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__MY_MOVE_MSG__STRUCT_H_
#define SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__MY_MOVE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'move'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/MyMoveMsg in the package sbock_custom_interface.
typedef struct sbock_custom_interface__srv__MyMoveMsg_Request
{
  rosidl_runtime_c__String move;
} sbock_custom_interface__srv__MyMoveMsg_Request;

// Struct for a sequence of sbock_custom_interface__srv__MyMoveMsg_Request.
typedef struct sbock_custom_interface__srv__MyMoveMsg_Request__Sequence
{
  sbock_custom_interface__srv__MyMoveMsg_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbock_custom_interface__srv__MyMoveMsg_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MyMoveMsg in the package sbock_custom_interface.
typedef struct sbock_custom_interface__srv__MyMoveMsg_Response
{
  bool success;
} sbock_custom_interface__srv__MyMoveMsg_Response;

// Struct for a sequence of sbock_custom_interface__srv__MyMoveMsg_Response.
typedef struct sbock_custom_interface__srv__MyMoveMsg_Response__Sequence
{
  sbock_custom_interface__srv__MyMoveMsg_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbock_custom_interface__srv__MyMoveMsg_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__MY_MOVE_MSG__STRUCT_H_
