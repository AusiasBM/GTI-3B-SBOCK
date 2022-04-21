// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from sbock_custom_interface:srv/NavToPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sbock_custom_interface/msg/rosidl_typesupport_c__visibility_control.h"
#include "sbock_custom_interface/srv/detail/nav_to_pose__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sbock_custom_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _NavToPose_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToPose_Request_type_support_ids_t;

static const _NavToPose_Request_type_support_ids_t _NavToPose_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavToPose_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToPose_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToPose_Request_type_support_symbol_names_t _NavToPose_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbock_custom_interface, srv, NavToPose_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbock_custom_interface, srv, NavToPose_Request)),
  }
};

typedef struct _NavToPose_Request_type_support_data_t
{
  void * data[2];
} _NavToPose_Request_type_support_data_t;

static _NavToPose_Request_type_support_data_t _NavToPose_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToPose_Request_message_typesupport_map = {
  2,
  "sbock_custom_interface",
  &_NavToPose_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavToPose_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavToPose_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavToPose_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToPose_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sbock_custom_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_sbock_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sbock_custom_interface, srv, NavToPose_Request)() {
  return &::sbock_custom_interface::srv::rosidl_typesupport_c::NavToPose_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sbock_custom_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "sbock_custom_interface/srv/detail/nav_to_pose__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sbock_custom_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _NavToPose_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToPose_Response_type_support_ids_t;

static const _NavToPose_Response_type_support_ids_t _NavToPose_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavToPose_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToPose_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToPose_Response_type_support_symbol_names_t _NavToPose_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbock_custom_interface, srv, NavToPose_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbock_custom_interface, srv, NavToPose_Response)),
  }
};

typedef struct _NavToPose_Response_type_support_data_t
{
  void * data[2];
} _NavToPose_Response_type_support_data_t;

static _NavToPose_Response_type_support_data_t _NavToPose_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToPose_Response_message_typesupport_map = {
  2,
  "sbock_custom_interface",
  &_NavToPose_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavToPose_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavToPose_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavToPose_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToPose_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sbock_custom_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_sbock_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sbock_custom_interface, srv, NavToPose_Response)() {
  return &::sbock_custom_interface::srv::rosidl_typesupport_c::NavToPose_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sbock_custom_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sbock_custom_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _NavToPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToPose_type_support_ids_t;

static const _NavToPose_type_support_ids_t _NavToPose_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavToPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToPose_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToPose_type_support_symbol_names_t _NavToPose_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbock_custom_interface, srv, NavToPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbock_custom_interface, srv, NavToPose)),
  }
};

typedef struct _NavToPose_type_support_data_t
{
  void * data[2];
} _NavToPose_type_support_data_t;

static _NavToPose_type_support_data_t _NavToPose_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToPose_service_typesupport_map = {
  2,
  "sbock_custom_interface",
  &_NavToPose_service_typesupport_ids.typesupport_identifier[0],
  &_NavToPose_service_typesupport_symbol_names.symbol_name[0],
  &_NavToPose_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavToPose_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToPose_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sbock_custom_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_sbock_custom_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, sbock_custom_interface, srv, NavToPose)() {
  return &::sbock_custom_interface::srv::rosidl_typesupport_c::NavToPose_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
