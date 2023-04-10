#include "vehicle/model.h"
#include "unistd.h"

int main(int argc,char**argv){
    ros::init(argc,argv,"base_controller");

    ros::NodeHandle n;
    Model d_robot;
    if(!d_robot.Init())return -1;
    if(d_robot.cmdMotors(true))return -1;
    d_robot.startSample();
    ros::spin();
    return 0;
}
