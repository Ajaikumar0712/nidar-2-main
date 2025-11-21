// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/VictimDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cropped_image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'detection_id'
#include "rosidl_runtime_c/string.h"
// Member 'bounding_box'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/VictimDetection in the package custom_msgs.
typedef struct custom_msgs__msg__VictimDetection
{
  sensor_msgs__msg__Image cropped_image;
  double latitude;
  double longitude;
  float confidence;
  rosidl_runtime_c__String detection_id;
  sensor_msgs__msg__RegionOfInterest bounding_box;
} custom_msgs__msg__VictimDetection;

// Struct for a sequence of custom_msgs__msg__VictimDetection.
typedef struct custom_msgs__msg__VictimDetection__Sequence
{
  custom_msgs__msg__VictimDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__VictimDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__VICTIM_DETECTION__STRUCT_H_
