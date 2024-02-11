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
 * Symbolic function: FK_residual_func_cost2_wrt_fv1
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     encoder: Matrix41
 *     pulley: Matrix43
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost2WrtFv1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Eigen::Matrix<Scalar, 4, 1>& encoder, const Eigen::Matrix<Scalar, 4, 3>& pulley,
    const Scalar epsilon) {
  // Total ops: 576

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (194)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp3;
  const Scalar _tmp12 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                        _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp13 = 2 * _tmp12 * _tmp5;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 * _tmp5;
  const Scalar _tmp16 = 2 * _tmp3;
  const Scalar _tmp17 = _tmp12 * _tmp16;
  const Scalar _tmp18 = _tmp15 - _tmp17;
  const Scalar _tmp19 = Scalar(0.010999999999999999) * _tmp18;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = -_tmp14 + _tmp20;
  const Scalar _tmp22 = _tmp21 + _tmp8;
  const Scalar _tmp23 = _tmp22 + position_vector(1, 0);
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = _tmp16 * _tmp5;
  const Scalar _tmp27 = _tmp10 * _tmp12;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = 1 - 2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp30 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp32 = _tmp29 - _tmp31;
  const Scalar _tmp33 = _tmp25 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp35 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp36 = _tmp29 + _tmp31;
  const Scalar _tmp37 = _tmp25 + _tmp36;
  const Scalar _tmp38 = _tmp14 + _tmp20 + _tmp8;
  const Scalar _tmp39 = _tmp38 + position_vector(1, 0);
  const Scalar _tmp40 = _tmp39 - pulley(1, 1);
  const Scalar _tmp41 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 - pulley(1, 0);
  const Scalar _tmp43 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp42, Scalar(2))));
  const Scalar _tmp44 = Scalar(1.0) / (_tmp43);
  const Scalar _tmp45 = Scalar(1.0) / (_tmp42);
  const Scalar _tmp46 = _tmp43 * _tmp45;
  const Scalar _tmp47 = _tmp46 * (_tmp37 * _tmp40 * _tmp44 - _tmp38 * _tmp42 * _tmp44);
  const Scalar _tmp48 = _tmp14 + _tmp7;
  const Scalar _tmp49 = _tmp20 + _tmp48;
  const Scalar _tmp50 = _tmp24 + _tmp36;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - pulley(2, 0);
  const Scalar _tmp53 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp54 = _tmp53 - pulley(2, 1);
  const Scalar _tmp55 = std::pow(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp54, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp56 = _tmp52 * _tmp55;
  const Scalar _tmp57 = _tmp54 * _tmp55;
  const Scalar _tmp58 = _tmp47 * _tmp56 + _tmp49 * _tmp56 - _tmp50 * _tmp57;
  const Scalar _tmp59 = _tmp40 * _tmp45;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp56 * _tmp59 - _tmp57);
  const Scalar _tmp61 = _tmp59 * _tmp60;
  const Scalar _tmp62 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp63 =
      -Scalar(0.010999999999999999) * _tmp30 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp26 - Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp65 = _tmp63 + _tmp64;
  const Scalar _tmp66 = _tmp62 + _tmp65;
  const Scalar _tmp67 = -_tmp62;
  const Scalar _tmp68 = _tmp65 + _tmp67;
  const Scalar _tmp69 = _tmp56 * _tmp68;
  const Scalar _tmp70 = _tmp57 * _tmp66 - _tmp59 * _tmp69;
  const Scalar _tmp71 = _tmp59 * _tmp68 + _tmp61 * _tmp70;
  const Scalar _tmp72 = Scalar(1.0) * _tmp38;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp49 + _tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp37;
  const Scalar _tmp76 = -_tmp50 + _tmp75;
  const Scalar _tmp77 = _tmp74 * _tmp76;
  const Scalar _tmp78 = -_tmp56 * _tmp66 + _tmp69;
  const Scalar _tmp79 = _tmp61 * _tmp78 - _tmp68 - _tmp71 * _tmp77;
  const Scalar _tmp80 = _tmp21 + _tmp7;
  const Scalar _tmp81 = _tmp80 + position_vector(1, 0);
  const Scalar _tmp82 = _tmp81 - pulley(3, 1);
  const Scalar _tmp83 = _tmp24 + _tmp32;
  const Scalar _tmp84 = _tmp83 + position_vector(0, 0);
  const Scalar _tmp85 = _tmp84 - pulley(3, 0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp82 * _tmp86;
  const Scalar _tmp88 = _tmp85 * _tmp86;
  const Scalar _tmp89 = _tmp59 * _tmp88 - _tmp87;
  const Scalar _tmp90 = _tmp60 * _tmp89;
  const Scalar _tmp91 = _tmp68 * _tmp88;
  const Scalar _tmp92 = _tmp63 - _tmp64;
  const Scalar _tmp93 = _tmp62 + _tmp92;
  const Scalar _tmp94 = -_tmp59 * _tmp91 - _tmp70 * _tmp90 + _tmp87 * _tmp93;
  const Scalar _tmp95 = -_tmp77 * _tmp94 - _tmp78 * _tmp90 - _tmp88 * _tmp93 + _tmp91;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp47 * _tmp88 - _tmp58 * _tmp90 + _tmp80 * _tmp88 - _tmp83 * _tmp87;
  const Scalar _tmp98 = _tmp96 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp100 = _tmp95 * _tmp99;
  const Scalar _tmp101 = _tmp100 * (-_tmp47 + _tmp58 * _tmp61 - _tmp79 * _tmp98);
  const Scalar _tmp102 = _tmp101 + _tmp79;
  const Scalar _tmp103 = _tmp89 * _tmp96;
  const Scalar _tmp104 = -_tmp102 * _tmp103 - _tmp59;
  const Scalar _tmp105 = _tmp56 * _tmp60;
  const Scalar _tmp106 = _tmp88 * _tmp96;
  const Scalar _tmp107 = _tmp34 - pulley(0, 0);
  const Scalar _tmp108 = _tmp23 - pulley(0, 1);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = Scalar(1.0) * _tmp99;
  const Scalar _tmp113 = _tmp56 * _tmp90;
  const Scalar _tmp114 = _tmp108 * _tmp109;
  const Scalar _tmp115 = fh1 * (-_tmp110 * _tmp22 + _tmp114 * _tmp33);
  const Scalar _tmp116 = Scalar(1.0) * _tmp60;
  const Scalar _tmp117 = Scalar(1.0) * _tmp74;
  const Scalar _tmp118 = -_tmp116 * _tmp78 + _tmp117 * _tmp60 * _tmp70 * _tmp76;
  const Scalar _tmp119 = _tmp100 * (-_tmp116 * _tmp58 - _tmp118 * _tmp98);
  const Scalar _tmp120 = _tmp118 + _tmp119;
  const Scalar _tmp121 = -_tmp103 * _tmp120 + Scalar(1.0);
  const Scalar _tmp122 = _tmp114 * fh1;
  const Scalar _tmp123 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp124 = _tmp72 * _tmp77 + _tmp75;
  const Scalar _tmp125 = 0;
  const Scalar _tmp126 = _tmp125 * _tmp96;
  const Scalar _tmp127 = _tmp46 * (-_tmp113 * _tmp126 + _tmp126 * _tmp88);
  const Scalar _tmp128 = -_tmp111 * _tmp46 * (_tmp102 * _tmp106 + _tmp104 * _tmp105 + Scalar(1.0)) -
                         _tmp115 * _tmp46 * (-_tmp112 * _tmp113 + _tmp112 * _tmp88) -
                         _tmp122 * _tmp46 * (_tmp105 * _tmp121 + _tmp106 * _tmp120) -
                         _tmp123 * _tmp127;
  const Scalar _tmp129 = Scalar(1.0) / (_tmp128);
  const Scalar _tmp130 = _tmp73 + _tmp80;
  const Scalar _tmp131 = _tmp130 * _tmp77;
  const Scalar _tmp132 = Scalar(1.0) / (-_tmp131 + _tmp75 - _tmp83);
  const Scalar _tmp133 = Scalar(1.0) * _tmp132;
  const Scalar _tmp134 = _tmp100 * _tmp133;
  const Scalar _tmp135 = -_tmp112 * _tmp94 + _tmp130 * _tmp134;
  const Scalar _tmp136 = fh1 * (_tmp67 + _tmp92);
  const Scalar _tmp137 = _tmp110 * _tmp136 + Scalar(5.1796800000000003) * _tmp28 + _tmp33 * fv1;
  const Scalar _tmp138 = _tmp130 * _tmp74;
  const Scalar _tmp139 = Scalar(1.0) * _tmp133 * _tmp138 - Scalar(1.0) * _tmp133;
  const Scalar _tmp140 = _tmp124 * _tmp132;
  const Scalar _tmp141 = _tmp94 * _tmp96;
  const Scalar _tmp142 = _tmp74 * (-_tmp125 * _tmp141 - _tmp130 * _tmp140 + _tmp73);
  const Scalar _tmp143 = -Scalar(1.0) * _tmp140 - Scalar(1.0) * _tmp142 + Scalar(1.0);
  const Scalar _tmp144 = _tmp130 * _tmp132;
  const Scalar _tmp145 = -_tmp116 * _tmp70 + _tmp119 * _tmp144 - _tmp120 * _tmp141;
  const Scalar _tmp146 = _tmp101 * _tmp144 - _tmp102 * _tmp141 + _tmp71;
  const Scalar _tmp147 = -_tmp114 * _tmp136 - Scalar(5.1796800000000003) * _tmp18 - _tmp22 * fv1;
  const Scalar _tmp148 = _tmp131 * _tmp133 + Scalar(1.0);
  const Scalar _tmp149 = _tmp133 * _tmp77;
  const Scalar _tmp150 = -Scalar(1.0) * _tmp117 * _tmp148 + Scalar(1.0) * _tmp149;
  const Scalar _tmp151 = Scalar(1.0) * _tmp111 * (_tmp101 * _tmp133 - _tmp117 * _tmp146) +
                         Scalar(1.0) * _tmp115 * (-_tmp117 * _tmp135 + _tmp134) +
                         Scalar(1.0) * _tmp122 * (-_tmp117 * _tmp145 + _tmp119 * _tmp133) +
                         _tmp123 * _tmp143 + _tmp137 * _tmp139 + _tmp147 * _tmp150;
  const Scalar _tmp152 = std::asinh(_tmp129 * _tmp151);
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp128;
  const Scalar _tmp154 =
      -_tmp152 * _tmp153 - std::sqrt(Scalar(std::pow(Scalar(-_tmp39 + pulley(1, 1)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp41 + pulley(1, 0)), Scalar(2))));
  const Scalar _tmp155 = std::pow(_tmp128, Scalar(-2));
  const Scalar _tmp156 = _tmp127 * _tmp155;
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp158 = _tmp19 + _tmp48;
  const Scalar _tmp159 =
      (_tmp129 * (_tmp139 * _tmp33 - _tmp143 + _tmp150 * _tmp158) - _tmp151 * _tmp156) /
      std::sqrt(Scalar(std::pow(_tmp151, Scalar(2)) * _tmp155 + 1));
  const Scalar _tmp160 = Scalar(0.1034955) * _tmp129;
  const Scalar _tmp161 = _tmp154 * _tmp160;
  const Scalar _tmp162 = Scalar(1.0) * _tmp152;
  const Scalar _tmp163 = _tmp148 * _tmp74;
  const Scalar _tmp164 = _tmp133 * _tmp137;
  const Scalar _tmp165 = _tmp111 * _tmp146 * _tmp74 + _tmp115 * _tmp135 * _tmp74 +
                         _tmp122 * _tmp145 * _tmp74 + _tmp123 * _tmp142 - _tmp138 * _tmp164 +
                         _tmp147 * _tmp163;
  const Scalar _tmp166 = _tmp123 * _tmp126;
  const Scalar _tmp167 = _tmp112 * _tmp115;
  const Scalar _tmp168 =
      _tmp104 * _tmp111 * _tmp60 + _tmp121 * _tmp122 * _tmp60 - _tmp166 * _tmp90 - _tmp167 * _tmp90;
  const Scalar _tmp169 = Scalar(1.0) / (_tmp168);
  const Scalar _tmp170 = std::asinh(_tmp165 * _tmp169);
  const Scalar _tmp171 = Scalar(9.6622558468725703) * _tmp168;
  const Scalar _tmp172 =
      -_tmp170 * _tmp171 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + pulley(2, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp53 + pulley(2, 1)), Scalar(2))));
  const Scalar _tmp173 = Scalar(0.1034955) * _tmp169;
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = Scalar(9.6622558468725703) * _tmp126;
  const Scalar _tmp176 = _tmp175 * _tmp90;
  const Scalar _tmp177 = std::pow(_tmp168, Scalar(-2));
  const Scalar _tmp178 = _tmp126 * _tmp177 * _tmp90;
  const Scalar _tmp179 = _tmp133 * _tmp33;
  const Scalar _tmp180 =
      (-_tmp165 * _tmp178 + _tmp169 * (-_tmp138 * _tmp179 - _tmp142 + _tmp158 * _tmp163)) /
      std::sqrt(Scalar(std::pow(_tmp165, Scalar(2)) * _tmp177 + 1));
  const Scalar _tmp181 = Scalar(1.0) * _tmp170;
  const Scalar _tmp182 =
      _tmp102 * _tmp111 * _tmp96 + _tmp120 * _tmp122 * _tmp96 + _tmp166 + _tmp167;
  const Scalar _tmp183 = Scalar(1.0) / (_tmp182);
  const Scalar _tmp184 = -_tmp101 * _tmp111 * _tmp132 - _tmp115 * _tmp134 -
                         _tmp119 * _tmp122 * _tmp132 + _tmp123 * _tmp140 - _tmp147 * _tmp149 +
                         _tmp164;
  const Scalar _tmp185 = std::asinh(_tmp183 * _tmp184);
  const Scalar _tmp186 = Scalar(9.6622558468725703) * _tmp182;
  const Scalar _tmp187 =
      -_tmp185 * _tmp186 - std::sqrt(Scalar(std::pow(Scalar(-_tmp81 + pulley(3, 1)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp84 + pulley(3, 0)), Scalar(2))));
  const Scalar _tmp188 = Scalar(0.1034955) * _tmp183;
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = Scalar(1.0) * _tmp185;
  const Scalar _tmp191 = std::pow(_tmp182, Scalar(-2));
  const Scalar _tmp192 = _tmp126 * _tmp191;
  const Scalar _tmp193 = (_tmp183 * (-_tmp140 - _tmp149 * _tmp158 + _tmp179) + _tmp184 * _tmp192) /
                         std::sqrt(Scalar(std::pow(_tmp184, Scalar(2)) * _tmp191 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp35 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp35 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp23 + pulley(0, 1)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp34 + pulley(0, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp153 * (-Scalar(1.0) * _tmp159 * std::cosh(_tmp162) -
                          (-Scalar(0.1034955) * _tmp154 * _tmp156 +
                           _tmp160 * (-_tmp152 * _tmp157 - _tmp153 * _tmp159)) *
                              std::cosh(_tmp161)) +
               _tmp157 * (-std::sinh(_tmp161) - std::sinh(_tmp162));
  _res(2, 0) = _tmp171 * (-Scalar(1.0) * _tmp180 * std::cosh(_tmp181) -
                          (-Scalar(0.1034955) * _tmp172 * _tmp178 +
                           _tmp173 * (-_tmp170 * _tmp176 - _tmp171 * _tmp180)) *
                              std::cosh(_tmp174)) +
               _tmp176 * (-std::sinh(_tmp174) - std::sinh(_tmp181));
  _res(3, 0) = -_tmp175 * (-std::sinh(_tmp189) - std::sinh(_tmp190)) +
               _tmp186 * (-Scalar(1.0) * _tmp193 * std::cosh(_tmp190) -
                          (Scalar(0.1034955) * _tmp187 * _tmp192 +
                           _tmp188 * (_tmp175 * _tmp185 - _tmp186 * _tmp193)) *
                              std::cosh(_tmp189));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym