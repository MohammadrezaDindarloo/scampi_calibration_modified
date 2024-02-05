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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl5
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 618

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (210)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * fv1;
  const Scalar _tmp2 = std::asinh(_tmp1);
  const Scalar _tmp3 = Scalar(9.6622558468725703) * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp5 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp7 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                        _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp11 = 2 * _tmp10 * _tmp6;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp13 = _tmp12 * _tmp4;
  const Scalar _tmp14 = _tmp11 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = 2 * _tmp4;
  const Scalar _tmp17 = _tmp10 * _tmp16;
  const Scalar _tmp18 = _tmp12 * _tmp6;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp15 - _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp9;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = _tmp16 * _tmp6;
  const Scalar _tmp26 = _tmp10 * _tmp12;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -2 * std::pow(_tmp10, Scalar(2));
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp29 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp31 = _tmp28 - _tmp30;
  const Scalar _tmp32 = _tmp24 + _tmp31;
  const Scalar _tmp33 = _tmp32 + p_init1;
  const Scalar _tmp34 =
      -_tmp3 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_a(0, 0)), Scalar(2)) +
                                      std::pow(Scalar(-_tmp33 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(1.0) * _tmp2;
  const Scalar _tmp40 = _tmp15 + _tmp19;
  const Scalar _tmp41 = _tmp40 + _tmp9;
  const Scalar _tmp42 = _tmp41 + p_init0;
  const Scalar _tmp43 = _tmp28 + _tmp30;
  const Scalar _tmp44 = _tmp24 + _tmp43;
  const Scalar _tmp45 = _tmp44 + p_init1;
  const Scalar _tmp46 = _tmp22 - p_a(0, 0);
  const Scalar _tmp47 = _tmp33 - p_a(1, 0);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp47 * _tmp48;
  const Scalar _tmp50 = _tmp46 * _tmp48;
  const Scalar _tmp51 = _tmp21 * _tmp49 - _tmp32 * _tmp50;
  const Scalar _tmp52 = _tmp23 + _tmp31;
  const Scalar _tmp53 = _tmp52 + p_init1;
  const Scalar _tmp54 = _tmp53 - p_b(1, 0);
  const Scalar _tmp55 = _tmp20 + _tmp8;
  const Scalar _tmp56 = _tmp55 + p_init0;
  const Scalar _tmp57 = _tmp56 - p_b(0, 0);
  const Scalar _tmp58 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp57, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp59 = _tmp57 * _tmp58;
  const Scalar _tmp60 = _tmp45 - p_d(1, 0);
  const Scalar _tmp61 = _tmp42 - p_d(0, 0);
  const Scalar _tmp62 =
      std::sqrt(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp65 = _tmp62 * _tmp64;
  const Scalar _tmp66 = _tmp65 * (_tmp41 * _tmp60 * _tmp63 - _tmp44 * _tmp61 * _tmp63);
  const Scalar _tmp67 = _tmp54 * _tmp58;
  const Scalar _tmp68 = _tmp40 + _tmp8;
  const Scalar _tmp69 = _tmp68 + p_init0;
  const Scalar _tmp70 = _tmp69 - p_c(0, 0);
  const Scalar _tmp71 = _tmp23 + _tmp43;
  const Scalar _tmp72 = _tmp71 + p_init1;
  const Scalar _tmp73 = _tmp72 - p_c(1, 0);
  const Scalar _tmp74 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp73, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = _tmp70 * _tmp74;
  const Scalar _tmp77 = _tmp66 * _tmp76 - _tmp68 * _tmp75 + _tmp71 * _tmp76;
  const Scalar _tmp78 = _tmp60 * _tmp64;
  const Scalar _tmp79 = _tmp59 * _tmp78 - _tmp67;
  const Scalar _tmp80 = Scalar(1.0) / (-_tmp75 + _tmp76 * _tmp78);
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp52 * _tmp59 - _tmp55 * _tmp67 + _tmp59 * _tmp66 - _tmp77 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp83;
  const Scalar _tmp85 = _tmp76 * _tmp81;
  const Scalar _tmp86 = _tmp51 * _tmp65 * (_tmp59 * _tmp84 - _tmp84 * _tmp85);
  const Scalar _tmp87 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp88 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp89 = -Scalar(0.010999999999999999) * _tmp29 -
                        Scalar(0.010999999999999999) * _tmp5 + Scalar(-0.010999999999999999);
  const Scalar _tmp90 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp91 = _tmp89 - _tmp90;
  const Scalar _tmp92 = _tmp88 + _tmp91;
  const Scalar _tmp93 = _tmp59 * _tmp92;
  const Scalar _tmp94 = -_tmp88;
  const Scalar _tmp95 = _tmp89 + _tmp90;
  const Scalar _tmp96 = _tmp94 + _tmp95;
  const Scalar _tmp97 = _tmp88 + _tmp95;
  const Scalar _tmp98 = _tmp76 * _tmp92;
  const Scalar _tmp99 = _tmp75 * _tmp97 - _tmp78 * _tmp98;
  const Scalar _tmp100 = _tmp67 * _tmp96 - _tmp78 * _tmp93 - _tmp81 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) * _tmp44;
  const Scalar _tmp102 = -_tmp101;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp102 + _tmp71);
  const Scalar _tmp104 = Scalar(1.0) * _tmp41;
  const Scalar _tmp105 = _tmp103 * (_tmp104 - _tmp68);
  const Scalar _tmp106 = -_tmp76 * _tmp97 + _tmp98;
  const Scalar _tmp107 = -_tmp100 * _tmp105 - _tmp106 * _tmp81 - _tmp59 * _tmp96 + _tmp93;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = _tmp101 * _tmp105 + _tmp104;
  const Scalar _tmp110 = 0;
  const Scalar _tmp111 = Scalar(1.0) * _tmp80;
  const Scalar _tmp112 = _tmp111 * _tmp99;
  const Scalar _tmp113 = _tmp105 * _tmp112 - _tmp106 * _tmp111;
  const Scalar _tmp114 = _tmp108 * _tmp82;
  const Scalar _tmp115 = _tmp107 * _tmp83;
  const Scalar _tmp116 = _tmp115 * (-_tmp111 * _tmp77 - _tmp113 * _tmp114);
  const Scalar _tmp117 = _tmp108 * (_tmp113 + _tmp116);
  const Scalar _tmp118 = _tmp80 * (-_tmp117 * _tmp79 + Scalar(1.0));
  const Scalar _tmp119 = _tmp49 * _tmp65 * (_tmp117 * _tmp59 + _tmp118 * _tmp76);
  const Scalar _tmp120 = _tmp78 * _tmp80;
  const Scalar _tmp121 = _tmp120 * _tmp99 + _tmp78 * _tmp92;
  const Scalar _tmp122 = -_tmp105 * _tmp121 + _tmp106 * _tmp120 - _tmp92;
  const Scalar _tmp123 = _tmp115 * (-_tmp114 * _tmp122 + _tmp120 * _tmp77 - _tmp66);
  const Scalar _tmp124 = _tmp108 * (_tmp122 + _tmp123);
  const Scalar _tmp125 = _tmp80 * (-_tmp124 * _tmp79 - _tmp78);
  const Scalar _tmp126 = _tmp50 * _tmp65 * (_tmp124 * _tmp59 + _tmp125 * _tmp76 + Scalar(1.0));
  const Scalar _tmp127 = -_tmp119 * fh1 - _tmp126 * fh1 -
                         _tmp65 * _tmp87 * (_tmp110 * _tmp59 - _tmp110 * _tmp85) - _tmp86 * fh1;
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp102 + _tmp52;
  const Scalar _tmp130 = _tmp105 * _tmp129;
  const Scalar _tmp131 = Scalar(1.0) / (_tmp104 - _tmp130 - _tmp55);
  const Scalar _tmp132 = _tmp109 * _tmp131;
  const Scalar _tmp133 = _tmp103 * (-_tmp100 * _tmp110 + _tmp102 - _tmp129 * _tmp132);
  const Scalar _tmp134 = Scalar(1.0) * _tmp131;
  const Scalar _tmp135 = _tmp129 * _tmp131;
  const Scalar _tmp136 = -_tmp100 * _tmp124 + _tmp121 + _tmp123 * _tmp135;
  const Scalar _tmp137 = Scalar(1.0) * _tmp103;
  const Scalar _tmp138 = Scalar(1.0) * _tmp50 * (_tmp123 * _tmp134 - _tmp136 * _tmp137);
  const Scalar _tmp139 = _tmp115 * _tmp134;
  const Scalar _tmp140 = -_tmp100 * _tmp84 + _tmp129 * _tmp139;
  const Scalar _tmp141 = Scalar(1.0) * _tmp51 * (-_tmp137 * _tmp140 + _tmp139);
  const Scalar _tmp142 = _tmp91 + _tmp94;
  const Scalar _tmp143 = _tmp142 * fh1;
  const Scalar _tmp144 = -_tmp143 * _tmp49 - Scalar(5.1796800000000003) * _tmp27 - _tmp32 * fv1;
  const Scalar _tmp145 = _tmp103 * (_tmp130 * _tmp134 + Scalar(1.0));
  const Scalar _tmp146 = _tmp105 * _tmp134;
  const Scalar _tmp147 = -Scalar(1.0) * _tmp145 + Scalar(1.0) * _tmp146;
  const Scalar _tmp148 = Scalar(5.1796800000000003) * _tmp14 + _tmp143 * _tmp50 + _tmp21 * fv1;
  const Scalar _tmp149 = _tmp103 * _tmp129;
  const Scalar _tmp150 = Scalar(1.0) * _tmp134 * _tmp149 - Scalar(1.0) * _tmp134;
  const Scalar _tmp151 = -_tmp100 * _tmp117 - _tmp112 + _tmp116 * _tmp135;
  const Scalar _tmp152 = Scalar(1.0) * _tmp49 * (_tmp116 * _tmp134 - _tmp137 * _tmp151);
  const Scalar _tmp153 =
      _tmp138 * fh1 + _tmp141 * fh1 + _tmp144 * _tmp147 + _tmp148 * _tmp150 + _tmp152 * fh1 +
      Scalar(1.0) * _tmp87 * (-_tmp109 * _tmp134 - Scalar(1.0) * _tmp133 + Scalar(1.0));
  const Scalar _tmp154 = std::asinh(_tmp128 * _tmp153);
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp154;
  const Scalar _tmp156 =
      -_tmp127 * _tmp155 - std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp45 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp157 = Scalar(0.1034955) * _tmp128;
  const Scalar _tmp158 = _tmp156 * _tmp157;
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp160 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp161 = -_tmp119 - _tmp126 - _tmp86;
  const Scalar _tmp162 = _tmp160 * _tmp161;
  const Scalar _tmp163 = _tmp142 * _tmp50;
  const Scalar _tmp164 = _tmp142 * _tmp49;
  const Scalar _tmp165 =
      (_tmp128 * (_tmp138 + _tmp141 - _tmp147 * _tmp164 + _tmp150 * _tmp163 + _tmp152) -
       _tmp153 * _tmp162) /
      std::sqrt(Scalar(std::pow(_tmp153, Scalar(2)) * _tmp160 + 1));
  const Scalar _tmp166 = Scalar(1.0) * _tmp154;
  const Scalar _tmp167 = _tmp110 * _tmp87;
  const Scalar _tmp168 = _tmp125 * _tmp50;
  const Scalar _tmp169 = _tmp118 * _tmp49;
  const Scalar _tmp170 = _tmp51 * _tmp84;
  const Scalar _tmp171 = _tmp170 * fh1;
  const Scalar _tmp172 = -_tmp167 * _tmp81 + _tmp168 * fh1 + _tmp169 * fh1 - _tmp171 * _tmp81;
  const Scalar _tmp173 = Scalar(1.0) / (_tmp172);
  const Scalar _tmp174 = _tmp103 * _tmp50;
  const Scalar _tmp175 = _tmp136 * _tmp174;
  const Scalar _tmp176 = _tmp103 * _tmp140 * _tmp51;
  const Scalar _tmp177 = _tmp134 * _tmp148;
  const Scalar _tmp178 = _tmp103 * _tmp151 * _tmp49;
  const Scalar _tmp179 = _tmp133 * _tmp87 + _tmp144 * _tmp145 - _tmp149 * _tmp177 + _tmp175 * fh1 +
                         _tmp176 * fh1 + _tmp178 * fh1;
  const Scalar _tmp180 = std::asinh(_tmp173 * _tmp179);
  const Scalar _tmp181 = Scalar(9.6622558468725703) * _tmp172;
  const Scalar _tmp182 =
      -_tmp180 * _tmp181 - std::sqrt(Scalar(std::pow(Scalar(-_tmp69 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp72 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp183 = Scalar(0.1034955) * _tmp173;
  const Scalar _tmp184 = _tmp182 * _tmp183;
  const Scalar _tmp185 = Scalar(1.0) * _tmp180;
  const Scalar _tmp186 = _tmp168 + _tmp169 - _tmp170 * _tmp81;
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp186;
  const Scalar _tmp188 = std::pow(_tmp172, Scalar(-2));
  const Scalar _tmp189 = _tmp186 * _tmp188;
  const Scalar _tmp190 = (_tmp173 * (-_tmp129 * _tmp134 * _tmp142 * _tmp174 - _tmp145 * _tmp164 +
                                     _tmp175 + _tmp176 + _tmp178) -
                          _tmp179 * _tmp189) /
                         std::sqrt(Scalar(std::pow(_tmp179, Scalar(2)) * _tmp188 + 1));
  const Scalar _tmp191 = _tmp117 * _tmp49;
  const Scalar _tmp192 = _tmp124 * _tmp50;
  const Scalar _tmp193 = _tmp167 + _tmp171 + _tmp191 * fh1 + _tmp192 * fh1;
  const Scalar _tmp194 = Scalar(1.0) / (_tmp193);
  const Scalar _tmp195 = _tmp123 * _tmp131 * _tmp50;
  const Scalar _tmp196 = _tmp139 * _tmp51;
  const Scalar _tmp197 = _tmp116 * _tmp131 * _tmp49;
  const Scalar _tmp198 = _tmp132 * _tmp87 - _tmp144 * _tmp146 + _tmp177 - _tmp195 * fh1 -
                         _tmp196 * fh1 - _tmp197 * fh1;
  const Scalar _tmp199 = std::asinh(_tmp194 * _tmp198);
  const Scalar _tmp200 = Scalar(9.6622558468725703) * _tmp193;
  const Scalar _tmp201 =
      -_tmp199 * _tmp200 - std::sqrt(Scalar(std::pow(Scalar(-_tmp53 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp56 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp202 = Scalar(0.1034955) * _tmp194;
  const Scalar _tmp203 = _tmp201 * _tmp202;
  const Scalar _tmp204 = Scalar(1.0) * _tmp199;
  const Scalar _tmp205 = _tmp170 + _tmp191 + _tmp192;
  const Scalar _tmp206 = Scalar(9.6622558468725703) * _tmp205;
  const Scalar _tmp207 = std::pow(_tmp193, Scalar(-2));
  const Scalar _tmp208 = _tmp205 * _tmp207;
  const Scalar _tmp209 =
      (_tmp194 * (_tmp134 * _tmp163 + _tmp146 * _tmp164 - _tmp195 - _tmp196 - _tmp197) -
       _tmp198 * _tmp208) /
      std::sqrt(Scalar(std::pow(_tmp198, Scalar(2)) * _tmp207 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(9.6622558468725703) * fh1 *
                   (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp39) -
                    (-Scalar(0.1034955) * _tmp34 * _tmp37 +
                     _tmp35 * (Scalar(9.6622558468725703) * _tmp1 * _tmp38 - _tmp3)) *
                        std::cosh(_tmp36)) -
               Scalar(9.6622558468725703) * std::sinh(_tmp36) -
               Scalar(9.6622558468725703) * std::sinh(_tmp39);
  _res(1, 0) = _tmp159 * (-Scalar(1.0) * _tmp165 * std::cosh(_tmp166) -
                          (-Scalar(0.1034955) * _tmp156 * _tmp162 +
                           _tmp157 * (-_tmp155 * _tmp161 - _tmp159 * _tmp165)) *
                              std::cosh(_tmp158)) +
               Scalar(9.6622558468725703) * _tmp161 * (-std::sinh(_tmp158) - std::sinh(_tmp166));
  _res(2, 0) = _tmp181 * (-Scalar(1.0) * _tmp190 * std::cosh(_tmp185) -
                          (-Scalar(0.1034955) * _tmp182 * _tmp189 +
                           _tmp183 * (-_tmp180 * _tmp187 - _tmp181 * _tmp190)) *
                              std::cosh(_tmp184)) +
               _tmp187 * (-std::sinh(_tmp184) - std::sinh(_tmp185));
  _res(3, 0) = _tmp200 * (-Scalar(1.0) * _tmp209 * std::cosh(_tmp204) -
                          (-Scalar(0.1034955) * _tmp201 * _tmp208 +
                           _tmp202 * (-_tmp199 * _tmp206 - _tmp200 * _tmp209)) *
                              std::cosh(_tmp203)) +
               _tmp206 * (-std::sinh(_tmp203) - std::sinh(_tmp204));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym