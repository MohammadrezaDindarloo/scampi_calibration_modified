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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl22
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl22(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 584

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (193)
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
  const Scalar _tmp10 = _tmp3 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = _tmp11 * _tmp5;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp5 * _tmp9;
  const Scalar _tmp15 = _tmp11 * _tmp3;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp17;
  const Scalar _tmp19 = -_tmp13 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp7;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp23 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp24 = _tmp11 * _tmp8;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = 1 - 2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp27 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp29 = _tmp26 - _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp33 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp34 = -_tmp22;
  const Scalar _tmp35 = _tmp29 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp37 = _tmp36 - p_a(0, 0);
  const Scalar _tmp38 = -_tmp7;
  const Scalar _tmp39 = _tmp19 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = _tmp40 - p_a(1, 0);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp37 * _tmp42;
  const Scalar _tmp44 = _tmp26 + _tmp28;
  const Scalar _tmp45 = _tmp34 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 - p_b(0, 0);
  const Scalar _tmp48 = _tmp13 + _tmp18;
  const Scalar _tmp49 = _tmp38 + _tmp48;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_b(1, 0);
  const Scalar _tmp52 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp51, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 = _tmp22 + _tmp44;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 - p_c(0, 0);
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = _tmp48 + _tmp7;
  const Scalar _tmp59 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 - p_c(1, 0);
  const Scalar _tmp61 = _tmp57 * _tmp60;
  const Scalar _tmp62 = _tmp47 * _tmp52;
  const Scalar _tmp63 = -_tmp53 + _tmp61 * _tmp62;
  const Scalar _tmp64 = _tmp41 * _tmp42;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp43 * _tmp61 - _tmp64);
  const Scalar _tmp66 = _tmp63 * _tmp65;
  const Scalar _tmp67 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp68 = -_tmp67;
  const Scalar _tmp69 =
      -Scalar(0.010999999999999999) * _tmp27 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp70 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp71 = _tmp69 + _tmp70;
  const Scalar _tmp72 = _tmp68 + _tmp71;
  const Scalar _tmp73 = _tmp69 - _tmp70;
  const Scalar _tmp74 = _tmp68 + _tmp73;
  const Scalar _tmp75 = _tmp67 + _tmp71;
  const Scalar _tmp76 = _tmp43 * _tmp75;
  const Scalar _tmp77 = -_tmp43 * _tmp74 + _tmp76;
  const Scalar _tmp78 = _tmp62 * _tmp75;
  const Scalar _tmp79 = -_tmp61 * _tmp76 + _tmp64 * _tmp74;
  const Scalar _tmp80 = _tmp53 * _tmp72 - _tmp61 * _tmp78 - _tmp66 * _tmp79;
  const Scalar _tmp81 = Scalar(1.0) * _tmp58;
  const Scalar _tmp82 = -_tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp39 + _tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp54;
  const Scalar _tmp85 = _tmp83 * (-_tmp35 + _tmp84);
  const Scalar _tmp86 = -_tmp62 * _tmp72 - _tmp66 * _tmp77 + _tmp78 - _tmp80 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp81 * _tmp85 + _tmp84;
  const Scalar _tmp89 = 0;
  const Scalar _tmp90 = _tmp66 * _tmp89;
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp60, Scalar(2))));
  const Scalar _tmp92 = _tmp57 * _tmp91;
  const Scalar _tmp93 = _tmp92 * (-_tmp43 * _tmp90 + _tmp62 * _tmp89);
  const Scalar _tmp94 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp95 = _tmp92 * (_tmp54 * _tmp60 * _tmp94 - _tmp56 * _tmp58 * _tmp94);
  const Scalar _tmp96 = -_tmp35 * _tmp64 + _tmp39 * _tmp43 + _tmp43 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) * _tmp65;
  const Scalar _tmp98 = _tmp79 * _tmp97;
  const Scalar _tmp99 = -_tmp77 * _tmp97 + _tmp85 * _tmp98;
  const Scalar _tmp100 = -_tmp45 * _tmp53 + _tmp49 * _tmp62 + _tmp62 * _tmp95 - _tmp66 * _tmp96;
  const Scalar _tmp101 = _tmp100 * _tmp87;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp86;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp99 - _tmp96 * _tmp97);
  const Scalar _tmp105 = _tmp87 * (_tmp104 + _tmp99);
  const Scalar _tmp106 = -_tmp105 * _tmp63 + Scalar(1.0);
  const Scalar _tmp107 = _tmp43 * _tmp65;
  const Scalar _tmp108 = _tmp31 - p_d(0, 0);
  const Scalar _tmp109 = _tmp21 - p_d(1, 0);
  const Scalar _tmp110 =
      std::pow(Scalar(std::pow(_tmp108, Scalar(2)) + std::pow(_tmp109, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp111 = _tmp109 * _tmp110;
  const Scalar _tmp112 = _tmp111 * fh1;
  const Scalar _tmp113 = Scalar(1.0) * _tmp102;
  const Scalar _tmp114 = _tmp108 * _tmp110;
  const Scalar _tmp115 = fh1 * (_tmp111 * _tmp30 - _tmp114 * _tmp20);
  const Scalar _tmp116 = _tmp61 * _tmp65;
  const Scalar _tmp117 = _tmp116 * _tmp79 + _tmp61 * _tmp75;
  const Scalar _tmp118 = _tmp116 * _tmp77 - _tmp117 * _tmp85 - _tmp75;
  const Scalar _tmp119 = _tmp103 * (-_tmp101 * _tmp118 + _tmp116 * _tmp96 - _tmp95);
  const Scalar _tmp120 = _tmp87 * (_tmp118 + _tmp119);
  const Scalar _tmp121 = -_tmp120 * _tmp63 - _tmp61;
  const Scalar _tmp122 = _tmp114 * fh1;
  const Scalar _tmp123 = -_tmp112 * _tmp92 * (_tmp105 * _tmp62 + _tmp106 * _tmp107) -
                         _tmp115 * _tmp92 * (-_tmp113 * _tmp43 * _tmp66 + _tmp113 * _tmp62) -
                         _tmp122 * _tmp92 * (_tmp107 * _tmp121 + _tmp120 * _tmp62 + Scalar(1.0)) -
                         _tmp33 * _tmp93;
  const Scalar _tmp124 = Scalar(1.0) / (_tmp123);
  const Scalar _tmp125 = _tmp49 + _tmp82;
  const Scalar _tmp126 = _tmp125 * _tmp85;
  const Scalar _tmp127 = Scalar(1.0) / (-_tmp126 - _tmp45 + _tmp84);
  const Scalar _tmp128 = Scalar(1.0) * _tmp127;
  const Scalar _tmp129 = _tmp125 * _tmp127;
  const Scalar _tmp130 = _tmp104 * _tmp129 - _tmp105 * _tmp80 - _tmp98;
  const Scalar _tmp131 = Scalar(1.0) * _tmp83;
  const Scalar _tmp132 = fh1 * (_tmp67 + _tmp73);
  const Scalar _tmp133 = -_tmp111 * _tmp132 - Scalar(40.024799999999999) * _tmp16 - _tmp20 * fv1;
  const Scalar _tmp134 = _tmp126 * _tmp128 + Scalar(1.0);
  const Scalar _tmp135 = _tmp128 * _tmp85;
  const Scalar _tmp136 = -Scalar(1.0) * _tmp131 * _tmp134 + Scalar(1.0) * _tmp135;
  const Scalar _tmp137 = _tmp117 + _tmp119 * _tmp129 - _tmp120 * _tmp80;
  const Scalar _tmp138 = _tmp103 * _tmp128;
  const Scalar _tmp139 = -_tmp113 * _tmp80 + _tmp125 * _tmp138;
  const Scalar _tmp140 = _tmp127 * _tmp88;
  const Scalar _tmp141 = _tmp83 * (-_tmp125 * _tmp140 - _tmp80 * _tmp89 + _tmp82);
  const Scalar _tmp142 = -Scalar(1.0) * _tmp128 * _tmp88 - Scalar(1.0) * _tmp141 + Scalar(1.0);
  const Scalar _tmp143 = _tmp114 * _tmp132 + Scalar(40.024799999999999) * _tmp25 + _tmp30 * fv1;
  const Scalar _tmp144 = _tmp125 * _tmp83;
  const Scalar _tmp145 = Scalar(1.0) * _tmp128 * _tmp144 - Scalar(1.0) * _tmp128;
  const Scalar _tmp146 = Scalar(1.0) * _tmp112 * (_tmp104 * _tmp128 - _tmp130 * _tmp131) +
                         Scalar(1.0) * _tmp115 * (-_tmp131 * _tmp139 + _tmp138) +
                         Scalar(1.0) * _tmp122 * (_tmp119 * _tmp128 - _tmp131 * _tmp137) +
                         _tmp133 * _tmp136 + _tmp142 * _tmp33 + _tmp143 * _tmp145;
  const Scalar _tmp147 = std::asinh(_tmp124 * _tmp146);
  const Scalar _tmp148 = Scalar(1.4083112389913199) * _tmp123;
  const Scalar _tmp149 =
      -_tmp147 * _tmp148 - std::sqrt(Scalar(std::pow(Scalar(-_tmp55 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp59 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp150 = Scalar(0.71007031138673404) * _tmp124;
  const Scalar _tmp151 = _tmp149 * _tmp150;
  const Scalar _tmp152 = Scalar(1.0) * _tmp147;
  const Scalar _tmp153 = Scalar(1.4083112389913199) * _tmp93;
  const Scalar _tmp154 = std::pow(_tmp123, Scalar(-2));
  const Scalar _tmp155 = _tmp154 * _tmp93;
  const Scalar _tmp156 = Scalar(0.71007031138673404) * _tmp155;
  const Scalar _tmp157 = _tmp13 + _tmp17 + _tmp38;
  const Scalar _tmp158 =
      (_tmp124 * (_tmp136 * _tmp157 - _tmp142 + _tmp145 * _tmp30) - _tmp146 * _tmp155) /
      std::sqrt(Scalar(std::pow(_tmp146, Scalar(2)) * _tmp154 + 1));
  const Scalar _tmp159 = _tmp83 * fh1;
  const Scalar _tmp160 = _tmp134 * _tmp83;
  const Scalar _tmp161 = _tmp128 * _tmp143;
  const Scalar _tmp162 = _tmp111 * _tmp130 * _tmp159 + _tmp114 * _tmp137 * _tmp159 +
                         _tmp115 * _tmp139 * _tmp83 + _tmp133 * _tmp160 + _tmp141 * _tmp33 -
                         _tmp144 * _tmp161;
  const Scalar _tmp163 = _tmp113 * _tmp115;
  const Scalar _tmp164 = _tmp33 * _tmp89;
  const Scalar _tmp165 =
      _tmp106 * _tmp112 * _tmp65 + _tmp121 * _tmp122 * _tmp65 - _tmp163 * _tmp66 - _tmp164 * _tmp66;
  const Scalar _tmp166 = Scalar(1.0) / (_tmp165);
  const Scalar _tmp167 = std::asinh(_tmp162 * _tmp166);
  const Scalar _tmp168 = Scalar(1.0) * _tmp167;
  const Scalar _tmp169 = std::pow(_tmp165, Scalar(-2));
  const Scalar _tmp170 = _tmp169 * _tmp90;
  const Scalar _tmp171 = _tmp128 * _tmp30;
  const Scalar _tmp172 =
      (-_tmp162 * _tmp170 + _tmp166 * (-_tmp141 - _tmp144 * _tmp171 + _tmp157 * _tmp160)) /
      std::sqrt(Scalar(std::pow(_tmp162, Scalar(2)) * _tmp169 + 1));
  const Scalar _tmp173 = Scalar(1.4083112389913199) * _tmp165;
  const Scalar _tmp174 =
      -_tmp167 * _tmp173 - std::sqrt(Scalar(std::pow(Scalar(-_tmp36 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp40 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp175 = Scalar(0.71007031138673404) * _tmp166;
  const Scalar _tmp176 = _tmp174 * _tmp175;
  const Scalar _tmp177 = Scalar(0.71007031138673404) * _tmp170;
  const Scalar _tmp178 = Scalar(1.4083112389913199) * _tmp89;
  const Scalar _tmp179 = _tmp178 * _tmp66;
  const Scalar _tmp180 = _tmp105 * _tmp112 + _tmp120 * _tmp122 + _tmp163 + _tmp164;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = -_tmp104 * _tmp112 * _tmp127 - _tmp115 * _tmp138 -
                         _tmp119 * _tmp122 * _tmp127 - _tmp133 * _tmp135 + _tmp140 * _tmp33 +
                         _tmp161;
  const Scalar _tmp183 = std::asinh(_tmp181 * _tmp182);
  const Scalar _tmp184 = Scalar(1.4083112389913199) * _tmp180;
  const Scalar _tmp185 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp186 = _tmp185 * _tmp89;
  const Scalar _tmp187 = (_tmp181 * (-_tmp135 * _tmp157 - _tmp140 + _tmp171) + _tmp182 * _tmp186) /
                         std::sqrt(Scalar(std::pow(_tmp182, Scalar(2)) * _tmp185 + 1));
  const Scalar _tmp188 = Scalar(0.71007031138673404) * _tmp181;
  const Scalar _tmp189 =
      -_tmp183 * _tmp184 - std::sqrt(Scalar(std::pow(Scalar(-_tmp46 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp190 = Scalar(0.71007031138673404) * _tmp186;
  const Scalar _tmp191 = _tmp188 * _tmp189;
  const Scalar _tmp192 = Scalar(1.0) * _tmp183;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp32 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_d(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp31 + p_d(0, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp148 * (-_tmp156 * p_c(2, 0) + Scalar(1.0) * _tmp158 * std::sinh(_tmp152) -
                  (-_tmp149 * _tmp156 + _tmp150 * (-_tmp147 * _tmp153 - _tmp148 * _tmp158)) *
                      std::sinh(_tmp151)) -
      _tmp153 * (_tmp150 * p_c(2, 0) - std::cosh(_tmp151) + std::cosh(_tmp152));
  _res(2, 0) =
      -_tmp173 * (Scalar(1.0) * _tmp172 * std::sinh(_tmp168) - _tmp177 * p_a(2, 0) -
                  (-_tmp174 * _tmp177 + _tmp175 * (-_tmp167 * _tmp179 - _tmp172 * _tmp173)) *
                      std::sinh(_tmp176)) -
      _tmp179 * (_tmp175 * p_a(2, 0) + std::cosh(_tmp168) - std::cosh(_tmp176));
  _res(3, 0) = _tmp178 * (_tmp188 * p_b(2, 0) - std::cosh(_tmp191) + std::cosh(_tmp192)) -
               _tmp184 * (Scalar(1.0) * _tmp187 * std::sinh(_tmp192) + _tmp190 * p_b(2, 0) -
                          (_tmp188 * (_tmp178 * _tmp183 - _tmp184 * _tmp187) + _tmp189 * _tmp190) *
                              std::sinh(_tmp191));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym