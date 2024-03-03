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
 * Symbolic function: IK_residual_func_cost4_wrt_fv1_Nl12
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost4WrtFv1Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 580

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
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp8 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp9 = 2 * _tmp8;
  const Scalar _tmp10 = _tmp5 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = _tmp11 * _tmp3;
  const Scalar _tmp13 = _tmp10 - _tmp12;
  const Scalar _tmp14 = Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = -_tmp14;
  const Scalar _tmp16 = _tmp3 * _tmp9;
  const Scalar _tmp17 = _tmp11 * _tmp5;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp15 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp7;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp23 = 1 - 2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp25 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp26 = _tmp11 * _tmp8;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = _tmp24 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp33 = _tmp31 - p_c(0, 0);
  const Scalar _tmp34 = _tmp21 - p_c(1, 0);
  const Scalar _tmp35 = std::pow(Scalar(std::pow(_tmp33, Scalar(2)) + std::pow(_tmp34, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = _tmp33 * _tmp35;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp38 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = fh1 * (_tmp37 + _tmp40);
  const Scalar _tmp42 = Scalar(40.024799999999999) * _tmp27 + _tmp30 * fv1 + _tmp36 * _tmp41;
  const Scalar _tmp43 = -_tmp24 + _tmp28;
  const Scalar _tmp44 = _tmp22 + _tmp43;
  const Scalar _tmp45 = -_tmp7;
  const Scalar _tmp46 = -_tmp18;
  const Scalar _tmp47 = _tmp15 + _tmp46;
  const Scalar _tmp48 = _tmp45 + _tmp47;
  const Scalar _tmp49 = Scalar(1.0) * _tmp48;
  const Scalar _tmp50 = -_tmp49;
  const Scalar _tmp51 = _tmp47 + _tmp7;
  const Scalar _tmp52 = _tmp50 + _tmp51;
  const Scalar _tmp53 = _tmp19 + _tmp45;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp50 + _tmp53);
  const Scalar _tmp55 = -_tmp22;
  const Scalar _tmp56 = _tmp29 + _tmp55;
  const Scalar _tmp57 = _tmp43 + _tmp55;
  const Scalar _tmp58 = Scalar(1.0) * _tmp57;
  const Scalar _tmp59 = _tmp54 * (-_tmp56 + _tmp58);
  const Scalar _tmp60 = _tmp52 * _tmp59;
  const Scalar _tmp61 = Scalar(1.0) / (-_tmp44 + _tmp58 - _tmp60);
  const Scalar _tmp62 = Scalar(1.0) * _tmp61;
  const Scalar _tmp63 = _tmp52 * _tmp54;
  const Scalar _tmp64 = Scalar(1.0) * _tmp62 * _tmp63 - Scalar(1.0) * _tmp62;
  const Scalar _tmp65 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 - p_b(0, 0);
  const Scalar _tmp67 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp68 = _tmp67 - p_b(1, 0);
  const Scalar _tmp69 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp68, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp70 = _tmp68 * _tmp69;
  const Scalar _tmp71 = _tmp66 * _tmp69;
  const Scalar _tmp72 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp73 = _tmp72 - p_a(0, 0);
  const Scalar _tmp74 = _tmp48 + position_vector(1, 0);
  const Scalar _tmp75 = _tmp74 - p_a(1, 0);
  const Scalar _tmp76 =
      std::sqrt(Scalar(std::pow(_tmp73, Scalar(2)) + std::pow(_tmp75, Scalar(2))));
  const Scalar _tmp77 = Scalar(1.0) / (_tmp76);
  const Scalar _tmp78 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp79 = _tmp76 * _tmp78;
  const Scalar _tmp80 = _tmp79 * (-_tmp48 * _tmp73 * _tmp77 + _tmp57 * _tmp75 * _tmp77);
  const Scalar _tmp81 = _tmp53 * _tmp71 - _tmp56 * _tmp70 + _tmp71 * _tmp80;
  const Scalar _tmp82 = _tmp75 * _tmp78;
  const Scalar _tmp83 = Scalar(1.0) / (-_tmp70 + _tmp71 * _tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp83;
  const Scalar _tmp85 = -_tmp37;
  const Scalar _tmp86 = _tmp40 + _tmp85;
  const Scalar _tmp87 = _tmp38 - _tmp39;
  const Scalar _tmp88 = _tmp85 + _tmp87;
  const Scalar _tmp89 = _tmp71 * _tmp88;
  const Scalar _tmp90 = _tmp70 * _tmp86 - _tmp82 * _tmp89;
  const Scalar _tmp91 = _tmp84 * _tmp90;
  const Scalar _tmp92 = -_tmp71 * _tmp86 + _tmp89;
  const Scalar _tmp93 = _tmp59 * _tmp91 - _tmp84 * _tmp92;
  const Scalar _tmp94 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp95 = _tmp94 - p_d(0, 0);
  const Scalar _tmp96 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp97 = _tmp96 - p_d(1, 0);
  const Scalar _tmp98 = std::pow(Scalar(std::pow(_tmp95, Scalar(2)) + std::pow(_tmp97, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp99 = _tmp95 * _tmp98;
  const Scalar _tmp100 = _tmp88 * _tmp99;
  const Scalar _tmp101 = _tmp97 * _tmp98;
  const Scalar _tmp102 = -_tmp101 + _tmp82 * _tmp99;
  const Scalar _tmp103 = _tmp102 * _tmp83;
  const Scalar _tmp104 = _tmp37 + _tmp87;
  const Scalar _tmp105 = -_tmp100 * _tmp82 + _tmp101 * _tmp104 - _tmp103 * _tmp90;
  const Scalar _tmp106 = _tmp100 - _tmp103 * _tmp92 - _tmp104 * _tmp99 - _tmp105 * _tmp59;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp108 = -_tmp101 * _tmp44 - _tmp103 * _tmp81 + _tmp51 * _tmp99 + _tmp80 * _tmp99;
  const Scalar _tmp109 = _tmp107 * _tmp108;
  const Scalar _tmp110 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp111 = _tmp106 * _tmp110;
  const Scalar _tmp112 = _tmp111 * (-_tmp109 * _tmp93 - _tmp81 * _tmp84);
  const Scalar _tmp113 = _tmp52 * _tmp61;
  const Scalar _tmp114 = _tmp112 + _tmp93;
  const Scalar _tmp115 = _tmp105 * _tmp107;
  const Scalar _tmp116 = _tmp112 * _tmp113 - _tmp114 * _tmp115 - _tmp91;
  const Scalar _tmp117 = Scalar(1.0) * _tmp54;
  const Scalar _tmp118 = _tmp34 * _tmp35;
  const Scalar _tmp119 = Scalar(1.0) * fh1;
  const Scalar _tmp120 = -_tmp118 * _tmp41 - Scalar(40.024799999999999) * _tmp13 - _tmp20 * fv1;
  const Scalar _tmp121 = _tmp59 * _tmp62;
  const Scalar _tmp122 = _tmp60 * _tmp62 + Scalar(1.0);
  const Scalar _tmp123 = -Scalar(1.0) * _tmp117 * _tmp122 + Scalar(1.0) * _tmp121;
  const Scalar _tmp124 = _tmp111 * _tmp62;
  const Scalar _tmp125 = Scalar(1.0) * _tmp110;
  const Scalar _tmp126 = -_tmp105 * _tmp125 + _tmp124 * _tmp52;
  const Scalar _tmp127 = fh1 * (_tmp118 * _tmp30 - _tmp20 * _tmp36);
  const Scalar _tmp128 = _tmp82 * _tmp83;
  const Scalar _tmp129 = _tmp128 * _tmp90 + _tmp82 * _tmp88;
  const Scalar _tmp130 = _tmp128 * _tmp92 - _tmp129 * _tmp59 - _tmp88;
  const Scalar _tmp131 = _tmp111 * (-_tmp109 * _tmp130 + _tmp128 * _tmp81 - _tmp80);
  const Scalar _tmp132 = _tmp130 + _tmp131;
  const Scalar _tmp133 = _tmp113 * _tmp131 - _tmp115 * _tmp132 + _tmp129;
  const Scalar _tmp134 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp135 = _tmp49 * _tmp59 + _tmp58;
  const Scalar _tmp136 = _tmp135 * _tmp61;
  const Scalar _tmp137 = 0;
  const Scalar _tmp138 = _tmp54 * (-_tmp115 * _tmp137 - _tmp136 * _tmp52 + _tmp50);
  const Scalar _tmp139 = -Scalar(1.0) * _tmp136 - Scalar(1.0) * _tmp138 + Scalar(1.0);
  const Scalar _tmp140 =
      _tmp118 * _tmp119 * (_tmp112 * _tmp62 - _tmp116 * _tmp117) +
      _tmp119 * _tmp36 * (-_tmp117 * _tmp133 + _tmp131 * _tmp62) + _tmp120 * _tmp123 +
      Scalar(1.0) * _tmp127 * (-_tmp117 * _tmp126 + _tmp124) + _tmp134 * _tmp139 + _tmp42 * _tmp64;
  const Scalar _tmp141 = _tmp107 * _tmp137;
  const Scalar _tmp142 = _tmp103 * _tmp141;
  const Scalar _tmp143 = _tmp79 * (_tmp141 * _tmp99 - _tmp142 * _tmp71);
  const Scalar _tmp144 = _tmp102 * _tmp107;
  const Scalar _tmp145 = -_tmp132 * _tmp144 - _tmp82;
  const Scalar _tmp146 = _tmp71 * _tmp83;
  const Scalar _tmp147 = _tmp107 * _tmp99;
  const Scalar _tmp148 = _tmp36 * fh1;
  const Scalar _tmp149 = _tmp102 * _tmp110 * _tmp84;
  const Scalar _tmp150 = -_tmp114 * _tmp144 + Scalar(1.0);
  const Scalar _tmp151 = _tmp118 * fh1;
  const Scalar _tmp152 = -_tmp127 * _tmp79 * (_tmp125 * _tmp99 - _tmp149 * _tmp71) -
                         _tmp134 * _tmp143 -
                         _tmp148 * _tmp79 * (_tmp132 * _tmp147 + _tmp145 * _tmp146 + Scalar(1.0)) -
                         _tmp151 * _tmp79 * (_tmp114 * _tmp147 + _tmp146 * _tmp150);
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = std::asinh(_tmp140 * _tmp153);
  const Scalar _tmp155 = Scalar(1.0) * _tmp154;
  const Scalar _tmp156 = std::pow(_tmp152, Scalar(-2));
  const Scalar _tmp157 = _tmp143 * _tmp156;
  const Scalar _tmp158 = _tmp14 + _tmp45 + _tmp46;
  const Scalar _tmp159 =
      (-_tmp140 * _tmp157 + _tmp153 * (_tmp123 * _tmp158 - _tmp139 + _tmp30 * _tmp64)) /
      std::sqrt(Scalar(std::pow(_tmp140, Scalar(2)) * _tmp156 + 1));
  const Scalar _tmp160 = Scalar(1.4083112389913199) * _tmp152;
  const Scalar _tmp161 =
      -_tmp154 * _tmp160 - std::sqrt(Scalar(std::pow(Scalar(-_tmp72 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp74 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp162 = Scalar(1.4083112389913199) * _tmp143;
  const Scalar _tmp163 = Scalar(0.71007031138673404) * _tmp153;
  const Scalar _tmp164 = _tmp161 * _tmp163;
  const Scalar _tmp165 = _tmp122 * _tmp54;
  const Scalar _tmp166 = _tmp42 * _tmp62;
  const Scalar _tmp167 = _tmp116 * _tmp151 * _tmp54 + _tmp120 * _tmp165 +
                         _tmp126 * _tmp127 * _tmp54 + _tmp133 * _tmp148 * _tmp54 +
                         _tmp134 * _tmp138 - _tmp166 * _tmp63;
  const Scalar _tmp168 = _tmp134 * _tmp141;
  const Scalar _tmp169 = -_tmp103 * _tmp168 - _tmp127 * _tmp149 + _tmp145 * _tmp148 * _tmp83 +
                         _tmp150 * _tmp151 * _tmp83;
  const Scalar _tmp170 = Scalar(1.0) / (_tmp169);
  const Scalar _tmp171 = std::asinh(_tmp167 * _tmp170);
  const Scalar _tmp172 = Scalar(1.4083112389913199) * _tmp169;
  const Scalar _tmp173 =
      -_tmp171 * _tmp172 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp67 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp174 = Scalar(0.71007031138673404) * _tmp170;
  const Scalar _tmp175 = _tmp173 * _tmp174;
  const Scalar _tmp176 = std::pow(_tmp169, Scalar(-2));
  const Scalar _tmp177 = _tmp142 * _tmp176;
  const Scalar _tmp178 = _tmp30 * _tmp62;
  const Scalar _tmp179 =
      (-_tmp167 * _tmp177 + _tmp170 * (-_tmp138 + _tmp158 * _tmp165 - _tmp178 * _tmp63)) /
      std::sqrt(Scalar(std::pow(_tmp167, Scalar(2)) * _tmp176 + 1));
  const Scalar _tmp180 = Scalar(1.4083112389913199) * _tmp141;
  const Scalar _tmp181 = _tmp103 * _tmp180;
  const Scalar _tmp182 = Scalar(1.0) * _tmp171;
  const Scalar _tmp183 = -_tmp112 * _tmp151 * _tmp61 - _tmp120 * _tmp121 - _tmp124 * _tmp127 -
                         _tmp131 * _tmp148 * _tmp61 + _tmp134 * _tmp136 + _tmp166;
  const Scalar _tmp184 =
      _tmp107 * _tmp114 * _tmp151 + _tmp107 * _tmp132 * _tmp148 + _tmp125 * _tmp127 + _tmp168;
  const Scalar _tmp185 = Scalar(1.0) / (_tmp184);
  const Scalar _tmp186 = std::asinh(_tmp183 * _tmp185);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = Scalar(1.4083112389913199) * _tmp184;
  const Scalar _tmp189 =
      -_tmp186 * _tmp188 - std::sqrt(Scalar(std::pow(Scalar(-_tmp94 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp96 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp190 = Scalar(0.71007031138673404) * _tmp185;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = std::pow(_tmp184, Scalar(-2));
  const Scalar _tmp193 = _tmp141 * _tmp192;
  const Scalar _tmp194 = (_tmp183 * _tmp193 + _tmp185 * (-_tmp121 * _tmp158 - _tmp136 + _tmp178)) /
                         std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp192 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp32 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp32 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_c(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp31 + p_c(0, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp160 * (-Scalar(1.0) * _tmp159 * std::cosh(_tmp155) -
                          (-Scalar(0.71007031138673404) * _tmp157 * _tmp161 +
                           _tmp163 * (-_tmp154 * _tmp162 - _tmp159 * _tmp160)) *
                              std::cosh(_tmp164)) +
               _tmp162 * (-std::sinh(_tmp155) - std::sinh(_tmp164));
  _res(2, 0) = _tmp172 * (-Scalar(1.0) * _tmp179 * std::cosh(_tmp182) -
                          (-Scalar(0.71007031138673404) * _tmp173 * _tmp177 +
                           _tmp174 * (-_tmp171 * _tmp181 - _tmp172 * _tmp179)) *
                              std::cosh(_tmp175)) +
               _tmp181 * (-std::sinh(_tmp175) - std::sinh(_tmp182));
  _res(3, 0) = -_tmp180 * (-std::sinh(_tmp187) - std::sinh(_tmp191)) +
               _tmp188 * (-Scalar(1.0) * _tmp194 * std::cosh(_tmp187) -
                          (Scalar(0.71007031138673404) * _tmp189 * _tmp193 +
                           _tmp190 * (_tmp180 * _tmp186 - _tmp188 * _tmp194)) *
                              std::cosh(_tmp191));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
