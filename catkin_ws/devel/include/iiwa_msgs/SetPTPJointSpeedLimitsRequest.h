// Generated by gencpp from file iiwa_msgs/SetPTPJointSpeedLimitsRequest.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SETPTPJOINTSPEEDLIMITSREQUEST_H
#define IIWA_MSGS_MESSAGE_SETPTPJOINTSPEEDLIMITSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace iiwa_msgs
{
template <class ContainerAllocator>
struct SetPTPJointSpeedLimitsRequest_
{
  typedef SetPTPJointSpeedLimitsRequest_<ContainerAllocator> Type;

  SetPTPJointSpeedLimitsRequest_()
    : joint_relative_velocity(0.0)
    , joint_relative_acceleration(0.0)  {
    }
  SetPTPJointSpeedLimitsRequest_(const ContainerAllocator& _alloc)
    : joint_relative_velocity(0.0)
    , joint_relative_acceleration(0.0)  {
  (void)_alloc;
    }



   typedef double _joint_relative_velocity_type;
  _joint_relative_velocity_type joint_relative_velocity;

   typedef double _joint_relative_acceleration_type;
  _joint_relative_acceleration_type joint_relative_acceleration;





  typedef boost::shared_ptr< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPTPJointSpeedLimitsRequest_

typedef ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<std::allocator<void> > SetPTPJointSpeedLimitsRequest;

typedef boost::shared_ptr< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest > SetPTPJointSpeedLimitsRequestPtr;
typedef boost::shared_ptr< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest const> SetPTPJointSpeedLimitsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.joint_relative_velocity == rhs.joint_relative_velocity &&
    lhs.joint_relative_acceleration == rhs.joint_relative_acceleration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cffe08de2ff0d463a331a61c2c921277";
  }

  static const char* value(const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcffe08de2ff0d463ULL;
  static const uint64_t static_value2 = 0xa331a61c2c921277ULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/SetPTPJointSpeedLimitsRequest";
  }

  static const char* value(const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This service allows to set relative joint velocity and acceleration of the robot.\n"
"# Set a parameter to -1 to ignore it\n"
"\n"
"# Relative velocity of the individual joints, 0.0 < value <= 1\n"
"float64 joint_relative_velocity\n"
"\n"
"# Relative acceleration of the individual joints, 0.0 < value <= 1.0\n"
"float64 joint_relative_acceleration\n"
"\n"
;
  }

  static const char* value(const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_relative_velocity);
      stream.next(m.joint_relative_acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPTPJointSpeedLimitsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_relative_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.joint_relative_velocity);
    s << indent << "joint_relative_acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.joint_relative_acceleration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SETPTPJOINTSPEEDLIMITSREQUEST_H
