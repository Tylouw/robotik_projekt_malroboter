// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/OrientedBoundingBox.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/oriented_bounding_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `extents`
#include "geometry_msgs/msg/detail/point32__functions.h"

bool
moveit_msgs__msg__OrientedBoundingBox__init(moveit_msgs__msg__OrientedBoundingBox * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    moveit_msgs__msg__OrientedBoundingBox__fini(msg);
    return false;
  }
  // extents
  if (!geometry_msgs__msg__Point32__init(&msg->extents)) {
    moveit_msgs__msg__OrientedBoundingBox__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__OrientedBoundingBox__fini(moveit_msgs__msg__OrientedBoundingBox * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // extents
  geometry_msgs__msg__Point32__fini(&msg->extents);
}

bool
moveit_msgs__msg__OrientedBoundingBox__are_equal(const moveit_msgs__msg__OrientedBoundingBox * lhs, const moveit_msgs__msg__OrientedBoundingBox * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // extents
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->extents), &(rhs->extents)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__OrientedBoundingBox__copy(
  const moveit_msgs__msg__OrientedBoundingBox * input,
  moveit_msgs__msg__OrientedBoundingBox * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // extents
  if (!geometry_msgs__msg__Point32__copy(
      &(input->extents), &(output->extents)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__OrientedBoundingBox *
moveit_msgs__msg__OrientedBoundingBox__create()
{
  moveit_msgs__msg__OrientedBoundingBox * msg = (moveit_msgs__msg__OrientedBoundingBox *)malloc(sizeof(moveit_msgs__msg__OrientedBoundingBox));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__OrientedBoundingBox));
  bool success = moveit_msgs__msg__OrientedBoundingBox__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__OrientedBoundingBox__destroy(moveit_msgs__msg__OrientedBoundingBox * msg)
{
  if (msg) {
    moveit_msgs__msg__OrientedBoundingBox__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__OrientedBoundingBox__Sequence__init(moveit_msgs__msg__OrientedBoundingBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__OrientedBoundingBox * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__OrientedBoundingBox *)calloc(size, sizeof(moveit_msgs__msg__OrientedBoundingBox));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__OrientedBoundingBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__OrientedBoundingBox__fini(&data[i - 1]);
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
moveit_msgs__msg__OrientedBoundingBox__Sequence__fini(moveit_msgs__msg__OrientedBoundingBox__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__OrientedBoundingBox__fini(&array->data[i]);
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

moveit_msgs__msg__OrientedBoundingBox__Sequence *
moveit_msgs__msg__OrientedBoundingBox__Sequence__create(size_t size)
{
  moveit_msgs__msg__OrientedBoundingBox__Sequence * array = (moveit_msgs__msg__OrientedBoundingBox__Sequence *)malloc(sizeof(moveit_msgs__msg__OrientedBoundingBox__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__OrientedBoundingBox__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__OrientedBoundingBox__Sequence__destroy(moveit_msgs__msg__OrientedBoundingBox__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__OrientedBoundingBox__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__msg__OrientedBoundingBox__Sequence__are_equal(const moveit_msgs__msg__OrientedBoundingBox__Sequence * lhs, const moveit_msgs__msg__OrientedBoundingBox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__OrientedBoundingBox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__OrientedBoundingBox__Sequence__copy(
  const moveit_msgs__msg__OrientedBoundingBox__Sequence * input,
  moveit_msgs__msg__OrientedBoundingBox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__OrientedBoundingBox);
    moveit_msgs__msg__OrientedBoundingBox * data =
      (moveit_msgs__msg__OrientedBoundingBox *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__OrientedBoundingBox__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__OrientedBoundingBox__fini(&data[i]);
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
    if (!moveit_msgs__msg__OrientedBoundingBox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
