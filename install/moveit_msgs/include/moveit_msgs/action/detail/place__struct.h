// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:action/Place.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__PLACE__STRUCT_H_
#define MOVEIT_MSGS__ACTION__DETAIL__PLACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'group_name'
// Member 'attached_object_name'
// Member 'support_surface_name'
// Member 'planner_id'
// Member 'allowed_touch_objects'
#include "rosidl_runtime_c/string.h"
// Member 'place_locations'
#include "moveit_msgs/msg/detail/place_location__struct.h"
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"
// Member 'planning_options'
#include "moveit_msgs/msg/detail/planning_options__struct.h"

// Struct defined in action/Place in the package moveit_msgs.
typedef struct moveit_msgs__action__Place_Goal
{
  rosidl_runtime_c__String group_name;
  rosidl_runtime_c__String attached_object_name;
  moveit_msgs__msg__PlaceLocation__Sequence place_locations;
  bool place_eef;
  rosidl_runtime_c__String support_surface_name;
  bool allow_gripper_support_collision;
  moveit_msgs__msg__Constraints path_constraints;
  rosidl_runtime_c__String planner_id;
  rosidl_runtime_c__String__Sequence allowed_touch_objects;
  double allowed_planning_time;
  moveit_msgs__msg__PlanningOptions planning_options;
} moveit_msgs__action__Place_Goal;

// Struct for a sequence of moveit_msgs__action__Place_Goal.
typedef struct moveit_msgs__action__Place_Goal__Sequence
{
  moveit_msgs__action__Place_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Place_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'trajectory_stages'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"
// Member 'trajectory_descriptions'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'place_location'
// already included above
// #include "moveit_msgs/msg/detail/place_location__struct.h"

// Struct defined in action/Place in the package moveit_msgs.
typedef struct moveit_msgs__action__Place_Result
{
  moveit_msgs__msg__MoveItErrorCodes error_code;
  moveit_msgs__msg__RobotState trajectory_start;
  moveit_msgs__msg__RobotTrajectory__Sequence trajectory_stages;
  rosidl_runtime_c__String__Sequence trajectory_descriptions;
  moveit_msgs__msg__PlaceLocation place_location;
  double planning_time;
} moveit_msgs__action__Place_Result;

// Struct for a sequence of moveit_msgs__action__Place_Result.
typedef struct moveit_msgs__action__Place_Result__Sequence
{
  moveit_msgs__action__Place_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Place_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/Place in the package moveit_msgs.
typedef struct moveit_msgs__action__Place_Feedback
{
  rosidl_runtime_c__String state;
} moveit_msgs__action__Place_Feedback;

// Struct for a sequence of moveit_msgs__action__Place_Feedback.
typedef struct moveit_msgs__action__Place_Feedback__Sequence
{
  moveit_msgs__action__Place_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Place_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "moveit_msgs/action/detail/place__struct.h"

// Struct defined in action/Place in the package moveit_msgs.
typedef struct moveit_msgs__action__Place_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__Place_Goal goal;
} moveit_msgs__action__Place_SendGoal_Request;

// Struct for a sequence of moveit_msgs__action__Place_SendGoal_Request.
typedef struct moveit_msgs__action__Place_SendGoal_Request__Sequence
{
  moveit_msgs__action__Place_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Place_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Place in the package moveit_msgs.
typedef struct moveit_msgs__action__Place_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} moveit_msgs__action__Place_SendGoal_Response;

// Struct for a sequence of moveit_msgs__action__Place_SendGoal_Response.
typedef struct moveit_msgs__action__Place_SendGoal_Response__Sequence
{
  moveit_msgs__action__Place_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Place_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Place in the package moveit_msgs.
typedef struct moveit_msgs__action__Place_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} moveit_msgs__action__Place_GetResult_Request;

// Struct for a sequence of moveit_msgs__action__Place_GetResult_Request.
typedef struct moveit_msgs__action__Place_GetResult_Request__Sequence
{
  moveit_msgs__action__Place_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Place_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/place__struct.h"

// Struct defined in action/Place in the package moveit_msgs.
typedef struct moveit_msgs__action__Place_GetResult_Response
{
  int8_t status;
  moveit_msgs__action__Place_Result result;
} moveit_msgs__action__Place_GetResult_Response;

// Struct for a sequence of moveit_msgs__action__Place_GetResult_Response.
typedef struct moveit_msgs__action__Place_GetResult_Response__Sequence
{
  moveit_msgs__action__Place_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Place_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/place__struct.h"

// Struct defined in action/Place in the package moveit_msgs.
typedef struct moveit_msgs__action__Place_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__Place_Feedback feedback;
} moveit_msgs__action__Place_FeedbackMessage;

// Struct for a sequence of moveit_msgs__action__Place_FeedbackMessage.
typedef struct moveit_msgs__action__Place_FeedbackMessage__Sequence
{
  moveit_msgs__action__Place_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Place_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__ACTION__DETAIL__PLACE__STRUCT_H_
