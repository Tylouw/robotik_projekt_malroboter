// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/GetPositionFK.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/get_position_fk__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `fk_link_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `robot_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"

bool
moveit_msgs__srv__GetPositionFK_Request__init(moveit_msgs__srv__GetPositionFK_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__srv__GetPositionFK_Request__fini(msg);
    return false;
  }
  // fk_link_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->fk_link_names, 0)) {
    moveit_msgs__srv__GetPositionFK_Request__fini(msg);
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__init(&msg->robot_state)) {
    moveit_msgs__srv__GetPositionFK_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetPositionFK_Request__fini(moveit_msgs__srv__GetPositionFK_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fk_link_names
  rosidl_runtime_c__String__Sequence__fini(&msg->fk_link_names);
  // robot_state
  moveit_msgs__msg__RobotState__fini(&msg->robot_state);
}

bool
moveit_msgs__srv__GetPositionFK_Request__are_equal(const moveit_msgs__srv__GetPositionFK_Request * lhs, const moveit_msgs__srv__GetPositionFK_Request * rhs)
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
  // fk_link_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->fk_link_names), &(rhs->fk_link_names)))
  {
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->robot_state), &(rhs->robot_state)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GetPositionFK_Request__copy(
  const moveit_msgs__srv__GetPositionFK_Request * input,
  moveit_msgs__srv__GetPositionFK_Request * output)
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
  // fk_link_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->fk_link_names), &(output->fk_link_names)))
  {
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->robot_state), &(output->robot_state)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GetPositionFK_Request *
moveit_msgs__srv__GetPositionFK_Request__create()
{
  moveit_msgs__srv__GetPositionFK_Request * msg = (moveit_msgs__srv__GetPositionFK_Request *)malloc(sizeof(moveit_msgs__srv__GetPositionFK_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetPositionFK_Request));
  bool success = moveit_msgs__srv__GetPositionFK_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetPositionFK_Request__destroy(moveit_msgs__srv__GetPositionFK_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__GetPositionFK_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetPositionFK_Request__Sequence__init(moveit_msgs__srv__GetPositionFK_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetPositionFK_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetPositionFK_Request *)calloc(size, sizeof(moveit_msgs__srv__GetPositionFK_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetPositionFK_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetPositionFK_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__GetPositionFK_Request__Sequence__fini(moveit_msgs__srv__GetPositionFK_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetPositionFK_Request__fini(&array->data[i]);
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

moveit_msgs__srv__GetPositionFK_Request__Sequence *
moveit_msgs__srv__GetPositionFK_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetPositionFK_Request__Sequence * array = (moveit_msgs__srv__GetPositionFK_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__GetPositionFK_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetPositionFK_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetPositionFK_Request__Sequence__destroy(moveit_msgs__srv__GetPositionFK_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetPositionFK_Request__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__srv__GetPositionFK_Request__Sequence__are_equal(const moveit_msgs__srv__GetPositionFK_Request__Sequence * lhs, const moveit_msgs__srv__GetPositionFK_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GetPositionFK_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GetPositionFK_Request__Sequence__copy(
  const moveit_msgs__srv__GetPositionFK_Request__Sequence * input,
  moveit_msgs__srv__GetPositionFK_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GetPositionFK_Request);
    moveit_msgs__srv__GetPositionFK_Request * data =
      (moveit_msgs__srv__GetPositionFK_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GetPositionFK_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GetPositionFK_Request__fini(&data[i]);
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
    if (!moveit_msgs__srv__GetPositionFK_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pose_stamped`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `fk_link_names`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"

bool
moveit_msgs__srv__GetPositionFK_Response__init(moveit_msgs__srv__GetPositionFK_Response * msg)
{
  if (!msg) {
    return false;
  }
  // pose_stamped
  if (!geometry_msgs__msg__PoseStamped__Sequence__init(&msg->pose_stamped, 0)) {
    moveit_msgs__srv__GetPositionFK_Response__fini(msg);
    return false;
  }
  // fk_link_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->fk_link_names, 0)) {
    moveit_msgs__srv__GetPositionFK_Response__fini(msg);
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__srv__GetPositionFK_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetPositionFK_Response__fini(moveit_msgs__srv__GetPositionFK_Response * msg)
{
  if (!msg) {
    return;
  }
  // pose_stamped
  geometry_msgs__msg__PoseStamped__Sequence__fini(&msg->pose_stamped);
  // fk_link_names
  rosidl_runtime_c__String__Sequence__fini(&msg->fk_link_names);
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
}

bool
moveit_msgs__srv__GetPositionFK_Response__are_equal(const moveit_msgs__srv__GetPositionFK_Response * lhs, const moveit_msgs__srv__GetPositionFK_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose_stamped
  if (!geometry_msgs__msg__PoseStamped__Sequence__are_equal(
      &(lhs->pose_stamped), &(rhs->pose_stamped)))
  {
    return false;
  }
  // fk_link_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->fk_link_names), &(rhs->fk_link_names)))
  {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GetPositionFK_Response__copy(
  const moveit_msgs__srv__GetPositionFK_Response * input,
  moveit_msgs__srv__GetPositionFK_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // pose_stamped
  if (!geometry_msgs__msg__PoseStamped__Sequence__copy(
      &(input->pose_stamped), &(output->pose_stamped)))
  {
    return false;
  }
  // fk_link_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->fk_link_names), &(output->fk_link_names)))
  {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GetPositionFK_Response *
moveit_msgs__srv__GetPositionFK_Response__create()
{
  moveit_msgs__srv__GetPositionFK_Response * msg = (moveit_msgs__srv__GetPositionFK_Response *)malloc(sizeof(moveit_msgs__srv__GetPositionFK_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetPositionFK_Response));
  bool success = moveit_msgs__srv__GetPositionFK_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetPositionFK_Response__destroy(moveit_msgs__srv__GetPositionFK_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__GetPositionFK_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetPositionFK_Response__Sequence__init(moveit_msgs__srv__GetPositionFK_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetPositionFK_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetPositionFK_Response *)calloc(size, sizeof(moveit_msgs__srv__GetPositionFK_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetPositionFK_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetPositionFK_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__GetPositionFK_Response__Sequence__fini(moveit_msgs__srv__GetPositionFK_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetPositionFK_Response__fini(&array->data[i]);
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

moveit_msgs__srv__GetPositionFK_Response__Sequence *
moveit_msgs__srv__GetPositionFK_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetPositionFK_Response__Sequence * array = (moveit_msgs__srv__GetPositionFK_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__GetPositionFK_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetPositionFK_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetPositionFK_Response__Sequence__destroy(moveit_msgs__srv__GetPositionFK_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetPositionFK_Response__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__srv__GetPositionFK_Response__Sequence__are_equal(const moveit_msgs__srv__GetPositionFK_Response__Sequence * lhs, const moveit_msgs__srv__GetPositionFK_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GetPositionFK_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GetPositionFK_Response__Sequence__copy(
  const moveit_msgs__srv__GetPositionFK_Response__Sequence * input,
  moveit_msgs__srv__GetPositionFK_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GetPositionFK_Response);
    moveit_msgs__srv__GetPositionFK_Response * data =
      (moveit_msgs__srv__GetPositionFK_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GetPositionFK_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GetPositionFK_Response__fini(&data[i]);
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
    if (!moveit_msgs__srv__GetPositionFK_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
