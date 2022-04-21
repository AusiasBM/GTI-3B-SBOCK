// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbock_custom_interface:srv/IniPose.idl
// generated code does not contain a copyright notice
#include "sbock_custom_interface/srv/detail/ini_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
sbock_custom_interface__srv__IniPose_Request__init(sbock_custom_interface__srv__IniPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pos_x
  // pos_y
  // orien_z
  // orien_w
  return true;
}

void
sbock_custom_interface__srv__IniPose_Request__fini(sbock_custom_interface__srv__IniPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // pos_x
  // pos_y
  // orien_z
  // orien_w
}

sbock_custom_interface__srv__IniPose_Request *
sbock_custom_interface__srv__IniPose_Request__create()
{
  sbock_custom_interface__srv__IniPose_Request * msg = (sbock_custom_interface__srv__IniPose_Request *)malloc(sizeof(sbock_custom_interface__srv__IniPose_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbock_custom_interface__srv__IniPose_Request));
  bool success = sbock_custom_interface__srv__IniPose_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sbock_custom_interface__srv__IniPose_Request__destroy(sbock_custom_interface__srv__IniPose_Request * msg)
{
  if (msg) {
    sbock_custom_interface__srv__IniPose_Request__fini(msg);
  }
  free(msg);
}


bool
sbock_custom_interface__srv__IniPose_Request__Sequence__init(sbock_custom_interface__srv__IniPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sbock_custom_interface__srv__IniPose_Request * data = NULL;
  if (size) {
    data = (sbock_custom_interface__srv__IniPose_Request *)calloc(size, sizeof(sbock_custom_interface__srv__IniPose_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbock_custom_interface__srv__IniPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbock_custom_interface__srv__IniPose_Request__fini(&data[i - 1]);
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
sbock_custom_interface__srv__IniPose_Request__Sequence__fini(sbock_custom_interface__srv__IniPose_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sbock_custom_interface__srv__IniPose_Request__fini(&array->data[i]);
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

sbock_custom_interface__srv__IniPose_Request__Sequence *
sbock_custom_interface__srv__IniPose_Request__Sequence__create(size_t size)
{
  sbock_custom_interface__srv__IniPose_Request__Sequence * array = (sbock_custom_interface__srv__IniPose_Request__Sequence *)malloc(sizeof(sbock_custom_interface__srv__IniPose_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sbock_custom_interface__srv__IniPose_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sbock_custom_interface__srv__IniPose_Request__Sequence__destroy(sbock_custom_interface__srv__IniPose_Request__Sequence * array)
{
  if (array) {
    sbock_custom_interface__srv__IniPose_Request__Sequence__fini(array);
  }
  free(array);
}


bool
sbock_custom_interface__srv__IniPose_Response__init(sbock_custom_interface__srv__IniPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
sbock_custom_interface__srv__IniPose_Response__fini(sbock_custom_interface__srv__IniPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

sbock_custom_interface__srv__IniPose_Response *
sbock_custom_interface__srv__IniPose_Response__create()
{
  sbock_custom_interface__srv__IniPose_Response * msg = (sbock_custom_interface__srv__IniPose_Response *)malloc(sizeof(sbock_custom_interface__srv__IniPose_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbock_custom_interface__srv__IniPose_Response));
  bool success = sbock_custom_interface__srv__IniPose_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sbock_custom_interface__srv__IniPose_Response__destroy(sbock_custom_interface__srv__IniPose_Response * msg)
{
  if (msg) {
    sbock_custom_interface__srv__IniPose_Response__fini(msg);
  }
  free(msg);
}


bool
sbock_custom_interface__srv__IniPose_Response__Sequence__init(sbock_custom_interface__srv__IniPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sbock_custom_interface__srv__IniPose_Response * data = NULL;
  if (size) {
    data = (sbock_custom_interface__srv__IniPose_Response *)calloc(size, sizeof(sbock_custom_interface__srv__IniPose_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbock_custom_interface__srv__IniPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbock_custom_interface__srv__IniPose_Response__fini(&data[i - 1]);
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
sbock_custom_interface__srv__IniPose_Response__Sequence__fini(sbock_custom_interface__srv__IniPose_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sbock_custom_interface__srv__IniPose_Response__fini(&array->data[i]);
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

sbock_custom_interface__srv__IniPose_Response__Sequence *
sbock_custom_interface__srv__IniPose_Response__Sequence__create(size_t size)
{
  sbock_custom_interface__srv__IniPose_Response__Sequence * array = (sbock_custom_interface__srv__IniPose_Response__Sequence *)malloc(sizeof(sbock_custom_interface__srv__IniPose_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sbock_custom_interface__srv__IniPose_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sbock_custom_interface__srv__IniPose_Response__Sequence__destroy(sbock_custom_interface__srv__IniPose_Response__Sequence * array)
{
  if (array) {
    sbock_custom_interface__srv__IniPose_Response__Sequence__fini(array);
  }
  free(array);
}
