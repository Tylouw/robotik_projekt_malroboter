// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PositionConstraint.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/position_constraint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `link_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `target_point_offset`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `constraint_region`
#include "moveit_msgs/msg/detail/bounding_volume__functions.h"

bool
moveit_msgs__msg__PositionConstraint__init(moveit_msgs__msg__PositionConstraint * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__PositionConstraint__fini(msg);
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__init(&msg->link_name)) {
    moveit_msgs__msg__PositionConstraint__fini(msg);
    return false;
  }
  // target_point_offset
  if (!geometry_msgs__msg__Vector3__init(&msg->target_point_offset)) {
    moveit_msgs__msg__PositionConstraint__fini(msg);
    return false;
  }
  // constraint_region
  if (!moveit_msgs__msg__BoundingVolume__init(&msg->constraint_region)) {
    moveit_msgs__msg__PositionConstraint__fini(msg);
    return false;
  }
  // weight
  return true;
}

void
moveit_msgs__msg__PositionConstraint__fini(moveit_msgs__msg__PositionConstraint * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // link_name
  rosidl_runtime_c__String__fini(&msg->link_name);
  // target_point_offset
  geometry_msgs__msg__Vector3__fini(&msg->target_point_offset);
  // constraint_region
  moveit_msgs__msg__BoundingVolume__fini(&msg->constraint_region);
  // weight
}

bool
moveit_msgs__msg__PositionConstraint__are_equal(const moveit_msgs__msg__PositionConstraint * lhs, const moveit_msgs__msg__PositionConstraint * rhs)
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
  // link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_name), &(rhs->link_name)))
  {
    return false;
  }
  // target_point_offset
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->target_point_offset), &(rhs->target_point_offset)))
  {
    return false;
  }
  // constraint_region
  if (!moveit_msgs__msg__BoundingVolume__are_equal(
      &(lhs->constraint_region), &(rhs->constraint_region)))
  {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__PositionConstraint__copy(
  const moveit_msgs__msg__PositionConstraint * input,
  moveit_msgs__msg__PositionConstraint * output)
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
  // link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->link_name), &(output->link_name)))
  {
    return false;
  }
  // target_point_offset
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->target_point_offset), &(output->target_point_offset)))
  {
    return false;
  }
  // constraint_region
  if (!moveit_msgs__msg__BoundingVolume__copy(
      &(input->constraint_region), &(output->constraint_region)))
  {
    return false;
  }
  // weight
  output->weight = input->weight;
  return true;
}

moveit_msgs__msg__PositionConstraint *
moveit_msgs__msg__PositionConstraint__create()
{
  moveit_msgs__msg__PositionConstraint * msg = (moveit_msgs__msg__PositionConstraint *)malloc(sizeof(moveit_msgs__msg__PositionConstraint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PositionConstraint));
  bool success = moveit_msgs__msg__PositionConstraint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PositionConstraint__destroy(moveit_msgs__msg__PositionConstraint * msg)
{
  if (msg) {
    moveit_msgs__msg__PositionConstraint__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__PositionConstraint__Sequence__init(moveit_msgs__msg__PositionConstraint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__PositionConstraint * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__PositionConstraint *)calloc(size, sizeof(moveit_msgs__msg__PositionConstraint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PositionConstraint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PositionConstraint__fini(&data[i - 1]);
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
moveit_msgs__msg__PositionConstraint__Sequence__fini(moveit_msgs__msg__PositionConstraint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__PositionConstraint__fini(&array->data[i]);
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

moveit_msgs__msg__PositionConstraint__Sequence *
moveit_msgs__msg__PositionConstraint__Sequence__create(size_t size)
{
  moveit_msgs__msg__PositionConstraint__Sequence * array = (moveit_msgs__msg__PositionConstraint__Sequence *)malloc(sizeof(moveit_msgs__msg__PositionConstraint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PositionConstraint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PositionConstraint__Sequence__destroy(moveit_msgs__msg__PositionConstraint__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__PositionConstraint__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__msg__PositionConstraint__Sequence__are_equal(const moveit_msgs__msg__PositionConstraint__Sequence * lhs, const moveit_msgs__msg__PositionConstraint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__PositionConstraint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__PositionConstraint__Sequence__copy(
  const moveit_msgs__msg__PositionConstraint__Sequence * input,
  moveit_msgs__msg__PositionConstraint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__PositionConstraint);
    moveit_msgs__msg__PositionConstraint * data =
      (moveit_msgs__msg__PositionConstraint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__PositionConstraint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__PositionConstraint__fini(&data[i]);
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
    if (!moveit_msgs__msg__PositionConstraint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
