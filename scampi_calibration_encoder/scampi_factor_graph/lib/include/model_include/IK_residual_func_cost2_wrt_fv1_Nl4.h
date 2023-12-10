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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl4
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 581

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (193)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp5 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp4 * _tmp6;
  const Scalar _tmp8 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp12 = -_tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = 2 * _tmp4 * _tmp8;
  const Scalar _tmp17 = _tmp5 * _tmp9;
  const Scalar _tmp18 = _tmp16 + _tmp17;
  const Scalar _tmp19 = -Scalar(0.010999999999999999) * _tmp18;
  const Scalar _tmp20 = -_tmp15 + _tmp19;
  const Scalar _tmp21 = _tmp12 + _tmp20;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp6 * _tmp8;
  const Scalar _tmp28 = _tmp4 * _tmp9;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = -_tmp30;
  const Scalar _tmp32 = -_tmp26 + _tmp31;
  const Scalar _tmp33 = _tmp24 + _tmp32;
  const Scalar _tmp34 = _tmp33 + p_init1;
  const Scalar _tmp35 = _tmp23 + _tmp32;
  const Scalar _tmp36 = _tmp35 + p_init1;
  const Scalar _tmp37 = _tmp36 - p_b(1, 0);
  const Scalar _tmp38 = _tmp15 + _tmp19;
  const Scalar _tmp39 = _tmp12 + _tmp38;
  const Scalar _tmp40 = _tmp39 + p_init0;
  const Scalar _tmp41 = _tmp40 - p_b(0, 0);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp41 * _tmp42;
  const Scalar _tmp44 = _tmp26 + _tmp31;
  const Scalar _tmp45 = _tmp24 + _tmp44;
  const Scalar _tmp46 = _tmp45 + p_init1;
  const Scalar _tmp47 = _tmp46 - p_d(1, 0);
  const Scalar _tmp48 = _tmp11 + _tmp20;
  const Scalar _tmp49 = _tmp48 + p_init0;
  const Scalar _tmp50 = _tmp49 - p_d(0, 0);
  const Scalar _tmp51 =
      std::sqrt(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp50, Scalar(2))));
  const Scalar _tmp52 = Scalar(1.0) / (_tmp51);
  const Scalar _tmp53 = Scalar(1.0) / (_tmp50);
  const Scalar _tmp54 = _tmp51 * _tmp53;
  const Scalar _tmp55 = _tmp54 * (-_tmp45 * _tmp50 * _tmp52 + _tmp47 * _tmp48 * _tmp52);
  const Scalar _tmp56 = _tmp37 * _tmp42;
  const Scalar _tmp57 = _tmp35 * _tmp43 - _tmp39 * _tmp56 + _tmp43 * _tmp55;
  const Scalar _tmp58 = _tmp47 * _tmp53;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp43 * _tmp58 - _tmp56);
  const Scalar _tmp60 = _tmp58 * _tmp59;
  const Scalar _tmp61 = Scalar(0.20999999999999999) * _tmp27 + Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp62 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp25 + Scalar(-0.010999999999999999);
  const Scalar _tmp63 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp64 = _tmp62 - _tmp63;
  const Scalar _tmp65 = _tmp61 + _tmp64;
  const Scalar _tmp66 = _tmp43 * _tmp65;
  const Scalar _tmp67 = -_tmp61;
  const Scalar _tmp68 = _tmp62 + _tmp63;
  const Scalar _tmp69 = _tmp67 + _tmp68;
  const Scalar _tmp70 = _tmp59 * (-_tmp43 * _tmp69 + _tmp66);
  const Scalar _tmp71 = _tmp56 * _tmp69 - _tmp58 * _tmp66;
  const Scalar _tmp72 = _tmp58 * _tmp65 + _tmp60 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) * _tmp45;
  const Scalar _tmp74 = -_tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp35 + _tmp74);
  const Scalar _tmp76 = Scalar(1.0) * _tmp48;
  const Scalar _tmp77 = -_tmp39 + _tmp76;
  const Scalar _tmp78 = _tmp75 * _tmp77;
  const Scalar _tmp79 = _tmp58 * _tmp70 - _tmp65 - _tmp72 * _tmp78;
  const Scalar _tmp80 = _tmp11 + _tmp38;
  const Scalar _tmp81 = _tmp80 + p_init0;
  const Scalar _tmp82 = _tmp81 - p_c(0, 0);
  const Scalar _tmp83 = _tmp23 + _tmp44;
  const Scalar _tmp84 = _tmp83 + p_init1;
  const Scalar _tmp85 = _tmp84 - p_c(1, 0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp82 * _tmp86;
  const Scalar _tmp88 = _tmp65 * _tmp87;
  const Scalar _tmp89 = _tmp61 + _tmp68;
  const Scalar _tmp90 = _tmp85 * _tmp86;
  const Scalar _tmp91 = _tmp58 * _tmp87 - _tmp90;
  const Scalar _tmp92 = _tmp59 * _tmp91;
  const Scalar _tmp93 = -_tmp58 * _tmp88 - _tmp71 * _tmp92 + _tmp89 * _tmp90;
  const Scalar _tmp94 = -_tmp70 * _tmp91 - _tmp78 * _tmp93 - _tmp87 * _tmp89 + _tmp88;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp55 * _tmp87 - _tmp57 * _tmp92 - _tmp80 * _tmp90 + _tmp83 * _tmp87;
  const Scalar _tmp97 = _tmp95 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp94 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp55 + _tmp57 * _tmp60 - _tmp79 * _tmp97);
  const Scalar _tmp101 = _tmp100 + _tmp79;
  const Scalar _tmp102 = _tmp87 * _tmp95;
  const Scalar _tmp103 = _tmp91 * _tmp95;
  const Scalar _tmp104 = -_tmp101 * _tmp103 - _tmp58;
  const Scalar _tmp105 = _tmp43 * _tmp59;
  const Scalar _tmp106 = _tmp22 - p_a(0, 0);
  const Scalar _tmp107 = _tmp34 - p_a(1, 0);
  const Scalar _tmp108 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp107, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp109 = _tmp106 * _tmp108;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = Scalar(1.0) * _tmp75;
  const Scalar _tmp112 = _tmp111 * _tmp59 * _tmp71 * _tmp77 - Scalar(1.0) * _tmp70;
  const Scalar _tmp113 = Scalar(1.0) * _tmp59;
  const Scalar _tmp114 = _tmp99 * (-_tmp112 * _tmp97 - _tmp113 * _tmp57);
  const Scalar _tmp115 = _tmp112 + _tmp114;
  const Scalar _tmp116 = -_tmp103 * _tmp115 + Scalar(1.0);
  const Scalar _tmp117 = _tmp107 * _tmp108;
  const Scalar _tmp118 = _tmp117 * fh1;
  const Scalar _tmp119 = Scalar(1.0) * _tmp98;
  const Scalar _tmp120 = fh1 * (-_tmp109 * _tmp33 + _tmp117 * _tmp21);
  const Scalar _tmp121 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp122 = _tmp73 * _tmp78 + _tmp76;
  const Scalar _tmp123 = 0;
  const Scalar _tmp124 = _tmp123 * _tmp95;
  const Scalar _tmp125 = _tmp103 * _tmp123;
  const Scalar _tmp126 = _tmp54 * (-_tmp105 * _tmp125 + _tmp124 * _tmp87);
  const Scalar _tmp127 = -_tmp110 * _tmp54 * (_tmp101 * _tmp102 + _tmp104 * _tmp105 + Scalar(1.0)) -
                         _tmp118 * _tmp54 * (_tmp102 * _tmp115 + _tmp105 * _tmp116) -
                         _tmp120 * _tmp54 * (-_tmp119 * _tmp43 * _tmp92 + _tmp119 * _tmp87) -
                         _tmp121 * _tmp126;
  const Scalar _tmp128 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp129 = _tmp74 + _tmp83;
  const Scalar _tmp130 = _tmp129 * _tmp78;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 + _tmp76 - _tmp80);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp132 * _tmp99;
  const Scalar _tmp134 = -_tmp119 * _tmp93 + _tmp129 * _tmp133;
  const Scalar _tmp135 = _tmp122 * _tmp131;
  const Scalar _tmp136 = _tmp93 * _tmp95;
  const Scalar _tmp137 = _tmp75 * (-_tmp123 * _tmp136 - _tmp129 * _tmp135 + _tmp74);
  const Scalar _tmp138 = -Scalar(1.0) * _tmp135 - Scalar(1.0) * _tmp137 + Scalar(1.0);
  const Scalar _tmp139 = fh1 * (_tmp64 + _tmp67);
  const Scalar _tmp140 = _tmp109 * _tmp139 + Scalar(3.29616) * _tmp18 + _tmp21 * fv1;
  const Scalar _tmp141 = _tmp129 * _tmp75;
  const Scalar _tmp142 = Scalar(1.0) * _tmp132 * _tmp141 - Scalar(1.0) * _tmp132;
  const Scalar _tmp143 = _tmp129 * _tmp131;
  const Scalar _tmp144 = -_tmp113 * _tmp71 + _tmp114 * _tmp143 - _tmp115 * _tmp136;
  const Scalar _tmp145 = -_tmp117 * _tmp139 - Scalar(3.29616) * _tmp29 - _tmp33 * fv1;
  const Scalar _tmp146 = _tmp130 * _tmp132 + Scalar(1.0);
  const Scalar _tmp147 = _tmp132 * _tmp78;
  const Scalar _tmp148 = -Scalar(1.0) * _tmp111 * _tmp146 + Scalar(1.0) * _tmp147;
  const Scalar _tmp149 = _tmp100 * _tmp143 - _tmp101 * _tmp136 + _tmp72;
  const Scalar _tmp150 = Scalar(1.0) * _tmp110 * (_tmp100 * _tmp132 - _tmp111 * _tmp149) +
                         Scalar(1.0) * _tmp118 * (-_tmp111 * _tmp144 + _tmp114 * _tmp132) +
                         Scalar(1.0) * _tmp120 * (-_tmp111 * _tmp134 + _tmp133) +
                         _tmp121 * _tmp138 + _tmp140 * _tmp142 + _tmp145 * _tmp148;
  const Scalar _tmp151 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp152 = _tmp126 * _tmp151;
  const Scalar _tmp153 = _tmp23 + _tmp26 + _tmp30;
  const Scalar _tmp154 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp155 =
      (-_tmp150 * _tmp152 + _tmp154 * (-_tmp138 + _tmp142 * _tmp21 + _tmp148 * _tmp153)) /
      std::sqrt(Scalar(std::pow(_tmp150, Scalar(2)) * _tmp151 + 1));
  const Scalar _tmp156 = std::asinh(_tmp150 * _tmp154);
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp126;
  const Scalar _tmp158 = Scalar(0.1034955) * _tmp154;
  const Scalar _tmp159 =
      -_tmp128 * _tmp156 - std::sqrt(Scalar(std::pow(Scalar(-_tmp46 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp49 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp160 = _tmp158 * _tmp159;
  const Scalar _tmp161 = Scalar(1.0) * _tmp156;
  const Scalar _tmp162 = _tmp119 * _tmp120;
  const Scalar _tmp163 = _tmp125 * _tmp59;
  const Scalar _tmp164 = _tmp104 * _tmp110 * _tmp59 + _tmp116 * _tmp118 * _tmp59 -
                         _tmp121 * _tmp163 - _tmp162 * _tmp92;
  const Scalar _tmp165 = Scalar(1.0) / (_tmp164);
  const Scalar _tmp166 = _tmp132 * _tmp140;
  const Scalar _tmp167 = _tmp146 * _tmp75;
  const Scalar _tmp168 = _tmp110 * _tmp149 * _tmp75 + _tmp118 * _tmp144 * _tmp75 +
                         _tmp120 * _tmp134 * _tmp75 + _tmp121 * _tmp137 - _tmp141 * _tmp166 +
                         _tmp145 * _tmp167;
  const Scalar _tmp169 = std::asinh(_tmp165 * _tmp168);
  const Scalar _tmp170 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp171 =
      -_tmp169 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp36 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp40 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.1034955) * _tmp165;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = Scalar(1.0) * _tmp169;
  const Scalar _tmp175 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp176 = std::pow(_tmp164, Scalar(-2));
  const Scalar _tmp177 = _tmp132 * _tmp21;
  const Scalar _tmp178 = _tmp163 * _tmp176;
  const Scalar _tmp179 =
      (_tmp165 * (-_tmp137 - _tmp141 * _tmp177 + _tmp153 * _tmp167) - _tmp168 * _tmp178) /
      std::sqrt(Scalar(std::pow(_tmp168, Scalar(2)) * _tmp176 + 1));
  const Scalar _tmp180 =
      _tmp101 * _tmp110 * _tmp95 + _tmp115 * _tmp118 * _tmp95 + _tmp121 * _tmp124 + _tmp162;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = -_tmp100 * _tmp110 * _tmp131 - _tmp114 * _tmp118 * _tmp131 -
                         _tmp120 * _tmp133 + _tmp121 * _tmp135 - _tmp145 * _tmp147 + _tmp166;
  const Scalar _tmp183 = std::asinh(_tmp181 * _tmp182);
  const Scalar _tmp184 = Scalar(9.6622558468725703) * _tmp180;
  const Scalar _tmp185 =
      -_tmp183 * _tmp184 - std::sqrt(Scalar(std::pow(Scalar(-_tmp81 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp84 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp186 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp187 = _tmp124 * _tmp186;
  const Scalar _tmp188 = (_tmp181 * (-_tmp135 - _tmp147 * _tmp153 + _tmp177) + _tmp182 * _tmp187) /
                         std::sqrt(Scalar(std::pow(_tmp182, Scalar(2)) * _tmp186 + 1));
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp124;
  const Scalar _tmp190 = Scalar(0.1034955) * _tmp181;
  const Scalar _tmp191 = _tmp185 * _tmp190;
  const Scalar _tmp192 = Scalar(1.0) * _tmp183;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp3 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp3 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_a(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp34 + p_a(1, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp128 * (-Scalar(1.0) * _tmp155 * std::cosh(_tmp161) -
                          (-Scalar(0.1034955) * _tmp152 * _tmp159 +
                           _tmp158 * (-_tmp128 * _tmp155 - _tmp156 * _tmp157)) *
                              std::cosh(_tmp160)) +
               _tmp157 * (-std::sinh(_tmp160) - std::sinh(_tmp161));
  _res(2, 0) = _tmp170 * (-Scalar(1.0) * _tmp179 * std::cosh(_tmp174) -
                          (-Scalar(0.1034955) * _tmp171 * _tmp178 +
                           _tmp172 * (-_tmp169 * _tmp175 - _tmp170 * _tmp179)) *
                              std::cosh(_tmp173)) +
               _tmp175 * (-std::sinh(_tmp173) - std::sinh(_tmp174));
  _res(3, 0) = _tmp184 * (-Scalar(1.0) * _tmp188 * std::cosh(_tmp192) -
                          (Scalar(0.1034955) * _tmp185 * _tmp187 +
                           _tmp190 * (_tmp183 * _tmp189 - _tmp184 * _tmp188)) *
                              std::cosh(_tmp191)) -
               _tmp189 * (-std::sinh(_tmp191) - std::sinh(_tmp192));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
