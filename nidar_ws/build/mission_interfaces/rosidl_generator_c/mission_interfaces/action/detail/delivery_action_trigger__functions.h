// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mission_interfaces:action/DeliveryActionTrigger.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_ACTION_TRIGGER__FUNCTIONS_H_
#define MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_ACTION_TRIGGER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mission_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mission_interfaces/action/detail/delivery_action_trigger__struct.h"

/// Initialize action/DeliveryActionTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__DeliveryActionTrigger_Goal
 * )) before or use
 * mission_interfaces__action__DeliveryActionTrigger_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Goal__init(mission_interfaces__action__DeliveryActionTrigger_Goal * msg);

/// Finalize action/DeliveryActionTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Goal__fini(mission_interfaces__action__DeliveryActionTrigger_Goal * msg);

/// Create action/DeliveryActionTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__DeliveryActionTrigger_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_Goal *
mission_interfaces__action__DeliveryActionTrigger_Goal__create();

/// Destroy action/DeliveryActionTrigger message.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Goal__destroy(mission_interfaces__action__DeliveryActionTrigger_Goal * msg);

/// Check for action/DeliveryActionTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Goal__are_equal(const mission_interfaces__action__DeliveryActionTrigger_Goal * lhs, const mission_interfaces__action__DeliveryActionTrigger_Goal * rhs);

/// Copy a action/DeliveryActionTrigger message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Goal__copy(
  const mission_interfaces__action__DeliveryActionTrigger_Goal * input,
  mission_interfaces__action__DeliveryActionTrigger_Goal * output);

/// Initialize array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__DeliveryActionTrigger_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence__init(mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence * array, size_t size);

/// Finalize array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence__fini(mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence * array);

/// Create array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence *
mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence__create(size_t size);

/// Destroy array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence__destroy(mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence * array);

/// Check for action/DeliveryActionTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence__are_equal(const mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence * lhs, const mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence * rhs);

/// Copy an array of action/DeliveryActionTrigger messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence__copy(
  const mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence * input,
  mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence * output);

/// Initialize action/DeliveryActionTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__DeliveryActionTrigger_Result
 * )) before or use
 * mission_interfaces__action__DeliveryActionTrigger_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Result__init(mission_interfaces__action__DeliveryActionTrigger_Result * msg);

/// Finalize action/DeliveryActionTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Result__fini(mission_interfaces__action__DeliveryActionTrigger_Result * msg);

/// Create action/DeliveryActionTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__DeliveryActionTrigger_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_Result *
mission_interfaces__action__DeliveryActionTrigger_Result__create();

/// Destroy action/DeliveryActionTrigger message.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Result__destroy(mission_interfaces__action__DeliveryActionTrigger_Result * msg);

/// Check for action/DeliveryActionTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Result__are_equal(const mission_interfaces__action__DeliveryActionTrigger_Result * lhs, const mission_interfaces__action__DeliveryActionTrigger_Result * rhs);

/// Copy a action/DeliveryActionTrigger message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Result__copy(
  const mission_interfaces__action__DeliveryActionTrigger_Result * input,
  mission_interfaces__action__DeliveryActionTrigger_Result * output);

/// Initialize array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__DeliveryActionTrigger_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Result__Sequence__init(mission_interfaces__action__DeliveryActionTrigger_Result__Sequence * array, size_t size);

/// Finalize array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Result__Sequence__fini(mission_interfaces__action__DeliveryActionTrigger_Result__Sequence * array);

/// Create array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__DeliveryActionTrigger_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_Result__Sequence *
mission_interfaces__action__DeliveryActionTrigger_Result__Sequence__create(size_t size);

/// Destroy array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Result__Sequence__destroy(mission_interfaces__action__DeliveryActionTrigger_Result__Sequence * array);

/// Check for action/DeliveryActionTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Result__Sequence__are_equal(const mission_interfaces__action__DeliveryActionTrigger_Result__Sequence * lhs, const mission_interfaces__action__DeliveryActionTrigger_Result__Sequence * rhs);

/// Copy an array of action/DeliveryActionTrigger messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Result__Sequence__copy(
  const mission_interfaces__action__DeliveryActionTrigger_Result__Sequence * input,
  mission_interfaces__action__DeliveryActionTrigger_Result__Sequence * output);

/// Initialize action/DeliveryActionTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__DeliveryActionTrigger_Feedback
 * )) before or use
 * mission_interfaces__action__DeliveryActionTrigger_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Feedback__init(mission_interfaces__action__DeliveryActionTrigger_Feedback * msg);

/// Finalize action/DeliveryActionTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Feedback__fini(mission_interfaces__action__DeliveryActionTrigger_Feedback * msg);

/// Create action/DeliveryActionTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__DeliveryActionTrigger_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_Feedback *
mission_interfaces__action__DeliveryActionTrigger_Feedback__create();

/// Destroy action/DeliveryActionTrigger message.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Feedback__destroy(mission_interfaces__action__DeliveryActionTrigger_Feedback * msg);

/// Check for action/DeliveryActionTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Feedback__are_equal(const mission_interfaces__action__DeliveryActionTrigger_Feedback * lhs, const mission_interfaces__action__DeliveryActionTrigger_Feedback * rhs);

/// Copy a action/DeliveryActionTrigger message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Feedback__copy(
  const mission_interfaces__action__DeliveryActionTrigger_Feedback * input,
  mission_interfaces__action__DeliveryActionTrigger_Feedback * output);

/// Initialize array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__DeliveryActionTrigger_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence__init(mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence * array, size_t size);

/// Finalize array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence__fini(mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence * array);

/// Create array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence *
mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence__create(size_t size);

/// Destroy array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence__destroy(mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence * array);

/// Check for action/DeliveryActionTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence__are_equal(const mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence * lhs, const mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence * rhs);

/// Copy an array of action/DeliveryActionTrigger messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence__copy(
  const mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence * input,
  mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence * output);

/// Initialize action/DeliveryActionTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request
 * )) before or use
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__init(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request * msg);

/// Finalize action/DeliveryActionTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__fini(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request * msg);

/// Create action/DeliveryActionTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request *
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__create();

/// Destroy action/DeliveryActionTrigger message.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__destroy(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request * msg);

/// Check for action/DeliveryActionTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__are_equal(const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request * lhs, const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request * rhs);

/// Copy a action/DeliveryActionTrigger message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__copy(
  const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request * input,
  mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request * output);

/// Initialize array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence__init(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence__fini(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence * array);

/// Create array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence *
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence__destroy(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence * array);

/// Check for action/DeliveryActionTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence__are_equal(const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence * lhs, const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/DeliveryActionTrigger messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence__copy(
  const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence * input,
  mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence * output);

/// Initialize action/DeliveryActionTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response
 * )) before or use
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__init(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response * msg);

/// Finalize action/DeliveryActionTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__fini(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response * msg);

/// Create action/DeliveryActionTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response *
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__create();

/// Destroy action/DeliveryActionTrigger message.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__destroy(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response * msg);

/// Check for action/DeliveryActionTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__are_equal(const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response * lhs, const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response * rhs);

/// Copy a action/DeliveryActionTrigger message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__copy(
  const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response * input,
  mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response * output);

/// Initialize array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence__init(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence__fini(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence * array);

/// Create array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence *
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence__destroy(mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence * array);

/// Check for action/DeliveryActionTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence__are_equal(const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence * lhs, const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/DeliveryActionTrigger messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence__copy(
  const mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence * input,
  mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence * output);

/// Initialize action/DeliveryActionTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Request
 * )) before or use
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__init(mission_interfaces__action__DeliveryActionTrigger_GetResult_Request * msg);

/// Finalize action/DeliveryActionTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__fini(mission_interfaces__action__DeliveryActionTrigger_GetResult_Request * msg);

/// Create action/DeliveryActionTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request *
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__create();

/// Destroy action/DeliveryActionTrigger message.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__destroy(mission_interfaces__action__DeliveryActionTrigger_GetResult_Request * msg);

/// Check for action/DeliveryActionTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__are_equal(const mission_interfaces__action__DeliveryActionTrigger_GetResult_Request * lhs, const mission_interfaces__action__DeliveryActionTrigger_GetResult_Request * rhs);

/// Copy a action/DeliveryActionTrigger message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__copy(
  const mission_interfaces__action__DeliveryActionTrigger_GetResult_Request * input,
  mission_interfaces__action__DeliveryActionTrigger_GetResult_Request * output);

/// Initialize array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence__init(mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence__fini(mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence * array);

/// Create array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence *
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence__destroy(mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence * array);

/// Check for action/DeliveryActionTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence__are_equal(const mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence * lhs, const mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence * rhs);

/// Copy an array of action/DeliveryActionTrigger messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence__copy(
  const mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence * input,
  mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence * output);

/// Initialize action/DeliveryActionTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Response
 * )) before or use
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__init(mission_interfaces__action__DeliveryActionTrigger_GetResult_Response * msg);

/// Finalize action/DeliveryActionTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__fini(mission_interfaces__action__DeliveryActionTrigger_GetResult_Response * msg);

/// Create action/DeliveryActionTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response *
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__create();

/// Destroy action/DeliveryActionTrigger message.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__destroy(mission_interfaces__action__DeliveryActionTrigger_GetResult_Response * msg);

/// Check for action/DeliveryActionTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__are_equal(const mission_interfaces__action__DeliveryActionTrigger_GetResult_Response * lhs, const mission_interfaces__action__DeliveryActionTrigger_GetResult_Response * rhs);

/// Copy a action/DeliveryActionTrigger message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__copy(
  const mission_interfaces__action__DeliveryActionTrigger_GetResult_Response * input,
  mission_interfaces__action__DeliveryActionTrigger_GetResult_Response * output);

/// Initialize array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence__init(mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence__fini(mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence * array);

/// Create array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence *
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence__destroy(mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence * array);

/// Check for action/DeliveryActionTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence__are_equal(const mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence * lhs, const mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence * rhs);

/// Copy an array of action/DeliveryActionTrigger messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence__copy(
  const mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence * input,
  mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence * output);

/// Initialize action/DeliveryActionTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage
 * )) before or use
 * mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__init(mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage * msg);

/// Finalize action/DeliveryActionTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__fini(mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage * msg);

/// Create action/DeliveryActionTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage *
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__create();

/// Destroy action/DeliveryActionTrigger message.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__destroy(mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage * msg);

/// Check for action/DeliveryActionTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__are_equal(const mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage * lhs, const mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage * rhs);

/// Copy a action/DeliveryActionTrigger message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__copy(
  const mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage * input,
  mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage * output);

/// Initialize array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence__init(mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence__fini(mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence * array);

/// Create array of action/DeliveryActionTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence *
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/DeliveryActionTrigger messages.
/**
 * It calls
 * mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence__destroy(mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence * array);

/// Check for action/DeliveryActionTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence__are_equal(const mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence * lhs, const mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/DeliveryActionTrigger messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence__copy(
  const mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence * input,
  mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_ACTION_TRIGGER__FUNCTIONS_H_
