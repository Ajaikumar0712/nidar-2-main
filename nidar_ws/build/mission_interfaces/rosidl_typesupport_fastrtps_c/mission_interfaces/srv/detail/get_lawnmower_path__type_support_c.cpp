// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mission_interfaces:srv/GetLawnmowerPath.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/srv/detail/get_lawnmower_path__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mission_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mission_interfaces/srv/detail/get_lawnmower_path__struct.h"
#include "mission_interfaces/srv/detail/get_lawnmower_path__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // polygon_x, polygon_y
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // polygon_x, polygon_y

// forward declare type support functions


using _GetLawnmowerPath_Request__ros_msg_type = mission_interfaces__srv__GetLawnmowerPath_Request;

static bool _GetLawnmowerPath_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetLawnmowerPath_Request__ros_msg_type * ros_message = static_cast<const _GetLawnmowerPath_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: polygon_x
  {
    size_t size = ros_message->polygon_x.size;
    auto array_ptr = ros_message->polygon_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: polygon_y
  {
    size_t size = ros_message->polygon_y.size;
    auto array_ptr = ros_message->polygon_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: safe_margin
  {
    cdr << ros_message->safe_margin;
  }

  // Field name: spacing
  {
    cdr << ros_message->spacing;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  return true;
}

static bool _GetLawnmowerPath_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetLawnmowerPath_Request__ros_msg_type * ros_message = static_cast<_GetLawnmowerPath_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: polygon_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->polygon_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->polygon_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->polygon_x, size)) {
      fprintf(stderr, "failed to create array for field 'polygon_x'");
      return false;
    }
    auto array_ptr = ros_message->polygon_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: polygon_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->polygon_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->polygon_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->polygon_y, size)) {
      fprintf(stderr, "failed to create array for field 'polygon_y'");
      return false;
    }
    auto array_ptr = ros_message->polygon_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: safe_margin
  {
    cdr >> ros_message->safe_margin;
  }

  // Field name: spacing
  {
    cdr >> ros_message->spacing;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t get_serialized_size_mission_interfaces__srv__GetLawnmowerPath_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetLawnmowerPath_Request__ros_msg_type * ros_message = static_cast<const _GetLawnmowerPath_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name polygon_x
  {
    size_t array_size = ros_message->polygon_x.size;
    auto array_ptr = ros_message->polygon_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name polygon_y
  {
    size_t array_size = ros_message->polygon_y.size;
    auto array_ptr = ros_message->polygon_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safe_margin
  {
    size_t item_size = sizeof(ros_message->safe_margin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spacing
  {
    size_t item_size = sizeof(ros_message->spacing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetLawnmowerPath_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mission_interfaces__srv__GetLawnmowerPath_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t max_serialized_size_mission_interfaces__srv__GetLawnmowerPath_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: polygon_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: polygon_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: safe_margin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: spacing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mission_interfaces__srv__GetLawnmowerPath_Request;
    is_plain =
      (
      offsetof(DataType, angle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetLawnmowerPath_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mission_interfaces__srv__GetLawnmowerPath_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetLawnmowerPath_Request = {
  "mission_interfaces::srv",
  "GetLawnmowerPath_Request",
  _GetLawnmowerPath_Request__cdr_serialize,
  _GetLawnmowerPath_Request__cdr_deserialize,
  _GetLawnmowerPath_Request__get_serialized_size,
  _GetLawnmowerPath_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetLawnmowerPath_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetLawnmowerPath_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, srv, GetLawnmowerPath_Request)() {
  return &_GetLawnmowerPath_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mission_interfaces/srv/detail/get_lawnmower_path__struct.h"
// already included above
// #include "mission_interfaces/srv/detail/get_lawnmower_path__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // waypoint_x, waypoint_y
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // waypoint_x, waypoint_y

// forward declare type support functions


using _GetLawnmowerPath_Response__ros_msg_type = mission_interfaces__srv__GetLawnmowerPath_Response;

static bool _GetLawnmowerPath_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetLawnmowerPath_Response__ros_msg_type * ros_message = static_cast<const _GetLawnmowerPath_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoint_x
  {
    size_t size = ros_message->waypoint_x.size;
    auto array_ptr = ros_message->waypoint_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: waypoint_y
  {
    size_t size = ros_message->waypoint_y.size;
    auto array_ptr = ros_message->waypoint_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GetLawnmowerPath_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetLawnmowerPath_Response__ros_msg_type * ros_message = static_cast<_GetLawnmowerPath_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoint_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->waypoint_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->waypoint_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->waypoint_x, size)) {
      fprintf(stderr, "failed to create array for field 'waypoint_x'");
      return false;
    }
    auto array_ptr = ros_message->waypoint_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: waypoint_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->waypoint_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->waypoint_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->waypoint_y, size)) {
      fprintf(stderr, "failed to create array for field 'waypoint_y'");
      return false;
    }
    auto array_ptr = ros_message->waypoint_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t get_serialized_size_mission_interfaces__srv__GetLawnmowerPath_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetLawnmowerPath_Response__ros_msg_type * ros_message = static_cast<const _GetLawnmowerPath_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name waypoint_x
  {
    size_t array_size = ros_message->waypoint_x.size;
    auto array_ptr = ros_message->waypoint_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name waypoint_y
  {
    size_t array_size = ros_message->waypoint_y.size;
    auto array_ptr = ros_message->waypoint_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetLawnmowerPath_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mission_interfaces__srv__GetLawnmowerPath_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t max_serialized_size_mission_interfaces__srv__GetLawnmowerPath_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: waypoint_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: waypoint_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mission_interfaces__srv__GetLawnmowerPath_Response;
    is_plain =
      (
      offsetof(DataType, waypoint_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetLawnmowerPath_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mission_interfaces__srv__GetLawnmowerPath_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetLawnmowerPath_Response = {
  "mission_interfaces::srv",
  "GetLawnmowerPath_Response",
  _GetLawnmowerPath_Response__cdr_serialize,
  _GetLawnmowerPath_Response__cdr_deserialize,
  _GetLawnmowerPath_Response__get_serialized_size,
  _GetLawnmowerPath_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetLawnmowerPath_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetLawnmowerPath_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, srv, GetLawnmowerPath_Response)() {
  return &_GetLawnmowerPath_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mission_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mission_interfaces/srv/get_lawnmower_path.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetLawnmowerPath__callbacks = {
  "mission_interfaces::srv",
  "GetLawnmowerPath",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, srv, GetLawnmowerPath_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, srv, GetLawnmowerPath_Response)(),
};

static rosidl_service_type_support_t GetLawnmowerPath__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetLawnmowerPath__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, srv, GetLawnmowerPath)() {
  return &GetLawnmowerPath__handle;
}

#if defined(__cplusplus)
}
#endif
