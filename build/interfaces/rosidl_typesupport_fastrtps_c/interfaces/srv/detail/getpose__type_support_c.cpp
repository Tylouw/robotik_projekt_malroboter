// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:srv/Getpose.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/getpose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/detail/getpose__struct.h"
#include "interfaces/srv/detail/getpose__functions.h"
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


using _Getpose_Request__ros_msg_type = interfaces__srv__Getpose_Request;

static bool _Getpose_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Getpose_Request__ros_msg_type * ros_message = static_cast<const _Getpose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: eingang
  {
    cdr << (ros_message->eingang ? true : false);
  }

  return true;
}

static bool _Getpose_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Getpose_Request__ros_msg_type * ros_message = static_cast<_Getpose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: eingang
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->eingang = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__Getpose_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Getpose_Request__ros_msg_type * ros_message = static_cast<const _Getpose_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name eingang
  {
    size_t item_size = sizeof(ros_message->eingang);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Getpose_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__Getpose_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__Getpose_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: eingang
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Getpose_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__Getpose_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Getpose_Request = {
  "interfaces::srv",
  "Getpose_Request",
  _Getpose_Request__cdr_serialize,
  _Getpose_Request__cdr_deserialize,
  _Getpose_Request__get_serialized_size,
  _Getpose_Request__max_serialized_size
};

static rosidl_message_type_support_t _Getpose_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Getpose_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Getpose_Request)() {
  return &_Getpose_Request__type_support;
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
// #include "interfaces/srv/detail/getpose__struct.h"
// already included above
// #include "interfaces/srv/detail/getpose__functions.h"
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

#include "interfaces/msg/detail/point_orientation3_d__functions.h"  // pointorientation
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


using _Getpose_Response__ros_msg_type = interfaces__srv__Getpose_Response;

static bool _Getpose_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Getpose_Response__ros_msg_type * ros_message = static_cast<const _Getpose_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _Getpose_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Getpose_Response__ros_msg_type * ros_message = static_cast<_Getpose_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_interfaces__srv__Getpose_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Getpose_Response__ros_msg_type * ros_message = static_cast<const _Getpose_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _Getpose_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__Getpose_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__Getpose_Response(
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

static size_t _Getpose_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__Getpose_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Getpose_Response = {
  "interfaces::srv",
  "Getpose_Response",
  _Getpose_Response__cdr_serialize,
  _Getpose_Response__cdr_deserialize,
  _Getpose_Response__get_serialized_size,
  _Getpose_Response__max_serialized_size
};

static rosidl_message_type_support_t _Getpose_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Getpose_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Getpose_Response)() {
  return &_Getpose_Response__type_support;
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
#include "interfaces/srv/getpose.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Getpose__callbacks = {
  "interfaces::srv",
  "Getpose",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Getpose_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Getpose_Response)(),
};

static rosidl_service_type_support_t Getpose__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Getpose__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Getpose)() {
  return &Getpose__handle;
}

#if defined(__cplusplus)
}
#endif
