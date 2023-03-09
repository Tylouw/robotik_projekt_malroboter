// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:msg/PlanningSceneComponents.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_scene_components__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/msg/detail/planning_scene_components__struct.h"
#include "moveit_msgs/msg/detail/planning_scene_components__functions.h"
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


using _PlanningSceneComponents__ros_msg_type = moveit_msgs__msg__PlanningSceneComponents;

static bool _PlanningSceneComponents__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanningSceneComponents__ros_msg_type * ros_message = static_cast<const _PlanningSceneComponents__ros_msg_type *>(untyped_ros_message);
  // Field name: components
  {
    cdr << ros_message->components;
  }

  return true;
}

static bool _PlanningSceneComponents__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanningSceneComponents__ros_msg_type * ros_message = static_cast<_PlanningSceneComponents__ros_msg_type *>(untyped_ros_message);
  // Field name: components
  {
    cdr >> ros_message->components;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__msg__PlanningSceneComponents(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanningSceneComponents__ros_msg_type * ros_message = static_cast<const _PlanningSceneComponents__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name components
  {
    size_t item_size = sizeof(ros_message->components);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanningSceneComponents__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__msg__PlanningSceneComponents(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__msg__PlanningSceneComponents(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: components
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PlanningSceneComponents__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_moveit_msgs__msg__PlanningSceneComponents(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlanningSceneComponents = {
  "moveit_msgs::msg",
  "PlanningSceneComponents",
  _PlanningSceneComponents__cdr_serialize,
  _PlanningSceneComponents__cdr_deserialize,
  _PlanningSceneComponents__get_serialized_size,
  _PlanningSceneComponents__max_serialized_size
};

static rosidl_message_type_support_t _PlanningSceneComponents__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanningSceneComponents,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlanningSceneComponents)() {
  return &_PlanningSceneComponents__type_support;
}

#if defined(__cplusplus)
}
#endif
