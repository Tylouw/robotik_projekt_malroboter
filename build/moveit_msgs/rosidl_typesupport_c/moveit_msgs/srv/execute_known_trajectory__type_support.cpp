// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/ExecuteKnownTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "moveit_msgs/srv/detail/execute_known_trajectory__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteKnownTrajectory_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteKnownTrajectory_Request_type_support_ids_t;

static const _ExecuteKnownTrajectory_Request_type_support_ids_t _ExecuteKnownTrajectory_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteKnownTrajectory_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteKnownTrajectory_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteKnownTrajectory_Request_type_support_symbol_names_t _ExecuteKnownTrajectory_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ExecuteKnownTrajectory_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ExecuteKnownTrajectory_Request)),
  }
};

typedef struct _ExecuteKnownTrajectory_Request_type_support_data_t
{
  void * data[2];
} _ExecuteKnownTrajectory_Request_type_support_data_t;

static _ExecuteKnownTrajectory_Request_type_support_data_t _ExecuteKnownTrajectory_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteKnownTrajectory_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteKnownTrajectory_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteKnownTrajectory_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteKnownTrajectory_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteKnownTrajectory_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteKnownTrajectory_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, ExecuteKnownTrajectory_Request)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::ExecuteKnownTrajectory_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/execute_known_trajectory__struct.h"
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

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteKnownTrajectory_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteKnownTrajectory_Response_type_support_ids_t;

static const _ExecuteKnownTrajectory_Response_type_support_ids_t _ExecuteKnownTrajectory_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteKnownTrajectory_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteKnownTrajectory_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteKnownTrajectory_Response_type_support_symbol_names_t _ExecuteKnownTrajectory_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ExecuteKnownTrajectory_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ExecuteKnownTrajectory_Response)),
  }
};

typedef struct _ExecuteKnownTrajectory_Response_type_support_data_t
{
  void * data[2];
} _ExecuteKnownTrajectory_Response_type_support_data_t;

static _ExecuteKnownTrajectory_Response_type_support_data_t _ExecuteKnownTrajectory_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteKnownTrajectory_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteKnownTrajectory_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteKnownTrajectory_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteKnownTrajectory_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteKnownTrajectory_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteKnownTrajectory_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, ExecuteKnownTrajectory_Response)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::ExecuteKnownTrajectory_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteKnownTrajectory_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteKnownTrajectory_type_support_ids_t;

static const _ExecuteKnownTrajectory_type_support_ids_t _ExecuteKnownTrajectory_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteKnownTrajectory_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteKnownTrajectory_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteKnownTrajectory_type_support_symbol_names_t _ExecuteKnownTrajectory_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ExecuteKnownTrajectory)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ExecuteKnownTrajectory)),
  }
};

typedef struct _ExecuteKnownTrajectory_type_support_data_t
{
  void * data[2];
} _ExecuteKnownTrajectory_type_support_data_t;

static _ExecuteKnownTrajectory_type_support_data_t _ExecuteKnownTrajectory_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteKnownTrajectory_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_ExecuteKnownTrajectory_service_typesupport_ids.typesupport_identifier[0],
  &_ExecuteKnownTrajectory_service_typesupport_symbol_names.symbol_name[0],
  &_ExecuteKnownTrajectory_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExecuteKnownTrajectory_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteKnownTrajectory_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, ExecuteKnownTrajectory)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::ExecuteKnownTrajectory_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
