#pragma once

#include <eigen3/Eigen/Dense>

typedef Eigen::Matrix<double, 6, 1> Vector6d;

namespace mrCpp {
    void printSomething();

    /**
     * @brief Given a 4x4 transformation matrix, returns the inverse of it.
     * 
     * @param transformation 4x4 transformation matrix
     */
    Eigen::Matrix4d TransInv(const Eigen::Matrix4d& transformation);

    Eigen::Matrix3d VecTose3(const Vector6d& twist);

    
}