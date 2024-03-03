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
 * Symbolic function: IK_residual_func_cost3_wrt_pd_Nl22
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
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPdNl22(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 352

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (134)
  const Scalar _tmp0 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp11 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp10 -
                        Scalar(0.010999999999999999) * _tmp11 + Scalar(-0.010999999999999999);
  const Scalar _tmp13 = _tmp3 * _tmp5;
  const Scalar _tmp14 = _tmp1 * _tmp6;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp9;
  const Scalar _tmp18 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp21 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp22 = _tmp2 * _tmp6;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = _tmp20 - _tmp23;
  const Scalar _tmp25 = _tmp19 + _tmp24;
  const Scalar _tmp26 = _tmp25 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp28 = -_tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp30 =
      -Scalar(0.010999999999999999) * _tmp4 + Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp31 = _tmp29 + _tmp30;
  const Scalar _tmp32 = _tmp28 + _tmp31;
  const Scalar _tmp33 = _tmp32 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp34 = std::pow(Scalar(std::pow(_tmp26, Scalar(2)) + std::pow(_tmp33, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp35 = _tmp26 * _tmp34;
  const Scalar _tmp36 = _tmp12 - _tmp15 + _tmp9;
  const Scalar _tmp37 = -_tmp19;
  const Scalar _tmp38 = _tmp24 + _tmp37;
  const Scalar _tmp39 = _tmp38 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp40 = -_tmp29 + _tmp30;
  const Scalar _tmp41 = _tmp28 + _tmp40;
  const Scalar _tmp42 = _tmp41 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp43 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp42, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp44 = _tmp39 * _tmp43;
  const Scalar _tmp45 = _tmp16 + _tmp8;
  const Scalar _tmp46 = _tmp44 * _tmp45;
  const Scalar _tmp47 = -_tmp36 * _tmp44 + _tmp46;
  const Scalar _tmp48 = _tmp33 * _tmp34;
  const Scalar _tmp49 = _tmp20 + _tmp23;
  const Scalar _tmp50 = _tmp19 + _tmp49;
  const Scalar _tmp51 = _tmp50 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp52 = Scalar(1.0) / (_tmp51);
  const Scalar _tmp53 = _tmp27 + _tmp31;
  const Scalar _tmp54 = _tmp53 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp55 = _tmp52 * _tmp54;
  const Scalar _tmp56 = _tmp35 * _tmp55 - _tmp48;
  const Scalar _tmp57 = _tmp42 * _tmp43;
  const Scalar _tmp58 = Scalar(1.0) / (_tmp44 * _tmp55 - _tmp57);
  const Scalar _tmp59 = _tmp56 * _tmp58;
  const Scalar _tmp60 = _tmp35 * _tmp45;
  const Scalar _tmp61 = _tmp36 * _tmp57 - _tmp46 * _tmp55;
  const Scalar _tmp62 = Scalar(1.0) * _tmp50;
  const Scalar _tmp63 = Scalar(1.0) * _tmp53;
  const Scalar _tmp64 = (-_tmp38 + _tmp62) / (_tmp41 - _tmp63);
  const Scalar _tmp65 = -_tmp17 * _tmp35 - _tmp47 * _tmp59 + _tmp60 -
                        _tmp64 * (_tmp17 * _tmp48 - _tmp55 * _tmp60 - _tmp59 * _tmp61);
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp62 + _tmp63 * _tmp64;
  const Scalar _tmp68 = 0;
  const Scalar _tmp69 = _tmp44 * _tmp59;
  const Scalar _tmp70 =
      std::sqrt(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp54, Scalar(2))));
  const Scalar _tmp71 = _tmp52 * _tmp70;
  const Scalar _tmp72 = _tmp27 + _tmp40;
  const Scalar _tmp73 = _tmp72 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp74 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp75 = _tmp71 * (_tmp50 * _tmp54 * _tmp74 - _tmp51 * _tmp53 * _tmp74);
  const Scalar _tmp76 = -_tmp38 * _tmp57 + _tmp41 * _tmp44 + _tmp44 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) * _tmp58;
  const Scalar _tmp78 = -_tmp47 * _tmp77 + _tmp61 * _tmp64 * _tmp77;
  const Scalar _tmp79 = -_tmp25 * _tmp48 + _tmp32 * _tmp35 + _tmp35 * _tmp75 - _tmp59 * _tmp76;
  const Scalar _tmp80 = _tmp66 * _tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp79);
  const Scalar _tmp82 = _tmp65 * _tmp81;
  const Scalar _tmp83 = _tmp78 + _tmp82 * (-_tmp76 * _tmp77 - _tmp78 * _tmp80);
  const Scalar _tmp84 = _tmp66 * _tmp83;
  const Scalar _tmp85 = _tmp56 * _tmp66;
  const Scalar _tmp86 = _tmp58 * (-_tmp83 * _tmp85 + Scalar(1.0));
  const Scalar _tmp87 = _tmp35 * _tmp84 + _tmp44 * _tmp86;
  const Scalar _tmp88 = _tmp37 + _tmp49;
  const Scalar _tmp89 = _tmp88 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp90 = std::pow(_tmp89, Scalar(2));
  const Scalar _tmp91 = std::pow(_tmp73, Scalar(2));
  const Scalar _tmp92 = _tmp90 + _tmp91;
  const Scalar _tmp93 = std::pow(_tmp92, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp94 = _tmp93 * fh1;
  const Scalar _tmp95 = _tmp71 * _tmp94;
  const Scalar _tmp96 = _tmp87 * _tmp95;
  const Scalar _tmp97 = _tmp88 * _tmp93;
  const Scalar _tmp98 = _tmp72 * _tmp93;
  const Scalar _tmp99 = _tmp73 * _tmp97 - _tmp89 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp81;
  const Scalar _tmp101 = _tmp71 * (_tmp100 * _tmp35 - _tmp100 * _tmp69);
  const Scalar _tmp102 = _tmp101 * fh1;
  const Scalar _tmp103 = _tmp55 * _tmp58;
  const Scalar _tmp104 = _tmp103 * _tmp47 - _tmp45 - _tmp64 * (_tmp103 * _tmp61 + _tmp45 * _tmp55);
  const Scalar _tmp105 = _tmp104 + _tmp82 * (_tmp103 * _tmp76 - _tmp104 * _tmp80 - _tmp75);
  const Scalar _tmp106 = _tmp105 * _tmp66;
  const Scalar _tmp107 = _tmp58 * (-_tmp105 * _tmp85 - _tmp55);
  const Scalar _tmp108 = _tmp106 * _tmp35 + _tmp107 * _tmp44 + Scalar(1.0);
  const Scalar _tmp109 = _tmp108 * _tmp95;
  const Scalar _tmp110 = std::exp(_tmp0 * _tmp71 * (_tmp35 * _tmp68 - _tmp68 * _tmp69) +
                                  _tmp102 * _tmp99 + _tmp109 * _tmp89 + _tmp73 * _tmp96);
  const Scalar _tmp111 = std::pow(_tmp92, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp112 = _tmp111 * _tmp72;
  const Scalar _tmp113 = _tmp111 * _tmp88;
  const Scalar _tmp114 = _tmp73 * _tmp89;
  const Scalar _tmp115 = fh1 * (-_tmp112 * _tmp90 + _tmp113 * _tmp114 + _tmp98);
  const Scalar _tmp116 = _tmp71 * _tmp87;
  const Scalar _tmp117 = _tmp111 * fh1;
  const Scalar _tmp118 = _tmp114 * _tmp117;
  const Scalar _tmp119 = _tmp117 * _tmp90;
  const Scalar _tmp120 = _tmp108 * _tmp71;
  const Scalar _tmp121 = _tmp107 * _tmp94;
  const Scalar _tmp122 = _tmp100 * fh1;
  const Scalar _tmp123 = _tmp122 * _tmp99;
  const Scalar _tmp124 = _tmp86 * _tmp94;
  const Scalar _tmp125 = _tmp0 * _tmp68;
  const Scalar _tmp126 =
      std::exp(-_tmp121 * _tmp89 + _tmp123 * _tmp59 - _tmp124 * _tmp73 + _tmp125 * _tmp59);
  const Scalar _tmp127 = _tmp100 * _tmp115;
  const Scalar _tmp128 = _tmp84 * _tmp94;
  const Scalar _tmp129 = _tmp106 * _tmp94;
  const Scalar _tmp130 = std::exp(-_tmp123 - _tmp125 - _tmp128 * _tmp73 - _tmp129 * _tmp89);
  const Scalar _tmp131 = _tmp117 * _tmp91;
  const Scalar _tmp132 = -_tmp112 * _tmp114 + _tmp113 * _tmp91 - _tmp97;
  const Scalar _tmp133 = _tmp122 * _tmp132;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp110 * (-_tmp101 * _tmp115 + _tmp109 - _tmp116 * _tmp118 - _tmp119 * _tmp120);
  _res(2, 0) = -_tmp126 * (_tmp107 * _tmp119 + _tmp118 * _tmp86 - _tmp121 - _tmp127 * _tmp59);
  _res(3, 0) = -_tmp130 * (_tmp106 * _tmp119 + _tmp118 * _tmp84 + _tmp127 - _tmp129);
  _res(0, 1) = 0;
  _res(1, 1) = -_tmp110 * (-_tmp102 * _tmp132 - _tmp116 * _tmp131 - _tmp118 * _tmp120 + _tmp96);
  _res(2, 1) = -_tmp126 * (_tmp107 * _tmp118 - _tmp124 + _tmp131 * _tmp86 - _tmp133 * _tmp59);
  _res(3, 1) = -_tmp130 * (_tmp106 * _tmp118 - _tmp128 + _tmp131 * _tmp84 + _tmp133);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym