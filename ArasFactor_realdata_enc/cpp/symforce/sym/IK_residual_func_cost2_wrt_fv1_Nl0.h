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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl0
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl0(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 578

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
  const Scalar _tmp4 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp5 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp7 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                        _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp11 = 2 * _tmp10 * _tmp4;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp11 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = 2 * _tmp6;
  const Scalar _tmp17 = _tmp10 * _tmp16;
  const Scalar _tmp18 = _tmp12 * _tmp4;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp15 - _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp9;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = -2 * std::pow(_tmp10, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp5 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = _tmp16 * _tmp4;
  const Scalar _tmp27 = _tmp10 * _tmp12;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp32 = _tmp30 - _tmp31;
  const Scalar _tmp33 = _tmp25 + _tmp32;
  const Scalar _tmp34 = _tmp33 + p_init1;
  const Scalar _tmp35 = _tmp20 + _tmp8;
  const Scalar _tmp36 = _tmp35 + p_init0;
  const Scalar _tmp37 = _tmp30 + _tmp31;
  const Scalar _tmp38 = _tmp25 + _tmp37;
  const Scalar _tmp39 = _tmp38 + p_init1;
  const Scalar _tmp40 = _tmp15 + _tmp19;
  const Scalar _tmp41 = _tmp40 + _tmp8;
  const Scalar _tmp42 = _tmp41 + p_init0;
  const Scalar _tmp43 = _tmp42 - p_c(0, 0);
  const Scalar _tmp44 = _tmp24 + _tmp37;
  const Scalar _tmp45 = _tmp44 + p_init1;
  const Scalar _tmp46 = _tmp45 - p_c(1, 0);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp46 * _tmp47;
  const Scalar _tmp49 = _tmp43 * _tmp47;
  const Scalar _tmp50 = _tmp39 - p_b(1, 0);
  const Scalar _tmp51 = _tmp36 - p_b(0, 0);
  const Scalar _tmp52 =
      std::sqrt(Scalar(std::pow(_tmp50, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp51);
  const Scalar _tmp55 = _tmp52 * _tmp54;
  const Scalar _tmp56 = _tmp55 * (_tmp35 * _tmp50 * _tmp53 - _tmp38 * _tmp51 * _tmp53);
  const Scalar _tmp57 = -_tmp41 * _tmp48 + _tmp44 * _tmp49 + _tmp49 * _tmp56;
  const Scalar _tmp58 = _tmp50 * _tmp54;
  const Scalar _tmp59 = Scalar(1.0) / (-_tmp48 + _tmp49 * _tmp58);
  const Scalar _tmp60 = Scalar(1.0) * _tmp59;
  const Scalar _tmp61 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp62 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp63 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp64 = _tmp62 - _tmp63;
  const Scalar _tmp65 = _tmp61 + _tmp64;
  const Scalar _tmp66 = _tmp49 * _tmp65;
  const Scalar _tmp67 = _tmp62 + _tmp63;
  const Scalar _tmp68 = _tmp61 + _tmp67;
  const Scalar _tmp69 = -_tmp49 * _tmp68 + _tmp66;
  const Scalar _tmp70 = _tmp48 * _tmp68 - _tmp58 * _tmp66;
  const Scalar _tmp71 = _tmp60 * _tmp70;
  const Scalar _tmp72 = Scalar(1.0) * _tmp38;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp44 + _tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp35;
  const Scalar _tmp76 = _tmp74 * (-_tmp41 + _tmp75);
  const Scalar _tmp77 = -_tmp60 * _tmp69 + _tmp71 * _tmp76;
  const Scalar _tmp78 = -_tmp61;
  const Scalar _tmp79 = _tmp67 + _tmp78;
  const Scalar _tmp80 = _tmp24 + _tmp32;
  const Scalar _tmp81 = _tmp80 + p_init1;
  const Scalar _tmp82 = _tmp81 - p_d(1, 0);
  const Scalar _tmp83 = _tmp40 + _tmp9;
  const Scalar _tmp84 = _tmp83 + p_init0;
  const Scalar _tmp85 = _tmp84 - p_d(0, 0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp85 * _tmp86;
  const Scalar _tmp88 = _tmp65 * _tmp87;
  const Scalar _tmp89 = _tmp82 * _tmp86;
  const Scalar _tmp90 = _tmp58 * _tmp87 - _tmp89;
  const Scalar _tmp91 = _tmp59 * _tmp90;
  const Scalar _tmp92 = -_tmp58 * _tmp88 - _tmp70 * _tmp91 + _tmp79 * _tmp89;
  const Scalar _tmp93 = -_tmp69 * _tmp91 - _tmp76 * _tmp92 - _tmp79 * _tmp87 + _tmp88;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp56 * _tmp87 - _tmp57 * _tmp91 + _tmp80 * _tmp87 - _tmp83 * _tmp89;
  const Scalar _tmp96 = _tmp94 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp98 = _tmp93 * _tmp97;
  const Scalar _tmp99 = _tmp98 * (-_tmp57 * _tmp60 - _tmp77 * _tmp96);
  const Scalar _tmp100 = _tmp77 + _tmp99;
  const Scalar _tmp101 = _tmp90 * _tmp94;
  const Scalar _tmp102 = -_tmp100 * _tmp101 + Scalar(1.0);
  const Scalar _tmp103 = _tmp49 * _tmp59;
  const Scalar _tmp104 = _tmp87 * _tmp94;
  const Scalar _tmp105 = _tmp22 - p_a(0, 0);
  const Scalar _tmp106 = _tmp34 - p_a(1, 0);
  const Scalar _tmp107 =
      std::pow(Scalar(std::pow(_tmp105, Scalar(2)) + std::pow(_tmp106, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp108 = _tmp106 * _tmp107;
  const Scalar _tmp109 = _tmp108 * fh1;
  const Scalar _tmp110 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp111 = _tmp72 * _tmp76 + _tmp75;
  const Scalar _tmp112 = 0;
  const Scalar _tmp113 = _tmp112 * _tmp94;
  const Scalar _tmp114 = _tmp113 * _tmp91;
  const Scalar _tmp115 = _tmp55 * (_tmp113 * _tmp87 - _tmp114 * _tmp49);
  const Scalar _tmp116 = _tmp58 * _tmp59;
  const Scalar _tmp117 = _tmp116 * _tmp70 + _tmp58 * _tmp65;
  const Scalar _tmp118 = _tmp116 * _tmp69 - _tmp117 * _tmp76 - _tmp65;
  const Scalar _tmp119 = _tmp98 * (_tmp116 * _tmp57 - _tmp118 * _tmp96 - _tmp56);
  const Scalar _tmp120 = _tmp118 + _tmp119;
  const Scalar _tmp121 = -_tmp101 * _tmp120 - _tmp58;
  const Scalar _tmp122 = _tmp105 * _tmp107;
  const Scalar _tmp123 = _tmp122 * fh1;
  const Scalar _tmp124 = _tmp60 * _tmp90 * _tmp97;
  const Scalar _tmp125 = Scalar(1.0) * _tmp97;
  const Scalar _tmp126 = fh1 * (_tmp108 * _tmp21 - _tmp122 * _tmp33);
  const Scalar _tmp127 = -_tmp109 * _tmp55 * (_tmp100 * _tmp104 + _tmp102 * _tmp103) -
                         _tmp110 * _tmp115 -
                         _tmp123 * _tmp55 * (_tmp103 * _tmp121 + _tmp104 * _tmp120 + Scalar(1.0)) -
                         _tmp126 * _tmp55 * (-_tmp124 * _tmp49 + _tmp125 * _tmp87);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp92 * _tmp94;
  const Scalar _tmp130 = _tmp73 + _tmp80;
  const Scalar _tmp131 = _tmp130 * _tmp76;
  const Scalar _tmp132 = Scalar(1.0) / (-_tmp131 + _tmp75 - _tmp83);
  const Scalar _tmp133 = _tmp130 * _tmp132;
  const Scalar _tmp134 = -_tmp100 * _tmp129 + _tmp133 * _tmp99 - _tmp71;
  const Scalar _tmp135 = Scalar(1.0) * _tmp74;
  const Scalar _tmp136 = Scalar(1.0) * _tmp132;
  const Scalar _tmp137 = _tmp136 * _tmp98;
  const Scalar _tmp138 = -_tmp125 * _tmp92 + _tmp130 * _tmp137;
  const Scalar _tmp139 = _tmp111 * _tmp132;
  const Scalar _tmp140 = _tmp74 * (-_tmp112 * _tmp129 - _tmp130 * _tmp139 + _tmp73);
  const Scalar _tmp141 = -Scalar(1.0) * _tmp139 - Scalar(1.0) * _tmp140 + Scalar(1.0);
  const Scalar _tmp142 = fh1 * (_tmp64 + _tmp78);
  const Scalar _tmp143 = -_tmp108 * _tmp142 - Scalar(5.1796800000000003) * _tmp28 - _tmp33 * fv1;
  const Scalar _tmp144 = _tmp131 * _tmp136 + Scalar(1.0);
  const Scalar _tmp145 = _tmp136 * _tmp76;
  const Scalar _tmp146 = -Scalar(1.0) * _tmp135 * _tmp144 + Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp117 + _tmp119 * _tmp133 - _tmp120 * _tmp129;
  const Scalar _tmp148 = _tmp122 * _tmp142 + Scalar(5.1796800000000003) * _tmp14 + _tmp21 * fv1;
  const Scalar _tmp149 = _tmp130 * _tmp74;
  const Scalar _tmp150 = Scalar(1.0) * _tmp136 * _tmp149 - Scalar(1.0) * _tmp136;
  const Scalar _tmp151 = Scalar(1.0) * _tmp109 * (-_tmp134 * _tmp135 + _tmp136 * _tmp99) +
                         _tmp110 * _tmp141 +
                         Scalar(1.0) * _tmp123 * (_tmp119 * _tmp136 - _tmp135 * _tmp147) +
                         Scalar(1.0) * _tmp126 * (-_tmp135 * _tmp138 + _tmp137) +
                         _tmp143 * _tmp146 + _tmp148 * _tmp150;
  const Scalar _tmp152 = std::asinh(_tmp128 * _tmp151);
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp154 =
      -_tmp152 * _tmp153 - std::sqrt(Scalar(std::pow(Scalar(-_tmp36 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp39 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp155 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp156 = _tmp115 * _tmp155;
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp115;
  const Scalar _tmp158 = _tmp24 + _tmp29 + _tmp31;
  const Scalar _tmp159 =
      (_tmp128 * (-_tmp141 + _tmp146 * _tmp158 + _tmp150 * _tmp21) - _tmp151 * _tmp156) /
      std::sqrt(Scalar(std::pow(_tmp151, Scalar(2)) * _tmp155 + 1));
  const Scalar _tmp160 = Scalar(0.1034955) * _tmp128;
  const Scalar _tmp161 = _tmp154 * _tmp160;
  const Scalar _tmp162 = Scalar(1.0) * _tmp152;
  const Scalar _tmp163 = _tmp110 * _tmp113;
  const Scalar _tmp164 = _tmp102 * _tmp109 * _tmp59 + _tmp121 * _tmp123 * _tmp59 -
                         _tmp124 * _tmp126 - _tmp163 * _tmp91;
  const Scalar _tmp165 = Scalar(1.0) / (_tmp164);
  const Scalar _tmp166 = _tmp144 * _tmp74;
  const Scalar _tmp167 = _tmp136 * _tmp148;
  const Scalar _tmp168 = _tmp109 * _tmp134 * _tmp74 + _tmp110 * _tmp140 +
                         _tmp123 * _tmp147 * _tmp74 + _tmp126 * _tmp138 * _tmp74 +
                         _tmp143 * _tmp166 - _tmp149 * _tmp167;
  const Scalar _tmp169 = std::asinh(_tmp165 * _tmp168);
  const Scalar _tmp170 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp171 =
      -_tmp169 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp45 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.1034955) * _tmp165;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = _tmp136 * _tmp21;
  const Scalar _tmp175 = std::pow(_tmp164, Scalar(-2));
  const Scalar _tmp176 = _tmp114 * _tmp175;
  const Scalar _tmp177 =
      (_tmp165 * (-_tmp140 - _tmp149 * _tmp174 + _tmp158 * _tmp166) - _tmp168 * _tmp176) /
      std::sqrt(Scalar(std::pow(_tmp168, Scalar(2)) * _tmp175 + 1));
  const Scalar _tmp178 = Scalar(9.6622558468725703) * _tmp113;
  const Scalar _tmp179 = _tmp178 * _tmp91;
  const Scalar _tmp180 = Scalar(1.0) * _tmp169;
  const Scalar _tmp181 = -_tmp109 * _tmp132 * _tmp99 + _tmp110 * _tmp139 -
                         _tmp119 * _tmp123 * _tmp132 - _tmp126 * _tmp137 - _tmp143 * _tmp145 +
                         _tmp167;
  const Scalar _tmp182 =
      _tmp100 * _tmp109 * _tmp94 + _tmp120 * _tmp123 * _tmp94 + _tmp125 * _tmp126 + _tmp163;
  const Scalar _tmp183 = Scalar(1.0) / (_tmp182);
  const Scalar _tmp184 = std::asinh(_tmp181 * _tmp183);
  const Scalar _tmp185 = Scalar(9.6622558468725703) * _tmp182;
  const Scalar _tmp186 =
      -_tmp184 * _tmp185 - std::sqrt(Scalar(std::pow(Scalar(-_tmp81 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp84 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.1034955) * _tmp183;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = Scalar(1.0) * _tmp184;
  const Scalar _tmp190 = std::pow(_tmp182, Scalar(-2));
  const Scalar _tmp191 = _tmp113 * _tmp190;
  const Scalar _tmp192 = (_tmp181 * _tmp191 + _tmp183 * (-_tmp139 - _tmp145 * _tmp158 + _tmp174)) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp190 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp3 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp3 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_a(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp34 + p_a(1, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp153 * (-Scalar(1.0) * _tmp159 * std::cosh(_tmp162) -
                          (-Scalar(0.1034955) * _tmp154 * _tmp156 +
                           _tmp160 * (-_tmp152 * _tmp157 - _tmp153 * _tmp159)) *
                              std::cosh(_tmp161)) +
               _tmp157 * (-std::sinh(_tmp161) - std::sinh(_tmp162));
  _res(2, 0) = _tmp170 * (-Scalar(1.0) * _tmp177 * std::cosh(_tmp180) -
                          (-Scalar(0.1034955) * _tmp171 * _tmp176 +
                           _tmp172 * (-_tmp169 * _tmp179 - _tmp170 * _tmp177)) *
                              std::cosh(_tmp173)) +
               _tmp179 * (-std::sinh(_tmp173) - std::sinh(_tmp180));
  _res(3, 0) = -_tmp178 * (-std::sinh(_tmp188) - std::sinh(_tmp189)) +
               _tmp185 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp189) -
                          (Scalar(0.1034955) * _tmp186 * _tmp191 +
                           _tmp187 * (_tmp178 * _tmp184 - _tmp185 * _tmp192)) *
                              std::cosh(_tmp188));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym