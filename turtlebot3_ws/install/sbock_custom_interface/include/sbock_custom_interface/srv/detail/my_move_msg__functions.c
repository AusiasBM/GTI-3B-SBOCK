// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbock_custom_interface:srv/MyMoveMsg.idl
// generated code does not contain a copyright notice
#include "sbock_custom_interface/srv/detail/my_move_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `move`
#include "rosidl_runtime_c/string_functions.h"

bool
sbock_custom_interface__srv__MyMoveMsg_Request__init(sbock_custom_interface__srv__MyMoveMsg_Request * msg)
{
  if (!msg) {
    return false;
  }
  // move
  if (!rosidl_runtime_c__String__init(&msg->move)) {
    sbock_custom_interface__srv__MyMoveMsg_Request__fini(msg);
    return false;
  }
  return true;
}

void
sbock_custom_interface__srv__MyMoveMsg_Request__fini(sbock_custom_interface__srv__MyMoveMsg_Request * msg)
{
  if (!msg) {
    return;
  }
  // move
  rosidl_runtime_c__String__fini(&msg->move);
}

sbock_custom_interface__srv__MyMoveMsg_Request *
sbock_custom_interface__srv__MyMoveMsg_Request__create()
{
  sbock_custom_interface__srv__MyMoveMsg_Request * msg = (sbock_custom_interface__srv__MyMoveMsg_Request *)malloc(sizeof(sbock_custom_interface__srv__MyMoveMsg_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbock_custom_interface__srv__MyMoveMsg_Request));
  bool success = sbock_custom_interface__srv__MyMoveMsg_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sbock_custom_interface__srv__MyMoveMsg_Request__destroy(sbock_custom_interface__srv__MyMoveMsg_Request * msg)
{
  if (msg) {
    sbock_custom_interface__srv__MyMoveMsg_Request__fini(msg);
  }
  free(msg);
}


bool
sbock_custom_interface__srv__MyMoveMsg_Request__Sequence__init(sbock_custom_interface__srv__MyMoveMsg_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sbock_custom_interface__srv__MyMoveMsg_Request * data = NULL;
  if (size) {
    data = (sbock_custom_interface__srv__MyMoveMsg_Request *)calloc(size, sizeof(sbock_custom_interface__srv__MyMoveMsg_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbock_custom_interface__srv__MyMoveMsg_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbock_custom_interface__srv__MyMoveMsg_Request__fini(&data[i - 1]);
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
sbock_custom_interface__srv__MyMoveMsg_Request__Sequence__fini(sbock_custom_interface__srv__MyMoveMsg_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sbock_custom_interface__srv__MyMoveMsg_Request__fini(&array->data[i]);
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

sbock_custom_interface__srv__MyMoveMsg_Request__Sequence *
sbock_custom_interface__srv__MyMoveMsg_Request__Sequence__create(size_t size)
{
  sbock_custom_interface__srv__MyMoveMsg_Request__Sequence * array = (sbock_custom_interface__srv__MyMoveMsg_Request__Sequence *)malloc(sizeof(sbock_custom_interface__srv__MyMoveMsg_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sbock_custom_interface__srv__MyMoveMsg_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sbock_custom_interface__srv__MyMoveMsg_Request__Sequence__destroy(sbock_custom_interface__srv__MyMoveMsg_Request__Sequence * array)
{
  if (array) {
    sbock_custom_interface__srv__MyMoveMsg_Request__Sequence__fini(array);
  }
  free(array);
}


bool
sbock_custom_interface__srv__MyMoveMsg_Response__init(sbock_custom_interface__srv__MyMoveMsg_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
sbock_custom_interface__srv__MyMoveMsg_Response__fini(sbock_custom_interface__srv__MyMoveMsg_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

sbock_custom_interface__srv__MyMoveMsg_Response *
sbock_custom_interface__srv__MyMoveMsg_Response__create()
{
  sbock_custom_interface__srv__MyMoveMsg_Response * msg = (sbock_custom_interface__srv__MyMoveMsg_Response *)malloc(sizeof(sbock_custom_interface__srv__MyMoveMsg_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbock_custom_interface__srv__MyMoveMsg_Response));
  bool success = sbock_custom_interface__srv__MyMoveMsg_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sbock_custom_interface__srv__MyMoveMsg_Response__destroy(sbock_custom_interface__srv__MyMoveMsg_Response * msg)
{
  if (msg) {
    sbock_custom_interface__srv__MyMoveMsg_Response__fini(msg);
  }
  free(msg);
}


bool
sbock_custom_interface__srv__MyMoveMsg_Response__Sequence__init(sbock_custom_interface__srv__MyMoveMsg_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sbock_custom_interface__srv__MyMoveMsg_Response * data = NULL;
  if (size) {
    data = (sbock_custom_interface__srv__MyMoveMsg_Response *)calloc(size, sizeof(sbock_custom_interface__srv__MyMoveMsg_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbock_custom_interface__srv__MyMoveMsg_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbock_custom_interface__srv__MyMoveMsg_Response__fini(&data[i - 1]);
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
sbock_custom_interface__srv__MyMoveMsg_Response__Sequence__fini(sbock_custom_interface__srv__MyMoveMsg_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sbock_custom_interface__srv__MyMoveMsg_Response__fini(&array->data[i]);
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

sbock_custom_interface__srv__MyMoveMsg_Response__Sequence *
sbock_custom_interface__srv__MyMoveMsg_Response__Sequence__create(size_t size)
{
  sbock_custom_interface__srv__MyMoveMsg_Response__Sequence * array = (sbock_custom_interface__srv__MyMoveMsg_Response__Sequence *)malloc(sizeof(sbock_custom_interface__srv__MyMoveMsg_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sbock_custom_interface__srv__MyMoveMsg_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sbock_custom_interface__srv__MyMoveMsg_Response__Sequence__destroy(sbock_custom_interface__srv__MyMoveMsg_Response__Sequence * array)
{
  if (array) {
    sbock_custom_interface__srv__MyMoveMsg_Response__Sequence__fini(array);
  }
  free(array);
}
