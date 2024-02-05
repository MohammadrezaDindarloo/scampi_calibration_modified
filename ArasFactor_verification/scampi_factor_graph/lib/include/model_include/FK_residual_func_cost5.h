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
 * Symbolic function: FK_residual_func_cost5
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
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost5(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 4, 1>& uwb_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const Eigen::Matrix<Scalar, 3, 1>& position_vector,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 141

  // Unused inputs
  (void)fh1;
  (void)fv1;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (32)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _tmp2 * _tmp4;
  const Scalar _tmp10 = _tmp0 * _tmp5;
  const Scalar _tmp11 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp12 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp13 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp12 -
                        Scalar(0.010999999999999999) * _tmp13 + position_vector(2, 0) +
                        Scalar(-0.010999999999999999);
  const Scalar _tmp15 = -_tmp11 + _tmp14;
  const Scalar _tmp16 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp17 = _tmp1 * _tmp5;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = -Scalar(0.010999999999999999) * _tmp3 +
                        Scalar(0.010999999999999999) * _tmp6 + position_vector(1, 0);
  const Scalar _tmp23 = -_tmp21 + _tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp10 -
                        Scalar(0.010999999999999999) * _tmp9 + position_vector(0, 0);
  const Scalar _tmp28 = -_tmp26 + _tmp27;
  const Scalar _tmp29 = _tmp11 + _tmp14;
  const Scalar _tmp30 = _tmp26 + _tmp27;
  const Scalar _tmp31 = _tmp21 + _tmp22;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -uwb_measure(0, 0) +
               std::sqrt(Scalar(std::pow(Scalar(-_tmp15 - _tmp8 + p_a(2, 0)), Scalar(2)) +
                                std::pow(Scalar(-_tmp19 - _tmp23 + p_a(1, 0)), Scalar(2)) +
                                std::pow(Scalar(-_tmp25 - _tmp28 + p_a(0, 0)), Scalar(2))));
  _res(1, 0) = -uwb_measure(1, 0) +
               std::sqrt(Scalar(std::pow(Scalar(-_tmp18 - _tmp23 + p_b(1, 0)), Scalar(2)) +
                                std::pow(Scalar(-_tmp25 - _tmp30 + p_b(0, 0)), Scalar(2)) +
                                std::pow(Scalar(-_tmp29 - _tmp8 + p_b(2, 0)), Scalar(2))));
  _res(2, 0) = -uwb_measure(2, 0) +
               std::sqrt(Scalar(std::pow(Scalar(-_tmp18 - _tmp31 + p_c(1, 0)), Scalar(2)) +
                                std::pow(Scalar(-_tmp24 - _tmp30 + p_c(0, 0)), Scalar(2)) +
                                std::pow(Scalar(-_tmp29 - _tmp7 + p_c(2, 0)), Scalar(2))));
  _res(3, 0) = -uwb_measure(3, 0) +
               std::sqrt(Scalar(std::pow(Scalar(-_tmp15 - _tmp7 + p_d(2, 0)), Scalar(2)) +
                                std::pow(Scalar(-_tmp19 - _tmp31 + p_d(1, 0)), Scalar(2)) +
                                std::pow(Scalar(-_tmp24 - _tmp28 + p_d(0, 0)), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
