// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robprakt_interfaces:srv/SetUrIo.idl
// generated code does not contain a copyright notice
#include "robprakt_interfaces/srv/detail/set_ur_io__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robprakt_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robprakt_interfaces/srv/detail/set_ur_io__struct.h"
#include "robprakt_interfaces/srv/detail/set_ur_io__functions.h"
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


using _SetUrIo_Request__ros_msg_type = robprakt_interfaces__srv__SetUrIo_Request;

static bool _SetUrIo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetUrIo_Request__ros_msg_type * ros_message = static_cast<const _SetUrIo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: set
  {
    cdr << ros_message->set;
  }

  return true;
}

static bool _SetUrIo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetUrIo_Request__ros_msg_type * ros_message = static_cast<_SetUrIo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: set
  {
    cdr >> ros_message->set;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robprakt_interfaces
size_t get_serialized_size_robprakt_interfaces__srv__SetUrIo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetUrIo_Request__ros_msg_type * ros_message = static_cast<const _SetUrIo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name set
  {
    size_t item_size = sizeof(ros_message->set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetUrIo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robprakt_interfaces__srv__SetUrIo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robprakt_interfaces
size_t max_serialized_size_robprakt_interfaces__srv__SetUrIo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetUrIo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robprakt_interfaces__srv__SetUrIo_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetUrIo_Request = {
  "robprakt_interfaces::srv",
  "SetUrIo_Request",
  _SetUrIo_Request__cdr_serialize,
  _SetUrIo_Request__cdr_deserialize,
  _SetUrIo_Request__get_serialized_size,
  _SetUrIo_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetUrIo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetUrIo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robprakt_interfaces, srv, SetUrIo_Request)() {
  return &_SetUrIo_Request__type_support;
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
// #include "robprakt_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robprakt_interfaces/srv/detail/set_ur_io__struct.h"
// already included above
// #include "robprakt_interfaces/srv/detail/set_ur_io__functions.h"
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


using _SetUrIo_Response__ros_msg_type = robprakt_interfaces__srv__SetUrIo_Response;

static bool _SetUrIo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetUrIo_Response__ros_msg_type * ros_message = static_cast<const _SetUrIo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: current
  {
    cdr << ros_message->current;
  }

  return true;
}

static bool _SetUrIo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetUrIo_Response__ros_msg_type * ros_message = static_cast<_SetUrIo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: current
  {
    cdr >> ros_message->current;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robprakt_interfaces
size_t get_serialized_size_robprakt_interfaces__srv__SetUrIo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetUrIo_Response__ros_msg_type * ros_message = static_cast<const _SetUrIo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetUrIo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robprakt_interfaces__srv__SetUrIo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robprakt_interfaces
size_t max_serialized_size_robprakt_interfaces__srv__SetUrIo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetUrIo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robprakt_interfaces__srv__SetUrIo_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetUrIo_Response = {
  "robprakt_interfaces::srv",
  "SetUrIo_Response",
  _SetUrIo_Response__cdr_serialize,
  _SetUrIo_Response__cdr_deserialize,
  _SetUrIo_Response__get_serialized_size,
  _SetUrIo_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetUrIo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetUrIo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robprakt_interfaces, srv, SetUrIo_Response)() {
  return &_SetUrIo_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "robprakt_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robprakt_interfaces/srv/set_ur_io.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetUrIo__callbacks = {
  "robprakt_interfaces::srv",
  "SetUrIo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robprakt_interfaces, srv, SetUrIo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robprakt_interfaces, srv, SetUrIo_Response)(),
};

static rosidl_service_type_support_t SetUrIo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetUrIo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robprakt_interfaces, srv, SetUrIo)() {
  return &SetUrIo__handle;
}

#if defined(__cplusplus)
}
#endif
