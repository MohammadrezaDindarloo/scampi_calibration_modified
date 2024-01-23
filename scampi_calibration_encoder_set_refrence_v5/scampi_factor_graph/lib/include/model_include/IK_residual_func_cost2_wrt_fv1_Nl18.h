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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl18
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl18(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 575

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (194)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp10 = 2 * _tmp3;
  const Scalar _tmp11 = _tmp10 * _tmp9;
  const Scalar _tmp12 = -_DeltaRot[0] * rot_init_x - _DeltaRot[1] * rot_init_y -
                        _DeltaRot[2] * rot_init_z + _DeltaRot[3] * rot_init_w;
  const Scalar _tmp13 = 2 * _tmp5;
  const Scalar _tmp14 = _tmp12 * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 * _tmp9;
  const Scalar _tmp18 = _tmp10 * _tmp12;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 + _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp8;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp4 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp25 = _tmp10 * _tmp5;
  const Scalar _tmp26 = 2 * _tmp12 * _tmp9;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp31 = _tmp29 - _tmp30;
  const Scalar _tmp32 = _tmp24 + _tmp31;
  const Scalar _tmp33 = _tmp32 + p_init1;
  const Scalar _tmp34 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp35 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp36 = _tmp20 + _tmp7;
  const Scalar _tmp37 = _tmp36 + p_init0;
  const Scalar _tmp38 = _tmp37 - p_c(0, 0);
  const Scalar _tmp39 = _tmp29 + _tmp30;
  const Scalar _tmp40 = _tmp24 + _tmp39;
  const Scalar _tmp41 = _tmp40 + p_init1;
  const Scalar _tmp42 = _tmp41 - p_c(1, 0);
  const Scalar _tmp43 = std::pow(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp42, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp44 = _tmp38 * _tmp43;
  const Scalar _tmp45 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp46 = -_tmp45;
  const Scalar _tmp47 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp48 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp49 = _tmp47 - _tmp48;
  const Scalar _tmp50 = _tmp46 + _tmp49;
  const Scalar _tmp51 = -_tmp24;
  const Scalar _tmp52 = _tmp39 + _tmp51;
  const Scalar _tmp53 = _tmp52 + p_init1;
  const Scalar _tmp54 = _tmp53 - p_b(1, 0);
  const Scalar _tmp55 = _tmp16 - _tmp19;
  const Scalar _tmp56 = _tmp55 + _tmp7;
  const Scalar _tmp57 = _tmp56 + p_init0;
  const Scalar _tmp58 = _tmp57 - p_b(0, 0);
  const Scalar _tmp59 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp58, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp58 * _tmp59;
  const Scalar _tmp61 = _tmp50 * _tmp60;
  const Scalar _tmp62 = _tmp47 + _tmp48;
  const Scalar _tmp63 = _tmp46 + _tmp62;
  const Scalar _tmp64 = -_tmp60 * _tmp63 + _tmp61;
  const Scalar _tmp65 = _tmp31 + _tmp51;
  const Scalar _tmp66 = _tmp65 + p_init1;
  const Scalar _tmp67 = _tmp66 - p_a(1, 0);
  const Scalar _tmp68 = _tmp55 + _tmp8;
  const Scalar _tmp69 = _tmp68 + p_init0;
  const Scalar _tmp70 = _tmp69 - p_a(0, 0);
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp67 * _tmp71;
  const Scalar _tmp73 = _tmp42 * _tmp43;
  const Scalar _tmp74 = _tmp44 * _tmp72 - _tmp73;
  const Scalar _tmp75 = _tmp54 * _tmp59;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp60 * _tmp72 - _tmp75);
  const Scalar _tmp77 = _tmp74 * _tmp76;
  const Scalar _tmp78 = _tmp44 * _tmp50;
  const Scalar _tmp79 = _tmp45 + _tmp62;
  const Scalar _tmp80 = -_tmp61 * _tmp72 + _tmp63 * _tmp75;
  const Scalar _tmp81 = -_tmp72 * _tmp78 + _tmp73 * _tmp79 - _tmp77 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) * _tmp65;
  const Scalar _tmp83 = -_tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp52 + _tmp83);
  const Scalar _tmp85 = Scalar(1.0) * _tmp68;
  const Scalar _tmp86 = _tmp84 * (-_tmp56 + _tmp85);
  const Scalar _tmp87 = -_tmp44 * _tmp79 - _tmp64 * _tmp77 + _tmp78 - _tmp81 * _tmp86;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 = _tmp82 * _tmp86 + _tmp85;
  const Scalar _tmp90 = 0;
  const Scalar _tmp91 = _tmp88 * _tmp90;
  const Scalar _tmp92 = _tmp60 * _tmp77;
  const Scalar _tmp93 =
      std::sqrt(Scalar(std::pow(_tmp67, Scalar(2)) + std::pow(_tmp70, Scalar(2))));
  const Scalar _tmp94 = _tmp71 * _tmp93;
  const Scalar _tmp95 = _tmp94 * (_tmp44 * _tmp91 - _tmp91 * _tmp92);
  const Scalar _tmp96 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp97 = _tmp94 * (-_tmp65 * _tmp70 * _tmp96 + _tmp67 * _tmp68 * _tmp96);
  const Scalar _tmp98 = _tmp52 * _tmp60 - _tmp56 * _tmp75 + _tmp60 * _tmp97;
  const Scalar _tmp99 = _tmp72 * _tmp76;
  const Scalar _tmp100 = _tmp50 * _tmp72 + _tmp80 * _tmp99;
  const Scalar _tmp101 = -_tmp100 * _tmp86 - _tmp50 + _tmp64 * _tmp99;
  const Scalar _tmp102 = -_tmp36 * _tmp73 + _tmp40 * _tmp44 + _tmp44 * _tmp97 - _tmp77 * _tmp98;
  const Scalar _tmp103 = _tmp102 * _tmp88;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp105 = _tmp104 * _tmp87;
  const Scalar _tmp106 = _tmp105 * (-_tmp101 * _tmp103 - _tmp97 + _tmp98 * _tmp99);
  const Scalar _tmp107 = _tmp101 + _tmp106;
  const Scalar _tmp108 = _tmp44 * _tmp88;
  const Scalar _tmp109 = _tmp74 * _tmp88;
  const Scalar _tmp110 = -_tmp107 * _tmp109 - _tmp72;
  const Scalar _tmp111 = _tmp60 * _tmp76;
  const Scalar _tmp112 = _tmp33 - p_d(1, 0);
  const Scalar _tmp113 = _tmp22 - p_d(0, 0);
  const Scalar _tmp114 =
      std::pow(Scalar(std::pow(_tmp112, Scalar(2)) + std::pow(_tmp113, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp115 = _tmp113 * _tmp114;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = Scalar(1.0) * _tmp104;
  const Scalar _tmp118 = _tmp112 * _tmp114;
  const Scalar _tmp119 = fh1 * (-_tmp115 * _tmp32 + _tmp118 * _tmp21);
  const Scalar _tmp120 = Scalar(1.0) * _tmp76;
  const Scalar _tmp121 = _tmp120 * _tmp80;
  const Scalar _tmp122 = -_tmp120 * _tmp64 + _tmp121 * _tmp86;
  const Scalar _tmp123 = _tmp105 * (-_tmp103 * _tmp122 - _tmp120 * _tmp98);
  const Scalar _tmp124 = _tmp122 + _tmp123;
  const Scalar _tmp125 = -_tmp109 * _tmp124 + Scalar(1.0);
  const Scalar _tmp126 = _tmp118 * fh1;
  const Scalar _tmp127 = -_tmp116 * _tmp94 * (_tmp107 * _tmp108 + _tmp110 * _tmp111 + Scalar(1.0)) -
                         _tmp119 * _tmp94 * (_tmp117 * _tmp44 - _tmp117 * _tmp92) -
                         _tmp126 * _tmp94 * (_tmp108 * _tmp124 + _tmp111 * _tmp125) -
                         _tmp35 * _tmp95;
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = fh1 * (_tmp45 + _tmp49);
  const Scalar _tmp130 = -_tmp118 * _tmp129 - Scalar(3.29616) * _tmp27 - _tmp32 * fv1;
  const Scalar _tmp131 = _tmp40 + _tmp83;
  const Scalar _tmp132 = _tmp131 * _tmp86;
  const Scalar _tmp133 = Scalar(1.0) / (-_tmp132 - _tmp36 + _tmp85);
  const Scalar _tmp134 = Scalar(1.0) * _tmp133;
  const Scalar _tmp135 = _tmp84 * (_tmp132 * _tmp134 + Scalar(1.0));
  const Scalar _tmp136 = _tmp134 * _tmp86;
  const Scalar _tmp137 = -Scalar(1.0) * _tmp135 + Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp115 * _tmp129 + Scalar(3.29616) * _tmp15 + _tmp21 * fv1;
  const Scalar _tmp139 = _tmp131 * _tmp84;
  const Scalar _tmp140 = Scalar(1.0) * _tmp134 * _tmp139 - Scalar(1.0) * _tmp134;
  const Scalar _tmp141 = _tmp81 * _tmp88;
  const Scalar _tmp142 = _tmp131 * _tmp133;
  const Scalar _tmp143 = _tmp100 + _tmp106 * _tmp142 - _tmp107 * _tmp141;
  const Scalar _tmp144 = Scalar(1.0) * _tmp84;
  const Scalar _tmp145 = _tmp105 * _tmp134;
  const Scalar _tmp146 = -_tmp117 * _tmp81 + _tmp131 * _tmp145;
  const Scalar _tmp147 = -_tmp121 + _tmp123 * _tmp142 - _tmp124 * _tmp141;
  const Scalar _tmp148 = _tmp133 * _tmp89;
  const Scalar _tmp149 = _tmp84 * (-_tmp131 * _tmp148 - _tmp141 * _tmp90 + _tmp83);
  const Scalar _tmp150 = -Scalar(1.0) * _tmp134 * _tmp89 - Scalar(1.0) * _tmp149 + Scalar(1.0);
  const Scalar _tmp151 = Scalar(1.0) * _tmp116 * (_tmp106 * _tmp134 - _tmp143 * _tmp144) +
                         Scalar(1.0) * _tmp119 * (-_tmp144 * _tmp146 + _tmp145) +
                         Scalar(1.0) * _tmp126 * (_tmp123 * _tmp134 - _tmp144 * _tmp147) +
                         _tmp130 * _tmp137 + _tmp138 * _tmp140 + _tmp150 * _tmp35;
  const Scalar _tmp152 = std::asinh(_tmp128 * _tmp151);
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp154 =
      -_tmp152 * _tmp153 - std::sqrt(Scalar(std::pow(Scalar(-_tmp66 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp69 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp155 = Scalar(0.1034955) * _tmp128;
  const Scalar _tmp156 = _tmp154 * _tmp155;
  const Scalar _tmp157 = Scalar(1.0) * _tmp152;
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp95;
  const Scalar _tmp159 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp160 = _tmp159 * _tmp95;
  const Scalar _tmp161 = _tmp28 + _tmp30 + _tmp51;
  const Scalar _tmp162 =
      (_tmp128 * (_tmp137 * _tmp161 + _tmp140 * _tmp21 - _tmp150) - _tmp151 * _tmp160) /
      std::sqrt(Scalar(std::pow(_tmp151, Scalar(2)) * _tmp159 + 1));
  const Scalar _tmp163 = _tmp117 * _tmp119;
  const Scalar _tmp164 = _tmp35 * _tmp91;
  const Scalar _tmp165 =
      _tmp110 * _tmp116 * _tmp76 + _tmp125 * _tmp126 * _tmp76 - _tmp163 * _tmp77 - _tmp164 * _tmp77;
  const Scalar _tmp166 = Scalar(1.0) / (_tmp165);
  const Scalar _tmp167 = _tmp84 * fh1;
  const Scalar _tmp168 = _tmp134 * _tmp138;
  const Scalar _tmp169 = _tmp115 * _tmp143 * _tmp167 + _tmp118 * _tmp147 * _tmp167 +
                         _tmp119 * _tmp146 * _tmp84 + _tmp130 * _tmp135 - _tmp139 * _tmp168 +
                         _tmp149 * _tmp35;
  const Scalar _tmp170 = std::asinh(_tmp166 * _tmp169);
  const Scalar _tmp171 = Scalar(9.6622558468725703) * _tmp165;
  const Scalar _tmp172 =
      -_tmp170 * _tmp171 - std::sqrt(Scalar(std::pow(Scalar(-_tmp53 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp57 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp173 = Scalar(0.1034955) * _tmp166;
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = Scalar(1.0) * _tmp170;
  const Scalar _tmp176 = Scalar(9.6622558468725703) * _tmp91;
  const Scalar _tmp177 = _tmp176 * _tmp77;
  const Scalar _tmp178 = std::pow(_tmp165, Scalar(-2));
  const Scalar _tmp179 = _tmp178 * _tmp77 * _tmp91;
  const Scalar _tmp180 = _tmp134 * _tmp21;
  const Scalar _tmp181 =
      (_tmp166 * (_tmp135 * _tmp161 - _tmp139 * _tmp180 - _tmp149) - _tmp169 * _tmp179) /
      std::sqrt(Scalar(std::pow(_tmp169, Scalar(2)) * _tmp178 + 1));
  const Scalar _tmp182 =
      _tmp107 * _tmp116 * _tmp88 + _tmp124 * _tmp126 * _tmp88 + _tmp163 + _tmp164;
  const Scalar _tmp183 = Scalar(1.0) / (_tmp182);
  const Scalar _tmp184 = -_tmp106 * _tmp116 * _tmp133 - _tmp119 * _tmp145 -
                         _tmp123 * _tmp126 * _tmp133 - _tmp130 * _tmp136 + _tmp148 * _tmp35 +
                         _tmp168;
  const Scalar _tmp185 = std::asinh(_tmp183 * _tmp184);
  const Scalar _tmp186 = Scalar(1.0) * _tmp185;
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp182;
  const Scalar _tmp188 =
      -_tmp185 * _tmp187 - std::sqrt(Scalar(std::pow(Scalar(-_tmp37 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp41 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp189 = Scalar(0.1034955) * _tmp183;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 = std::pow(_tmp182, Scalar(-2));
  const Scalar _tmp192 = _tmp191 * _tmp91;
  const Scalar _tmp193 = (_tmp183 * (-_tmp136 * _tmp161 - _tmp148 + _tmp180) + _tmp184 * _tmp192) /
                         std::sqrt(Scalar(std::pow(_tmp184, Scalar(2)) * _tmp191 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp34 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp34 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_d(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp33 + p_d(1, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp153 * (-Scalar(1.0) * _tmp162 * std::cosh(_tmp157) -
                          (-Scalar(0.1034955) * _tmp154 * _tmp160 +
                           _tmp155 * (-_tmp152 * _tmp158 - _tmp153 * _tmp162)) *
                              std::cosh(_tmp156)) +
               _tmp158 * (-std::sinh(_tmp156) - std::sinh(_tmp157));
  _res(2, 0) = _tmp171 * (-Scalar(1.0) * _tmp181 * std::cosh(_tmp175) -
                          (-Scalar(0.1034955) * _tmp172 * _tmp179 +
                           _tmp173 * (-_tmp170 * _tmp177 - _tmp171 * _tmp181)) *
                              std::cosh(_tmp174)) +
               _tmp177 * (-std::sinh(_tmp174) - std::sinh(_tmp175));
  _res(3, 0) = -_tmp176 * (-std::sinh(_tmp186) - std::sinh(_tmp190)) +
               _tmp187 * (-Scalar(1.0) * _tmp193 * std::cosh(_tmp186) -
                          (Scalar(0.1034955) * _tmp188 * _tmp192 +
                           _tmp189 * (_tmp176 * _tmp185 - _tmp187 * _tmp193)) *
                              std::cosh(_tmp190));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
