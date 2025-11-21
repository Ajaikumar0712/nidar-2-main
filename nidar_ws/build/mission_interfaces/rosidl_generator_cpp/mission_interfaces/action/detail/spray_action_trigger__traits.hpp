// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:action/SprayActionTrigger.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__ACTION__DETAIL__SPRAY_ACTION_TRIGGER__TRAITS_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__SPRAY_ACTION_TRIGGER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/action/detail/spray_action_trigger__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SprayActionTrigger_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: spray_rate
  {
    out << "spray_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.spray_rate, out);
    out << ", ";
  }

  // member: spray_volume
  {
    out << "spray_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.spray_volume, out);
    out << ", ";
  }

  // member: area_radius
  {
    out << "area_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.area_radius, out);
    out << ", ";
  }

  // member: hold_position
  {
    out << "hold_position: ";
    rosidl_generator_traits::value_to_yaml(msg.hold_position, out);
    out << ", ";
  }

  // member: pattern
  {
    out << "pattern: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SprayActionTrigger_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: spray_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spray_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.spray_rate, out);
    out << "\n";
  }

  // member: spray_volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spray_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.spray_volume, out);
    out << "\n";
  }

  // member: area_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.area_radius, out);
    out << "\n";
  }

  // member: hold_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hold_position: ";
    rosidl_generator_traits::value_to_yaml(msg.hold_position, out);
    out << "\n";
  }

  // member: pattern
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pattern: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SprayActionTrigger_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::SprayActionTrigger_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::SprayActionTrigger_Goal & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::SprayActionTrigger_Goal>()
{
  return "mission_interfaces::action::SprayActionTrigger_Goal";
}

template<>
inline const char * name<mission_interfaces::action::SprayActionTrigger_Goal>()
{
  return "mission_interfaces/action/SprayActionTrigger_Goal";
}

template<>
struct has_fixed_size<mission_interfaces::action::SprayActionTrigger_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::SprayActionTrigger_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::action::SprayActionTrigger_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SprayActionTrigger_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: sprayed_volume
  {
    out << "sprayed_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.sprayed_volume, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SprayActionTrigger_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: sprayed_volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sprayed_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.sprayed_volume, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SprayActionTrigger_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::SprayActionTrigger_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::SprayActionTrigger_Result & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::SprayActionTrigger_Result>()
{
  return "mission_interfaces::action::SprayActionTrigger_Result";
}

template<>
inline const char * name<mission_interfaces::action::SprayActionTrigger_Result>()
{
  return "mission_interfaces/action/SprayActionTrigger_Result";
}

template<>
struct has_fixed_size<mission_interfaces::action::SprayActionTrigger_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::action::SprayActionTrigger_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::action::SprayActionTrigger_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SprayActionTrigger_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_lat
  {
    out << "current_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.current_lat, out);
    out << ", ";
  }

  // member: current_lon
  {
    out << "current_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.current_lon, out);
    out << ", ";
  }

  // member: current_alt
  {
    out << "current_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.current_alt, out);
    out << ", ";
  }

  // member: sprayed_percent
  {
    out << "sprayed_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.sprayed_percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SprayActionTrigger_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.current_lat, out);
    out << "\n";
  }

  // member: current_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.current_lon, out);
    out << "\n";
  }

  // member: current_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.current_alt, out);
    out << "\n";
  }

  // member: sprayed_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sprayed_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.sprayed_percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SprayActionTrigger_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::SprayActionTrigger_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::SprayActionTrigger_Feedback & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::SprayActionTrigger_Feedback>()
{
  return "mission_interfaces::action::SprayActionTrigger_Feedback";
}

template<>
inline const char * name<mission_interfaces::action::SprayActionTrigger_Feedback>()
{
  return "mission_interfaces/action/SprayActionTrigger_Feedback";
}

template<>
struct has_fixed_size<mission_interfaces::action::SprayActionTrigger_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mission_interfaces::action::SprayActionTrigger_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mission_interfaces::action::SprayActionTrigger_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "mission_interfaces/action/detail/spray_action_trigger__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SprayActionTrigger_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SprayActionTrigger_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SprayActionTrigger_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::SprayActionTrigger_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::SprayActionTrigger_SendGoal_Request & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::SprayActionTrigger_SendGoal_Request>()
{
  return "mission_interfaces::action::SprayActionTrigger_SendGoal_Request";
}

template<>
inline const char * name<mission_interfaces::action::SprayActionTrigger_SendGoal_Request>()
{
  return "mission_interfaces/action/SprayActionTrigger_SendGoal_Request";
}

template<>
struct has_fixed_size<mission_interfaces::action::SprayActionTrigger_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::SprayActionTrigger_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::SprayActionTrigger_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::SprayActionTrigger_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::SprayActionTrigger_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SprayActionTrigger_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SprayActionTrigger_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SprayActionTrigger_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::SprayActionTrigger_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::SprayActionTrigger_SendGoal_Response & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::SprayActionTrigger_SendGoal_Response>()
{
  return "mission_interfaces::action::SprayActionTrigger_SendGoal_Response";
}

