#include <iostream>
#include <eigen3/Eigen/Dense>

// using namespace Eigen;

/*
Command to Compile this code is
 g++ -I /user/include/eigen3 dmas_matrices.cpp -o test.exe*/
int main() {
  // here matrix'd' -> d = data type -> int
  // 2D Static Matrix and Random Matrix
  Eigen::Matrix2d static_matrix_2D;
  static_matrix_2D << 2,3,
                      5,6;

  Eigen::Matrix2d static_random_2D;
  static_random_2D = Eigen::Matrix2d::Random(2,2);

  // 3D matriX and Constant
  // Eigen::MatrixXd dynamic_matrix_3D;
  // dynamic_matrix_3D << 1,2,3,
  //                      4,5,6,
  //                      7,8,9;

  Eigen::Matrix3d static_constant_3D;
  static_constant_3D= Eigen::Matrix3d::Constant(1.0);

  // Different Dimension Matrices
  Eigen::Matrix<float,2,3> matrix_2r_3c;
  Eigen::Matrix<float,3,3> matrix_3r_3c;
  Eigen::MatrixXd matrix_3r_2c(3,2);
  matrix_3r_2c << 1, 2,
                  4, 5,
                  7, 8;
// Applying DMAS


  Eigen::MatrixXf matrix_float_2r_3c= matrix_2r_3c *  matrix_3r_3c ;

  matrix_float_2r_3c = matrix_float_2r_3c / 2.2;

  Eigen::Matrix2d matrix_additing_2d =static_random_2D + static_matrix_2D;
  Eigen::Matrix2d matrix_subsctraction_2d =static_random_2D - static_matrix_2D;


    std::cout <<matrix_float_2r_3c<<"\n";

/// Going to invert some matrices
Eigen::MatrixXd matrix_2d_mul =  static_matrix_2D * static_random_2D;
  std::cout<<matrix_2d_mul.inverse()<<"\n";

}