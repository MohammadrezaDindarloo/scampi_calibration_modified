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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl15
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl15(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 611

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (192)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp9 = 2 * _tmp8;
  const Scalar _tmp10 = _tmp5 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = _tmp11 * _tmp3;
  const Scalar _tmp13 = _tmp10 + _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp3 * _tmp9;
  const Scalar _tmp16 = _tmp11 * _tmp5;
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp15 - Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp18 = _tmp14 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp7;
  const Scalar _tmp20 = _tmp19 + position_vector(0, 0);
  const Scalar _tmp21 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp6;
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
  const Scalar _tmp33 = -_tmp22;
  const Scalar _tmp34 = -_tmp28;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = _tmp27 + _tmp35;
  const Scalar _tmp37 = _tmp36 + position_vector(1, 0);
  const Scalar _tmp38 = _tmp37 + Scalar(110.0);
  const Scalar _tmp39 = -_tmp7;
  const Scalar _tmp40 = _tmp14 - _tmp17;
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp43 = _tmp42 + Scalar(125.0);
  const Scalar _tmp44 = std::pow(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp43, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp45 = _tmp43 * _tmp44;
  const Scalar _tmp46 = _tmp40 + _tmp7;
  const Scalar _tmp47 = _tmp29 + _tmp33;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 + Scalar(110.0);
  const Scalar _tmp50 = _tmp46 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 + Scalar(-125.0);
  const Scalar _tmp52 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp51);
  const Scalar _tmp55 = _tmp52 * _tmp54;
  const Scalar _tmp56 = _tmp55 * (_tmp46 * _tmp49 * _tmp53 - _tmp47 * _tmp51 * _tmp53);
  const Scalar _tmp57 = _tmp18 + _tmp39;
  const Scalar _tmp58 = _tmp22 + _tmp27 + _tmp34;
  const Scalar _tmp59 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 + Scalar(-110.0);
  const Scalar _tmp61 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 + Scalar(125.0);
  const Scalar _tmp63 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp62, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp60 * _tmp63;
  const Scalar _tmp65 = _tmp62 * _tmp63;
  const Scalar _tmp66 = _tmp56 * _tmp65 - _tmp57 * _tmp64 + _tmp58 * _tmp65;
  const Scalar _tmp67 = _tmp49 * _tmp54;
  const Scalar _tmp68 = Scalar(1.0) / (-_tmp64 + _tmp65 * _tmp67);
  const Scalar _tmp69 = _tmp38 * _tmp44;
  const Scalar _tmp70 = _tmp45 * _tmp67 - _tmp69;
  const Scalar _tmp71 = _tmp68 * _tmp70;
  const Scalar _tmp72 = _tmp36 * _tmp45 - _tmp41 * _tmp69 + _tmp45 * _tmp56 - _tmp66 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = Scalar(1.0) * _tmp73;
  const Scalar _tmp75 = _tmp31 + Scalar(-110.0);
  const Scalar _tmp76 = _tmp20 + Scalar(-125.0);
  const Scalar _tmp77 = std::pow(Scalar(std::pow(_tmp75, Scalar(2)) + std::pow(_tmp76, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp78 = _tmp76 * _tmp77;
  const Scalar _tmp79 = _tmp75 * _tmp77;
  const Scalar _tmp80 = fh1 * (_tmp19 * _tmp79 - _tmp30 * _tmp78);
  const Scalar _tmp81 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp82 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp83 = -Scalar(0.010999999999999999) * _tmp21 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp84 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp85 = _tmp83 - _tmp84;
  const Scalar _tmp86 = _tmp82 + _tmp85;
  const Scalar _tmp87 = -_tmp82;
  const Scalar _tmp88 = _tmp85 + _tmp87;
  const Scalar _tmp89 = _tmp83 + _tmp84;
  const Scalar _tmp90 = _tmp87 + _tmp89;
  const Scalar _tmp91 = _tmp67 * _tmp86;
  const Scalar _tmp92 = _tmp64 * _tmp90 - _tmp65 * _tmp91;
  const Scalar _tmp93 = -_tmp45 * _tmp91 + _tmp69 * _tmp88 - _tmp71 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) * _tmp47;
  const Scalar _tmp95 = -_tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp58 + _tmp95);
  const Scalar _tmp97 = Scalar(1.0) * _tmp46;
  const Scalar _tmp98 = -_tmp57 + _tmp97;
  const Scalar _tmp99 = _tmp96 * _tmp98;
  const Scalar _tmp100 = _tmp68 * (_tmp65 * _tmp86 - _tmp65 * _tmp90);
  const Scalar _tmp101 = -_tmp100 * _tmp70 + _tmp45 * _tmp86 - _tmp45 * _tmp88 - _tmp93 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp103 = _tmp94 * _tmp99 + _tmp97;
  const Scalar _tmp104 = 0;
  const Scalar _tmp105 = _tmp102 * _tmp104;
  const Scalar _tmp106 = _tmp65 * _tmp68;
  const Scalar _tmp107 = _tmp102 * _tmp70;
  const Scalar _tmp108 = _tmp104 * _tmp107;
  const Scalar _tmp109 = _tmp55 * (_tmp105 * _tmp45 - _tmp106 * _tmp108);
  const Scalar _tmp110 = _tmp67 * _tmp68;
  const Scalar _tmp111 = _tmp110 * _tmp92 + _tmp91;
  const Scalar _tmp112 = _tmp100 * _tmp67 - _tmp111 * _tmp99 - _tmp86;
  const Scalar _tmp113 = _tmp102 * _tmp72;
  const Scalar _tmp114 = _tmp101 * _tmp73;
  const Scalar _tmp115 = _tmp114 * (_tmp110 * _tmp66 - _tmp112 * _tmp113 - _tmp56);
  const Scalar _tmp116 = _tmp112 + _tmp115;
  const Scalar _tmp117 = -_tmp107 * _tmp116 - _tmp67;
  const Scalar _tmp118 = _tmp102 * _tmp45;
  const Scalar _tmp119 = _tmp78 * fh1;
  const Scalar _tmp120 = Scalar(1.0) * _tmp96;
  const Scalar _tmp121 = -Scalar(1.0) * _tmp100 + _tmp120 * _tmp68 * _tmp92 * _tmp98;
  const Scalar _tmp122 = Scalar(1.0) * _tmp68;
  const Scalar _tmp123 = _tmp114 * (-_tmp113 * _tmp121 - _tmp122 * _tmp66);
  const Scalar _tmp124 = _tmp121 + _tmp123;
  const Scalar _tmp125 = -_tmp107 * _tmp124 + Scalar(1.0);
  const Scalar _tmp126 = _tmp79 * fh1;
  const Scalar _tmp127 = -_tmp109 * _tmp81 -
                         _tmp119 * _tmp55 * (_tmp106 * _tmp117 + _tmp116 * _tmp118 + Scalar(1.0)) -
                         _tmp126 * _tmp55 * (_tmp106 * _tmp125 + _tmp118 * _tmp124) -
                         _tmp55 * _tmp80 * (_tmp45 * _tmp74 - _tmp65 * _tmp71 * _tmp74);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp36 + _tmp95;
  const Scalar _tmp130 = _tmp129 * _tmp99;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 - _tmp41 + _tmp97);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp103 * _tmp131;
  const Scalar _tmp134 = _tmp96 * (-_tmp105 * _tmp93 - _tmp129 * _tmp133 + _tmp95);
  const Scalar _tmp135 = -Scalar(1.0) * _tmp103 * _tmp132 - Scalar(1.0) * _tmp134 + Scalar(1.0);
  const Scalar _tmp136 = _tmp102 * _tmp93;
  const Scalar _tmp137 = _tmp129 * _tmp131;
  const Scalar _tmp138 = -_tmp122 * _tmp92 + _tmp123 * _tmp137 - _tmp124 * _tmp136;
  const Scalar _tmp139 = _tmp114 * _tmp132;
  const Scalar _tmp140 = _tmp129 * _tmp139 - _tmp74 * _tmp93;
  const Scalar _tmp141 = fh1 * (_tmp82 + _tmp89);
  const Scalar _tmp142 = Scalar(2.3544) * _tmp13 + _tmp141 * _tmp78 + _tmp19 * fv1;
  const Scalar _tmp143 = _tmp129 * _tmp96;
  const Scalar _tmp144 = Scalar(1.0) * _tmp132 * _tmp143 - Scalar(1.0) * _tmp132;
  const Scalar _tmp145 = -_tmp141 * _tmp79 - Scalar(2.3544) * _tmp25 - _tmp30 * fv1;
  const Scalar _tmp146 = _tmp96 * (_tmp130 * _tmp132 + Scalar(1.0));
  const Scalar _tmp147 = _tmp132 * _tmp99;
  const Scalar _tmp148 = -Scalar(1.0) * _tmp146 + Scalar(1.0) * _tmp147;
  const Scalar _tmp149 = _tmp111 + _tmp115 * _tmp137 - _tmp116 * _tmp136;
  const Scalar _tmp150 = Scalar(1.0) * _tmp119 * (_tmp115 * _tmp132 - _tmp120 * _tmp149) +
                         Scalar(1.0) * _tmp126 * (-_tmp120 * _tmp138 + _tmp123 * _tmp132) +
                         _tmp135 * _tmp81 + _tmp142 * _tmp144 + _tmp145 * _tmp148 +
                         Scalar(1.0) * _tmp80 * (-_tmp120 * _tmp140 + _tmp139);
  const Scalar _tmp151 = std::asinh(_tmp128 * _tmp150);
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp153 =
      -_tmp151 * _tmp152 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp50), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp48 - 1), Scalar(2))));
  const Scalar _tmp154 = Scalar(0.1034955) * _tmp128;
  const Scalar _tmp155 = _tmp153 * _tmp154;
  const Scalar _tmp156 = Scalar(1.0) * _tmp151;
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp109;
  const Scalar _tmp158 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp159 = _tmp109 * _tmp158;
  const Scalar _tmp160 = _tmp26 + _tmp35;
  const Scalar _tmp161 =
      (_tmp128 * (-_tmp135 + _tmp144 * _tmp19 + _tmp148 * _tmp160) - _tmp150 * _tmp159) /
      std::sqrt(Scalar(std::pow(_tmp150, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp162 = _tmp132 * _tmp142;
  const Scalar _tmp163 = _tmp119 * _tmp149 * _tmp96 + _tmp126 * _tmp138 * _tmp96 +
                         _tmp134 * _tmp81 + _tmp140 * _tmp80 * _tmp96 - _tmp143 * _tmp162 +
                         _tmp145 * _tmp146;
  const Scalar _tmp164 = _tmp74 * _tmp80;
  const Scalar _tmp165 = _tmp108 * _tmp68;
  const Scalar _tmp166 =
      _tmp117 * _tmp119 * _tmp68 + _tmp125 * _tmp126 * _tmp68 - _tmp164 * _tmp71 - _tmp165 * _tmp81;
  const Scalar _tmp167 = Scalar(1.0) / (_tmp166);
  const Scalar _tmp168 = std::asinh(_tmp163 * _tmp167);
  const Scalar _tmp169 = Scalar(1.0) * _tmp168;
  const Scalar _tmp170 = Scalar(9.6622558468725703) * _tmp166;
  const Scalar _tmp171 =
      -_tmp168 * _tmp170 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp59), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp61 - 1), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.1034955) * _tmp167;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = Scalar(9.6622558468725703) * _tmp165;
  const Scalar _tmp175 = std::pow(_tmp166, Scalar(-2));
  const Scalar _tmp176 = _tmp165 * _tmp175;
  const Scalar _tmp177 = _tmp132 * _tmp19;
  const Scalar _tmp178 =
      (-_tmp163 * _tmp176 + _tmp167 * (-_tmp134 - _tmp143 * _tmp177 + _tmp146 * _tmp160)) /
      std::sqrt(Scalar(std::pow(_tmp163, Scalar(2)) * _tmp175 + 1));
  const Scalar _tmp179 =
      _tmp102 * _tmp116 * _tmp119 + _tmp102 * _tmp124 * _tmp126 + _tmp105 * _tmp81 + _tmp164;
  const Scalar _tmp180 = Scalar(1.0) / (_tmp179);
  const Scalar _tmp181 = -_tmp115 * _tmp119 * _tmp131 - _tmp123 * _tmp126 * _tmp131 +
                         _tmp133 * _tmp81 - _tmp139 * _tmp80 - _tmp145 * _tmp147 + _tmp162;
  const Scalar _tmp182 = std::asinh(_tmp180 * _tmp181);
  const Scalar _tmp183 = Scalar(1.0) * _tmp182;
  const Scalar _tmp184 = Scalar(9.6622558468725703) * _tmp179;
  const Scalar _tmp185 =
      -_tmp182 * _tmp184 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp37 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp42 - 1), Scalar(2))));
  const Scalar _tmp186 = Scalar(0.1034955) * _tmp180;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = Scalar(9.6622558468725703) * _tmp105;
  const Scalar _tmp189 = std::pow(_tmp179, Scalar(-2));
  const Scalar _tmp190 = _tmp105 * _tmp189;
  const Scalar _tmp191 = (_tmp180 * (-_tmp133 - _tmp147 * _tmp160 + _tmp177) + _tmp181 * _tmp190) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp189 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp32 -
                          Scalar(125.0) *
                              std::sqrt(Scalar(
                                  std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp20),
                                           Scalar(2)) +
                                  Scalar(0.77439999999999998) *
                                      std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp31),
                                               Scalar(2)))))));
  _res(1, 0) =
      -_tmp152 * (-Scalar(4.967784) * _tmp159 + Scalar(1.0) * _tmp161 * std::sinh(_tmp156) -
                  (-Scalar(0.1034955) * _tmp153 * _tmp159 +
                   _tmp154 * (-_tmp151 * _tmp157 - _tmp152 * _tmp161)) *
                      std::sinh(_tmp155)) -
      _tmp157 * (Scalar(4.967784) * _tmp128 - std::cosh(_tmp155) + std::cosh(_tmp156));
  _res(2, 0) =
      -_tmp170 * (-Scalar(4.967784) * _tmp176 + Scalar(1.0) * _tmp178 * std::sinh(_tmp169) -
                  (-Scalar(0.1034955) * _tmp171 * _tmp176 +
                   _tmp172 * (-_tmp168 * _tmp174 - _tmp170 * _tmp178)) *
                      std::sinh(_tmp173)) -
      _tmp174 * (Scalar(4.967784) * _tmp167 + std::cosh(_tmp169) - std::cosh(_tmp173));
  _res(3, 0) = -_tmp184 * (Scalar(4.967784) * _tmp190 + Scalar(1.0) * _tmp191 * std::sinh(_tmp183) -
                           (Scalar(0.1034955) * _tmp185 * _tmp190 +
                            _tmp186 * (_tmp182 * _tmp188 - _tmp184 * _tmp191)) *
                               std::sinh(_tmp187)) +
               _tmp188 * (Scalar(4.967784) * _tmp180 + std::cosh(_tmp183) - std::cosh(_tmp187));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
