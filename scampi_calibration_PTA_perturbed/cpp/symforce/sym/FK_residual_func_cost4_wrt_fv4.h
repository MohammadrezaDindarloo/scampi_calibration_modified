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
 * Symbolic function: FK_residual_func_cost4_wrt_fv4
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     fh2: Scalar
 *     fv2: Scalar
 *     fh3: Scalar
 *     fv3: Scalar
 *     fh4: Scalar
 *     fv4: Scalar
 *     F_GT0: Scalar
 *     F_GT1: Scalar
 *     F_GT2: Scalar
 *     F_GT3: Scalar
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost4WrtFv4(
    const Scalar fh1, const Scalar fv1, const Scalar fh2, const Scalar fv2, const Scalar fh3,
    const Scalar fv3, const Scalar fh4, const Scalar fv4, const Scalar F_GT0, const Scalar F_GT1,
    const Scalar F_GT2, const Scalar F_GT3, const Scalar epsilon) {
  // Total ops: 5

  // Unused inputs
  (void)fh1;
  (void)fv1;
  (void)fh2;
  (void)fv2;
  (void)fh3;
  (void)fv3;
  (void)F_GT0;
  (void)F_GT1;
  (void)F_GT2;
  (void)F_GT3;
  (void)epsilon;

  // Input arrays

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res.setZero();

  _res(3, 0) = fv4 / std::sqrt(Scalar(std::pow(fh4, Scalar(2)) + std::pow(fv4, Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
