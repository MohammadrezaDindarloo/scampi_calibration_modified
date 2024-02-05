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
 * Symbolic function: FK_residual_func_cost5_wrt_pb
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     uwb_measure: Matrix41
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
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost5WrtPb(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 4, 1>& uwb_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const Eigen::Matrix<Scalar, 3, 1>& position_vector,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 98

  // Unused inputs
  (void)fh1;
  (void)fv1;
  (void)uwb_measure;
  (void)p_a;
  (void)p_c;
  (void)p_d;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (18)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = 2 * _tmp0;
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp2 * _tmp7;
  const Scalar _tmp9 = 2 * _tmp2 * _tmp4;
  const Scalar _tmp10 = _tmp0 * _tmp7;
  const Scalar _tmp11 = -Scalar(0.20999999999999999) * _tmp1 -
                        Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp3 +
                        Scalar(0.010999999999999999) * _tmp6 +
                        Scalar(0.010999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9 +
                        p_b(0, 0) - position_vector(0, 0);
  const Scalar _tmp12 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp13 = _tmp2 * _tmp5;
  const Scalar _tmp14 = _tmp4 * _tmp7;
  const Scalar _tmp15 =
      Scalar(0.20999999999999999) * _tmp1 - Scalar(0.20999999999999999) * _tmp10 +
      Scalar(0.20999999999999999) * _tmp12 + Scalar(0.010999999999999999) * _tmp13 -
      Scalar(0.010999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp9 + p_b(1, 0) -
      position_vector(1, 0) + Scalar(0.20999999999999999);
  const Scalar _tmp16 = Scalar(0.010999999999999999) * _tmp12 +
                        Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp14 +
                        Scalar(0.010999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6 +
                        Scalar(0.20999999999999999) * _tmp8 + p_b(2, 0) - position_vector(2, 0);
  const Scalar _tmp17 = std::pow(Scalar(std::pow(_tmp11, Scalar(2)) + std::pow(_tmp15, Scalar(2)) +
                                        std::pow(_tmp16, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res.setZero();

  _res(1, 0) = _tmp11 * _tmp17;
  _res(1, 1) = _tmp15 * _tmp17;
  _res(1, 2) = _tmp16 * _tmp17;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
