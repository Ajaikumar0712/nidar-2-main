// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mission_interfaces:srv/GetComConfig.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/srv/detail/get_com_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mission_interfaces__srv__GetComConfig_Request__init(mission_interfaces__srv__GetComConfig_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mission_interfaces__srv__GetComConfig_Request__fini(mission_interfaces__srv__GetComConfig_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mission_interfaces__srv__GetComConfig_Request__are_equal(const mission_interfaces__srv__GetComConfig_Request * lhs, const mission_interfaces__srv__GetComConfig_Request * rhs)
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
mission_interfaces__srv__GetComConfig_Request__copy(
  const mission_interfaces__srv__GetComConfig_Request * input,
  mission_interfaces__srv__GetComConfig_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mission_interfaces__srv__GetComConfig_Request *
mission_interfaces__srv__GetComConfig_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__srv__GetComConfig_Request * msg = (mission_interfaces__srv__GetComConfig_Request *)allocator.allocate(sizeof(mission_interfaces__srv__GetComConfig_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__srv__GetComConfig_Request));
  bool success = mission_interfaces__srv__GetComConfig_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__srv__GetComConfig_Request__destroy(mission_interfaces__srv__GetComConfig_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__srv__GetComConfig_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__srv__GetComConfig_Request__Sequence__init(mission_interfaces__srv__GetComConfig_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__srv__GetComConfig_Request * data = NULL;

  if (size) {
    data = (mission_interfaces__srv__GetComConfig_Request *)allocator.zero_allocate(size, sizeof(mission_interfaces__srv__GetComConfig_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__srv__GetComConfig_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__srv__GetComConfig_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mission_interfaces__srv__GetComConfig_Request__Sequence__fini(mission_interfaces__srv__GetComConfig_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mission_interfaces__srv__GetComConfig_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mission_interfaces__srv__GetComConfig_Request__Sequence *
mission_interfaces__srv__GetComConfig_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__srv__GetComConfig_Request__Sequence * array = (mission_interfaces__srv__GetComConfig_Request__Sequence *)allocator.allocate(sizeof(mission_interfaces__srv__GetComConfig_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__srv__GetComConfig_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__srv__GetComConfig_Request__Sequence__destroy(mission_interfaces__srv__GetComConfig_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__srv__GetComConfig_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__srv__GetComConfig_Request__Sequence__are_equal(const mission_interfaces__srv__GetComConfig_Request__Sequence * lhs, const mission_interfaces__srv__GetComConfig_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__srv__GetComConfig_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__srv__GetComConfig_Request__Sequence__copy(
  const mission_interfaces__srv__GetComConfig_Request__Sequence * input,
  mission_interfaces__srv__GetComConfig_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__srv__GetComConfig_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__srv__GetComConfig_Request * data =
      (mission_interfaces__srv__GetComConfig_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__srv__GetComConfig_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__srv__GetComConfig_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__srv__GetComConfig_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `ros_ip`
// Member `ros_port`
// Member `scout_video_port`
// Member `scout_video_ip`
// Member `delivery_video_port`
// Member `delivery_video_ip`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
mission_interfaces__srv__GetComConfig_Response__init(mission_interfaces__srv__GetComConfig_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ros_ip
  if (!rosidl_runtime_c__String__init(&msg->ros_ip)) {
    mission_interfaces__srv__GetComConfig_Response__fini(msg);
    return false;
  }
  // ros_port
  if (!rosidl_runtime_c__String__init(&msg->ros_port)) {
    mission_interfaces__srv__GetComConfig_Response__fini(msg);
    return false;
  }
  // scout_video_port
  if (!rosidl_runtime_c__String__init(&msg->scout_video_port)) {
    mission_interfaces__srv__GetComConfig_Response__fini(msg);
    return false;
  }
  // scout_video_ip
  if (!rosidl_runtime_c__String__init(&msg->scout_video_ip)) {
    mission_interfaces__srv__GetComConfig_Response__fini(msg);
    return false;
  }
  // delivery_video_port
  if (!rosidl_runtime_c__String__init(&msg->delivery_video_port)) {
    mission_interfaces__srv__GetComConfig_Response__fini(msg);
    return false;
  }
  // delivery_video_ip
  if (!rosidl_runtime_c__String__init(&msg->delivery_video_ip)) {
    mission_interfaces__srv__GetComConfig_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    mission_interfaces__srv__GetComConfig_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
mission_interfaces__srv__GetComConfig_Response__fini(mission_interfaces__srv__GetComConfig_Response * msg)
{
  if (!msg) {
    return;
  }
  // ros_ip
  rosidl_runtime_c__String__fini(&msg->ros_ip);
  // ros_port
  rosidl_runtime_c__String__fini(&msg->ros_port);
  // scout_video_port
  rosidl_runtime_c__String__fini(&msg->scout_video_port);
  // scout_video_ip
  rosidl_runtime_c__String__fini(&msg->scout_video_ip);
  // delivery_video_port
  rosidl_runtime_c__String__fini(&msg->delivery_video_port);
  // delivery_video_ip
  rosidl_runtime_c__String__fini(&msg->delivery_video_ip);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // success
}

bool
mission_interfaces__srv__GetComConfig_Response__are_equal(const mission_interfaces__srv__GetComConfig_Response * lhs, const mission_interfaces__srv__GetComConfig_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ros_ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ros_ip), &(rhs->ros_ip)))
  {
    return false;
  }
  // ros_port
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ros_port), &(rhs->ros_port)))
  {
    return false;
  }
  // scout_video_port
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->scout_video_port), &(rhs->scout_video_port)))
  {
    return false;
  }
  // scout_video_ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->scout_video_ip), &(rhs->scout_video_ip)))
  {
    return false;
  }
  // delivery_video_port
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->delivery_video_port), &(rhs->delivery_video_port)))
  {
    return false;
  }
  // delivery_video_ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->delivery_video_ip), &(rhs->delivery_video_ip)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
mission_interfaces__srv__GetComConfig_Response__copy(
  const mission_interfaces__srv__GetComConfig_Response * input,
  mission_interfaces__srv__GetComConfig_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ros_ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ros_ip), &(output->ros_ip)))
  {
    return false;
  }
  // ros_port
  if (!rosidl_runtime_c__String__copy(
      &(input->ros_port), &(output->ros_port)))
  {
    return false;
  }
  // scout_video_port
  if (!rosidl_runtime_c__String__copy(
      &(input->scout_video_port), &(output->scout_video_port)))
  {
    return false;
  }
  // scout_video_ip
  if (!rosidl_runtime_c__String__copy(
      &(input->scout_video_ip), &(output->scout_video_ip)))
  {
    return false;
  }
  // delivery_video_port
  if (!rosidl_runtime_c__String__copy(
      &(input->delivery_video_port), &(output->delivery_video_port)))
  {
    return false;
  }
  // delivery_video_ip
  if (!rosidl_runtime_c__String__copy(
      &(input->delivery_video_ip), &(output->delivery_video_ip)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

mission_interfaces__srv__GetComConfig_Response *
mission_interfaces__srv__GetComConfig_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__srv__GetComConfig_Response * msg = (mission_interfaces__srv__GetComConfig_Response *)allocator.allocate(sizeof(mission_interfaces__srv__GetComConfig_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__srv__GetComConfig_Response));
  bool success = mission_interfaces__srv__GetComConfig_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__srv__GetComConfig_Response__destroy(mission_interfaces__srv__GetComConfig_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__srv__GetComConfig_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__srv__GetComConfig_Response__Sequence__init(mission_interfaces__srv__GetComConfig_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__srv__GetComConfig_Response * data = NULL;

  if (size) {
    data = (mission_interfaces__srv__GetComConfig_Response *)allocator.zero_allocate(size, sizeof(mission_interfaces__srv__GetComConfig_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__srv__GetComConfig_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__srv__GetComConfig_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mission_interfaces__srv__GetComConfig_Response__Sequence__fini(mission_interfaces__srv__GetComConfig_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mission_interfaces__srv__GetComConfig_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mission_interfaces__srv__GetComConfig_Response__Sequence *
mission_interfaces__srv__GetComConfig_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__srv__GetComConfig_Response__Sequence * array = (mission_interfaces__srv__GetComConfig_Response__Sequence *)allocator.allocate(sizeof(mission_interfaces__srv__GetComConfig_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__srv__GetComConfig_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__srv__GetComConfig_Response__Sequence__destroy(mission_interfaces__srv__GetComConfig_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__srv__GetComConfig_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__srv__GetComConfig_Response__Sequence__are_equal(const mission_interfaces__srv__GetComConfig_Response__Sequence * lhs, const mission_interfaces__srv__GetComConfig_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__srv__GetComConfig_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__srv__GetComConfig_Response__Sequence__copy(
  const mission_interfaces__srv__GetComConfig_Response__Sequence * input,
  mission_interfaces__srv__GetComConfig_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__srv__GetComConfig_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__srv__GetComConfig_Response * data =
      (mission_interfaces__srv__GetComConfig_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__srv__GetComConfig_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__srv__GetComConfig_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__srv__GetComConfig_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
