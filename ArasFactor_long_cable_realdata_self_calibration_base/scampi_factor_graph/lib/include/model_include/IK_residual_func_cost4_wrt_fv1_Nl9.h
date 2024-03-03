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
 * Symbolic function: IK_residual_func_cost4_wrt_fv1_Nl9
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     encoder: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost4WrtFv1Nl9(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 582

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (195)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp3;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp13 = _tmp12 * _tmp5;
  const Scalar _tmp14 = _tmp11 - _tmp13;
  const Scalar _tmp15 = Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp15;
  const Scalar _tmp17 = _tmp10 * _tmp5;
  const Scalar _tmp18 = _tmp12 * _tmp3;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 + _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp8;
  const Scalar _tmp22 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp23 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp4 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp25 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp26 = _tmp12 * _tmp9;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp30 = _tmp28 - _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(0, 0);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp34 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp35 = _tmp20 + _tmp7;
  const Scalar _tmp36 = Scalar(1.0) * _tmp35;
  const Scalar _tmp37 = -_tmp36;
  const Scalar _tmp38 = -_tmp19;
  const Scalar _tmp39 = _tmp16 + _tmp38;
  const Scalar _tmp40 = _tmp39 + _tmp7;
  const Scalar _tmp41 = Scalar(1.0) / (_tmp37 + _tmp40);
  const Scalar _tmp42 = -_tmp24;
  const Scalar _tmp43 = _tmp28 + _tmp29;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp24 + _tmp43;
  const Scalar _tmp46 = Scalar(1.0) * _tmp45;
  const Scalar _tmp47 = -_tmp44 + _tmp46;
  const Scalar _tmp48 = _tmp41 * _tmp47;
  const Scalar _tmp49 = _tmp36 * _tmp48 + _tmp46;
  const Scalar _tmp50 = 0;
  const Scalar _tmp51 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp52 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp53 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp54 = _tmp52 - _tmp53;
  const Scalar _tmp55 = _tmp51 + _tmp54;
  const Scalar _tmp56 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 - p_d(0, 0);
  const Scalar _tmp58 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp59 = _tmp58 - p_d(1, 0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp59 * _tmp60;
  const Scalar _tmp62 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp63 = _tmp62 - p_c(0, 0);
  const Scalar _tmp64 = Scalar(1.0) / (_tmp63);
  const Scalar _tmp65 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 - p_c(1, 0);
  const Scalar _tmp67 = _tmp64 * _tmp66;
  const Scalar _tmp68 = _tmp52 + _tmp53;
  const Scalar _tmp69 = _tmp51 + _tmp68;
  const Scalar _tmp70 = _tmp57 * _tmp60;
  const Scalar _tmp71 = _tmp69 * _tmp70;
  const Scalar _tmp72 = _tmp55 * _tmp61 - _tmp67 * _tmp71;
  const Scalar _tmp73 = _tmp39 + _tmp8;
  const Scalar _tmp74 = _tmp73 + position_vector(1, 0);
  const Scalar _tmp75 = _tmp74 - p_a(1, 0);
  const Scalar _tmp76 = _tmp30 + _tmp42;
  const Scalar _tmp77 = _tmp76 + position_vector(0, 0);
  const Scalar _tmp78 = _tmp77 - p_a(0, 0);
  const Scalar _tmp79 = std::pow(Scalar(std::pow(_tmp75, Scalar(2)) + std::pow(_tmp78, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp80 = _tmp75 * _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp79;
  const Scalar _tmp82 = _tmp67 * _tmp81 - _tmp80;
  const Scalar _tmp83 = Scalar(1.0) / (-_tmp61 + _tmp67 * _tmp70);
  const Scalar _tmp84 = _tmp82 * _tmp83;
  const Scalar _tmp85 = _tmp69 * _tmp81;
  const Scalar _tmp86 = -_tmp51;
  const Scalar _tmp87 = _tmp54 + _tmp86;
  const Scalar _tmp88 = -_tmp67 * _tmp85 - _tmp72 * _tmp84 + _tmp80 * _tmp87;
  const Scalar _tmp89 = -_tmp55 * _tmp70 + _tmp71;
  const Scalar _tmp90 = -_tmp48 * _tmp88 - _tmp81 * _tmp87 - _tmp84 * _tmp89 + _tmp85;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = _tmp88 * _tmp91;
  const Scalar _tmp93 = _tmp37 + _tmp73;
  const Scalar _tmp94 = _tmp48 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp46 - _tmp76 - _tmp94);
  const Scalar _tmp96 = _tmp49 * _tmp95;
  const Scalar _tmp97 = _tmp41 * (_tmp37 - _tmp50 * _tmp92 - _tmp93 * _tmp96);
  const Scalar _tmp98 = -Scalar(1.0) * _tmp96 - Scalar(1.0) * _tmp97 + Scalar(1.0);
  const Scalar _tmp99 = _tmp32 - p_b(0, 0);
  const Scalar _tmp100 = _tmp22 - p_b(1, 0);
  const Scalar _tmp101 =
      std::pow(Scalar(std::pow(_tmp100, Scalar(2)) + std::pow(_tmp99, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp102 = _tmp101 * _tmp99;
  const Scalar _tmp103 = fh1 * (_tmp68 + _tmp86);
  const Scalar _tmp104 = _tmp102 * _tmp103 + Scalar(40.024799999999999) * _tmp27 + _tmp31 * fv1;
  const Scalar _tmp105 = Scalar(1.0) * _tmp95;
  const Scalar _tmp106 = _tmp105 * _tmp93;
  const Scalar _tmp107 = -Scalar(1.0) * _tmp105 + Scalar(1.0) * _tmp106 * _tmp41;
  const Scalar _tmp108 =
      std::sqrt(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp66, Scalar(2))));
  const Scalar _tmp109 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp110 = _tmp108 * _tmp64;
  const Scalar _tmp111 = _tmp110 * (-_tmp109 * _tmp35 * _tmp63 + _tmp109 * _tmp45 * _tmp66);
  const Scalar _tmp112 = _tmp111 * _tmp70 + _tmp40 * _tmp70 - _tmp44 * _tmp61;
  const Scalar _tmp113 = _tmp67 * _tmp83;
  const Scalar _tmp114 = _tmp113 * _tmp72 + _tmp67 * _tmp69;
  const Scalar _tmp115 = _tmp113 * _tmp89 - _tmp114 * _tmp48 - _tmp69;
  const Scalar _tmp116 = _tmp111 * _tmp81 - _tmp112 * _tmp84 + _tmp73 * _tmp81 - _tmp76 * _tmp80;
  const Scalar _tmp117 = _tmp116 * _tmp91;
  const Scalar _tmp118 = Scalar(1.0) / (_tmp116);
  const Scalar _tmp119 = _tmp118 * _tmp90;
  const Scalar _tmp120 = _tmp119 * (-_tmp111 + _tmp112 * _tmp113 - _tmp115 * _tmp117);
  const Scalar _tmp121 = _tmp115 + _tmp120;
  const Scalar _tmp122 = _tmp93 * _tmp95;
  const Scalar _tmp123 = _tmp114 + _tmp120 * _tmp122 - _tmp121 * _tmp92;
  const Scalar _tmp124 = Scalar(1.0) * _tmp41;
  const Scalar _tmp125 = _tmp102 * fh1;
  const Scalar _tmp126 = Scalar(1.0) * _tmp118;
  const Scalar _tmp127 = _tmp106 * _tmp119 - _tmp126 * _tmp88;
  const Scalar _tmp128 = _tmp105 * _tmp119;
  const Scalar _tmp129 = _tmp100 * _tmp101;
  const Scalar _tmp130 = fh1 * (-_tmp102 * _tmp21 + _tmp129 * _tmp31);
  const Scalar _tmp131 = Scalar(1.0) * _tmp83;
  const Scalar _tmp132 = _tmp124 * _tmp47 * _tmp72 * _tmp83 - _tmp131 * _tmp89;
  const Scalar _tmp133 = _tmp119 * (-_tmp112 * _tmp131 - _tmp117 * _tmp132);
  const Scalar _tmp134 = _tmp132 + _tmp133;
  const Scalar _tmp135 = _tmp122 * _tmp133 - _tmp131 * _tmp72 - _tmp134 * _tmp92;
  const Scalar _tmp136 = _tmp129 * fh1;
  const Scalar _tmp137 = -_tmp103 * _tmp129 - Scalar(40.024799999999999) * _tmp14 - _tmp21 * fv1;
  const Scalar _tmp138 = _tmp105 * _tmp94 + Scalar(1.0);
  const Scalar _tmp139 = _tmp105 * _tmp48;
  const Scalar _tmp140 = -Scalar(1.0) * _tmp124 * _tmp138 + Scalar(1.0) * _tmp139;
  const Scalar _tmp141 = _tmp104 * _tmp107 +
                         Scalar(1.0) * _tmp125 * (_tmp105 * _tmp120 - _tmp123 * _tmp124) +
                         Scalar(1.0) * _tmp130 * (-_tmp124 * _tmp127 + _tmp128) +
                         Scalar(1.0) * _tmp136 * (_tmp105 * _tmp133 - _tmp124 * _tmp135) +
                         _tmp137 * _tmp140 + _tmp34 * _tmp98;
  const Scalar _tmp142 = _tmp82 * _tmp91;
  const Scalar _tmp143 = -_tmp134 * _tmp142 + Scalar(1.0);
  const Scalar _tmp144 = _tmp70 * _tmp83;
  const Scalar _tmp145 = _tmp81 * _tmp91;
  const Scalar _tmp146 = -_tmp121 * _tmp142 - _tmp67;
  const Scalar _tmp147 = _tmp142 * _tmp50;
  const Scalar _tmp148 = _tmp50 * _tmp91;
  const Scalar _tmp149 = _tmp110 * (-_tmp144 * _tmp147 + _tmp148 * _tmp81);
  const Scalar _tmp150 =
      -_tmp110 * _tmp125 * (_tmp121 * _tmp145 + _tmp144 * _tmp146 + Scalar(1.0)) -
      _tmp110 * _tmp130 * (-_tmp126 * _tmp70 * _tmp84 + _tmp126 * _tmp81) -
      _tmp110 * _tmp136 * (_tmp134 * _tmp145 + _tmp143 * _tmp144) - _tmp149 * _tmp34;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 = std::asinh(_tmp141 * _tmp151);
  const Scalar _tmp153 = Scalar(1.0) * _tmp152;
  const Scalar _tmp154 = Scalar(1.4083112389913199) * _tmp150;
  const Scalar _tmp155 =
      -_tmp152 * _tmp154 - std::sqrt(Scalar(std::pow(Scalar(-_tmp62 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp65 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp156 = Scalar(0.71007031138673404) * _tmp151;
  const Scalar _tmp157 = _tmp155 * _tmp156;
  const Scalar _tmp158 = Scalar(1.4083112389913199) * _tmp149;
  const Scalar _tmp159 = std::pow(_tmp150, Scalar(-2));
  const Scalar _tmp160 = _tmp149 * _tmp159;
  const Scalar _tmp161 = _tmp15 + _tmp38 + _tmp7;
  const Scalar _tmp162 =
      (-_tmp141 * _tmp160 + _tmp151 * (_tmp107 * _tmp31 + _tmp140 * _tmp161 - _tmp98)) /
      std::sqrt(Scalar(std::pow(_tmp141, Scalar(2)) * _tmp159 + 1));
  const Scalar _tmp163 = _tmp138 * _tmp41;
  const Scalar _tmp164 = _tmp104 * _tmp105;
  const Scalar _tmp165 = _tmp41 * _tmp93;
  const Scalar _tmp166 = _tmp123 * _tmp125 * _tmp41 + _tmp127 * _tmp130 * _tmp41 +
                         _tmp135 * _tmp136 * _tmp41 + _tmp137 * _tmp163 - _tmp164 * _tmp165 +
                         _tmp34 * _tmp97;
  const Scalar _tmp167 = _tmp147 * _tmp83;
  const Scalar _tmp168 = _tmp126 * _tmp130;
  const Scalar _tmp169 =
      _tmp125 * _tmp146 * _tmp83 + _tmp136 * _tmp143 * _tmp83 - _tmp167 * _tmp34 - _tmp168 * _tmp84;
  const Scalar _tmp170 = Scalar(1.0) / (_tmp169);
  const Scalar _tmp171 = std::asinh(_tmp166 * _tmp170);
  const Scalar _tmp172 = Scalar(1.4083112389913199) * _tmp169;
  const Scalar _tmp173 =
      -_tmp171 * _tmp172 - std::sqrt(Scalar(std::pow(Scalar(-_tmp56 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp58 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp174 = Scalar(0.71007031138673404) * _tmp170;
  const Scalar _tmp175 = _tmp173 * _tmp174;
  const Scalar _tmp176 = std::pow(_tmp169, Scalar(-2));
  const Scalar _tmp177 = _tmp167 * _tmp176;
  const Scalar _tmp178 = _tmp105 * _tmp31;
  const Scalar _tmp179 =
      (-_tmp166 * _tmp177 + _tmp170 * (_tmp161 * _tmp163 - _tmp165 * _tmp178 - _tmp97)) /
      std::sqrt(Scalar(std::pow(_tmp166, Scalar(2)) * _tmp176 + 1));
  const Scalar _tmp180 = Scalar(1.4083112389913199) * _tmp167;
  const Scalar _tmp181 = Scalar(1.0) * _tmp171;
  const Scalar _tmp182 = -_tmp120 * _tmp125 * _tmp95 - _tmp128 * _tmp130 -
                         _tmp133 * _tmp136 * _tmp95 - _tmp137 * _tmp139 + _tmp164 + _tmp34 * _tmp96;
  const Scalar _tmp183 =
      _tmp121 * _tmp125 * _tmp91 + _tmp134 * _tmp136 * _tmp91 + _tmp148 * _tmp34 + _tmp168;
  const Scalar _tmp184 = Scalar(1.0) / (_tmp183);
  const Scalar _tmp185 = std::asinh(_tmp182 * _tmp184);
  const Scalar _tmp186 = Scalar(1.4083112389913199) * _tmp183;
  const Scalar _tmp187 =
      -_tmp185 * _tmp186 - std::sqrt(Scalar(std::pow(Scalar(-_tmp74 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp77 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp188 = std::pow(_tmp183, Scalar(-2));
  const Scalar _tmp189 = _tmp148 * _tmp188;
  const Scalar _tmp190 = Scalar(1.4083112389913199) * _tmp148;
  const Scalar _tmp191 = (_tmp182 * _tmp189 + _tmp184 * (-_tmp139 * _tmp161 + _tmp178 - _tmp96)) /
                         std::sqrt(Scalar(std::pow(_tmp182, Scalar(2)) * _tmp188 + 1));
  const Scalar _tmp192 = Scalar(0.71007031138673404) * _tmp184;
  const Scalar _tmp193 = _tmp187 * _tmp192;
  const Scalar _tmp194 = Scalar(1.0) * _tmp185;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp33 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_b(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp32 + p_b(0, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp154 * (-Scalar(1.0) * _tmp162 * std::cosh(_tmp153) -
                          (-Scalar(0.71007031138673404) * _tmp155 * _tmp160 +
                           _tmp156 * (-_tmp152 * _tmp158 - _tmp154 * _tmp162)) *
                              std::cosh(_tmp157)) +
               _tmp158 * (-std::sinh(_tmp153) - std::sinh(_tmp157));
  _res(2, 0) = _tmp172 * (-Scalar(1.0) * _tmp179 * std::cosh(_tmp181) -
                          (-Scalar(0.71007031138673404) * _tmp173 * _tmp177 +
                           _tmp174 * (-_tmp171 * _tmp180 - _tmp172 * _tmp179)) *
                              std::cosh(_tmp175)) +
               _tmp180 * (-std::sinh(_tmp175) - std::sinh(_tmp181));
  _res(3, 0) = _tmp186 * (-Scalar(1.0) * _tmp191 * std::cosh(_tmp194) -
                          (Scalar(0.71007031138673404) * _tmp187 * _tmp189 +
                           _tmp192 * (_tmp185 * _tmp190 - _tmp186 * _tmp191)) *
                              std::cosh(_tmp193)) -
               _tmp190 * (-std::sinh(_tmp193) - std::sinh(_tmp194));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
