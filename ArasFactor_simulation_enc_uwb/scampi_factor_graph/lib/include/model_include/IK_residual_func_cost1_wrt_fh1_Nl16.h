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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl16
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl16(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 639

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (221)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * fv1;
  const Scalar _tmp2 = std::asinh(_tmp1);
  const Scalar _tmp3 = Scalar(1.0) * _tmp2;
  const Scalar _tmp4 = Scalar(9.6622558468725703) * _tmp2;
  const Scalar _tmp5 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp6 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp7 = 2 * _tmp5 * _tmp6;
  const Scalar _tmp8 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp12 = 2 * _tmp8;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp5 * _tmp9;
  const Scalar _tmp15 = _tmp13 + _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp18 = 1 - 2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 + _tmp19;
  const Scalar _tmp21 = _tmp11 + _tmp20;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp12 * _tmp5;
  const Scalar _tmp26 = _tmp6 * _tmp9;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1;
  const Scalar _tmp33 =
      -_tmp4 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_c(0, 0)), Scalar(2)) +
                                      std::pow(Scalar(-_tmp32 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp34 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp35 = _tmp33 * _tmp34;
  const Scalar _tmp36 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp36 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(0.1034955) * p_c(2, 0);
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp40 = -Scalar(0.010999999999999999) * _tmp17 -
                        Scalar(0.010999999999999999) * _tmp23 + Scalar(-0.010999999999999999);
  const Scalar _tmp41 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp42 = _tmp40 - _tmp41;
  const Scalar _tmp43 = _tmp39 + _tmp42;
  const Scalar _tmp44 = -_tmp11;
  const Scalar _tmp45 = _tmp16 - _tmp19;
  const Scalar _tmp46 = _tmp44 + _tmp45;
  const Scalar _tmp47 = _tmp46 + p_init0;
  const Scalar _tmp48 = _tmp47 - p_a(0, 0);
  const Scalar _tmp49 = -_tmp24;
  const Scalar _tmp50 = _tmp28 - _tmp29;
  const Scalar _tmp51 = _tmp49 + _tmp50;
  const Scalar _tmp52 = _tmp51 + p_init1;
  const Scalar _tmp53 = _tmp52 - p_a(1, 0);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp48 * _tmp54;
  const Scalar _tmp56 = _tmp43 * _tmp55;
  const Scalar _tmp57 = -_tmp39;
  const Scalar _tmp58 = _tmp42 + _tmp57;
  const Scalar _tmp59 = -_tmp55 * _tmp58 + _tmp56;
  const Scalar _tmp60 = _tmp24 + _tmp50;
  const Scalar _tmp61 = _tmp60 + p_init1;
  const Scalar _tmp62 = _tmp61 - p_d(1, 0);
  const Scalar _tmp63 = _tmp11 + _tmp45;
  const Scalar _tmp64 = _tmp63 + p_init0;
  const Scalar _tmp65 = _tmp64 - p_d(0, 0);
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp62 * _tmp66;
  const Scalar _tmp68 = _tmp53 * _tmp54;
  const Scalar _tmp69 = Scalar(1.0) / (_tmp55 * _tmp67 - _tmp68);
  const Scalar _tmp70 = Scalar(1.0) * _tmp69;
  const Scalar _tmp71 = Scalar(1.0) * _tmp63;
  const Scalar _tmp72 = -_tmp46 + _tmp71;
  const Scalar _tmp73 = -_tmp56 * _tmp67 + _tmp58 * _tmp68;
  const Scalar _tmp74 = Scalar(1.0) * _tmp60;
  const Scalar _tmp75 = -_tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp51 + _tmp75);
  const Scalar _tmp77 = Scalar(1.0) * _tmp76;
  const Scalar _tmp78 = -_tmp59 * _tmp70 + _tmp69 * _tmp72 * _tmp73 * _tmp77;
  const Scalar _tmp79 = _tmp30 + _tmp49;
  const Scalar _tmp80 = _tmp79 + p_init1;
  const Scalar _tmp81 = _tmp80 - p_b(1, 0);
  const Scalar _tmp82 = _tmp20 + _tmp44;
  const Scalar _tmp83 = _tmp82 + p_init0;
  const Scalar _tmp84 = _tmp83 - p_b(0, 0);
  const Scalar _tmp85 = std::pow(Scalar(std::pow(_tmp81, Scalar(2)) + std::pow(_tmp84, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp84 * _tmp85;
  const Scalar _tmp87 = _tmp81 * _tmp85;
  const Scalar _tmp88 = _tmp67 * _tmp86 - _tmp87;
  const Scalar _tmp89 = _tmp69 * _tmp88;
  const Scalar _tmp90 = _tmp40 + _tmp41;
  const Scalar _tmp91 = _tmp57 + _tmp90;
  const Scalar _tmp92 = _tmp43 * _tmp67;
  const Scalar _tmp93 = -_tmp73 * _tmp89 - _tmp86 * _tmp92 + _tmp87 * _tmp91;
  const Scalar _tmp94 = _tmp72 * _tmp76;
  const Scalar _tmp95 = _tmp43 * _tmp86 - _tmp59 * _tmp89 - _tmp86 * _tmp91 - _tmp93 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 =
      std::sqrt(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp65, Scalar(2))));
  const Scalar _tmp98 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp99 = _tmp66 * _tmp97;
  const Scalar _tmp100 = _tmp99 * (-_tmp60 * _tmp65 * _tmp98 + _tmp62 * _tmp63 * _tmp98);
  const Scalar _tmp101 = _tmp100 * _tmp55 - _tmp46 * _tmp68 + _tmp51 * _tmp55;
  const Scalar _tmp102 = _tmp100 * _tmp86 - _tmp101 * _tmp89 + _tmp79 * _tmp86 - _tmp82 * _tmp87;
  const Scalar _tmp103 = _tmp102 * _tmp96;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp105 = _tmp104 * _tmp95;
  const Scalar _tmp106 = _tmp105 * (-_tmp101 * _tmp70 - _tmp103 * _tmp78);
  const Scalar _tmp107 = _tmp75 + _tmp79;
  const Scalar _tmp108 = _tmp107 * _tmp94;
  const Scalar _tmp109 = Scalar(1.0) / (-_tmp108 + _tmp71 - _tmp82);
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp106 + _tmp78;
  const Scalar _tmp112 = _tmp93 * _tmp96;
  const Scalar _tmp113 = _tmp106 * _tmp110 - _tmp111 * _tmp112 - _tmp70 * _tmp73;
  const Scalar _tmp114 = Scalar(1.0) * _tmp109;
  const Scalar _tmp115 = _tmp22 - p_c(0, 0);
  const Scalar _tmp116 = _tmp32 - p_c(1, 0);
  const Scalar _tmp117 =
      std::pow(Scalar(std::pow(_tmp115, Scalar(2)) + std::pow(_tmp116, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp118 = _tmp116 * _tmp117;
  const Scalar _tmp119 = Scalar(1.0) * _tmp118 * (_tmp106 * _tmp114 - _tmp113 * _tmp77);
  const Scalar _tmp120 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp121 = _tmp71 + _tmp74 * _tmp94;
  const Scalar _tmp122 = _tmp109 * _tmp121;
  const Scalar _tmp123 = 0;
  const Scalar _tmp124 = -_tmp107 * _tmp122 - _tmp112 * _tmp123 + _tmp75;
  const Scalar _tmp125 = _tmp39 + _tmp90;
  const Scalar _tmp126 = _tmp125 * fh1;
  const Scalar _tmp127 = -_tmp118 * _tmp126 - Scalar(3.29616) * _tmp27 - _tmp31 * fv1;
  const Scalar _tmp128 = _tmp108 * _tmp114 + Scalar(1.0);
  const Scalar _tmp129 = _tmp114 * _tmp94;
  const Scalar _tmp130 = -Scalar(1.0) * _tmp128 * _tmp77 + Scalar(1.0) * _tmp129;
  const Scalar _tmp131 = _tmp67 * _tmp69;
  const Scalar _tmp132 = _tmp131 * _tmp73 + _tmp92;
  const Scalar _tmp133 = _tmp131 * _tmp59 - _tmp132 * _tmp94 - _tmp43;
  const Scalar _tmp134 = _tmp105 * (-_tmp100 + _tmp101 * _tmp131 - _tmp103 * _tmp133);
  const Scalar _tmp135 = _tmp133 + _tmp134;
  const Scalar _tmp136 = _tmp110 * _tmp134 - _tmp112 * _tmp135 + _tmp132;
  const Scalar _tmp137 = _tmp115 * _tmp117;
  const Scalar _tmp138 = Scalar(1.0) * _tmp137 * (_tmp114 * _tmp134 - _tmp136 * _tmp77);
  const Scalar _tmp139 = _tmp126 * _tmp137 + Scalar(3.29616) * _tmp15 + _tmp21 * fv1;
  const Scalar _tmp140 = _tmp107 * _tmp76;
  const Scalar _tmp141 = _tmp114 * _tmp140;
  const Scalar _tmp142 = -Scalar(1.0) * _tmp114 + Scalar(1.0) * _tmp141;
  const Scalar _tmp143 = _tmp105 * _tmp114;
  const Scalar _tmp144 = Scalar(1.0) * _tmp104;
  const Scalar _tmp145 = _tmp107 * _tmp143 - _tmp144 * _tmp93;
  const Scalar _tmp146 = _tmp118 * _tmp21 - _tmp137 * _tmp31;
  const Scalar _tmp147 = Scalar(1.0) * _tmp146;
  const Scalar _tmp148 = _tmp147 * (_tmp143 - _tmp145 * _tmp77);
  const Scalar _tmp149 =
      _tmp119 * fh1 +
      Scalar(1.0) * _tmp120 * (-_tmp114 * _tmp121 - _tmp124 * _tmp77 + Scalar(1.0)) +
      _tmp127 * _tmp130 + _tmp138 * fh1 + _tmp139 * _tmp142 + _tmp148 * fh1;
  const Scalar _tmp150 = _tmp135 * _tmp96;
  const Scalar _tmp151 = _tmp88 * _tmp96;
  const Scalar _tmp152 = _tmp69 * (-_tmp135 * _tmp151 - _tmp67);
  const Scalar _tmp153 = _tmp137 * _tmp99 * (_tmp150 * _tmp86 + _tmp152 * _tmp55 + Scalar(1.0));
  const Scalar _tmp154 = _tmp104 * _tmp70 * _tmp88;
  const Scalar _tmp155 = _tmp146 * _tmp99 * (_tmp144 * _tmp86 - _tmp154 * _tmp55);
  const Scalar _tmp156 = _tmp111 * _tmp96;
  const Scalar _tmp157 = _tmp69 * (-_tmp111 * _tmp151 + Scalar(1.0));
  const Scalar _tmp158 = _tmp118 * _tmp99 * (_tmp156 * _tmp86 + _tmp157 * _tmp55);
  const Scalar _tmp159 = _tmp123 * _tmp96;
  const Scalar _tmp160 = -_tmp120 * _tmp99 * (-_tmp159 * _tmp55 * _tmp89 + _tmp159 * _tmp86) -
                         _tmp153 * fh1 - _tmp155 * fh1 - _tmp158 * fh1;
  const Scalar _tmp161 = Scalar(1.0) / (_tmp160);
  const Scalar _tmp162 = std::asinh(_tmp149 * _tmp161);
  const Scalar _tmp163 = Scalar(1.0) * _tmp162;
  const Scalar _tmp164 = Scalar(9.6622558468725703) * _tmp160;
  const Scalar _tmp165 =
      -_tmp162 * _tmp164 - std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp64 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp166 = Scalar(0.1034955) * _tmp161;
  const Scalar _tmp167 = _tmp165 * _tmp166;
  const Scalar _tmp168 = -_tmp153 - _tmp155 - _tmp158;
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp168;
  const Scalar _tmp170 = std::pow(_tmp160, Scalar(-2));
  const Scalar _tmp171 = _tmp168 * _tmp170;
  const Scalar _tmp172 = Scalar(0.1034955) * _tmp171;
  const Scalar _tmp173 = _tmp118 * _tmp125;
  const Scalar _tmp174 = _tmp125 * _tmp137;
  const Scalar _tmp175 = (-_tmp149 * _tmp171 + _tmp161 * (_tmp119 - _tmp130 * _tmp173 + _tmp138 +
                                                          _tmp142 * _tmp174 + _tmp148)) /
                         std::sqrt(Scalar(std::pow(_tmp149, Scalar(2)) * _tmp170 + 1));
  const Scalar _tmp176 = _tmp113 * _tmp118 * _tmp76;
  const Scalar _tmp177 = _tmp145 * _tmp146 * _tmp76;
  const Scalar _tmp178 = _tmp136 * _tmp137 * _tmp76;
  const Scalar _tmp179 = _tmp128 * _tmp76;
  const Scalar _tmp180 = _tmp114 * _tmp139;
  const Scalar _tmp181 = _tmp120 * _tmp124 * _tmp76 + _tmp127 * _tmp179 - _tmp140 * _tmp180 +
                         _tmp176 * fh1 + _tmp177 * fh1 + _tmp178 * fh1;
  const Scalar _tmp182 = _tmp137 * _tmp152;
  const Scalar _tmp183 = _tmp118 * _tmp157;
  const Scalar _tmp184 = _tmp120 * _tmp159;
  const Scalar _tmp185 = _tmp146 * _tmp154;
  const Scalar _tmp186 = _tmp182 * fh1 + _tmp183 * fh1 - _tmp184 * _tmp89 - _tmp185 * fh1;
  const Scalar _tmp187 = Scalar(1.0) / (_tmp186);
  const Scalar _tmp188 = std::asinh(_tmp181 * _tmp187);
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp186;
  const Scalar _tmp190 =
      -_tmp188 * _tmp189 - std::sqrt(Scalar(std::pow(Scalar(-_tmp47 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp52 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp191 = Scalar(0.1034955) * _tmp187;
  const Scalar _tmp192 = _tmp190 * _tmp191;
  const Scalar _tmp193 = _tmp182 + _tmp183 - _tmp185;
  const Scalar _tmp194 = Scalar(9.6622558468725703) * _tmp193;
  const Scalar _tmp195 = std::pow(_tmp186, Scalar(-2));
  const Scalar _tmp196 = _tmp193 * _tmp195;
  const Scalar _tmp197 = (-_tmp181 * _tmp196 + _tmp187 * (-_tmp141 * _tmp174 - _tmp173 * _tmp179 +
                                                          _tmp176 + _tmp177 + _tmp178)) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp195 + 1));
  const Scalar _tmp198 = Scalar(0.1034955) * _tmp196;
  const Scalar _tmp199 = Scalar(1.0) * _tmp188;
  const Scalar _tmp200 = _tmp137 * _tmp150;
  const Scalar _tmp201 = _tmp118 * _tmp156;
  const Scalar _tmp202 = _tmp104 * _tmp147;
  const Scalar _tmp203 = _tmp184 + _tmp200 * fh1 + _tmp201 * fh1 + _tmp202 * fh1;
  const Scalar _tmp204 = Scalar(1.0) / (_tmp203);
  const Scalar _tmp205 = _tmp109 * _tmp134 * _tmp137;
  const Scalar _tmp206 = _tmp143 * _tmp146;
  const Scalar _tmp207 = _tmp106 * _tmp109 * _tmp118;
  const Scalar _tmp208 = _tmp120 * _tmp122 - _tmp127 * _tmp129 + _tmp180 - _tmp205 * fh1 -
                         _tmp206 * fh1 - _tmp207 * fh1;
  const Scalar _tmp209 = std::asinh(_tmp204 * _tmp208);
  const Scalar _tmp210 = Scalar(1.0) * _tmp209;
  const Scalar _tmp211 = std::pow(_tmp203, Scalar(-2));
  const Scalar _tmp212 = _tmp200 + _tmp201 + _tmp202;
  const Scalar _tmp213 = _tmp211 * _tmp212;
  const Scalar _tmp214 =
      (_tmp204 * (_tmp114 * _tmp174 + _tmp129 * _tmp173 - _tmp205 - _tmp206 - _tmp207) -
       _tmp208 * _tmp213) /
      std::sqrt(Scalar(std::pow(_tmp208, Scalar(2)) * _tmp211 + 1));
  const Scalar _tmp215 = Scalar(9.6622558468725703) * _tmp203;
  const Scalar _tmp216 =
      -_tmp209 * _tmp215 - std::sqrt(Scalar(std::pow(Scalar(-_tmp80 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp83 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp217 = Scalar(0.1034955) * _tmp204;
  const Scalar _tmp218 = _tmp216 * _tmp217;
  const Scalar _tmp219 = Scalar(0.1034955) * _tmp213;
  const Scalar _tmp220 = Scalar(9.6622558468725703) * _tmp212;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -Scalar(9.6622558468725703) * _tmp0 * _tmp38 -
               Scalar(9.6622558468725703) * fh1 *
                   (-Scalar(1.0) * _tmp36 * _tmp37 * fv1 * std::sinh(_tmp3) - _tmp36 * _tmp38 -
                    (-Scalar(0.1034955) * _tmp33 * _tmp36 +
                     _tmp34 * (Scalar(9.6622558468725703) * _tmp1 * _tmp37 - _tmp4)) *
                        std::sinh(_tmp35)) -
               Scalar(9.6622558468725703) * std::cosh(_tmp3) +
               Scalar(9.6622558468725703) * std::cosh(_tmp35);
  _res(1, 0) =
      -_tmp164 * (-_tmp172 * p_d(2, 0) + Scalar(1.0) * _tmp175 * std::sinh(_tmp163) -
                  (-_tmp165 * _tmp172 + _tmp166 * (-_tmp162 * _tmp169 - _tmp164 * _tmp175)) *
                      std::sinh(_tmp167)) -
      _tmp169 * (_tmp166 * p_d(2, 0) + std::cosh(_tmp163) - std::cosh(_tmp167));
  _res(2, 0) =
      -_tmp189 * (Scalar(1.0) * _tmp197 * std::sinh(_tmp199) - _tmp198 * p_a(2, 0) -
                  (-_tmp190 * _tmp198 + _tmp191 * (-_tmp188 * _tmp194 - _tmp189 * _tmp197)) *
                      std::sinh(_tmp192)) -
      _tmp194 * (_tmp191 * p_a(2, 0) - std::cosh(_tmp192) + std::cosh(_tmp199));
  _res(3, 0) =
      -_tmp215 * (Scalar(1.0) * _tmp214 * std::sinh(_tmp210) - _tmp219 * p_b(2, 0) -
                  (-_tmp216 * _tmp219 + _tmp217 * (-_tmp209 * _tmp220 - _tmp214 * _tmp215)) *
                      std::sinh(_tmp218)) -
      _tmp220 * (_tmp217 * p_b(2, 0) + std::cosh(_tmp210) - std::cosh(_tmp218));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym