#include "ros/ros.h"
#include "std_msgs/String.h"

int main(int argc,char **argv){
    ros::init(argc,argv,"Publisher");
    ros::NodeHandle nh;

    ros::Publisher topic_pub=nh.advertise<std_msgs::String>("task1",10);
    ros::Rate loop_rate(1);

    while(ros::ok()){
        std_msgs::String msg;
        msg.data = "This is a dummy string";

        topic_pub.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
}
}
