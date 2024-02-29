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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl14
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl14(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 579

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (191)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = 2 * _tmp3 * _tmp4;
  const Scalar _tmp6 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = 2 * _tmp6;
  const Scalar _tmp11 = _tmp10 * _tmp3;
  const Scalar _tmp12 = _tmp4 * _tmp7;
  const Scalar _tmp13 = _tmp11 - _tmp12;
  const Scalar _tmp14 = Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = -_tmp14;
  const Scalar _tmp16 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp17 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 +
                        Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999);
  const Scalar _tmp19 = _tmp15 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp9;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = _tmp10 * _tmp4;
  const Scalar _tmp25 = _tmp3 * _tmp7;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp5 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp33 = -_tmp18;
  const Scalar _tmp34 = _tmp15 + _tmp33 + _tmp9;
  const Scalar _tmp35 = _tmp34 + position_vector(1, 0);
  const Scalar _tmp36 = _tmp27 - _tmp28;
  const Scalar _tmp37 = _tmp23 + _tmp36;
  const Scalar _tmp38 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp39 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp40 = Scalar(1.0) * _tmp37;
  const Scalar _tmp41 = Scalar(1.0) * _tmp34;
  const Scalar _tmp42 = -_tmp41;
  const Scalar _tmp43 = -_tmp9;
  const Scalar _tmp44 = _tmp33 + _tmp43;
  const Scalar _tmp45 = _tmp15 + _tmp44;
  const Scalar _tmp46 = Scalar(1.0) / (_tmp42 + _tmp45);
  const Scalar _tmp47 = -_tmp23;
  const Scalar _tmp48 = _tmp36 + _tmp47;
  const Scalar _tmp49 = _tmp46 * (_tmp40 - _tmp48);
  const Scalar _tmp50 = _tmp40 + _tmp41 * _tmp49;
  const Scalar _tmp51 = _tmp29 + _tmp47;
  const Scalar _tmp52 = _tmp19 + _tmp43;
  const Scalar _tmp53 = _tmp42 + _tmp52;
  const Scalar _tmp54 = _tmp49 * _tmp53;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp40 - _tmp51 - _tmp54);
  const Scalar _tmp56 = Scalar(1.0) * _tmp55;
  const Scalar _tmp57 = _tmp50 * _tmp55;
  const Scalar _tmp58 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp59 =
      -Scalar(0.010999999999999999) * _tmp16 - Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp60 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp61 = _tmp59 - _tmp60;
  const Scalar _tmp62 = _tmp58 + _tmp61;
  const Scalar _tmp63 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp64 = _tmp63 - p_d(0, 0);
  const Scalar _tmp65 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 - p_d(1, 0);
  const Scalar _tmp67 = std::pow(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp66, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp68 = _tmp66 * _tmp67;
  const Scalar _tmp69 = -_tmp58;
  const Scalar _tmp70 = _tmp59 + _tmp60;
  const Scalar _tmp71 = _tmp69 + _tmp70;
  const Scalar _tmp72 = _tmp38 - p_b(0, 0);
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = _tmp35 - p_b(1, 0);
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = _tmp71 * _tmp75;
  const Scalar _tmp77 = _tmp64 * _tmp67;
  const Scalar _tmp78 = _tmp48 + position_vector(0, 0);
  const Scalar _tmp79 = _tmp78 - p_a(0, 0);
  const Scalar _tmp80 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp81 = _tmp80 - p_a(1, 0);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp79, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp79 * _tmp82;
  const Scalar _tmp84 = _tmp61 + _tmp69;
  const Scalar _tmp85 = _tmp81 * _tmp82;
  const Scalar _tmp86 = -_tmp76 * _tmp83 + _tmp84 * _tmp85;
  const Scalar _tmp87 = -_tmp68 + _tmp75 * _tmp77;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp75 * _tmp83 - _tmp85);
  const Scalar _tmp89 = _tmp87 * _tmp88;
  const Scalar _tmp90 = _tmp62 * _tmp68 - _tmp76 * _tmp77 - _tmp86 * _tmp89;
  const Scalar _tmp91 = _tmp88 * (_tmp71 * _tmp83 - _tmp83 * _tmp84);
  const Scalar _tmp92 = -_tmp49 * _tmp90 - _tmp62 * _tmp77 + _tmp71 * _tmp77 - _tmp87 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = 0;
  const Scalar _tmp95 = _tmp46 * (_tmp42 - _tmp53 * _tmp57 - _tmp90 * _tmp94);
  const Scalar _tmp96 = -Scalar(1.0) * _tmp50 * _tmp56 - Scalar(1.0) * _tmp95 + Scalar(1.0);
  const Scalar _tmp97 = Scalar(1.0) * _tmp88;
  const Scalar _tmp98 = _tmp86 * _tmp97;
  const Scalar _tmp99 = _tmp49 * _tmp98 - Scalar(1.0) * _tmp91;
  const Scalar _tmp100 =
      std::sqrt(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp74, Scalar(2))));
  const Scalar _tmp101 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp102 = _tmp100 * _tmp73;
  const Scalar _tmp103 = _tmp102 * (-_tmp101 * _tmp34 * _tmp72 + _tmp101 * _tmp37 * _tmp74);
  const Scalar _tmp104 = _tmp103 * _tmp83 + _tmp45 * _tmp83 - _tmp48 * _tmp85;
  const Scalar _tmp105 = _tmp103 * _tmp77 - _tmp104 * _tmp89 - _tmp51 * _tmp68 + _tmp52 * _tmp77;
  const Scalar _tmp106 = _tmp105 * _tmp93;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp108 = _tmp107 * _tmp92;
  const Scalar _tmp109 = _tmp108 * (-_tmp104 * _tmp97 - _tmp106 * _tmp99);
  const Scalar _tmp110 = _tmp53 * _tmp55;
  const Scalar _tmp111 = _tmp109 + _tmp99;
  const Scalar _tmp112 = _tmp90 * _tmp93;
  const Scalar _tmp113 = _tmp109 * _tmp110 - _tmp111 * _tmp112 - _tmp98;
  const Scalar _tmp114 = Scalar(1.0) * _tmp46;
  const Scalar _tmp115 = _tmp31 - p_c(0, 0);
  const Scalar _tmp116 = _tmp21 - p_c(1, 0);
  const Scalar _tmp117 =
      std::pow(Scalar(std::pow(_tmp115, Scalar(2)) + std::pow(_tmp116, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp118 = _tmp116 * _tmp117;
  const Scalar _tmp119 = _tmp118 * fh1;
  const Scalar _tmp120 = _tmp115 * _tmp117;
  const Scalar _tmp121 = fh1 * (_tmp58 + _tmp70);
  const Scalar _tmp122 = _tmp120 * _tmp121 + Scalar(40.024799999999999) * _tmp26 + _tmp30 * fv1;
  const Scalar _tmp123 = _tmp46 * _tmp53;
  const Scalar _tmp124 = Scalar(1.0) * _tmp123 * _tmp56 - Scalar(1.0) * _tmp56;
  const Scalar _tmp125 = -_tmp118 * _tmp121 - Scalar(40.024799999999999) * _tmp13 - _tmp20 * fv1;
  const Scalar _tmp126 = _tmp46 * (_tmp54 * _tmp56 + Scalar(1.0));
  const Scalar _tmp127 = _tmp49 * _tmp56;
  const Scalar _tmp128 = -Scalar(1.0) * _tmp126 + Scalar(1.0) * _tmp127;
  const Scalar _tmp129 = _tmp108 * _tmp56;
  const Scalar _tmp130 = Scalar(1.0) * _tmp107;
  const Scalar _tmp131 = _tmp129 * _tmp53 - _tmp130 * _tmp90;
  const Scalar _tmp132 = fh1 * (_tmp118 * _tmp30 - _tmp120 * _tmp20);
  const Scalar _tmp133 = _tmp75 * _tmp88;
  const Scalar _tmp134 = _tmp133 * _tmp86 + _tmp76;
  const Scalar _tmp135 = -_tmp134 * _tmp49 - _tmp71 + _tmp75 * _tmp91;
  const Scalar _tmp136 = _tmp108 * (-_tmp103 + _tmp104 * _tmp133 - _tmp106 * _tmp135);
  const Scalar _tmp137 = _tmp135 + _tmp136;
  const Scalar _tmp138 = _tmp110 * _tmp136 - _tmp112 * _tmp137 + _tmp134;
  const Scalar _tmp139 = _tmp120 * fh1;
  const Scalar _tmp140 =
      Scalar(1.0) * _tmp119 * (_tmp109 * _tmp56 - _tmp113 * _tmp114) + _tmp122 * _tmp124 +
      _tmp125 * _tmp128 + Scalar(1.0) * _tmp132 * (-_tmp114 * _tmp131 + _tmp129) +
      Scalar(1.0) * _tmp139 * (-_tmp114 * _tmp138 + _tmp136 * _tmp56) + _tmp39 * _tmp96;
  const Scalar _tmp141 = _tmp87 * _tmp93;
  const Scalar _tmp142 = -_tmp111 * _tmp141 + Scalar(1.0);
  const Scalar _tmp143 = _tmp83 * _tmp88;
  const Scalar _tmp144 = _tmp77 * _tmp93;
  const Scalar _tmp145 = _tmp89 * _tmp94;
  const Scalar _tmp146 = _tmp102 * (-_tmp145 * _tmp83 + _tmp77 * _tmp94);
  const Scalar _tmp147 = -_tmp137 * _tmp141 - _tmp75;
  const Scalar _tmp148 = _tmp107 * _tmp87 * _tmp97;
  const Scalar _tmp149 = -_tmp102 * _tmp119 * (_tmp111 * _tmp144 + _tmp142 * _tmp143) -
                         _tmp102 * _tmp132 * (_tmp130 * _tmp77 - _tmp148 * _tmp83) -
                         _tmp102 * _tmp139 * (_tmp137 * _tmp144 + _tmp143 * _tmp147 + Scalar(1.0)) -
                         _tmp146 * _tmp39;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 = std::asinh(_tmp140 * _tmp150);
  const Scalar _tmp152 = Scalar(1.4083112389913199) * _tmp149;
  const Scalar _tmp153 =
      -_tmp151 * _tmp152 - std::sqrt(Scalar(std::pow(Scalar(-_tmp35 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp38 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp154 = Scalar(0.71007031138673404) * _tmp150;
  const Scalar _tmp155 = _tmp153 * _tmp154;
  const Scalar _tmp156 = Scalar(1.0) * _tmp151;
  const Scalar _tmp157 = Scalar(1.4083112389913199) * _tmp146;
  const Scalar _tmp158 = std::pow(_tmp149, Scalar(-2));
  const Scalar _tmp159 = _tmp146 * _tmp158;
  const Scalar _tmp160 = _tmp14 + _tmp44;
  const Scalar _tmp161 =
      (-_tmp140 * _tmp159 + _tmp150 * (_tmp124 * _tmp30 + _tmp128 * _tmp160 - _tmp96)) /
      std::sqrt(Scalar(std::pow(_tmp140, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp162 = _tmp122 * _tmp56;
  const Scalar _tmp163 = _tmp113 * _tmp119 * _tmp46 - _tmp123 * _tmp162 + _tmp125 * _tmp126 +
                         _tmp131 * _tmp132 * _tmp46 + _tmp138 * _tmp139 * _tmp46 + _tmp39 * _tmp95;
  const Scalar _tmp164 = _tmp39 * _tmp94;
  const Scalar _tmp165 = _tmp119 * _tmp142 * _tmp88 - _tmp132 * _tmp148 +
                         _tmp139 * _tmp147 * _tmp88 - _tmp164 * _tmp89;
  const Scalar _tmp166 = Scalar(1.0) / (_tmp165);
  const Scalar _tmp167 = std::asinh(_tmp163 * _tmp166);
  const Scalar _tmp168 = Scalar(1.4083112389913199) * _tmp165;
  const Scalar _tmp169 =
      -_tmp167 * _tmp168 - std::sqrt(Scalar(std::pow(Scalar(-_tmp78 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp80 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp170 = Scalar(0.71007031138673404) * _tmp166;
  const Scalar _tmp171 = _tmp169 * _tmp170;
  const Scalar _tmp172 = Scalar(1.0) * _tmp167;
  const Scalar _tmp173 = Scalar(1.4083112389913199) * _tmp94;
  const Scalar _tmp174 = _tmp173 * _tmp89;
  const Scalar _tmp175 = std::pow(_tmp165, Scalar(-2));
  const Scalar _tmp176 = _tmp145 * _tmp175;
  const Scalar _tmp177 = _tmp30 * _tmp56;
  const Scalar _tmp178 =
      (-_tmp163 * _tmp176 + _tmp166 * (-_tmp123 * _tmp177 + _tmp126 * _tmp160 - _tmp95)) /
      std::sqrt(Scalar(std::pow(_tmp163, Scalar(2)) * _tmp175 + 1));
  const Scalar _tmp179 = -_tmp109 * _tmp119 * _tmp55 - _tmp125 * _tmp127 - _tmp129 * _tmp132 -
                         _tmp136 * _tmp139 * _tmp55 + _tmp162 + _tmp39 * _tmp57;
  const Scalar _tmp180 =
      _tmp111 * _tmp119 * _tmp93 + _tmp130 * _tmp132 + _tmp137 * _tmp139 * _tmp93 + _tmp164;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = std::asinh(_tmp179 * _tmp181);
  const Scalar _tmp183 = Scalar(1.4083112389913199) * _tmp180;
  const Scalar _tmp184 =
      -_tmp182 * _tmp183 - std::sqrt(Scalar(std::pow(Scalar(-_tmp63 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp65 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp185 = Scalar(0.71007031138673404) * _tmp181;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = Scalar(1.0) * _tmp182;
  const Scalar _tmp188 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp189 = _tmp188 * _tmp94;
  const Scalar _tmp190 = (_tmp179 * _tmp189 + _tmp181 * (-_tmp127 * _tmp160 + _tmp177 - _tmp57)) /
                         std::sqrt(Scalar(std::pow(_tmp179, Scalar(2)) * _tmp188 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp32 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp32 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_c(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp31 + p_c(0, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp152 * (-Scalar(1.0) * _tmp161 * std::cosh(_tmp156) -
                          (-Scalar(0.71007031138673404) * _tmp153 * _tmp159 +
                           _tmp154 * (-_tmp151 * _tmp157 - _tmp152 * _tmp161)) *
                              std::cosh(_tmp155)) +
               _tmp157 * (-std::sinh(_tmp155) - std::sinh(_tmp156));
  _res(2, 0) = _tmp168 * (-Scalar(1.0) * _tmp178 * std::cosh(_tmp172) -
                          (-Scalar(0.71007031138673404) * _tmp169 * _tmp176 +
                           _tmp170 * (-_tmp167 * _tmp174 - _tmp168 * _tmp178)) *
                              std::cosh(_tmp171)) +
               _tmp174 * (-std::sinh(_tmp171) - std::sinh(_tmp172));
  _res(3, 0) = -_tmp173 * (-std::sinh(_tmp186) - std::sinh(_tmp187)) +
               _tmp183 * (-Scalar(1.0) * _tmp190 * std::cosh(_tmp187) -
                          (Scalar(0.71007031138673404) * _tmp184 * _tmp189 +
                           _tmp185 * (_tmp173 * _tmp182 - _tmp183 * _tmp190)) *
                              std::cosh(_tmp186));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
