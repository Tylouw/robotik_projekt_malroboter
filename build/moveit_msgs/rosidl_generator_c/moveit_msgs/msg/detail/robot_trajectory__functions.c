// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `joint_trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
// Member `multi_dof_joint_trajectory`
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__functions.h"

bool
moveit_msgs__msg__RobotTrajectory__init(moveit_msgs__msg__RobotTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->joint_trajectory)) {
    moveit_msgs__msg__RobotTrajectory__fini(msg);
    return false;
  }
  // multi_dof_joint_trajectory
  if (!trajectory_msgs__msg__MultiDOFJointTrajectory__init(&msg->multi_dof_joint_trajectory)) {
    moveit_msgs__msg__RobotTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__RobotTrajectory__fini(moveit_msgs__msg__RobotTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // joint_trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->joint_trajectory);
  // multi_dof_joint_trajectory
  trajectory_msgs__msg__MultiDOFJointTrajectory__fini(&msg->multi_dof_joint_trajectory);
}

bool
moveit_msgs__msg__RobotTrajectory__are_equal(const moveit_msgs__msg__RobotTrajectory * lhs, const moveit_msgs__msg__RobotTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__are_equal(
      &(lhs->joint_trajectory), &(rhs->joint_trajectory)))
  {
    return false;
  }
  // multi_dof_joint_trajectory
  if (!trajectory_msgs__msg__MultiDOFJointTrajectory__are_equal(
      &(lhs->multi_dof_joint_trajectory), &(rhs->multi_dof_joint_trajectory)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__RobotTrajectory__copy(
  const moveit_msgs__msg__RobotTrajectory * input,
  moveit_msgs__msg__RobotTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__copy(
      &(input->joint_trajectory), &(output->joint_trajectory)))
  {
    return false;
  }
  // multi_dof_joint_trajectory
  if (!trajectory_msgs__msg__MultiDOFJointTrajectory__copy(
      &(input->multi_dof_joint_trajectory), &(output->multi_dof_joint_trajectory)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__RobotTrajectory *
moveit_msgs__msg__RobotTrajectory__create()
{
  moveit_msgs__msg__RobotTrajectory * msg = (moveit_msgs__msg__RobotTrajectory *)malloc(sizeof(moveit_msgs__msg__RobotTrajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__RobotTrajectory));
  bool success = moveit_msgs__msg__RobotTrajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__RobotTrajectory__destroy(moveit_msgs__msg__RobotTrajectory * msg)
{
  if (msg) {
    moveit_msgs__msg__RobotTrajectory__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__RobotTrajectory__Sequence__init(moveit_msgs__msg__RobotTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__RobotTrajectory * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__RobotTrajectory *)calloc(size, sizeof(moveit_msgs__msg__RobotTrajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__RobotTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__RobotTrajectory__fini(&data[i - 1]);
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
moveit_msgs__msg__RobotTrajectory__Sequence__fini(moveit_msgs__msg__RobotTrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__RobotTrajectory__fini(&array->data[i]);
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

moveit_msgs__msg__RobotTrajectory__Sequence *
moveit_msgs__msg__RobotTrajectory__Sequence__create(size_t size)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * array = (moveit_msgs__msg__RobotTrajectory__Sequence *)malloc(sizeof(moveit_msgs__msg__RobotTrajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__RobotTrajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__RobotTrajectory__Sequence__destroy(moveit_msgs__msg__RobotTrajectory__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__RobotTrajectory__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__msg__RobotTrajectory__Sequence__are_equal(const moveit_msgs__msg__RobotTrajectory__Sequence * lhs, const moveit_msgs__msg__RobotTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__RobotTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__RobotTrajectory__Sequence__copy(
  const moveit_msgs__msg__RobotTrajectory__Sequence * input,
  moveit_msgs__msg__RobotTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__RobotTrajectory);
    moveit_msgs__msg__RobotTrajectory * data =
      (moveit_msgs__msg__RobotTrajectory *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__RobotTrajectory__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__RobotTrajectory__fini(&data[i]);
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
    if (!moveit_msgs__msg__RobotTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
