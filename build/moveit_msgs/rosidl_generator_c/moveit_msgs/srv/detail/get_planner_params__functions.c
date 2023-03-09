// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/GetPlannerParams.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/get_planner_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `pipeline_id`
// Member `planner_config`
// Member `group`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__srv__GetPlannerParams_Request__init(moveit_msgs__srv__GetPlannerParams_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pipeline_id
  if (!rosidl_runtime_c__String__init(&msg->pipeline_id)) {
    moveit_msgs__srv__GetPlannerParams_Request__fini(msg);
    return false;
  }
  // planner_config
  if (!rosidl_runtime_c__String__init(&msg->planner_config)) {
    moveit_msgs__srv__GetPlannerParams_Request__fini(msg);
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__init(&msg->group)) {
    moveit_msgs__srv__GetPlannerParams_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetPlannerParams_Request__fini(moveit_msgs__srv__GetPlannerParams_Request * msg)
{
  if (!msg) {
    return;
  }
  // pipeline_id
  rosidl_runtime_c__String__fini(&msg->pipeline_id);
  // planner_config
  rosidl_runtime_c__String__fini(&msg->planner_config);
  // group
  rosidl_runtime_c__String__fini(&msg->group);
}

bool
moveit_msgs__srv__GetPlannerParams_Request__are_equal(const moveit_msgs__srv__GetPlannerParams_Request * lhs, const moveit_msgs__srv__GetPlannerParams_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pipeline_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pipeline_id), &(rhs->pipeline_id)))
  {
    return false;
  }
  // planner_config
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planner_config), &(rhs->planner_config)))
  {
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group), &(rhs->group)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GetPlannerParams_Request__copy(
  const moveit_msgs__srv__GetPlannerParams_Request * input,
  moveit_msgs__srv__GetPlannerParams_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pipeline_id
  if (!rosidl_runtime_c__String__copy(
      &(input->pipeline_id), &(output->pipeline_id)))
  {
    return false;
  }
  // planner_config
  if (!rosidl_runtime_c__String__copy(
      &(input->planner_config), &(output->planner_config)))
  {
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__copy(
      &(input->group), &(output->group)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GetPlannerParams_Request *
moveit_msgs__srv__GetPlannerParams_Request__create()
{
  moveit_msgs__srv__GetPlannerParams_Request * msg = (moveit_msgs__srv__GetPlannerParams_Request *)malloc(sizeof(moveit_msgs__srv__GetPlannerParams_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetPlannerParams_Request));
  bool success = moveit_msgs__srv__GetPlannerParams_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetPlannerParams_Request__destroy(moveit_msgs__srv__GetPlannerParams_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__GetPlannerParams_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetPlannerParams_Request__Sequence__init(moveit_msgs__srv__GetPlannerParams_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetPlannerParams_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetPlannerParams_Request *)calloc(size, sizeof(moveit_msgs__srv__GetPlannerParams_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetPlannerParams_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetPlannerParams_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__GetPlannerParams_Request__Sequence__fini(moveit_msgs__srv__GetPlannerParams_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetPlannerParams_Request__fini(&array->data[i]);
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

moveit_msgs__srv__GetPlannerParams_Request__Sequence *
moveit_msgs__srv__GetPlannerParams_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetPlannerParams_Request__Sequence * array = (moveit_msgs__srv__GetPlannerParams_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__GetPlannerParams_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetPlannerParams_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetPlannerParams_Request__Sequence__destroy(moveit_msgs__srv__GetPlannerParams_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetPlannerParams_Request__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__srv__GetPlannerParams_Request__Sequence__are_equal(const moveit_msgs__srv__GetPlannerParams_Request__Sequence * lhs, const moveit_msgs__srv__GetPlannerParams_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GetPlannerParams_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GetPlannerParams_Request__Sequence__copy(
  const moveit_msgs__srv__GetPlannerParams_Request__Sequence * input,
  moveit_msgs__srv__GetPlannerParams_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GetPlannerParams_Request);
    moveit_msgs__srv__GetPlannerParams_Request * data =
      (moveit_msgs__srv__GetPlannerParams_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GetPlannerParams_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GetPlannerParams_Request__fini(&data[i]);
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
    if (!moveit_msgs__srv__GetPlannerParams_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `params`
#include "moveit_msgs/msg/detail/planner_params__functions.h"

bool
moveit_msgs__srv__GetPlannerParams_Response__init(moveit_msgs__srv__GetPlannerParams_Response * msg)
{
  if (!msg) {
    return false;
  }
  // params
  if (!moveit_msgs__msg__PlannerParams__init(&msg->params)) {
    moveit_msgs__srv__GetPlannerParams_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetPlannerParams_Response__fini(moveit_msgs__srv__GetPlannerParams_Response * msg)
{
  if (!msg) {
    return;
  }
  // params
  moveit_msgs__msg__PlannerParams__fini(&msg->params);
}

bool
moveit_msgs__srv__GetPlannerParams_Response__are_equal(const moveit_msgs__srv__GetPlannerParams_Response * lhs, const moveit_msgs__srv__GetPlannerParams_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // params
  if (!moveit_msgs__msg__PlannerParams__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GetPlannerParams_Response__copy(
  const moveit_msgs__srv__GetPlannerParams_Response * input,
  moveit_msgs__srv__GetPlannerParams_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // params
  if (!moveit_msgs__msg__PlannerParams__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GetPlannerParams_Response *
moveit_msgs__srv__GetPlannerParams_Response__create()
{
  moveit_msgs__srv__GetPlannerParams_Response * msg = (moveit_msgs__srv__GetPlannerParams_Response *)malloc(sizeof(moveit_msgs__srv__GetPlannerParams_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetPlannerParams_Response));
  bool success = moveit_msgs__srv__GetPlannerParams_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetPlannerParams_Response__destroy(moveit_msgs__srv__GetPlannerParams_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__GetPlannerParams_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetPlannerParams_Response__Sequence__init(moveit_msgs__srv__GetPlannerParams_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetPlannerParams_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetPlannerParams_Response *)calloc(size, sizeof(moveit_msgs__srv__GetPlannerParams_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetPlannerParams_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetPlannerParams_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__GetPlannerParams_Response__Sequence__fini(moveit_msgs__srv__GetPlannerParams_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetPlannerParams_Response__fini(&array->data[i]);
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

moveit_msgs__srv__GetPlannerParams_Response__Sequence *
moveit_msgs__srv__GetPlannerParams_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetPlannerParams_Response__Sequence * array = (moveit_msgs__srv__GetPlannerParams_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__GetPlannerParams_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetPlannerParams_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetPlannerParams_Response__Sequence__destroy(moveit_msgs__srv__GetPlannerParams_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetPlannerParams_Response__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__srv__GetPlannerParams_Response__Sequence__are_equal(const moveit_msgs__srv__GetPlannerParams_Response__Sequence * lhs, const moveit_msgs__srv__GetPlannerParams_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GetPlannerParams_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GetPlannerParams_Response__Sequence__copy(
  const moveit_msgs__srv__GetPlannerParams_Response__Sequence * input,
  moveit_msgs__srv__GetPlannerParams_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GetPlannerParams_Response);
    moveit_msgs__srv__GetPlannerParams_Response * data =
      (moveit_msgs__srv__GetPlannerParams_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GetPlannerParams_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GetPlannerParams_Response__fini(&data[i]);
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
    if (!moveit_msgs__srv__GetPlannerParams_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
