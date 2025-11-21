// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:srv/SetDroneConfig.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__SRV__DETAIL__SET_DRONE_CONFIG__BUILDER_HPP_
#define MISSION_INTERFACES__SRV__DETAIL__SET_DRONE_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/srv/detail/set_drone_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDroneConfig_Request_scout_topic
{
public:
  explicit Init_SetDroneConfig_Request_scout_topic(::mission_interfaces::srv::SetDroneConfig_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::srv::SetDroneConfig_Request scout_topic(::mission_interfaces::srv::SetDroneConfig_Request::_scout_topic_type arg)
  {
    msg_.scout_topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::srv::SetDroneConfig_Request msg_;
};

class Init_SetDroneConfig_Request_delivery_topic
{
public:
  Init_SetDroneConfig_Request_delivery_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDroneConfig_Request_scout_topic delivery_topic(::mission_interfaces::srv::SetDroneConfig_Request::_delivery_topic_type arg)
  {
    msg_.delivery_topic = std::move(arg);
    return Init_SetDroneConfig_Request_scout_topic(msg_);
  }

private:
  ::mission_interfaces::srv::SetDroneConfig_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::srv::SetDroneConfig_Request>()
{
  return mission_interfaces::srv::builder::Init_SetDroneConfig_Request_delivery_topic();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDroneConfig_Response_message
{
public:
  explicit Init_SetDroneConfig_Response_message(::mission_interfaces::srv::SetDroneConfig_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::srv::SetDroneConfig_Response message(::mission_interfaces::srv::SetDroneConfig_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::srv::SetDroneConfig_Response msg_;
};

class Init_SetDroneConfig_Response_success
{
public:
  Init_SetDroneConfig_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDroneConfig_Response_message success(::mission_interfaces::srv::SetDroneConfig_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetDroneConfig_Response_message(msg_);
  }

private:
  ::mission_interfaces::srv::SetDroneConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::srv::SetDroneConfig_Response>()
{
  return mission_interfaces::srv::builder::Init_SetDroneConfig_Response_success();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__SRV__DETAIL__SET_DRONE_CONFIG__BUILDER_HPP_
