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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl12
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 599

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (193)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp9 = 2 * _tmp8;
  const Scalar _tmp10 = _tmp3 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = _tmp11 * _tmp5;
  const Scalar _tmp13 = _tmp10 + _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp5 * _tmp9;
  const Scalar _tmp16 = _tmp11 * _tmp3;
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp15 - Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp18 = _tmp14 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp7;
  const Scalar _tmp20 = _tmp19 + position_vector(0, 0);
  const Scalar _tmp21 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp4 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp23 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp24 = _tmp11 * _tmp8;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -_tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = _tmp31 + Scalar(-110.0);
  const Scalar _tmp34 = _tmp20 + Scalar(-125.0);
  const Scalar _tmp35 = std::pow(Scalar(std::pow(_tmp33, Scalar(2)) + std::pow(_tmp34, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp38 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = fh1 * (_tmp37 + _tmp40);
  const Scalar _tmp42 = Scalar(2.3544) * _tmp13 + _tmp19 * fv1 + _tmp36 * _tmp41;
  const Scalar _tmp43 = -_tmp7;
  const Scalar _tmp44 = _tmp18 + _tmp43;
  const Scalar _tmp45 = -_tmp22;
  const Scalar _tmp46 = -_tmp28;
  const Scalar _tmp47 = _tmp27 + _tmp46;
  const Scalar _tmp48 = _tmp45 + _tmp47;
  const Scalar _tmp49 = Scalar(1.0) * _tmp48;
  const Scalar _tmp50 = -_tmp49;
  const Scalar _tmp51 = _tmp22 + _tmp47;
  const Scalar _tmp52 = _tmp50 + _tmp51;
  const Scalar _tmp53 = _tmp29 + _tmp45;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp50 + _tmp53);
  const Scalar _tmp55 = _tmp14 - _tmp17;
  const Scalar _tmp56 = _tmp55 + _tmp7;
  const Scalar _tmp57 = _tmp43 + _tmp55;
  const Scalar _tmp58 = Scalar(1.0) * _tmp57;
  const Scalar _tmp59 = _tmp54 * (-_tmp56 + _tmp58);
  const Scalar _tmp60 = _tmp52 * _tmp59;
  const Scalar _tmp61 = Scalar(1.0) / (-_tmp44 + _tmp58 - _tmp60);
  const Scalar _tmp62 = Scalar(1.0) * _tmp61;
  const Scalar _tmp63 = _tmp52 * _tmp54;
  const Scalar _tmp64 = Scalar(1.0) * _tmp62 * _tmp63 - Scalar(1.0) * _tmp62;
  const Scalar _tmp65 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 + Scalar(110.0);
  const Scalar _tmp67 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp68 = _tmp67 + Scalar(-125.0);
  const Scalar _tmp69 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp68, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp70 = _tmp68 * _tmp69;
  const Scalar _tmp71 = _tmp48 + position_vector(1, 0);
  const Scalar _tmp72 = _tmp71 + Scalar(110.0);
  const Scalar _tmp73 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp74 = _tmp73 + Scalar(125.0);
  const Scalar _tmp75 =
      std::sqrt(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp74, Scalar(2))));
  const Scalar _tmp76 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp77 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp78 = _tmp75 * _tmp77;
  const Scalar _tmp79 = _tmp78 * (-_tmp48 * _tmp74 * _tmp76 + _tmp57 * _tmp72 * _tmp76);
  const Scalar _tmp80 = _tmp66 * _tmp69;
  const Scalar _tmp81 = _tmp53 * _tmp70 - _tmp56 * _tmp80 + _tmp70 * _tmp79;
  const Scalar _tmp82 = _tmp72 * _tmp77;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp70 * _tmp82 - _tmp80);
  const Scalar _tmp84 = Scalar(1.0) * _tmp83;
  const Scalar _tmp85 = _tmp38 - _tmp39;
  const Scalar _tmp86 = _tmp37 + _tmp85;
  const Scalar _tmp87 = -_tmp37;
  const Scalar _tmp88 = _tmp85 + _tmp87;
  const Scalar _tmp89 = _tmp70 * _tmp88;
  const Scalar _tmp90 = _tmp80 * _tmp86 - _tmp82 * _tmp89;
  const Scalar _tmp91 = _tmp84 * _tmp90;
  const Scalar _tmp92 = -_tmp70 * _tmp86 + _tmp89;
  const Scalar _tmp93 = _tmp59 * _tmp91 - _tmp84 * _tmp92;
  const Scalar _tmp94 = _tmp40 + _tmp87;
  const Scalar _tmp95 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp96 = _tmp95 + Scalar(125.0);
  const Scalar _tmp97 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp98 = _tmp97 + Scalar(-110.0);
  const Scalar _tmp99 = std::pow(Scalar(std::pow(_tmp96, Scalar(2)) + std::pow(_tmp98, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp100 = _tmp96 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp88;
  const Scalar _tmp102 = _tmp98 * _tmp99;
  const Scalar _tmp103 = _tmp100 * _tmp82 - _tmp102;
  const Scalar _tmp104 = _tmp103 * _tmp83;
  const Scalar _tmp105 = -_tmp101 * _tmp82 + _tmp102 * _tmp94 - _tmp104 * _tmp90;
  const Scalar _tmp106 = -_tmp100 * _tmp94 + _tmp101 - _tmp104 * _tmp92 - _tmp105 * _tmp59;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp108 = _tmp100 * _tmp51 + _tmp100 * _tmp79 - _tmp102 * _tmp44 - _tmp104 * _tmp81;
  const Scalar _tmp109 = _tmp107 * _tmp108;
  const Scalar _tmp110 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp111 = _tmp106 * _tmp110;
  const Scalar _tmp112 = _tmp111 * (-_tmp109 * _tmp93 - _tmp81 * _tmp84);
  const Scalar _tmp113 = _tmp52 * _tmp61;
  const Scalar _tmp114 = _tmp112 + _tmp93;
  const Scalar _tmp115 = _tmp105 * _tmp107;
  const Scalar _tmp116 = _tmp112 * _tmp113 - _tmp114 * _tmp115 - _tmp91;
  const Scalar _tmp117 = Scalar(1.0) * _tmp54;
  const Scalar _tmp118 = _tmp33 * _tmp35;
  const Scalar _tmp119 = _tmp118 * fh1;
  const Scalar _tmp120 = _tmp111 * _tmp62;
  const Scalar _tmp121 = Scalar(1.0) * _tmp110;
  const Scalar _tmp122 = -_tmp105 * _tmp121 + _tmp120 * _tmp52;
  const Scalar _tmp123 = fh1 * (_tmp118 * _tmp19 - _tmp30 * _tmp36);
  const Scalar _tmp124 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp125 = _tmp49 * _tmp59 + _tmp58;
  const Scalar _tmp126 = 0;
  const Scalar _tmp127 = _tmp125 * _tmp61;
  const Scalar _tmp128 = _tmp54 * (-_tmp115 * _tmp126 - _tmp127 * _tmp52 + _tmp50);
  const Scalar _tmp129 = -Scalar(1.0) * _tmp125 * _tmp62 - Scalar(1.0) * _tmp128 + Scalar(1.0);
  const Scalar _tmp130 = -_tmp118 * _tmp41 - Scalar(2.3544) * _tmp25 - _tmp30 * fv1;
  const Scalar _tmp131 = _tmp59 * _tmp62;
  const Scalar _tmp132 = _tmp54 * (_tmp60 * _tmp62 + Scalar(1.0));
  const Scalar _tmp133 = Scalar(1.0) * _tmp131 - Scalar(1.0) * _tmp132;
  const Scalar _tmp134 = _tmp82 * _tmp83;
  const Scalar _tmp135 = _tmp134 * _tmp90 + _tmp82 * _tmp88;
  const Scalar _tmp136 = _tmp134 * _tmp92 - _tmp135 * _tmp59 - _tmp88;
  const Scalar _tmp137 = _tmp111 * (-_tmp109 * _tmp136 + _tmp134 * _tmp81 - _tmp79);
  const Scalar _tmp138 = _tmp136 + _tmp137;
  const Scalar _tmp139 = _tmp113 * _tmp137 - _tmp115 * _tmp138 + _tmp135;
  const Scalar _tmp140 = _tmp36 * fh1;
  const Scalar _tmp141 = Scalar(1.0) * _tmp119 * (_tmp112 * _tmp62 - _tmp116 * _tmp117) +
                         Scalar(1.0) * _tmp123 * (-_tmp117 * _tmp122 + _tmp120) +
                         _tmp124 * _tmp129 + _tmp130 * _tmp133 +
                         Scalar(1.0) * _tmp140 * (-_tmp117 * _tmp139 + _tmp137 * _tmp62) +
                         _tmp42 * _tmp64;
  const Scalar _tmp142 = _tmp107 * _tmp126;
  const Scalar _tmp143 = _tmp104 * _tmp142;
  const Scalar _tmp144 = _tmp78 * (_tmp100 * _tmp142 - _tmp143 * _tmp70);
  const Scalar _tmp145 = _tmp103 * _tmp110 * _tmp84;
  const Scalar _tmp146 = _tmp103 * _tmp107;
  const Scalar _tmp147 = -_tmp114 * _tmp146 + Scalar(1.0);
  const Scalar _tmp148 = _tmp70 * _tmp83;
  const Scalar _tmp149 = _tmp100 * _tmp107;
  const Scalar _tmp150 = -_tmp138 * _tmp146 - _tmp82;
  const Scalar _tmp151 = -_tmp119 * _tmp78 * (_tmp114 * _tmp149 + _tmp147 * _tmp148) -
                         _tmp123 * _tmp78 * (_tmp100 * _tmp121 - _tmp145 * _tmp70) -
                         _tmp124 * _tmp144 -
                         _tmp140 * _tmp78 * (_tmp138 * _tmp149 + _tmp148 * _tmp150 + Scalar(1.0));
  const Scalar _tmp152 = Scalar(1.0) / (_tmp151);
  const Scalar _tmp153 = std::asinh(_tmp141 * _tmp152);
  const Scalar _tmp154 = Scalar(1.0) * _tmp153;
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp151;
  const Scalar _tmp156 =
      -_tmp153 * _tmp155 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp71 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp73 - 1), Scalar(2))));
  const Scalar _tmp157 = Scalar(0.1034955) * _tmp152;
  const Scalar _tmp158 = _tmp156 * _tmp157;
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp160 = std::pow(_tmp151, Scalar(-2));
  const Scalar _tmp161 = _tmp144 * _tmp160;
  const Scalar _tmp162 = _tmp26 + _tmp45 + _tmp46;
  const Scalar _tmp163 =
      (-_tmp141 * _tmp161 + _tmp152 * (-_tmp129 + _tmp133 * _tmp162 + _tmp19 * _tmp64)) /
      std::sqrt(Scalar(std::pow(_tmp141, Scalar(2)) * _tmp160 + 1));
  const Scalar _tmp164 = _tmp42 * _tmp62;
  const Scalar _tmp165 = _tmp116 * _tmp119 * _tmp54 + _tmp122 * _tmp123 * _tmp54 +
                         _tmp124 * _tmp128 + _tmp130 * _tmp132 + _tmp139 * _tmp140 * _tmp54 -
                         _tmp164 * _tmp63;
  const Scalar _tmp166 = _tmp124 * _tmp142;
  const Scalar _tmp167 = -_tmp104 * _tmp166 + _tmp119 * _tmp147 * _tmp83 - _tmp123 * _tmp145 +
                         _tmp140 * _tmp150 * _tmp83;
  const Scalar _tmp168 = Scalar(1.0) / (_tmp167);
  const Scalar _tmp169 = std::asinh(_tmp165 * _tmp168);
  const Scalar _tmp170 = Scalar(1.0) * _tmp169;
  const Scalar _tmp171 = std::pow(_tmp167, Scalar(-2));
  const Scalar _tmp172 = _tmp143 * _tmp171;
  const Scalar _tmp173 = _tmp19 * _tmp62;
  const Scalar _tmp174 =
      (-_tmp165 * _tmp172 + _tmp168 * (-_tmp128 + _tmp132 * _tmp162 - _tmp173 * _tmp63)) /
      std::sqrt(Scalar(std::pow(_tmp165, Scalar(2)) * _tmp171 + 1));
  const Scalar _tmp175 = Scalar(9.6622558468725703) * _tmp167;
  const Scalar _tmp176 =
      -_tmp169 * _tmp175 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp67), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp65 - 1), Scalar(2))));
  const Scalar _tmp177 = Scalar(0.1034955) * _tmp168;
  const Scalar _tmp178 = _tmp176 * _tmp177;
  const Scalar _tmp179 = Scalar(9.6622558468725703) * _tmp142;
  const Scalar _tmp180 = _tmp104 * _tmp179;
  const Scalar _tmp181 = -_tmp112 * _tmp119 * _tmp61 - _tmp120 * _tmp123 + _tmp124 * _tmp127 -
                         _tmp130 * _tmp131 - _tmp137 * _tmp140 * _tmp61 + _tmp164;
  const Scalar _tmp182 =
      _tmp107 * _tmp114 * _tmp119 + _tmp107 * _tmp138 * _tmp140 + _tmp121 * _tmp123 + _tmp166;
  const Scalar _tmp183 = Scalar(1.0) / (_tmp182);
  const Scalar _tmp184 = std::asinh(_tmp181 * _tmp183);
  const Scalar _tmp185 = Scalar(9.6622558468725703) * _tmp182;
  const Scalar _tmp186 =
      -_tmp184 * _tmp185 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp97), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp95 - 1), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.1034955) * _tmp183;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = Scalar(1.0) * _tmp184;
  const Scalar _tmp190 = std::pow(_tmp182, Scalar(-2));
  const Scalar _tmp191 = _tmp142 * _tmp190;
  const Scalar _tmp192 = (_tmp181 * _tmp191 + _tmp183 * (-_tmp127 - _tmp131 * _tmp162 + _tmp173)) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp190 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp32 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp32 -
                          Scalar(125.0) *
                              std::sqrt(Scalar(
                                  std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp20),
                                           Scalar(2)) +
                                  Scalar(0.77439999999999998) *
                                      std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp31),
                                               Scalar(2)))))));
  _res(1, 0) = _tmp155 * (-Scalar(1.0) * _tmp163 * std::cosh(_tmp154) -
                          (-Scalar(0.1034955) * _tmp156 * _tmp161 +
                           _tmp157 * (-_tmp153 * _tmp159 - _tmp155 * _tmp163)) *
                              std::cosh(_tmp158)) +
               _tmp159 * (-std::sinh(_tmp154) - std::sinh(_tmp158));
  _res(2, 0) = _tmp175 * (-Scalar(1.0) * _tmp174 * std::cosh(_tmp170) -
                          (-Scalar(0.1034955) * _tmp172 * _tmp176 +
                           _tmp177 * (-_tmp169 * _tmp180 - _tmp174 * _tmp175)) *
                              std::cosh(_tmp178)) +
               _tmp180 * (-std::sinh(_tmp170) - std::sinh(_tmp178));
  _res(3, 0) = -_tmp179 * (-std::sinh(_tmp188) - std::sinh(_tmp189)) +
               _tmp185 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp189) -
                          (Scalar(0.1034955) * _tmp186 * _tmp191 +
                           _tmp187 * (_tmp179 * _tmp184 - _tmp185 * _tmp192)) *
                              std::cosh(_tmp188));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
