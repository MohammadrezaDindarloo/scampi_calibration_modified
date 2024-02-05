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
 * Symbolic function: error_model_between_tow_point_wrt_point1
 *
 * Args:
 *     a: Matrix31
 *     b: Matrix31
 *     ofset: Scalar
 *     distance_measure: Scalar
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix13
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 3> ErrorModelBetweenTowPointWrtPoint1(const Eigen::Matrix<Scalar, 3, 1>& a,
                                                               const Eigen::Matrix<Scalar, 3, 1>& b,
                                                               const Scalar ofset,
                                                               const Scalar distance_measure,
                                                               const Scalar epsilon) {
  // Total ops: 13

  // Unused inputs
  (void)ofset;
  (void)distance_measure;

  // Input arrays

  // Intermediate terms (4)
  const Scalar _tmp0 = a(0, 0) - b(0, 0);
  const Scalar _tmp1 = a(1, 0) - b(1, 0);
  const Scalar _tmp2 = a(2, 0) - b(2, 0);
  const Scalar _tmp3 = std::pow(Scalar(std::pow(_tmp0, Scalar(2)) + std::pow(_tmp1, Scalar(2)) +
                                       std::pow(_tmp2, Scalar(2)) + epsilon),
                                Scalar(Scalar(-1) / Scalar(2)));

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 3> _res;

  _res(0, 0) = _tmp0 * _tmp3;
  _res(0, 1) = _tmp1 * _tmp3;
  _res(0, 2) = _tmp2 * _tmp3;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym