// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:srv/GetLawnmowerPath.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__SRV__DETAIL__GET_LAWNMOWER_PATH__STRUCT_H_
#define MISSION_INTERFACES__SRV__DETAIL__GET_LAWNMOWER_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'polygon_x'
// Member 'polygon_y'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetLawnmowerPath in the package mission_interfaces.
typedef struct mission_interfaces__srv__GetLawnmowerPath_Request
{
  rosidl_runtime_c__double__Sequence polygon_x;
  rosidl_runtime_c__double__Sequence polygon_y;
  double safe_margin;
  double spacing;
  double angle;
} mission_interfaces__srv__GetLawnmowerPath_Request;

// Struct for a sequence of mission_interfaces__srv__GetLawnmowerPath_Request.
typedef struct mission_interfaces__srv__GetLawnmowerPath_Request__Sequence
{
  mission_interfaces__srv__GetLawnmowerPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__GetLawnmowerPath_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waypoint_x'
// Member 'waypoint_y'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetLawnmowerPath in the package mission_interfaces.
typedef struct mission_interfaces__srv__GetLawnmowerPath_Response
{
  rosidl_runtime_c__double__Sequence waypoint_x;
  rosidl_runtime_c__double__Sequence waypoint_y;
} mission_interfaces__srv__GetLawnmowerPath_Response;

// Struct for a sequence of mission_interfaces__srv__GetLawnmowerPath_Response.
typedef struct mission_interfaces__srv__GetLawnmowerPath_Response__Sequence
{
  mission_interfaces__srv__GetLawnmowerPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__GetLawnmowerPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__SRV__DETAIL__GET_LAWNMOWER_PATH__STRUCT_H_
