// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:action/DeliveryActionTrigger.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_ACTION_TRIGGER__STRUCT_H_
#define MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_ACTION_TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DeliveryActionTrigger in the package mission_interfaces.
typedef struct mission_interfaces__action__DeliveryActionTrigger_Goal
{
  double latitude;
  double longitude;
  double altitude;
} mission_interfaces__action__DeliveryActionTrigger_Goal;

// Struct for a sequence of mission_interfaces__action__DeliveryActionTrigger_Goal.
typedef struct mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence
{
  mission_interfaces__action__DeliveryActionTrigger_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__DeliveryActionTrigger_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/DeliveryActionTrigger in the package mission_interfaces.
typedef struct mission_interfaces__action__DeliveryActionTrigger_Result
{
  double success;
} mission_interfaces__action__DeliveryActionTrigger_Result;

// Struct for a sequence of mission_interfaces__action__DeliveryActionTrigger_Result.
typedef struct mission_interfaces__action__DeliveryActionTrigger_Result__Sequence
{
  mission_interfaces__action__DeliveryActionTrigger_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__DeliveryActionTrigger_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/DeliveryActionTrigger in the package mission_interfaces.
typedef struct mission_interfaces__action__DeliveryActionTrigger_Feedback
{
  double current_lat;
  double current_lon;
  double current_alt;
} mission_interfaces__action__DeliveryActionTrigger_Feedback;

// Struct for a sequence of mission_interfaces__action__DeliveryActionTrigger_Feedback.
typedef struct mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence
{
  mission_interfaces__action__DeliveryActionTrigger_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__DeliveryActionTrigger_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mission_interfaces/action/detail/delivery_action_trigger__struct.h"

/// Struct defined in action/DeliveryActionTrigger in the package mission_interfaces.
typedef struct mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__DeliveryActionTrigger_Goal goal;
} mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request;

// Struct for a sequence of mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request.
typedef struct mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence
{
  mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__DeliveryActionTrigger_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DeliveryActionTrigger in the package mission_interfaces.
typedef struct mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response;

// Struct for a sequence of mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response.
typedef struct mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence
{
  mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__DeliveryActionTrigger_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DeliveryActionTrigger in the package mission_interfaces.
typedef struct mission_interfaces__action__DeliveryActionTrigger_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mission_interfaces__action__DeliveryActionTrigger_GetResult_Request;

// Struct for a sequence of mission_interfaces__action__DeliveryActionTrigger_GetResult_Request.
typedef struct mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence
{
  mission_interfaces__action__DeliveryActionTrigger_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__DeliveryActionTrigger_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/delivery_action_trigger__struct.h"

/// Struct defined in action/DeliveryActionTrigger in the package mission_interfaces.
typedef struct mission_interfaces__action__DeliveryActionTrigger_GetResult_Response
{
  int8_t status;
  mission_interfaces__action__DeliveryActionTrigger_Result result;
} mission_interfaces__action__DeliveryActionTrigger_GetResult_Response;

// Struct for a sequence of mission_interfaces__action__DeliveryActionTrigger_GetResult_Response.
typedef struct mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence
{
  mission_interfaces__action__DeliveryActionTrigger_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__DeliveryActionTrigger_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/delivery_action_trigger__struct.h"

/// Struct defined in action/DeliveryActionTrigger in the package mission_interfaces.
typedef struct mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__DeliveryActionTrigger_Feedback feedback;
} mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage;

// Struct for a sequence of mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage.
typedef struct mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence
{
  mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__DeliveryActionTrigger_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_ACTION_TRIGGER__STRUCT_H_
