// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/AttachedCollisionObject.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/attached_collision_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `link_name`
// Member `touch_links`
#include "rosidl_runtime_c/string_functions.h"
// Member `object`
#include "moveit_msgs/msg/detail/collision_object__functions.h"
// Member `detach_posture`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"

bool
moveit_msgs__msg__AttachedCollisionObject__init(moveit_msgs__msg__AttachedCollisionObject * msg)
{
  if (!msg) {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__init(&msg->link_name)) {
    moveit_msgs__msg__AttachedCollisionObject__fini(msg);
    return false;
  }
  // object
  if (!moveit_msgs__msg__CollisionObject__init(&msg->object)) {
    moveit_msgs__msg__AttachedCollisionObject__fini(msg);
    return false;
  }
  // touch_links
  if (!rosidl_runtime_c__String__Sequence__init(&msg->touch_links, 0)) {
    moveit_msgs__msg__AttachedCollisionObject__fini(msg);
    return false;
  }
  // detach_posture
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->detach_posture)) {
    moveit_msgs__msg__AttachedCollisionObject__fini(msg);
    return false;
  }
  // weight
  return true;
}

void
moveit_msgs__msg__AttachedCollisionObject__fini(moveit_msgs__msg__AttachedCollisionObject * msg)
{
  if (!msg) {
    return;
  }
  // link_name
  rosidl_runtime_c__String__fini(&msg->link_name);
  // object
  moveit_msgs__msg__CollisionObject__fini(&msg->object);
  // touch_links
  rosidl_runtime_c__String__Sequence__fini(&msg->touch_links);
  // detach_posture
  trajectory_msgs__msg__JointTrajectory__fini(&msg->detach_posture);
  // weight
}

bool
moveit_msgs__msg__AttachedCollisionObject__are_equal(const moveit_msgs__msg__AttachedCollisionObject * lhs, const moveit_msgs__msg__AttachedCollisionObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_name), &(rhs->link_name)))
  {
    return false;
  }
  // object
  if (!moveit_msgs__msg__CollisionObject__are_equal(
      &(lhs->object), &(rhs->object)))
  {
    return false;
  }
  // touch_links
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->touch_links), &(rhs->touch_links)))
  {
    return false;
  }
  // detach_posture
  if (!trajectory_msgs__msg__JointTrajectory__are_equal(
      &(lhs->detach_posture), &(rhs->detach_posture)))
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
moveit_msgs__msg__AttachedCollisionObject__copy(
  const moveit_msgs__msg__AttachedCollisionObject * input,
  moveit_msgs__msg__AttachedCollisionObject * output)
{
  if (!input || !output) {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->link_name), &(output->link_name)))
  {
    return false;
  }
  // object
  if (!moveit_msgs__msg__CollisionObject__copy(
      &(input->object), &(output->object)))
  {
    return false;
  }
  // touch_links
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->touch_links), &(output->touch_links)))
  {
    return false;
  }
  // detach_posture
  if (!trajectory_msgs__msg__JointTrajectory__copy(
      &(input->detach_posture), &(output->detach_posture)))
  {
    return false;
  }
  // weight
  output->weight = input->weight;
  return true;
}

moveit_msgs__msg__AttachedCollisionObject *
moveit_msgs__msg__AttachedCollisionObject__create()
{
  moveit_msgs__msg__AttachedCollisionObject * msg = (moveit_msgs__msg__AttachedCollisionObject *)malloc(sizeof(moveit_msgs__msg__AttachedCollisionObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__AttachedCollisionObject));
  bool success = moveit_msgs__msg__AttachedCollisionObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__AttachedCollisionObject__destroy(moveit_msgs__msg__AttachedCollisionObject * msg)
{
  if (msg) {
    moveit_msgs__msg__AttachedCollisionObject__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__AttachedCollisionObject__Sequence__init(moveit_msgs__msg__AttachedCollisionObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__AttachedCollisionObject * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__AttachedCollisionObject *)calloc(size, sizeof(moveit_msgs__msg__AttachedCollisionObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__AttachedCollisionObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__AttachedCollisionObject__fini(&data[i - 1]);
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
moveit_msgs__msg__AttachedCollisionObject__Sequence__fini(moveit_msgs__msg__AttachedCollisionObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__AttachedCollisionObject__fini(&array->data[i]);
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

moveit_msgs__msg__AttachedCollisionObject__Sequence *
moveit_msgs__msg__AttachedCollisionObject__Sequence__create(size_t size)
{
  moveit_msgs__msg__AttachedCollisionObject__Sequence * array = (moveit_msgs__msg__AttachedCollisionObject__Sequence *)malloc(sizeof(moveit_msgs__msg__AttachedCollisionObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__AttachedCollisionObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__AttachedCollisionObject__Sequence__destroy(moveit_msgs__msg__AttachedCollisionObject__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__AttachedCollisionObject__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__msg__AttachedCollisionObject__Sequence__are_equal(const moveit_msgs__msg__AttachedCollisionObject__Sequence * lhs, const moveit_msgs__msg__AttachedCollisionObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__AttachedCollisionObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__AttachedCollisionObject__Sequence__copy(
  const moveit_msgs__msg__AttachedCollisionObject__Sequence * input,
  moveit_msgs__msg__AttachedCollisionObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__AttachedCollisionObject);
    moveit_msgs__msg__AttachedCollisionObject * data =
      (moveit_msgs__msg__AttachedCollisionObject *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__AttachedCollisionObject__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__AttachedCollisionObject__fini(&data[i]);
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
    if (!moveit_msgs__msg__AttachedCollisionObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
