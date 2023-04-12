// Generated by gencpp from file iiwa_msgs/SetSmartServoJointSpeedLimitsResponse.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SETSMARTSERVOJOINTSPEEDLIMITSRESPONSE_H
#define IIWA_MSGS_MESSAGE_SETSMARTSERVOJOINTSPEEDLIMITSRESPONSE_H


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
struct SetSmartServoJointSpeedLimitsResponse_
{
  typedef SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> Type;

  SetSmartServoJointSpeedLimitsResponse_()
    : success(false)
    , error()  {
    }
  SetSmartServoJointSpeedLimitsResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , error(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _error_type;
  _error_type error;





  typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetSmartServoJointSpeedLimitsResponse_

typedef ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<std::allocator<void> > SetSmartServoJointSpeedLimitsResponse;

typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse > SetSmartServoJointSpeedLimitsResponsePtr;
typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse const> SetSmartServoJointSpeedLimitsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.error == rhs.error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45872d25d65c97743cc71afc6d4e884d";
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45872d25d65c9774ULL;
  static const uint64_t static_value2 = 0x3cc71afc6d4e884dULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/SetSmartServoJointSpeedLimitsResponse";
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"bool success\n"
"string error\n"
;
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSmartServoJointSpeedLimitsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::SetSmartServoJointSpeedLimitsResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "error: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SETSMARTSERVOJOINTSPEEDLIMITSRESPONSE_H