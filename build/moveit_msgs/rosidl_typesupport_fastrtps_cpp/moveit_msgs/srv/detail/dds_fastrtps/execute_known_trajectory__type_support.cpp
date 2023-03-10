// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/ExecuteKnownTrajectory.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/execute_known_trajectory__rosidl_typesupport_fastrtps_cpp.hpp"
#include "moveit_msgs/srv/detail/execute_known_trajectory__struct.hpp"

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
bool cdr_serialize(
  const moveit_msgs::msg::RobotTrajectory &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::msg::RobotTrajectory &);
size_t get_serialized_size(
  const moveit_msgs::msg::RobotTrajectory &,
  size_t current_alignment);
size_t
max_serialized_size_RobotTrajectory(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::srv::ExecuteKnownTrajectory_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectory
  moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.trajectory,
    cdr);
  // Member: wait_for_execution
  cdr << (ros_message.wait_for_execution ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::srv::ExecuteKnownTrajectory_Request & ros_message)
{
  // Member: trajectory
  moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.trajectory);

  // Member: wait_for_execution
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wait_for_execution = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::srv::ExecuteKnownTrajectory_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trajectory

  current_alignment +=
    moveit_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.trajectory, current_alignment);
  // Member: wait_for_execution
  {
    size_t item_size = sizeof(ros_message.wait_for_execution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_ExecuteKnownTrajectory_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: trajectory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RobotTrajectory(
        full_bounded, current_alignment);
    }
  }

  // Member: wait_for_execution
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ExecuteKnownTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::srv::ExecuteKnownTrajectory_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExecuteKnownTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::srv::ExecuteKnownTrajectory_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExecuteKnownTrajectory_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::srv::ExecuteKnownTrajectory_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExecuteKnownTrajectory_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ExecuteKnownTrajectory_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ExecuteKnownTrajectory_Request__callbacks = {
  "moveit_msgs::srv",
  "ExecuteKnownTrajectory_Request",
  _ExecuteKnownTrajectory_Request__cdr_serialize,
  _ExecuteKnownTrajectory_Request__cdr_deserialize,
  _ExecuteKnownTrajectory_Request__get_serialized_size,
  _ExecuteKnownTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _ExecuteKnownTrajectory_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecuteKnownTrajectory_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::ExecuteKnownTrajectory_Request>()
{
  return &moveit_msgs::srv::typesupport_fastrtps_cpp::_ExecuteKnownTrajectory_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, ExecuteKnownTrajectory_Request)() {
  return &moveit_msgs::srv::typesupport_fastrtps_cpp::_ExecuteKnownTrajectory_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace moveit_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const moveit_msgs::msg::MoveItErrorCodes &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::msg::MoveItErrorCodes &);
size_t get_serialized_size(
  const moveit_msgs::msg::MoveItErrorCodes &,
  size_t current_alignment);
size_t
max_serialized_size_MoveItErrorCodes(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::srv::ExecuteKnownTrajectory_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: error_code
  moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.error_code,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::srv::ExecuteKnownTrajectory_Response & ros_message)
{
  // Member: error_code
  moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.error_code);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::srv::ExecuteKnownTrajectory_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: error_code

  current_alignment +=
    moveit_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.error_code, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_ExecuteKnownTrajectory_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: error_code
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MoveItErrorCodes(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ExecuteKnownTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::srv::ExecuteKnownTrajectory_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExecuteKnownTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::srv::ExecuteKnownTrajectory_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExecuteKnownTrajectory_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::srv::ExecuteKnownTrajectory_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExecuteKnownTrajectory_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ExecuteKnownTrajectory_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ExecuteKnownTrajectory_Response__callbacks = {
  "moveit_msgs::srv",
  "ExecuteKnownTrajectory_Response",
  _ExecuteKnownTrajectory_Response__cdr_serialize,
  _ExecuteKnownTrajectory_Response__cdr_deserialize,
  _ExecuteKnownTrajectory_Response__get_serialized_size,
  _ExecuteKnownTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _ExecuteKnownTrajectory_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecuteKnownTrajectory_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::ExecuteKnownTrajectory_Response>()
{
  return &moveit_msgs::srv::typesupport_fastrtps_cpp::_ExecuteKnownTrajectory_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, ExecuteKnownTrajectory_Response)() {
  return &moveit_msgs::srv::typesupport_fastrtps_cpp::_ExecuteKnownTrajectory_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace moveit_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ExecuteKnownTrajectory__callbacks = {
  "moveit_msgs::srv",
  "ExecuteKnownTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, ExecuteKnownTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, ExecuteKnownTrajectory_Response)(),
};

static rosidl_service_type_support_t _ExecuteKnownTrajectory__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExecuteKnownTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::srv::ExecuteKnownTrajectory>()
{
  return &moveit_msgs::srv::typesupport_fastrtps_cpp::_ExecuteKnownTrajectory__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, ExecuteKnownTrajectory)() {
  return &moveit_msgs::srv::typesupport_fastrtps_cpp::_ExecuteKnownTrajectory__handle;
}

#ifdef __cplusplus
}
#endif
