// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sbock_custom_interface:srv/NavToPose.idl
// generated code does not contain a copyright notice

#ifndef SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__NAV_TO_POSE__FUNCTIONS_H_
#define SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__NAV_TO_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sbock_custom_interface/msg/rosidl_generator_c__visibility_control.h"

#include "sbock_custom_interface/srv/detail/nav_to_pose__struct.h"

/// Initialize srv/NavToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sbock_custom_interface__srv__NavToPose_Request
 * )) before or use
 * sbock_custom_interface__srv__NavToPose_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
bool
sbock_custom_interface__srv__NavToPose_Request__init(sbock_custom_interface__srv__NavToPose_Request * msg);

/// Finalize srv/NavToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
void
sbock_custom_interface__srv__NavToPose_Request__fini(sbock_custom_interface__srv__NavToPose_Request * msg);

/// Create srv/NavToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sbock_custom_interface__srv__NavToPose_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
sbock_custom_interface__srv__NavToPose_Request *
sbock_custom_interface__srv__NavToPose_Request__create();

/// Destroy srv/NavToPose message.
/**
 * It calls
 * sbock_custom_interface__srv__NavToPose_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
void
sbock_custom_interface__srv__NavToPose_Request__destroy(sbock_custom_interface__srv__NavToPose_Request * msg);


/// Initialize array of srv/NavToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * sbock_custom_interface__srv__NavToPose_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
bool
sbock_custom_interface__srv__NavToPose_Request__Sequence__init(sbock_custom_interface__srv__NavToPose_Request__Sequence * array, size_t size);

/// Finalize array of srv/NavToPose messages.
/**
 * It calls
 * sbock_custom_interface__srv__NavToPose_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
void
sbock_custom_interface__srv__NavToPose_Request__Sequence__fini(sbock_custom_interface__srv__NavToPose_Request__Sequence * array);

/// Create array of srv/NavToPose messages.
/**
 * It allocates the memory for the array and calls
 * sbock_custom_interface__srv__NavToPose_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
sbock_custom_interface__srv__NavToPose_Request__Sequence *
sbock_custom_interface__srv__NavToPose_Request__Sequence__create(size_t size);

/// Destroy array of srv/NavToPose messages.
/**
 * It calls
 * sbock_custom_interface__srv__NavToPose_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
void
sbock_custom_interface__srv__NavToPose_Request__Sequence__destroy(sbock_custom_interface__srv__NavToPose_Request__Sequence * array);

/// Initialize srv/NavToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sbock_custom_interface__srv__NavToPose_Response
 * )) before or use
 * sbock_custom_interface__srv__NavToPose_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
bool
sbock_custom_interface__srv__NavToPose_Response__init(sbock_custom_interface__srv__NavToPose_Response * msg);

/// Finalize srv/NavToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
void
sbock_custom_interface__srv__NavToPose_Response__fini(sbock_custom_interface__srv__NavToPose_Response * msg);

/// Create srv/NavToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sbock_custom_interface__srv__NavToPose_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
sbock_custom_interface__srv__NavToPose_Response *
sbock_custom_interface__srv__NavToPose_Response__create();

/// Destroy srv/NavToPose message.
/**
 * It calls
 * sbock_custom_interface__srv__NavToPose_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
void
sbock_custom_interface__srv__NavToPose_Response__destroy(sbock_custom_interface__srv__NavToPose_Response * msg);


/// Initialize array of srv/NavToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * sbock_custom_interface__srv__NavToPose_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
bool
sbock_custom_interface__srv__NavToPose_Response__Sequence__init(sbock_custom_interface__srv__NavToPose_Response__Sequence * array, size_t size);

/// Finalize array of srv/NavToPose messages.
/**
 * It calls
 * sbock_custom_interface__srv__NavToPose_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
void
sbock_custom_interface__srv__NavToPose_Response__Sequence__fini(sbock_custom_interface__srv__NavToPose_Response__Sequence * array);

/// Create array of srv/NavToPose messages.
/**
 * It allocates the memory for the array and calls
 * sbock_custom_interface__srv__NavToPose_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
sbock_custom_interface__srv__NavToPose_Response__Sequence *
sbock_custom_interface__srv__NavToPose_Response__Sequence__create(size_t size);

/// Destroy array of srv/NavToPose messages.
/**
 * It calls
 * sbock_custom_interface__srv__NavToPose_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbock_custom_interface
void
sbock_custom_interface__srv__NavToPose_Response__Sequence__destroy(sbock_custom_interface__srv__NavToPose_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__NAV_TO_POSE__FUNCTIONS_H_
