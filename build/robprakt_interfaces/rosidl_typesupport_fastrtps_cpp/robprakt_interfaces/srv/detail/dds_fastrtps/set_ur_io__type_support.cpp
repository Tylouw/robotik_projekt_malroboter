// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robprakt_interfaces:srv/SetUrIo.idl
// generated code does not contain a copyright notice
#include "robprakt_interfaces/srv/detail/set_ur_io__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robprakt_interfaces/srv/detail/set_ur_io__struct.hpp"

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

namespace robprakt_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robprakt_interfaces
cdr_serialize(
  const robprakt_interfaces::srv::SetUrIo_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: set
  cdr << ros_message.set;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robprakt_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robprakt_interfaces::srv::SetUrIo_Request & ros_message)
{
  // Member: set
  cdr >> ros_message.set;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robprakt_interfaces
get_serialized_size(
  const robprakt_interfaces::srv::SetUrIo_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: set
  {
    size_t item_size = sizeof(ros_message.set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robprakt_interfaces
max_serialized_size_SetUrIo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SetUrIo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robprakt_interfaces::srv::SetUrIo_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetUrIo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robprakt_interfaces::srv::SetUrIo_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetUrIo_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robprakt_interfaces::srv::SetUrIo_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetUrIo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetUrIo_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SetUrIo_Request__callbacks = {
  "robprakt_interfaces::srv",
  "SetUrIo_Request",
  _SetUrIo_Request__cdr_serialize,
  _SetUrIo_Request__cdr_deserialize,
  _SetUrIo_Request__get_serialized_size,
  _SetUrIo_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetUrIo_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetUrIo_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robprakt_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robprakt_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robprakt_interfaces::srv::SetUrIo_Request>()
{
  return &robprakt_interfaces::srv::typesupport_fastrtps_cpp::_SetUrIo_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robprakt_interfaces, srv, SetUrIo_Request)() {
  return &robprakt_interfaces::srv::typesupport_fastrtps_cpp::_SetUrIo_Request__handle;
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

namespace robprakt_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robprakt_interfaces
cdr_serialize(
  const robprakt_interfaces::srv::SetUrIo_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: current
  cdr << ros_message.current;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robprakt_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robprakt_interfaces::srv::SetUrIo_Response & ros_message)
{
  // Member: current
  cdr >> ros_message.current;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robprakt_interfaces
get_serialized_size(
  const robprakt_interfaces::srv::SetUrIo_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: current
  {
    size_t item_size = sizeof(ros_message.current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robprakt_interfaces
max_serialized_size_SetUrIo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SetUrIo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robprakt_interfaces::srv::SetUrIo_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetUrIo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robprakt_interfaces::srv::SetUrIo_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetUrIo_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robprakt_interfaces::srv::SetUrIo_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetUrIo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetUrIo_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SetUrIo_Response__callbacks = {
  "robprakt_interfaces::srv",
  "SetUrIo_Response",
  _SetUrIo_Response__cdr_serialize,
  _SetUrIo_Response__cdr_deserialize,
  _SetUrIo_Response__get_serialized_size,
  _SetUrIo_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetUrIo_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetUrIo_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robprakt_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robprakt_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robprakt_interfaces::srv::SetUrIo_Response>()
{
  return &robprakt_interfaces::srv::typesupport_fastrtps_cpp::_SetUrIo_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robprakt_interfaces, srv, SetUrIo_Response)() {
  return &robprakt_interfaces::srv::typesupport_fastrtps_cpp::_SetUrIo_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace robprakt_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetUrIo__callbacks = {
  "robprakt_interfaces::srv",
  "SetUrIo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robprakt_interfaces, srv, SetUrIo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robprakt_interfaces, srv, SetUrIo_Response)(),
};

static rosidl_service_type_support_t _SetUrIo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetUrIo__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robprakt_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robprakt_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<robprakt_interfaces::srv::SetUrIo>()
{
  return &robprakt_interfaces::srv::typesupport_fastrtps_cpp::_SetUrIo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robprakt_interfaces, srv, SetUrIo)() {
  return &robprakt_interfaces::srv::typesupport_fastrtps_cpp::_SetUrIo__handle;
}

#ifdef __cplusplus
}
#endif
