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
 * Symbolic function: IK_residual_func_cost4_wrt_fv1_Nl7
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost4WrtFv1Nl7(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 576

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (188)
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
  const Scalar _tmp11 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp12 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 +
                        Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999);
  const Scalar _tmp14 = _tmp5 * _tmp7;
  const Scalar _tmp15 = _tmp3 * _tmp8;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp17;
  const Scalar _tmp19 = -_tmp13 + _tmp18;
  const Scalar _tmp20 = _tmp10 + _tmp19;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = 2 * _tmp3 * _tmp7;
  const Scalar _tmp25 = _tmp4 * _tmp8;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp33 = _tmp10 + _tmp13 + _tmp18;
  const Scalar _tmp34 = _tmp33 + position_vector(1, 0);
  const Scalar _tmp35 = _tmp34 - p_c(1, 0);
  const Scalar _tmp36 = _tmp27 + _tmp28;
  const Scalar _tmp37 = _tmp23 + _tmp36;
  const Scalar _tmp38 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp39 = _tmp38 - p_c(0, 0);
  const Scalar _tmp40 = std::pow(Scalar(std::pow(_tmp35, Scalar(2)) + std::pow(_tmp39, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp35 * _tmp40;
  const Scalar _tmp42 = -_tmp23;
  const Scalar _tmp43 = _tmp29 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 - p_a(0, 0);
  const Scalar _tmp46 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp47 = -_tmp10;
  const Scalar _tmp48 = _tmp19 + _tmp47;
  const Scalar _tmp49 = _tmp48 + position_vector(1, 0);
  const Scalar _tmp50 = _tmp49 - p_a(1, 0);
  const Scalar _tmp51 = _tmp46 * _tmp50;
  const Scalar _tmp52 = _tmp39 * _tmp40;
  const Scalar _tmp53 = -_tmp41 + _tmp51 * _tmp52;
  const Scalar _tmp54 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp55 = -_tmp54;
  const Scalar _tmp56 =
      -Scalar(0.010999999999999999) * _tmp11 - Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp57 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp58 = _tmp56 - _tmp57;
  const Scalar _tmp59 = _tmp55 + _tmp58;
  const Scalar _tmp60 = _tmp56 + _tmp57;
  const Scalar _tmp61 = _tmp54 + _tmp60;
  const Scalar _tmp62 = _tmp51 * _tmp59;
  const Scalar _tmp63 = _tmp55 + _tmp60;
  const Scalar _tmp64 = _tmp36 + _tmp42;
  const Scalar _tmp65 = _tmp64 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 - p_d(0, 0);
  const Scalar _tmp67 = _tmp13 + _tmp47;
  const Scalar _tmp68 = _tmp18 + _tmp67;
  const Scalar _tmp69 = _tmp68 + position_vector(1, 0);
  const Scalar _tmp70 = _tmp69 - p_d(1, 0);
  const Scalar _tmp71 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp70, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp72 = _tmp70 * _tmp71;
  const Scalar _tmp73 = _tmp66 * _tmp71;
  const Scalar _tmp74 = -_tmp62 * _tmp73 + _tmp63 * _tmp72;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp51 * _tmp73 - _tmp72);
  const Scalar _tmp76 = _tmp53 * _tmp75;
  const Scalar _tmp77 = _tmp41 * _tmp61 - _tmp52 * _tmp62 - _tmp74 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) * _tmp48;
  const Scalar _tmp79 = -_tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp68 + _tmp79);
  const Scalar _tmp81 = Scalar(1.0) * _tmp43;
  const Scalar _tmp82 = -_tmp64 + _tmp81;
  const Scalar _tmp83 = _tmp80 * _tmp82;
  const Scalar _tmp84 = _tmp75 * (_tmp59 * _tmp73 - _tmp63 * _tmp73);
  const Scalar _tmp85 = _tmp52 * _tmp59 - _tmp52 * _tmp61 - _tmp53 * _tmp84 - _tmp77 * _tmp83;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = Scalar(1.0) * _tmp80;
  const Scalar _tmp88 = _tmp74 * _tmp75 * _tmp82 * _tmp87 - Scalar(1.0) * _tmp84;
  const Scalar _tmp89 =
      std::sqrt(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp50, Scalar(2))));
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp46 * _tmp89;
  const Scalar _tmp92 = _tmp91 * (_tmp43 * _tmp50 * _tmp90 - _tmp45 * _tmp48 * _tmp90);
  const Scalar _tmp93 = -_tmp64 * _tmp72 + _tmp68 * _tmp73 + _tmp73 * _tmp92;
  const Scalar _tmp94 = _tmp33 * _tmp52 - _tmp37 * _tmp41 + _tmp52 * _tmp92 - _tmp76 * _tmp93;
  const Scalar _tmp95 = _tmp86 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) * _tmp75;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp98 = _tmp85 * _tmp97;
  const Scalar _tmp99 = _tmp98 * (-_tmp88 * _tmp95 - _tmp93 * _tmp96);
  const Scalar _tmp100 = _tmp86 * (_tmp88 + _tmp99);
  const Scalar _tmp101 = -_tmp100 * _tmp53 + Scalar(1.0);
  const Scalar _tmp102 = _tmp73 * _tmp75;
  const Scalar _tmp103 = _tmp31 - p_b(0, 0);
  const Scalar _tmp104 = _tmp21 - p_b(1, 0);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp103, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp104 * _tmp105;
  const Scalar _tmp107 = _tmp106 * fh1;
  const Scalar _tmp108 = Scalar(1.0) * _tmp97;
  const Scalar _tmp109 = _tmp73 * _tmp76;
  const Scalar _tmp110 = _tmp103 * _tmp105;
  const Scalar _tmp111 = fh1 * (_tmp106 * _tmp30 - _tmp110 * _tmp20);
  const Scalar _tmp112 = _tmp51 * _tmp75;
  const Scalar _tmp113 = _tmp112 * _tmp74 + _tmp62;
  const Scalar _tmp114 = -_tmp113 * _tmp83 + _tmp51 * _tmp84 - _tmp59;
  const Scalar _tmp115 = _tmp98 * (_tmp112 * _tmp93 - _tmp114 * _tmp95 - _tmp92);
  const Scalar _tmp116 = _tmp86 * (_tmp114 + _tmp115);
  const Scalar _tmp117 = -_tmp116 * _tmp53 - _tmp51;
  const Scalar _tmp118 = _tmp110 * fh1;
  const Scalar _tmp119 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp120 = _tmp78 * _tmp83 + _tmp81;
  const Scalar _tmp121 = 0;
  const Scalar _tmp122 = _tmp91 * (-_tmp109 * _tmp121 + _tmp121 * _tmp52);
  const Scalar _tmp123 = -_tmp107 * _tmp91 * (_tmp100 * _tmp52 + _tmp101 * _tmp102) -
                         _tmp111 * _tmp91 * (-_tmp108 * _tmp109 + _tmp108 * _tmp52) -
                         _tmp118 * _tmp91 * (_tmp102 * _tmp117 + _tmp116 * _tmp52 + Scalar(1.0)) -
                         _tmp119 * _tmp122;
  const Scalar _tmp124 = Scalar(1.0) / (_tmp123);
  const Scalar _tmp125 = _tmp33 + _tmp79;
  const Scalar _tmp126 = _tmp125 * _tmp83;
  const Scalar _tmp127 = Scalar(1.0) / (-_tmp126 - _tmp37 + _tmp81);
  const Scalar _tmp128 = Scalar(1.0) * _tmp127;
  const Scalar _tmp129 = _tmp125 * _tmp127;
  const Scalar _tmp130 = -_tmp100 * _tmp77 + _tmp129 * _tmp99 - _tmp74 * _tmp96;
  const Scalar _tmp131 = fh1 * (_tmp54 + _tmp58);
  const Scalar _tmp132 = _tmp110 * _tmp131 + Scalar(40.024799999999999) * _tmp26 + _tmp30 * fv1;
  const Scalar _tmp133 = _tmp125 * _tmp80;
  const Scalar _tmp134 = Scalar(1.0) * _tmp128 * _tmp133 - Scalar(1.0) * _tmp128;
  const Scalar _tmp135 = _tmp128 * _tmp98;
  const Scalar _tmp136 = -_tmp108 * _tmp77 + _tmp125 * _tmp135;
  const Scalar _tmp137 = _tmp120 * _tmp127;
  const Scalar _tmp138 = _tmp80 * (-_tmp121 * _tmp77 - _tmp125 * _tmp137 + _tmp79);
  const Scalar _tmp139 = -Scalar(1.0) * _tmp137 - Scalar(1.0) * _tmp138 + Scalar(1.0);
  const Scalar _tmp140 = -_tmp106 * _tmp131 - Scalar(40.024799999999999) * _tmp16 - _tmp20 * fv1;
  const Scalar _tmp141 = _tmp126 * _tmp128 + Scalar(1.0);
  const Scalar _tmp142 = _tmp128 * _tmp83;
  const Scalar _tmp143 = -Scalar(1.0) * _tmp141 * _tmp87 + Scalar(1.0) * _tmp142;
  const Scalar _tmp144 = _tmp113 + _tmp115 * _tmp129 - _tmp116 * _tmp77;
  const Scalar _tmp145 = Scalar(1.0) * _tmp107 * (_tmp128 * _tmp99 - _tmp130 * _tmp87) +
                         Scalar(1.0) * _tmp111 * (_tmp135 - _tmp136 * _tmp87) +
                         Scalar(1.0) * _tmp118 * (_tmp115 * _tmp128 - _tmp144 * _tmp87) +
                         _tmp119 * _tmp139 + _tmp132 * _tmp134 + _tmp140 * _tmp143;
  const Scalar _tmp146 = std::asinh(_tmp124 * _tmp145);
  const Scalar _tmp147 = Scalar(1.0) * _tmp146;
  const Scalar _tmp148 = std::pow(_tmp123, Scalar(-2));
  const Scalar _tmp149 = _tmp122 * _tmp148;
  const Scalar _tmp150 = _tmp17 + _tmp67;
  const Scalar _tmp151 =
      (_tmp124 * (_tmp134 * _tmp30 - _tmp139 + _tmp143 * _tmp150) - _tmp145 * _tmp149) /
      std::sqrt(Scalar(std::pow(_tmp145, Scalar(2)) * _tmp148 + 1));
  const Scalar _tmp152 = Scalar(1.4083112389913199) * _tmp122;
  const Scalar _tmp153 = Scalar(1.4083112389913199) * _tmp123;
  const Scalar _tmp154 = Scalar(0.71007031138673404) * _tmp124;
  const Scalar _tmp155 =
      -_tmp146 * _tmp153 - std::sqrt(Scalar(std::pow(Scalar(-_tmp44 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp49 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp156 = _tmp154 * _tmp155;
  const Scalar _tmp157 = _tmp119 * _tmp121;
  const Scalar _tmp158 = _tmp108 * _tmp111;
  const Scalar _tmp159 =
      _tmp101 * _tmp107 * _tmp75 + _tmp117 * _tmp118 * _tmp75 - _tmp157 * _tmp76 - _tmp158 * _tmp76;
  const Scalar _tmp160 = Scalar(1.0) / (_tmp159);
  const Scalar _tmp161 = _tmp141 * _tmp80;
  const Scalar _tmp162 = _tmp128 * _tmp132;
  const Scalar _tmp163 = _tmp107 * _tmp130 * _tmp80 + _tmp111 * _tmp136 * _tmp80 +
                         _tmp118 * _tmp144 * _tmp80 + _tmp119 * _tmp138 - _tmp133 * _tmp162 +
                         _tmp140 * _tmp161;
  const Scalar _tmp164 = std::asinh(_tmp160 * _tmp163);
  const Scalar _tmp165 = Scalar(1.4083112389913199) * _tmp159;
  const Scalar _tmp166 =
      -_tmp164 * _tmp165 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp69 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp167 = Scalar(0.71007031138673404) * _tmp160;
  const Scalar _tmp168 = _tmp166 * _tmp167;
  const Scalar _tmp169 = Scalar(1.0) * _tmp164;
  const Scalar _tmp170 = Scalar(1.4083112389913199) * _tmp121;
  const Scalar _tmp171 = _tmp170 * _tmp76;
  const Scalar _tmp172 = _tmp128 * _tmp30;
  const Scalar _tmp173 = std::pow(_tmp159, Scalar(-2));
  const Scalar _tmp174 = _tmp121 * _tmp173 * _tmp76;
  const Scalar _tmp175 =
      (_tmp160 * (-_tmp133 * _tmp172 - _tmp138 + _tmp150 * _tmp161) - _tmp163 * _tmp174) /
      std::sqrt(Scalar(std::pow(_tmp163, Scalar(2)) * _tmp173 + 1));
  const Scalar _tmp176 = _tmp100 * _tmp107 + _tmp116 * _tmp118 + _tmp157 + _tmp158;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = -_tmp107 * _tmp127 * _tmp99 - _tmp111 * _tmp135 -
                         _tmp115 * _tmp118 * _tmp127 + _tmp119 * _tmp137 - _tmp140 * _tmp142 +
                         _tmp162;
  const Scalar _tmp179 = std::asinh(_tmp177 * _tmp178);
  const Scalar _tmp180 = Scalar(1.0) * _tmp179;
  const Scalar _tmp181 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp182 = _tmp121 * _tmp181;
  const Scalar _tmp183 = (_tmp177 * (-_tmp137 - _tmp142 * _tmp150 + _tmp172) + _tmp178 * _tmp182) /
                         std::sqrt(Scalar(std::pow(_tmp178, Scalar(2)) * _tmp181 + 1));
  const Scalar _tmp184 = Scalar(1.4083112389913199) * _tmp176;
  const Scalar _tmp185 = Scalar(0.71007031138673404) * _tmp177;
  const Scalar _tmp186 =
      -_tmp179 * _tmp184 - std::sqrt(Scalar(std::pow(Scalar(-_tmp34 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp38 + p_c(0, 0)), Scalar(2))));
  const Scalar _tmp187 = _tmp185 * _tmp186;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp32 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp32 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_b(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp31 + p_b(0, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp152 * (-std::sinh(_tmp147) - std::sinh(_tmp156)) +
               _tmp153 * (-Scalar(1.0) * _tmp151 * std::cosh(_tmp147) -
                          (-Scalar(0.71007031138673404) * _tmp149 * _tmp155 +
                           _tmp154 * (-_tmp146 * _tmp152 - _tmp151 * _tmp153)) *
                              std::cosh(_tmp156));
  _res(2, 0) = _tmp165 * (-Scalar(1.0) * _tmp175 * std::cosh(_tmp169) -
                          (-Scalar(0.71007031138673404) * _tmp166 * _tmp174 +
                           _tmp167 * (-_tmp164 * _tmp171 - _tmp165 * _tmp175)) *
                              std::cosh(_tmp168)) +
               _tmp171 * (-std::sinh(_tmp168) - std::sinh(_tmp169));
  _res(3, 0) = -_tmp170 * (-std::sinh(_tmp180) - std::sinh(_tmp187)) +
               _tmp184 * (-Scalar(1.0) * _tmp183 * std::cosh(_tmp180) -
                          (Scalar(0.71007031138673404) * _tmp182 * _tmp186 +
                           _tmp185 * (_tmp170 * _tmp179 - _tmp183 * _tmp184)) *
                              std::cosh(_tmp187));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
