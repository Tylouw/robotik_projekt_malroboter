// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/GetMotionPlan.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/get_motion_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `motion_plan_request`
#include "moveit_msgs/msg/detail/motion_plan_request__functions.h"

bool
moveit_msgs__srv__GetMotionPlan_Request__init(moveit_msgs__srv__GetMotionPlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motion_plan_request
  if (!moveit_msgs__msg__MotionPlanRequest__init(&msg->motion_plan_request)) {
    moveit_msgs__srv__GetMotionPlan_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetMotionPlan_Request__fini(moveit_msgs__srv__GetMotionPlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // motion_plan_request
  moveit_msgs__msg__MotionPlanRequest__fini(&msg->motion_plan_request);
}

bool
moveit_msgs__srv__GetMotionPlan_Request__are_equal(const moveit_msgs__srv__GetMotionPlan_Request * lhs, const moveit_msgs__srv__GetMotionPlan_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_plan_request
  if (!moveit_msgs__msg__MotionPlanRequest__are_equal(
      &(lhs->motion_plan_request), &(rhs->motion_plan_request)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GetMotionPlan_Request__copy(
  const moveit_msgs__srv__GetMotionPlan_Request * input,
  moveit_msgs__srv__GetMotionPlan_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_plan_request
  if (!moveit_msgs__msg__MotionPlanRequest__copy(
      &(input->motion_plan_request), &(output->motion_plan_request)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GetMotionPlan_Request *
moveit_msgs__srv__GetMotionPlan_Request__create()
{
  moveit_msgs__srv__GetMotionPlan_Request * msg = (moveit_msgs__srv__GetMotionPlan_Request *)malloc(sizeof(moveit_msgs__srv__GetMotionPlan_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetMotionPlan_Request));
  bool success = moveit_msgs__srv__GetMotionPlan_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetMotionPlan_Request__destroy(moveit_msgs__srv__GetMotionPlan_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__GetMotionPlan_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetMotionPlan_Request__Sequence__init(moveit_msgs__srv__GetMotionPlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetMotionPlan_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetMotionPlan_Request *)calloc(size, sizeof(moveit_msgs__srv__GetMotionPlan_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetMotionPlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetMotionPlan_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__GetMotionPlan_Request__Sequence__fini(moveit_msgs__srv__GetMotionPlan_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetMotionPlan_Request__fini(&array->data[i]);
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

moveit_msgs__srv__GetMotionPlan_Request__Sequence *
moveit_msgs__srv__GetMotionPlan_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetMotionPlan_Request__Sequence * array = (moveit_msgs__srv__GetMotionPlan_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__GetMotionPlan_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetMotionPlan_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetMotionPlan_Request__Sequence__destroy(moveit_msgs__srv__GetMotionPlan_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetMotionPlan_Request__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__srv__GetMotionPlan_Request__Sequence__are_equal(const moveit_msgs__srv__GetMotionPlan_Request__Sequence * lhs, const moveit_msgs__srv__GetMotionPlan_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GetMotionPlan_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GetMotionPlan_Request__Sequence__copy(
  const moveit_msgs__srv__GetMotionPlan_Request__Sequence * input,
  moveit_msgs__srv__GetMotionPlan_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GetMotionPlan_Request);
    moveit_msgs__srv__GetMotionPlan_Request * data =
      (moveit_msgs__srv__GetMotionPlan_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GetMotionPlan_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GetMotionPlan_Request__fini(&data[i]);
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
    if (!moveit_msgs__srv__GetMotionPlan_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `motion_plan_response`
#include "moveit_msgs/msg/detail/motion_plan_response__functions.h"

bool
moveit_msgs__srv__GetMotionPlan_Response__init(moveit_msgs__srv__GetMotionPlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // motion_plan_response
  if (!moveit_msgs__msg__MotionPlanResponse__init(&msg->motion_plan_response)) {
    moveit_msgs__srv__GetMotionPlan_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetMotionPlan_Response__fini(moveit_msgs__srv__GetMotionPlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // motion_plan_response
  moveit_msgs__msg__MotionPlanResponse__fini(&msg->motion_plan_response);
}

bool
moveit_msgs__srv__GetMotionPlan_Response__are_equal(const moveit_msgs__srv__GetMotionPlan_Response * lhs, const moveit_msgs__srv__GetMotionPlan_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_plan_response
  if (!moveit_msgs__msg__MotionPlanResponse__are_equal(
      &(lhs->motion_plan_response), &(rhs->motion_plan_response)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GetMotionPlan_Response__copy(
  const moveit_msgs__srv__GetMotionPlan_Response * input,
  moveit_msgs__srv__GetMotionPlan_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_plan_response
  if (!moveit_msgs__msg__MotionPlanResponse__copy(
      &(input->motion_plan_response), &(output->motion_plan_response)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GetMotionPlan_Response *
moveit_msgs__srv__GetMotionPlan_Response__create()
{
  moveit_msgs__srv__GetMotionPlan_Response * msg = (moveit_msgs__srv__GetMotionPlan_Response *)malloc(sizeof(moveit_msgs__srv__GetMotionPlan_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetMotionPlan_Response));
  bool success = moveit_msgs__srv__GetMotionPlan_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetMotionPlan_Response__destroy(moveit_msgs__srv__GetMotionPlan_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__GetMotionPlan_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetMotionPlan_Response__Sequence__init(moveit_msgs__srv__GetMotionPlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetMotionPlan_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetMotionPlan_Response *)calloc(size, sizeof(moveit_msgs__srv__GetMotionPlan_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetMotionPlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetMotionPlan_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__GetMotionPlan_Response__Sequence__fini(moveit_msgs__srv__GetMotionPlan_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetMotionPlan_Response__fini(&array->data[i]);
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

moveit_msgs__srv__GetMotionPlan_Response__Sequence *
moveit_msgs__srv__GetMotionPlan_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetMotionPlan_Response__Sequence * array = (moveit_msgs__srv__GetMotionPlan_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__GetMotionPlan_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetMotionPlan_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetMotionPlan_Response__Sequence__destroy(moveit_msgs__srv__GetMotionPlan_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetMotionPlan_Response__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__srv__GetMotionPlan_Response__Sequence__are_equal(const moveit_msgs__srv__GetMotionPlan_Response__Sequence * lhs, const moveit_msgs__srv__GetMotionPlan_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GetMotionPlan_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GetMotionPlan_Response__Sequence__copy(
  const moveit_msgs__srv__GetMotionPlan_Response__Sequence * input,
  moveit_msgs__srv__GetMotionPlan_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GetMotionPlan_Response);
    moveit_msgs__srv__GetMotionPlan_Response * data =
      (moveit_msgs__srv__GetMotionPlan_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GetMotionPlan_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GetMotionPlan_Response__fini(&data[i]);
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
    if (!moveit_msgs__srv__GetMotionPlan_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
