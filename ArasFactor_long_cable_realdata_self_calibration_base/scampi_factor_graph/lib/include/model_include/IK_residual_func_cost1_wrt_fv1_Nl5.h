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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl5
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 583

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (192)
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
  const Scalar _tmp13 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 +
                        Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999);
  const Scalar _tmp15 = _tmp5 * _tmp7;
  const Scalar _tmp16 = _tmp3 * _tmp8;
  const Scalar _tmp17 = _tmp15 - _tmp16;
  const Scalar _tmp18 = Scalar(0.010999999999999999) * _tmp17;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = -_tmp14 + _tmp19;
  const Scalar _tmp21 = _tmp11 + _tmp20;
  const Scalar _tmp22 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp27 = 2 * _tmp3 * _tmp7;
  const Scalar _tmp28 = _tmp4 * _tmp8;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = -_tmp26 + _tmp30;
  const Scalar _tmp32 = _tmp24 + _tmp31;
  const Scalar _tmp33 = _tmp32 + position_vector(0, 0);
  const Scalar _tmp34 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp35 = _tmp14 + _tmp19;
  const Scalar _tmp36 = _tmp11 + _tmp35;
  const Scalar _tmp37 = _tmp36 + position_vector(1, 0);
  const Scalar _tmp38 = _tmp23 + _tmp31;
  const Scalar _tmp39 = _tmp38 + position_vector(0, 0);
  const Scalar _tmp40 = _tmp33 - p_a(0, 0);
  const Scalar _tmp41 = _tmp22 - p_a(1, 0);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp40 * _tmp42;
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp27 - Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp45 = -_tmp44;
  const Scalar _tmp46 =
      -Scalar(0.010999999999999999) * _tmp12 - Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp47 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp48 = _tmp46 - _tmp47;
  const Scalar _tmp49 = fh1 * (_tmp45 + _tmp48);
  const Scalar _tmp50 = Scalar(40.024799999999999) * _tmp29 + _tmp32 * fv1 + _tmp43 * _tmp49;
  const Scalar _tmp51 = Scalar(1.0) * _tmp38;
  const Scalar _tmp52 = _tmp26 + _tmp30;
  const Scalar _tmp53 = _tmp24 + _tmp52;
  const Scalar _tmp54 = Scalar(1.0) * _tmp36;
  const Scalar _tmp55 = -_tmp54;
  const Scalar _tmp56 = _tmp10 + _tmp20;
  const Scalar _tmp57 = _tmp55 + _tmp56;
  const Scalar _tmp58 = _tmp10 + _tmp35;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp55 + _tmp58);
  const Scalar _tmp60 = _tmp23 + _tmp52;
  const Scalar _tmp61 = _tmp59 * (_tmp51 - _tmp60);
  const Scalar _tmp62 = _tmp57 * _tmp61;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp51 - _tmp53 - _tmp62);
  const Scalar _tmp64 = Scalar(1.0) * _tmp63;
  const Scalar _tmp65 = _tmp57 * _tmp64;
  const Scalar _tmp66 = Scalar(1.0) * _tmp59 * _tmp65 - Scalar(1.0) * _tmp64;
  const Scalar _tmp67 = _tmp41 * _tmp42;
  const Scalar _tmp68 = -Scalar(40.024799999999999) * _tmp17 - _tmp21 * fv1 - _tmp49 * _tmp67;
  const Scalar _tmp69 = _tmp59 * (_tmp62 * _tmp64 + Scalar(1.0));
  const Scalar _tmp70 = _tmp61 * _tmp64;
  const Scalar _tmp71 = -Scalar(1.0) * _tmp69 + Scalar(1.0) * _tmp70;
  const Scalar _tmp72 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp73 = _tmp51 + _tmp54 * _tmp61;
  const Scalar _tmp74 = _tmp63 * _tmp73;
  const Scalar _tmp75 = _tmp44 + _tmp48;
  const Scalar _tmp76 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp77 = _tmp76 - p_b(0, 0);
  const Scalar _tmp78 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp79 = _tmp78 - p_b(1, 0);
  const Scalar _tmp80 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp79, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp39 - p_d(0, 0);
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = _tmp37 - p_d(1, 0);
  const Scalar _tmp85 = _tmp83 * _tmp84;
  const Scalar _tmp86 = _tmp46 + _tmp47;
  const Scalar _tmp87 = _tmp45 + _tmp86;
  const Scalar _tmp88 = _tmp77 * _tmp80;
  const Scalar _tmp89 = _tmp87 * _tmp88;
  const Scalar _tmp90 = _tmp60 + position_vector(0, 0);
  const Scalar _tmp91 = _tmp90 - p_c(0, 0);
  const Scalar _tmp92 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp93 = _tmp92 - p_c(1, 0);
  const Scalar _tmp94 = std::pow(Scalar(std::pow(_tmp91, Scalar(2)) + std::pow(_tmp93, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp95 = _tmp91 * _tmp94;
  const Scalar _tmp96 = _tmp87 * _tmp95;
  const Scalar _tmp97 = _tmp44 + _tmp86;
  const Scalar _tmp98 = _tmp93 * _tmp94;
  const Scalar _tmp99 = -_tmp85 * _tmp96 + _tmp97 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp85 * _tmp95 - _tmp98);
  const Scalar _tmp101 = -_tmp81 + _tmp85 * _tmp88;
  const Scalar _tmp102 = _tmp100 * _tmp101;
  const Scalar _tmp103 = -_tmp102 * _tmp99 + _tmp75 * _tmp81 - _tmp85 * _tmp89;
  const Scalar _tmp104 = -_tmp95 * _tmp97 + _tmp96;
  const Scalar _tmp105 = -_tmp102 * _tmp104 - _tmp103 * _tmp61 - _tmp75 * _tmp88 + _tmp89;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = 0;
  const Scalar _tmp108 = _tmp59 * (-_tmp103 * _tmp107 + _tmp55 - _tmp57 * _tmp74);
  const Scalar _tmp109 = -Scalar(1.0) * _tmp108 - Scalar(1.0) * _tmp74 + Scalar(1.0);
  const Scalar _tmp110 =
      std::sqrt(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp84, Scalar(2))));
  const Scalar _tmp111 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp112 = _tmp110 * _tmp83;
  const Scalar _tmp113 = _tmp112 * (-_tmp111 * _tmp36 * _tmp82 + _tmp111 * _tmp38 * _tmp84);
  const Scalar _tmp114 = _tmp113 * _tmp95 + _tmp58 * _tmp95 - _tmp60 * _tmp98;
  const Scalar _tmp115 = _tmp100 * _tmp85;
  const Scalar _tmp116 = _tmp115 * _tmp99 + _tmp85 * _tmp87;
  const Scalar _tmp117 = _tmp104 * _tmp115 - _tmp116 * _tmp61 - _tmp87;
  const Scalar _tmp118 = -_tmp102 * _tmp114 + _tmp113 * _tmp88 - _tmp53 * _tmp81 + _tmp56 * _tmp88;
  const Scalar _tmp119 = _tmp106 * _tmp118;
  const Scalar _tmp120 = Scalar(1.0) / (_tmp118);
  const Scalar _tmp121 = _tmp105 * _tmp120;
  const Scalar _tmp122 = _tmp121 * (-_tmp113 + _tmp114 * _tmp115 - _tmp117 * _tmp119);
  const Scalar _tmp123 = _tmp57 * _tmp63;
  const Scalar _tmp124 = _tmp106 * (_tmp117 + _tmp122);
  const Scalar _tmp125 = -_tmp103 * _tmp124 + _tmp116 + _tmp122 * _tmp123;
  const Scalar _tmp126 = Scalar(1.0) * _tmp59;
  const Scalar _tmp127 = _tmp43 * fh1;
  const Scalar _tmp128 = Scalar(1.0) * _tmp120;
  const Scalar _tmp129 = -_tmp103 * _tmp128 + _tmp121 * _tmp65;
  const Scalar _tmp130 = _tmp121 * _tmp64;
  const Scalar _tmp131 = fh1 * (-_tmp21 * _tmp43 + _tmp32 * _tmp67);
  const Scalar _tmp132 = Scalar(1.0) * _tmp100;
  const Scalar _tmp133 = _tmp132 * _tmp99;
  const Scalar _tmp134 = -_tmp104 * _tmp132 + _tmp133 * _tmp61;
  const Scalar _tmp135 = _tmp121 * (-_tmp114 * _tmp132 - _tmp119 * _tmp134);
  const Scalar _tmp136 = _tmp106 * (_tmp134 + _tmp135);
  const Scalar _tmp137 = -_tmp103 * _tmp136 + _tmp123 * _tmp135 - _tmp133;
  const Scalar _tmp138 = _tmp67 * fh1;
  const Scalar _tmp139 = _tmp109 * _tmp72 +
                         Scalar(1.0) * _tmp127 * (_tmp122 * _tmp64 - _tmp125 * _tmp126) +
                         Scalar(1.0) * _tmp131 * (-_tmp126 * _tmp129 + _tmp130) +
                         Scalar(1.0) * _tmp138 * (-_tmp126 * _tmp137 + _tmp135 * _tmp64) +
                         _tmp50 * _tmp66 + _tmp68 * _tmp71;
  const Scalar _tmp140 = -_tmp101 * _tmp124 - _tmp85;
  const Scalar _tmp141 = _tmp100 * _tmp95;
  const Scalar _tmp142 = _tmp101 * _tmp120 * _tmp132;
  const Scalar _tmp143 = -_tmp101 * _tmp136 + Scalar(1.0);
  const Scalar _tmp144 = _tmp102 * _tmp107;
  const Scalar _tmp145 = _tmp112 * (_tmp107 * _tmp88 - _tmp144 * _tmp95);
  const Scalar _tmp146 = -_tmp112 * _tmp127 * (_tmp124 * _tmp88 + _tmp140 * _tmp141 + Scalar(1.0)) -
                         _tmp112 * _tmp131 * (_tmp128 * _tmp88 - _tmp142 * _tmp95) -
                         _tmp112 * _tmp138 * (_tmp136 * _tmp88 + _tmp141 * _tmp143) -
                         _tmp145 * _tmp72;
  const Scalar _tmp147 = Scalar(1.0) / (_tmp146);
  const Scalar _tmp148 = std::asinh(_tmp139 * _tmp147);
  const Scalar _tmp149 = Scalar(1.4083112389913199) * _tmp146;
  const Scalar _tmp150 =
      -_tmp148 * _tmp149 - std::sqrt(Scalar(std::pow(Scalar(-_tmp37 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp39 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp151 = Scalar(0.71007031138673404) * _tmp147;
  const Scalar _tmp152 = _tmp150 * _tmp151;
  const Scalar _tmp153 = std::pow(_tmp146, Scalar(-2));
  const Scalar _tmp154 = _tmp145 * _tmp153;
  const Scalar _tmp155 = Scalar(0.71007031138673404) * _tmp154;
  const Scalar _tmp156 = Scalar(1.4083112389913199) * _tmp145;
  const Scalar _tmp157 = _tmp10 + _tmp14 + _tmp18;
  const Scalar _tmp158 =
      (-_tmp139 * _tmp154 + _tmp147 * (-_tmp109 + _tmp157 * _tmp71 + _tmp32 * _tmp66)) /
      std::sqrt(Scalar(std::pow(_tmp139, Scalar(2)) * _tmp153 + 1));
  const Scalar _tmp159 = Scalar(1.0) * _tmp148;
  const Scalar _tmp160 = _tmp107 * _tmp72;
  const Scalar _tmp161 = _tmp100 * _tmp127 * _tmp140 + _tmp100 * _tmp138 * _tmp143 -
                         _tmp102 * _tmp160 - _tmp131 * _tmp142;
  const Scalar _tmp162 = Scalar(1.0) / (_tmp161);
  const Scalar _tmp163 = Scalar(0.71007031138673404) * _tmp162;
  const Scalar _tmp164 = _tmp50 * _tmp64;
  const Scalar _tmp165 = _tmp57 * _tmp59;
  const Scalar _tmp166 = _tmp108 * _tmp72 + _tmp125 * _tmp127 * _tmp59 +
                         _tmp129 * _tmp131 * _tmp59 + _tmp137 * _tmp138 * _tmp59 -
                         _tmp164 * _tmp165 + _tmp68 * _tmp69;
  const Scalar _tmp167 = std::asinh(_tmp162 * _tmp166);
  const Scalar _tmp168 = Scalar(1.4083112389913199) * _tmp161;
  const Scalar _tmp169 =
      -_tmp167 * _tmp168 - std::sqrt(Scalar(std::pow(Scalar(-_tmp90 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp92 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp170 = _tmp163 * _tmp169;
  const Scalar _tmp171 = Scalar(1.0) * _tmp167;
  const Scalar _tmp172 = Scalar(1.4083112389913199) * _tmp107;
  const Scalar _tmp173 = _tmp102 * _tmp172;
  const Scalar _tmp174 = std::pow(_tmp161, Scalar(-2));
  const Scalar _tmp175 = _tmp144 * _tmp174;
  const Scalar _tmp176 = _tmp32 * _tmp64;
  const Scalar _tmp177 =
      (_tmp162 * (-_tmp108 + _tmp157 * _tmp69 - _tmp165 * _tmp176) - _tmp166 * _tmp175) /
      std::sqrt(Scalar(std::pow(_tmp166, Scalar(2)) * _tmp174 + 1));
  const Scalar _tmp178 = Scalar(0.71007031138673404) * _tmp175;
  const Scalar _tmp179 = _tmp124 * _tmp127 + _tmp128 * _tmp131 + _tmp136 * _tmp138 + _tmp160;
  const Scalar _tmp180 = Scalar(1.0) / (_tmp179);
  const Scalar _tmp181 = -_tmp122 * _tmp127 * _tmp63 - _tmp130 * _tmp131 -
                         _tmp135 * _tmp138 * _tmp63 + _tmp164 - _tmp68 * _tmp70 + _tmp72 * _tmp74;
  const Scalar _tmp182 = std::asinh(_tmp180 * _tmp181);
  const Scalar _tmp183 = Scalar(1.0) * _tmp182;
  const Scalar _tmp184 = Scalar(0.71007031138673404) * _tmp180;
  const Scalar _tmp185 = Scalar(1.4083112389913199) * _tmp179;
  const Scalar _tmp186 =
      -_tmp182 * _tmp185 - std::sqrt(Scalar(std::pow(Scalar(-_tmp76 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp78 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp187 = _tmp184 * _tmp186;
  const Scalar _tmp188 = std::pow(_tmp179, Scalar(-2));
  const Scalar _tmp189 = _tmp107 * _tmp188;
  const Scalar _tmp190 = (_tmp180 * (-_tmp157 * _tmp70 + _tmp176 - _tmp74) + _tmp181 * _tmp189) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp188 + 1));
  const Scalar _tmp191 = Scalar(0.71007031138673404) * _tmp189;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp34 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp34 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_a(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp33 + p_a(0, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp149 * (-_tmp155 * p_d(2, 0) + Scalar(1.0) * _tmp158 * std::sinh(_tmp159) -
                  (-_tmp150 * _tmp155 + _tmp151 * (-_tmp148 * _tmp156 - _tmp149 * _tmp158)) *
                      std::sinh(_tmp152)) -
      _tmp156 * (_tmp151 * p_d(2, 0) - std::cosh(_tmp152) + std::cosh(_tmp159));
  _res(2, 0) =
      -_tmp168 * (Scalar(1.0) * _tmp177 * std::sinh(_tmp171) - _tmp178 * p_c(2, 0) -
                  (_tmp163 * (-_tmp167 * _tmp173 - _tmp168 * _tmp177) - _tmp169 * _tmp178) *
                      std::sinh(_tmp170)) -
      _tmp173 * (_tmp163 * p_c(2, 0) - std::cosh(_tmp170) + std::cosh(_tmp171));
  _res(3, 0) = _tmp172 * (_tmp184 * p_b(2, 0) + std::cosh(_tmp183) - std::cosh(_tmp187)) -
               _tmp185 * (Scalar(1.0) * _tmp190 * std::sinh(_tmp183) + _tmp191 * p_b(2, 0) -
                          (_tmp184 * (_tmp172 * _tmp182 - _tmp185 * _tmp190) + _tmp186 * _tmp191) *
                              std::sinh(_tmp187));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
