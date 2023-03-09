// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:srv/ExecuteKnownTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/srv/detail/execute_known_trajectory__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/srv/detail/execute_known_trajectory__functions.h"
#include "moveit_msgs/srv/detail/execute_known_trajectory__struct.h"


// Include directives for member types
// Member `trajectory`
#include "moveit_msgs/msg/robot_trajectory.h"
// Member `trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__ExecuteKnownTrajectory_Request__init(message_memory);
}

void ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_fini_function(void * message_memory)
{
  moveit_msgs__srv__ExecuteKnownTrajectory_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_message_member_array[2] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__ExecuteKnownTrajectory_Request, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait_for_execution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__ExecuteKnownTrajectory_Request, wait_for_execution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_message_members = {
  "moveit_msgs__srv",  // message namespace
  "ExecuteKnownTrajectory_Request",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__srv__ExecuteKnownTrajectory_Request),
  ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_message_member_array,  // message members
  ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_message_type_support_handle = {
  0,
  &ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ExecuteKnownTrajectory_Request)() {
  ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)();
  if (!ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecuteKnownTrajectory_Request__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/execute_known_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/execute_known_trajectory__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/execute_known_trajectory__struct.h"


// Include directives for member types
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__ExecuteKnownTrajectory_Response__init(message_memory);
}

void ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_fini_function(void * message_memory)
{
  moveit_msgs__srv__ExecuteKnownTrajectory_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_message_member_array[1] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__ExecuteKnownTrajectory_Response, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_message_members = {
  "moveit_msgs__srv",  // message namespace
  "ExecuteKnownTrajectory_Response",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__srv__ExecuteKnownTrajectory_Response),
  ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_message_member_array,  // message members
  ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_message_type_support_handle = {
  0,
  &ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ExecuteKnownTrajectory_Response)() {
  ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MoveItErrorCodes)();
  if (!ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecuteKnownTrajectory_Response__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/execute_known_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__srv__detail__execute_known_trajectory__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_service_members = {
  "moveit_msgs__srv",  // service namespace
  "ExecuteKnownTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__srv__detail__execute_known_trajectory__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__srv__detail__execute_known_trajectory__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__srv__detail__execute_known_trajectory__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_service_type_support_handle = {
  0,
  &moveit_msgs__srv__detail__execute_known_trajectory__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ExecuteKnownTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ExecuteKnownTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ExecuteKnownTrajectory)() {
  if (!moveit_msgs__srv__detail__execute_known_trajectory__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__detail__execute_known_trajectory__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__srv__detail__execute_known_trajectory__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ExecuteKnownTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ExecuteKnownTrajectory_Response)()->data;
  }

  return &moveit_msgs__srv__detail__execute_known_trajectory__rosidl_typesupport_introspection_c__ExecuteKnownTrajectory_service_type_support_handle;
}
