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
 * Symbolic function: FK_residual_func_cost1_wrt_fv1
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
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
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost1WrtFv1(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 584

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (191)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp7;
  const Scalar _tmp9 = _tmp1 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp10 * _tmp3;
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp13 = _tmp3 * _tmp8;
  const Scalar _tmp14 = _tmp1 * _tmp10;
  const Scalar _tmp15 = _tmp13 - _tmp14;
  const Scalar _tmp16 = Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = -_tmp16;
  const Scalar _tmp18 = -_tmp12 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp6;
  const Scalar _tmp20 = _tmp19 + position_vector(1, 0);
  const Scalar _tmp21 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp25 = 2 * _tmp1 * _tmp3;
  const Scalar _tmp26 = _tmp10 * _tmp7;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp24 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp34 = Scalar(1.0) * _tmp0 /
                        std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp35 = _tmp24 + _tmp28;
  const Scalar _tmp36 = _tmp22 + _tmp35;
  const Scalar _tmp37 = _tmp36 + position_vector(0, 0);
  const Scalar _tmp38 = _tmp37 - p_b(0, 0);
  const Scalar _tmp39 = Scalar(1.0) / (_tmp38);
  const Scalar _tmp40 = _tmp12 + _tmp17 + _tmp6;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp41 - p_b(1, 0);
  const Scalar _tmp43 = _tmp39 * _tmp42;
  const Scalar _tmp44 = _tmp21 + _tmp29;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 - p_d(0, 0);
  const Scalar _tmp47 = _tmp18 + _tmp5;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 - p_d(1, 0);
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp46 * _tmp50;
  const Scalar _tmp52 = _tmp49 * _tmp50;
  const Scalar _tmp53 = _tmp43 * _tmp51 - _tmp52;
  const Scalar _tmp54 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp55 = -_tmp54;
  const Scalar _tmp56 =
      -Scalar(0.010999999999999999) * _tmp2 - Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp57 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp58 = _tmp56 + _tmp57;
  const Scalar _tmp59 = _tmp55 + _tmp58;
  const Scalar _tmp60 = _tmp56 - _tmp57;
  const Scalar _tmp61 = _tmp54 + _tmp60;
  const Scalar _tmp62 = _tmp51 * _tmp61;
  const Scalar _tmp63 = _tmp21 + _tmp35;
  const Scalar _tmp64 = _tmp63 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 - p_c(0, 0);
  const Scalar _tmp66 = _tmp12 + _tmp5;
  const Scalar _tmp67 = _tmp17 + _tmp66;
  const Scalar _tmp68 = _tmp67 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 - p_c(1, 0);
  const Scalar _tmp70 = std::pow(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp69, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp71 = _tmp65 * _tmp70;
  const Scalar _tmp72 = _tmp61 * _tmp71;
  const Scalar _tmp73 = _tmp54 + _tmp58;
  const Scalar _tmp74 = _tmp69 * _tmp70;
  const Scalar _tmp75 = -_tmp43 * _tmp72 + _tmp73 * _tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp43 * _tmp71 - _tmp74);
  const Scalar _tmp77 = _tmp53 * _tmp76;
  const Scalar _tmp78 = -_tmp43 * _tmp62 + _tmp52 * _tmp59 - _tmp75 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) * _tmp40;
  const Scalar _tmp80 = -_tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp67 + _tmp80);
  const Scalar _tmp82 = Scalar(1.0) * _tmp36;
  const Scalar _tmp83 = -_tmp63 + _tmp82;
  const Scalar _tmp84 = _tmp81 * _tmp83;
  const Scalar _tmp85 = _tmp76 * (-_tmp71 * _tmp73 + _tmp72);
  const Scalar _tmp86 = -_tmp51 * _tmp59 - _tmp53 * _tmp85 + _tmp62 - _tmp78 * _tmp84;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 =
      std::sqrt(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp42, Scalar(2))));
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = _tmp39 * _tmp88;
  const Scalar _tmp91 = _tmp90 * (_tmp36 * _tmp42 * _tmp89 - _tmp38 * _tmp40 * _tmp89);
  const Scalar _tmp92 = _tmp43 * _tmp76;
  const Scalar _tmp93 = _tmp43 * _tmp61 + _tmp75 * _tmp92;
  const Scalar _tmp94 = _tmp43 * _tmp85 - _tmp61 - _tmp84 * _tmp93;
  const Scalar _tmp95 = -_tmp63 * _tmp74 + _tmp67 * _tmp71 + _tmp71 * _tmp91;
  const Scalar _tmp96 = -_tmp44 * _tmp52 + _tmp47 * _tmp51 + _tmp51 * _tmp91 - _tmp77 * _tmp95;
  const Scalar _tmp97 = _tmp87 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp86 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp91 + _tmp92 * _tmp95 - _tmp94 * _tmp97);
  const Scalar _tmp101 = _tmp87 * (_tmp100 + _tmp94);
  const Scalar _tmp102 = -_tmp101 * _tmp53 - _tmp43;
  const Scalar _tmp103 = _tmp71 * _tmp76;
  const Scalar _tmp104 = _tmp31 - p_a(0, 0);
  const Scalar _tmp105 = _tmp20 - p_a(1, 0);
  const Scalar _tmp106 =
      std::pow(Scalar(std::pow(_tmp104, Scalar(2)) + std::pow(_tmp105, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp107 = _tmp104 * _tmp106;
  const Scalar _tmp108 = _tmp107 * fh1;
  const Scalar _tmp109 = Scalar(1.0) * _tmp81;
  const Scalar _tmp110 = _tmp109 * _tmp75 * _tmp76 * _tmp83 - Scalar(1.0) * _tmp85;
  const Scalar _tmp111 = Scalar(1.0) * _tmp76;
  const Scalar _tmp112 = _tmp99 * (-_tmp110 * _tmp97 - _tmp111 * _tmp95);
  const Scalar _tmp113 = _tmp87 * (_tmp110 + _tmp112);
  const Scalar _tmp114 = -_tmp113 * _tmp53 + Scalar(1.0);
  const Scalar _tmp115 = _tmp105 * _tmp106;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = Scalar(1.0) * _tmp98;
  const Scalar _tmp118 = _tmp71 * _tmp77;
  const Scalar _tmp119 = fh1 * (-_tmp107 * _tmp19 + _tmp115 * _tmp30);
  const Scalar _tmp120 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp121 = _tmp79 * _tmp84 + _tmp82;
  const Scalar _tmp122 = 0;
  const Scalar _tmp123 = _tmp90 * (-_tmp118 * _tmp122 + _tmp122 * _tmp51);
  const Scalar _tmp124 = -_tmp108 * _tmp90 * (_tmp101 * _tmp51 + _tmp102 * _tmp103 + Scalar(1.0)) -
                         _tmp116 * _tmp90 * (_tmp103 * _tmp114 + _tmp113 * _tmp51) -
                         _tmp119 * _tmp90 * (-_tmp117 * _tmp118 + _tmp117 * _tmp51) -
                         _tmp120 * _tmp123;
  const Scalar _tmp125 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp126 = Scalar(0.1034955) * _tmp125;
  const Scalar _tmp127 = fh1 * (_tmp55 + _tmp60);
  const Scalar _tmp128 = _tmp107 * _tmp127 + Scalar(5.1796800000000003) * _tmp27 + _tmp30 * fv1;
  const Scalar _tmp129 = _tmp47 + _tmp80;
  const Scalar _tmp130 = _tmp129 * _tmp84;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 - _tmp44 + _tmp82);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp129 * _tmp81;
  const Scalar _tmp134 = Scalar(1.0) * _tmp132 * _tmp133 - Scalar(1.0) * _tmp132;
  const Scalar _tmp135 = _tmp121 * _tmp131;
  const Scalar _tmp136 = _tmp81 * (-_tmp122 * _tmp78 - _tmp129 * _tmp135 + _tmp80);
  const Scalar _tmp137 = -Scalar(1.0) * _tmp135 - Scalar(1.0) * _tmp136 + Scalar(1.0);
  const Scalar _tmp138 = _tmp132 * _tmp99;
  const Scalar _tmp139 = -_tmp117 * _tmp78 + _tmp129 * _tmp138;
  const Scalar _tmp140 = -_tmp115 * _tmp127 - Scalar(5.1796800000000003) * _tmp15 - _tmp19 * fv1;
  const Scalar _tmp141 = _tmp81 * (_tmp130 * _tmp132 + Scalar(1.0));
  const Scalar _tmp142 = _tmp132 * _tmp84;
  const Scalar _tmp143 = -Scalar(1.0) * _tmp141 + Scalar(1.0) * _tmp142;
  const Scalar _tmp144 = _tmp129 * _tmp131;
  const Scalar _tmp145 = -_tmp111 * _tmp75 + _tmp112 * _tmp144 - _tmp113 * _tmp78;
  const Scalar _tmp146 = _tmp100 * _tmp144 - _tmp101 * _tmp78 + _tmp93;
  const Scalar _tmp147 = Scalar(1.0) * _tmp108 * (_tmp100 * _tmp132 - _tmp109 * _tmp146) +
                         Scalar(1.0) * _tmp116 * (-_tmp109 * _tmp145 + _tmp112 * _tmp132) +
                         Scalar(1.0) * _tmp119 * (-_tmp109 * _tmp139 + _tmp138) +
                         _tmp120 * _tmp137 + _tmp128 * _tmp134 + _tmp140 * _tmp143;
  const Scalar _tmp148 = std::asinh(_tmp125 * _tmp147);
  const Scalar _tmp149 = Scalar(9.6622558468725703) * _tmp124;
  const Scalar _tmp150 =
      -_tmp148 * _tmp149 - std::sqrt(Scalar(std::pow(Scalar(-_tmp37 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp41 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp151 = _tmp126 * _tmp150;
  const Scalar _tmp152 = Scalar(1.0) * _tmp148;
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp123;
  const Scalar _tmp154 = _tmp16 + _tmp66;
  const Scalar _tmp155 = std::pow(_tmp124, Scalar(-2));
  const Scalar _tmp156 = _tmp123 * _tmp155;
  const Scalar _tmp157 =
      (_tmp125 * (_tmp134 * _tmp30 - _tmp137 + _tmp143 * _tmp154) - _tmp147 * _tmp156) /
      std::sqrt(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp155 + 1));
  const Scalar _tmp158 = Scalar(0.1034955) * _tmp156;
  const Scalar _tmp159 = _tmp117 * _tmp119;
  const Scalar _tmp160 = _tmp120 * _tmp122;
  const Scalar _tmp161 =
      _tmp102 * _tmp108 * _tmp76 + _tmp114 * _tmp116 * _tmp76 - _tmp159 * _tmp77 - _tmp160 * _tmp77;
  const Scalar _tmp162 = Scalar(1.0) / (_tmp161);
  const Scalar _tmp163 = _tmp128 * _tmp132;
  const Scalar _tmp164 = _tmp108 * _tmp146 * _tmp81 + _tmp116 * _tmp145 * _tmp81 +
                         _tmp119 * _tmp139 * _tmp81 + _tmp120 * _tmp136 - _tmp133 * _tmp163 +
                         _tmp140 * _tmp141;
  const Scalar _tmp165 = std::asinh(_tmp162 * _tmp164);
  const Scalar _tmp166 = Scalar(1.0) * _tmp165;
  const Scalar _tmp167 = std::pow(_tmp161, Scalar(-2));
  const Scalar _tmp168 = _tmp132 * _tmp30;
  const Scalar _tmp169 = _tmp122 * _tmp167 * _tmp77;
  const Scalar _tmp170 =
      (_tmp162 * (-_tmp133 * _tmp168 - _tmp136 + _tmp141 * _tmp154) - _tmp164 * _tmp169) /
      std::sqrt(Scalar(std::pow(_tmp164, Scalar(2)) * _tmp167 + 1));
  const Scalar _tmp171 = Scalar(9.6622558468725703) * _tmp161;
  const Scalar _tmp172 =
      -_tmp165 * _tmp171 - std::sqrt(Scalar(std::pow(Scalar(-_tmp64 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp68 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp173 = Scalar(0.1034955) * _tmp162;
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = Scalar(0.1034955) * _tmp169;
  const Scalar _tmp176 = Scalar(9.6622558468725703) * _tmp122;
  const Scalar _tmp177 = _tmp176 * _tmp77;
  const Scalar _tmp178 = _tmp101 * _tmp108 + _tmp113 * _tmp116 + _tmp159 + _tmp160;
  const Scalar _tmp179 = Scalar(1.0) / (_tmp178);
  const Scalar _tmp180 = Scalar(0.1034955) * _tmp179;
  const Scalar _tmp181 = -_tmp100 * _tmp108 * _tmp131 - _tmp112 * _tmp116 * _tmp131 -
                         _tmp119 * _tmp138 + _tmp120 * _tmp135 - _tmp140 * _tmp142 + _tmp163;
  const Scalar _tmp182 = std::asinh(_tmp179 * _tmp181);
  const Scalar _tmp183 = Scalar(9.6622558468725703) * _tmp178;
  const Scalar _tmp184 =
      -_tmp182 * _tmp183 - std::sqrt(Scalar(std::pow(Scalar(-_tmp45 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp48 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp185 = _tmp180 * _tmp184;
  const Scalar _tmp186 = Scalar(1.0) * _tmp182;
  const Scalar _tmp187 = std::pow(_tmp178, Scalar(-2));
  const Scalar _tmp188 = _tmp122 * _tmp187;
  const Scalar _tmp189 = Scalar(0.1034955) * _tmp188;
  const Scalar _tmp190 = (_tmp179 * (-_tmp135 - _tmp142 * _tmp154 + _tmp168) + _tmp181 * _tmp188) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp187 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp33 *
      (_tmp34 * std::sinh(Scalar(1.0) * _tmp32) +
       _tmp34 * std::sinh(Scalar(0.1034955) * _tmp0 *
                          (-_tmp32 * _tmp33 -
                           std::sqrt(Scalar(std::pow(Scalar(-_tmp20 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp31 + p_a(0, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp149 * (Scalar(1.0) * _tmp157 * std::sinh(_tmp152) - _tmp158 * p_b(2, 0) -
                  (_tmp126 * (-_tmp148 * _tmp153 - _tmp149 * _tmp157) - _tmp150 * _tmp158) *
                      std::sinh(_tmp151)) -
      _tmp153 * (_tmp126 * p_b(2, 0) - std::cosh(_tmp151) + std::cosh(_tmp152));
  _res(2, 0) =
      -_tmp171 * (Scalar(1.0) * _tmp170 * std::sinh(_tmp166) - _tmp175 * p_c(2, 0) -
                  (-_tmp172 * _tmp175 + _tmp173 * (-_tmp165 * _tmp177 - _tmp170 * _tmp171)) *
                      std::sinh(_tmp174)) -
      _tmp177 * (_tmp173 * p_c(2, 0) + std::cosh(_tmp166) - std::cosh(_tmp174));
  _res(3, 0) = _tmp176 * (_tmp180 * p_d(2, 0) - std::cosh(_tmp185) + std::cosh(_tmp186)) -
               _tmp183 * (_tmp189 * p_d(2, 0) + Scalar(1.0) * _tmp190 * std::sinh(_tmp186) -
                          (_tmp180 * (_tmp176 * _tmp182 - _tmp183 * _tmp190) + _tmp184 * _tmp189) *
                              std::sinh(_tmp185));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
