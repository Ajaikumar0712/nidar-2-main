// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mission_interfaces:action/ScoutActionTrigger.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/action/detail/scout_action_trigger__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoints`
#include "geographic_msgs/msg/detail/geo_point__functions.h"

bool
mission_interfaces__action__ScoutActionTrigger_Goal__init(mission_interfaces__action__ScoutActionTrigger_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // waypoints
  if (!geographic_msgs__msg__GeoPoint__Sequence__init(&msg->waypoints, 0)) {
    mission_interfaces__action__ScoutActionTrigger_Goal__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__ScoutActionTrigger_Goal__fini(mission_interfaces__action__ScoutActionTrigger_Goal * msg)
{
  if (!msg) {
    return;
  }
  // waypoints
  geographic_msgs__msg__GeoPoint__Sequence__fini(&msg->waypoints);
}

bool
mission_interfaces__action__ScoutActionTrigger_Goal__are_equal(const mission_interfaces__action__ScoutActionTrigger_Goal * lhs, const mission_interfaces__action__ScoutActionTrigger_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoints
  if (!geographic_msgs__msg__GeoPoint__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_Goal__copy(
  const mission_interfaces__action__ScoutActionTrigger_Goal * input,
  mission_interfaces__action__ScoutActionTrigger_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoints
  if (!geographic_msgs__msg__GeoPoint__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__ScoutActionTrigger_Goal *
mission_interfaces__action__ScoutActionTrigger_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_Goal * msg = (mission_interfaces__action__ScoutActionTrigger_Goal *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__ScoutActionTrigger_Goal));
  bool success = mission_interfaces__action__ScoutActionTrigger_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__ScoutActionTrigger_Goal__destroy(mission_interfaces__action__ScoutActionTrigger_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__ScoutActionTrigger_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__ScoutActionTrigger_Goal__Sequence__init(mission_interfaces__action__ScoutActionTrigger_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_Goal * data = NULL;

  if (size) {
    data = (mission_interfaces__action__ScoutActionTrigger_Goal *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__ScoutActionTrigger_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__ScoutActionTrigger_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__ScoutActionTrigger_Goal__fini(&data[i - 1]);
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
mission_interfaces__action__ScoutActionTrigger_Goal__Sequence__fini(mission_interfaces__action__ScoutActionTrigger_Goal__Sequence * array)
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
      mission_interfaces__action__ScoutActionTrigger_Goal__fini(&array->data[i]);
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

mission_interfaces__action__ScoutActionTrigger_Goal__Sequence *
mission_interfaces__action__ScoutActionTrigger_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_Goal__Sequence * array = (mission_interfaces__action__ScoutActionTrigger_Goal__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__ScoutActionTrigger_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__ScoutActionTrigger_Goal__Sequence__destroy(mission_interfaces__action__ScoutActionTrigger_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__ScoutActionTrigger_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__ScoutActionTrigger_Goal__Sequence__are_equal(const mission_interfaces__action__ScoutActionTrigger_Goal__Sequence * lhs, const mission_interfaces__action__ScoutActionTrigger_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_Goal__Sequence__copy(
  const mission_interfaces__action__ScoutActionTrigger_Goal__Sequence * input,
  mission_interfaces__action__ScoutActionTrigger_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__ScoutActionTrigger_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__ScoutActionTrigger_Goal * data =
      (mission_interfaces__action__ScoutActionTrigger_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__ScoutActionTrigger_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__ScoutActionTrigger_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `success`
#include "rosidl_runtime_c/string_functions.h"

bool
mission_interfaces__action__ScoutActionTrigger_Result__init(mission_interfaces__action__ScoutActionTrigger_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__String__init(&msg->success)) {
    mission_interfaces__action__ScoutActionTrigger_Result__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__ScoutActionTrigger_Result__fini(mission_interfaces__action__ScoutActionTrigger_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  rosidl_runtime_c__String__fini(&msg->success);
}

bool
mission_interfaces__action__ScoutActionTrigger_Result__are_equal(const mission_interfaces__action__ScoutActionTrigger_Result * lhs, const mission_interfaces__action__ScoutActionTrigger_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->success), &(rhs->success)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_Result__copy(
  const mission_interfaces__action__ScoutActionTrigger_Result * input,
  mission_interfaces__action__ScoutActionTrigger_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__String__copy(
      &(input->success), &(output->success)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__ScoutActionTrigger_Result *
mission_interfaces__action__ScoutActionTrigger_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_Result * msg = (mission_interfaces__action__ScoutActionTrigger_Result *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__ScoutActionTrigger_Result));
  bool success = mission_interfaces__action__ScoutActionTrigger_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__ScoutActionTrigger_Result__destroy(mission_interfaces__action__ScoutActionTrigger_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__ScoutActionTrigger_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__ScoutActionTrigger_Result__Sequence__init(mission_interfaces__action__ScoutActionTrigger_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_Result * data = NULL;

  if (size) {
    data = (mission_interfaces__action__ScoutActionTrigger_Result *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__ScoutActionTrigger_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__ScoutActionTrigger_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__ScoutActionTrigger_Result__fini(&data[i - 1]);
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
mission_interfaces__action__ScoutActionTrigger_Result__Sequence__fini(mission_interfaces__action__ScoutActionTrigger_Result__Sequence * array)
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
      mission_interfaces__action__ScoutActionTrigger_Result__fini(&array->data[i]);
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

mission_interfaces__action__ScoutActionTrigger_Result__Sequence *
mission_interfaces__action__ScoutActionTrigger_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_Result__Sequence * array = (mission_interfaces__action__ScoutActionTrigger_Result__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__ScoutActionTrigger_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__ScoutActionTrigger_Result__Sequence__destroy(mission_interfaces__action__ScoutActionTrigger_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__ScoutActionTrigger_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__ScoutActionTrigger_Result__Sequence__are_equal(const mission_interfaces__action__ScoutActionTrigger_Result__Sequence * lhs, const mission_interfaces__action__ScoutActionTrigger_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_Result__Sequence__copy(
  const mission_interfaces__action__ScoutActionTrigger_Result__Sequence * input,
  mission_interfaces__action__ScoutActionTrigger_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__ScoutActionTrigger_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__ScoutActionTrigger_Result * data =
      (mission_interfaces__action__ScoutActionTrigger_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__ScoutActionTrigger_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__ScoutActionTrigger_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_location`
// already included above
// #include "geographic_msgs/msg/detail/geo_point__functions.h"

bool
mission_interfaces__action__ScoutActionTrigger_Feedback__init(mission_interfaces__action__ScoutActionTrigger_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_location
  if (!geographic_msgs__msg__GeoPoint__init(&msg->current_location)) {
    mission_interfaces__action__ScoutActionTrigger_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__ScoutActionTrigger_Feedback__fini(mission_interfaces__action__ScoutActionTrigger_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_location
  geographic_msgs__msg__GeoPoint__fini(&msg->current_location);
}

bool
mission_interfaces__action__ScoutActionTrigger_Feedback__are_equal(const mission_interfaces__action__ScoutActionTrigger_Feedback * lhs, const mission_interfaces__action__ScoutActionTrigger_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_location
  if (!geographic_msgs__msg__GeoPoint__are_equal(
      &(lhs->current_location), &(rhs->current_location)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_Feedback__copy(
  const mission_interfaces__action__ScoutActionTrigger_Feedback * input,
  mission_interfaces__action__ScoutActionTrigger_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_location
  if (!geographic_msgs__msg__GeoPoint__copy(
      &(input->current_location), &(output->current_location)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__ScoutActionTrigger_Feedback *
mission_interfaces__action__ScoutActionTrigger_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_Feedback * msg = (mission_interfaces__action__ScoutActionTrigger_Feedback *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__ScoutActionTrigger_Feedback));
  bool success = mission_interfaces__action__ScoutActionTrigger_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__ScoutActionTrigger_Feedback__destroy(mission_interfaces__action__ScoutActionTrigger_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__ScoutActionTrigger_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence__init(mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_Feedback * data = NULL;

  if (size) {
    data = (mission_interfaces__action__ScoutActionTrigger_Feedback *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__ScoutActionTrigger_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__ScoutActionTrigger_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__ScoutActionTrigger_Feedback__fini(&data[i - 1]);
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
mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence__fini(mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence * array)
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
      mission_interfaces__action__ScoutActionTrigger_Feedback__fini(&array->data[i]);
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

mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence *
mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence * array = (mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence__destroy(mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence__are_equal(const mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence * lhs, const mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence__copy(
  const mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence * input,
  mission_interfaces__action__ScoutActionTrigger_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__ScoutActionTrigger_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__ScoutActionTrigger_Feedback * data =
      (mission_interfaces__action__ScoutActionTrigger_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__ScoutActionTrigger_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__ScoutActionTrigger_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__functions.h"

bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__init(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!mission_interfaces__action__ScoutActionTrigger_Goal__init(&msg->goal)) {
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__fini(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  mission_interfaces__action__ScoutActionTrigger_Goal__fini(&msg->goal);
}

bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__are_equal(const mission_interfaces__action__ScoutActionTrigger_SendGoal_Request * lhs, const mission_interfaces__action__ScoutActionTrigger_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!mission_interfaces__action__ScoutActionTrigger_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__copy(
  const mission_interfaces__action__ScoutActionTrigger_SendGoal_Request * input,
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!mission_interfaces__action__ScoutActionTrigger_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__ScoutActionTrigger_SendGoal_Request *
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request * msg = (mission_interfaces__action__ScoutActionTrigger_SendGoal_Request *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request));
  bool success = mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__destroy(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence__init(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request * data = NULL;

  if (size) {
    data = (mission_interfaces__action__ScoutActionTrigger_SendGoal_Request *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__fini(&data[i - 1]);
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
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence__fini(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence * array)
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
      mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__fini(&array->data[i]);
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

mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence *
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence * array = (mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence__destroy(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence__are_equal(const mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence * lhs, const mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence__copy(
  const mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence * input,
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Request * data =
      (mission_interfaces__action__ScoutActionTrigger_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__init(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__fini(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__are_equal(const mission_interfaces__action__ScoutActionTrigger_SendGoal_Response * lhs, const mission_interfaces__action__ScoutActionTrigger_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__copy(
  const mission_interfaces__action__ScoutActionTrigger_SendGoal_Response * input,
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__ScoutActionTrigger_SendGoal_Response *
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response * msg = (mission_interfaces__action__ScoutActionTrigger_SendGoal_Response *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response));
  bool success = mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__destroy(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence__init(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response * data = NULL;

  if (size) {
    data = (mission_interfaces__action__ScoutActionTrigger_SendGoal_Response *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__fini(&data[i - 1]);
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
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence__fini(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence * array)
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
      mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__fini(&array->data[i]);
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

mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence *
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence * array = (mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence__destroy(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence__are_equal(const mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence * lhs, const mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence__copy(
  const mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence * input,
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Response * data =
      (mission_interfaces__action__ScoutActionTrigger_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__init(mission_interfaces__action__ScoutActionTrigger_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mission_interfaces__action__ScoutActionTrigger_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__fini(mission_interfaces__action__ScoutActionTrigger_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__are_equal(const mission_interfaces__action__ScoutActionTrigger_GetResult_Request * lhs, const mission_interfaces__action__ScoutActionTrigger_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__copy(
  const mission_interfaces__action__ScoutActionTrigger_GetResult_Request * input,
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__ScoutActionTrigger_GetResult_Request *
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request * msg = (mission_interfaces__action__ScoutActionTrigger_GetResult_Request *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Request));
  bool success = mission_interfaces__action__ScoutActionTrigger_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__destroy(mission_interfaces__action__ScoutActionTrigger_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__ScoutActionTrigger_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence__init(mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request * data = NULL;

  if (size) {
    data = (mission_interfaces__action__ScoutActionTrigger_GetResult_Request *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__ScoutActionTrigger_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__ScoutActionTrigger_GetResult_Request__fini(&data[i - 1]);
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
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence__fini(mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence * array)
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
      mission_interfaces__action__ScoutActionTrigger_GetResult_Request__fini(&array->data[i]);
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

mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence *
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence * array = (mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence__destroy(mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence__are_equal(const mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence * lhs, const mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence__copy(
  const mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence * input,
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__ScoutActionTrigger_GetResult_Request * data =
      (mission_interfaces__action__ScoutActionTrigger_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__ScoutActionTrigger_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__ScoutActionTrigger_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__functions.h"

bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__init(mission_interfaces__action__ScoutActionTrigger_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!mission_interfaces__action__ScoutActionTrigger_Result__init(&msg->result)) {
    mission_interfaces__action__ScoutActionTrigger_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__fini(mission_interfaces__action__ScoutActionTrigger_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  mission_interfaces__action__ScoutActionTrigger_Result__fini(&msg->result);
}

bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__are_equal(const mission_interfaces__action__ScoutActionTrigger_GetResult_Response * lhs, const mission_interfaces__action__ScoutActionTrigger_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!mission_interfaces__action__ScoutActionTrigger_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__copy(
  const mission_interfaces__action__ScoutActionTrigger_GetResult_Response * input,
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!mission_interfaces__action__ScoutActionTrigger_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__ScoutActionTrigger_GetResult_Response *
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response * msg = (mission_interfaces__action__ScoutActionTrigger_GetResult_Response *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Response));
  bool success = mission_interfaces__action__ScoutActionTrigger_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__destroy(mission_interfaces__action__ScoutActionTrigger_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__ScoutActionTrigger_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence__init(mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response * data = NULL;

  if (size) {
    data = (mission_interfaces__action__ScoutActionTrigger_GetResult_Response *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__ScoutActionTrigger_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__ScoutActionTrigger_GetResult_Response__fini(&data[i - 1]);
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
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence__fini(mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence * array)
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
      mission_interfaces__action__ScoutActionTrigger_GetResult_Response__fini(&array->data[i]);
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

mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence *
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence * array = (mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence__destroy(mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence__are_equal(const mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence * lhs, const mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence__copy(
  const mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence * input,
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__ScoutActionTrigger_GetResult_Response * data =
      (mission_interfaces__action__ScoutActionTrigger_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__ScoutActionTrigger_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__ScoutActionTrigger_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__functions.h"

bool
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__init(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!mission_interfaces__action__ScoutActionTrigger_Feedback__init(&msg->feedback)) {
    mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__fini(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  mission_interfaces__action__ScoutActionTrigger_Feedback__fini(&msg->feedback);
}

bool
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__are_equal(const mission_interfaces__action__ScoutActionTrigger_FeedbackMessage * lhs, const mission_interfaces__action__ScoutActionTrigger_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mission_interfaces__action__ScoutActionTrigger_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__copy(
  const mission_interfaces__action__ScoutActionTrigger_FeedbackMessage * input,
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mission_interfaces__action__ScoutActionTrigger_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__ScoutActionTrigger_FeedbackMessage *
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage * msg = (mission_interfaces__action__ScoutActionTrigger_FeedbackMessage *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage));
  bool success = mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__destroy(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence__init(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage * data = NULL;

  if (size) {
    data = (mission_interfaces__action__ScoutActionTrigger_FeedbackMessage *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__fini(&data[i - 1]);
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
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence__fini(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence * array)
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
      mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__fini(&array->data[i]);
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

mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence *
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence * array = (mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence__destroy(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence__are_equal(const mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence * lhs, const mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence__copy(
  const mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence * input,
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__ScoutActionTrigger_FeedbackMessage * data =
      (mission_interfaces__action__ScoutActionTrigger_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
