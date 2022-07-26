#include "ros/ros.h"
#include "std_msgs/String.h"

void writeMsg(const std_msgs::String::ConstPtr& msg){
    ROS_INFO("The message received was: %s",msg->data.c_str());
}

int main(int argc,char **argv){
    ros::init(argc,argv,"Subscriber");
    ros::NodeHandle nh;

    ros::Subscriber topic_sub=nh.subscribe("task1",10,writeMsg);

    ros::spin();
    return 0;

}
