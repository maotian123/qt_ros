/*
 * @Description: tf监听模块
 * @Author: Ren Qian
 * @Date: 2020-02-06 16:10:31
 */
#include "lidar_localization/tf_listener/tf_listener.hpp"

#include <Eigen/Geometry>

namespace lidar_localization {
TFListener::TFListener(ros::NodeHandle& nh, std::string base_frame_id, std::string child_frame_id) 
    :nh_(nh), base_frame_id_(base_frame_id), child_frame_id_(child_frame_id) {
}

bool TFListener::LookupData(Eigen::Matrix4f& transform_matrix) {
    try {
        tf::StampedTransform transform;
        listener_.lookupTransform(base_frame_id_, child_frame_id_, ros::Time(0), transform);
        TransformToMatrix(transform, transform_matrix);
        return true;
    } catch (tf::TransformException &ex) {
        return false;
    }
}

bool TFListener::TransformToMatrix(const tf::StampedTransform& transform, Eigen::Matrix4f& transform_matrix) {
    Eigen::Translation3f tl_btol(transform.getOrigin().getX(), transform.getOrigin().getY(), transform.getOrigin().getZ());
    
    double roll, pitch, yaw;
    tf::Matrix3x3(transform.getRotation()).getEulerYPR(yaw, pitch, roll);
    Eigen::AngleAxisf rot_x_btol(roll, Eigen::Vector3f::UnitX());
    Eigen::AngleAxisf rot_y_btol(pitch, Eigen::Vector3f::UnitY());
    Eigen::AngleAxisf rot_z_btol(yaw, Eigen::Vector3f::UnitZ());
    std::cout <<"roll_1 pitch_1 yaw_1 = "<<roll<<" "<<pitch<<""<<yaw<<std::endl<<std::endl;
    // 此矩阵为 child_frame_id 到 base_frame_id 的转换矩阵
//    transform_matrix = (tl_btol * rot_z_btol * roty_btol * rot_x_btol).matrix();
//    Eigen::Matrix3d a = transform_matrix.block<3,3>(0,0).cast<double>();
//    Eigen::Vector3d eulerAngle1 = a.eulerAngles(2,1,0); // ZYX顺序，yaw,pitch,roll
//    std::cout<< "roll_1 pitch_1 yaw_1 = " << eulerAngle1[2] << " " << eulerAngle1[1]
//             << " " << eulerAngle1[0] << std::endl << std::endl;
    return true;
}
}