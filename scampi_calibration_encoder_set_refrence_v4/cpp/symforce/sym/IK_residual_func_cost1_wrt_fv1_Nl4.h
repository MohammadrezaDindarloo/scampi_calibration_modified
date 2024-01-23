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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl4
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 586

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
  const Scalar _tmp11 = 2 * _tmp4;
  const Scalar _tmp12 = _tmp10 * _tmp11;
  const Scalar _tmp13 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp14 = _tmp13 * _tmp6;
  const Scalar _tmp15 = _tmp12 + _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = 2 * _tmp10 * _tmp6;
  const Scalar _tmp18 = _tmp13 * _tmp4;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 - _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp9;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = -2 * std::pow(_tmp10, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp5 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp27 = _tmp11 * _tmp6;
  const Scalar _tmp28 = _tmp10 * _tmp13;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = -_tmp30;
  const Scalar _tmp32 = -_tmp26 + _tmp31;
  const Scalar _tmp33 = _tmp24 + _tmp32;
  const Scalar _tmp34 = _tmp33 + p_init1;
  const Scalar _tmp35 = _tmp16 + _tmp19;
  const Scalar _tmp36 = _tmp35 + _tmp9;
  const Scalar _tmp37 = Scalar(1.0) * _tmp36;
  const Scalar _tmp38 = _tmp35 + _tmp8;
  const Scalar _tmp39 = _tmp24 + _tmp26 + _tmp31;
  const Scalar _tmp40 = Scalar(1.0) * _tmp39;
  const Scalar _tmp41 = -_tmp40;
  const Scalar _tmp42 = _tmp23 + _tmp26;
  const Scalar _tmp43 = _tmp31 + _tmp42;
  const Scalar _tmp44 = _tmp41 + _tmp43;
  const Scalar _tmp45 = _tmp23 + _tmp32;
  const Scalar _tmp46 = Scalar(1.0) / (_tmp41 + _tmp45);
  const Scalar _tmp47 = _tmp20 + _tmp8;
  const Scalar _tmp48 = _tmp37 - _tmp47;
  const Scalar _tmp49 = _tmp46 * _tmp48;
  const Scalar _tmp50 = _tmp44 * _tmp49;
  const Scalar _tmp51 = Scalar(1.0) / (_tmp37 - _tmp38 - _tmp50);
  const Scalar _tmp52 = Scalar(1.0) * _tmp51;
  const Scalar _tmp53 = _tmp38 + p_init0;
  const Scalar _tmp54 = _tmp53 - p_c(0, 0);
  const Scalar _tmp55 = _tmp43 + p_init1;
  const Scalar _tmp56 = _tmp55 - p_c(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp54 * _tmp57;
  const Scalar _tmp60 = _tmp39 + p_init1;
  const Scalar _tmp61 = _tmp60 - p_d(1, 0);
  const Scalar _tmp62 = _tmp36 + p_init0;
  const Scalar _tmp63 = _tmp62 - p_d(0, 0);
  const Scalar _tmp64 =
      std::sqrt(Scalar(std::pow(_tmp61, Scalar(2)) + std::pow(_tmp63, Scalar(2))));
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = Scalar(1.0) / (_tmp63);
  const Scalar _tmp67 = _tmp64 * _tmp66;
  const Scalar _tmp68 = _tmp67 * (_tmp36 * _tmp61 * _tmp65 - _tmp39 * _tmp63 * _tmp65);
  const Scalar _tmp69 = _tmp45 + p_init1;
  const Scalar _tmp70 = _tmp69 - p_b(1, 0);
  const Scalar _tmp71 = _tmp47 + p_init0;
  const Scalar _tmp72 = _tmp71 - p_b(0, 0);
  const Scalar _tmp73 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp72, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp74 = _tmp72 * _tmp73;
  const Scalar _tmp75 = _tmp70 * _tmp73;
  const Scalar _tmp76 = _tmp45 * _tmp74 - _tmp47 * _tmp75 + _tmp68 * _tmp74;
  const Scalar _tmp77 = _tmp61 * _tmp66;
  const Scalar _tmp78 = -_tmp58 + _tmp59 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp74 * _tmp77 - _tmp75);
  const Scalar _tmp80 = _tmp78 * _tmp79;
  const Scalar _tmp81 = -_tmp38 * _tmp58 + _tmp43 * _tmp59 + _tmp59 * _tmp68 - _tmp76 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp81);
  const Scalar _tmp83 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp84 = -_tmp83;
  const Scalar _tmp85 =
      -Scalar(0.010999999999999999) * _tmp25 - Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp86 = Scalar(0.20999999999999999) * _tmp27 + Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp87 = _tmp85 + _tmp86;
  const Scalar _tmp88 = _tmp84 + _tmp87;
  const Scalar _tmp89 = _tmp83 + _tmp87;
  const Scalar _tmp90 = _tmp77 * _tmp88;
  const Scalar _tmp91 = _tmp85 - _tmp86;
  const Scalar _tmp92 = _tmp83 + _tmp91;
  const Scalar _tmp93 = _tmp74 * _tmp88;
  const Scalar _tmp94 = _tmp75 * _tmp92 - _tmp77 * _tmp93;
  const Scalar _tmp95 = _tmp58 * _tmp89 - _tmp59 * _tmp90 - _tmp80 * _tmp94;
  const Scalar _tmp96 = -_tmp74 * _tmp92 + _tmp93;
  const Scalar _tmp97 = -_tmp49 * _tmp95 + _tmp59 * _tmp88 - _tmp59 * _tmp89 - _tmp80 * _tmp96;
  const Scalar _tmp98 = _tmp82 * _tmp97;
  const Scalar _tmp99 = _tmp52 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp82;
  const Scalar _tmp101 = -_tmp100 * _tmp95 + _tmp44 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) * _tmp46;
  const Scalar _tmp103 = _tmp22 - p_a(0, 0);
  const Scalar _tmp104 = _tmp34 - p_a(1, 0);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp103, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp104 * _tmp105;
  const Scalar _tmp107 = _tmp103 * _tmp105;
  const Scalar _tmp108 = fh1 * (_tmp106 * _tmp21 - _tmp107 * _tmp33);
  const Scalar _tmp109 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp110 = _tmp37 + _tmp40 * _tmp49;
  const Scalar _tmp111 = _tmp110 * _tmp51;
  const Scalar _tmp112 = 0;
  const Scalar _tmp113 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp114 = _tmp113 * _tmp95;
  const Scalar _tmp115 = _tmp46 * (-_tmp111 * _tmp44 - _tmp112 * _tmp114 + _tmp41);
  const Scalar _tmp116 = -Scalar(1.0) * _tmp110 * _tmp52 - Scalar(1.0) * _tmp115 + Scalar(1.0);
  const Scalar _tmp117 = fh1 * (_tmp84 + _tmp91);
  const Scalar _tmp118 = -_tmp106 * _tmp117 - Scalar(5.1796800000000003) * _tmp29 - _tmp33 * fv1;
  const Scalar _tmp119 = _tmp46 * (_tmp50 * _tmp52 + Scalar(1.0));
  const Scalar _tmp120 = _tmp49 * _tmp52;
  const Scalar _tmp121 = -Scalar(1.0) * _tmp119 + Scalar(1.0) * _tmp120;
  const Scalar _tmp122 = Scalar(1.0) * _tmp79;
  const Scalar _tmp123 = _tmp102 * _tmp48 * _tmp79 * _tmp94 - _tmp122 * _tmp96;
  const Scalar _tmp124 = _tmp113 * _tmp81;
  const Scalar _tmp125 = _tmp98 * (-_tmp122 * _tmp76 - _tmp123 * _tmp124);
  const Scalar _tmp126 = _tmp123 + _tmp125;
  const Scalar _tmp127 = _tmp44 * _tmp51;
  const Scalar _tmp128 = -_tmp114 * _tmp126 - _tmp122 * _tmp94 + _tmp125 * _tmp127;
  const Scalar _tmp129 = _tmp106 * fh1;
  const Scalar _tmp130 = _tmp77 * _tmp79;
  const Scalar _tmp131 = _tmp130 * _tmp94 + _tmp90;
  const Scalar _tmp132 = _tmp130 * _tmp96 - _tmp131 * _tmp49 - _tmp88;
  const Scalar _tmp133 = _tmp98 * (-_tmp124 * _tmp132 + _tmp130 * _tmp76 - _tmp68);
  const Scalar _tmp134 = _tmp113 * (_tmp132 + _tmp133);
  const Scalar _tmp135 = _tmp127 * _tmp133 + _tmp131 - _tmp134 * _tmp95;
  const Scalar _tmp136 = _tmp107 * fh1;
  const Scalar _tmp137 = _tmp107 * _tmp117 + Scalar(5.1796800000000003) * _tmp15 + _tmp21 * fv1;
  const Scalar _tmp138 = _tmp44 * _tmp46;
  const Scalar _tmp139 = Scalar(1.0) * _tmp138 * _tmp52 - Scalar(1.0) * _tmp52;
  const Scalar _tmp140 =
      Scalar(1.0) * _tmp108 * (-_tmp101 * _tmp102 + _tmp99) + _tmp109 * _tmp116 +
      _tmp118 * _tmp121 + Scalar(1.0) * _tmp129 * (-_tmp102 * _tmp128 + _tmp125 * _tmp52) +
      Scalar(1.0) * _tmp136 * (-_tmp102 * _tmp135 + _tmp133 * _tmp52) + _tmp137 * _tmp139;
  const Scalar _tmp141 = -_tmp134 * _tmp78 - _tmp77;
  const Scalar _tmp142 = _tmp74 * _tmp79;
  const Scalar _tmp143 = _tmp113 * _tmp126;
  const Scalar _tmp144 = -_tmp143 * _tmp78 + Scalar(1.0);
  const Scalar _tmp145 = _tmp74 * _tmp80;
  const Scalar _tmp146 = _tmp112 * _tmp113;
  const Scalar _tmp147 = _tmp67 * (-_tmp145 * _tmp146 + _tmp146 * _tmp59);
  const Scalar _tmp148 = -_tmp108 * _tmp67 * (-_tmp100 * _tmp145 + _tmp100 * _tmp59) -
                         _tmp109 * _tmp147 -
                         _tmp129 * _tmp67 * (_tmp142 * _tmp144 + _tmp143 * _tmp59) -
                         _tmp136 * _tmp67 * (_tmp134 * _tmp59 + _tmp141 * _tmp142 + Scalar(1.0));
  const Scalar _tmp149 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp150 = std::asinh(_tmp140 * _tmp149);
  const Scalar _tmp151 = Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = Scalar(0.1034955) * _tmp149;
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp148;
  const Scalar _tmp154 =
      -_tmp150 * _tmp153 - std::sqrt(Scalar(std::pow(Scalar(-_tmp60 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp62 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp155 = _tmp152 * _tmp154;
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp147;
  const Scalar _tmp157 = std::pow(_tmp148, Scalar(-2));
  const Scalar _tmp158 = _tmp147 * _tmp157;
  const Scalar _tmp159 = Scalar(0.1034955) * _tmp158;
  const Scalar _tmp160 = _tmp30 + _tmp42;
  const Scalar _tmp161 =
      (-_tmp140 * _tmp158 + _tmp149 * (-_tmp116 + _tmp121 * _tmp160 + _tmp139 * _tmp21)) /
      std::sqrt(Scalar(std::pow(_tmp140, Scalar(2)) * _tmp157 + 1));
  const Scalar _tmp162 = _tmp100 * _tmp108;
  const Scalar _tmp163 = _tmp109 * _tmp146;
  const Scalar _tmp164 =
      _tmp129 * _tmp144 * _tmp79 + _tmp136 * _tmp141 * _tmp79 - _tmp162 * _tmp80 - _tmp163 * _tmp80;
  const Scalar _tmp165 = Scalar(1.0) / (_tmp164);
  const Scalar _tmp166 = Scalar(0.1034955) * _tmp165;
  const Scalar _tmp167 = _tmp137 * _tmp52;
  const Scalar _tmp168 = _tmp101 * _tmp108 * _tmp46 + _tmp109 * _tmp115 + _tmp118 * _tmp119 +
                         _tmp128 * _tmp129 * _tmp46 + _tmp135 * _tmp136 * _tmp46 -
                         _tmp138 * _tmp167;
  const Scalar _tmp169 = std::asinh(_tmp165 * _tmp168);
  const Scalar _tmp170 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp171 =
      -_tmp169 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp69 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp71 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp172 = _tmp166 * _tmp171;
  const Scalar _tmp173 = Scalar(1.0) * _tmp169;
  const Scalar _tmp174 = Scalar(9.6622558468725703) * _tmp146;
  const Scalar _tmp175 = _tmp174 * _tmp80;
  const Scalar _tmp176 = _tmp21 * _tmp52;
  const Scalar _tmp177 = std::pow(_tmp164, Scalar(-2));
  const Scalar _tmp178 = _tmp146 * _tmp177 * _tmp80;
  const Scalar _tmp179 =
      (_tmp165 * (-_tmp115 + _tmp119 * _tmp160 - _tmp138 * _tmp176) - _tmp168 * _tmp178) /
      std::sqrt(Scalar(std::pow(_tmp168, Scalar(2)) * _tmp177 + 1));
  const Scalar _tmp180 = Scalar(0.1034955) * _tmp178;
  const Scalar _tmp181 = _tmp129 * _tmp143 + _tmp134 * _tmp136 + _tmp162 + _tmp163;
  const Scalar _tmp182 = Scalar(1.0) / (_tmp181);
  const Scalar _tmp183 = Scalar(0.1034955) * _tmp182;
  const Scalar _tmp184 = -_tmp108 * _tmp99 + _tmp109 * _tmp111 - _tmp118 * _tmp120 -
                         _tmp125 * _tmp129 * _tmp51 - _tmp133 * _tmp136 * _tmp51 + _tmp167;
  const Scalar _tmp185 = std::asinh(_tmp182 * _tmp184);
  const Scalar _tmp186 = Scalar(9.6622558468725703) * _tmp181;
  const Scalar _tmp187 =
      -_tmp185 * _tmp186 - std::sqrt(Scalar(std::pow(Scalar(-_tmp53 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp188 = _tmp183 * _tmp187;
  const Scalar _tmp189 = Scalar(1.0) * _tmp185;
  const Scalar _tmp190 = std::pow(_tmp181, Scalar(-2));
  const Scalar _tmp191 = _tmp146 * _tmp190;
  const Scalar _tmp192 = Scalar(0.1034955) * _tmp191;
  const Scalar _tmp193 = (_tmp182 * (-_tmp111 - _tmp120 * _tmp160 + _tmp176) + _tmp184 * _tmp191) /
                         std::sqrt(Scalar(std::pow(_tmp184, Scalar(2)) * _tmp190 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp3 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp3 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_a(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp34 + p_a(1, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp153 * (-_tmp159 * p_d(2, 0) + Scalar(1.0) * _tmp161 * std::sinh(_tmp151) -
                  (_tmp152 * (-_tmp150 * _tmp156 - _tmp153 * _tmp161) - _tmp154 * _tmp159) *
                      std::sinh(_tmp155)) -
      _tmp156 * (_tmp152 * p_d(2, 0) + std::cosh(_tmp151) - std::cosh(_tmp155));
  _res(2, 0) =
      -_tmp170 * (Scalar(1.0) * _tmp179 * std::sinh(_tmp173) - _tmp180 * p_b(2, 0) -
                  (_tmp166 * (-_tmp169 * _tmp175 - _tmp170 * _tmp179) - _tmp171 * _tmp180) *
                      std::sinh(_tmp172)) -
      _tmp175 * (_tmp166 * p_b(2, 0) - std::cosh(_tmp172) + std::cosh(_tmp173));
  _res(3, 0) = _tmp174 * (_tmp183 * p_c(2, 0) - std::cosh(_tmp188) + std::cosh(_tmp189)) -
               _tmp186 * (_tmp192 * p_c(2, 0) + Scalar(1.0) * _tmp193 * std::sinh(_tmp189) -
                          (_tmp183 * (_tmp174 * _tmp185 - _tmp186 * _tmp193) + _tmp187 * _tmp192) *
                              std::sinh(_tmp188));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
