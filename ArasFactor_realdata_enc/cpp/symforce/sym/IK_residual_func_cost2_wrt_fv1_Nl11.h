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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl11
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl11(
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

  // Intermediate terms (188)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp5 = 2 * _tmp4;
  const Scalar _tmp6 = _tmp3 * _tmp5;
  const Scalar _tmp7 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = -_tmp10;
  const Scalar _tmp12 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp13 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = 2 * _tmp3 * _tmp7;
  const Scalar _tmp16 = _tmp4 * _tmp8;
  const Scalar _tmp17 = _tmp15 + _tmp16;
  const Scalar _tmp18 = -Scalar(0.010999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp14 + _tmp18;
  const Scalar _tmp20 = _tmp11 + _tmp19;
  const Scalar _tmp21 = _tmp20 + p_init0;
  const Scalar _tmp22 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp26 = _tmp5 * _tmp7;
  const Scalar _tmp27 = _tmp3 * _tmp8;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp29;
  const Scalar _tmp31 = _tmp25 + _tmp30;
  const Scalar _tmp32 = _tmp24 + _tmp31;
  const Scalar _tmp33 = _tmp32 + p_init1;
  const Scalar _tmp34 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp35 = _tmp33 - p_b(1, 0);
  const Scalar _tmp36 = _tmp21 - p_b(0, 0);
  const Scalar _tmp37 = std::pow(Scalar(std::pow(_tmp35, Scalar(2)) + std::pow(_tmp36, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = _tmp36 * _tmp37;
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp15 - Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp40 = -Scalar(0.010999999999999999) * _tmp12 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp41 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp42 = _tmp40 - _tmp41;
  const Scalar _tmp43 = fh1 * (_tmp39 + _tmp42);
  const Scalar _tmp44 = Scalar(5.1796800000000003) * _tmp17 + _tmp20 * fv1 + _tmp38 * _tmp43;
  const Scalar _tmp45 = -_tmp14 + _tmp18;
  const Scalar _tmp46 = _tmp10 + _tmp45;
  const Scalar _tmp47 = Scalar(1.0) * _tmp46;
  const Scalar _tmp48 = _tmp11 + _tmp45;
  const Scalar _tmp49 = -_tmp25;
  const Scalar _tmp50 = _tmp23 + _tmp49;
  const Scalar _tmp51 = _tmp30 + _tmp50;
  const Scalar _tmp52 = Scalar(1.0) * _tmp51;
  const Scalar _tmp53 = -_tmp52;
  const Scalar _tmp54 = _tmp24 + _tmp30 + _tmp49;
  const Scalar _tmp55 = _tmp53 + _tmp54;
  const Scalar _tmp56 = _tmp23 + _tmp31;
  const Scalar _tmp57 = Scalar(1.0) / (_tmp53 + _tmp56);
  const Scalar _tmp58 = _tmp10 + _tmp19;
  const Scalar _tmp59 = _tmp57 * (_tmp47 - _tmp58);
  const Scalar _tmp60 = _tmp55 * _tmp59;
  const Scalar _tmp61 = Scalar(1.0) / (_tmp47 - _tmp48 - _tmp60);
  const Scalar _tmp62 = Scalar(1.0) * _tmp61;
  const Scalar _tmp63 = _tmp55 * _tmp57;
  const Scalar _tmp64 = Scalar(1.0) * _tmp62 * _tmp63 - Scalar(1.0) * _tmp62;
  const Scalar _tmp65 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp66 = -_tmp39;
  const Scalar _tmp67 = _tmp42 + _tmp66;
  const Scalar _tmp68 = _tmp48 + p_init0;
  const Scalar _tmp69 = _tmp68 - p_a(0, 0);
  const Scalar _tmp70 = _tmp54 + p_init1;
  const Scalar _tmp71 = _tmp70 - p_a(1, 0);
  const Scalar _tmp72 = std::pow(Scalar(std::pow(_tmp69, Scalar(2)) + std::pow(_tmp71, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp73 = _tmp71 * _tmp72;
  const Scalar _tmp74 = _tmp69 * _tmp72;
  const Scalar _tmp75 = _tmp40 + _tmp41;
  const Scalar _tmp76 = _tmp66 + _tmp75;
  const Scalar _tmp77 = _tmp51 + p_init1;
  const Scalar _tmp78 = _tmp77 - p_d(1, 0);
  const Scalar _tmp79 = _tmp46 + p_init0;
  const Scalar _tmp80 = _tmp79 - p_d(0, 0);
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp78 * _tmp81;
  const Scalar _tmp83 = _tmp76 * _tmp82;
  const Scalar _tmp84 = _tmp39 + _tmp75;
  const Scalar _tmp85 = _tmp58 + p_init0;
  const Scalar _tmp86 = _tmp85 - p_c(0, 0);
  const Scalar _tmp87 = _tmp56 + p_init1;
  const Scalar _tmp88 = _tmp87 - p_c(1, 0);
  const Scalar _tmp89 = std::pow(Scalar(std::pow(_tmp86, Scalar(2)) + std::pow(_tmp88, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp88 * _tmp89;
  const Scalar _tmp91 = _tmp86 * _tmp89;
  const Scalar _tmp92 = -_tmp83 * _tmp91 + _tmp84 * _tmp90;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp82 * _tmp91 - _tmp90);
  const Scalar _tmp94 = -_tmp73 + _tmp74 * _tmp82;
  const Scalar _tmp95 = _tmp93 * _tmp94;
  const Scalar _tmp96 = _tmp67 * _tmp73 - _tmp74 * _tmp83 - _tmp92 * _tmp95;
  const Scalar _tmp97 = _tmp76 * _tmp91 - _tmp84 * _tmp91;
  const Scalar _tmp98 = -_tmp59 * _tmp96 - _tmp67 * _tmp74 + _tmp74 * _tmp76 - _tmp95 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp100 = _tmp47 + _tmp52 * _tmp59;
  const Scalar _tmp101 = 0;
  const Scalar _tmp102 = _tmp100 * _tmp61;
  const Scalar _tmp103 = _tmp57 * (-_tmp101 * _tmp96 - _tmp102 * _tmp55 + _tmp53);
  const Scalar _tmp104 = -Scalar(1.0) * _tmp100 * _tmp62 - Scalar(1.0) * _tmp103 + Scalar(1.0);
  const Scalar _tmp105 =
      std::sqrt(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp80, Scalar(2))));
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = _tmp105 * _tmp81;
  const Scalar _tmp108 = _tmp107 * (_tmp106 * _tmp46 * _tmp78 - _tmp106 * _tmp51 * _tmp80);
  const Scalar _tmp109 = _tmp108 * _tmp91 + _tmp56 * _tmp91 - _tmp58 * _tmp90;
  const Scalar _tmp110 = _tmp108 * _tmp74 - _tmp109 * _tmp95 - _tmp48 * _tmp73 + _tmp54 * _tmp74;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp112 = Scalar(1.0) * _tmp111;
  const Scalar _tmp113 = _tmp111 * _tmp98;
  const Scalar _tmp114 = _tmp113 * _tmp62;
  const Scalar _tmp115 = -_tmp112 * _tmp96 + _tmp114 * _tmp55;
  const Scalar _tmp116 = Scalar(1.0) * _tmp57;
  const Scalar _tmp117 = _tmp35 * _tmp37;
  const Scalar _tmp118 = fh1 * (_tmp117 * _tmp20 - _tmp32 * _tmp38);
  const Scalar _tmp119 = -_tmp117 * _tmp43 - Scalar(5.1796800000000003) * _tmp28 - _tmp32 * fv1;
  const Scalar _tmp120 = _tmp59 * _tmp62;
  const Scalar _tmp121 = _tmp57 * (_tmp60 * _tmp62 + Scalar(1.0));
  const Scalar _tmp122 = Scalar(1.0) * _tmp120 - Scalar(1.0) * _tmp121;
  const Scalar _tmp123 = Scalar(1.0) * _tmp93;
  const Scalar _tmp124 = _tmp123 * _tmp92;
  const Scalar _tmp125 = -_tmp123 * _tmp97 + _tmp124 * _tmp59;
  const Scalar _tmp126 = _tmp110 * _tmp99;
  const Scalar _tmp127 = _tmp113 * (-_tmp109 * _tmp123 - _tmp125 * _tmp126);
  const Scalar _tmp128 = _tmp55 * _tmp61;
  const Scalar _tmp129 = _tmp99 * (_tmp125 + _tmp127);
  const Scalar _tmp130 = -_tmp124 + _tmp127 * _tmp128 - _tmp129 * _tmp96;
  const Scalar _tmp131 = _tmp117 * fh1;
  const Scalar _tmp132 = _tmp82 * _tmp93;
  const Scalar _tmp133 = _tmp132 * _tmp92 + _tmp83;
  const Scalar _tmp134 = _tmp132 * _tmp97 - _tmp133 * _tmp59 - _tmp76;
  const Scalar _tmp135 = _tmp113 * (-_tmp108 + _tmp109 * _tmp132 - _tmp126 * _tmp134);
  const Scalar _tmp136 = _tmp99 * (_tmp134 + _tmp135);
  const Scalar _tmp137 = _tmp128 * _tmp135 + _tmp133 - _tmp136 * _tmp96;
  const Scalar _tmp138 = _tmp38 * fh1;
  const Scalar _tmp139 =
      _tmp104 * _tmp65 + Scalar(1.0) * _tmp118 * (_tmp114 - _tmp115 * _tmp116) + _tmp119 * _tmp122 +
      Scalar(1.0) * _tmp131 * (-_tmp116 * _tmp130 + _tmp127 * _tmp62) +
      Scalar(1.0) * _tmp138 * (-_tmp116 * _tmp137 + _tmp135 * _tmp62) + _tmp44 * _tmp64;
  const Scalar _tmp140 = _tmp101 * _tmp95;
  const Scalar _tmp141 = _tmp107 * (_tmp101 * _tmp74 - _tmp140 * _tmp91);
  const Scalar _tmp142 = _tmp111 * _tmp123 * _tmp94;
  const Scalar _tmp143 = -_tmp129 * _tmp94 + Scalar(1.0);
  const Scalar _tmp144 = _tmp91 * _tmp93;
  const Scalar _tmp145 = -_tmp136 * _tmp94 - _tmp82;
  const Scalar _tmp146 = -_tmp107 * _tmp118 * (_tmp112 * _tmp74 - _tmp142 * _tmp91) -
                         _tmp107 * _tmp131 * (_tmp129 * _tmp74 + _tmp143 * _tmp144) -
                         _tmp107 * _tmp138 * (_tmp136 * _tmp74 + _tmp144 * _tmp145 + Scalar(1.0)) -
                         _tmp141 * _tmp65;
  const Scalar _tmp147 = Scalar(1.0) / (_tmp146);
  const Scalar _tmp148 = std::asinh(_tmp139 * _tmp147);
  const Scalar _tmp149 = Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = Scalar(9.6622558468725703) * _tmp146;
  const Scalar _tmp151 =
      -_tmp148 * _tmp150 - std::sqrt(Scalar(std::pow(Scalar(-_tmp77 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp79 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp152 = Scalar(0.1034955) * _tmp147;
  const Scalar _tmp153 = _tmp151 * _tmp152;
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp141;
  const Scalar _tmp155 = std::pow(_tmp146, Scalar(-2));
  const Scalar _tmp156 = _tmp141 * _tmp155;
  const Scalar _tmp157 = _tmp29 + _tmp50;
  const Scalar _tmp158 =
      (-_tmp139 * _tmp156 + _tmp147 * (-_tmp104 + _tmp122 * _tmp157 + _tmp20 * _tmp64)) /
      std::sqrt(Scalar(std::pow(_tmp139, Scalar(2)) * _tmp155 + 1));
  const Scalar _tmp159 = _tmp101 * _tmp65;
  const Scalar _tmp160 = -_tmp118 * _tmp142 + _tmp131 * _tmp143 * _tmp93 +
                         _tmp138 * _tmp145 * _tmp93 - _tmp159 * _tmp95;
  const Scalar _tmp161 = Scalar(1.0) / (_tmp160);
  const Scalar _tmp162 = _tmp44 * _tmp62;
  const Scalar _tmp163 = _tmp103 * _tmp65 + _tmp115 * _tmp118 * _tmp57 + _tmp119 * _tmp121 +
                         _tmp130 * _tmp131 * _tmp57 + _tmp137 * _tmp138 * _tmp57 - _tmp162 * _tmp63;
  const Scalar _tmp164 = std::asinh(_tmp161 * _tmp163);
  const Scalar _tmp165 = Scalar(9.6622558468725703) * _tmp101;
  const Scalar _tmp166 = _tmp165 * _tmp95;
  const Scalar _tmp167 = Scalar(9.6622558468725703) * _tmp160;
  const Scalar _tmp168 = std::pow(_tmp160, Scalar(-2));
  const Scalar _tmp169 = _tmp20 * _tmp62;
  const Scalar _tmp170 = _tmp140 * _tmp168;
  const Scalar _tmp171 =
      (_tmp161 * (-_tmp103 + _tmp121 * _tmp157 - _tmp169 * _tmp63) - _tmp163 * _tmp170) /
      std::sqrt(Scalar(std::pow(_tmp163, Scalar(2)) * _tmp168 + 1));
  const Scalar _tmp172 = Scalar(0.1034955) * _tmp161;
  const Scalar _tmp173 =
      -_tmp164 * _tmp167 - std::sqrt(Scalar(std::pow(Scalar(-_tmp85 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp87 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = Scalar(1.0) * _tmp164;
  const Scalar _tmp176 = _tmp102 * _tmp65 - _tmp114 * _tmp118 - _tmp119 * _tmp120 -
                         _tmp127 * _tmp131 * _tmp61 - _tmp135 * _tmp138 * _tmp61 + _tmp162;
  const Scalar _tmp177 = _tmp112 * _tmp118 + _tmp129 * _tmp131 + _tmp136 * _tmp138 + _tmp159;
  const Scalar _tmp178 = Scalar(1.0) / (_tmp177);
  const Scalar _tmp179 = std::asinh(_tmp176 * _tmp178);
  const Scalar _tmp180 = Scalar(9.6622558468725703) * _tmp177;
  const Scalar _tmp181 =
      -_tmp179 * _tmp180 - std::sqrt(Scalar(std::pow(Scalar(-_tmp68 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp70 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp182 = Scalar(0.1034955) * _tmp178;
  const Scalar _tmp183 = _tmp181 * _tmp182;
  const Scalar _tmp184 = std::pow(_tmp177, Scalar(-2));
  const Scalar _tmp185 = _tmp101 * _tmp184;
  const Scalar _tmp186 = (_tmp176 * _tmp185 + _tmp178 * (-_tmp102 - _tmp120 * _tmp157 + _tmp169)) /
                         std::sqrt(Scalar(std::pow(_tmp176, Scalar(2)) * _tmp184 + 1));
  const Scalar _tmp187 = Scalar(1.0) * _tmp179;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp34 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp34 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_b(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp33 + p_b(1, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp150 * (-Scalar(1.0) * _tmp158 * std::cosh(_tmp149) -
                          (-Scalar(0.1034955) * _tmp151 * _tmp156 +
                           _tmp152 * (-_tmp148 * _tmp154 - _tmp150 * _tmp158)) *
                              std::cosh(_tmp153)) +
               _tmp154 * (-std::sinh(_tmp149) - std::sinh(_tmp153));
  _res(2, 0) = _tmp166 * (-std::sinh(_tmp174) - std::sinh(_tmp175)) +
               _tmp167 * (-Scalar(1.0) * _tmp171 * std::cosh(_tmp175) -
                          (-Scalar(0.1034955) * _tmp170 * _tmp173 +
                           _tmp172 * (-_tmp164 * _tmp166 - _tmp167 * _tmp171)) *
                              std::cosh(_tmp174));
  _res(3, 0) = -_tmp165 * (-std::sinh(_tmp183) - std::sinh(_tmp187)) +
               _tmp180 * (-Scalar(1.0) * _tmp186 * std::cosh(_tmp187) -
                          (Scalar(0.1034955) * _tmp181 * _tmp185 +
                           _tmp182 * (_tmp165 * _tmp179 - _tmp180 * _tmp186)) *
                              std::cosh(_tmp183));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym