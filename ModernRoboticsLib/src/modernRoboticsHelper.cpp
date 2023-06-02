#include "modernRoboticsHelper.h"
#include <iostream>

namespace mrCpp {
    void printSomething() {
        std::cout << "Hello from Lib" << std::endl;
    }

    Eigen::Matrix4d TransInv(const Eigen::Matrix4d& transformation) {
        auto rotation = transformation.block<3, 3>(0,0);
        auto translation = transformation.block<3, 1>(0,3);
        Eigen::Matrix4d inverse;
        inverse.row(3) << 0, 0, 0, 1;
        inverse.block(0, 0, 3, 3) = rotation.transpose();
        inverse.col(3).head(3) = -1 * rotation.transpose() * translation;
        return inverse;
    }
}