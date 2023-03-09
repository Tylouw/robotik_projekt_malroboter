// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/cartesian_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tracked_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `points`
#include "moveit_msgs/msg/detail/cartesian_trajectory_point__functions.h"

bool
moveit_msgs__msg__CartesianTrajectory__init(moveit_msgs__msg__CartesianTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__CartesianTrajectory__fini(msg);
    return false;
  }
  // tracked_frame
  if (!rosidl_runtime_c__String__init(&msg->tracked_frame)) {
    moveit_msgs__msg__CartesianTrajectory__fini(msg);
    return false;
  }
  // points
  if (!moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__init(&msg->points, 0)) {
    moveit_msgs__msg__CartesianTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__CartesianTrajectory__fini(moveit_msgs__msg__CartesianTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tracked_frame
  rosidl_runtime_c__String__fini(&msg->tracked_frame);
  // points
  moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(&msg->points);
}

bool
moveit_msgs__msg__CartesianTrajectory__are_equal(const moveit_msgs__msg__CartesianTrajectory * lhs, const moveit_msgs__msg__CartesianTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // tracked_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tracked_frame), &(rhs->tracked_frame)))
  {
    return false;
  }
  // points
  if (!moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__CartesianTrajectory__copy(
  const moveit_msgs__msg__CartesianTrajectory * input,
  moveit_msgs__msg__CartesianTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // tracked_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->tracked_frame), &(output->tracked_frame)))
  {
    return false;
  }
  // points
  if (!moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__CartesianTrajectory *
moveit_msgs__msg__CartesianTrajectory__create()
{
  moveit_msgs__msg__CartesianTrajectory * msg = (moveit_msgs__msg__CartesianTrajectory *)malloc(sizeof(moveit_msgs__msg__CartesianTrajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__CartesianTrajectory));
  bool success = moveit_msgs__msg__CartesianTrajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__CartesianTrajectory__destroy(moveit_msgs__msg__CartesianTrajectory * msg)
{
  if (msg) {
    moveit_msgs__msg__CartesianTrajectory__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__CartesianTrajectory__Sequence__init(moveit_msgs__msg__CartesianTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__CartesianTrajectory * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__CartesianTrajectory *)calloc(size, sizeof(moveit_msgs__msg__CartesianTrajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__CartesianTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__CartesianTrajectory__fini(&data[i - 1]);
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
moveit_msgs__msg__CartesianTrajectory__Sequence__fini(moveit_msgs__msg__CartesianTrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__CartesianTrajectory__fini(&array->data[i]);
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

moveit_msgs__msg__CartesianTrajectory__Sequence *
moveit_msgs__msg__CartesianTrajectory__Sequence__create(size_t size)
{
  moveit_msgs__msg__CartesianTrajectory__Sequence * array = (moveit_msgs__msg__CartesianTrajectory__Sequence *)malloc(sizeof(moveit_msgs__msg__CartesianTrajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__CartesianTrajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__CartesianTrajectory__Sequence__destroy(moveit_msgs__msg__CartesianTrajectory__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__CartesianTrajectory__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__msg__CartesianTrajectory__Sequence__are_equal(const moveit_msgs__msg__CartesianTrajectory__Sequence * lhs, const moveit_msgs__msg__CartesianTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__CartesianTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__CartesianTrajectory__Sequence__copy(
  const moveit_msgs__msg__CartesianTrajectory__Sequence * input,
  moveit_msgs__msg__CartesianTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__CartesianTrajectory);
    moveit_msgs__msg__CartesianTrajectory * data =
      (moveit_msgs__msg__CartesianTrajectory *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__CartesianTrajectory__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__CartesianTrajectory__fini(&data[i]);
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
    if (!moveit_msgs__msg__CartesianTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
