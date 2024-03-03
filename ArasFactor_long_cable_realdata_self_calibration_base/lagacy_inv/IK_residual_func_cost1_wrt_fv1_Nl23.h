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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl23
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl23(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 587

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (197)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp5 = 2 * _tmp4;
  const Scalar _tmp6 = _tmp3 * _tmp5;
  const Scalar _tmp7 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = -_tmp10;
  const Scalar _tmp12 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp13 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp5 * _tmp7;
  const Scalar _tmp16 = _tmp3 * _tmp8;
  const Scalar _tmp17 = _tmp15 - _tmp16;
  const Scalar _tmp18 = Scalar(0.010999999999999999) * _tmp17;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = _tmp14 + _tmp19;
  const Scalar _tmp21 = _tmp11 + _tmp20;
  const Scalar _tmp22 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp23 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = 2 * _tmp3 * _tmp7;
  const Scalar _tmp27 = _tmp4 * _tmp8;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp31 = _tmp29 + _tmp30;
  const Scalar _tmp32 = _tmp25 + _tmp31;
  const Scalar _tmp33 = _tmp32 + position_vector(0, 0);
  const Scalar _tmp34 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp35 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp36 = _tmp10 + _tmp20;
  const Scalar _tmp37 = Scalar(1.0) * _tmp36;
  const Scalar _tmp38 = -_tmp37;
  const Scalar _tmp39 = -_tmp14;
  const Scalar _tmp40 = _tmp10 + _tmp39;
  const Scalar _tmp41 = _tmp19 + _tmp40;
  const Scalar _tmp42 = Scalar(1.0) / (_tmp38 + _tmp41);
  const Scalar _tmp43 = _tmp11 + _tmp19 + _tmp39;
  const Scalar _tmp44 = _tmp38 + _tmp43;
  const Scalar _tmp45 = _tmp29 - _tmp30;
  const Scalar _tmp46 = _tmp24 + _tmp45;
  const Scalar _tmp47 = _tmp24 + _tmp31;
  const Scalar _tmp48 = Scalar(1.0) * _tmp47;
  const Scalar _tmp49 = _tmp42 * (-_tmp46 + _tmp48);
  const Scalar _tmp50 = _tmp37 * _tmp49 + _tmp48;
  const Scalar _tmp51 = _tmp44 * _tmp49;
  const Scalar _tmp52 = _tmp25 + _tmp45;
  const Scalar _tmp53 = Scalar(1.0) / (_tmp48 - _tmp51 - _tmp52);
  const Scalar _tmp54 = _tmp50 * _tmp53;
  const Scalar _tmp55 = Scalar(0.20999999999999999) * _tmp26 - Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp56 = -Scalar(0.010999999999999999) * _tmp12 -
                        Scalar(0.010999999999999999) * _tmp23 + Scalar(-0.010999999999999999);
  const Scalar _tmp57 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp58 = _tmp56 - _tmp57;
  const Scalar _tmp59 = _tmp55 + _tmp58;
  const Scalar _tmp60 = _tmp46 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 - p_b(0, 0);
  const Scalar _tmp62 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp63 = _tmp62 - p_b(1, 0);
  const Scalar _tmp64 = std::pow(Scalar(std::pow(_tmp61, Scalar(2)) + std::pow(_tmp63, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp67 = _tmp66 - p_c(0, 0);
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp36 + position_vector(1, 0);
  const Scalar _tmp70 = _tmp69 - p_c(1, 0);
  const Scalar _tmp71 = _tmp68 * _tmp70;
  const Scalar _tmp72 = _tmp56 + _tmp57;
  const Scalar _tmp73 = _tmp55 + _tmp72;
  const Scalar _tmp74 = _tmp61 * _tmp64;
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = _tmp59 * _tmp65 - _tmp71 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (-_tmp65 + _tmp71 * _tmp74);
  const Scalar _tmp78 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp79 = _tmp78 - p_a(1, 0);
  const Scalar _tmp80 = _tmp52 + position_vector(0, 0);
  const Scalar _tmp81 = _tmp80 - p_a(0, 0);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp79, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp79 * _tmp82;
  const Scalar _tmp84 = _tmp81 * _tmp82;
  const Scalar _tmp85 = _tmp71 * _tmp84 - _tmp83;
  const Scalar _tmp86 = _tmp77 * _tmp85;
  const Scalar _tmp87 = _tmp71 * _tmp73;
  const Scalar _tmp88 = -_tmp55;
  const Scalar _tmp89 = _tmp58 + _tmp88;
  const Scalar _tmp90 = -_tmp76 * _tmp86 + _tmp83 * _tmp89 - _tmp84 * _tmp87;
  const Scalar _tmp91 = -_tmp59 * _tmp74 + _tmp75;
  const Scalar _tmp92 = -_tmp49 * _tmp90 + _tmp73 * _tmp84 - _tmp84 * _tmp89 - _tmp86 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = 0;
  const Scalar _tmp95 = _tmp42 * (_tmp38 - _tmp44 * _tmp54 - _tmp90 * _tmp94);
  const Scalar _tmp96 = -Scalar(1.0) * _tmp54 - Scalar(1.0) * _tmp95 + Scalar(1.0);
  const Scalar _tmp97 = _tmp33 - p_d(0, 0);
  const Scalar _tmp98 = _tmp22 - p_d(1, 0);
  const Scalar _tmp99 = std::pow(Scalar(std::pow(_tmp97, Scalar(2)) + std::pow(_tmp98, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp100 = _tmp97 * _tmp99;
  const Scalar _tmp101 = fh1 * (_tmp72 + _tmp88);
  const Scalar _tmp102 = _tmp100 * _tmp101 + Scalar(40.024799999999999) * _tmp28 + _tmp32 * fv1;
  const Scalar _tmp103 = Scalar(1.0) * _tmp53;
  const Scalar _tmp104 = _tmp103 * _tmp44;
  const Scalar _tmp105 = -Scalar(1.0) * _tmp103 + Scalar(1.0) * _tmp104 * _tmp42;
  const Scalar _tmp106 = _tmp71 * _tmp77;
  const Scalar _tmp107 = _tmp106 * _tmp76 + _tmp87;
  const Scalar _tmp108 = _tmp106 * _tmp91 - _tmp107 * _tmp49 - _tmp73;
  const Scalar _tmp109 =
      std::sqrt(Scalar(std::pow(_tmp67, Scalar(2)) + std::pow(_tmp70, Scalar(2))));
  const Scalar _tmp110 = Scalar(1.0) / (_tmp109);
  const Scalar _tmp111 = _tmp109 * _tmp68;
  const Scalar _tmp112 = _tmp111 * (-_tmp110 * _tmp36 * _tmp67 + _tmp110 * _tmp47 * _tmp70);
  const Scalar _tmp113 = _tmp112 * _tmp74 + _tmp41 * _tmp74 - _tmp46 * _tmp65;
  const Scalar _tmp114 = _tmp112 * _tmp84 - _tmp113 * _tmp86 + _tmp43 * _tmp84 - _tmp52 * _tmp83;
  const Scalar _tmp115 = _tmp114 * _tmp93;
  const Scalar _tmp116 = Scalar(1.0) / (_tmp114);
  const Scalar _tmp117 = _tmp116 * _tmp92;
  const Scalar _tmp118 = _tmp117 * (_tmp106 * _tmp113 - _tmp108 * _tmp115 - _tmp112);
  const Scalar _tmp119 = _tmp108 + _tmp118;
  const Scalar _tmp120 = _tmp90 * _tmp93;
  const Scalar _tmp121 = _tmp44 * _tmp53;
  const Scalar _tmp122 = _tmp107 + _tmp118 * _tmp121 - _tmp119 * _tmp120;
  const Scalar _tmp123 = Scalar(1.0) * _tmp42;
  const Scalar _tmp124 = _tmp100 * fh1;
  const Scalar _tmp125 = Scalar(1.0) * _tmp77;
  const Scalar _tmp126 = _tmp125 * _tmp76;
  const Scalar _tmp127 = -_tmp125 * _tmp91 + _tmp126 * _tmp49;
  const Scalar _tmp128 = _tmp117 * (-_tmp113 * _tmp125 - _tmp115 * _tmp127);
  const Scalar _tmp129 = _tmp127 + _tmp128;
  const Scalar _tmp130 = -_tmp120 * _tmp129 + _tmp121 * _tmp128 - _tmp126;
  const Scalar _tmp131 = _tmp98 * _tmp99;
  const Scalar _tmp132 = _tmp131 * fh1;
  const Scalar _tmp133 = -_tmp101 * _tmp131 - Scalar(40.024799999999999) * _tmp17 - _tmp21 * fv1;
  const Scalar _tmp134 = _tmp103 * _tmp51 + Scalar(1.0);
  const Scalar _tmp135 = _tmp103 * _tmp49;
  const Scalar _tmp136 = -Scalar(1.0) * _tmp123 * _tmp134 + Scalar(1.0) * _tmp135;
  const Scalar _tmp137 = Scalar(1.0) * _tmp116;
  const Scalar _tmp138 = _tmp104 * _tmp117 - _tmp137 * _tmp90;
  const Scalar _tmp139 = _tmp103 * _tmp117;
  const Scalar _tmp140 = fh1 * (-_tmp100 * _tmp21 + _tmp131 * _tmp32);
  const Scalar _tmp141 =
      _tmp102 * _tmp105 + Scalar(1.0) * _tmp124 * (_tmp103 * _tmp118 - _tmp122 * _tmp123) +
      Scalar(1.0) * _tmp132 * (_tmp103 * _tmp128 - _tmp123 * _tmp130) + _tmp133 * _tmp136 +
      Scalar(1.0) * _tmp140 * (-_tmp123 * _tmp138 + _tmp139) + _tmp35 * _tmp96;
  const Scalar _tmp142 = _tmp86 * _tmp94;
  const Scalar _tmp143 = _tmp111 * (-_tmp142 * _tmp74 + _tmp84 * _tmp94);
  const Scalar _tmp144 = _tmp85 * _tmp93;
  const Scalar _tmp145 = -_tmp129 * _tmp144 + Scalar(1.0);
  const Scalar _tmp146 = _tmp74 * _tmp77;
  const Scalar _tmp147 = _tmp84 * _tmp93;
  const Scalar _tmp148 = -_tmp119 * _tmp144 - _tmp71;
  const Scalar _tmp149 =
      -_tmp111 * _tmp124 * (_tmp119 * _tmp147 + _tmp146 * _tmp148 + Scalar(1.0)) -
      _tmp111 * _tmp132 * (_tmp129 * _tmp147 + _tmp145 * _tmp146) -
      _tmp111 * _tmp140 * (-_tmp137 * _tmp74 * _tmp86 + _tmp137 * _tmp84) - _tmp143 * _tmp35;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 = std::asinh(_tmp141 * _tmp150);
  const Scalar _tmp152 = Scalar(1.0) * _tmp151;
  const Scalar _tmp153 = std::pow(_tmp149, Scalar(-2));
  const Scalar _tmp154 = _tmp143 * _tmp153;
  const Scalar _tmp155 = _tmp18 + _tmp40;
  const Scalar _tmp156 =
      (-_tmp141 * _tmp154 + _tmp150 * (_tmp105 * _tmp32 + _tmp136 * _tmp155 - _tmp96)) /
      std::sqrt(Scalar(std::pow(_tmp141, Scalar(2)) * _tmp153 + 1));
  const Scalar _tmp157 = Scalar(1.4083112389913199) * _tmp149;
  const Scalar _tmp158 =
      -_tmp151 * _tmp157 - std::sqrt(Scalar(std::pow(Scalar(-_tmp66 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp69 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp159 = Scalar(0.71007031138673404) * _tmp150;
  const Scalar _tmp160 = _tmp158 * _tmp159;
  const Scalar _tmp161 = Scalar(0.71007031138673404) * _tmp154;
  const Scalar _tmp162 = Scalar(1.4083112389913199) * _tmp143;
  const Scalar _tmp163 = _tmp134 * _tmp42;
  const Scalar _tmp164 = _tmp102 * _tmp103;
  const Scalar _tmp165 = _tmp42 * _tmp44;
  const Scalar _tmp166 = _tmp122 * _tmp124 * _tmp42 + _tmp130 * _tmp132 * _tmp42 +
                         _tmp133 * _tmp163 + _tmp138 * _tmp140 * _tmp42 - _tmp164 * _tmp165 +
                         _tmp35 * _tmp95;
  const Scalar _tmp167 = _tmp35 * _tmp94;
  const Scalar _tmp168 = _tmp137 * _tmp140;
  const Scalar _tmp169 =
      _tmp124 * _tmp148 * _tmp77 + _tmp132 * _tmp145 * _tmp77 - _tmp167 * _tmp86 - _tmp168 * _tmp86;
  const Scalar _tmp170 = Scalar(1.0) / (_tmp169);
  const Scalar _tmp171 = std::asinh(_tmp166 * _tmp170);
  const Scalar _tmp172 = Scalar(1.0) * _tmp171;
  const Scalar _tmp173 = Scalar(0.71007031138673404) * _tmp170;
  const Scalar _tmp174 = Scalar(1.4083112389913199) * _tmp169;
  const Scalar _tmp175 =
      -_tmp171 * _tmp174 - std::sqrt(Scalar(std::pow(Scalar(-_tmp60 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp62 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp176 = _tmp173 * _tmp175;
  const Scalar _tmp177 = Scalar(1.4083112389913199) * _tmp94;
  const Scalar _tmp178 = _tmp177 * _tmp86;
  const Scalar _tmp179 = std::pow(_tmp169, Scalar(-2));
  const Scalar _tmp180 = _tmp142 * _tmp179;
  const Scalar _tmp181 = Scalar(0.71007031138673404) * _tmp180;
  const Scalar _tmp182 = _tmp103 * _tmp32;
  const Scalar _tmp183 =
      (-_tmp166 * _tmp180 + _tmp170 * (_tmp155 * _tmp163 - _tmp165 * _tmp182 - _tmp95)) /
      std::sqrt(Scalar(std::pow(_tmp166, Scalar(2)) * _tmp179 + 1));
  const Scalar _tmp184 =
      _tmp119 * _tmp124 * _tmp93 + _tmp129 * _tmp132 * _tmp93 + _tmp167 + _tmp168;
  const Scalar _tmp185 = Scalar(1.0) / (_tmp184);
  const Scalar _tmp186 = Scalar(0.71007031138673404) * _tmp185;
  const Scalar _tmp187 = -_tmp118 * _tmp124 * _tmp53 - _tmp128 * _tmp132 * _tmp53 -
                         _tmp133 * _tmp135 - _tmp139 * _tmp140 + _tmp164 + _tmp35 * _tmp54;
  const Scalar _tmp188 = std::asinh(_tmp185 * _tmp187);
  const Scalar _tmp189 = Scalar(1.4083112389913199) * _tmp184;
  const Scalar _tmp190 =
      -_tmp188 * _tmp189 - std::sqrt(Scalar(std::pow(Scalar(-_tmp78 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp80 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp191 = _tmp186 * _tmp190;
  const Scalar _tmp192 = Scalar(1.0) * _tmp188;
  const Scalar _tmp193 = std::pow(_tmp184, Scalar(-2));
  const Scalar _tmp194 = _tmp193 * _tmp94;
  const Scalar _tmp195 = Scalar(0.71007031138673404) * _tmp194;
  const Scalar _tmp196 = (_tmp185 * (-_tmp135 * _tmp155 + _tmp182 - _tmp54) + _tmp187 * _tmp194) /
                         std::sqrt(Scalar(std::pow(_tmp187, Scalar(2)) * _tmp193 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp34 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp34 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_d(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp33 + p_d(0, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp157 * (Scalar(1.0) * _tmp156 * std::sinh(_tmp152) - _tmp161 * p_c(2, 0) -
                  (-_tmp158 * _tmp161 + _tmp159 * (-_tmp151 * _tmp162 - _tmp156 * _tmp157)) *
                      std::sinh(_tmp160)) -
      _tmp162 * (_tmp159 * p_c(2, 0) + std::cosh(_tmp152) - std::cosh(_tmp160));
  _res(2, 0) =
      -_tmp174 * (-_tmp181 * p_b(2, 0) + Scalar(1.0) * _tmp183 * std::sinh(_tmp172) -
                  (_tmp173 * (-_tmp171 * _tmp178 - _tmp174 * _tmp183) - _tmp175 * _tmp181) *
                      std::sinh(_tmp176)) -
      _tmp178 * (_tmp173 * p_b(2, 0) + std::cosh(_tmp172) - std::cosh(_tmp176));
  _res(3, 0) = _tmp177 * (_tmp186 * p_a(2, 0) - std::cosh(_tmp191) + std::cosh(_tmp192)) -
               _tmp189 * (_tmp195 * p_a(2, 0) + Scalar(1.0) * _tmp196 * std::sinh(_tmp192) -
                          (_tmp186 * (_tmp177 * _tmp188 - _tmp189 * _tmp196) + _tmp190 * _tmp195) *
                              std::sinh(_tmp191));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
