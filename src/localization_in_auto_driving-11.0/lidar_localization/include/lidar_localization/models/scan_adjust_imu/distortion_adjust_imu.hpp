//
// Created by ktd on 2021/6/28.
//

#ifndef LIDAR_LOCALIZATION_DISTORTION_ADJUST_IMU_HPP
#define LIDAR_LOCALIZATION_DISTORTION_ADJUST_IMU_HPP
#include <pcl/common/transforms.h>
#include <Eigen/Dense>
#include "glog/logging.h"

#include "lidar_localization/models/scan_adjust/distortion_adjust.hpp"
#include "lidar_localization/sensor_data/velocity_data.hpp"
#include "lidar_localization/sensor_data/cloud_data.hpp"
#include "lidar_localization/sensor_data/imu_data.hpp"

namespace lidar_localization{

class DistortionAdjust_Imu{
    public:
        void SetMotionInfo_imu(float scan_period,IMUData velocity_data);
        bool AdjustClound(CloudData::CLOUD_PTR& input_cloud_ptr, CloudData::CLOUD_PTR& output_cloud_ptr);

    private:
        inline Eigen::Matrix3f UpdateMatrix(float real_time);
    private:
        float scan_period;
        Eigen::Vector3f velocity_;
        Eigen::Vector3f angular_rate_;
};
}
#endif //LIDAR_LOCALIZATION_DISTORTION_ADJUST_IMU_HPP