template<>
inline const char * name<mission_interfaces::action::SprayActionTrigger_SendGoal_Response>()
{
  return "mission_interfaces/action/SprayActionTrigger_SendGoal_Response";
}

template<>
struct has_fixed_size<mission_interfaces::action::SprayActionTrigger_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::SprayActionTrigger_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mission_interfaces::action::SprayActionTrigger_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::action::SprayActionTrigger_SendGoal>()
{
  return "mission_interfaces::action::SprayActionTrigger_SendGoal";
}

template<>
inline const char * name<mission_interfaces::action::SprayActionTrigger_SendGoal>()
{
  return "mission_interfaces/action/SprayActionTrigger_SendGoal";
}

template<>
struct has_fixed_size<mission_interfaces::action::SprayActionTrigger_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::action::SprayActionTrigger_SendGoal_Request>::value &&
    has_fixed_size<mission_interfaces::action::SprayActionTrigger_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::action::SprayActionTrigger_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::action::SprayActionTrigger_SendGoal_Request>::value &&
    has_bounded_size<mission_interfaces::action::SprayActionTrigger_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::action::SprayActionTrigger_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::action::SprayActionTrigger_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::action::SprayActionTrigger_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SprayActionTrigger_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SprayActionTrigger_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SprayActionTrigger_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::SprayActionTrigger_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::SprayActionTrigger_GetResult_Request & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::SprayActionTrigger_GetResult_Request>()
{
  return "mission_interfaces::action::SprayActionTrigger_GetResult_Request";
}

template<>
inline const char * name<mission_interfaces::action::SprayActionTrigger_GetResult_Request>()
{
  return "mission_interfaces/action/SprayActionTrigger_GetResult_Request";
}

template<>
struct has_fixed_size<mission_interfaces::action::SprayActionTrigger_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::SprayActionTrigger_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::SprayActionTrigger_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/spray_action_trigger__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SprayActionTrigger_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SprayActionTrigger_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SprayActionTrigger_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::SprayActionTrigger_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::SprayActionTrigger_GetResult_Response & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::SprayActionTrigger_GetResult_Response>()
{
  return "mission_interfaces::action::SprayActionTrigger_GetResult_Response";
}

template<>
inline const char * name<mission_interfaces::action::SprayActionTrigger_GetResult_Response>()
{
  return "mission_interfaces/action/SprayActionTrigger_GetResult_Response";
}

template<>
struct has_fixed_size<mission_interfaces::action::SprayActionTrigger_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::SprayActionTrigger_Result>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::SprayActionTrigger_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::SprayActionTrigger_Result>::value> {};

template<>
struct is_message<mission_interfaces::action::SprayActionTrigger_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::action::SprayActionTrigger_GetResult>()
{
  return "mission_interfaces::action::SprayActionTrigger_GetResult";
}

template<>
inline const char * name<mission_interfaces::action::SprayActionTrigger_GetResult>()
{
  return "mission_interfaces/action/SprayActionTrigger_GetResult";
}

template<>
struct has_fixed_size<mission_interfaces::action::SprayActionTrigger_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::action::SprayActionTrigger_GetResult_Request>::value &&
    has_fixed_size<mission_interfaces::action::SprayActionTrigger_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::action::SprayActionTrigger_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::action::SprayActionTrigger_GetResult_Request>::value &&
    has_bounded_size<mission_interfaces::action::SprayActionTrigger_GetResult_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::action::SprayActionTrigger_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::action::SprayActionTrigger_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::action::SprayActionTrigger_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/spray_action_trigger__traits.hpp"

namespace mission_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SprayActionTrigger_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SprayActionTrigger_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SprayActionTrigger_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::action::SprayActionTrigger_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::action::SprayActionTrigger_FeedbackMessage & msg)
{
  return mission_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::action::SprayActionTrigger_FeedbackMessage>()
{
  return "mission_interfaces::action::SprayActionTrigger_FeedbackMessage";
}

template<>
inline const char * name<mission_interfaces::action::SprayActionTrigger_FeedbackMessage>()
{
  return "mission_interfaces/action/SprayActionTrigger_FeedbackMessage";
}

template<>
struct has_fixed_size<mission_interfaces::action::SprayActionTrigger_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<mission_interfaces::action::SprayActionTrigger_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mission_interfaces::action::SprayActionTrigger_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<mission_interfaces::action::SprayActionTrigger_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mission_interfaces::action::SprayActionTrigger_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<mission_interfaces::action::SprayActionTrigger>
  : std::true_type
{
};

template<>
struct is_action_goal<mission_interfaces::action::SprayActionTrigger_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<mission_interfaces::action::SprayActionTrigger_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<mission_interfaces::action::SprayActionTrigger_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MISSION_INTERFACES__ACTION__DETAIL__SPRAY_ACTION_TRIGGER__TRAITS_HPP_
