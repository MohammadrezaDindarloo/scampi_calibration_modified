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
 * Symbolic function: IK_residual_func_cost3_wrt_pc_Nl13
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPcNl13(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 355

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (134)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp5 = _tmp3 * _tmp4;
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = _tmp1 * _tmp4;
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 + Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp12 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp6;
  const Scalar _tmp16 = _tmp15 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp18 = -_tmp17;
  const Scalar _tmp19 = _tmp1 * _tmp7;
  const Scalar _tmp20 = _tmp0 * _tmp4;
  const Scalar _tmp21 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = _tmp21 + _tmp23;
  const Scalar _tmp25 = _tmp18 + _tmp24;
  const Scalar _tmp26 = _tmp25 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp27 = _tmp10 - _tmp13;
  const Scalar _tmp28 = _tmp27 + _tmp6;
  const Scalar _tmp29 = _tmp28 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp30 = std::pow(Scalar(std::pow(_tmp26, Scalar(2)) + std::pow(_tmp29, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp26 * _tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp33 = -Scalar(0.010999999999999999) * _tmp11 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp19 - Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp35 = _tmp33 - _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = _tmp21 - _tmp23;
  const Scalar _tmp38 = _tmp17 + _tmp37;
  const Scalar _tmp39 = _tmp38 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp40 = -_tmp6;
  const Scalar _tmp41 = _tmp14 + _tmp40;
  const Scalar _tmp42 = _tmp41 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp43 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp42, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp44 = _tmp42 * _tmp43;
  const Scalar _tmp45 = _tmp18 + _tmp37;
  const Scalar _tmp46 = _tmp45 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = _tmp27 + _tmp40;
  const Scalar _tmp49 = _tmp48 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp50 = _tmp47 * _tmp49;
  const Scalar _tmp51 = -_tmp32;
  const Scalar _tmp52 = _tmp35 + _tmp51;
  const Scalar _tmp53 = _tmp39 * _tmp43;
  const Scalar _tmp54 = _tmp52 * _tmp53;
  const Scalar _tmp55 = _tmp36 * _tmp44 - _tmp50 * _tmp54;
  const Scalar _tmp56 = Scalar(1.0) / (-_tmp44 + _tmp50 * _tmp53);
  const Scalar _tmp57 = Scalar(1.0) * _tmp56;
  const Scalar _tmp58 = Scalar(1.0) * _tmp48;
  const Scalar _tmp59 = Scalar(1.0) * _tmp45;
  const Scalar _tmp60 = (-_tmp38 + _tmp59) / (_tmp41 - _tmp58);
  const Scalar _tmp61 = -_tmp36 * _tmp53 + _tmp54;
  const Scalar _tmp62 = _tmp55 * _tmp57 * _tmp60 - _tmp57 * _tmp61;
  const Scalar _tmp63 = _tmp33 + _tmp34 + _tmp51;
  const Scalar _tmp64 = _tmp29 * _tmp30;
  const Scalar _tmp65 = _tmp31 * _tmp50 - _tmp64;
  const Scalar _tmp66 = _tmp56 * _tmp65;
  const Scalar _tmp67 = _tmp31 * _tmp52;
  const Scalar _tmp68 = -_tmp31 * _tmp63 -
                        _tmp60 * (-_tmp50 * _tmp67 - _tmp55 * _tmp66 + _tmp63 * _tmp64) -
                        _tmp61 * _tmp66 + _tmp67;
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 =
      std::sqrt(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp49, Scalar(2))));
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp47 * _tmp70;
  const Scalar _tmp73 = _tmp72 * (_tmp45 * _tmp49 * _tmp71 - _tmp46 * _tmp48 * _tmp71);
  const Scalar _tmp74 = -_tmp38 * _tmp44 + _tmp41 * _tmp53 + _tmp53 * _tmp73;
  const Scalar _tmp75 = -_tmp25 * _tmp64 + _tmp28 * _tmp31 + _tmp31 * _tmp73 - _tmp66 * _tmp74;
  const Scalar _tmp76 = _tmp69 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp78 = _tmp68 * _tmp77;
  const Scalar _tmp79 = _tmp62 + _tmp78 * (-_tmp57 * _tmp74 - _tmp62 * _tmp76);
  const Scalar _tmp80 = _tmp69 * _tmp79;
  const Scalar _tmp81 = _tmp65 * _tmp69;
  const Scalar _tmp82 = _tmp56 * (-_tmp79 * _tmp81 + Scalar(1.0));
  const Scalar _tmp83 = _tmp31 * _tmp80 + _tmp53 * _tmp82;
  const Scalar _tmp84 = _tmp17 + _tmp24;
  const Scalar _tmp85 = _tmp84 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp86 = std::pow(_tmp85, Scalar(2));
  const Scalar _tmp87 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp88 = _tmp86 + _tmp87;
  const Scalar _tmp89 = std::pow(_tmp88, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp89 * fh1;
  const Scalar _tmp91 = _tmp72 * _tmp90;
  const Scalar _tmp92 = _tmp83 * _tmp91;
  const Scalar _tmp93 = _tmp50 * _tmp56;
  const Scalar _tmp94 = -_tmp52 - _tmp60 * (_tmp50 * _tmp52 + _tmp55 * _tmp93) + _tmp61 * _tmp93;
  const Scalar _tmp95 = _tmp78 * (-_tmp73 + _tmp74 * _tmp93 - _tmp76 * _tmp94) + _tmp94;
  const Scalar _tmp96 = _tmp56 * (-_tmp50 - _tmp81 * _tmp95);
  const Scalar _tmp97 = _tmp69 * _tmp95;
  const Scalar _tmp98 = _tmp31 * _tmp97 + _tmp53 * _tmp96 + Scalar(1.0);
  const Scalar _tmp99 = _tmp91 * _tmp98;
  const Scalar _tmp100 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp101 = _tmp58 * _tmp60 + _tmp59;
  const Scalar _tmp102 = 0;
  const Scalar _tmp103 = _tmp102 * _tmp56 * _tmp81;
  const Scalar _tmp104 = _tmp102 * _tmp69;
  const Scalar _tmp105 = _tmp15 * _tmp89;
  const Scalar _tmp106 = _tmp84 * _tmp89;
  const Scalar _tmp107 = -_tmp105 * _tmp85 + _tmp106 * _tmp16;
  const Scalar _tmp108 = Scalar(1.0) * _tmp77;
  const Scalar _tmp109 = _tmp72 * (_tmp108 * _tmp31 - _tmp108 * _tmp53 * _tmp66);
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = std::exp(_tmp100 * _tmp72 * (-_tmp103 * _tmp53 + _tmp104 * _tmp31) +
                                  _tmp107 * _tmp110 + _tmp16 * _tmp92 + _tmp85 * _tmp99);
  const Scalar _tmp112 = _tmp16 * _tmp85;
  const Scalar _tmp113 = std::pow(_tmp88, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp114 = _tmp113 * fh1;
  const Scalar _tmp115 = _tmp112 * _tmp114;
  const Scalar _tmp116 = _tmp72 * _tmp83;
  const Scalar _tmp117 = _tmp114 * _tmp86;
  const Scalar _tmp118 = _tmp72 * _tmp98;
  const Scalar _tmp119 = _tmp113 * _tmp15;
  const Scalar _tmp120 = _tmp113 * _tmp84;
  const Scalar _tmp121 = fh1 * (_tmp105 + _tmp112 * _tmp120 - _tmp119 * _tmp86);
  const Scalar _tmp122 = _tmp90 * _tmp96;
  const Scalar _tmp123 = _tmp108 * fh1;
  const Scalar _tmp124 = _tmp107 * _tmp123;
  const Scalar _tmp125 = _tmp82 * _tmp90;
  const Scalar _tmp126 =
      std::exp(_tmp100 * _tmp103 - _tmp122 * _tmp85 + _tmp124 * _tmp66 - _tmp125 * _tmp16);
  const Scalar _tmp127 = _tmp108 * _tmp121;
  const Scalar _tmp128 = _tmp80 * _tmp90;
  const Scalar _tmp129 = _tmp90 * _tmp97;
  const Scalar _tmp130 =
      std::exp(-_tmp100 * _tmp104 - _tmp124 - _tmp128 * _tmp16 - _tmp129 * _tmp85);
  const Scalar _tmp131 = _tmp114 * _tmp87;
  const Scalar _tmp132 = -_tmp106 - _tmp112 * _tmp119 + _tmp120 * _tmp87;
  const Scalar _tmp133 = _tmp123 * _tmp132;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp111 * (-_tmp109 * _tmp121 - _tmp115 * _tmp116 - _tmp117 * _tmp118 + _tmp99);
  _res(2, 0) = -_tmp126 * (_tmp115 * _tmp82 + _tmp117 * _tmp96 - _tmp122 - _tmp127 * _tmp66);
  _res(3, 0) = -_tmp130 * (_tmp115 * _tmp80 + _tmp117 * _tmp97 + _tmp127 - _tmp129);
  _res(0, 1) = 0;
  _res(1, 1) = -_tmp111 * (-_tmp110 * _tmp132 - _tmp115 * _tmp118 - _tmp116 * _tmp131 + _tmp92);
  _res(2, 1) = -_tmp126 * (_tmp115 * _tmp96 - _tmp125 + _tmp131 * _tmp82 - _tmp133 * _tmp66);
  _res(3, 1) = -_tmp130 * (_tmp115 * _tmp97 - _tmp128 + _tmp131 * _tmp80 + _tmp133);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
