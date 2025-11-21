// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:srv/SetFlightTimeout.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__SRV__DETAIL__SET_FLIGHT_TIMEOUT__BUILDER_HPP_
#define MISSION_INTERFACES__SRV__DETAIL__SET_FLIGHT_TIMEOUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/srv/detail/set_flight_timeout__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetFlightTimeout_Request_timeout
{
public:
  Init_SetFlightTimeout_Request_timeout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::srv::SetFlightTimeout_Request timeout(::mission_interfaces::srv::SetFlightTimeout_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::srv::SetFlightTimeout_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::srv::SetFlightTimeout_Request>()
{
  return mission_interfaces::srv::builder::Init_SetFlightTimeout_Request_timeout();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetFlightTimeout_Response_success
{
public:
  explicit Init_SetFlightTimeout_Response_success(::mission_interfaces::srv::SetFlightTimeout_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::srv::SetFlightTimeout_Response success(::mission_interfaces::srv::SetFlightTimeout_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::srv::SetFlightTimeout_Response msg_;
};

class Init_SetFlightTimeout_Response_message
{
public:
  Init_SetFlightTimeout_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFlightTimeout_Response_success message(::mission_interfaces::srv::SetFlightTimeout_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SetFlightTimeout_Response_success(msg_);
  }

private:
  ::mission_interfaces::srv::SetFlightTimeout_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::srv::SetFlightTimeout_Response>()
{
  return mission_interfaces::srv::builder::Init_SetFlightTimeout_Response_message();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__SRV__DETAIL__SET_FLIGHT_TIMEOUT__BUILDER_HPP_
