// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:srv/Move.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/move__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/detail/move__struct.h"
#include "interfaces/srv/detail/move__functions.h"
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

#include "interfaces/msg/detail/point_orientation3_d__functions.h"  // planeorientation
#include "interfaces/msg/detail/waypoints__functions.h"  // waypoints

// forward declare type support functions
size_t get_serialized_size_interfaces__msg__PointOrientation3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interfaces__msg__PointOrientation3D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, PointOrientation3D)();
size_t get_serialized_size_interfaces__msg__Waypoints(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interfaces__msg__Waypoints(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, Waypoints)();


using _Move_Request__ros_msg_type = interfaces__srv__Move_Request;

static bool _Move_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Move_Request__ros_msg_type * ros_message = static_cast<const _Move_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interfaces, msg, Waypoints
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->waypoints, cdr))
    {
      return false;
    }
  }

  // Field name: planeorientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interfaces, msg, PointOrientation3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->planeorientation, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Move_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Move_Request__ros_msg_type * ros_message = static_cast<_Move_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interfaces, msg, Waypoints
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->waypoints))
    {
      return false;
    }
  }

  // Field name: planeorientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interfaces, msg, PointOrientation3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->planeorientation))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__Move_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Move_Request__ros_msg_type * ros_message = static_cast<const _Move_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name waypoints

  current_alignment += get_serialized_size_interfaces__msg__Waypoints(
    &(ros_message->waypoints), current_alignment);
  // field.name planeorientation

  current_alignment += get_serialized_size_interfaces__msg__PointOrientation3D(
    &(ros_message->planeorientation), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Move_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__Move_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__Move_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: waypoints
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_interfaces__msg__Waypoints(
        full_bounded, current_alignment);
    }
  }
  // member: planeorientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_interfaces__msg__PointOrientation3D(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Move_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__Move_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Move_Request = {
  "interfaces::srv",
  "Move_Request",
  _Move_Request__cdr_serialize,
  _Move_Request__cdr_deserialize,
  _Move_Request__get_serialized_size,
  _Move_Request__max_serialized_size
};

static rosidl_message_type_support_t _Move_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Move_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Move_Request)() {
  return &_Move_Request__type_support;
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
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/move__struct.h"
// already included above
// #include "interfaces/srv/detail/move__functions.h"
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

// already included above
// #include "interfaces/msg/detail/point_orientation3_d__functions.h"  // pointorientation
#include "interfaces/msg/detail/point_translation3_d__functions.h"  // pointtranslation

// forward declare type support functions
size_t get_serialized_size_interfaces__msg__PointOrientation3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interfaces__msg__PointOrientation3D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, PointOrientation3D)();
size_t get_serialized_size_interfaces__msg__PointTranslation3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interfaces__msg__PointTranslation3D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, PointTranslation3D)();


using _Move_Response__ros_msg_type = interfaces__srv__Move_Response;

static bool _Move_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Move_Response__ros_msg_type * ros_message = static_cast<const _Move_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: pointtranslation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interfaces, msg, PointTranslation3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pointtranslation, cdr))
    {
      return false;
    }
  }

  // Field name: pointorientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interfaces, msg, PointOrientation3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pointorientation, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Move_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Move_Response__ros_msg_type * ros_message = static_cast<_Move_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: pointtranslation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interfaces, msg, PointTranslation3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pointtranslation))
    {
      return false;
    }
  }

  // Field name: pointorientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interfaces, msg, PointOrientation3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pointorientation))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__Move_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Move_Response__ros_msg_type * ros_message = static_cast<const _Move_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pointtranslation

  current_alignment += get_serialized_size_interfaces__msg__PointTranslation3D(
    &(ros_message->pointtranslation), current_alignment);
  // field.name pointorientation

  current_alignment += get_serialized_size_interfaces__msg__PointOrientation3D(
    &(ros_message->pointorientation), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Move_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__Move_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__Move_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pointtranslation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_interfaces__msg__PointTranslation3D(
        full_bounded, current_alignment);
    }
  }
  // member: pointorientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_interfaces__msg__PointOrientation3D(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Move_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__Move_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Move_Response = {
  "interfaces::srv",
  "Move_Response",
  _Move_Response__cdr_serialize,
  _Move_Response__cdr_deserialize,
  _Move_Response__get_serialized_size,
  _Move_Response__max_serialized_size
};

static rosidl_message_type_support_t _Move_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Move_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Move_Response)() {
  return &_Move_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/move.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Move__callbacks = {
  "interfaces::srv",
  "Move",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Move_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Move_Response)(),
};

static rosidl_service_type_support_t Move__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Move__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Move)() {
  return &Move__handle;
}

#if defined(__cplusplus)
}
#endif
