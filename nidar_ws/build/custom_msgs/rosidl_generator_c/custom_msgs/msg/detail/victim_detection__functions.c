// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/VictimDetection.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/victim_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cropped_image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `detection_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `bounding_box`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
custom_msgs__msg__VictimDetection__init(custom_msgs__msg__VictimDetection * msg)
{
  if (!msg) {
    return false;
  }
  // cropped_image
  if (!sensor_msgs__msg__Image__init(&msg->cropped_image)) {
    custom_msgs__msg__VictimDetection__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // confidence
  // detection_id
  if (!rosidl_runtime_c__String__init(&msg->detection_id)) {
    custom_msgs__msg__VictimDetection__fini(msg);
    return false;
  }
  // bounding_box
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->bounding_box)) {
    custom_msgs__msg__VictimDetection__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__VictimDetection__fini(custom_msgs__msg__VictimDetection * msg)
{
  if (!msg) {
    return;
  }
  // cropped_image
  sensor_msgs__msg__Image__fini(&msg->cropped_image);
  // latitude
  // longitude
  // confidence
  // detection_id
  rosidl_runtime_c__String__fini(&msg->detection_id);
  // bounding_box
  sensor_msgs__msg__RegionOfInterest__fini(&msg->bounding_box);
}

bool
custom_msgs__msg__VictimDetection__are_equal(const custom_msgs__msg__VictimDetection * lhs, const custom_msgs__msg__VictimDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cropped_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->cropped_image), &(rhs->cropped_image)))
  {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // detection_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detection_id), &(rhs->detection_id)))
  {
    return false;
  }
  // bounding_box
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__VictimDetection__copy(
  const custom_msgs__msg__VictimDetection * input,
  custom_msgs__msg__VictimDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // cropped_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->cropped_image), &(output->cropped_image)))
  {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // confidence
  output->confidence = input->confidence;
  // detection_id
  if (!rosidl_runtime_c__String__copy(
      &(input->detection_id), &(output->detection_id)))
  {
    return false;
  }
  // bounding_box
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  return true;
}

custom_msgs__msg__VictimDetection *
custom_msgs__msg__VictimDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__VictimDetection * msg = (custom_msgs__msg__VictimDetection *)allocator.allocate(sizeof(custom_msgs__msg__VictimDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__VictimDetection));
  bool success = custom_msgs__msg__VictimDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__VictimDetection__destroy(custom_msgs__msg__VictimDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__VictimDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__VictimDetection__Sequence__init(custom_msgs__msg__VictimDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__VictimDetection * data = NULL;

  if (size) {
    data = (custom_msgs__msg__VictimDetection *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__VictimDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__VictimDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__VictimDetection__fini(&data[i - 1]);
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
custom_msgs__msg__VictimDetection__Sequence__fini(custom_msgs__msg__VictimDetection__Sequence * array)
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
      custom_msgs__msg__VictimDetection__fini(&array->data[i]);
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

custom_msgs__msg__VictimDetection__Sequence *
custom_msgs__msg__VictimDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__VictimDetection__Sequence * array = (custom_msgs__msg__VictimDetection__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__VictimDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__VictimDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__VictimDetection__Sequence__destroy(custom_msgs__msg__VictimDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__VictimDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__VictimDetection__Sequence__are_equal(const custom_msgs__msg__VictimDetection__Sequence * lhs, const custom_msgs__msg__VictimDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__VictimDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__VictimDetection__Sequence__copy(
  const custom_msgs__msg__VictimDetection__Sequence * input,
  custom_msgs__msg__VictimDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__VictimDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__VictimDetection * data =
      (custom_msgs__msg__VictimDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__VictimDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__VictimDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__VictimDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
