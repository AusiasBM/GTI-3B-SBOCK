// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sbock_custom_interface:srv/NavToPose.idl
// generated code does not contain a copyright notice
#include "sbock_custom_interface/srv/detail/nav_to_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sbock_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sbock_custom_interface/srv/detail/nav_to_pose__struct.h"
#include "sbock_custom_interface/srv/detail/nav_to_pose__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _NavToPose_Request__ros_msg_type = sbock_custom_interface__srv__NavToPose_Request;

static bool _NavToPose_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavToPose_Request__ros_msg_type * ros_message = static_cast<const _NavToPose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_x
  {
    cdr << ros_message->pos_x;
  }

  // Field name: pos_y
  {
    cdr << ros_message->pos_y;
  }

  // Field name: orien_z
  {
    cdr << ros_message->orien_z;
  }

  // Field name: orien_w
  {
    cdr << ros_message->orien_w;
  }

  return true;
}

static bool _NavToPose_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavToPose_Request__ros_msg_type * ros_message = static_cast<_NavToPose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_x
  {
    cdr >> ros_message->pos_x;
  }

  // Field name: pos_y
  {
    cdr >> ros_message->pos_y;
  }

  // Field name: orien_z
  {
    cdr >> ros_message->orien_z;
  }

  // Field name: orien_w
  {
    cdr >> ros_message->orien_w;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbock_custom_interface
size_t get_serialized_size_sbock_custom_interface__srv__NavToPose_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavToPose_Request__ros_msg_type * ros_message = static_cast<const _NavToPose_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pos_x
  {
    size_t item_size = sizeof(ros_message->pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_y
  {
    size_t item_size = sizeof(ros_message->pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orien_z
  {
    size_t item_size = sizeof(ros_message->orien_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orien_w
  {
    size_t item_size = sizeof(ros_message->orien_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavToPose_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sbock_custom_interface__srv__NavToPose_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbock_custom_interface
size_t max_serialized_size_sbock_custom_interface__srv__NavToPose_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: orien_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: orien_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NavToPose_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_sbock_custom_interface__srv__NavToPose_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavToPose_Request = {
  "sbock_custom_interface::srv",
  "NavToPose_Request",
  _NavToPose_Request__cdr_serialize,
  _NavToPose_Request__cdr_deserialize,
  _NavToPose_Request__get_serialized_size,
  _NavToPose_Request__max_serialized_size
};

static rosidl_message_type_support_t _NavToPose_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavToPose_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbock_custom_interface, srv, NavToPose_Request)() {
  return &_NavToPose_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "sbock_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "sbock_custom_interface/srv/detail/nav_to_pose__struct.h"
// already included above
// #include "sbock_custom_interface/srv/detail/nav_to_pose__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _NavToPose_Response__ros_msg_type = sbock_custom_interface__srv__NavToPose_Response;

static bool _NavToPose_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavToPose_Response__ros_msg_type * ros_message = static_cast<const _NavToPose_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _NavToPose_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavToPose_Response__ros_msg_type * ros_message = static_cast<_NavToPose_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbock_custom_interface
size_t get_serialized_size_sbock_custom_interface__srv__NavToPose_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavToPose_Response__ros_msg_type * ros_message = static_cast<const _NavToPose_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavToPose_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sbock_custom_interface__srv__NavToPose_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbock_custom_interface
size_t max_serialized_size_sbock_custom_interface__srv__NavToPose_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NavToPose_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_sbock_custom_interface__srv__NavToPose_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavToPose_Response = {
  "sbock_custom_interface::srv",
  "NavToPose_Response",
  _NavToPose_Response__cdr_serialize,
  _NavToPose_Response__cdr_deserialize,
  _NavToPose_Response__get_serialized_size,
  _NavToPose_Response__max_serialized_size
};

static rosidl_message_type_support_t _NavToPose_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavToPose_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbock_custom_interface, srv, NavToPose_Response)() {
  return &_NavToPose_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "sbock_custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sbock_custom_interface/srv/nav_to_pose.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NavToPose__callbacks = {
  "sbock_custom_interface::srv",
  "NavToPose",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbock_custom_interface, srv, NavToPose_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbock_custom_interface, srv, NavToPose_Response)(),
};

static rosidl_service_type_support_t NavToPose__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &NavToPose__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbock_custom_interface, srv, NavToPose)() {
  return &NavToPose__handle;
}

#if defined(__cplusplus)
}
#endif
