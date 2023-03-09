// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlanningSceneWorld.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_scene_world__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `collision_objects`
#include "moveit_msgs/msg/detail/collision_object__functions.h"
// Member `octomap`
#include "octomap_msgs/msg/detail/octomap_with_pose__functions.h"

bool
moveit_msgs__msg__PlanningSceneWorld__init(moveit_msgs__msg__PlanningSceneWorld * msg)
{
  if (!msg) {
    return false;
  }
  // collision_objects
  if (!moveit_msgs__msg__CollisionObject__Sequence__init(&msg->collision_objects, 0)) {
    moveit_msgs__msg__PlanningSceneWorld__fini(msg);
    return false;
  }
  // octomap
  if (!octomap_msgs__msg__OctomapWithPose__init(&msg->octomap)) {
    moveit_msgs__msg__PlanningSceneWorld__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__PlanningSceneWorld__fini(moveit_msgs__msg__PlanningSceneWorld * msg)
{
  if (!msg) {
    return;
  }
  // collision_objects
  moveit_msgs__msg__CollisionObject__Sequence__fini(&msg->collision_objects);
  // octomap
  octomap_msgs__msg__OctomapWithPose__fini(&msg->octomap);
}

bool
moveit_msgs__msg__PlanningSceneWorld__are_equal(const moveit_msgs__msg__PlanningSceneWorld * lhs, const moveit_msgs__msg__PlanningSceneWorld * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // collision_objects
  if (!moveit_msgs__msg__CollisionObject__Sequence__are_equal(
      &(lhs->collision_objects), &(rhs->collision_objects)))
  {
    return false;
  }
  // octomap
  if (!octomap_msgs__msg__OctomapWithPose__are_equal(
      &(lhs->octomap), &(rhs->octomap)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__PlanningSceneWorld__copy(
  const moveit_msgs__msg__PlanningSceneWorld * input,
  moveit_msgs__msg__PlanningSceneWorld * output)
{
  if (!input || !output) {
    return false;
  }
  // collision_objects
  if (!moveit_msgs__msg__CollisionObject__Sequence__copy(
      &(input->collision_objects), &(output->collision_objects)))
  {
    return false;
  }
  // octomap
  if (!octomap_msgs__msg__OctomapWithPose__copy(
      &(input->octomap), &(output->octomap)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__PlanningSceneWorld *
moveit_msgs__msg__PlanningSceneWorld__create()
{
  moveit_msgs__msg__PlanningSceneWorld * msg = (moveit_msgs__msg__PlanningSceneWorld *)malloc(sizeof(moveit_msgs__msg__PlanningSceneWorld));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlanningSceneWorld));
  bool success = moveit_msgs__msg__PlanningSceneWorld__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlanningSceneWorld__destroy(moveit_msgs__msg__PlanningSceneWorld * msg)
{
  if (msg) {
    moveit_msgs__msg__PlanningSceneWorld__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__PlanningSceneWorld__Sequence__init(moveit_msgs__msg__PlanningSceneWorld__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__PlanningSceneWorld * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__PlanningSceneWorld *)calloc(size, sizeof(moveit_msgs__msg__PlanningSceneWorld));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlanningSceneWorld__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlanningSceneWorld__fini(&data[i - 1]);
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
moveit_msgs__msg__PlanningSceneWorld__Sequence__fini(moveit_msgs__msg__PlanningSceneWorld__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__PlanningSceneWorld__fini(&array->data[i]);
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

moveit_msgs__msg__PlanningSceneWorld__Sequence *
moveit_msgs__msg__PlanningSceneWorld__Sequence__create(size_t size)
{
  moveit_msgs__msg__PlanningSceneWorld__Sequence * array = (moveit_msgs__msg__PlanningSceneWorld__Sequence *)malloc(sizeof(moveit_msgs__msg__PlanningSceneWorld__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlanningSceneWorld__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlanningSceneWorld__Sequence__destroy(moveit_msgs__msg__PlanningSceneWorld__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__PlanningSceneWorld__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__msg__PlanningSceneWorld__Sequence__are_equal(const moveit_msgs__msg__PlanningSceneWorld__Sequence * lhs, const moveit_msgs__msg__PlanningSceneWorld__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__PlanningSceneWorld__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__PlanningSceneWorld__Sequence__copy(
  const moveit_msgs__msg__PlanningSceneWorld__Sequence * input,
  moveit_msgs__msg__PlanningSceneWorld__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__PlanningSceneWorld);
    moveit_msgs__msg__PlanningSceneWorld * data =
      (moveit_msgs__msg__PlanningSceneWorld *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__PlanningSceneWorld__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__PlanningSceneWorld__fini(&data[i]);
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
    if (!moveit_msgs__msg__PlanningSceneWorld__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
