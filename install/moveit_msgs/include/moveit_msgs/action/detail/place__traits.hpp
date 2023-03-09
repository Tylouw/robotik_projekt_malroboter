// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:action/Place.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__PLACE__TRAITS_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__PLACE__TRAITS_HPP_

#include "moveit_msgs/action/detail/place__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'place_locations'
#include "moveit_msgs/msg/detail/place_location__traits.hpp"
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"
// Member 'planning_options'
#include "moveit_msgs/msg/detail/planning_options__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::Place_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: attached_object_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attached_object_name: ";
    value_to_yaml(msg.attached_object_name, out);
    out << "\n";
  }

  // member: place_locations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.place_locations.size() == 0) {
      out << "place_locations: []\n";
    } else {
      out << "place_locations:\n";
      for (auto item : msg.place_locations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: place_eef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_eef: ";
    value_to_yaml(msg.place_eef, out);
    out << "\n";
  }

  // member: support_surface_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "support_surface_name: ";
    value_to_yaml(msg.support_surface_name, out);
    out << "\n";
  }

  // member: allow_gripper_support_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_gripper_support_collision: ";
    value_to_yaml(msg.allow_gripper_support_collision, out);
    out << "\n";
  }

  // member: path_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_constraints:\n";
    to_yaml(msg.path_constraints, out, indentation + 2);
  }

  // member: planner_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_id: ";
    value_to_yaml(msg.planner_id, out);
    out << "\n";
  }

  // member: allowed_touch_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.allowed_touch_objects.size() == 0) {
      out << "allowed_touch_objects: []\n";
    } else {
      out << "allowed_touch_objects:\n";
      for (auto item : msg.allowed_touch_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: allowed_planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allowed_planning_time: ";
    value_to_yaml(msg.allowed_planning_time, out);
    out << "\n";
  }

  // member: planning_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_options:\n";
    to_yaml(msg.planning_options, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::Place_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::Place_Goal>()
{
  return "moveit_msgs::action::Place_Goal";
}

template<>
inline const char * name<moveit_msgs::action::Place_Goal>()
{
  return "moveit_msgs/action/Place_Goal";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::Place_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'trajectory_stages'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"
// Member 'place_location'
// already included above
// #include "moveit_msgs/msg/detail/place_location__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::Place_Result & msg,
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

  // member: trajectory_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_start:\n";
    to_yaml(msg.trajectory_start, out, indentation + 2);
  }

  // member: trajectory_stages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_stages.size() == 0) {
      out << "trajectory_stages: []\n";
    } else {
      out << "trajectory_stages:\n";
      for (auto item : msg.trajectory_stages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: trajectory_descriptions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_descriptions.size() == 0) {
      out << "trajectory_descriptions: []\n";
    } else {
      out << "trajectory_descriptions:\n";
      for (auto item : msg.trajectory_descriptions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: place_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_location:\n";
    to_yaml(msg.place_location, out, indentation + 2);
  }

  // member: planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_time: ";
    value_to_yaml(msg.planning_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::Place_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::Place_Result>()
{
  return "moveit_msgs::action::Place_Result";
}

template<>
inline const char * name<moveit_msgs::action::Place_Result>()
{
  return "moveit_msgs/action/Place_Result";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::Place_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::Place_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::action::Place_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::Place_Feedback>()
{
  return "moveit_msgs::action::Place_Feedback";
}

template<>
inline const char * name<moveit_msgs::action::Place_Feedback>()
{
  return "moveit_msgs/action/Place_Feedback";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::Place_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "moveit_msgs/action/detail/place__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::Place_SendGoal_Request & msg,
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

inline std::string to_yaml(const moveit_msgs::action::Place_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::Place_SendGoal_Request>()
{
  return "moveit_msgs::action::Place_SendGoal_Request";
}

template<>
inline const char * name<moveit_msgs::action::Place_SendGoal_Request>()
{
  return "moveit_msgs/action/Place_SendGoal_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::Place_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::Place_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::Place_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::Place_SendGoal_Response & msg,
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

inline std::string to_yaml(const moveit_msgs::action::Place_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::Place_SendGoal_Response>()
{
  return "moveit_msgs::action::Place_SendGoal_Response";
}

template<>
inline const char * name<moveit_msgs::action::Place_SendGoal_Response>()
{
  return "moveit_msgs/action/Place_SendGoal_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<moveit_msgs::action::Place_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_SendGoal>()
{
  return "moveit_msgs::action::Place_SendGoal";
}

template<>
inline const char * name<moveit_msgs::action::Place_SendGoal>()
{
  return "moveit_msgs/action/Place_SendGoal";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::Place_SendGoal_Request>::value &&
    has_fixed_size<moveit_msgs::action::Place_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::Place_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::Place_SendGoal_Request>::value &&
    has_bounded_size<moveit_msgs::action::Place_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::action::Place_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::action::Place_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::action::Place_SendGoal_Response>
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
  const moveit_msgs::action::Place_GetResult_Request & msg,
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

inline std::string to_yaml(const moveit_msgs::action::Place_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::Place_GetResult_Request>()
{
  return "moveit_msgs::action::Place_GetResult_Request";
}

template<>
inline const char * name<moveit_msgs::action::Place_GetResult_Request>()
{
  return "moveit_msgs/action/Place_GetResult_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::Place_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/place__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::Place_GetResult_Response & msg,
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

inline std::string to_yaml(const moveit_msgs::action::Place_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::Place_GetResult_Response>()
{
  return "moveit_msgs::action::Place_GetResult_Response";
}

template<>
inline const char * name<moveit_msgs::action::Place_GetResult_Response>()
{
  return "moveit_msgs/action/Place_GetResult_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::Place_Result>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::Place_Result>::value> {};

template<>
struct is_message<moveit_msgs::action::Place_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_GetResult>()
{
  return "moveit_msgs::action::Place_GetResult";
}

template<>
inline const char * name<moveit_msgs::action::Place_GetResult>()
{
  return "moveit_msgs/action/Place_GetResult";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::Place_GetResult_Request>::value &&
    has_fixed_size<moveit_msgs::action::Place_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::Place_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::Place_GetResult_Request>::value &&
    has_bounded_size<moveit_msgs::action::Place_GetResult_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::action::Place_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::action::Place_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::action::Place_GetResult_Response>
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
// #include "moveit_msgs/action/detail/place__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::action::Place_FeedbackMessage & msg,
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

inline std::string to_yaml(const moveit_msgs::action::Place_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::action::Place_FeedbackMessage>()
{
  return "moveit_msgs::action::Place_FeedbackMessage";
}

template<>
inline const char * name<moveit_msgs::action::Place_FeedbackMessage>()
{
  return "moveit_msgs/action/Place_FeedbackMessage";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::Place_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::Place_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::Place_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<moveit_msgs::action::Place>
  : std::true_type
{
};

template<>
struct is_action_goal<moveit_msgs::action::Place_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<moveit_msgs::action::Place_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<moveit_msgs::action::Place_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MOVEIT_MSGS__ACTION__DETAIL__PLACE__TRAITS_HPP_
