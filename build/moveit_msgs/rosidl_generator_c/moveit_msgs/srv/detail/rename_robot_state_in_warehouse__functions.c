// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/RenameRobotStateInWarehouse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/rename_robot_state_in_warehouse__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `old_name`
// Member `new_name`
// Member `robot`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__init(moveit_msgs__srv__RenameRobotStateInWarehouse_Request * msg)
{
  if (!msg) {
    return false;
  }
  // old_name
  if (!rosidl_runtime_c__String__init(&msg->old_name)) {
    moveit_msgs__srv__RenameRobotStateInWarehouse_Request__fini(msg);
    return false;
  }
  // new_name
  if (!rosidl_runtime_c__String__init(&msg->new_name)) {
    moveit_msgs__srv__RenameRobotStateInWarehouse_Request__fini(msg);
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__init(&msg->robot)) {
    moveit_msgs__srv__RenameRobotStateInWarehouse_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__fini(moveit_msgs__srv__RenameRobotStateInWarehouse_Request * msg)
{
  if (!msg) {
    return;
  }
  // old_name
  rosidl_runtime_c__String__fini(&msg->old_name);
  // new_name
  rosidl_runtime_c__String__fini(&msg->new_name);
  // robot
  rosidl_runtime_c__String__fini(&msg->robot);
}

bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__are_equal(const moveit_msgs__srv__RenameRobotStateInWarehouse_Request * lhs, const moveit_msgs__srv__RenameRobotStateInWarehouse_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // old_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->old_name), &(rhs->old_name)))
  {
    return false;
  }
  // new_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->new_name), &(rhs->new_name)))
  {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot), &(rhs->robot)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__copy(
  const moveit_msgs__srv__RenameRobotStateInWarehouse_Request * input,
  moveit_msgs__srv__RenameRobotStateInWarehouse_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // old_name
  if (!rosidl_runtime_c__String__copy(
      &(input->old_name), &(output->old_name)))
  {
    return false;
  }
  // new_name
  if (!rosidl_runtime_c__String__copy(
      &(input->new_name), &(output->new_name)))
  {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__copy(
      &(input->robot), &(output->robot)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__RenameRobotStateInWarehouse_Request *
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__create()
{
  moveit_msgs__srv__RenameRobotStateInWarehouse_Request * msg = (moveit_msgs__srv__RenameRobotStateInWarehouse_Request *)malloc(sizeof(moveit_msgs__srv__RenameRobotStateInWarehouse_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__RenameRobotStateInWarehouse_Request));
  bool success = moveit_msgs__srv__RenameRobotStateInWarehouse_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__destroy(moveit_msgs__srv__RenameRobotStateInWarehouse_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__RenameRobotStateInWarehouse_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence__init(moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__RenameRobotStateInWarehouse_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__RenameRobotStateInWarehouse_Request *)calloc(size, sizeof(moveit_msgs__srv__RenameRobotStateInWarehouse_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__RenameRobotStateInWarehouse_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__RenameRobotStateInWarehouse_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence__fini(moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__RenameRobotStateInWarehouse_Request__fini(&array->data[i]);
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

moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence *
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence * array = (moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence__destroy(moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence__are_equal(const moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence * lhs, const moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__RenameRobotStateInWarehouse_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence__copy(
  const moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence * input,
  moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__RenameRobotStateInWarehouse_Request);
    moveit_msgs__srv__RenameRobotStateInWarehouse_Request * data =
      (moveit_msgs__srv__RenameRobotStateInWarehouse_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__RenameRobotStateInWarehouse_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__RenameRobotStateInWarehouse_Request__fini(&data[i]);
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
    if (!moveit_msgs__srv__RenameRobotStateInWarehouse_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__init(moveit_msgs__srv__RenameRobotStateInWarehouse_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__fini(moveit_msgs__srv__RenameRobotStateInWarehouse_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__are_equal(const moveit_msgs__srv__RenameRobotStateInWarehouse_Response * lhs, const moveit_msgs__srv__RenameRobotStateInWarehouse_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__copy(
  const moveit_msgs__srv__RenameRobotStateInWarehouse_Response * input,
  moveit_msgs__srv__RenameRobotStateInWarehouse_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

moveit_msgs__srv__RenameRobotStateInWarehouse_Response *
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__create()
{
  moveit_msgs__srv__RenameRobotStateInWarehouse_Response * msg = (moveit_msgs__srv__RenameRobotStateInWarehouse_Response *)malloc(sizeof(moveit_msgs__srv__RenameRobotStateInWarehouse_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__RenameRobotStateInWarehouse_Response));
  bool success = moveit_msgs__srv__RenameRobotStateInWarehouse_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__destroy(moveit_msgs__srv__RenameRobotStateInWarehouse_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__RenameRobotStateInWarehouse_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence__init(moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__RenameRobotStateInWarehouse_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__RenameRobotStateInWarehouse_Response *)calloc(size, sizeof(moveit_msgs__srv__RenameRobotStateInWarehouse_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__RenameRobotStateInWarehouse_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__RenameRobotStateInWarehouse_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence__fini(moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__RenameRobotStateInWarehouse_Response__fini(&array->data[i]);
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

moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence *
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence * array = (moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence__destroy(moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence__fini(array);
  }
  free(array);
}

bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence__are_equal(const moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence * lhs, const moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__RenameRobotStateInWarehouse_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence__copy(
  const moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence * input,
  moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__RenameRobotStateInWarehouse_Response);
    moveit_msgs__srv__RenameRobotStateInWarehouse_Response * data =
      (moveit_msgs__srv__RenameRobotStateInWarehouse_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__RenameRobotStateInWarehouse_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__RenameRobotStateInWarehouse_Response__fini(&data[i]);
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
    if (!moveit_msgs__srv__RenameRobotStateInWarehouse_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
