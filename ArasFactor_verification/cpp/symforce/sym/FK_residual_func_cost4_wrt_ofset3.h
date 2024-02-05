// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/rot3.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: FK_residual_func_cost4_wrt_ofset3
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     ofset0: Scalar
 *     ofset1: Scalar
 *     ofset2: Scalar
 *     ofset3: Scalar
 *     encoder_data: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost4WrtOfset3(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& encoder_data,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const Eigen::Matrix<Scalar, 3, 1>& position_vector,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 0

  // Unused inputs
  (void)fh1;
  (void)fv1;
  (void)ofset0;
  (void)ofset1;
  (void)ofset2;
  (void)ofset3;
  (void)encoder_data;
  (void)p_a;
  (void)p_b;
  (void)p_c;
  (void)p_d;
  (void)DeltaRot;
  (void)position_vector;
  (void)Rot_init;
  (void)epsilon;

  // Input arrays

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res.setZero();

  _res(3, 0) = 1;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
