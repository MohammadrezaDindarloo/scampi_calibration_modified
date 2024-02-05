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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl17
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl17(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 588

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (197)
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
  const Scalar _tmp23 = _tmp15 * _tmp6;
  const Scalar _tmp24 = _tmp11 * _tmp9;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -_tmp26;
  const Scalar _tmp28 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp28 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp30 = _tmp27 + _tmp29;
  const Scalar _tmp31 = _tmp22 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1;
  const Scalar _tmp33 = -_tmp8;
  const Scalar _tmp34 = _tmp19 + _tmp33;
  const Scalar _tmp35 = _tmp34 + p_init0;
  const Scalar _tmp36 = -_tmp22;
  const Scalar _tmp37 = _tmp30 + _tmp36;
  const Scalar _tmp38 = _tmp37 + p_init1;
  const Scalar _tmp39 = _tmp38 - p_d(1, 0);
  const Scalar _tmp40 = _tmp35 - p_d(0, 0);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = _tmp39 * _tmp41;
  const Scalar _tmp43 = -_tmp29;
  const Scalar _tmp44 = _tmp27 + _tmp43;
  const Scalar _tmp45 = _tmp22 + _tmp44;
  const Scalar _tmp46 = _tmp45 + p_init1;
  const Scalar _tmp47 = _tmp46 - p_b(1, 0);
  const Scalar _tmp48 = _tmp14 - _tmp18;
  const Scalar _tmp49 = _tmp48 + _tmp8;
  const Scalar _tmp50 = _tmp49 + p_init0;
  const Scalar _tmp51 = _tmp50 - p_b(0, 0);
  const Scalar _tmp52 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp51, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 =
      std::sqrt(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp40, Scalar(2))));
  const Scalar _tmp55 = Scalar(1.0) / (_tmp54);
  const Scalar _tmp56 = _tmp41 * _tmp54;
  const Scalar _tmp57 = _tmp56 * (_tmp34 * _tmp39 * _tmp55 - _tmp37 * _tmp40 * _tmp55);
  const Scalar _tmp58 = _tmp47 * _tmp52;
  const Scalar _tmp59 = _tmp45 * _tmp53 - _tmp49 * _tmp58 + _tmp53 * _tmp57;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp42 * _tmp53 - _tmp58);
  const Scalar _tmp61 = _tmp42 * _tmp60;
  const Scalar _tmp62 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp63 = -Scalar(0.010999999999999999) * _tmp28 -
                        Scalar(0.010999999999999999) * _tmp5 + Scalar(-0.010999999999999999);
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp65 = _tmp63 - _tmp64;
  const Scalar _tmp66 = _tmp62 + _tmp65;
  const Scalar _tmp67 = _tmp53 * _tmp66;
  const Scalar _tmp68 = -_tmp62;
  const Scalar _tmp69 = _tmp63 + _tmp64;
  const Scalar _tmp70 = _tmp68 + _tmp69;
  const Scalar _tmp71 = -_tmp53 * _tmp70 + _tmp67;
  const Scalar _tmp72 = _tmp60 * (-_tmp42 * _tmp67 + _tmp58 * _tmp70);
  const Scalar _tmp73 = _tmp42 * _tmp66 + _tmp42 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) * _tmp37;
  const Scalar _tmp75 = -_tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp45 + _tmp75);
  const Scalar _tmp77 = Scalar(1.0) * _tmp34;
  const Scalar _tmp78 = _tmp76 * (-_tmp49 + _tmp77);
  const Scalar _tmp79 = _tmp61 * _tmp71 - _tmp66 - _tmp73 * _tmp78;
  const Scalar _tmp80 = _tmp33 + _tmp48;
  const Scalar _tmp81 = _tmp80 + p_init0;
  const Scalar _tmp82 = _tmp81 - p_a(0, 0);
  const Scalar _tmp83 = _tmp36 + _tmp44;
  const Scalar _tmp84 = _tmp83 + p_init1;
  const Scalar _tmp85 = _tmp84 - p_a(1, 0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp82 * _tmp86;
  const Scalar _tmp88 = _tmp66 * _tmp87;
  const Scalar _tmp89 = _tmp65 + _tmp68;
  const Scalar _tmp90 = _tmp85 * _tmp86;
  const Scalar _tmp91 = _tmp42 * _tmp87 - _tmp90;
  const Scalar _tmp92 = -_tmp42 * _tmp88 - _tmp72 * _tmp91 + _tmp89 * _tmp90;
  const Scalar _tmp93 = _tmp60 * _tmp91;
  const Scalar _tmp94 = -_tmp71 * _tmp93 - _tmp78 * _tmp92 - _tmp87 * _tmp89 + _tmp88;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp57 * _tmp87 - _tmp59 * _tmp93 - _tmp80 * _tmp90 + _tmp83 * _tmp87;
  const Scalar _tmp97 = _tmp95 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp94 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp57 + _tmp59 * _tmp61 - _tmp79 * _tmp97);
  const Scalar _tmp101 = _tmp100 + _tmp79;
  const Scalar _tmp102 = _tmp91 * _tmp95;
  const Scalar _tmp103 = -_tmp101 * _tmp102 - _tmp42;
  const Scalar _tmp104 = _tmp53 * _tmp60;
  const Scalar _tmp105 = _tmp87 * _tmp95;
  const Scalar _tmp106 = _tmp21 - p_c(0, 0);
  const Scalar _tmp107 = _tmp32 - p_c(1, 0);
  const Scalar _tmp108 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp107, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp109 = _tmp106 * _tmp108;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = Scalar(1.0) * _tmp98;
  const Scalar _tmp112 = _tmp107 * _tmp108;
  const Scalar _tmp113 = fh1 * (-_tmp109 * _tmp31 + _tmp112 * _tmp20);
  const Scalar _tmp114 = Scalar(1.0) * _tmp60;
  const Scalar _tmp115 = Scalar(1.0) * _tmp72;
  const Scalar _tmp116 = -_tmp114 * _tmp71 + _tmp115 * _tmp78;
  const Scalar _tmp117 = _tmp99 * (-_tmp114 * _tmp59 - _tmp116 * _tmp97);
  const Scalar _tmp118 = _tmp116 + _tmp117;
  const Scalar _tmp119 = -_tmp102 * _tmp118 + Scalar(1.0);
  const Scalar _tmp120 = _tmp112 * fh1;
  const Scalar _tmp121 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp122 = _tmp74 * _tmp78 + _tmp77;
  const Scalar _tmp123 = 0;
  const Scalar _tmp124 = _tmp123 * _tmp95;
  const Scalar _tmp125 = _tmp124 * _tmp93;
  const Scalar _tmp126 = _tmp56 * (_tmp124 * _tmp87 - _tmp125 * _tmp53);
  const Scalar _tmp127 = -_tmp110 * _tmp56 * (_tmp101 * _tmp105 + _tmp103 * _tmp104 + Scalar(1.0)) -
                         _tmp113 * _tmp56 * (-_tmp111 * _tmp53 * _tmp93 + _tmp111 * _tmp87) -
                         _tmp120 * _tmp56 * (_tmp104 * _tmp119 + _tmp105 * _tmp118) -
                         _tmp121 * _tmp126;
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = fh1 * (_tmp62 + _tmp69);
  const Scalar _tmp130 = _tmp109 * _tmp129 + Scalar(5.1796800000000003) * _tmp13 + _tmp20 * fv1;
  const Scalar _tmp131 = _tmp75 + _tmp83;
  const Scalar _tmp132 = _tmp131 * _tmp78;
  const Scalar _tmp133 = Scalar(1.0) / (-_tmp132 + _tmp77 - _tmp80);
  const Scalar _tmp134 = Scalar(1.0) * _tmp133;
  const Scalar _tmp135 = _tmp131 * _tmp76;
  const Scalar _tmp136 = Scalar(1.0) * _tmp134 * _tmp135 - Scalar(1.0) * _tmp134;
  const Scalar _tmp137 = -_tmp112 * _tmp129 - Scalar(5.1796800000000003) * _tmp25 - _tmp31 * fv1;
  const Scalar _tmp138 = _tmp132 * _tmp134 + Scalar(1.0);
  const Scalar _tmp139 = Scalar(1.0) * _tmp76;
  const Scalar _tmp140 = _tmp134 * _tmp78;
  const Scalar _tmp141 = -Scalar(1.0) * _tmp138 * _tmp139 + Scalar(1.0) * _tmp140;
  const Scalar _tmp142 = _tmp131 * _tmp133;
  const Scalar _tmp143 = _tmp92 * _tmp95;
  const Scalar _tmp144 = _tmp100 * _tmp142 - _tmp101 * _tmp143 + _tmp73;
  const Scalar _tmp145 = _tmp122 * _tmp133;
  const Scalar _tmp146 = _tmp76 * (-_tmp123 * _tmp143 - _tmp131 * _tmp145 + _tmp75);
  const Scalar _tmp147 = -Scalar(1.0) * _tmp145 - Scalar(1.0) * _tmp146 + Scalar(1.0);
  const Scalar _tmp148 = _tmp134 * _tmp99;
  const Scalar _tmp149 = -_tmp111 * _tmp92 + _tmp131 * _tmp148;
  const Scalar _tmp150 = -_tmp115 + _tmp117 * _tmp142 - _tmp118 * _tmp143;
  const Scalar _tmp151 = Scalar(1.0) * _tmp110 * (_tmp100 * _tmp134 - _tmp139 * _tmp144) +
                         Scalar(1.0) * _tmp113 * (-_tmp139 * _tmp149 + _tmp148) +
                         Scalar(1.0) * _tmp120 * (_tmp117 * _tmp134 - _tmp139 * _tmp150) +
                         _tmp121 * _tmp147 + _tmp130 * _tmp136 + _tmp137 * _tmp141;
  const Scalar _tmp152 = std::asinh(_tmp128 * _tmp151);
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp154 =
      -_tmp152 * _tmp153 - std::sqrt(Scalar(std::pow(Scalar(-_tmp35 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp38 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp155 = Scalar(0.1034955) * _tmp128;
  const Scalar _tmp156 = _tmp154 * _tmp155;
  const Scalar _tmp157 = Scalar(1.0) * _tmp152;
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp126;
  const Scalar _tmp159 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp160 = _tmp126 * _tmp159;
  const Scalar _tmp161 = Scalar(0.1034955) * _tmp160;
  const Scalar _tmp162 = _tmp26 + _tmp36 + _tmp43;
  const Scalar _tmp163 =
      (_tmp128 * (_tmp136 * _tmp20 + _tmp141 * _tmp162 - _tmp147) - _tmp151 * _tmp160) /
      std::sqrt(Scalar(std::pow(_tmp151, Scalar(2)) * _tmp159 + 1));
  const Scalar _tmp164 = _tmp121 * _tmp124;
  const Scalar _tmp165 = _tmp111 * _tmp113;
  const Scalar _tmp166 =
      _tmp103 * _tmp110 * _tmp60 + _tmp119 * _tmp120 * _tmp60 - _tmp164 * _tmp93 - _tmp165 * _tmp93;
  const Scalar _tmp167 = std::pow(_tmp166, Scalar(-2));
  const Scalar _tmp168 = _tmp125 * _tmp167;
  const Scalar _tmp169 = Scalar(0.1034955) * _tmp168;
  const Scalar _tmp170 = Scalar(1.0) / (_tmp166);
  const Scalar _tmp171 = _tmp138 * _tmp76;
  const Scalar _tmp172 = _tmp130 * _tmp134;
  const Scalar _tmp173 = _tmp110 * _tmp144 * _tmp76 + _tmp113 * _tmp149 * _tmp76 +
                         _tmp120 * _tmp150 * _tmp76 + _tmp121 * _tmp146 - _tmp135 * _tmp172 +
                         _tmp137 * _tmp171;
  const Scalar _tmp174 = std::asinh(_tmp170 * _tmp173);
  const Scalar _tmp175 = Scalar(9.6622558468725703) * _tmp166;
  const Scalar _tmp176 =
      -_tmp174 * _tmp175 - std::sqrt(Scalar(std::pow(Scalar(-_tmp46 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp177 = Scalar(0.1034955) * _tmp170;
  const Scalar _tmp178 = _tmp176 * _tmp177;
  const Scalar _tmp179 = Scalar(9.6622558468725703) * _tmp124;
  const Scalar _tmp180 = _tmp179 * _tmp93;
  const Scalar _tmp181 = _tmp134 * _tmp20;
  const Scalar _tmp182 =
      (-_tmp168 * _tmp173 + _tmp170 * (-_tmp135 * _tmp181 - _tmp146 + _tmp162 * _tmp171)) /
      std::sqrt(Scalar(_tmp167 * std::pow(_tmp173, Scalar(2)) + 1));
  const Scalar _tmp183 = Scalar(1.0) * _tmp174;
  const Scalar _tmp184 =
      _tmp101 * _tmp110 * _tmp95 + _tmp118 * _tmp120 * _tmp95 + _tmp164 + _tmp165;
  const Scalar _tmp185 = Scalar(1.0) / (_tmp184);
  const Scalar _tmp186 = Scalar(0.1034955) * _tmp185;
  const Scalar _tmp187 = -_tmp100 * _tmp110 * _tmp133 - _tmp113 * _tmp148 -
                         _tmp117 * _tmp120 * _tmp133 + _tmp121 * _tmp145 - _tmp137 * _tmp140 +
                         _tmp172;
  const Scalar _tmp188 = std::asinh(_tmp185 * _tmp187);
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp184;
  const Scalar _tmp190 =
      -_tmp188 * _tmp189 - std::sqrt(Scalar(std::pow(Scalar(-_tmp81 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp84 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp191 = _tmp186 * _tmp190;
  const Scalar _tmp192 = Scalar(1.0) * _tmp188;
  const Scalar _tmp193 = std::pow(_tmp184, Scalar(-2));
  const Scalar _tmp194 = _tmp124 * _tmp193;
  const Scalar _tmp195 = Scalar(0.1034955) * _tmp194;
  const Scalar _tmp196 = (_tmp185 * (-_tmp140 * _tmp162 - _tmp145 + _tmp181) + _tmp187 * _tmp194) /
                         std::sqrt(Scalar(std::pow(_tmp187, Scalar(2)) * _tmp193 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp3 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp3 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_c(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp32 + p_c(1, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp153 * (-_tmp161 * p_d(2, 0) + Scalar(1.0) * _tmp163 * std::sinh(_tmp157) -
                  (-_tmp154 * _tmp161 + _tmp155 * (-_tmp152 * _tmp158 - _tmp153 * _tmp163)) *
                      std::sinh(_tmp156)) -
      _tmp158 * (_tmp155 * p_d(2, 0) - std::cosh(_tmp156) + std::cosh(_tmp157));
  _res(2, 0) =
      -_tmp175 * (-_tmp169 * p_b(2, 0) + Scalar(1.0) * _tmp182 * std::sinh(_tmp183) -
                  (-_tmp169 * _tmp176 + _tmp177 * (-_tmp174 * _tmp180 - _tmp175 * _tmp182)) *
                      std::sinh(_tmp178)) -
      _tmp180 * (_tmp177 * p_b(2, 0) - std::cosh(_tmp178) + std::cosh(_tmp183));
  _res(3, 0) = _tmp179 * (_tmp186 * p_a(2, 0) - std::cosh(_tmp191) + std::cosh(_tmp192)) -
               _tmp189 * (_tmp195 * p_a(2, 0) + Scalar(1.0) * _tmp196 * std::sinh(_tmp192) -
                          (_tmp186 * (_tmp179 * _tmp188 - _tmp189 * _tmp196) + _tmp190 * _tmp195) *
                              std::sinh(_tmp191));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym