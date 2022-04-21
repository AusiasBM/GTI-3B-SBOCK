// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sbock_custom_interface:srv/NavToPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sbock_custom_interface/srv/detail/nav_to_pose__rosidl_typesupport_introspection_c.h"
#include "sbock_custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sbock_custom_interface/srv/detail/nav_to_pose__functions.h"
#include "sbock_custom_interface/srv/detail/nav_to_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sbock_custom_interface__srv__NavToPose_Request__init(message_memory);
}

void NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_fini_function(void * message_memory)
{
  sbock_custom_interface__srv__NavToPose_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_message_member_array[4] = {
  {
    "pos_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbock_custom_interface__srv__NavToPose_Request, pos_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbock_custom_interface__srv__NavToPose_Request, pos_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orien_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbock_custom_interface__srv__NavToPose_Request, orien_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orien_w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbock_custom_interface__srv__NavToPose_Request, orien_w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_message_members = {
  "sbock_custom_interface__srv",  // message namespace
  "NavToPose_Request",  // message name
  4,  // number of fields
  sizeof(sbock_custom_interface__srv__NavToPose_Request),
  NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_message_member_array,  // message members
  NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_message_type_support_handle = {
  0,
  &NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sbock_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbock_custom_interface, srv, NavToPose_Request)() {
  if (!NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_message_type_support_handle.typesupport_identifier) {
    NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavToPose_Request__rosidl_typesupport_introspection_c__NavToPose_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sbock_custom_interface/srv/detail/nav_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sbock_custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sbock_custom_interface/srv/detail/nav_to_pose__functions.h"
// already included above
// #include "sbock_custom_interface/srv/detail/nav_to_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sbock_custom_interface__srv__NavToPose_Response__init(message_memory);
}

void NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_fini_function(void * message_memory)
{
  sbock_custom_interface__srv__NavToPose_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbock_custom_interface__srv__NavToPose_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_message_members = {
  "sbock_custom_interface__srv",  // message namespace
  "NavToPose_Response",  // message name
  1,  // number of fields
  sizeof(sbock_custom_interface__srv__NavToPose_Response),
  NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_message_member_array,  // message members
  NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_message_type_support_handle = {
  0,
  &NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sbock_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbock_custom_interface, srv, NavToPose_Response)() {
  if (!NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_message_type_support_handle.typesupport_identifier) {
    NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavToPose_Response__rosidl_typesupport_introspection_c__NavToPose_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sbock_custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sbock_custom_interface/srv/detail/nav_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sbock_custom_interface__srv__detail__nav_to_pose__rosidl_typesupport_introspection_c__NavToPose_service_members = {
  "sbock_custom_interface__srv",  // service namespace
  "NavToPose",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // sbock_custom_interface__srv__detail__nav_to_pose__rosidl_typesupport_introspection_c__NavToPose_Request_message_type_support_handle,
  NULL  // response message
  // sbock_custom_interface__srv__detail__nav_to_pose__rosidl_typesupport_introspection_c__NavToPose_Response_message_type_support_handle
};

static rosidl_service_type_support_t sbock_custom_interface__srv__detail__nav_to_pose__rosidl_typesupport_introspection_c__NavToPose_service_type_support_handle = {
  0,
  &sbock_custom_interface__srv__detail__nav_to_pose__rosidl_typesupport_introspection_c__NavToPose_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbock_custom_interface, srv, NavToPose_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbock_custom_interface, srv, NavToPose_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sbock_custom_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbock_custom_interface, srv, NavToPose)() {
  if (!sbock_custom_interface__srv__detail__nav_to_pose__rosidl_typesupport_introspection_c__NavToPose_service_type_support_handle.typesupport_identifier) {
    sbock_custom_interface__srv__detail__nav_to_pose__rosidl_typesupport_introspection_c__NavToPose_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sbock_custom_interface__srv__detail__nav_to_pose__rosidl_typesupport_introspection_c__NavToPose_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbock_custom_interface, srv, NavToPose_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbock_custom_interface, srv, NavToPose_Response)()->data;
  }

  return &sbock_custom_interface__srv__detail__nav_to_pose__rosidl_typesupport_introspection_c__NavToPose_service_type_support_handle;
}
