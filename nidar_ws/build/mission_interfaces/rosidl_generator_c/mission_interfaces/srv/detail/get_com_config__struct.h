// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:srv/GetComConfig.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__SRV__DETAIL__GET_COM_CONFIG__STRUCT_H_
#define MISSION_INTERFACES__SRV__DETAIL__GET_COM_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetComConfig in the package mission_interfaces.
typedef struct mission_interfaces__srv__GetComConfig_Request
{
  uint8_t structure_needs_at_least_one_member;
} mission_interfaces__srv__GetComConfig_Request;

// Struct for a sequence of mission_interfaces__srv__GetComConfig_Request.
typedef struct mission_interfaces__srv__GetComConfig_Request__Sequence
{
  mission_interfaces__srv__GetComConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__GetComConfig_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ros_ip'
// Member 'ros_port'
// Member 'scout_video_port'
// Member 'scout_video_ip'
// Member 'delivery_video_port'
// Member 'delivery_video_ip'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetComConfig in the package mission_interfaces.
typedef struct mission_interfaces__srv__GetComConfig_Response
{
  rosidl_runtime_c__String ros_ip;
  rosidl_runtime_c__String ros_port;
  rosidl_runtime_c__String scout_video_port;
  rosidl_runtime_c__String scout_video_ip;
  rosidl_runtime_c__String delivery_video_port;
  rosidl_runtime_c__String delivery_video_ip;
  rosidl_runtime_c__String message;
  bool success;
} mission_interfaces__srv__GetComConfig_Response;

// Struct for a sequence of mission_interfaces__srv__GetComConfig_Response.
typedef struct mission_interfaces__srv__GetComConfig_Response__Sequence
{
  mission_interfaces__srv__GetComConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__GetComConfig_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__SRV__DETAIL__GET_COM_CONFIG__STRUCT_H_
