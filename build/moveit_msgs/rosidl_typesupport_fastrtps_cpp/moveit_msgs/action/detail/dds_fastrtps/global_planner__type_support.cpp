// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:action/GlobalPlanner.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/action/detail/global_planner__rosidl_typesupport_fastrtps_cpp.hpp"
#include "moveit_msgs/action/detail/global_planner__struct.hpp"

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
  const moveit_msgs::msg::MotionSequenceRequest &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::msg::MotionSequenceRequest &);
size_t get_serialized_size(
  const moveit_msgs::msg::MotionSequenceRequest &,
  size_t current_alignment);
size_t
max_serialized_size_MotionSequenceRequest(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_Goal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: planning_group
  cdr << ros_message.planning_group;
  // Member: motion_sequence
  moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.motion_sequence,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::action::GlobalPlanner_Goal & ros_message)
{
  // Member: planning_group
  cdr >> ros_message.planning_group;

  // Member: motion_sequence
  moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.motion_sequence);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_Goal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: planning_group
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.planning_group.size() + 1);
  // Member: motion_sequence

  current_alignment +=
    moveit_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.motion_sequence, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_GlobalPlanner_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: planning_group
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: motion_sequence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MotionSequenceRequest(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GlobalPlanner_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GlobalPlanner_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::action::GlobalPlanner_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GlobalPlanner_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GlobalPlanner_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GlobalPlanner_Goal(full_bounded, 0);
}

static message_type_support_callbacks_t _GlobalPlanner_Goal__callbacks = {
  "moveit_msgs::action",
  "GlobalPlanner_Goal",
  _GlobalPlanner_Goal__cdr_serialize,
  _GlobalPlanner_Goal__cdr_deserialize,
  _GlobalPlanner_Goal__get_serialized_size,
  _GlobalPlanner_Goal__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPlanner_Goal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPlanner_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_Goal>()
{
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_Goal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_Goal)() {
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_Goal__handle;
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
  const moveit_msgs::msg::MotionPlanResponse &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::msg::MotionPlanResponse &);
size_t get_serialized_size(
  const moveit_msgs::msg::MotionPlanResponse &,
  size_t current_alignment);
size_t
max_serialized_size_MotionPlanResponse(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_Result & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: response
  moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.response,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::action::GlobalPlanner_Result & ros_message)
{
  // Member: response
  moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.response);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_Result & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: response

  current_alignment +=
    moveit_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.response, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_GlobalPlanner_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: response
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MotionPlanResponse(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GlobalPlanner_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GlobalPlanner_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::action::GlobalPlanner_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GlobalPlanner_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GlobalPlanner_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GlobalPlanner_Result(full_bounded, 0);
}

static message_type_support_callbacks_t _GlobalPlanner_Result__callbacks = {
  "moveit_msgs::action",
  "GlobalPlanner_Result",
  _GlobalPlanner_Result__cdr_serialize,
  _GlobalPlanner_Result__cdr_deserialize,
  _GlobalPlanner_Result__get_serialized_size,
  _GlobalPlanner_Result__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPlanner_Result__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPlanner_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_Result>()
{
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_Result__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_Result)() {
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_Result__handle;
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

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: feedback
  cdr << ros_message.feedback;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::action::GlobalPlanner_Feedback & ros_message)
{
  // Member: feedback
  cdr >> ros_message.feedback;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_Feedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: feedback
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.feedback.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_GlobalPlanner_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: feedback
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GlobalPlanner_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GlobalPlanner_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::action::GlobalPlanner_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GlobalPlanner_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GlobalPlanner_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GlobalPlanner_Feedback(full_bounded, 0);
}

static message_type_support_callbacks_t _GlobalPlanner_Feedback__callbacks = {
  "moveit_msgs::action",
  "GlobalPlanner_Feedback",
  _GlobalPlanner_Feedback__cdr_serialize,
  _GlobalPlanner_Feedback__cdr_deserialize,
  _GlobalPlanner_Feedback__get_serialized_size,
  _GlobalPlanner_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPlanner_Feedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPlanner_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_Feedback>()
{
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_Feedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_Feedback)() {
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_Feedback__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace moveit_msgs
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_Goal &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::action::GlobalPlanner_Goal &);
size_t get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_Goal &,
  size_t current_alignment);
size_t
max_serialized_size_GlobalPlanner_Goal(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  moveit_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::action::GlobalPlanner_SendGoal_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: goal
  moveit_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: goal

  current_alignment +=
    moveit_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_GlobalPlanner_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_GlobalPlanner_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GlobalPlanner_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GlobalPlanner_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::action::GlobalPlanner_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GlobalPlanner_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GlobalPlanner_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GlobalPlanner_SendGoal_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GlobalPlanner_SendGoal_Request__callbacks = {
  "moveit_msgs::action",
  "GlobalPlanner_SendGoal_Request",
  _GlobalPlanner_SendGoal_Request__cdr_serialize,
  _GlobalPlanner_SendGoal_Request__cdr_deserialize,
  _GlobalPlanner_SendGoal_Request__get_serialized_size,
  _GlobalPlanner_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPlanner_SendGoal_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPlanner_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_SendGoal_Request>()
{
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_SendGoal_Request)() {
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_SendGoal_Request__handle;
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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace moveit_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accepted
  cdr << (ros_message.accepted ? true : false);
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::action::GlobalPlanner_SendGoal_Response & ros_message)
{
  // Member: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepted = tmp ? true : false;
  }

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accepted
  {
    size_t item_size = sizeof(ros_message.accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_GlobalPlanner_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GlobalPlanner_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GlobalPlanner_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::action::GlobalPlanner_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GlobalPlanner_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GlobalPlanner_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GlobalPlanner_SendGoal_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GlobalPlanner_SendGoal_Response__callbacks = {
  "moveit_msgs::action",
  "GlobalPlanner_SendGoal_Response",
  _GlobalPlanner_SendGoal_Response__cdr_serialize,
  _GlobalPlanner_SendGoal_Response__cdr_deserialize,
  _GlobalPlanner_SendGoal_Response__get_serialized_size,
  _GlobalPlanner_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPlanner_SendGoal_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPlanner_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_SendGoal_Response>()
{
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_SendGoal_Response)() {
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_SendGoal_Response__handle;
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

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GlobalPlanner_SendGoal__callbacks = {
  "moveit_msgs::action",
  "GlobalPlanner_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_SendGoal_Response)(),
};

static rosidl_service_type_support_t _GlobalPlanner_SendGoal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPlanner_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::action::GlobalPlanner_SendGoal>()
{
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_SendGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_SendGoal)() {
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_SendGoal__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace moveit_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::action::GlobalPlanner_GetResult_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_GetResult_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_GlobalPlanner_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GlobalPlanner_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GlobalPlanner_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::action::GlobalPlanner_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GlobalPlanner_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GlobalPlanner_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GlobalPlanner_GetResult_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GlobalPlanner_GetResult_Request__callbacks = {
  "moveit_msgs::action",
  "GlobalPlanner_GetResult_Request",
  _GlobalPlanner_GetResult_Request__cdr_serialize,
  _GlobalPlanner_GetResult_Request__cdr_deserialize,
  _GlobalPlanner_GetResult_Request__get_serialized_size,
  _GlobalPlanner_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPlanner_GetResult_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPlanner_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_GetResult_Request>()
{
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_GetResult_Request)() {
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_GetResult_Request__handle;
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
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_Result &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::action::GlobalPlanner_Result &);
size_t get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_Result &,
  size_t current_alignment);
size_t
max_serialized_size_GlobalPlanner_Result(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  // Member: result
  moveit_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::action::GlobalPlanner_GetResult_Response & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  // Member: result
  moveit_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_GetResult_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: result

  current_alignment +=
    moveit_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_GlobalPlanner_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_GlobalPlanner_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GlobalPlanner_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GlobalPlanner_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::action::GlobalPlanner_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GlobalPlanner_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GlobalPlanner_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GlobalPlanner_GetResult_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GlobalPlanner_GetResult_Response__callbacks = {
  "moveit_msgs::action",
  "GlobalPlanner_GetResult_Response",
  _GlobalPlanner_GetResult_Response__cdr_serialize,
  _GlobalPlanner_GetResult_Response__cdr_deserialize,
  _GlobalPlanner_GetResult_Response__get_serialized_size,
  _GlobalPlanner_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPlanner_GetResult_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPlanner_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_GetResult_Response>()
{
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_GetResult_Response)() {
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace moveit_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GlobalPlanner_GetResult__callbacks = {
  "moveit_msgs::action",
  "GlobalPlanner_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_GetResult_Response)(),
};

static rosidl_service_type_support_t _GlobalPlanner_GetResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPlanner_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::action::GlobalPlanner_GetResult>()
{
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_GetResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_GetResult)() {
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_GetResult__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace moveit_msgs
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_Feedback &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::action::GlobalPlanner_Feedback &);
size_t get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_Feedback &,
  size_t current_alignment);
size_t
max_serialized_size_GlobalPlanner_Feedback(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::action::GlobalPlanner_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  moveit_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::action::GlobalPlanner_FeedbackMessage & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: feedback
  moveit_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.feedback);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::action::GlobalPlanner_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: feedback

  current_alignment +=
    moveit_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.feedback, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_GlobalPlanner_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_GlobalPlanner_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GlobalPlanner_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GlobalPlanner_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::action::GlobalPlanner_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GlobalPlanner_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::action::GlobalPlanner_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GlobalPlanner_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GlobalPlanner_FeedbackMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _GlobalPlanner_FeedbackMessage__callbacks = {
  "moveit_msgs::action",
  "GlobalPlanner_FeedbackMessage",
  _GlobalPlanner_FeedbackMessage__cdr_serialize,
  _GlobalPlanner_FeedbackMessage__cdr_deserialize,
  _GlobalPlanner_FeedbackMessage__get_serialized_size,
  _GlobalPlanner_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPlanner_FeedbackMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPlanner_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_FeedbackMessage>()
{
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_FeedbackMessage)() {
  return &moveit_msgs::action::typesupport_fastrtps_cpp::_GlobalPlanner_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
