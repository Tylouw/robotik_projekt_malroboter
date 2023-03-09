// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robprakt_interfaces:srv/SetUrIo.idl
// generated code does not contain a copyright notice
#include "robprakt_interfaces/srv/detail/set_ur_io__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
robprakt_interfaces__srv__SetUrIo_Request__init(robprakt_interfaces__srv__SetUrIo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // set
  return true;
}

void
robprakt_interfaces__srv__SetUrIo_Request__fini(robprakt_interfaces__srv__SetUrIo_Request * msg)
{
  if (!msg) {
    return;
  }
  // set
}

bool
robprakt_interfaces__srv__SetUrIo_Request__are_equal(const robprakt_interfaces__srv__SetUrIo_Request * lhs, const robprakt_interfaces__srv__SetUrIo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // set
  if (lhs->set != rhs->set) {
    return false;
  }
  return true;
}

bool
robprakt_interfaces__srv__SetUrIo_Request__copy(
  const robprakt_interfaces__srv__SetUrIo_Request * input,
  robprakt_interfaces__srv__SetUrIo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // set
  output->set = input->set;
  return true;
}

robprakt_interfaces__srv__SetUrIo_Request *
robprakt_interfaces__srv__SetUrIo_Request__create()
{
  robprakt_interfaces__srv__SetUrIo_Request * msg = (robprakt_interfaces__srv__SetUrIo_Request *)malloc(sizeof(robprakt_interfaces__srv__SetUrIo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robprakt_interfaces__srv__SetUrIo_Request));
  bool success = robprakt_interfaces__srv__SetUrIo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robprakt_interfaces__srv__SetUrIo_Request__destroy(robprakt_interfaces__srv__SetUrIo_Request * msg)
{
  if (msg) {
    robprakt_interfaces__srv__SetUrIo_Request__fini(msg);
  }
  free(msg);
}


bool
robprakt_interfaces__srv__SetUrIo_Request__Sequence__init(robprakt_interfaces__srv__SetUrIo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robprakt_interfaces__srv__SetUrIo_Request * data = NULL;
  if (size) {
    data = (robprakt_interfaces__srv__SetUrIo_Request *)calloc(size, sizeof(robprakt_interfaces__srv__SetUrIo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robprakt_interfaces__srv__SetUrIo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robprakt_interfaces__srv__SetUrIo_Request__fini(&data[i - 1]);
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
robprakt_interfaces__srv__SetUrIo_Request__Sequence__fini(robprakt_interfaces__srv__SetUrIo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robprakt_interfaces__srv__SetUrIo_Request__fini(&array->data[i]);
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

robprakt_interfaces__srv__SetUrIo_Request__Sequence *
robprakt_interfaces__srv__SetUrIo_Request__Sequence__create(size_t size)
{
  robprakt_interfaces__srv__SetUrIo_Request__Sequence * array = (robprakt_interfaces__srv__SetUrIo_Request__Sequence *)malloc(sizeof(robprakt_interfaces__srv__SetUrIo_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robprakt_interfaces__srv__SetUrIo_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robprakt_interfaces__srv__SetUrIo_Request__Sequence__destroy(robprakt_interfaces__srv__SetUrIo_Request__Sequence * array)
{
  if (array) {
    robprakt_interfaces__srv__SetUrIo_Request__Sequence__fini(array);
  }
  free(array);
}

bool
robprakt_interfaces__srv__SetUrIo_Request__Sequence__are_equal(const robprakt_interfaces__srv__SetUrIo_Request__Sequence * lhs, const robprakt_interfaces__srv__SetUrIo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robprakt_interfaces__srv__SetUrIo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robprakt_interfaces__srv__SetUrIo_Request__Sequence__copy(
  const robprakt_interfaces__srv__SetUrIo_Request__Sequence * input,
  robprakt_interfaces__srv__SetUrIo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robprakt_interfaces__srv__SetUrIo_Request);
    robprakt_interfaces__srv__SetUrIo_Request * data =
      (robprakt_interfaces__srv__SetUrIo_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robprakt_interfaces__srv__SetUrIo_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robprakt_interfaces__srv__SetUrIo_Request__fini(&data[i]);
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
    if (!robprakt_interfaces__srv__SetUrIo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robprakt_interfaces__srv__SetUrIo_Response__init(robprakt_interfaces__srv__SetUrIo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // current
  return true;
}

void
robprakt_interfaces__srv__SetUrIo_Response__fini(robprakt_interfaces__srv__SetUrIo_Response * msg)
{
  if (!msg) {
    return;
  }
  // current
}

bool
robprakt_interfaces__srv__SetUrIo_Response__are_equal(const robprakt_interfaces__srv__SetUrIo_Response * lhs, const robprakt_interfaces__srv__SetUrIo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  return true;
}

bool
robprakt_interfaces__srv__SetUrIo_Response__copy(
  const robprakt_interfaces__srv__SetUrIo_Response * input,
  robprakt_interfaces__srv__SetUrIo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // current
  output->current = input->current;
  return true;
}

robprakt_interfaces__srv__SetUrIo_Response *
robprakt_interfaces__srv__SetUrIo_Response__create()
{
  robprakt_interfaces__srv__SetUrIo_Response * msg = (robprakt_interfaces__srv__SetUrIo_Response *)malloc(sizeof(robprakt_interfaces__srv__SetUrIo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robprakt_interfaces__srv__SetUrIo_Response));
  bool success = robprakt_interfaces__srv__SetUrIo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robprakt_interfaces__srv__SetUrIo_Response__destroy(robprakt_interfaces__srv__SetUrIo_Response * msg)
{
  if (msg) {
    robprakt_interfaces__srv__SetUrIo_Response__fini(msg);
  }
  free(msg);
}


bool
robprakt_interfaces__srv__SetUrIo_Response__Sequence__init(robprakt_interfaces__srv__SetUrIo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robprakt_interfaces__srv__SetUrIo_Response * data = NULL;
  if (size) {
    data = (robprakt_interfaces__srv__SetUrIo_Response *)calloc(size, sizeof(robprakt_interfaces__srv__SetUrIo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robprakt_interfaces__srv__SetUrIo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robprakt_interfaces__srv__SetUrIo_Response__fini(&data[i - 1]);
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
robprakt_interfaces__srv__SetUrIo_Response__Sequence__fini(robprakt_interfaces__srv__SetUrIo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robprakt_interfaces__srv__SetUrIo_Response__fini(&array->data[i]);
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

robprakt_interfaces__srv__SetUrIo_Response__Sequence *
robprakt_interfaces__srv__SetUrIo_Response__Sequence__create(size_t size)
{
  robprakt_interfaces__srv__SetUrIo_Response__Sequence * array = (robprakt_interfaces__srv__SetUrIo_Response__Sequence *)malloc(sizeof(robprakt_interfaces__srv__SetUrIo_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robprakt_interfaces__srv__SetUrIo_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robprakt_interfaces__srv__SetUrIo_Response__Sequence__destroy(robprakt_interfaces__srv__SetUrIo_Response__Sequence * array)
{
  if (array) {
    robprakt_interfaces__srv__SetUrIo_Response__Sequence__fini(array);
  }
  free(array);
}

bool
robprakt_interfaces__srv__SetUrIo_Response__Sequence__are_equal(const robprakt_interfaces__srv__SetUrIo_Response__Sequence * lhs, const robprakt_interfaces__srv__SetUrIo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robprakt_interfaces__srv__SetUrIo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robprakt_interfaces__srv__SetUrIo_Response__Sequence__copy(
  const robprakt_interfaces__srv__SetUrIo_Response__Sequence * input,
  robprakt_interfaces__srv__SetUrIo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robprakt_interfaces__srv__SetUrIo_Response);
    robprakt_interfaces__srv__SetUrIo_Response * data =
      (robprakt_interfaces__srv__SetUrIo_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robprakt_interfaces__srv__SetUrIo_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robprakt_interfaces__srv__SetUrIo_Response__fini(&data[i]);
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
    if (!robprakt_interfaces__srv__SetUrIo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
