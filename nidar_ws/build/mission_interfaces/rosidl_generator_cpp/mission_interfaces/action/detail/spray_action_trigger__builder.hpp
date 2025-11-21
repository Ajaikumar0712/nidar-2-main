// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interfaces:action/SprayActionTrigger.idl
// generated code does not contain a copyright notice

#ifndef MISSION_INTERFACES__ACTION__DETAIL__SPRAY_ACTION_TRIGGER__BUILDER_HPP_
#define MISSION_INTERFACES__ACTION__DETAIL__SPRAY_ACTION_TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interfaces/action/detail/spray_action_trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayActionTrigger_Goal_pattern
{
public:
  explicit Init_SprayActionTrigger_Goal_pattern(::mission_interfaces::action::SprayActionTrigger_Goal & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SprayActionTrigger_Goal pattern(::mission_interfaces::action::SprayActionTrigger_Goal::_pattern_type arg)
  {
    msg_.pattern = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Goal msg_;
};

class Init_SprayActionTrigger_Goal_hold_position
{
public:
  explicit Init_SprayActionTrigger_Goal_hold_position(::mission_interfaces::action::SprayActionTrigger_Goal & msg)
  : msg_(msg)
  {}
  Init_SprayActionTrigger_Goal_pattern hold_position(::mission_interfaces::action::SprayActionTrigger_Goal::_hold_position_type arg)
  {
    msg_.hold_position = std::move(arg);
    return Init_SprayActionTrigger_Goal_pattern(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Goal msg_;
};

class Init_SprayActionTrigger_Goal_area_radius
{
public:
  explicit Init_SprayActionTrigger_Goal_area_radius(::mission_interfaces::action::SprayActionTrigger_Goal & msg)
  : msg_(msg)
  {}
  Init_SprayActionTrigger_Goal_hold_position area_radius(::mission_interfaces::action::SprayActionTrigger_Goal::_area_radius_type arg)
  {
    msg_.area_radius = std::move(arg);
    return Init_SprayActionTrigger_Goal_hold_position(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Goal msg_;
};

class Init_SprayActionTrigger_Goal_spray_volume
{
public:
  explicit Init_SprayActionTrigger_Goal_spray_volume(::mission_interfaces::action::SprayActionTrigger_Goal & msg)
  : msg_(msg)
  {}
  Init_SprayActionTrigger_Goal_area_radius spray_volume(::mission_interfaces::action::SprayActionTrigger_Goal::_spray_volume_type arg)
  {
    msg_.spray_volume = std::move(arg);
    return Init_SprayActionTrigger_Goal_area_radius(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Goal msg_;
};

class Init_SprayActionTrigger_Goal_spray_rate
{
public:
  explicit Init_SprayActionTrigger_Goal_spray_rate(::mission_interfaces::action::SprayActionTrigger_Goal & msg)
  : msg_(msg)
  {}
  Init_SprayActionTrigger_Goal_spray_volume spray_rate(::mission_interfaces::action::SprayActionTrigger_Goal::_spray_rate_type arg)
  {
    msg_.spray_rate = std::move(arg);
    return Init_SprayActionTrigger_Goal_spray_volume(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Goal msg_;
};

class Init_SprayActionTrigger_Goal_altitude
{
public:
  explicit Init_SprayActionTrigger_Goal_altitude(::mission_interfaces::action::SprayActionTrigger_Goal & msg)
  : msg_(msg)
  {}
  Init_SprayActionTrigger_Goal_spray_rate altitude(::mission_interfaces::action::SprayActionTrigger_Goal::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_SprayActionTrigger_Goal_spray_rate(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Goal msg_;
};

class Init_SprayActionTrigger_Goal_longitude
{
public:
  explicit Init_SprayActionTrigger_Goal_longitude(::mission_interfaces::action::SprayActionTrigger_Goal & msg)
  : msg_(msg)
  {}
  Init_SprayActionTrigger_Goal_altitude longitude(::mission_interfaces::action::SprayActionTrigger_Goal::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_SprayActionTrigger_Goal_altitude(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Goal msg_;
};

class Init_SprayActionTrigger_Goal_latitude
{
public:
  Init_SprayActionTrigger_Goal_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayActionTrigger_Goal_longitude latitude(::mission_interfaces::action::SprayActionTrigger_Goal::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_SprayActionTrigger_Goal_longitude(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SprayActionTrigger_Goal>()
{
  return mission_interfaces::action::builder::Init_SprayActionTrigger_Goal_latitude();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayActionTrigger_Result_message
{
public:
  explicit Init_SprayActionTrigger_Result_message(::mission_interfaces::action::SprayActionTrigger_Result & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SprayActionTrigger_Result message(::mission_interfaces::action::SprayActionTrigger_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Result msg_;
};

class Init_SprayActionTrigger_Result_sprayed_volume
{
public:
  explicit Init_SprayActionTrigger_Result_sprayed_volume(::mission_interfaces::action::SprayActionTrigger_Result & msg)
  : msg_(msg)
  {}
  Init_SprayActionTrigger_Result_message sprayed_volume(::mission_interfaces::action::SprayActionTrigger_Result::_sprayed_volume_type arg)
  {
    msg_.sprayed_volume = std::move(arg);
    return Init_SprayActionTrigger_Result_message(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Result msg_;
};

class Init_SprayActionTrigger_Result_success
{
public:
  Init_SprayActionTrigger_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayActionTrigger_Result_sprayed_volume success(::mission_interfaces::action::SprayActionTrigger_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SprayActionTrigger_Result_sprayed_volume(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SprayActionTrigger_Result>()
{
  return mission_interfaces::action::builder::Init_SprayActionTrigger_Result_success();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayActionTrigger_Feedback_sprayed_percent
{
public:
  explicit Init_SprayActionTrigger_Feedback_sprayed_percent(::mission_interfaces::action::SprayActionTrigger_Feedback & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SprayActionTrigger_Feedback sprayed_percent(::mission_interfaces::action::SprayActionTrigger_Feedback::_sprayed_percent_type arg)
  {
    msg_.sprayed_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Feedback msg_;
};

class Init_SprayActionTrigger_Feedback_current_alt
{
public:
  explicit Init_SprayActionTrigger_Feedback_current_alt(::mission_interfaces::action::SprayActionTrigger_Feedback & msg)
  : msg_(msg)
  {}
  Init_SprayActionTrigger_Feedback_sprayed_percent current_alt(::mission_interfaces::action::SprayActionTrigger_Feedback::_current_alt_type arg)
  {
    msg_.current_alt = std::move(arg);
    return Init_SprayActionTrigger_Feedback_sprayed_percent(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Feedback msg_;
};

class Init_SprayActionTrigger_Feedback_current_lon
{
public:
  explicit Init_SprayActionTrigger_Feedback_current_lon(::mission_interfaces::action::SprayActionTrigger_Feedback & msg)
  : msg_(msg)
  {}
  Init_SprayActionTrigger_Feedback_current_alt current_lon(::mission_interfaces::action::SprayActionTrigger_Feedback::_current_lon_type arg)
  {
    msg_.current_lon = std::move(arg);
    return Init_SprayActionTrigger_Feedback_current_alt(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Feedback msg_;
};

class Init_SprayActionTrigger_Feedback_current_lat
{
public:
  Init_SprayActionTrigger_Feedback_current_lat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayActionTrigger_Feedback_current_lon current_lat(::mission_interfaces::action::SprayActionTrigger_Feedback::_current_lat_type arg)
  {
    msg_.current_lat = std::move(arg);
    return Init_SprayActionTrigger_Feedback_current_lon(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SprayActionTrigger_Feedback>()
{
  return mission_interfaces::action::builder::Init_SprayActionTrigger_Feedback_current_lat();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayActionTrigger_SendGoal_Request_goal
{
public:
  explicit Init_SprayActionTrigger_SendGoal_Request_goal(::mission_interfaces::action::SprayActionTrigger_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SprayActionTrigger_SendGoal_Request goal(::mission_interfaces::action::SprayActionTrigger_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_SendGoal_Request msg_;
};

class Init_SprayActionTrigger_SendGoal_Request_goal_id
{
public:
  Init_SprayActionTrigger_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayActionTrigger_SendGoal_Request_goal goal_id(::mission_interfaces::action::SprayActionTrigger_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SprayActionTrigger_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SprayActionTrigger_SendGoal_Request>()
{
  return mission_interfaces::action::builder::Init_SprayActionTrigger_SendGoal_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayActionTrigger_SendGoal_Response_stamp
{
public:
  explicit Init_SprayActionTrigger_SendGoal_Response_stamp(::mission_interfaces::action::SprayActionTrigger_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SprayActionTrigger_SendGoal_Response stamp(::mission_interfaces::action::SprayActionTrigger_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_SendGoal_Response msg_;
};

class Init_SprayActionTrigger_SendGoal_Response_accepted
{
public:
  Init_SprayActionTrigger_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayActionTrigger_SendGoal_Response_stamp accepted(::mission_interfaces::action::SprayActionTrigger_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SprayActionTrigger_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SprayActionTrigger_SendGoal_Response>()
{
  return mission_interfaces::action::builder::Init_SprayActionTrigger_SendGoal_Response_accepted();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayActionTrigger_GetResult_Request_goal_id
{
public:
  Init_SprayActionTrigger_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_interfaces::action::SprayActionTrigger_GetResult_Request goal_id(::mission_interfaces::action::SprayActionTrigger_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SprayActionTrigger_GetResult_Request>()
{
  return mission_interfaces::action::builder::Init_SprayActionTrigger_GetResult_Request_goal_id();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayActionTrigger_GetResult_Response_result
{
public:
  explicit Init_SprayActionTrigger_GetResult_Response_result(::mission_interfaces::action::SprayActionTrigger_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SprayActionTrigger_GetResult_Response result(::mission_interfaces::action::SprayActionTrigger_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_GetResult_Response msg_;
};

class Init_SprayActionTrigger_GetResult_Response_status
{
public:
  Init_SprayActionTrigger_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayActionTrigger_GetResult_Response_result status(::mission_interfaces::action::SprayActionTrigger_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SprayActionTrigger_GetResult_Response_result(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SprayActionTrigger_GetResult_Response>()
{
  return mission_interfaces::action::builder::Init_SprayActionTrigger_GetResult_Response_status();
}

}  // namespace mission_interfaces


namespace mission_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayActionTrigger_FeedbackMessage_feedback
{
public:
  explicit Init_SprayActionTrigger_FeedbackMessage_feedback(::mission_interfaces::action::SprayActionTrigger_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_interfaces::action::SprayActionTrigger_FeedbackMessage feedback(::mission_interfaces::action::SprayActionTrigger_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_FeedbackMessage msg_;
};

class Init_SprayActionTrigger_FeedbackMessage_goal_id
{
public:
  Init_SprayActionTrigger_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayActionTrigger_FeedbackMessage_feedback goal_id(::mission_interfaces::action::SprayActionTrigger_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SprayActionTrigger_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_interfaces::action::SprayActionTrigger_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interfaces::action::SprayActionTrigger_FeedbackMessage>()
{
  return mission_interfaces::action::builder::Init_SprayActionTrigger_FeedbackMessage_goal_id();
}

}  // namespace mission_interfaces

#endif  // MISSION_INTERFACES__ACTION__DETAIL__SPRAY_ACTION_TRIGGER__BUILDER_HPP_
