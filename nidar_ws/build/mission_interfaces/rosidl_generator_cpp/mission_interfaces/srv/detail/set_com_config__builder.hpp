// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:srv/SetComConfig.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__SRV__DETAIL__SET_COM_CONFIG__BUILDER_HPP_
#define MISSION_INTERFACES__SRV__DETAIL__SET_COM_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/srv/detail/set_com_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetComConfig_Request_delivery_video_ip
{
public:
  explicit Init_SetComConfig_Request_delivery_video_ip(::mission_interfaces::srv::SetComConfig_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::srv::SetComConfig_Request delivery_video_ip(::mission_interfaces::srv::SetComConfig_Request::_delivery_video_ip_type arg)
  {
    msg_.delivery_video_ip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::srv::SetComConfig_Request msg_;
};

class Init_SetComConfig_Request_delivery_video_port
{
public:
  explicit Init_SetComConfig_Request_delivery_video_port(::mission_interfaces::srv::SetComConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetComConfig_Request_delivery_video_ip delivery_video_port(::mission_interfaces::srv::SetComConfig_Request::_delivery_video_port_type arg)
  {
    msg_.delivery_video_port = std::move(arg);
    return Init_SetComConfig_Request_delivery_video_ip(msg_);
  }

private:
  ::mission_interfaces::srv::SetComConfig_Request msg_;
};

class Init_SetComConfig_Request_scout_video_ip
{
public:
  explicit Init_SetComConfig_Request_scout_video_ip(::mission_interfaces::srv::SetComConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetComConfig_Request_delivery_video_port scout_video_ip(::mission_interfaces::srv::SetComConfig_Request::_scout_video_ip_type arg)
  {
    msg_.scout_video_ip = std::move(arg);
    return Init_SetComConfig_Request_delivery_video_port(msg_);
  }

private:
  ::mission_interfaces::srv::SetComConfig_Request msg_;
};

class Init_SetComConfig_Request_scout_video_port
{
public:
  explicit Init_SetComConfig_Request_scout_video_port(::mission_interfaces::srv::SetComConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetComConfig_Request_scout_video_ip scout_video_port(::mission_interfaces::srv::SetComConfig_Request::_scout_video_port_type arg)
  {
    msg_.scout_video_port = std::move(arg);
    return Init_SetComConfig_Request_scout_video_ip(msg_);
  }

private:
  ::mission_interfaces::srv::SetComConfig_Request msg_;
};

class Init_SetComConfig_Request_ros_port
{
public:
  explicit Init_SetComConfig_Request_ros_port(::mission_interfaces::srv::SetComConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetComConfig_Request_scout_video_port ros_port(::mission_interfaces::srv::SetComConfig_Request::_ros_port_type arg)
  {
    msg_.ros_port = std::move(arg);
    return Init_SetComConfig_Request_scout_video_port(msg_);
  }

private:
  ::mission_interfaces::srv::SetComConfig_Request msg_;
};

class Init_SetComConfig_Request_ros_ip
{
public:
  Init_SetComConfig_Request_ros_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetComConfig_Request_ros_port ros_ip(::mission_interfaces::srv::SetComConfig_Request::_ros_ip_type arg)
  {
    msg_.ros_ip = std::move(arg);
    return Init_SetComConfig_Request_ros_port(msg_);
  }

private:
  ::mission_interfaces::srv::SetComConfig_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::srv::SetComConfig_Request>()
{
  return mission_interfaces::srv::builder::Init_SetComConfig_Request_ros_ip();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetComConfig_Response_message
{
public:
  explicit Init_SetComConfig_Response_message(::mission_interfaces::srv::SetComConfig_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::srv::SetComConfig_Response message(::mission_interfaces::srv::SetComConfig_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::srv::SetComConfig_Response msg_;
};

class Init_SetComConfig_Response_success
{
public:
  Init_SetComConfig_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetComConfig_Response_message success(::mission_interfaces::srv::SetComConfig_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetComConfig_Response_message(msg_);
  }

private:
  ::mission_interfaces::srv::SetComConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::srv::SetComConfig_Response>()
{
  return mission_interfaces::srv::builder::Init_SetComConfig_Response_success();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__SRV__DETAIL__SET_COM_CONFIG__BUILDER_HPP_
