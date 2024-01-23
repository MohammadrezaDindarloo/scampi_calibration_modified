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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl11
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     p_init0: Scalar
 *     p_init1: Scalar
 *     p_init2: Scalar
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 622

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (216)
  const Scalar _tmp0 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp6 = 2 * _tmp2;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp0 * _tmp5;
  const Scalar _tmp13 = _tmp2 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + p_init0;
  const Scalar _tmp18 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = _tmp0 * _tmp6;
  const Scalar _tmp22 = _tmp5 * _tmp8;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + p_init1;
  const Scalar _tmp29 = Scalar(1.0) / (fh1);
  const Scalar _tmp30 = _tmp29 * fv1;
  const Scalar _tmp31 = std::asinh(_tmp30);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * _tmp31;
  const Scalar _tmp33 =
      -_tmp32 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp17 + p_b(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp28 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp34 = Scalar(0.1034955) * _tmp29;
  const Scalar _tmp35 = _tmp33 * _tmp34;
  const Scalar _tmp36 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp36 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(1.0) * _tmp31;
  const Scalar _tmp39 = -_tmp4;
  const Scalar _tmp40 = _tmp11 + _tmp14;
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = _tmp41 + p_init0;
  const Scalar _tmp43 = _tmp24 - _tmp25;
  const Scalar _tmp44 = _tmp19 + _tmp43;
  const Scalar _tmp45 = _tmp44 + p_init1;
  const Scalar _tmp46 = _tmp28 - p_b(1, 0);
  const Scalar _tmp47 = _tmp17 - p_b(0, 0);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp47 * _tmp48;
  const Scalar _tmp50 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp51 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp18 + Scalar(-0.010999999999999999);
  const Scalar _tmp52 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp53 = _tmp51 - _tmp52;
  const Scalar _tmp54 = _tmp50 + _tmp53;
  const Scalar _tmp55 = _tmp54 * fh1;
  const Scalar _tmp56 = Scalar(3.29616) * _tmp10 + _tmp16 * fv1 + _tmp49 * _tmp55;
  const Scalar _tmp57 = Scalar(1.0) * _tmp41;
  const Scalar _tmp58 = _tmp15 + _tmp39;
  const Scalar _tmp59 = Scalar(1.0) * _tmp44;
  const Scalar _tmp60 = -_tmp59;
  const Scalar _tmp61 = _tmp20 + _tmp43;
  const Scalar _tmp62 = _tmp60 + _tmp61;
  const Scalar _tmp63 = _tmp19 + _tmp26;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp60 + _tmp63);
  const Scalar _tmp65 = _tmp4 + _tmp40;
  const Scalar _tmp66 = _tmp64 * (_tmp57 - _tmp65);
  const Scalar _tmp67 = _tmp62 * _tmp66;
  const Scalar _tmp68 = Scalar(1.0) / (_tmp57 - _tmp58 - _tmp67);
  const Scalar _tmp69 = Scalar(1.0) * _tmp68;
  const Scalar _tmp70 = _tmp62 * _tmp64;
  const Scalar _tmp71 = _tmp69 * _tmp70;
  const Scalar _tmp72 = -Scalar(1.0) * _tmp69 + Scalar(1.0) * _tmp71;
  const Scalar _tmp73 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp74 = -_tmp50;
  const Scalar _tmp75 = _tmp53 + _tmp74;
  const Scalar _tmp76 = _tmp58 + p_init0;
  const Scalar _tmp77 = _tmp76 - p_a(0, 0);
  const Scalar _tmp78 = _tmp61 + p_init1;
  const Scalar _tmp79 = _tmp78 - p_a(1, 0);
  const Scalar _tmp80 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp79, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp45 - p_d(1, 0);
  const Scalar _tmp83 = _tmp42 - p_d(0, 0);
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 = _tmp82 * _tmp84;
  const Scalar _tmp86 = _tmp51 + _tmp52;
  const Scalar _tmp87 = _tmp74 + _tmp86;
  const Scalar _tmp88 = _tmp77 * _tmp80;
  const Scalar _tmp89 = _tmp87 * _tmp88;
  const Scalar _tmp90 = _tmp50 + _tmp86;
  const Scalar _tmp91 = _tmp65 + p_init0;
  const Scalar _tmp92 = _tmp91 - p_c(0, 0);
  const Scalar _tmp93 = _tmp63 + p_init1;
  const Scalar _tmp94 = _tmp93 - p_c(1, 0);
  const Scalar _tmp95 = std::pow(Scalar(std::pow(_tmp92, Scalar(2)) + std::pow(_tmp94, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp96 = _tmp94 * _tmp95;
  const Scalar _tmp97 = _tmp92 * _tmp95;
  const Scalar _tmp98 = _tmp87 * _tmp97;
  const Scalar _tmp99 = -_tmp85 * _tmp98 + _tmp90 * _tmp96;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp85 * _tmp97 - _tmp96);
  const Scalar _tmp101 = -_tmp81 + _tmp85 * _tmp88;
  const Scalar _tmp102 = _tmp100 * _tmp101;
  const Scalar _tmp103 = -_tmp102 * _tmp99 + _tmp75 * _tmp81 - _tmp85 * _tmp89;
  const Scalar _tmp104 = -_tmp90 * _tmp97 + _tmp98;
  const Scalar _tmp105 = -_tmp102 * _tmp104 - _tmp103 * _tmp66 - _tmp75 * _tmp88 + _tmp89;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = _tmp57 + _tmp59 * _tmp66;
  const Scalar _tmp108 = 0;
  const Scalar _tmp109 = _tmp106 * _tmp108;
  const Scalar _tmp110 = _tmp107 * _tmp68;
  const Scalar _tmp111 = -_tmp103 * _tmp109 - _tmp110 * _tmp62 + _tmp60;
  const Scalar _tmp112 = Scalar(1.0) * _tmp64;
  const Scalar _tmp113 = _tmp46 * _tmp48;
  const Scalar _tmp114 = _tmp113 * _tmp16 - _tmp27 * _tmp49;
  const Scalar _tmp115 =
      std::sqrt(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp83, Scalar(2))));
  const Scalar _tmp116 = Scalar(1.0) / (_tmp115);
  const Scalar _tmp117 = _tmp115 * _tmp84;
  const Scalar _tmp118 = _tmp117 * (_tmp116 * _tmp41 * _tmp82 - _tmp116 * _tmp44 * _tmp83);
  const Scalar _tmp119 = _tmp118 * _tmp97 + _tmp63 * _tmp97 - _tmp65 * _tmp96;
  const Scalar _tmp120 = -_tmp102 * _tmp119 + _tmp118 * _tmp88 - _tmp58 * _tmp81 + _tmp61 * _tmp88;
  const Scalar _tmp121 = Scalar(1.0) / (_tmp120);
  const Scalar _tmp122 = Scalar(1.0) * _tmp121;
  const Scalar _tmp123 = _tmp105 * _tmp121;
  const Scalar _tmp124 = _tmp123 * _tmp69;
  const Scalar _tmp125 = _tmp64 * (-_tmp103 * _tmp122 + _tmp124 * _tmp62);
  const Scalar _tmp126 = Scalar(1.0) * _tmp114 * (_tmp124 - Scalar(1.0) * _tmp125);
  const Scalar _tmp127 = Scalar(1.0) * _tmp100;
  const Scalar _tmp128 = _tmp127 * _tmp99;
  const Scalar _tmp129 = -_tmp104 * _tmp127 + _tmp128 * _tmp66;
  const Scalar _tmp130 = _tmp106 * _tmp120;
  const Scalar _tmp131 = _tmp123 * (-_tmp119 * _tmp127 - _tmp129 * _tmp130);
  const Scalar _tmp132 = _tmp62 * _tmp68;
  const Scalar _tmp133 = _tmp129 + _tmp131;
  const Scalar _tmp134 = _tmp103 * _tmp106;
  const Scalar _tmp135 = -_tmp128 + _tmp131 * _tmp132 - _tmp133 * _tmp134;
  const Scalar _tmp136 = Scalar(1.0) * _tmp113 * (-_tmp112 * _tmp135 + _tmp131 * _tmp69);
  const Scalar _tmp137 = -_tmp113 * _tmp55 - Scalar(3.29616) * _tmp23 - _tmp27 * fv1;
  const Scalar _tmp138 = _tmp66 * _tmp69;
  const Scalar _tmp139 = _tmp64 * (_tmp67 * _tmp69 + Scalar(1.0));
  const Scalar _tmp140 = Scalar(1.0) * _tmp138 - Scalar(1.0) * _tmp139;
  const Scalar _tmp141 = _tmp100 * _tmp85;
  const Scalar _tmp142 = _tmp141 * _tmp99 + _tmp85 * _tmp87;
  const Scalar _tmp143 = _tmp104 * _tmp141 - _tmp142 * _tmp66 - _tmp87;
  const Scalar _tmp144 = _tmp123 * (-_tmp118 + _tmp119 * _tmp141 - _tmp130 * _tmp143);
  const Scalar _tmp145 = _tmp143 + _tmp144;
  const Scalar _tmp146 = _tmp132 * _tmp144 - _tmp134 * _tmp145 + _tmp142;
  const Scalar _tmp147 = Scalar(1.0) * _tmp49 * (-_tmp112 * _tmp146 + _tmp144 * _tmp69);
  const Scalar _tmp148 =
      _tmp126 * fh1 + _tmp136 * fh1 + _tmp137 * _tmp140 + _tmp147 * fh1 + _tmp56 * _tmp72 +
      Scalar(1.0) * _tmp73 * (-_tmp107 * _tmp69 - _tmp111 * _tmp112 + Scalar(1.0));
  const Scalar _tmp149 = _tmp100 * _tmp97;
  const Scalar _tmp150 = _tmp101 * _tmp106;
  const Scalar _tmp151 = _tmp108 * _tmp150;
  const Scalar _tmp152 = _tmp101 * _tmp121 * _tmp127;
  const Scalar _tmp153 = _tmp114 * _tmp117 * (_tmp122 * _tmp88 - _tmp152 * _tmp97);
  const Scalar _tmp154 = _tmp106 * _tmp133;
  const Scalar _tmp155 = -_tmp133 * _tmp150 + Scalar(1.0);
  const Scalar _tmp156 = _tmp113 * _tmp117 * (_tmp149 * _tmp155 + _tmp154 * _tmp88);
  const Scalar _tmp157 = _tmp106 * _tmp145;
  const Scalar _tmp158 = -_tmp145 * _tmp150 - _tmp85;
  const Scalar _tmp159 = _tmp117 * _tmp49 * (_tmp149 * _tmp158 + _tmp157 * _tmp88 + Scalar(1.0));
  const Scalar _tmp160 = -_tmp117 * _tmp73 * (_tmp109 * _tmp88 - _tmp149 * _tmp151) -
                         _tmp153 * fh1 - _tmp156 * fh1 - _tmp159 * fh1;
  const Scalar _tmp161 = Scalar(1.0) / (_tmp160);
  const Scalar _tmp162 = std::asinh(_tmp148 * _tmp161);
  const Scalar _tmp163 = Scalar(9.6622558468725703) * _tmp160;
  const Scalar _tmp164 =
      -_tmp162 * _tmp163 - std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp45 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp165 = Scalar(0.1034955) * _tmp161;
  const Scalar _tmp166 = _tmp164 * _tmp165;
  const Scalar _tmp167 = Scalar(1.0) * _tmp162;
  const Scalar _tmp168 = -_tmp153 - _tmp156 - _tmp159;
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp168;
  const Scalar _tmp170 = std::pow(_tmp160, Scalar(-2));
  const Scalar _tmp171 = _tmp168 * _tmp170;
  const Scalar _tmp172 = _tmp113 * _tmp54;
  const Scalar _tmp173 = _tmp49 * _tmp54;
  const Scalar _tmp174 = (-_tmp148 * _tmp171 + _tmp161 * (_tmp126 + _tmp136 - _tmp140 * _tmp172 +
                                                          _tmp147 + _tmp173 * _tmp72)) /
                         std::sqrt(Scalar(std::pow(_tmp148, Scalar(2)) * _tmp170 + 1));
  const Scalar _tmp175 = _tmp100 * _tmp113 * _tmp155;
  const Scalar _tmp176 = _tmp100 * _tmp158 * _tmp49;
  const Scalar _tmp177 = _tmp114 * _tmp152;
  const Scalar _tmp178 =
      -_tmp100 * _tmp151 * _tmp73 + _tmp175 * fh1 + _tmp176 * fh1 - _tmp177 * fh1;
  const Scalar _tmp179 = Scalar(1.0) / (_tmp178);
  const Scalar _tmp180 = _tmp113 * _tmp135 * _tmp64;
  const Scalar _tmp181 = _tmp146 * _tmp49 * _tmp64;
  const Scalar _tmp182 = _tmp56 * _tmp69;
  const Scalar _tmp183 = _tmp114 * _tmp125;
  const Scalar _tmp184 = _tmp111 * _tmp64 * _tmp73 + _tmp137 * _tmp139 + _tmp180 * fh1 +
                         _tmp181 * fh1 - _tmp182 * _tmp70 + _tmp183 * fh1;
  const Scalar _tmp185 = std::asinh(_tmp179 * _tmp184);
  const Scalar _tmp186 = Scalar(1.0) * _tmp185;
  const Scalar _tmp187 = std::pow(_tmp178, Scalar(-2));
  const Scalar _tmp188 = _tmp175 + _tmp176 - _tmp177;
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 =
      (_tmp179 * (-_tmp139 * _tmp172 - _tmp173 * _tmp71 + _tmp180 + _tmp181 + _tmp183) -
       _tmp184 * _tmp189) /
      std::sqrt(Scalar(std::pow(_tmp184, Scalar(2)) * _tmp187 + 1));
  const Scalar _tmp191 = Scalar(9.6622558468725703) * _tmp178;
  const Scalar _tmp192 =
      -_tmp185 * _tmp191 - std::sqrt(Scalar(std::pow(Scalar(-_tmp91 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp93 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp193 = Scalar(9.6622558468725703) * _tmp188;
  const Scalar _tmp194 = Scalar(0.1034955) * _tmp179;
  const Scalar _tmp195 = _tmp192 * _tmp194;
  const Scalar _tmp196 = _tmp157 * _tmp49;
  const Scalar _tmp197 = _tmp114 * _tmp122;
  const Scalar _tmp198 = _tmp113 * _tmp154;
  const Scalar _tmp199 = _tmp109 * _tmp73 + _tmp196 * fh1 + _tmp197 * fh1 + _tmp198 * fh1;
  const Scalar _tmp200 = Scalar(1.0) / (_tmp199);
  const Scalar _tmp201 = _tmp114 * _tmp124;
  const Scalar _tmp202 = _tmp144 * _tmp49 * _tmp68;
  const Scalar _tmp203 = _tmp113 * _tmp131 * _tmp68;
  const Scalar _tmp204 = _tmp110 * _tmp73 - _tmp137 * _tmp138 + _tmp182 - _tmp201 * fh1 -
                         _tmp202 * fh1 - _tmp203 * fh1;
  const Scalar _tmp205 = std::asinh(_tmp200 * _tmp204);
  const Scalar _tmp206 = Scalar(9.6622558468725703) * _tmp199;
  const Scalar _tmp207 =
      -_tmp205 * _tmp206 - std::sqrt(Scalar(std::pow(Scalar(-_tmp76 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp78 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp208 = Scalar(0.1034955) * _tmp200;
  const Scalar _tmp209 = _tmp207 * _tmp208;
  const Scalar _tmp210 = Scalar(1.0) * _tmp205;
  const Scalar _tmp211 = _tmp196 + _tmp197 + _tmp198;
  const Scalar _tmp212 = Scalar(9.6622558468725703) * _tmp211;
  const Scalar _tmp213 = std::pow(_tmp199, Scalar(-2));
  const Scalar _tmp214 = _tmp211 * _tmp213;
  const Scalar _tmp215 =
      (_tmp200 * (_tmp138 * _tmp172 + _tmp173 * _tmp69 - _tmp201 - _tmp202 - _tmp203) -
       _tmp204 * _tmp214) /
      std::sqrt(Scalar(std::pow(_tmp204, Scalar(2)) * _tmp213 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(9.6622558468725703) * fh1 *
                   (Scalar(1.0) * _tmp36 * _tmp37 * fv1 * std::cosh(_tmp38) -
                    (-Scalar(0.1034955) * _tmp33 * _tmp36 +
                     _tmp34 * (Scalar(9.6622558468725703) * _tmp30 * _tmp37 - _tmp32)) *
                        std::cosh(_tmp35)) -
               Scalar(9.6622558468725703) * std::sinh(_tmp35) -
               Scalar(9.6622558468725703) * std::sinh(_tmp38);
  _res(1, 0) = _tmp163 * (-Scalar(1.0) * _tmp174 * std::cosh(_tmp167) -
                          (-Scalar(0.1034955) * _tmp164 * _tmp171 +
                           _tmp165 * (-_tmp162 * _tmp169 - _tmp163 * _tmp174)) *
                              std::cosh(_tmp166)) +
               _tmp169 * (-std::sinh(_tmp166) - std::sinh(_tmp167));
  _res(2, 0) = _tmp191 * (-Scalar(1.0) * _tmp190 * std::cosh(_tmp186) -
                          (-Scalar(0.1034955) * _tmp189 * _tmp192 +
                           _tmp194 * (-_tmp185 * _tmp193 - _tmp190 * _tmp191)) *
                              std::cosh(_tmp195)) +
               _tmp193 * (-std::sinh(_tmp186) - std::sinh(_tmp195));
  _res(3, 0) = _tmp206 * (-Scalar(1.0) * _tmp215 * std::cosh(_tmp210) -
                          (-Scalar(0.1034955) * _tmp207 * _tmp214 +
                           _tmp208 * (-_tmp205 * _tmp212 - _tmp206 * _tmp215)) *
                              std::cosh(_tmp209)) +
               _tmp212 * (-std::sinh(_tmp209) - std::sinh(_tmp210));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
