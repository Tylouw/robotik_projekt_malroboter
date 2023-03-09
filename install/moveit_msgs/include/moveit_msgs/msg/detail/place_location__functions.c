// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlaceLocation.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/place_location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
// Member `allowed_touch_objects`
#include "rosidl_runtime_c/string_functions.h"
// Member `post_place_posture`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
// Member `place_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `pre_place_approach`
// Member `post_place_retreat`
#include "moveit_msgs/msg/detail/gripper_translation__functions.h"

bool
moveit_msgs__msg__PlaceLocation__init(moveit_msgs__msg__PlaceLocation * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    moveit_msgs__msg__PlaceLocation__fini(msg);
    return false;
  }
  // post_place_posture
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->post_place_posture)) {
    moveit_msgs__msg__PlaceLocation__fini(msg);
    return false;
  }
  // place_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->place_pose)) {
    moveit_msgs__msg__PlaceLocation__fini(msg);
    return false;
  }
  // quality
  // pre_place_approach
  if (!moveit_msgs__msg__GripperTranslation__init(&msg->pre_place_approach)) {
    moveit_msgs__msg__PlaceLocation__fini(msg);
    return false;
  }
  // post_place_retreat
  if (!moveit_msgs__msg__GripperTranslation__init(&msg->post_place_retreat)) {
    moveit_msgs__msg__PlaceLocation__fini(msg);
    return false;
  }
  // allowed_touch_objects
  if (!rosidl_runtime_c__String__Sequence__init(&msg->allowed_touch_objects, 0)) {
    moveit_msgs__msg__PlaceLocation__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__PlaceLocation__fini(moveit_msgs__msg__PlaceLocation * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // post_place_posture
  trajectory_msgs__msg__JointTrajectory__fini(&msg->post_place_posture);
  // place_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->place_pose);
  // quality
  // pre_place_approach
  moveit_msgs__msg__GripperTranslation__fini(&msg->pre_place_approach);
  // post_place_retreat
  moveit_msgs__msg__GripperTranslation__fini(&msg->post_place_retreat);
  // allowed_touch_objects
  rosidl_runtime_c__String__Sequence__fini(&msg->allowed_touch_objects);
}

bool
moveit_msgs__msg__PlaceLocation__are_equal(const moveit_msgs__msg__PlaceLocation * lhs, const moveit_msgs__msg__PlaceLocation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // post_place_posture
  if (!trajectory_msgs__msg__JointTrajectory__are_equal(
      &(lhs->post_place_posture), &(rhs->post_place_posture)))
  {
    return false;
  }
  // place_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->place_pose), &(rhs->place_pose)))
  {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  // pre_place_approach
  if (!moveit_msgs__msg__GripperTranslation__are_equal(
      &(lhs->pre_place_approach), &(rhs->pre_place_approach)))
  {
    return false;
  }
  // post_place_retreat
  if (!moveit_msgs__msg__GripperTranslation__are_equal(
      &(lhs->post_place_retreat), &(rhs->post_place_retreat)))
  {
    return false;
  }
  // allowed_touch_objects
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->allowed_touch_objects), &(rhs->allowed_touch_objects)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__PlaceLocation__copy(
  const moveit_msgs__msg__PlaceLocation * input,
  moveit_msgs__msg__PlaceLocation * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // post_place_posture
  if (!trajectory_msgs__msg__JointTrajectory__copy(
      &(input->post_place_posture), &(output->post_place_posture)))
  {
    return false;
  }
  // place_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->place_pose), &(output->place_pose)))
  {
    return false;
  }
  // quality
  output->quality = input->quality;
  // pre_place_approach
  if (!moveit_msgs__msg__GripperTranslation__copy(
      &(input->pre_place_approach), &(output->pre_place_approach)))
  {
    return false;
  }
  // post_place_retreat
  if (!moveit_msgs__msg__GripperTranslation__copy(
      &(input->post_place_retreat), &(output->post_place_retreat)))
  {
    return false;
  }
  // allowed_touch_objects
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->allowed_touch_objects), &(output->allowed_touch_objects)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__PlaceLocation *
moveit_msgs__msg__PlaceLocation__create()
{
  moveit_msgs__msg__PlaceLocation * msg = (moveit_msgs__msg__PlaceLocation *)malloc(sizeof(moveit_msgs__msg__PlaceLocation));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlaceLocation));
  bool success = moveit_msgs__msg__PlaceLocation__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlaceLocation__destroy(moveit_msgs__msg__PlaceLocation * msg)
{
  if (msg) {
    moveit_msgs__msg__PlaceLocation__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__PlaceLocation__Sequence__init(moveit_msgs__msg__PlaceLocation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__PlaceLocation * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__PlaceLocation *)calloc(size, sizeof(moveit_msgs__msg__PlaceLocation));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlaceLocation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlaceLocation__fini(&data[i - 1]);
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
moveit_msgs__msg__PlaceLocation__Sequence__fini(moveit_msgs__msg__PlaceLocation__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__PlaceLocation__fini(&array->data[i]);
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

moveit_msgs__msg__PlaceLocation__Sequence *
moveit_msgs__msg__PlaceLocation__Sequence__create(size_t size)
{
  moveit_msgs__msg__PlaceLocation__Sequence * array = (moveit_msgs__msg__PlaceLocation__Sequence *)malloc(sizeof(moveit_msgs__msg__PlaceLocation__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlaceLocation__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlaceLocation__Sequence__destroy(moveit_msgs__msg__PlaceLocation__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__PlaceLocation__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__msg__PlaceLocation__Sequence__are_equal(const moveit_msgs__msg__PlaceLocation__Sequence * lhs, const moveit_msgs__msg__PlaceLocation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__PlaceLocation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__PlaceLocation__Sequence__copy(
  const moveit_msgs__msg__PlaceLocation__Sequence * input,
  moveit_msgs__msg__PlaceLocation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__PlaceLocation);
    moveit_msgs__msg__PlaceLocation * data =
      (moveit_msgs__msg__PlaceLocation *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__PlaceLocation__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__PlaceLocation__fini(&data[i]);
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
    if (!moveit_msgs__msg__PlaceLocation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
