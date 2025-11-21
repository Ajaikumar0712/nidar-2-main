// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interfaces:srv/GetFlightTimeout.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__SRV__DETAIL__GET_FLIGHT_TIMEOUT__TRAITS_HPP_
#define MISSION_INTERFACES__SRV__DETAIL__GET_FLIGHT_TIMEOUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interfaces/srv/detail/get_flight_timeout__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mission_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFlightTimeout_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFlightTimeout_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFlightTimeout_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::srv::GetFlightTimeout_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::srv::GetFlightTimeout_Request & msg)
{
  return mission_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::srv::GetFlightTimeout_Request>()
{
  return "mission_interfaces::srv::GetFlightTimeout_Request";
}

template<>
inline const char * name<mission_interfaces::srv::GetFlightTimeout_Request>()
{
  return "mission_interfaces/srv/GetFlightTimeout_Request";
}

template<>
struct has_fixed_size<mission_interfaces::srv::GetFlightTimeout_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mission_interfaces::srv::GetFlightTimeout_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mission_interfaces::srv::GetFlightTimeout_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mission_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFlightTimeout_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFlightTimeout_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
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

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFlightTimeout_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mission_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mission_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interfaces::srv::GetFlightTimeout_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mission_interfaces::srv::GetFlightTimeout_Response & msg)
{
  return mission_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interfaces::srv::GetFlightTimeout_Response>()
{
  return "mission_interfaces::srv::GetFlightTimeout_Response";
}

template<>
inline const char * name<mission_interfaces::srv::GetFlightTimeout_Response>()
{
  return "mission_interfaces/srv/GetFlightTimeout_Response";
}

template<>
struct has_fixed_size<mission_interfaces::srv::GetFlightTimeout_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mission_interfaces::srv::GetFlightTimeout_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mission_interfaces::srv::GetFlightTimeout_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mission_interfaces::srv::GetFlightTimeout>()
{
  return "mission_interfaces::srv::GetFlightTimeout";
}

template<>
inline const char * name<mission_interfaces::srv::GetFlightTimeout>()
{
  return "mission_interfaces/srv/GetFlightTimeout";
}

template<>
struct has_fixed_size<mission_interfaces::srv::GetFlightTimeout>
  : std::integral_constant<
    bool,
    has_fixed_size<mission_interfaces::srv::GetFlightTimeout_Request>::value &&
    has_fixed_size<mission_interfaces::srv::GetFlightTimeout_Response>::value
  >
{
};

template<>
struct has_bounded_size<mission_interfaces::srv::GetFlightTimeout>
  : std::integral_constant<
    bool,
    has_bounded_size<mission_interfaces::srv::GetFlightTimeout_Request>::value &&
    has_bounded_size<mission_interfaces::srv::GetFlightTimeout_Response>::value
  >
{
};

template<>
struct is_service<mission_interfaces::srv::GetFlightTimeout>
  : std::true_type
{
};

template<>
struct is_service_request<mission_interfaces::srv::GetFlightTimeout_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mission_interfaces::srv::GetFlightTimeout_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MISSION_INTERFACES__SRV__DETAIL__GET_FLIGHT_TIMEOUT__TRAITS_HPP_
