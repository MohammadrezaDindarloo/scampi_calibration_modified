// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: error_model
 *
 * Args:
 *     a: Matrix31
 *     b: Matrix31
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> ErrorModel(const Eigen::Matrix<Scalar, 3, 1>& a,
                                       const Eigen::Matrix<Scalar, 3, 1>& b, const Scalar epsilon) {
  // Total ops: 10

  // Input arrays

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) = std::sqrt(Scalar(epsilon + std::pow(Scalar(a(0, 0) - b(0, 0)), Scalar(2)) +
                                std::pow(Scalar(a(1, 0) - b(1, 0)), Scalar(2)) +
                                std::pow(Scalar(a(2, 0) - b(2, 0)), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
