// Generated by gencpp from file assignment/Navigate2DFeedback.msg
// DO NOT EDIT!


#ifndef ASSIGNMENT_MESSAGE_NAVIGATE2DFEEDBACK_H
#define ASSIGNMENT_MESSAGE_NAVIGATE2DFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace assignment
{
template <class ContainerAllocator>
struct Navigate2DFeedback_
{
  typedef Navigate2DFeedback_<ContainerAllocator> Type;

  Navigate2DFeedback_()
    : distance_to_point(0.0)  {
    }
  Navigate2DFeedback_(const ContainerAllocator& _alloc)
    : distance_to_point(0.0)  {
  (void)_alloc;
    }



   typedef float _distance_to_point_type;
  _distance_to_point_type distance_to_point;





  typedef boost::shared_ptr< ::assignment::Navigate2DFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::assignment::Navigate2DFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct Navigate2DFeedback_

typedef ::assignment::Navigate2DFeedback_<std::allocator<void> > Navigate2DFeedback;

typedef boost::shared_ptr< ::assignment::Navigate2DFeedback > Navigate2DFeedbackPtr;
typedef boost::shared_ptr< ::assignment::Navigate2DFeedback const> Navigate2DFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::assignment::Navigate2DFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::assignment::Navigate2DFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::assignment::Navigate2DFeedback_<ContainerAllocator1> & lhs, const ::assignment::Navigate2DFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.distance_to_point == rhs.distance_to_point;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::assignment::Navigate2DFeedback_<ContainerAllocator1> & lhs, const ::assignment::Navigate2DFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace assignment

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::assignment::Navigate2DFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::assignment::Navigate2DFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::assignment::Navigate2DFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::assignment::Navigate2DFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::assignment::Navigate2DFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::assignment::Navigate2DFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::assignment::Navigate2DFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c9bb2981926f85b65fe1e8c193c945d5";
  }

  static const char* value(const ::assignment::Navigate2DFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc9bb2981926f85b6ULL;
  static const uint64_t static_value2 = 0x5fe1e8c193c945d5ULL;
};

template<class ContainerAllocator>
struct DataType< ::assignment::Navigate2DFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "assignment/Navigate2DFeedback";
  }

  static const char* value(const ::assignment::Navigate2DFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::assignment::Navigate2DFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Feedback\n"
"float32 distance_to_point\n"
"\n"
;
  }

  static const char* value(const ::assignment::Navigate2DFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::assignment::Navigate2DFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance_to_point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Navigate2DFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::assignment::Navigate2DFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::assignment::Navigate2DFeedback_<ContainerAllocator>& v)
  {
    s << indent << "distance_to_point: ";
    Printer<float>::stream(s, indent + "  ", v.distance_to_point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASSIGNMENT_MESSAGE_NAVIGATE2DFEEDBACK_H