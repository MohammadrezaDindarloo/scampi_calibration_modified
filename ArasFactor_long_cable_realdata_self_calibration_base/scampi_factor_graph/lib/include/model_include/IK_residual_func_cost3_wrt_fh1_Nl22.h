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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl22
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     encoder: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl22(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 302

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (109)
  const Scalar _tmp0 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp7;
  const Scalar _tmp9 = _tmp3 * _tmp8;
  const Scalar _tmp10 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                        _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = 2 * _tmp1;
  const Scalar _tmp12 = _tmp10 * _tmp11;
  const Scalar _tmp13 =
      Scalar(0.010999999999999999) * _tmp12 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp14 = _tmp1 * _tmp8;
  const Scalar _tmp15 = 2 * _tmp10 * _tmp3;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 - _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp11 * _tmp3;
  const Scalar _tmp24 = _tmp10 * _tmp8;
  const Scalar _tmp25 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp22 + _tmp27;
  const Scalar _tmp29 = _tmp28 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp30 = std::pow(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp29, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp19 * _tmp30;
  const Scalar _tmp32 = _tmp25 + _tmp26;
  const Scalar _tmp33 = _tmp21 + _tmp32;
  const Scalar _tmp34 = _tmp33 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp35 = Scalar(1.0) / (_tmp34);
  const Scalar _tmp36 = _tmp13 + _tmp16;
  const Scalar _tmp37 = _tmp36 + _tmp5;
  const Scalar _tmp38 = _tmp37 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp39 = _tmp35 * _tmp38;
  const Scalar _tmp40 = _tmp29 * _tmp30;
  const Scalar _tmp41 = Scalar(1.0) / (-_tmp31 + _tmp39 * _tmp40);
  const Scalar _tmp42 = _tmp21 + _tmp27;
  const Scalar _tmp43 = _tmp42 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp44 = _tmp36 + _tmp6;
  const Scalar _tmp45 = _tmp44 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp45 * _tmp46;
  const Scalar _tmp48 = _tmp43 * _tmp46;
  const Scalar _tmp49 = _tmp39 * _tmp48 - _tmp47;
  const Scalar _tmp50 = _tmp41 * _tmp49;
  const Scalar _tmp51 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp52 = -_tmp51;
  const Scalar _tmp53 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp54 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp55 = _tmp53 + _tmp54;
  const Scalar _tmp56 = _tmp52 + _tmp55;
  const Scalar _tmp57 = _tmp52 + _tmp53 - _tmp54;
  const Scalar _tmp58 = _tmp51 + _tmp55;
  const Scalar _tmp59 = _tmp40 * _tmp58;
  const Scalar _tmp60 = -_tmp40 * _tmp57 + _tmp59;
  const Scalar _tmp61 = _tmp48 * _tmp58;
  const Scalar _tmp62 = _tmp31 * _tmp57 - _tmp39 * _tmp59;
  const Scalar _tmp63 = Scalar(1.0) * _tmp33;
  const Scalar _tmp64 = Scalar(1.0) * _tmp37;
  const Scalar _tmp65 = (-_tmp28 + _tmp63) / (_tmp18 - _tmp64);
  const Scalar _tmp66 = -_tmp48 * _tmp56 - _tmp50 * _tmp60 + _tmp61 -
                        _tmp65 * (-_tmp39 * _tmp61 + _tmp47 * _tmp56 - _tmp50 * _tmp62);
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 = _tmp63 + _tmp64 * _tmp65;
  const Scalar _tmp69 = 0;
  const Scalar _tmp70 =
      std::sqrt(Scalar(std::pow(_tmp34, Scalar(2)) + std::pow(_tmp38, Scalar(2))));
  const Scalar _tmp71 = _tmp35 * _tmp70;
  const Scalar _tmp72 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp73 = _tmp71 * (_tmp33 * _tmp38 * _tmp72 - _tmp34 * _tmp37 * _tmp72);
  const Scalar _tmp74 = _tmp18 * _tmp40 - _tmp28 * _tmp31 + _tmp40 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) * _tmp41;
  const Scalar _tmp76 = -_tmp60 * _tmp75 + _tmp62 * _tmp65 * _tmp75;
  const Scalar _tmp77 = -_tmp42 * _tmp47 + _tmp44 * _tmp48 + _tmp48 * _tmp73 - _tmp50 * _tmp74;
  const Scalar _tmp78 = _tmp67 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp80 = _tmp66 * _tmp79;
  const Scalar _tmp81 = _tmp76 + _tmp80 * (-_tmp74 * _tmp75 - _tmp76 * _tmp78);
  const Scalar _tmp82 = _tmp48 * _tmp67;
  const Scalar _tmp83 = _tmp49 * _tmp67;
  const Scalar _tmp84 = _tmp41 * (-_tmp81 * _tmp83 + Scalar(1.0));
  const Scalar _tmp85 = _tmp22 + _tmp32;
  const Scalar _tmp86 = _tmp85 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp87 = _tmp17 + _tmp5;
  const Scalar _tmp88 = _tmp87 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp89 = std::pow(Scalar(std::pow(_tmp86, Scalar(2)) + std::pow(_tmp88, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp88 * _tmp89;
  const Scalar _tmp91 = _tmp71 * _tmp90 * (_tmp40 * _tmp84 + _tmp81 * _tmp82);
  const Scalar _tmp92 = _tmp86 * _tmp89;
  const Scalar _tmp93 = _tmp85 * _tmp90 - _tmp87 * _tmp92;
  const Scalar _tmp94 = _tmp49 * _tmp75 * _tmp79;
  const Scalar _tmp95 = Scalar(1.0) * _tmp79;
  const Scalar _tmp96 = _tmp71 * _tmp93 * (-_tmp40 * _tmp94 + _tmp48 * _tmp95);
  const Scalar _tmp97 = _tmp39 * _tmp41;
  const Scalar _tmp98 = -_tmp58 + _tmp60 * _tmp97 - _tmp65 * (_tmp39 * _tmp58 + _tmp62 * _tmp97);
  const Scalar _tmp99 = _tmp80 * (-_tmp73 + _tmp74 * _tmp97 - _tmp78 * _tmp98) + _tmp98;
  const Scalar _tmp100 = _tmp41 * (-_tmp39 - _tmp83 * _tmp99);
  const Scalar _tmp101 = _tmp71 * _tmp92 * (_tmp100 * _tmp40 + _tmp82 * _tmp99 + Scalar(1.0));
  const Scalar _tmp102 = _tmp100 * _tmp92;
  const Scalar _tmp103 = _tmp93 * _tmp94;
  const Scalar _tmp104 = _tmp84 * _tmp90;
  const Scalar _tmp105 = _tmp0 * _tmp69;
  const Scalar _tmp106 = _tmp67 * _tmp81 * _tmp90;
  const Scalar _tmp107 = _tmp93 * _tmp95;
  const Scalar _tmp108 = _tmp67 * _tmp92 * _tmp99;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp101 - _tmp91 - _tmp96) *
               std::exp(_tmp0 * _tmp71 * (-_tmp40 * _tmp50 * _tmp69 + _tmp48 * _tmp69) +
                        _tmp101 * fh1 + _tmp91 * fh1 + _tmp96 * fh1);
  _res(2, 0) = -(_tmp102 - _tmp103 + _tmp104) *
               std::exp(-_tmp102 * fh1 + _tmp103 * fh1 - _tmp104 * fh1 + _tmp105 * _tmp50);
  _res(3, 0) = -(_tmp106 + _tmp107 + _tmp108) *
               std::exp(-_tmp105 - _tmp106 * fh1 - _tmp107 * fh1 - _tmp108 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym