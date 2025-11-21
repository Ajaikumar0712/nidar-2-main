// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mission_interfaces:action/ScoutActionTrigger.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"
#include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mission_interfaces/action/detail/scout_action_trigger__functions.h"
#include "mission_interfaces/action/detail/scout_action_trigger__struct.h"


// Include directives for member types
// Member `waypoints`
#include "geographic_msgs/msg/geo_point.h"
// Member `waypoints`
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__action__ScoutActionTrigger_Goal__init(message_memory);
}

void mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_fini_function(void * message_memory)
{
  mission_interfaces__action__ScoutActionTrigger_Goal__fini(message_memory);
}

size_t mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__size_function__ScoutActionTrigger_Goal__waypoints(
  const void * untyped_member)
{
  const geographic_msgs__msg__GeoPoint__Sequence * member =
    (const geographic_msgs__msg__GeoPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__get_const_function__ScoutActionTrigger_Goal__waypoints(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__msg__GeoPoint__Sequence * member =
    (const geographic_msgs__msg__GeoPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__get_function__ScoutActionTrigger_Goal__waypoints(
  void * untyped_member, size_t index)
{
  geographic_msgs__msg__GeoPoint__Sequence * member =
    (geographic_msgs__msg__GeoPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__fetch_function__ScoutActionTrigger_Goal__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geographic_msgs__msg__GeoPoint * item =
    ((const geographic_msgs__msg__GeoPoint *)
    mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__get_const_function__ScoutActionTrigger_Goal__waypoints(untyped_member, index));
  geographic_msgs__msg__GeoPoint * value =
    (geographic_msgs__msg__GeoPoint *)(untyped_value);
  *value = *item;
}

void mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__assign_function__ScoutActionTrigger_Goal__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geographic_msgs__msg__GeoPoint * item =
    ((geographic_msgs__msg__GeoPoint *)
    mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__get_function__ScoutActionTrigger_Goal__waypoints(untyped_member, index));
  const geographic_msgs__msg__GeoPoint * value =
    (const geographic_msgs__msg__GeoPoint *)(untyped_value);
  *item = *value;
}

bool mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__resize_function__ScoutActionTrigger_Goal__waypoints(
  void * untyped_member, size_t size)
{
  geographic_msgs__msg__GeoPoint__Sequence * member =
    (geographic_msgs__msg__GeoPoint__Sequence *)(untyped_member);
  geographic_msgs__msg__GeoPoint__Sequence__fini(member);
  return geographic_msgs__msg__GeoPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_message_member_array[1] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_Goal, waypoints),  // bytes offset in struct
    NULL,  // default value
    mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__size_function__ScoutActionTrigger_Goal__waypoints,  // size() function pointer
    mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__get_const_function__ScoutActionTrigger_Goal__waypoints,  // get_const(index) function pointer
    mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__get_function__ScoutActionTrigger_Goal__waypoints,  // get(index) function pointer
    mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__fetch_function__ScoutActionTrigger_Goal__waypoints,  // fetch(index, &value) function pointer
    mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__assign_function__ScoutActionTrigger_Goal__waypoints,  // assign(index, value) function pointer
    mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__resize_function__ScoutActionTrigger_Goal__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_message_members = {
  "mission_interfaces__action",  // message namespace
  "ScoutActionTrigger_Goal",  // message name
  1,  // number of fields
  sizeof(mission_interfaces__action__ScoutActionTrigger_Goal),
  mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_message_member_array,  // message members
  mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_message_type_support_handle = {
  0,
  &mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_Goal)() {
  mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  if (!mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__action__ScoutActionTrigger_Goal__rosidl_typesupport_introspection_c__ScoutActionTrigger_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__functions.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__struct.h"


// Include directives for member types
// Member `success`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__action__ScoutActionTrigger_Result__init(message_memory);
}

void mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_fini_function(void * message_memory)
{
  mission_interfaces__action__ScoutActionTrigger_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_message_members = {
  "mission_interfaces__action",  // message namespace
  "ScoutActionTrigger_Result",  // message name
  1,  // number of fields
  sizeof(mission_interfaces__action__ScoutActionTrigger_Result),
  mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_message_member_array,  // message members
  mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_message_type_support_handle = {
  0,
  &mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_Result)() {
  if (!mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__action__ScoutActionTrigger_Result__rosidl_typesupport_introspection_c__ScoutActionTrigger_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__functions.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__struct.h"


// Include directives for member types
// Member `current_location`
// already included above
// #include "geographic_msgs/msg/geo_point.h"
// Member `current_location`
// already included above
// #include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__action__ScoutActionTrigger_Feedback__init(message_memory);
}

void mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_fini_function(void * message_memory)
{
  mission_interfaces__action__ScoutActionTrigger_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_message_member_array[1] = {
  {
    "current_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_Feedback, current_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_message_members = {
  "mission_interfaces__action",  // message namespace
  "ScoutActionTrigger_Feedback",  // message name
  1,  // number of fields
  sizeof(mission_interfaces__action__ScoutActionTrigger_Feedback),
  mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_message_member_array,  // message members
  mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_message_type_support_handle = {
  0,
  &mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_Feedback)() {
  mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  if (!mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__action__ScoutActionTrigger_Feedback__rosidl_typesupport_introspection_c__ScoutActionTrigger_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__functions.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "mission_interfaces/action/scout_action_trigger.h"
// Member `goal`
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__init(message_memory);
}

void mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_fini_function(void * message_memory)
{
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_members = {
  "mission_interfaces__action",  // message namespace
  "ScoutActionTrigger_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Request),
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_member_array,  // message members
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_type_support_handle = {
  0,
  &mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_SendGoal_Request)() {
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_Goal)();
  if (!mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__action__ScoutActionTrigger_SendGoal_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__functions.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__init(message_memory);
}

void mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_fini_function(void * message_memory)
{
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_message_members = {
  "mission_interfaces__action",  // message namespace
  "ScoutActionTrigger_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(mission_interfaces__action__ScoutActionTrigger_SendGoal_Response),
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_message_member_array,  // message members
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_message_type_support_handle = {
  0,
  &mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_SendGoal_Response)() {
  mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__action__ScoutActionTrigger_SendGoal_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_service_members = {
  "mission_interfaces__action",  // service namespace
  "ScoutActionTrigger_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_service_type_support_handle = {
  0,
  &mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_SendGoal)() {
  if (!mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_service_type_support_handle.typesupport_identifier) {
    mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_SendGoal_Response)()->data;
  }

  return &mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__functions.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request__init(message_memory);
}

void mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_fini_function(void * message_memory)
{
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_message_members = {
  "mission_interfaces__action",  // message namespace
  "ScoutActionTrigger_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Request),
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_message_member_array,  // message members
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_message_type_support_handle = {
  0,
  &mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_GetResult_Request)() {
  mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__action__ScoutActionTrigger_GetResult_Request__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__functions.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "mission_interfaces/action/scout_action_trigger.h"
// Member `result`
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response__init(message_memory);
}

void mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_fini_function(void * message_memory)
{
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_message_members = {
  "mission_interfaces__action",  // message namespace
  "ScoutActionTrigger_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(mission_interfaces__action__ScoutActionTrigger_GetResult_Response),
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_message_member_array,  // message members
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_message_type_support_handle = {
  0,
  &mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_GetResult_Response)() {
  mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_Result)();
  if (!mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__action__ScoutActionTrigger_GetResult_Response__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_service_members = {
  "mission_interfaces__action",  // service namespace
  "ScoutActionTrigger_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_service_type_support_handle = {
  0,
  &mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_GetResult)() {
  if (!mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_service_type_support_handle.typesupport_identifier) {
    mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_GetResult_Response)()->data;
  }

  return &mission_interfaces__action__detail__scout_action_trigger__rosidl_typesupport_introspection_c__ScoutActionTrigger_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__functions.h"
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "mission_interfaces/action/scout_action_trigger.h"
// Member `feedback`
// already included above
// #include "mission_interfaces/action/detail/scout_action_trigger__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__init(message_memory);
}

void mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_fini_function(void * message_memory)
{
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_message_members = {
  "mission_interfaces__action",  // message namespace
  "ScoutActionTrigger_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(mission_interfaces__action__ScoutActionTrigger_FeedbackMessage),
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_message_member_array,  // message members
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_message_type_support_handle = {
  0,
  &mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_FeedbackMessage)() {
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, ScoutActionTrigger_Feedback)();
  if (!mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__action__ScoutActionTrigger_FeedbackMessage__rosidl_typesupport_introspection_c__ScoutActionTrigger_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
