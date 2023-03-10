// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:action/MoveGroup.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/action/detail/move_group__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `request`
#include "moveit_msgs/msg/detail/motion_plan_request__functions.h"
// Member `planning_options`
#include "moveit_msgs/msg/detail/planning_options__functions.h"

bool
moveit_msgs__action__MoveGroup_Goal__init(moveit_msgs__action__MoveGroup_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!moveit_msgs__msg__MotionPlanRequest__init(&msg->request)) {
    moveit_msgs__action__MoveGroup_Goal__fini(msg);
    return false;
  }
  // planning_options
  if (!moveit_msgs__msg__PlanningOptions__init(&msg->planning_options)) {
    moveit_msgs__action__MoveGroup_Goal__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__MoveGroup_Goal__fini(moveit_msgs__action__MoveGroup_Goal * msg)
{
  if (!msg) {
    return;
  }
  // request
  moveit_msgs__msg__MotionPlanRequest__fini(&msg->request);
  // planning_options
  moveit_msgs__msg__PlanningOptions__fini(&msg->planning_options);
}

bool
moveit_msgs__action__MoveGroup_Goal__are_equal(const moveit_msgs__action__MoveGroup_Goal * lhs, const moveit_msgs__action__MoveGroup_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!moveit_msgs__msg__MotionPlanRequest__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // planning_options
  if (!moveit_msgs__msg__PlanningOptions__are_equal(
      &(lhs->planning_options), &(rhs->planning_options)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_Goal__copy(
  const moveit_msgs__action__MoveGroup_Goal * input,
  moveit_msgs__action__MoveGroup_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!moveit_msgs__msg__MotionPlanRequest__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // planning_options
  if (!moveit_msgs__msg__PlanningOptions__copy(
      &(input->planning_options), &(output->planning_options)))
  {
    return false;
  }
  return true;
}

moveit_msgs__action__MoveGroup_Goal *
moveit_msgs__action__MoveGroup_Goal__create()
{
  moveit_msgs__action__MoveGroup_Goal * msg = (moveit_msgs__action__MoveGroup_Goal *)malloc(sizeof(moveit_msgs__action__MoveGroup_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__MoveGroup_Goal));
  bool success = moveit_msgs__action__MoveGroup_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__MoveGroup_Goal__destroy(moveit_msgs__action__MoveGroup_Goal * msg)
{
  if (msg) {
    moveit_msgs__action__MoveGroup_Goal__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__MoveGroup_Goal__Sequence__init(moveit_msgs__action__MoveGroup_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__MoveGroup_Goal * data = NULL;
  if (size) {
    data = (moveit_msgs__action__MoveGroup_Goal *)calloc(size, sizeof(moveit_msgs__action__MoveGroup_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__MoveGroup_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__MoveGroup_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__action__MoveGroup_Goal__Sequence__fini(moveit_msgs__action__MoveGroup_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__MoveGroup_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__action__MoveGroup_Goal__Sequence *
moveit_msgs__action__MoveGroup_Goal__Sequence__create(size_t size)
{
  moveit_msgs__action__MoveGroup_Goal__Sequence * array = (moveit_msgs__action__MoveGroup_Goal__Sequence *)malloc(sizeof(moveit_msgs__action__MoveGroup_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__MoveGroup_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__MoveGroup_Goal__Sequence__destroy(moveit_msgs__action__MoveGroup_Goal__Sequence * array)
{
  if (array) {
    moveit_msgs__action__MoveGroup_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__action__MoveGroup_Goal__Sequence__are_equal(const moveit_msgs__action__MoveGroup_Goal__Sequence * lhs, const moveit_msgs__action__MoveGroup_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_Goal__Sequence__copy(
  const moveit_msgs__action__MoveGroup_Goal__Sequence * input,
  moveit_msgs__action__MoveGroup_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__action__MoveGroup_Goal);
    moveit_msgs__action__MoveGroup_Goal * data =
      (moveit_msgs__action__MoveGroup_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__action__MoveGroup_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__action__MoveGroup_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `planned_trajectory`
// Member `executed_trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"

bool
moveit_msgs__action__MoveGroup_Result__init(moveit_msgs__action__MoveGroup_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__action__MoveGroup_Result__fini(msg);
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__init(&msg->trajectory_start)) {
    moveit_msgs__action__MoveGroup_Result__fini(msg);
    return false;
  }
  // planned_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__init(&msg->planned_trajectory)) {
    moveit_msgs__action__MoveGroup_Result__fini(msg);
    return false;
  }
  // executed_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__init(&msg->executed_trajectory)) {
    moveit_msgs__action__MoveGroup_Result__fini(msg);
    return false;
  }
  // planning_time
  return true;
}

void
moveit_msgs__action__MoveGroup_Result__fini(moveit_msgs__action__MoveGroup_Result * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
  // trajectory_start
  moveit_msgs__msg__RobotState__fini(&msg->trajectory_start);
  // planned_trajectory
  moveit_msgs__msg__RobotTrajectory__fini(&msg->planned_trajectory);
  // executed_trajectory
  moveit_msgs__msg__RobotTrajectory__fini(&msg->executed_trajectory);
  // planning_time
}

bool
moveit_msgs__action__MoveGroup_Result__are_equal(const moveit_msgs__action__MoveGroup_Result * lhs, const moveit_msgs__action__MoveGroup_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->trajectory_start), &(rhs->trajectory_start)))
  {
    return false;
  }
  // planned_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__are_equal(
      &(lhs->planned_trajectory), &(rhs->planned_trajectory)))
  {
    return false;
  }
  // executed_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__are_equal(
      &(lhs->executed_trajectory), &(rhs->executed_trajectory)))
  {
    return false;
  }
  // planning_time
  if (lhs->planning_time != rhs->planning_time) {
    return false;
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_Result__copy(
  const moveit_msgs__action__MoveGroup_Result * input,
  moveit_msgs__action__MoveGroup_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->trajectory_start), &(output->trajectory_start)))
  {
    return false;
  }
  // planned_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__copy(
      &(input->planned_trajectory), &(output->planned_trajectory)))
  {
    return false;
  }
  // executed_trajectory
  if (!moveit_msgs__msg__RobotTrajectory__copy(
      &(input->executed_trajectory), &(output->executed_trajectory)))
  {
    return false;
  }
  // planning_time
  output->planning_time = input->planning_time;
  return true;
}

moveit_msgs__action__MoveGroup_Result *
moveit_msgs__action__MoveGroup_Result__create()
{
  moveit_msgs__action__MoveGroup_Result * msg = (moveit_msgs__action__MoveGroup_Result *)malloc(sizeof(moveit_msgs__action__MoveGroup_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__MoveGroup_Result));
  bool success = moveit_msgs__action__MoveGroup_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__MoveGroup_Result__destroy(moveit_msgs__action__MoveGroup_Result * msg)
{
  if (msg) {
    moveit_msgs__action__MoveGroup_Result__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__MoveGroup_Result__Sequence__init(moveit_msgs__action__MoveGroup_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__MoveGroup_Result * data = NULL;
  if (size) {
    data = (moveit_msgs__action__MoveGroup_Result *)calloc(size, sizeof(moveit_msgs__action__MoveGroup_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__MoveGroup_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__MoveGroup_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__action__MoveGroup_Result__Sequence__fini(moveit_msgs__action__MoveGroup_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__MoveGroup_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__action__MoveGroup_Result__Sequence *
moveit_msgs__action__MoveGroup_Result__Sequence__create(size_t size)
{
  moveit_msgs__action__MoveGroup_Result__Sequence * array = (moveit_msgs__action__MoveGroup_Result__Sequence *)malloc(sizeof(moveit_msgs__action__MoveGroup_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__MoveGroup_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__MoveGroup_Result__Sequence__destroy(moveit_msgs__action__MoveGroup_Result__Sequence * array)
{
  if (array) {
    moveit_msgs__action__MoveGroup_Result__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__action__MoveGroup_Result__Sequence__are_equal(const moveit_msgs__action__MoveGroup_Result__Sequence * lhs, const moveit_msgs__action__MoveGroup_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_Result__Sequence__copy(
  const moveit_msgs__action__MoveGroup_Result__Sequence * input,
  moveit_msgs__action__MoveGroup_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__action__MoveGroup_Result);
    moveit_msgs__action__MoveGroup_Result * data =
      (moveit_msgs__action__MoveGroup_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__action__MoveGroup_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__action__MoveGroup_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__action__MoveGroup_Feedback__init(moveit_msgs__action__MoveGroup_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    moveit_msgs__action__MoveGroup_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__MoveGroup_Feedback__fini(moveit_msgs__action__MoveGroup_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
moveit_msgs__action__MoveGroup_Feedback__are_equal(const moveit_msgs__action__MoveGroup_Feedback * lhs, const moveit_msgs__action__MoveGroup_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_Feedback__copy(
  const moveit_msgs__action__MoveGroup_Feedback * input,
  moveit_msgs__action__MoveGroup_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

moveit_msgs__action__MoveGroup_Feedback *
moveit_msgs__action__MoveGroup_Feedback__create()
{
  moveit_msgs__action__MoveGroup_Feedback * msg = (moveit_msgs__action__MoveGroup_Feedback *)malloc(sizeof(moveit_msgs__action__MoveGroup_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__MoveGroup_Feedback));
  bool success = moveit_msgs__action__MoveGroup_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__MoveGroup_Feedback__destroy(moveit_msgs__action__MoveGroup_Feedback * msg)
{
  if (msg) {
    moveit_msgs__action__MoveGroup_Feedback__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__MoveGroup_Feedback__Sequence__init(moveit_msgs__action__MoveGroup_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__MoveGroup_Feedback * data = NULL;
  if (size) {
    data = (moveit_msgs__action__MoveGroup_Feedback *)calloc(size, sizeof(moveit_msgs__action__MoveGroup_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__MoveGroup_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__MoveGroup_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__action__MoveGroup_Feedback__Sequence__fini(moveit_msgs__action__MoveGroup_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__MoveGroup_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__action__MoveGroup_Feedback__Sequence *
moveit_msgs__action__MoveGroup_Feedback__Sequence__create(size_t size)
{
  moveit_msgs__action__MoveGroup_Feedback__Sequence * array = (moveit_msgs__action__MoveGroup_Feedback__Sequence *)malloc(sizeof(moveit_msgs__action__MoveGroup_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__MoveGroup_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__MoveGroup_Feedback__Sequence__destroy(moveit_msgs__action__MoveGroup_Feedback__Sequence * array)
{
  if (array) {
    moveit_msgs__action__MoveGroup_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__action__MoveGroup_Feedback__Sequence__are_equal(const moveit_msgs__action__MoveGroup_Feedback__Sequence * lhs, const moveit_msgs__action__MoveGroup_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_Feedback__Sequence__copy(
  const moveit_msgs__action__MoveGroup_Feedback__Sequence * input,
  moveit_msgs__action__MoveGroup_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__action__MoveGroup_Feedback);
    moveit_msgs__action__MoveGroup_Feedback * data =
      (moveit_msgs__action__MoveGroup_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__action__MoveGroup_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__action__MoveGroup_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "moveit_msgs/action/detail/move_group__functions.h"

bool
moveit_msgs__action__MoveGroup_SendGoal_Request__init(moveit_msgs__action__MoveGroup_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    moveit_msgs__action__MoveGroup_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!moveit_msgs__action__MoveGroup_Goal__init(&msg->goal)) {
    moveit_msgs__action__MoveGroup_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__MoveGroup_SendGoal_Request__fini(moveit_msgs__action__MoveGroup_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  moveit_msgs__action__MoveGroup_Goal__fini(&msg->goal);
}

bool
moveit_msgs__action__MoveGroup_SendGoal_Request__are_equal(const moveit_msgs__action__MoveGroup_SendGoal_Request * lhs, const moveit_msgs__action__MoveGroup_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!moveit_msgs__action__MoveGroup_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_SendGoal_Request__copy(
  const moveit_msgs__action__MoveGroup_SendGoal_Request * input,
  moveit_msgs__action__MoveGroup_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!moveit_msgs__action__MoveGroup_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

moveit_msgs__action__MoveGroup_SendGoal_Request *
moveit_msgs__action__MoveGroup_SendGoal_Request__create()
{
  moveit_msgs__action__MoveGroup_SendGoal_Request * msg = (moveit_msgs__action__MoveGroup_SendGoal_Request *)malloc(sizeof(moveit_msgs__action__MoveGroup_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__MoveGroup_SendGoal_Request));
  bool success = moveit_msgs__action__MoveGroup_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__MoveGroup_SendGoal_Request__destroy(moveit_msgs__action__MoveGroup_SendGoal_Request * msg)
{
  if (msg) {
    moveit_msgs__action__MoveGroup_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence__init(moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__MoveGroup_SendGoal_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__action__MoveGroup_SendGoal_Request *)calloc(size, sizeof(moveit_msgs__action__MoveGroup_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__MoveGroup_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__MoveGroup_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence__fini(moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__MoveGroup_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence *
moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence__create(size_t size)
{
  moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence * array = (moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence *)malloc(sizeof(moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence__destroy(moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence__are_equal(const moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence * lhs, const moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence__copy(
  const moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence * input,
  moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__action__MoveGroup_SendGoal_Request);
    moveit_msgs__action__MoveGroup_SendGoal_Request * data =
      (moveit_msgs__action__MoveGroup_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__action__MoveGroup_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__action__MoveGroup_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
moveit_msgs__action__MoveGroup_SendGoal_Response__init(moveit_msgs__action__MoveGroup_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    moveit_msgs__action__MoveGroup_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__MoveGroup_SendGoal_Response__fini(moveit_msgs__action__MoveGroup_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
moveit_msgs__action__MoveGroup_SendGoal_Response__are_equal(const moveit_msgs__action__MoveGroup_SendGoal_Response * lhs, const moveit_msgs__action__MoveGroup_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_SendGoal_Response__copy(
  const moveit_msgs__action__MoveGroup_SendGoal_Response * input,
  moveit_msgs__action__MoveGroup_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

moveit_msgs__action__MoveGroup_SendGoal_Response *
moveit_msgs__action__MoveGroup_SendGoal_Response__create()
{
  moveit_msgs__action__MoveGroup_SendGoal_Response * msg = (moveit_msgs__action__MoveGroup_SendGoal_Response *)malloc(sizeof(moveit_msgs__action__MoveGroup_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__MoveGroup_SendGoal_Response));
  bool success = moveit_msgs__action__MoveGroup_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__MoveGroup_SendGoal_Response__destroy(moveit_msgs__action__MoveGroup_SendGoal_Response * msg)
{
  if (msg) {
    moveit_msgs__action__MoveGroup_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence__init(moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__MoveGroup_SendGoal_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__action__MoveGroup_SendGoal_Response *)calloc(size, sizeof(moveit_msgs__action__MoveGroup_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__MoveGroup_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__MoveGroup_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence__fini(moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__MoveGroup_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence *
moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence__create(size_t size)
{
  moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence * array = (moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence *)malloc(sizeof(moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence__destroy(moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence__are_equal(const moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence * lhs, const moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence__copy(
  const moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence * input,
  moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__action__MoveGroup_SendGoal_Response);
    moveit_msgs__action__MoveGroup_SendGoal_Response * data =
      (moveit_msgs__action__MoveGroup_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__action__MoveGroup_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__action__MoveGroup_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
moveit_msgs__action__MoveGroup_GetResult_Request__init(moveit_msgs__action__MoveGroup_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    moveit_msgs__action__MoveGroup_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__MoveGroup_GetResult_Request__fini(moveit_msgs__action__MoveGroup_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
moveit_msgs__action__MoveGroup_GetResult_Request__are_equal(const moveit_msgs__action__MoveGroup_GetResult_Request * lhs, const moveit_msgs__action__MoveGroup_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_GetResult_Request__copy(
  const moveit_msgs__action__MoveGroup_GetResult_Request * input,
  moveit_msgs__action__MoveGroup_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

moveit_msgs__action__MoveGroup_GetResult_Request *
moveit_msgs__action__MoveGroup_GetResult_Request__create()
{
  moveit_msgs__action__MoveGroup_GetResult_Request * msg = (moveit_msgs__action__MoveGroup_GetResult_Request *)malloc(sizeof(moveit_msgs__action__MoveGroup_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__MoveGroup_GetResult_Request));
  bool success = moveit_msgs__action__MoveGroup_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__MoveGroup_GetResult_Request__destroy(moveit_msgs__action__MoveGroup_GetResult_Request * msg)
{
  if (msg) {
    moveit_msgs__action__MoveGroup_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__MoveGroup_GetResult_Request__Sequence__init(moveit_msgs__action__MoveGroup_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__MoveGroup_GetResult_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__action__MoveGroup_GetResult_Request *)calloc(size, sizeof(moveit_msgs__action__MoveGroup_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__MoveGroup_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__MoveGroup_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__action__MoveGroup_GetResult_Request__Sequence__fini(moveit_msgs__action__MoveGroup_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__MoveGroup_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__action__MoveGroup_GetResult_Request__Sequence *
moveit_msgs__action__MoveGroup_GetResult_Request__Sequence__create(size_t size)
{
  moveit_msgs__action__MoveGroup_GetResult_Request__Sequence * array = (moveit_msgs__action__MoveGroup_GetResult_Request__Sequence *)malloc(sizeof(moveit_msgs__action__MoveGroup_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__MoveGroup_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__MoveGroup_GetResult_Request__Sequence__destroy(moveit_msgs__action__MoveGroup_GetResult_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__action__MoveGroup_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__action__MoveGroup_GetResult_Request__Sequence__are_equal(const moveit_msgs__action__MoveGroup_GetResult_Request__Sequence * lhs, const moveit_msgs__action__MoveGroup_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_GetResult_Request__Sequence__copy(
  const moveit_msgs__action__MoveGroup_GetResult_Request__Sequence * input,
  moveit_msgs__action__MoveGroup_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__action__MoveGroup_GetResult_Request);
    moveit_msgs__action__MoveGroup_GetResult_Request * data =
      (moveit_msgs__action__MoveGroup_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__action__MoveGroup_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__action__MoveGroup_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "moveit_msgs/action/detail/move_group__functions.h"

bool
moveit_msgs__action__MoveGroup_GetResult_Response__init(moveit_msgs__action__MoveGroup_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!moveit_msgs__action__MoveGroup_Result__init(&msg->result)) {
    moveit_msgs__action__MoveGroup_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__MoveGroup_GetResult_Response__fini(moveit_msgs__action__MoveGroup_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  moveit_msgs__action__MoveGroup_Result__fini(&msg->result);
}

bool
moveit_msgs__action__MoveGroup_GetResult_Response__are_equal(const moveit_msgs__action__MoveGroup_GetResult_Response * lhs, const moveit_msgs__action__MoveGroup_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!moveit_msgs__action__MoveGroup_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_GetResult_Response__copy(
  const moveit_msgs__action__MoveGroup_GetResult_Response * input,
  moveit_msgs__action__MoveGroup_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!moveit_msgs__action__MoveGroup_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

moveit_msgs__action__MoveGroup_GetResult_Response *
moveit_msgs__action__MoveGroup_GetResult_Response__create()
{
  moveit_msgs__action__MoveGroup_GetResult_Response * msg = (moveit_msgs__action__MoveGroup_GetResult_Response *)malloc(sizeof(moveit_msgs__action__MoveGroup_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__MoveGroup_GetResult_Response));
  bool success = moveit_msgs__action__MoveGroup_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__MoveGroup_GetResult_Response__destroy(moveit_msgs__action__MoveGroup_GetResult_Response * msg)
{
  if (msg) {
    moveit_msgs__action__MoveGroup_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__MoveGroup_GetResult_Response__Sequence__init(moveit_msgs__action__MoveGroup_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__MoveGroup_GetResult_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__action__MoveGroup_GetResult_Response *)calloc(size, sizeof(moveit_msgs__action__MoveGroup_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__MoveGroup_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__MoveGroup_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__action__MoveGroup_GetResult_Response__Sequence__fini(moveit_msgs__action__MoveGroup_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__MoveGroup_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__action__MoveGroup_GetResult_Response__Sequence *
moveit_msgs__action__MoveGroup_GetResult_Response__Sequence__create(size_t size)
{
  moveit_msgs__action__MoveGroup_GetResult_Response__Sequence * array = (moveit_msgs__action__MoveGroup_GetResult_Response__Sequence *)malloc(sizeof(moveit_msgs__action__MoveGroup_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__MoveGroup_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__MoveGroup_GetResult_Response__Sequence__destroy(moveit_msgs__action__MoveGroup_GetResult_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__action__MoveGroup_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__action__MoveGroup_GetResult_Response__Sequence__are_equal(const moveit_msgs__action__MoveGroup_GetResult_Response__Sequence * lhs, const moveit_msgs__action__MoveGroup_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_GetResult_Response__Sequence__copy(
  const moveit_msgs__action__MoveGroup_GetResult_Response__Sequence * input,
  moveit_msgs__action__MoveGroup_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__action__MoveGroup_GetResult_Response);
    moveit_msgs__action__MoveGroup_GetResult_Response * data =
      (moveit_msgs__action__MoveGroup_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__action__MoveGroup_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__action__MoveGroup_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "moveit_msgs/action/detail/move_group__functions.h"

bool
moveit_msgs__action__MoveGroup_FeedbackMessage__init(moveit_msgs__action__MoveGroup_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    moveit_msgs__action__MoveGroup_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!moveit_msgs__action__MoveGroup_Feedback__init(&msg->feedback)) {
    moveit_msgs__action__MoveGroup_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__MoveGroup_FeedbackMessage__fini(moveit_msgs__action__MoveGroup_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  moveit_msgs__action__MoveGroup_Feedback__fini(&msg->feedback);
}

bool
moveit_msgs__action__MoveGroup_FeedbackMessage__are_equal(const moveit_msgs__action__MoveGroup_FeedbackMessage * lhs, const moveit_msgs__action__MoveGroup_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!moveit_msgs__action__MoveGroup_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_FeedbackMessage__copy(
  const moveit_msgs__action__MoveGroup_FeedbackMessage * input,
  moveit_msgs__action__MoveGroup_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!moveit_msgs__action__MoveGroup_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

moveit_msgs__action__MoveGroup_FeedbackMessage *
moveit_msgs__action__MoveGroup_FeedbackMessage__create()
{
  moveit_msgs__action__MoveGroup_FeedbackMessage * msg = (moveit_msgs__action__MoveGroup_FeedbackMessage *)malloc(sizeof(moveit_msgs__action__MoveGroup_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__MoveGroup_FeedbackMessage));
  bool success = moveit_msgs__action__MoveGroup_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__MoveGroup_FeedbackMessage__destroy(moveit_msgs__action__MoveGroup_FeedbackMessage * msg)
{
  if (msg) {
    moveit_msgs__action__MoveGroup_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence__init(moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__MoveGroup_FeedbackMessage * data = NULL;
  if (size) {
    data = (moveit_msgs__action__MoveGroup_FeedbackMessage *)calloc(size, sizeof(moveit_msgs__action__MoveGroup_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__MoveGroup_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__MoveGroup_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence__fini(moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__MoveGroup_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence *
moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence__create(size_t size)
{
  moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence * array = (moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence *)malloc(sizeof(moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence__destroy(moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence * array)
{
  if (array) {
    moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence__are_equal(const moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence * lhs, const moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence__copy(
  const moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence * input,
  moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__action__MoveGroup_FeedbackMessage);
    moveit_msgs__action__MoveGroup_FeedbackMessage * data =
      (moveit_msgs__action__MoveGroup_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__action__MoveGroup_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__action__MoveGroup_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__action__MoveGroup_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
