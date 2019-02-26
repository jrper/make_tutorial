#include <iostream>
#include <Eigen/Dense>

int main(int argc, char* argv[]) {

  Eigen::Matrix<float,3,3> A;
  A << 1,1,0,
    1,5,0,
    0,0,9;
  std::cout << A << std::endl;

  std::cout << A.inverse()<< std::endl;


} 
