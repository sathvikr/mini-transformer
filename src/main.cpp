#include <iostream>
#include <Eigen/Dense>
#include "utils.h"
#include "attention.h"
#include "embedding.h"

int main() {
    std::cout << "Testing Eigen setup..." << std::endl;    
    Eigen::VectorXd v1(3); v1 << 1.0, 2.0, 3.0;
    Eigen::VectorXd v2(3); v2 << 4.0, 5.0, 6.0;    
    double dot = v1.dot(v2);
    
    std::cout << "Vector 1: " << v1.transpose() << std::endl;
    std::cout << "Vector 2: " << v2.transpose() << std::endl;
    std::cout << "Dot product: " << dot << std::endl;

    return 0;
}
