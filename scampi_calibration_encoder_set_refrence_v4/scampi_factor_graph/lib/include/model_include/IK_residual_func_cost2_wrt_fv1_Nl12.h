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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 580

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (195)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp5 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp7 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp10 = 2 * _tmp6 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp12 = _tmp11 * _tmp4;
  const Scalar _tmp13 = _tmp10 + _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = 2 * _tmp4;
  const Scalar _tmp16 = _tmp15 * _tmp9;
  const Scalar _tmp17 = _tmp11 * _tmp6;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp14 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp8;
  const Scalar _tmp21 = _tmp20 + p_init0;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp23 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp25 = _tmp15 * _tmp6;
  const Scalar _tmp26 = _tmp11 * _tmp9;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = _tmp24 + _tmp29;
  const Scalar _tmp31 = _tmp22 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1;
  const Scalar _tmp33 = _tmp21 - p_c(0, 0);
  const Scalar _tmp34 = _tmp32 - p_c(1, 0);
  const Scalar _tmp35 = std::pow(Scalar(std::pow(_tmp33, Scalar(2)) + std::pow(_tmp34, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = _tmp33 * _tmp35;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp38 = -Scalar(0.010999999999999999) * _tmp23 -
                        Scalar(0.010999999999999999) * _tmp5 + Scalar(-0.010999999999999999);
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = fh1 * (_tmp37 + _tmp40);
  const Scalar _tmp42 = Scalar(5.1796800000000003) * _tmp13 + _tmp20 * fv1 + _tmp36 * _tmp41;
  const Scalar _tmp43 = -_tmp8;
  const Scalar _tmp44 = _tmp19 + _tmp43;
  const Scalar _tmp45 = -_tmp24;
  const Scalar _tmp46 = -_tmp22;
  const Scalar _tmp47 = _tmp45 + _tmp46;
  const Scalar _tmp48 = _tmp29 + _tmp47;
  const Scalar _tmp49 = Scalar(1.0) * _tmp48;
  const Scalar _tmp50 = -_tmp49;
  const Scalar _tmp51 = _tmp30 + _tmp46;
  const Scalar _tmp52 = _tmp50 + _tmp51;
  const Scalar _tmp53 = _tmp22 + _tmp29 + _tmp45;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp50 + _tmp53);
  const Scalar _tmp55 = _tmp14 - _tmp18;
  const Scalar _tmp56 = _tmp55 + _tmp8;
  const Scalar _tmp57 = _tmp43 + _tmp55;
  const Scalar _tmp58 = Scalar(1.0) * _tmp57;
  const Scalar _tmp59 = _tmp54 * (-_tmp56 + _tmp58);
  const Scalar _tmp60 = _tmp52 * _tmp59;
  const Scalar _tmp61 = Scalar(1.0) / (-_tmp44 + _tmp58 - _tmp60);
  const Scalar _tmp62 = Scalar(1.0) * _tmp61;
  const Scalar _tmp63 = _tmp52 * _tmp54;
  const Scalar _tmp64 = Scalar(1.0) * _tmp62 * _tmp63 - Scalar(1.0) * _tmp62;
  const Scalar _tmp65 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp66 = _tmp49 * _tmp59 + _tmp58;
  const Scalar _tmp67 = 0;
  const Scalar _tmp68 = -_tmp37;
  const Scalar _tmp69 = _tmp38 - _tmp39;
  const Scalar _tmp70 = _tmp68 + _tmp69;
  const Scalar _tmp71 = _tmp51 + p_init1;
  const Scalar _tmp72 = _tmp71 - p_d(1, 0);
  const Scalar _tmp73 = _tmp44 + p_init0;
  const Scalar _tmp74 = _tmp73 - p_d(0, 0);
  const Scalar _tmp75 = std::pow(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp74, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp74 * _tmp75;
  const Scalar _tmp77 = _tmp70 * _tmp76;
  const Scalar _tmp78 = _tmp37 + _tmp69;
  const Scalar _tmp79 = _tmp72 * _tmp75;
  const Scalar _tmp80 = _tmp48 + p_init1;
  const Scalar _tmp81 = _tmp80 - p_a(1, 0);
  const Scalar _tmp82 = _tmp57 + p_init0;
  const Scalar _tmp83 = _tmp82 - p_a(0, 0);
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 = _tmp81 * _tmp84;
  const Scalar _tmp86 = _tmp53 + p_init1;
  const Scalar _tmp87 = _tmp86 - p_b(1, 0);
  const Scalar _tmp88 = _tmp56 + p_init0;
  const Scalar _tmp89 = _tmp88 - p_b(0, 0);
  const Scalar _tmp90 = std::pow(Scalar(std::pow(_tmp87, Scalar(2)) + std::pow(_tmp89, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp91 = _tmp89 * _tmp90;
  const Scalar _tmp92 = _tmp70 * _tmp91;
  const Scalar _tmp93 = _tmp40 + _tmp68;
  const Scalar _tmp94 = _tmp87 * _tmp90;
  const Scalar _tmp95 = -_tmp85 * _tmp92 + _tmp93 * _tmp94;
  const Scalar _tmp96 = _tmp76 * _tmp85 - _tmp79;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp85 * _tmp91 - _tmp94);
  const Scalar _tmp98 = _tmp96 * _tmp97;
  const Scalar _tmp99 = -_tmp77 * _tmp85 + _tmp78 * _tmp79 - _tmp95 * _tmp98;
  const Scalar _tmp100 = -_tmp91 * _tmp93 + _tmp92;
  const Scalar _tmp101 = -_tmp100 * _tmp98 - _tmp59 * _tmp99 - _tmp76 * _tmp78 + _tmp77;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp103 = _tmp102 * _tmp99;
  const Scalar _tmp104 = _tmp61 * _tmp66;
  const Scalar _tmp105 = _tmp54 * (-_tmp103 * _tmp67 - _tmp104 * _tmp52 + _tmp50);
  const Scalar _tmp106 = -Scalar(1.0) * _tmp104 - Scalar(1.0) * _tmp105 + Scalar(1.0);
  const Scalar _tmp107 = _tmp34 * _tmp35;
  const Scalar _tmp108 = -_tmp107 * _tmp41 - Scalar(5.1796800000000003) * _tmp27 - _tmp31 * fv1;
  const Scalar _tmp109 = _tmp60 * _tmp62 + Scalar(1.0);
  const Scalar _tmp110 = Scalar(1.0) * _tmp54;
  const Scalar _tmp111 = _tmp59 * _tmp62;
  const Scalar _tmp112 = -Scalar(1.0) * _tmp109 * _tmp110 + Scalar(1.0) * _tmp111;
  const Scalar _tmp113 =
      std::sqrt(Scalar(std::pow(_tmp81, Scalar(2)) + std::pow(_tmp83, Scalar(2))));
  const Scalar _tmp114 = Scalar(1.0) / (_tmp113);
  const Scalar _tmp115 = _tmp113 * _tmp84;
  const Scalar _tmp116 = _tmp115 * (-_tmp114 * _tmp48 * _tmp83 + _tmp114 * _tmp57 * _tmp81);
  const Scalar _tmp117 = _tmp116 * _tmp91 + _tmp53 * _tmp91 - _tmp56 * _tmp94;
  const Scalar _tmp118 = _tmp116 * _tmp76 - _tmp117 * _tmp98 - _tmp44 * _tmp79 + _tmp51 * _tmp76;
  const Scalar _tmp119 = Scalar(1.0) / (_tmp118);
  const Scalar _tmp120 = _tmp101 * _tmp119;
  const Scalar _tmp121 = _tmp120 * _tmp62;
  const Scalar _tmp122 = Scalar(1.0) * _tmp119;
  const Scalar _tmp123 = _tmp121 * _tmp52 - _tmp122 * _tmp99;
  const Scalar _tmp124 = fh1 * (_tmp107 * _tmp20 - _tmp31 * _tmp36);
  const Scalar _tmp125 = _tmp85 * _tmp97;
  const Scalar _tmp126 = _tmp125 * _tmp95 + _tmp70 * _tmp85;
  const Scalar _tmp127 = _tmp100 * _tmp125 - _tmp126 * _tmp59 - _tmp70;
  const Scalar _tmp128 = _tmp102 * _tmp118;
  const Scalar _tmp129 = _tmp120 * (-_tmp116 + _tmp117 * _tmp125 - _tmp127 * _tmp128);
  const Scalar _tmp130 = _tmp52 * _tmp61;
  const Scalar _tmp131 = _tmp127 + _tmp129;
  const Scalar _tmp132 = -_tmp103 * _tmp131 + _tmp126 + _tmp129 * _tmp130;
  const Scalar _tmp133 = Scalar(1.0) * fh1;
  const Scalar _tmp134 = Scalar(1.0) * _tmp97;
  const Scalar _tmp135 = _tmp134 * _tmp95;
  const Scalar _tmp136 = -_tmp100 * _tmp134 + _tmp135 * _tmp59;
  const Scalar _tmp137 = _tmp120 * (-_tmp117 * _tmp134 - _tmp128 * _tmp136);
  const Scalar _tmp138 = _tmp136 + _tmp137;
  const Scalar _tmp139 = -_tmp103 * _tmp138 + _tmp130 * _tmp137 - _tmp135;
  const Scalar _tmp140 =
      _tmp106 * _tmp65 + _tmp107 * _tmp133 * (-_tmp110 * _tmp139 + _tmp137 * _tmp62) +
      _tmp108 * _tmp112 + Scalar(1.0) * _tmp124 * (-_tmp110 * _tmp123 + _tmp121) +
      _tmp133 * _tmp36 * (-_tmp110 * _tmp132 + _tmp129 * _tmp62) + _tmp42 * _tmp64;
  const Scalar _tmp141 = _tmp102 * _tmp67;
  const Scalar _tmp142 = _tmp91 * _tmp97;
  const Scalar _tmp143 = _tmp102 * _tmp96;
  const Scalar _tmp144 = _tmp143 * _tmp67;
  const Scalar _tmp145 = _tmp115 * (_tmp141 * _tmp76 - _tmp142 * _tmp144);
  const Scalar _tmp146 = -_tmp138 * _tmp143 + Scalar(1.0);
  const Scalar _tmp147 = _tmp102 * _tmp76;
  const Scalar _tmp148 = _tmp107 * fh1;
  const Scalar _tmp149 = -_tmp131 * _tmp143 - _tmp85;
  const Scalar _tmp150 = _tmp36 * fh1;
  const Scalar _tmp151 = -_tmp115 * _tmp124 * (_tmp122 * _tmp76 - _tmp122 * _tmp91 * _tmp98) -
                         _tmp115 * _tmp148 * (_tmp138 * _tmp147 + _tmp142 * _tmp146) -
                         _tmp115 * _tmp150 * (_tmp131 * _tmp147 + _tmp142 * _tmp149 + Scalar(1.0)) -
                         _tmp145 * _tmp65;
  const Scalar _tmp152 = Scalar(1.0) / (_tmp151);
  const Scalar _tmp153 = std::asinh(_tmp140 * _tmp152);
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp151;
  const Scalar _tmp155 =
      -_tmp153 * _tmp154 - std::sqrt(Scalar(std::pow(Scalar(-_tmp80 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp82 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp156 = Scalar(0.1034955) * _tmp152;
  const Scalar _tmp157 = _tmp155 * _tmp156;
  const Scalar _tmp158 = Scalar(1.0) * _tmp153;
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp145;
  const Scalar _tmp160 = std::pow(_tmp151, Scalar(-2));
  const Scalar _tmp161 = _tmp145 * _tmp160;
  const Scalar _tmp162 = _tmp28 + _tmp47;
  const Scalar _tmp163 =
      (-_tmp140 * _tmp161 + _tmp152 * (-_tmp106 + _tmp112 * _tmp162 + _tmp20 * _tmp64)) /
      std::sqrt(Scalar(std::pow(_tmp140, Scalar(2)) * _tmp160 + 1));
  const Scalar _tmp164 = _tmp144 * _tmp97;
  const Scalar _tmp165 = _tmp122 * _tmp124;
  const Scalar _tmp166 =
      _tmp146 * _tmp148 * _tmp97 + _tmp149 * _tmp150 * _tmp97 - _tmp164 * _tmp65 - _tmp165 * _tmp98;
  const Scalar _tmp167 = Scalar(1.0) / (_tmp166);
  const Scalar _tmp168 = _tmp42 * _tmp62;
  const Scalar _tmp169 = _tmp109 * _tmp54;
  const Scalar _tmp170 = _tmp105 * _tmp65 + _tmp108 * _tmp169 + _tmp123 * _tmp124 * _tmp54 +
                         _tmp132 * _tmp150 * _tmp54 + _tmp139 * _tmp148 * _tmp54 - _tmp168 * _tmp63;
  const Scalar _tmp171 = std::asinh(_tmp167 * _tmp170);
  const Scalar _tmp172 = Scalar(9.6622558468725703) * _tmp166;
  const Scalar _tmp173 =
      -_tmp171 * _tmp172 - std::sqrt(Scalar(std::pow(Scalar(-_tmp86 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp88 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp174 = Scalar(0.1034955) * _tmp167;
  const Scalar _tmp175 = _tmp173 * _tmp174;
  const Scalar _tmp176 = std::pow(_tmp166, Scalar(-2));
  const Scalar _tmp177 = _tmp164 * _tmp176;
  const Scalar _tmp178 = _tmp20 * _tmp62;
  const Scalar _tmp179 =
      (_tmp167 * (-_tmp105 + _tmp162 * _tmp169 - _tmp178 * _tmp63) - _tmp170 * _tmp177) /
      std::sqrt(Scalar(std::pow(_tmp170, Scalar(2)) * _tmp176 + 1));
  const Scalar _tmp180 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp181 = Scalar(1.0) * _tmp171;
  const Scalar _tmp182 = _tmp104 * _tmp65 - _tmp108 * _tmp111 - _tmp121 * _tmp124 -
                         _tmp129 * _tmp150 * _tmp61 - _tmp137 * _tmp148 * _tmp61 + _tmp168;
  const Scalar _tmp183 =
      _tmp102 * _tmp131 * _tmp150 + _tmp102 * _tmp138 * _tmp148 + _tmp141 * _tmp65 + _tmp165;
  const Scalar _tmp184 = Scalar(1.0) / (_tmp183);
  const Scalar _tmp185 = std::asinh(_tmp182 * _tmp184);
  const Scalar _tmp186 = Scalar(9.6622558468725703) * _tmp183;
  const Scalar _tmp187 =
      -_tmp185 * _tmp186 - std::sqrt(Scalar(std::pow(Scalar(-_tmp71 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp73 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp188 = Scalar(0.1034955) * _tmp184;
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = Scalar(1.0) * _tmp185;
  const Scalar _tmp191 = Scalar(9.6622558468725703) * _tmp141;
  const Scalar _tmp192 = std::pow(_tmp183, Scalar(-2));
  const Scalar _tmp193 = _tmp141 * _tmp192;
  const Scalar _tmp194 = (_tmp182 * _tmp193 + _tmp184 * (-_tmp104 - _tmp111 * _tmp162 + _tmp178)) /
                         std::sqrt(Scalar(std::pow(_tmp182, Scalar(2)) * _tmp192 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp3 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp3 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_c(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp32 + p_c(1, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp154 * (-Scalar(1.0) * _tmp163 * std::cosh(_tmp158) -
                          (-Scalar(0.1034955) * _tmp155 * _tmp161 +
                           _tmp156 * (-_tmp153 * _tmp159 - _tmp154 * _tmp163)) *
                              std::cosh(_tmp157)) +
               _tmp159 * (-std::sinh(_tmp157) - std::sinh(_tmp158));
  _res(2, 0) = _tmp172 * (-Scalar(1.0) * _tmp179 * std::cosh(_tmp181) -
                          (-Scalar(0.1034955) * _tmp173 * _tmp177 +
                           _tmp174 * (-_tmp171 * _tmp180 - _tmp172 * _tmp179)) *
                              std::cosh(_tmp175)) +
               _tmp180 * (-std::sinh(_tmp175) - std::sinh(_tmp181));
  _res(3, 0) = _tmp186 * (-Scalar(1.0) * _tmp194 * std::cosh(_tmp190) -
                          (Scalar(0.1034955) * _tmp187 * _tmp193 +
                           _tmp188 * (_tmp185 * _tmp191 - _tmp186 * _tmp194)) *
                              std::cosh(_tmp189)) -
               _tmp191 * (-std::sinh(_tmp189) - std::sinh(_tmp190));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
