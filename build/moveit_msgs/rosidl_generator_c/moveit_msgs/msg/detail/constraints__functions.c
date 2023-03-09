// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/Constraints.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/constraints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_constraints`
#include "moveit_msgs/msg/detail/joint_constraint__functions.h"
// Member `position_constraints`
#include "moveit_msgs/msg/detail/position_constraint__functions.h"
// Member `orientation_constraints`
#include "moveit_msgs/msg/detail/orientation_constraint__functions.h"
// Member `visibility_constraints`
#include "moveit_msgs/msg/detail/visibility_constraint__functions.h"

bool
moveit_msgs__msg__Constraints__init(moveit_msgs__msg__Constraints * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    moveit_msgs__msg__Constraints__fini(msg);
    return false;
  }
  // joint_constraints
  if (!moveit_msgs__msg__JointConstraint__Sequence__init(&msg->joint_constraints, 0)) {
    moveit_msgs__msg__Constraints__fini(msg);
    return false;
  }
  // position_constraints
  if (!moveit_msgs__msg__PositionConstraint__Sequence__init(&msg->position_constraints, 0)) {
    moveit_msgs__msg__Constraints__fini(msg);
    return false;
  }
  // orientation_constraints
  if (!moveit_msgs__msg__OrientationConstraint__Sequence__init(&msg->orientation_constraints, 0)) {
    moveit_msgs__msg__Constraints__fini(msg);
    return false;
  }
  // visibility_constraints
  if (!moveit_msgs__msg__VisibilityConstraint__Sequence__init(&msg->visibility_constraints, 0)) {
    moveit_msgs__msg__Constraints__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__Constraints__fini(moveit_msgs__msg__Constraints * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // joint_constraints
  moveit_msgs__msg__JointConstraint__Sequence__fini(&msg->joint_constraints);
  // position_constraints
  moveit_msgs__msg__PositionConstraint__Sequence__fini(&msg->position_constraints);
  // orientation_constraints
  moveit_msgs__msg__OrientationConstraint__Sequence__fini(&msg->orientation_constraints);
  // visibility_constraints
  moveit_msgs__msg__VisibilityConstraint__Sequence__fini(&msg->visibility_constraints);
}

bool
moveit_msgs__msg__Constraints__are_equal(const moveit_msgs__msg__Constraints * lhs, const moveit_msgs__msg__Constraints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // joint_constraints
  if (!moveit_msgs__msg__JointConstraint__Sequence__are_equal(
      &(lhs->joint_constraints), &(rhs->joint_constraints)))
  {
    return false;
  }
  // position_constraints
  if (!moveit_msgs__msg__PositionConstraint__Sequence__are_equal(
      &(lhs->position_constraints), &(rhs->position_constraints)))
  {
    return false;
  }
  // orientation_constraints
  if (!moveit_msgs__msg__OrientationConstraint__Sequence__are_equal(
      &(lhs->orientation_constraints), &(rhs->orientation_constraints)))
  {
    return false;
  }
  // visibility_constraints
  if (!moveit_msgs__msg__VisibilityConstraint__Sequence__are_equal(
      &(lhs->visibility_constraints), &(rhs->visibility_constraints)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__Constraints__copy(
  const moveit_msgs__msg__Constraints * input,
  moveit_msgs__msg__Constraints * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // joint_constraints
  if (!moveit_msgs__msg__JointConstraint__Sequence__copy(
      &(input->joint_constraints), &(output->joint_constraints)))
  {
    return false;
  }
  // position_constraints
  if (!moveit_msgs__msg__PositionConstraint__Sequence__copy(
      &(input->position_constraints), &(output->position_constraints)))
  {
    return false;
  }
  // orientation_constraints
  if (!moveit_msgs__msg__OrientationConstraint__Sequence__copy(
      &(input->orientation_constraints), &(output->orientation_constraints)))
  {
    return false;
  }
  // visibility_constraints
  if (!moveit_msgs__msg__VisibilityConstraint__Sequence__copy(
      &(input->visibility_constraints), &(output->visibility_constraints)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__Constraints *
moveit_msgs__msg__Constraints__create()
{
  moveit_msgs__msg__Constraints * msg = (moveit_msgs__msg__Constraints *)malloc(sizeof(moveit_msgs__msg__Constraints));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__Constraints));
  bool success = moveit_msgs__msg__Constraints__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__Constraints__destroy(moveit_msgs__msg__Constraints * msg)
{
  if (msg) {
    moveit_msgs__msg__Constraints__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__Constraints__Sequence__init(moveit_msgs__msg__Constraints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__Constraints * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__Constraints *)calloc(size, sizeof(moveit_msgs__msg__Constraints));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__Constraints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__Constraints__fini(&data[i - 1]);
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
moveit_msgs__msg__Constraints__Sequence__fini(moveit_msgs__msg__Constraints__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__Constraints__fini(&array->data[i]);
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

moveit_msgs__msg__Constraints__Sequence *
moveit_msgs__msg__Constraints__Sequence__create(size_t size)
{
  moveit_msgs__msg__Constraints__Sequence * array = (moveit_msgs__msg__Constraints__Sequence *)malloc(sizeof(moveit_msgs__msg__Constraints__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__Constraints__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__Constraints__Sequence__destroy(moveit_msgs__msg__Constraints__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__Constraints__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__msg__Constraints__Sequence__are_equal(const moveit_msgs__msg__Constraints__Sequence * lhs, const moveit_msgs__msg__Constraints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__Constraints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__Constraints__Sequence__copy(
  const moveit_msgs__msg__Constraints__Sequence * input,
  moveit_msgs__msg__Constraints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__Constraints);
    moveit_msgs__msg__Constraints * data =
      (moveit_msgs__msg__Constraints *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__Constraints__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__Constraints__fini(&data[i]);
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
    if (!moveit_msgs__msg__Constraints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
