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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl19
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl19(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 585

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (193)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = 2 * _tmp4;
  const Scalar _tmp6 = _tmp3 * _tmp5;
  const Scalar _tmp7 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = -_tmp10;
  const Scalar _tmp12 = 2 * _tmp3 * _tmp7;
  const Scalar _tmp13 = _tmp4 * _tmp8;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp15;
  const Scalar _tmp17 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp18 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 + _tmp19;
  const Scalar _tmp21 = _tmp11 + _tmp20;
  const Scalar _tmp22 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp24 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp5 * _tmp7;
  const Scalar _tmp27 = _tmp3 * _tmp8;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp25 + _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(0, 0);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp35 = -_tmp34;
  const Scalar _tmp36 = -Scalar(0.010999999999999999) * _tmp17 -
                        Scalar(0.010999999999999999) * _tmp24 + Scalar(-0.010999999999999999);
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp26 - Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp38 = _tmp36 + _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = -_tmp23;
  const Scalar _tmp41 = _tmp25 + _tmp29;
  const Scalar _tmp42 = _tmp40 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp44 = _tmp43 - p_b(0, 0);
  const Scalar _tmp45 = -_tmp19;
  const Scalar _tmp46 = _tmp16 + _tmp45;
  const Scalar _tmp47 = _tmp10 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 - p_b(1, 0);
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp44, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp44 * _tmp50;
  const Scalar _tmp52 = _tmp49 * _tmp50;
  const Scalar _tmp53 = _tmp34 + _tmp38;
  const Scalar _tmp54 = _tmp10 + _tmp20;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_c(1, 0);
  const Scalar _tmp57 = _tmp23 + _tmp41;
  const Scalar _tmp58 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp59 = _tmp58 - p_c(0, 0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp36 - _tmp37;
  const Scalar _tmp63 = _tmp35 + _tmp62;
  const Scalar _tmp64 = _tmp30 + _tmp40;
  const Scalar _tmp65 = _tmp64 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 - p_a(0, 0);
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 = _tmp11 + _tmp46;
  const Scalar _tmp69 = _tmp68 + position_vector(1, 0);
  const Scalar _tmp70 = _tmp69 - p_a(1, 0);
  const Scalar _tmp71 = _tmp67 * _tmp70;
  const Scalar _tmp72 = _tmp63 * _tmp71;
  const Scalar _tmp73 = _tmp59 * _tmp60;
  const Scalar _tmp74 = _tmp53 * _tmp61 - _tmp72 * _tmp73;
  const Scalar _tmp75 = _tmp51 * _tmp71 - _tmp52;
  const Scalar _tmp76 = Scalar(1.0) / (-_tmp61 + _tmp71 * _tmp73);
  const Scalar _tmp77 = _tmp75 * _tmp76;
  const Scalar _tmp78 = _tmp51 * _tmp63;
  const Scalar _tmp79 = _tmp39 * _tmp52 - _tmp71 * _tmp78 - _tmp74 * _tmp77;
  const Scalar _tmp80 = Scalar(1.0) * _tmp68;
  const Scalar _tmp81 = -_tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp54 + _tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp64;
  const Scalar _tmp84 = -_tmp57 + _tmp83;
  const Scalar _tmp85 = _tmp82 * _tmp84;
  const Scalar _tmp86 = -_tmp53 * _tmp73 + _tmp63 * _tmp73;
  const Scalar _tmp87 = -_tmp39 * _tmp51 - _tmp77 * _tmp86 + _tmp78 - _tmp79 * _tmp85;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 =
      std::sqrt(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp70, Scalar(2))));
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp67 * _tmp89;
  const Scalar _tmp92 = _tmp91 * (_tmp64 * _tmp70 * _tmp90 - _tmp66 * _tmp68 * _tmp90);
  const Scalar _tmp93 = _tmp54 * _tmp73 - _tmp57 * _tmp61 + _tmp73 * _tmp92;
  const Scalar _tmp94 = _tmp71 * _tmp76;
  const Scalar _tmp95 = _tmp72 + _tmp74 * _tmp94;
  const Scalar _tmp96 = -_tmp63 - _tmp85 * _tmp95 + _tmp86 * _tmp94;
  const Scalar _tmp97 = -_tmp42 * _tmp52 + _tmp47 * _tmp51 + _tmp51 * _tmp92 - _tmp77 * _tmp93;
  const Scalar _tmp98 = _tmp88 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp100 = _tmp87 * _tmp99;
  const Scalar _tmp101 = _tmp100 * (-_tmp92 + _tmp93 * _tmp94 - _tmp96 * _tmp98);
  const Scalar _tmp102 = _tmp88 * (_tmp101 + _tmp96);
  const Scalar _tmp103 = -_tmp102 * _tmp75 - _tmp71;
  const Scalar _tmp104 = _tmp73 * _tmp76;
  const Scalar _tmp105 = _tmp32 - p_d(0, 0);
  const Scalar _tmp106 = _tmp22 - p_d(1, 0);
  const Scalar _tmp107 =
      std::pow(Scalar(std::pow(_tmp105, Scalar(2)) + std::pow(_tmp106, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp108 = _tmp105 * _tmp107;
  const Scalar _tmp109 = _tmp108 * fh1;
  const Scalar _tmp110 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp111 = _tmp80 * _tmp85 + _tmp83;
  const Scalar _tmp112 = 0;
  const Scalar _tmp113 = _tmp112 * _tmp77;
  const Scalar _tmp114 = _tmp91 * (_tmp112 * _tmp51 - _tmp113 * _tmp73);
  const Scalar _tmp115 = Scalar(1.0) * _tmp99;
  const Scalar _tmp116 = _tmp106 * _tmp107;
  const Scalar _tmp117 = fh1 * (-_tmp108 * _tmp21 + _tmp116 * _tmp31);
  const Scalar _tmp118 = Scalar(1.0) * _tmp76;
  const Scalar _tmp119 = Scalar(1.0) * _tmp82;
  const Scalar _tmp120 = -_tmp118 * _tmp86 + _tmp119 * _tmp74 * _tmp76 * _tmp84;
  const Scalar _tmp121 = _tmp100 * (-_tmp118 * _tmp93 - _tmp120 * _tmp98);
  const Scalar _tmp122 = _tmp88 * (_tmp120 + _tmp121);
  const Scalar _tmp123 = -_tmp122 * _tmp75 + Scalar(1.0);
  const Scalar _tmp124 = _tmp116 * fh1;
  const Scalar _tmp125 = -_tmp109 * _tmp91 * (_tmp102 * _tmp51 + _tmp103 * _tmp104 + Scalar(1.0)) -
                         _tmp110 * _tmp114 -
                         _tmp117 * _tmp91 * (_tmp115 * _tmp51 - _tmp115 * _tmp73 * _tmp77) -
                         _tmp124 * _tmp91 * (_tmp104 * _tmp123 + _tmp122 * _tmp51);
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = fh1 * (_tmp34 + _tmp62);
  const Scalar _tmp128 = -_tmp116 * _tmp127 - Scalar(40.024799999999999) * _tmp14 - _tmp21 * fv1;
  const Scalar _tmp129 = _tmp47 + _tmp81;
  const Scalar _tmp130 = _tmp129 * _tmp85;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 - _tmp42 + _tmp83);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp130 * _tmp132 + Scalar(1.0);
  const Scalar _tmp134 = _tmp132 * _tmp85;
  const Scalar _tmp135 = -Scalar(1.0) * _tmp119 * _tmp133 + Scalar(1.0) * _tmp134;
  const Scalar _tmp136 = _tmp100 * _tmp132;
  const Scalar _tmp137 = -_tmp115 * _tmp79 + _tmp129 * _tmp136;
  const Scalar _tmp138 = _tmp129 * _tmp131;
  const Scalar _tmp139 = -_tmp118 * _tmp74 + _tmp121 * _tmp138 - _tmp122 * _tmp79;
  const Scalar _tmp140 = _tmp101 * _tmp138 - _tmp102 * _tmp79 + _tmp95;
  const Scalar _tmp141 = _tmp108 * _tmp127 + Scalar(40.024799999999999) * _tmp28 + _tmp31 * fv1;
  const Scalar _tmp142 = _tmp129 * _tmp82;
  const Scalar _tmp143 = Scalar(1.0) * _tmp132 * _tmp142 - Scalar(1.0) * _tmp132;
  const Scalar _tmp144 = _tmp111 * _tmp131;
  const Scalar _tmp145 = _tmp82 * (-_tmp112 * _tmp79 - _tmp129 * _tmp144 + _tmp81);
  const Scalar _tmp146 = -Scalar(1.0) * _tmp144 - Scalar(1.0) * _tmp145 + Scalar(1.0);
  const Scalar _tmp147 = Scalar(1.0) * _tmp109 * (_tmp101 * _tmp132 - _tmp119 * _tmp140) +
                         _tmp110 * _tmp146 +
                         Scalar(1.0) * _tmp117 * (-_tmp119 * _tmp137 + _tmp136) +
                         Scalar(1.0) * _tmp124 * (-_tmp119 * _tmp139 + _tmp121 * _tmp132) +
                         _tmp128 * _tmp135 + _tmp141 * _tmp143;
  const Scalar _tmp148 = std::asinh(_tmp126 * _tmp147);
  const Scalar _tmp149 = Scalar(1.4083112389913199) * _tmp125;
  const Scalar _tmp150 =
      -_tmp148 * _tmp149 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp69 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp151 = Scalar(0.71007031138673404) * _tmp126;
  const Scalar _tmp152 = _tmp150 * _tmp151;
  const Scalar _tmp153 = Scalar(1.0) * _tmp148;
  const Scalar _tmp154 = Scalar(1.4083112389913199) * _tmp114;
  const Scalar _tmp155 = std::pow(_tmp125, Scalar(-2));
  const Scalar _tmp156 = _tmp114 * _tmp155;
  const Scalar _tmp157 = Scalar(0.71007031138673404) * _tmp156;
  const Scalar _tmp158 = _tmp10 + _tmp15 + _tmp45;
  const Scalar _tmp159 =
      (_tmp126 * (_tmp135 * _tmp158 + _tmp143 * _tmp31 - _tmp146) - _tmp147 * _tmp156) /
      std::sqrt(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp155 + 1));
  const Scalar _tmp160 = _tmp115 * _tmp117;
  const Scalar _tmp161 = _tmp110 * _tmp112;
  const Scalar _tmp162 =
      _tmp103 * _tmp109 * _tmp76 + _tmp123 * _tmp124 * _tmp76 - _tmp160 * _tmp77 - _tmp161 * _tmp77;
  const Scalar _tmp163 = Scalar(1.0) / (_tmp162);
  const Scalar _tmp164 = _tmp133 * _tmp82;
  const Scalar _tmp165 = _tmp132 * _tmp141;
  const Scalar _tmp166 = _tmp109 * _tmp140 * _tmp82 + _tmp110 * _tmp145 +
                         _tmp117 * _tmp137 * _tmp82 + _tmp124 * _tmp139 * _tmp82 +
                         _tmp128 * _tmp164 - _tmp142 * _tmp165;
  const Scalar _tmp167 = std::asinh(_tmp163 * _tmp166);
  const Scalar _tmp168 = Scalar(1.0) * _tmp167;
  const Scalar _tmp169 = Scalar(0.71007031138673404) * _tmp163;
  const Scalar _tmp170 = Scalar(1.4083112389913199) * _tmp162;
  const Scalar _tmp171 =
      -_tmp167 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp55 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp58 + p_c(0, 0)), Scalar(2))));
  const Scalar _tmp172 = _tmp169 * _tmp171;
  const Scalar _tmp173 = Scalar(1.4083112389913199) * _tmp112;
  const Scalar _tmp174 = _tmp173 * _tmp77;
  const Scalar _tmp175 = std::pow(_tmp162, Scalar(-2));
  const Scalar _tmp176 = _tmp113 * _tmp175;
  const Scalar _tmp177 = _tmp132 * _tmp31;
  const Scalar _tmp178 =
      (_tmp163 * (-_tmp142 * _tmp177 - _tmp145 + _tmp158 * _tmp164) - _tmp166 * _tmp176) /
      std::sqrt(Scalar(std::pow(_tmp166, Scalar(2)) * _tmp175 + 1));
  const Scalar _tmp179 = Scalar(0.71007031138673404) * _tmp176;
  const Scalar _tmp180 = _tmp102 * _tmp109 + _tmp122 * _tmp124 + _tmp160 + _tmp161;
  const Scalar _tmp181 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp182 = _tmp112 * _tmp181;
  const Scalar _tmp183 = Scalar(0.71007031138673404) * _tmp182;
  const Scalar _tmp184 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp185 = -_tmp101 * _tmp109 * _tmp131 + _tmp110 * _tmp144 - _tmp117 * _tmp136 -
                         _tmp121 * _tmp124 * _tmp131 - _tmp128 * _tmp134 + _tmp165;
  const Scalar _tmp186 = std::asinh(_tmp184 * _tmp185);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = (_tmp182 * _tmp185 + _tmp184 * (-_tmp134 * _tmp158 - _tmp144 + _tmp177)) /
                         std::sqrt(Scalar(_tmp181 * std::pow(_tmp185, Scalar(2)) + 1));
  const Scalar _tmp189 = Scalar(1.4083112389913199) * _tmp180;
  const Scalar _tmp190 =
      -_tmp186 * _tmp189 - std::sqrt(Scalar(std::pow(Scalar(-_tmp43 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp48 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp191 = Scalar(0.71007031138673404) * _tmp184;
  const Scalar _tmp192 = _tmp190 * _tmp191;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp33 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp33 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_d(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp32 + p_d(0, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp149 * (-_tmp157 * p_a(2, 0) + Scalar(1.0) * _tmp159 * std::sinh(_tmp153) -
                  (-_tmp150 * _tmp157 + _tmp151 * (-_tmp148 * _tmp154 - _tmp149 * _tmp159)) *
                      std::sinh(_tmp152)) -
      _tmp154 * (_tmp151 * p_a(2, 0) - std::cosh(_tmp152) + std::cosh(_tmp153));
  _res(2, 0) =
      -_tmp170 * (Scalar(1.0) * _tmp178 * std::sinh(_tmp168) - _tmp179 * p_c(2, 0) -
                  (_tmp169 * (-_tmp167 * _tmp174 - _tmp170 * _tmp178) - _tmp171 * _tmp179) *
                      std::sinh(_tmp172)) -
      _tmp174 * (_tmp169 * p_c(2, 0) + std::cosh(_tmp168) - std::cosh(_tmp172));
  _res(3, 0) = _tmp173 * (_tmp191 * p_b(2, 0) + std::cosh(_tmp187) - std::cosh(_tmp192)) -
               _tmp189 * (_tmp183 * p_b(2, 0) + Scalar(1.0) * _tmp188 * std::sinh(_tmp187) -
                          (_tmp183 * _tmp190 + _tmp191 * (_tmp173 * _tmp186 - _tmp188 * _tmp189)) *
                              std::sinh(_tmp192));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
