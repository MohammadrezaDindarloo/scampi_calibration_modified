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
 *     ofset0: Scalar
 *     ofset1: Scalar
 *     ofset2: Scalar
 *     ofset3: Scalar
 *     distance_measure: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     rot_init_x: Scalar
 *     rot_init_y: Scalar
 *     rot_init_z: Scalar
 *     rot_init_w: Scalar
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost2WrtFv1(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& distance_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const Eigen::Matrix<Scalar, 3, 1>& position_vector,
    const Scalar rot_init_x, const Scalar rot_init_y, const Scalar rot_init_z,
    const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 571

  // Unused inputs
  (void)ofset0;
  (void)ofset1;
  (void)ofset2;
  (void)ofset3;
  (void)distance_measure;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (191)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp2 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * rot_init_x - _DeltaRot[1] * rot_init_y -
                       _DeltaRot[2] * rot_init_z + _DeltaRot[3] * rot_init_w;
  const Scalar _tmp6 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp5 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp12 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp1 * _tmp7;
  const Scalar _tmp15 = _tmp3 * _tmp5;
  const Scalar _tmp16 = _tmp14 + _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp13 + _tmp17;
  const Scalar _tmp19 = _tmp10 + _tmp18;
  const Scalar _tmp20 = _tmp19 + position_vector(0, 0);
  const Scalar _tmp21 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp25 = _tmp3 * _tmp6;
  const Scalar _tmp26 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = -_tmp24 + _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(1, 0);
  const Scalar _tmp33 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp34 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp35 = Scalar(1.0) * _tmp0 /
                        std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp36 = _tmp13 + _tmp17;
  const Scalar _tmp37 = _tmp10 + _tmp36;
  const Scalar _tmp38 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp39 = _tmp23 + _tmp24 + _tmp29;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp42 = _tmp40 - p_b(1, 0);
  const Scalar _tmp43 = _tmp38 - p_b(0, 0);
  const Scalar _tmp44 = Scalar(1.0) / (_tmp43);
  const Scalar _tmp45 = _tmp42 * _tmp44;
  const Scalar _tmp46 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp47 = -Scalar(0.010999999999999999) * _tmp11 -
                        Scalar(0.010999999999999999) * _tmp21 + Scalar(-0.010999999999999999);
  const Scalar _tmp48 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp49 = _tmp47 - _tmp48;
  const Scalar _tmp50 = _tmp46 + _tmp49;
  const Scalar _tmp51 = _tmp22 + _tmp30;
  const Scalar _tmp52 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp53 = _tmp52 - p_d(1, 0);
  const Scalar _tmp54 = _tmp18 + _tmp9;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 - p_d(0, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp50 * _tmp58;
  const Scalar _tmp60 = -_tmp46;
  const Scalar _tmp61 = _tmp47 + _tmp48;
  const Scalar _tmp62 = _tmp60 + _tmp61;
  const Scalar _tmp63 = _tmp53 * _tmp57;
  const Scalar _tmp64 = _tmp22 + _tmp24;
  const Scalar _tmp65 = _tmp29 + _tmp64;
  const Scalar _tmp66 = _tmp65 + position_vector(1, 0);
  const Scalar _tmp67 = _tmp66 - p_c(1, 0);
  const Scalar _tmp68 = _tmp36 + _tmp9;
  const Scalar _tmp69 = _tmp68 + position_vector(0, 0);
  const Scalar _tmp70 = _tmp69 - p_c(0, 0);
  const Scalar _tmp71 = std::pow(Scalar(std::pow(_tmp67, Scalar(2)) + std::pow(_tmp70, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp72 = _tmp70 * _tmp71;
  const Scalar _tmp73 = _tmp45 * _tmp50;
  const Scalar _tmp74 = _tmp46 + _tmp61;
  const Scalar _tmp75 = _tmp67 * _tmp71;
  const Scalar _tmp76 = -_tmp72 * _tmp73 + _tmp74 * _tmp75;
  const Scalar _tmp77 = _tmp45 * _tmp58 - _tmp63;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp45 * _tmp72 - _tmp75);
  const Scalar _tmp79 = _tmp77 * _tmp78;
  const Scalar _tmp80 = -_tmp45 * _tmp59 + _tmp62 * _tmp63 - _tmp76 * _tmp79;
  const Scalar _tmp81 = Scalar(1.0) * _tmp39;
  const Scalar _tmp82 = -_tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp65 + _tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp37;
  const Scalar _tmp85 = _tmp83 * (-_tmp68 + _tmp84);
  const Scalar _tmp86 = _tmp50 * _tmp72 - _tmp72 * _tmp74;
  const Scalar _tmp87 = -_tmp58 * _tmp62 + _tmp59 - _tmp79 * _tmp86 - _tmp80 * _tmp85;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 = _tmp81 * _tmp85 + _tmp84;
  const Scalar _tmp90 = 0;
  const Scalar _tmp91 = _tmp72 * _tmp79;
  const Scalar _tmp92 =
      std::sqrt(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp43, Scalar(2))));
  const Scalar _tmp93 = _tmp44 * _tmp92;
  const Scalar _tmp94 = _tmp93 * (_tmp58 * _tmp90 - _tmp90 * _tmp91);
  const Scalar _tmp95 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp96 = _tmp93 * (_tmp37 * _tmp42 * _tmp95 - _tmp39 * _tmp43 * _tmp95);
  const Scalar _tmp97 = _tmp65 * _tmp72 - _tmp68 * _tmp75 + _tmp72 * _tmp96;
  const Scalar _tmp98 = _tmp45 * _tmp78;
  const Scalar _tmp99 = _tmp73 + _tmp76 * _tmp98;
  const Scalar _tmp100 = -_tmp50 - _tmp85 * _tmp99 + _tmp86 * _tmp98;
  const Scalar _tmp101 = _tmp51 * _tmp58 - _tmp54 * _tmp63 + _tmp58 * _tmp96 - _tmp79 * _tmp97;
  const Scalar _tmp102 = _tmp101 * _tmp88;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp104 = _tmp103 * _tmp87;
  const Scalar _tmp105 = _tmp104 * (-_tmp100 * _tmp102 - _tmp96 + _tmp97 * _tmp98);
  const Scalar _tmp106 = _tmp88 * (_tmp100 + _tmp105);
  const Scalar _tmp107 = -_tmp106 * _tmp77 - _tmp45;
  const Scalar _tmp108 = _tmp72 * _tmp78;
  const Scalar _tmp109 = _tmp32 - p_a(1, 0);
  const Scalar _tmp110 = _tmp20 - p_a(0, 0);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp109, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp110 * _tmp111;
  const Scalar _tmp113 = _tmp112 * fh1;
  const Scalar _tmp114 = Scalar(1.0) * _tmp78;
  const Scalar _tmp115 = _tmp114 * _tmp76;
  const Scalar _tmp116 = -_tmp114 * _tmp86 + _tmp115 * _tmp85;
  const Scalar _tmp117 = _tmp104 * (-_tmp102 * _tmp116 - _tmp114 * _tmp97);
  const Scalar _tmp118 = _tmp88 * (_tmp116 + _tmp117);
  const Scalar _tmp119 = -_tmp118 * _tmp77 + Scalar(1.0);
  const Scalar _tmp120 = _tmp109 * _tmp111;
  const Scalar _tmp121 = _tmp120 * fh1;
  const Scalar _tmp122 = Scalar(1.0) * _tmp103;
  const Scalar _tmp123 = fh1 * (-_tmp112 * _tmp31 + _tmp120 * _tmp19);
  const Scalar _tmp124 = -_tmp113 * _tmp93 * (_tmp106 * _tmp58 + _tmp107 * _tmp108 + Scalar(1.0)) -
                         _tmp121 * _tmp93 * (_tmp108 * _tmp119 + _tmp118 * _tmp58) -
                         _tmp123 * _tmp93 * (_tmp122 * _tmp58 - _tmp122 * _tmp91) - _tmp41 * _tmp94;
  const Scalar _tmp125 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp126 = fh1 * (_tmp49 + _tmp60);
  const Scalar _tmp127 = -_tmp120 * _tmp126 - Scalar(3.29616) * _tmp27 - _tmp31 * fv1;
  const Scalar _tmp128 = _tmp51 + _tmp82;
  const Scalar _tmp129 = _tmp128 * _tmp85;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 - _tmp54 + _tmp84);
  const Scalar _tmp131 = Scalar(1.0) * _tmp130;
  const Scalar _tmp132 = _tmp129 * _tmp131 + Scalar(1.0);
  const Scalar _tmp133 = Scalar(1.0) * _tmp83;
  const Scalar _tmp134 = _tmp131 * _tmp85;
  const Scalar _tmp135 = -Scalar(1.0) * _tmp132 * _tmp133 + Scalar(1.0) * _tmp134;
  const Scalar _tmp136 = _tmp112 * _tmp126 + Scalar(3.29616) * _tmp16 + _tmp19 * fv1;
  const Scalar _tmp137 = _tmp128 * _tmp131;
  const Scalar _tmp138 = -Scalar(1.0) * _tmp131 + Scalar(1.0) * _tmp137 * _tmp83;
  const Scalar _tmp139 = _tmp128 * _tmp130;
  const Scalar _tmp140 = -_tmp115 + _tmp117 * _tmp139 - _tmp118 * _tmp80;
  const Scalar _tmp141 = _tmp104 * _tmp137 - _tmp122 * _tmp80;
  const Scalar _tmp142 = _tmp104 * _tmp131;
  const Scalar _tmp143 = _tmp130 * _tmp89;
  const Scalar _tmp144 = _tmp83 * (-_tmp128 * _tmp143 - _tmp80 * _tmp90 + _tmp82);
  const Scalar _tmp145 = -Scalar(1.0) * _tmp143 - Scalar(1.0) * _tmp144 + Scalar(1.0);
  const Scalar _tmp146 = _tmp105 * _tmp139 - _tmp106 * _tmp80 + _tmp99;
  const Scalar _tmp147 = Scalar(1.0) * _tmp113 * (_tmp105 * _tmp131 - _tmp133 * _tmp146) +
                         Scalar(1.0) * _tmp121 * (_tmp117 * _tmp131 - _tmp133 * _tmp140) +
                         Scalar(1.0) * _tmp123 * (-_tmp133 * _tmp141 + _tmp142) +
                         _tmp127 * _tmp135 + _tmp136 * _tmp138 + _tmp145 * _tmp41;
  const Scalar _tmp148 = std::asinh(_tmp125 * _tmp147);
  const Scalar _tmp149 = Scalar(9.6622558468725703) * _tmp124;
  const Scalar _tmp150 =
      -_tmp148 * _tmp149 - std::sqrt(Scalar(std::pow(Scalar(-_tmp38 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp40 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp151 = Scalar(0.1034955) * _tmp125;
  const Scalar _tmp152 = _tmp150 * _tmp151;
  const Scalar _tmp153 = Scalar(1.0) * _tmp148;
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp94;
  const Scalar _tmp155 = std::pow(_tmp124, Scalar(-2));
  const Scalar _tmp156 = _tmp155 * _tmp94;
  const Scalar _tmp157 = _tmp28 + _tmp64;
  const Scalar _tmp158 =
      (_tmp125 * (_tmp135 * _tmp157 + _tmp138 * _tmp19 - _tmp145) - _tmp147 * _tmp156) /
      std::sqrt(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp155 + 1));
  const Scalar _tmp159 = _tmp132 * _tmp83;
  const Scalar _tmp160 = _tmp131 * _tmp136;
  const Scalar _tmp161 = _tmp128 * _tmp83;
  const Scalar _tmp162 = _tmp113 * _tmp146 * _tmp83 + _tmp121 * _tmp140 * _tmp83 +
                         _tmp123 * _tmp141 * _tmp83 + _tmp127 * _tmp159 + _tmp144 * _tmp41 -
                         _tmp160 * _tmp161;
  const Scalar _tmp163 = _tmp41 * _tmp90;
  const Scalar _tmp164 = _tmp122 * _tmp123;
  const Scalar _tmp165 =
      _tmp107 * _tmp113 * _tmp78 + _tmp119 * _tmp121 * _tmp78 - _tmp163 * _tmp79 - _tmp164 * _tmp79;
  const Scalar _tmp166 = Scalar(1.0) / (_tmp165);
  const Scalar _tmp167 = std::asinh(_tmp162 * _tmp166);
  const Scalar _tmp168 = Scalar(1.0) * _tmp167;
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp165;
  const Scalar _tmp170 =
      -_tmp167 * _tmp169 - std::sqrt(Scalar(std::pow(Scalar(-_tmp66 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp69 + p_c(0, 0)), Scalar(2))));
  const Scalar _tmp171 = Scalar(0.1034955) * _tmp166;
  const Scalar _tmp172 = _tmp170 * _tmp171;
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp90;
  const Scalar _tmp174 = _tmp173 * _tmp79;
  const Scalar _tmp175 = std::pow(_tmp165, Scalar(-2));
  const Scalar _tmp176 = _tmp175 * _tmp79 * _tmp90;
  const Scalar _tmp177 = _tmp131 * _tmp19;
  const Scalar _tmp178 =
      (-_tmp162 * _tmp176 + _tmp166 * (-_tmp144 + _tmp157 * _tmp159 - _tmp161 * _tmp177)) /
      std::sqrt(Scalar(std::pow(_tmp162, Scalar(2)) * _tmp175 + 1));
  const Scalar _tmp179 = -_tmp105 * _tmp113 * _tmp130 - _tmp117 * _tmp121 * _tmp130 -
                         _tmp123 * _tmp142 - _tmp127 * _tmp134 + _tmp143 * _tmp41 + _tmp160;
  const Scalar _tmp180 = _tmp106 * _tmp113 + _tmp118 * _tmp121 + _tmp163 + _tmp164;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = std::asinh(_tmp179 * _tmp181);
  const Scalar _tmp183 = Scalar(1.0) * _tmp182;
  const Scalar _tmp184 = Scalar(9.6622558468725703) * _tmp180;
  const Scalar _tmp185 =
      -_tmp182 * _tmp184 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp186 = Scalar(0.1034955) * _tmp181;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp189 = _tmp188 * _tmp90;
  const Scalar _tmp190 = (_tmp179 * _tmp189 + _tmp181 * (-_tmp134 * _tmp157 - _tmp143 + _tmp177)) /
                         std::sqrt(Scalar(std::pow(_tmp179, Scalar(2)) * _tmp188 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp34 *
      (-_tmp35 * std::cosh(Scalar(1.0) * _tmp33) +
       _tmp35 * std::cosh(Scalar(0.1034955) * _tmp0 *
                          (-_tmp33 * _tmp34 -
                           std::sqrt(Scalar(std::pow(Scalar(-_tmp20 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp32 + p_a(1, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp149 * (-Scalar(1.0) * _tmp158 * std::cosh(_tmp153) -
                          (-Scalar(0.1034955) * _tmp150 * _tmp156 +
                           _tmp151 * (-_tmp148 * _tmp154 - _tmp149 * _tmp158)) *
                              std::cosh(_tmp152)) +
               _tmp154 * (-std::sinh(_tmp152) - std::sinh(_tmp153));
  _res(2, 0) = _tmp169 * (-Scalar(1.0) * _tmp178 * std::cosh(_tmp168) -
                          (-Scalar(0.1034955) * _tmp170 * _tmp176 +
                           _tmp171 * (-_tmp167 * _tmp174 - _tmp169 * _tmp178)) *
                              std::cosh(_tmp172)) +
               _tmp174 * (-std::sinh(_tmp168) - std::sinh(_tmp172));
  _res(3, 0) = -_tmp173 * (-std::sinh(_tmp183) - std::sinh(_tmp187)) +
               _tmp184 * (-Scalar(1.0) * _tmp190 * std::cosh(_tmp183) -
                          (Scalar(0.1034955) * _tmp185 * _tmp189 +
                           _tmp186 * (_tmp173 * _tmp182 - _tmp184 * _tmp190)) *
                              std::cosh(_tmp187));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
