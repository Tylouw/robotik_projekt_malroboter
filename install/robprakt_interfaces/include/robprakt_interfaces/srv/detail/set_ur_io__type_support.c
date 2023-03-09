// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robprakt_interfaces:srv/SetUrIo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robprakt_interfaces/srv/detail/set_ur_io__rosidl_typesupport_introspection_c.h"
#include "robprakt_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robprakt_interfaces/srv/detail/set_ur_io__functions.h"
#include "robprakt_interfaces/srv/detail/set_ur_io__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robprakt_interfaces__srv__SetUrIo_Request__init(message_memory);
}

void SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_fini_function(void * message_memory)
{
  robprakt_interfaces__srv__SetUrIo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_message_member_array[1] = {
  {
    "set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robprakt_interfaces__srv__SetUrIo_Request, set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_message_members = {
  "robprakt_interfaces__srv",  // message namespace
  "SetUrIo_Request",  // message name
  1,  // number of fields
  sizeof(robprakt_interfaces__srv__SetUrIo_Request),
  SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_message_member_array,  // message members
  SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_message_type_support_handle = {
  0,
  &SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robprakt_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robprakt_interfaces, srv, SetUrIo_Request)() {
  if (!SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_message_type_support_handle.typesupport_identifier) {
    SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetUrIo_Request__rosidl_typesupport_introspection_c__SetUrIo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robprakt_interfaces/srv/detail/set_ur_io__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robprakt_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robprakt_interfaces/srv/detail/set_ur_io__functions.h"
// already included above
// #include "robprakt_interfaces/srv/detail/set_ur_io__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robprakt_interfaces__srv__SetUrIo_Response__init(message_memory);
}

void SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_fini_function(void * message_memory)
{
  robprakt_interfaces__srv__SetUrIo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_message_member_array[1] = {
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robprakt_interfaces__srv__SetUrIo_Response, current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_message_members = {
  "robprakt_interfaces__srv",  // message namespace
  "SetUrIo_Response",  // message name
  1,  // number of fields
  sizeof(robprakt_interfaces__srv__SetUrIo_Response),
  SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_message_member_array,  // message members
  SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_message_type_support_handle = {
  0,
  &SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robprakt_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robprakt_interfaces, srv, SetUrIo_Response)() {
  if (!SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_message_type_support_handle.typesupport_identifier) {
    SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetUrIo_Response__rosidl_typesupport_introspection_c__SetUrIo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robprakt_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robprakt_interfaces/srv/detail/set_ur_io__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robprakt_interfaces__srv__detail__set_ur_io__rosidl_typesupport_introspection_c__SetUrIo_service_members = {
  "robprakt_interfaces__srv",  // service namespace
  "SetUrIo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robprakt_interfaces__srv__detail__set_ur_io__rosidl_typesupport_introspection_c__SetUrIo_Request_message_type_support_handle,
  NULL  // response message
  // robprakt_interfaces__srv__detail__set_ur_io__rosidl_typesupport_introspection_c__SetUrIo_Response_message_type_support_handle
};

static rosidl_service_type_support_t robprakt_interfaces__srv__detail__set_ur_io__rosidl_typesupport_introspection_c__SetUrIo_service_type_support_handle = {
  0,
  &robprakt_interfaces__srv__detail__set_ur_io__rosidl_typesupport_introspection_c__SetUrIo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robprakt_interfaces, srv, SetUrIo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robprakt_interfaces, srv, SetUrIo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robprakt_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robprakt_interfaces, srv, SetUrIo)() {
  if (!robprakt_interfaces__srv__detail__set_ur_io__rosidl_typesupport_introspection_c__SetUrIo_service_type_support_handle.typesupport_identifier) {
    robprakt_interfaces__srv__detail__set_ur_io__rosidl_typesupport_introspection_c__SetUrIo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robprakt_interfaces__srv__detail__set_ur_io__rosidl_typesupport_introspection_c__SetUrIo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robprakt_interfaces, srv, SetUrIo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robprakt_interfaces, srv, SetUrIo_Response)()->data;
  }

  return &robprakt_interfaces__srv__detail__set_ur_io__rosidl_typesupport_introspection_c__SetUrIo_service_type_support_handle;
}
