#include "ros/ros.h"
#include "std_msgs/String.h"

void writeMsgToLogs(const std_msgs::String::ConstPtr& msg){
    ROS_INFO("The message that we received was: %s", msg->data.c_str());
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "Publisher");
    ros::NodeHandle nh;

    ros::Subscriber topi_sub = nh.subscribe("tutorial", 1000, writeMsgToLogs);

    ros::spin();

    return 0;
}