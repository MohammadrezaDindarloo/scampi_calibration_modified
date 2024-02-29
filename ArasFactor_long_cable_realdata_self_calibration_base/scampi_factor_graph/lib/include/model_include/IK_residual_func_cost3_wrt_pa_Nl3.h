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
 * Symbolic function: IK_residual_func_cost3_wrt_pa_Nl3
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPaNl3(
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

  // Intermediate terms (133)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp2;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp0 * _tmp9;
  const Scalar _tmp11 =
      Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp12 = 2 * _tmp0 * _tmp6;
  const Scalar _tmp13 = _tmp2 * _tmp9;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp5;
  const Scalar _tmp17 = _tmp16 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp18 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp20 = _tmp0 * _tmp7;
  const Scalar _tmp21 = _tmp6 * _tmp9;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = _tmp19 + _tmp24;
  const Scalar _tmp26 = _tmp25 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp27 = _tmp11 + _tmp14;
  const Scalar _tmp28 = _tmp27 + _tmp5;
  const Scalar _tmp29 = _tmp28 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp30 = std::pow(Scalar(std::pow(_tmp26, Scalar(2)) + std::pow(_tmp29, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp26 * _tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp33 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp18 + Scalar(-0.010999999999999999);
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp20 - Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = -_tmp32 + _tmp35;
  const Scalar _tmp37 = _tmp32 + _tmp35;
  const Scalar _tmp38 = _tmp31 * _tmp37;
  const Scalar _tmp39 = -_tmp19;
  const Scalar _tmp40 = _tmp22 + _tmp23;
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = _tmp41 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp43 = _tmp15 + _tmp4;
  const Scalar _tmp44 = _tmp43 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp45 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp44, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp46 = _tmp42 * _tmp45;
  const Scalar _tmp47 = _tmp37 * _tmp46;
  const Scalar _tmp48 = _tmp32 + _tmp33 - _tmp34;
  const Scalar _tmp49 = -_tmp46 * _tmp48 + _tmp47;
  const Scalar _tmp50 = _tmp29 * _tmp30;
  const Scalar _tmp51 = _tmp19 + _tmp40;
  const Scalar _tmp52 = _tmp51 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = _tmp27 + _tmp4;
  const Scalar _tmp55 = _tmp54 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp56 = _tmp53 * _tmp55;
  const Scalar _tmp57 = _tmp31 * _tmp56 - _tmp50;
  const Scalar _tmp58 = _tmp44 * _tmp45;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp46 * _tmp56 - _tmp58);
  const Scalar _tmp60 = _tmp57 * _tmp59;
  const Scalar _tmp61 = -_tmp47 * _tmp56 + _tmp48 * _tmp58;
  const Scalar _tmp62 = Scalar(1.0) * _tmp54;
  const Scalar _tmp63 = Scalar(1.0) * _tmp51;
  const Scalar _tmp64 = (-_tmp41 + _tmp63) / (_tmp43 - _tmp62);
  const Scalar _tmp65 = -_tmp31 * _tmp36 + _tmp38 - _tmp49 * _tmp60 -
                        _tmp64 * (_tmp36 * _tmp50 - _tmp38 * _tmp56 - _tmp60 * _tmp61);
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp59 * _tmp61;
  const Scalar _tmp68 = _tmp49 * _tmp59;
  const Scalar _tmp69 = Scalar(1.0) * _tmp64 * _tmp67 - Scalar(1.0) * _tmp68;
  const Scalar _tmp70 =
      std::sqrt(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp55, Scalar(2))));
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp53 * _tmp70;
  const Scalar _tmp73 = _tmp72 * (_tmp51 * _tmp55 * _tmp71 - _tmp52 * _tmp54 * _tmp71);
  const Scalar _tmp74 = _tmp59 * (-_tmp41 * _tmp58 + _tmp43 * _tmp46 + _tmp46 * _tmp73);
  const Scalar _tmp75 = -_tmp25 * _tmp50 + _tmp28 * _tmp31 + _tmp31 * _tmp73 - _tmp57 * _tmp74;
  const Scalar _tmp76 = _tmp66 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp78 = _tmp65 * _tmp77;
  const Scalar _tmp79 = _tmp69 + _tmp78 * (-_tmp69 * _tmp76 - Scalar(1.0) * _tmp74);
  const Scalar _tmp80 = _tmp66 * _tmp79;
  const Scalar _tmp81 = _tmp57 * _tmp66;
  const Scalar _tmp82 = _tmp59 * (-_tmp79 * _tmp81 + Scalar(1.0));
  const Scalar _tmp83 = _tmp31 * _tmp80 + _tmp46 * _tmp82;
  const Scalar _tmp84 = _tmp24 + _tmp39;
  const Scalar _tmp85 = _tmp84 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp86 = std::pow(_tmp85, Scalar(2));
  const Scalar _tmp87 = std::pow(_tmp17, Scalar(2));
  const Scalar _tmp88 = _tmp86 + _tmp87;
  const Scalar _tmp89 = std::pow(_tmp88, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp89 * fh1;
  const Scalar _tmp91 = _tmp72 * _tmp90;
  const Scalar _tmp92 = _tmp83 * _tmp91;
  const Scalar _tmp93 = _tmp16 * _tmp89;
  const Scalar _tmp94 = _tmp84 * _tmp89;
  const Scalar _tmp95 = fh1 * (_tmp17 * _tmp94 - _tmp85 * _tmp93);
  const Scalar _tmp96 = Scalar(1.0) * _tmp77;
  const Scalar _tmp97 = _tmp72 * (_tmp31 * _tmp96 - _tmp46 * _tmp60 * _tmp96);
  const Scalar _tmp98 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp99 = _tmp62 * _tmp64 + _tmp63;
  const Scalar _tmp100 = 0;
  const Scalar _tmp101 = _tmp100 * _tmp59 * _tmp81;
  const Scalar _tmp102 = _tmp100 * _tmp66;
  const Scalar _tmp103 = -_tmp37 + _tmp56 * _tmp68 - _tmp64 * (_tmp37 * _tmp56 + _tmp56 * _tmp67);
  const Scalar _tmp104 = _tmp103 + _tmp78 * (-_tmp103 * _tmp76 + _tmp56 * _tmp74 - _tmp73);
  const Scalar _tmp105 = _tmp104 * _tmp66;
  const Scalar _tmp106 = _tmp59 * (-_tmp104 * _tmp81 - _tmp56);
  const Scalar _tmp107 = _tmp105 * _tmp31 + _tmp106 * _tmp46 + Scalar(1.0);
  const Scalar _tmp108 = _tmp107 * _tmp91;
  const Scalar _tmp109 =
      std::exp(_tmp108 * _tmp85 + _tmp17 * _tmp92 +
               _tmp72 * _tmp98 * (-_tmp101 * _tmp46 + _tmp102 * _tmp31) + _tmp95 * _tmp97);
  const Scalar _tmp110 = std::pow(_tmp88, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp111 = _tmp110 * _tmp16;
  const Scalar _tmp112 = _tmp110 * _tmp84;
  const Scalar _tmp113 = _tmp17 * _tmp85;
  const Scalar _tmp114 = -_tmp111 * _tmp86 + _tmp112 * _tmp113 + _tmp93;
  const Scalar _tmp115 = _tmp97 * fh1;
  const Scalar _tmp116 = _tmp110 * fh1;
  const Scalar _tmp117 = _tmp113 * _tmp116;
  const Scalar _tmp118 = _tmp72 * _tmp83;
  const Scalar _tmp119 = _tmp116 * _tmp86;
  const Scalar _tmp120 = _tmp107 * _tmp72;
  const Scalar _tmp121 = _tmp95 * _tmp96;
  const Scalar _tmp122 = _tmp106 * _tmp90;
  const Scalar _tmp123 = _tmp82 * _tmp90;
  const Scalar _tmp124 =
      std::exp(_tmp101 * _tmp98 + _tmp121 * _tmp60 - _tmp122 * _tmp85 - _tmp123 * _tmp17);
  const Scalar _tmp125 = _tmp96 * fh1;
  const Scalar _tmp126 = _tmp114 * _tmp125;
  const Scalar _tmp127 = _tmp105 * _tmp90;
  const Scalar _tmp128 = _tmp80 * _tmp90;
  const Scalar _tmp129 =
      std::exp(-_tmp102 * _tmp98 - _tmp121 - _tmp127 * _tmp85 - _tmp128 * _tmp17);
  const Scalar _tmp130 = _tmp116 * _tmp87;
  const Scalar _tmp131 = -_tmp111 * _tmp113 + _tmp112 * _tmp87 - _tmp94;
  const Scalar _tmp132 = _tmp125 * _tmp131;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp109 * (_tmp108 - _tmp114 * _tmp115 - _tmp117 * _tmp118 - _tmp119 * _tmp120);
  _res(2, 0) = -_tmp124 * (_tmp106 * _tmp119 + _tmp117 * _tmp82 - _tmp122 - _tmp126 * _tmp60);
  _res(3, 0) = -_tmp129 * (_tmp105 * _tmp119 + _tmp117 * _tmp80 + _tmp126 - _tmp127);
  _res(0, 1) = 0;
  _res(1, 1) = -_tmp109 * (-_tmp115 * _tmp131 - _tmp117 * _tmp120 - _tmp118 * _tmp130 + _tmp92);
  _res(2, 1) = -_tmp124 * (_tmp106 * _tmp117 - _tmp123 + _tmp130 * _tmp82 - _tmp132 * _tmp60);
  _res(3, 1) = -_tmp129 * (_tmp105 * _tmp117 - _tmp128 + _tmp130 * _tmp80 + _tmp132);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
