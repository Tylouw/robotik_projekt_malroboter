// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:action/LocalPlanner.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__LOCAL_PLANNER__TRAITS_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__LOCAL_PLANNER__TRAITS_HPP_

#include "moveit_msgs/action/detail/local_planner__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'local_constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::LocalPlanner_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: local_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.local_constraints.size() == 0) {
      out << "local_constraints: []\n";
    } else {
      out << "local_constraints:\n";
      for (auto item : msg.local_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::LocalPlanner_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::LocalPlanner_Goal>()
{
  return "moveit_msgs::action::LocalPlanner_Goal";
}

template<>
inline const char * name<moveit_msgs::action::LocalPlanner_Goal>()
{
  return "moveit_msgs/action/LocalPlanner_Goal";
}

template<>
struct has_fixed_size<moveit_msgs::action::LocalPlanner_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::LocalPlanner_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::LocalPlanner_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::LocalPlanner_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_yaml(msg.error_code, out, indentation + 2);
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::LocalPlanner_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::LocalPlanner_Result>()
{
  return "moveit_msgs::action::LocalPlanner_Result";
}

template<>
inline const char * name<moveit_msgs::action::LocalPlanner_Result>()
{
  return "moveit_msgs/action/LocalPlanner_Result";
}

template<>
struct has_fixed_size<moveit_msgs::action::LocalPlanner_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::LocalPlanner_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::LocalPlanner_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::LocalPlanner_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::LocalPlanner_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::LocalPlanner_Feedback>()
{
  return "moveit_msgs::action::LocalPlanner_Feedback";
}

template<>
inline const char * name<moveit_msgs::action::LocalPlanner_Feedback>()
{
  return "moveit_msgs/action/LocalPlanner_Feedback";
}

template<>
struct has_fixed_size<moveit_msgs::action::LocalPlanner_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::LocalPlanner_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::LocalPlanner_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "moveit_msgs/action/detail/local_planner__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::LocalPlanner_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::LocalPlanner_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::LocalPlanner_SendGoal_Request>()
{
  return "moveit_msgs::action::LocalPlanner_SendGoal_Request";
}

template<>
inline const char * name<moveit_msgs::action::LocalPlanner_SendGoal_Request>()
{
  return "moveit_msgs/action/LocalPlanner_SendGoal_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::LocalPlanner_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::LocalPlanner_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::LocalPlanner_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::LocalPlanner_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::LocalPlanner_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::LocalPlanner_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::LocalPlanner_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::LocalPlanner_SendGoal_Response>()
{
  return "moveit_msgs::action::LocalPlanner_SendGoal_Response";
}

template<>
inline const char * name<moveit_msgs::action::LocalPlanner_SendGoal_Response>()
{
  return "moveit_msgs/action/LocalPlanner_SendGoal_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::LocalPlanner_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::LocalPlanner_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<moveit_msgs::action::LocalPlanner_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::LocalPlanner_SendGoal>()
{
  return "moveit_msgs::action::LocalPlanner_SendGoal";
}

template<>
inline const char * name<moveit_msgs::action::LocalPlanner_SendGoal>()
{
  return "moveit_msgs/action/LocalPlanner_SendGoal";
}

template<>
struct has_fixed_size<moveit_msgs::action::LocalPlanner_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::LocalPlanner_SendGoal_Request>::value &&
    has_fixed_size<moveit_msgs::action::LocalPlanner_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::LocalPlanner_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::LocalPlanner_SendGoal_Request>::value &&
    has_bounded_size<moveit_msgs::action::LocalPlanner_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::action::LocalPlanner_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::action::LocalPlanner_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::action::LocalPlanner_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::LocalPlanner_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::LocalPlanner_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::LocalPlanner_GetResult_Request>()
{
  return "moveit_msgs::action::LocalPlanner_GetResult_Request";
}

template<>
inline const char * name<moveit_msgs::action::LocalPlanner_GetResult_Request>()
{
  return "moveit_msgs/action/LocalPlanner_GetResult_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::LocalPlanner_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::LocalPlanner_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::LocalPlanner_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/local_planner__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::LocalPlanner_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::LocalPlanner_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::LocalPlanner_GetResult_Response>()
{
  return "moveit_msgs::action::LocalPlanner_GetResult_Response";
}

template<>
inline const char * name<moveit_msgs::action::LocalPlanner_GetResult_Response>()
{
  return "moveit_msgs/action/LocalPlanner_GetResult_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::LocalPlanner_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::LocalPlanner_Result>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::LocalPlanner_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::LocalPlanner_Result>::value> {};

template<>
struct is_message<moveit_msgs::action::LocalPlanner_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::LocalPlanner_GetResult>()
{
  return "moveit_msgs::action::LocalPlanner_GetResult";
}

template<>
inline const char * name<moveit_msgs::action::LocalPlanner_GetResult>()
{
  return "moveit_msgs/action/LocalPlanner_GetResult";
}

template<>
struct has_fixed_size<moveit_msgs::action::LocalPlanner_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::LocalPlanner_GetResult_Request>::value &&
    has_fixed_size<moveit_msgs::action::LocalPlanner_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::LocalPlanner_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::LocalPlanner_GetResult_Request>::value &&
    has_bounded_size<moveit_msgs::action::LocalPlanner_GetResult_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::action::LocalPlanner_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::action::LocalPlanner_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::action::LocalPlanner_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/local_planner__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::LocalPlanner_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::LocalPlanner_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::LocalPlanner_FeedbackMessage>()
{
  return "moveit_msgs::action::LocalPlanner_FeedbackMessage";
}

template<>
inline const char * name<moveit_msgs::action::LocalPlanner_FeedbackMessage>()
{
  return "moveit_msgs/action/LocalPlanner_FeedbackMessage";
}

template<>
struct has_fixed_size<moveit_msgs::action::LocalPlanner_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::LocalPlanner_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::LocalPlanner_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::LocalPlanner_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::LocalPlanner_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<moveit_msgs::action::LocalPlanner>
  : std::true_type
{
};

template<>
struct is_action_goal<moveit_msgs::action::LocalPlanner_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<moveit_msgs::action::LocalPlanner_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<moveit_msgs::action::LocalPlanner_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MOVEIT_MSGS__ACTION__DETAIL__LOCAL_PLANNER__TRAITS_HPP_
