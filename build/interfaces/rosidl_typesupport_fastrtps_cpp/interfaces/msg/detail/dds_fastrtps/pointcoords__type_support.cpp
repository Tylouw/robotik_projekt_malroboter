// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/Pointcoords.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/pointcoords__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces/msg/detail/pointcoords__struct.hpp"

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

namespace interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_serialize(
  const interfaces::msg::Pointcoords & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x
  {
    cdr << ros_message.x;
  }
  // Member: y
  {
    cdr << ros_message.y;
  }
  // Member: curves
  {
    cdr << ros_message.curves;
  }
  // Member: size
  {
    cdr << ros_message.size;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces::msg::Pointcoords & ros_message)
{
  // Member: x
  {
    cdr >> ros_message.x;
  }

  // Member: y
  {
    cdr >> ros_message.y;
  }

  // Member: curves
  {
    cdr >> ros_message.curves;
  }

  // Member: size
  {
    cdr >> ros_message.size;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
get_serialized_size(
  const interfaces::msg::Pointcoords & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x
  {
    size_t array_size = ros_message.x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t array_size = ros_message.y.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.y[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curves
  {
    size_t array_size = ros_message.curves.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.curves[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: size
  {
    size_t array_size = ros_message.size.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.size[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
max_serialized_size_Pointcoords(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: curves
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: size
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Pointcoords__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces::msg::Pointcoords *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Pointcoords__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces::msg::Pointcoords *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Pointcoords__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces::msg::Pointcoords *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Pointcoords__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Pointcoords(full_bounded, 0);
}

static message_type_support_callbacks_t _Pointcoords__callbacks = {
  "interfaces::msg",
  "Pointcoords",
  _Pointcoords__cdr_serialize,
  _Pointcoords__cdr_deserialize,
  _Pointcoords__get_serialized_size,
  _Pointcoords__max_serialized_size
};

static rosidl_message_type_support_t _Pointcoords__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Pointcoords__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::Pointcoords>()
{
  return &interfaces::msg::typesupport_fastrtps_cpp::_Pointcoords__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, msg, Pointcoords)() {
  return &interfaces::msg::typesupport_fastrtps_cpp::_Pointcoords__handle;
}

#ifdef __cplusplus
}
#endif
