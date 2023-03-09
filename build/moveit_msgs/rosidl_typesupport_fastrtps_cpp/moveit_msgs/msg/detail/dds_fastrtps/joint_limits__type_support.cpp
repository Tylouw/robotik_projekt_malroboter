// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/joint_limits__rosidl_typesupport_fastrtps_cpp.hpp"
#include "moveit_msgs/msg/detail/joint_limits__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace moveit_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::msg::JointLimits & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_name
  cdr << ros_message.joint_name;
  // Member: has_position_limits
  cdr << (ros_message.has_position_limits ? true : false);
  // Member: min_position
  cdr << ros_message.min_position;
  // Member: max_position
  cdr << ros_message.max_position;
  // Member: has_velocity_limits
  cdr << (ros_message.has_velocity_limits ? true : false);
  // Member: max_velocity
  cdr << ros_message.max_velocity;
  // Member: has_acceleration_limits
  cdr << (ros_message.has_acceleration_limits ? true : false);
  // Member: max_acceleration
  cdr << ros_message.max_acceleration;
  // Member: has_jerk_limits
  cdr << (ros_message.has_jerk_limits ? true : false);
  // Member: max_jerk
  cdr << ros_message.max_jerk;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::msg::JointLimits & ros_message)
{
  // Member: joint_name
  cdr >> ros_message.joint_name;

  // Member: has_position_limits
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_position_limits = tmp ? true : false;
  }

  // Member: min_position
  cdr >> ros_message.min_position;

  // Member: max_position
  cdr >> ros_message.max_position;

  // Member: has_velocity_limits
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_velocity_limits = tmp ? true : false;
  }

  // Member: max_velocity
  cdr >> ros_message.max_velocity;

  // Member: has_acceleration_limits
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_acceleration_limits = tmp ? true : false;
  }

  // Member: max_acceleration
  cdr >> ros_message.max_acceleration;

  // Member: has_jerk_limits
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_jerk_limits = tmp ? true : false;
  }

  // Member: max_jerk
  cdr >> ros_message.max_jerk;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::msg::JointLimits & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.joint_name.size() + 1);
  // Member: has_position_limits
  {
    size_t item_size = sizeof(ros_message.has_position_limits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_position
  {
    size_t item_size = sizeof(ros_message.min_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_position
  {
    size_t item_size = sizeof(ros_message.max_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_velocity_limits
  {
    size_t item_size = sizeof(ros_message.has_velocity_limits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_velocity
  {
    size_t item_size = sizeof(ros_message.max_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_acceleration_limits
  {
    size_t item_size = sizeof(ros_message.has_acceleration_limits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_acceleration
  {
    size_t item_size = sizeof(ros_message.max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_jerk_limits
  {
    size_t item_size = sizeof(ros_message.has_jerk_limits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_jerk
  {
    size_t item_size = sizeof(ros_message.max_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_JointLimits(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: joint_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: has_position_limits
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: min_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: has_velocity_limits
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: has_acceleration_limits
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: has_jerk_limits
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_jerk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _JointLimits__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::JointLimits *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointLimits__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::msg::JointLimits *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointLimits__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::JointLimits *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointLimits__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_JointLimits(full_bounded, 0);
}

static message_type_support_callbacks_t _JointLimits__callbacks = {
  "moveit_msgs::msg",
  "JointLimits",
  _JointLimits__cdr_serialize,
  _JointLimits__cdr_deserialize,
  _JointLimits__get_serialized_size,
  _JointLimits__max_serialized_size
};

static rosidl_message_type_support_t _JointLimits__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointLimits__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::msg::JointLimits>()
{
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_JointLimits__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, msg, JointLimits)() {
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_JointLimits__handle;
}

#ifdef __cplusplus
}
#endif
