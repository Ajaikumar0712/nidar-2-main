// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:srv/SetDroneConfig.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__SRV__DETAIL__SET_DRONE_CONFIG__STRUCT_H_
#define MISSION_INTERFACES__SRV__DETAIL__SET_DRONE_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'delivery_topic'
// Member 'scout_topic'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetDroneConfig in the package mission_interfaces.
typedef struct mission_interfaces__srv__SetDroneConfig_Request
{
  rosidl_runtime_c__String delivery_topic;
  rosidl_runtime_c__String scout_topic;
} mission_interfaces__srv__SetDroneConfig_Request;

// Struct for a sequence of mission_interfaces__srv__SetDroneConfig_Request.
typedef struct mission_interfaces__srv__SetDroneConfig_Request__Sequence
{
  mission_interfaces__srv__SetDroneConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__SetDroneConfig_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetDroneConfig in the package mission_interfaces.
typedef struct mission_interfaces__srv__SetDroneConfig_Response
{
  bool success;
  rosidl_runtime_c__String message;
} mission_interfaces__srv__SetDroneConfig_Response;

// Struct for a sequence of mission_interfaces__srv__SetDroneConfig_Response.
typedef struct mission_interfaces__srv__SetDroneConfig_Response__Sequence
{
  mission_interfaces__srv__SetDroneConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__SetDroneConfig_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__SRV__DETAIL__SET_DRONE_CONFIG__STRUCT_H_
