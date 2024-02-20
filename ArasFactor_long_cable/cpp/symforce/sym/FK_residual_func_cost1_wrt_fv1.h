// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/pose3.h>
#include <sym/rot3.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: FK_residual_func_cost1_wrt_fv1
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     TransformationMatrix: Pose3
 *     encoder: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost1WrtFv1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar epsilon) {
  // Total ops: 587

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (192)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp4 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp5 = 2 * _tmp3 * _tmp4;
  const Scalar _tmp6 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp7 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp12 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp6;
  const Scalar _tmp15 = _tmp14 * _tmp4;
  const Scalar _tmp16 = _tmp3 * _tmp7;
  const Scalar _tmp17 = _tmp15 - _tmp16;
  const Scalar _tmp18 = Scalar(0.010999999999999999) * _tmp17;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = -_tmp13 + _tmp19;
  const Scalar _tmp21 = _tmp10 + _tmp20;
  const Scalar _tmp22 = _TransformationMatrix[5] + _tmp21;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp5 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp14 * _tmp3;
  const Scalar _tmp28 = _tmp4 * _tmp7;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = -_tmp26 + _tmp30;
  const Scalar _tmp32 = _tmp24 + _tmp31;
  const Scalar _tmp33 = _TransformationMatrix[4] + _tmp32;
  const Scalar _tmp34 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp35 = _tmp20 + _tmp9;
  const Scalar _tmp36 = _TransformationMatrix[5] + _tmp35;
  const Scalar _tmp37 = _tmp36 - p_b(1, 0);
  const Scalar _tmp38 = _tmp26 + _tmp30;
  const Scalar _tmp39 = _tmp24 + _tmp38;
  const Scalar _tmp40 = _TransformationMatrix[4] + _tmp39;
  const Scalar _tmp41 = _tmp40 - p_b(0, 0);
  const Scalar _tmp42 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp43 = _tmp37 * _tmp42;
  const Scalar _tmp44 = _tmp23 + _tmp38;
  const Scalar _tmp45 = _TransformationMatrix[4] + _tmp44;
  const Scalar _tmp46 = _tmp45 - p_c(0, 0);
  const Scalar _tmp47 = _tmp13 + _tmp9;
  const Scalar _tmp48 = _tmp19 + _tmp47;
  const Scalar _tmp49 = _TransformationMatrix[5] + _tmp48;
  const Scalar _tmp50 = _tmp49 - p_c(1, 0);
  const Scalar _tmp51 = std::pow(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp50, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp52 = _tmp46 * _tmp51;
  const Scalar _tmp53 = _tmp50 * _tmp51;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp43 * _tmp52 - _tmp53);
  const Scalar _tmp55 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp56 = -Scalar(0.010999999999999999) * _tmp11 -
                        Scalar(0.010999999999999999) * _tmp25 + Scalar(-0.010999999999999999);
  const Scalar _tmp57 = Scalar(0.20999999999999999) * _tmp27 - Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp58 = _tmp56 + _tmp57;
  const Scalar _tmp59 = _tmp55 + _tmp58;
  const Scalar _tmp60 = -_tmp55;
  const Scalar _tmp61 = _tmp58 + _tmp60;
  const Scalar _tmp62 = _tmp54 * (-_tmp52 * _tmp59 + _tmp52 * _tmp61);
  const Scalar _tmp63 = Scalar(1.0) * _tmp35;
  const Scalar _tmp64 = -_tmp63;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp48 + _tmp64);
  const Scalar _tmp66 = Scalar(1.0) * _tmp39;
  const Scalar _tmp67 = _tmp65 * (-_tmp44 + _tmp66);
  const Scalar _tmp68 = _tmp43 * _tmp61;
  const Scalar _tmp69 = _tmp54 * (-_tmp52 * _tmp68 + _tmp53 * _tmp59);
  const Scalar _tmp70 = Scalar(1.0) * _tmp69;
  const Scalar _tmp71 = -Scalar(1.0) * _tmp62 + _tmp67 * _tmp70;
  const Scalar _tmp72 = _tmp56 - _tmp57;
  const Scalar _tmp73 = _tmp55 + _tmp72;
  const Scalar _tmp74 = _tmp10 + _tmp13 + _tmp19;
  const Scalar _tmp75 = _TransformationMatrix[5] + _tmp74;
  const Scalar _tmp76 = _tmp75 - p_d(1, 0);
  const Scalar _tmp77 = _tmp23 + _tmp31;
  const Scalar _tmp78 = _TransformationMatrix[4] + _tmp77;
  const Scalar _tmp79 = _tmp78 - p_d(0, 0);
  const Scalar _tmp80 = std::pow(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp79, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp76 * _tmp80;
  const Scalar _tmp83 = _tmp43 * _tmp81 - _tmp82;
  const Scalar _tmp84 = -_tmp68 * _tmp81 - _tmp69 * _tmp83 + _tmp73 * _tmp82;
  const Scalar _tmp85 = _tmp61 * _tmp81 - _tmp62 * _tmp83 - _tmp67 * _tmp84 - _tmp73 * _tmp81;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 =
      std::sqrt(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp41, Scalar(2))));
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 = _tmp42 * _tmp87;
  const Scalar _tmp90 = _tmp89 * (-_tmp35 * _tmp41 * _tmp88 + _tmp37 * _tmp39 * _tmp88);
  const Scalar _tmp91 = _tmp54 * (-_tmp44 * _tmp53 + _tmp48 * _tmp52 + _tmp52 * _tmp90);
  const Scalar _tmp92 = _tmp74 * _tmp81 - _tmp77 * _tmp82 + _tmp81 * _tmp90 - _tmp83 * _tmp91;
  const Scalar _tmp93 = _tmp86 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp95 = _tmp85 * _tmp94;
  const Scalar _tmp96 = _tmp95 * (-_tmp71 * _tmp93 - Scalar(1.0) * _tmp91);
  const Scalar _tmp97 = _tmp71 + _tmp96;
  const Scalar _tmp98 = _tmp83 * _tmp86;
  const Scalar _tmp99 = -_tmp97 * _tmp98 + Scalar(1.0);
  const Scalar _tmp100 = _tmp52 * _tmp54;
  const Scalar _tmp101 = _tmp81 * _tmp86;
  const Scalar _tmp102 = _tmp33 - p_a(0, 0);
  const Scalar _tmp103 = _tmp22 - p_a(1, 0);
  const Scalar _tmp104 =
      std::pow(Scalar(std::pow(_tmp102, Scalar(2)) + std::pow(_tmp103, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp105 = _tmp103 * _tmp104;
  const Scalar _tmp106 = _tmp105 * fh1;
  const Scalar _tmp107 = _tmp43 * _tmp69 + _tmp68;
  const Scalar _tmp108 = -_tmp107 * _tmp67 + _tmp43 * _tmp62 - _tmp61;
  const Scalar _tmp109 = _tmp95 * (-_tmp108 * _tmp93 + _tmp43 * _tmp91 - _tmp90);
  const Scalar _tmp110 = _tmp108 + _tmp109;
  const Scalar _tmp111 = -_tmp110 * _tmp98 - _tmp43;
  const Scalar _tmp112 = _tmp102 * _tmp104;
  const Scalar _tmp113 = _tmp112 * fh1;
  const Scalar _tmp114 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp115 = _tmp63 * _tmp67 + _tmp66;
  const Scalar _tmp116 = 0;
  const Scalar _tmp117 = _tmp100 * _tmp83;
  const Scalar _tmp118 = _tmp89 * (-_tmp116 * _tmp117 + _tmp116 * _tmp81);
  const Scalar _tmp119 = Scalar(1.0) * _tmp94;
  const Scalar _tmp120 = fh1 * (_tmp105 * _tmp32 - _tmp112 * _tmp21);
  const Scalar _tmp121 = -_tmp106 * _tmp89 * (_tmp100 * _tmp99 + _tmp101 * _tmp97) -
                         _tmp113 * _tmp89 * (_tmp100 * _tmp111 + _tmp101 * _tmp110 + Scalar(1.0)) -
                         _tmp114 * _tmp118 -
                         _tmp120 * _tmp89 * (-_tmp117 * _tmp119 + _tmp119 * _tmp81);
  const Scalar _tmp122 = Scalar(1.0) / (_tmp121);
  const Scalar _tmp123 = Scalar(0.1034955) * _tmp122;
  const Scalar _tmp124 = fh1 * (_tmp60 + _tmp72);
  const Scalar _tmp125 = -_tmp105 * _tmp124 - Scalar(2.3544) * _tmp17 - _tmp21 * fv1;
  const Scalar _tmp126 = _tmp64 + _tmp74;
  const Scalar _tmp127 = _tmp126 * _tmp67;
  const Scalar _tmp128 = Scalar(1.0) / (-_tmp127 + _tmp66 - _tmp77);
  const Scalar _tmp129 = Scalar(1.0) * _tmp128;
  const Scalar _tmp130 = _tmp129 * _tmp67;
  const Scalar _tmp131 = _tmp127 * _tmp129 + Scalar(1.0);
  const Scalar _tmp132 = Scalar(1.0) * _tmp65;
  const Scalar _tmp133 = Scalar(1.0) * _tmp130 - Scalar(1.0) * _tmp131 * _tmp132;
  const Scalar _tmp134 = _tmp129 * _tmp95;
  const Scalar _tmp135 = -_tmp119 * _tmp84 + _tmp126 * _tmp134;
  const Scalar _tmp136 = _tmp84 * _tmp86;
  const Scalar _tmp137 = _tmp126 * _tmp128;
  const Scalar _tmp138 = _tmp107 + _tmp109 * _tmp137 - _tmp110 * _tmp136;
  const Scalar _tmp139 = -_tmp136 * _tmp97 + _tmp137 * _tmp96 - _tmp70;
  const Scalar _tmp140 = _tmp115 * _tmp128;
  const Scalar _tmp141 = _tmp65 * (-_tmp116 * _tmp84 - _tmp126 * _tmp140 + _tmp64);
  const Scalar _tmp142 = -Scalar(1.0) * _tmp115 * _tmp129 - Scalar(1.0) * _tmp141 + Scalar(1.0);
  const Scalar _tmp143 = _tmp112 * _tmp124 + Scalar(2.3544) * _tmp29 + _tmp32 * fv1;
  const Scalar _tmp144 = _tmp126 * _tmp65;
  const Scalar _tmp145 = Scalar(1.0) * _tmp129 * _tmp144 - Scalar(1.0) * _tmp129;
  const Scalar _tmp146 = Scalar(1.0) * _tmp106 * (_tmp129 * _tmp96 - _tmp132 * _tmp139) +
                         Scalar(1.0) * _tmp113 * (_tmp109 * _tmp129 - _tmp132 * _tmp138) +
                         _tmp114 * _tmp142 +
                         Scalar(1.0) * _tmp120 * (-_tmp132 * _tmp135 + _tmp134) +
                         _tmp125 * _tmp133 + _tmp143 * _tmp145;
  const Scalar _tmp147 = std::asinh(_tmp122 * _tmp146);
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp121;
  const Scalar _tmp149 =
      -_tmp147 * _tmp148 - std::sqrt(Scalar(std::pow(Scalar(-_tmp36 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp40 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp150 = _tmp123 * _tmp149;
  const Scalar _tmp151 = Scalar(1.0) * _tmp147;
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp118;
  const Scalar _tmp153 = std::pow(_tmp121, Scalar(-2));
  const Scalar _tmp154 = _tmp18 + _tmp47;
  const Scalar _tmp155 = _tmp118 * _tmp153;
  const Scalar _tmp156 =
      (_tmp122 * (_tmp133 * _tmp154 - _tmp142 + _tmp145 * _tmp32) - _tmp146 * _tmp155) /
      std::sqrt(Scalar(std::pow(_tmp146, Scalar(2)) * _tmp153 + 1));
  const Scalar _tmp157 = Scalar(0.1034955) * _tmp155;
  const Scalar _tmp158 = _tmp119 * _tmp120;
  const Scalar _tmp159 = _tmp54 * _tmp83;
  const Scalar _tmp160 = _tmp114 * _tmp116;
  const Scalar _tmp161 = _tmp106 * _tmp54 * _tmp99 + _tmp111 * _tmp113 * _tmp54 -
                         _tmp158 * _tmp159 - _tmp159 * _tmp160;
  const Scalar _tmp162 = std::pow(_tmp161, Scalar(-2));
  const Scalar _tmp163 = _tmp116 * _tmp159 * _tmp162;
  const Scalar _tmp164 = Scalar(0.1034955) * _tmp163;
  const Scalar _tmp165 = Scalar(9.6622558468725703) * _tmp161;
  const Scalar _tmp166 = _tmp131 * _tmp65;
  const Scalar _tmp167 = _tmp129 * _tmp143;
  const Scalar _tmp168 = _tmp106 * _tmp139 * _tmp65 + _tmp113 * _tmp138 * _tmp65 +
                         _tmp114 * _tmp141 + _tmp120 * _tmp135 * _tmp65 + _tmp125 * _tmp166 -
                         _tmp144 * _tmp167;
  const Scalar _tmp169 = _tmp129 * _tmp32;
  const Scalar _tmp170 = Scalar(1.0) / (_tmp161);
  const Scalar _tmp171 =
      (-_tmp163 * _tmp168 + _tmp170 * (-_tmp141 - _tmp144 * _tmp169 + _tmp154 * _tmp166)) /
      std::sqrt(Scalar(_tmp162 * std::pow(_tmp168, Scalar(2)) + 1));
  const Scalar _tmp172 = std::asinh(_tmp168 * _tmp170);
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp116;
  const Scalar _tmp174 = _tmp159 * _tmp173;
  const Scalar _tmp175 = Scalar(0.1034955) * _tmp170;
  const Scalar _tmp176 =
      -_tmp165 * _tmp172 - std::sqrt(Scalar(std::pow(Scalar(-_tmp45 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp49 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp177 = _tmp175 * _tmp176;
  const Scalar _tmp178 = Scalar(1.0) * _tmp172;
  const Scalar _tmp179 = _tmp106 * _tmp86 * _tmp97 + _tmp110 * _tmp113 * _tmp86 + _tmp158 + _tmp160;
  const Scalar _tmp180 = Scalar(1.0) / (_tmp179);
  const Scalar _tmp181 = -_tmp106 * _tmp128 * _tmp96 - _tmp109 * _tmp113 * _tmp128 +
                         _tmp114 * _tmp140 - _tmp120 * _tmp134 - _tmp125 * _tmp130 + _tmp167;
  const Scalar _tmp182 = std::asinh(_tmp180 * _tmp181);
  const Scalar _tmp183 = Scalar(9.6622558468725703) * _tmp179;
  const Scalar _tmp184 =
      -_tmp182 * _tmp183 - std::sqrt(Scalar(std::pow(Scalar(-_tmp75 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp78 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp185 = Scalar(0.1034955) * _tmp180;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = Scalar(1.0) * _tmp182;
  const Scalar _tmp188 = std::pow(_tmp179, Scalar(-2));
  const Scalar _tmp189 = _tmp116 * _tmp188;
  const Scalar _tmp190 = Scalar(0.1034955) * _tmp189;
  const Scalar _tmp191 = (_tmp180 * (-_tmp130 * _tmp154 - _tmp140 + _tmp169) + _tmp181 * _tmp189) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp188 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp34 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp34 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_a(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp33 + p_a(0, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp148 * (Scalar(1.0) * _tmp156 * std::sinh(_tmp151) - _tmp157 * p_b(2, 0) -
                  (_tmp123 * (-_tmp147 * _tmp152 - _tmp148 * _tmp156) - _tmp149 * _tmp157) *
                      std::sinh(_tmp150)) -
      _tmp152 * (_tmp123 * p_b(2, 0) - std::cosh(_tmp150) + std::cosh(_tmp151));
  _res(2, 0) =
      -_tmp165 * (-_tmp164 * p_c(2, 0) + Scalar(1.0) * _tmp171 * std::sinh(_tmp178) -
                  (-_tmp164 * _tmp176 + _tmp175 * (-_tmp165 * _tmp171 - _tmp172 * _tmp174)) *
                      std::sinh(_tmp177)) -
      _tmp174 * (_tmp175 * p_c(2, 0) - std::cosh(_tmp177) + std::cosh(_tmp178));
  _res(3, 0) = _tmp173 * (_tmp185 * p_d(2, 0) - std::cosh(_tmp186) + std::cosh(_tmp187)) -
               _tmp183 * (_tmp190 * p_d(2, 0) + Scalar(1.0) * _tmp191 * std::sinh(_tmp187) -
                          (_tmp184 * _tmp190 + _tmp185 * (_tmp173 * _tmp182 - _tmp183 * _tmp191)) *
                              std::sinh(_tmp186));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
