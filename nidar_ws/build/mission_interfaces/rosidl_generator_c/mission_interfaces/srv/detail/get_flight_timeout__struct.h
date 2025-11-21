// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:srv/GetFlightTimeout.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__SRV__DETAIL__GET_FLIGHT_TIMEOUT__STRUCT_H_
#define MISSION_INTERFACES__SRV__DETAIL__GET_FLIGHT_TIMEOUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetFlightTimeout in the package mission_interfaces.
typedef struct mission_interfaces__srv__GetFlightTimeout_Request
{
  uint8_t structure_needs_at_least_one_member;
} mission_interfaces__srv__GetFlightTimeout_Request;

// Struct for a sequence of mission_interfaces__srv__GetFlightTimeout_Request.
typedef struct mission_interfaces__srv__GetFlightTimeout_Request__Sequence
{
  mission_interfaces__srv__GetFlightTimeout_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__GetFlightTimeout_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetFlightTimeout in the package mission_interfaces.
typedef struct mission_interfaces__srv__GetFlightTimeout_Response
{
  int32_t timeout;
  rosidl_runtime_c__String message;
  bool success;
} mission_interfaces__srv__GetFlightTimeout_Response;

// Struct for a sequence of mission_interfaces__srv__GetFlightTimeout_Response.
typedef struct mission_interfaces__srv__GetFlightTimeout_Response__Sequence
{
  mission_interfaces__srv__GetFlightTimeout_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__GetFlightTimeout_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__SRV__DETAIL__GET_FLIGHT_TIMEOUT__STRUCT_H_
