// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:msg/MotionSequenceItem.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/motion_sequence_item__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/msg/detail/motion_sequence_item__struct.h"
#include "moveit_msgs/msg/detail/motion_sequence_item__functions.h"
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

#include "moveit_msgs/msg/detail/motion_plan_request__functions.h"  // req

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__MotionPlanRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__MotionPlanRequest(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionPlanRequest)();


using _MotionSequenceItem__ros_msg_type = moveit_msgs__msg__MotionSequenceItem;

static bool _MotionSequenceItem__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionSequenceItem__ros_msg_type * ros_message = static_cast<const _MotionSequenceItem__ros_msg_type *>(untyped_ros_message);
  // Field name: req
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionPlanRequest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->req, cdr))
    {
      return false;
    }
  }

  // Field name: blend_radius
  {
    cdr << ros_message->blend_radius;
  }

  return true;
}

static bool _MotionSequenceItem__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionSequenceItem__ros_msg_type * ros_message = static_cast<_MotionSequenceItem__ros_msg_type *>(untyped_ros_message);
  // Field name: req
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionPlanRequest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->req))
    {
      return false;
    }
  }

  // Field name: blend_radius
  {
    cdr >> ros_message->blend_radius;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__msg__MotionSequenceItem(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionSequenceItem__ros_msg_type * ros_message = static_cast<const _MotionSequenceItem__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name req

  current_alignment += get_serialized_size_moveit_msgs__msg__MotionPlanRequest(
    &(ros_message->req), current_alignment);
  // field.name blend_radius
  {
    size_t item_size = sizeof(ros_message->blend_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionSequenceItem__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__msg__MotionSequenceItem(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__msg__MotionSequenceItem(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: req
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_moveit_msgs__msg__MotionPlanRequest(
        full_bounded, current_alignment);
    }
  }
  // member: blend_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionSequenceItem__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_moveit_msgs__msg__MotionSequenceItem(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionSequenceItem = {
  "moveit_msgs::msg",
  "MotionSequenceItem",
  _MotionSequenceItem__cdr_serialize,
  _MotionSequenceItem__cdr_deserialize,
  _MotionSequenceItem__get_serialized_size,
  _MotionSequenceItem__max_serialized_size
};

static rosidl_message_type_support_t _MotionSequenceItem__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionSequenceItem,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionSequenceItem)() {
  return &_MotionSequenceItem__type_support;
}

#if defined(__cplusplus)
}
#endif
