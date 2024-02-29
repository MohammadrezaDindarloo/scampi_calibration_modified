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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl7
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl7(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 593

  // Unused inputs
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
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp10 = 2 * _tmp5;
  const Scalar _tmp11 = _tmp10 * _tmp9;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp13 = _tmp12 * _tmp3;
  const Scalar _tmp14 = _tmp11 - _tmp13;
  const Scalar _tmp15 = Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp15;
  const Scalar _tmp17 = 2 * _tmp3 * _tmp9;
  const Scalar _tmp18 = _tmp12 * _tmp5;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 + _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp8;
  const Scalar _tmp22 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp23 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp25 = _tmp10 * _tmp3;
  const Scalar _tmp26 = _tmp12 * _tmp9;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp30 = _tmp28 - _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(0, 0);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp34 = -_tmp24;
  const Scalar _tmp35 = _tmp28 + _tmp29;
  const Scalar _tmp36 = _tmp34 + _tmp35;
  const Scalar _tmp37 = _tmp30 + _tmp34;
  const Scalar _tmp38 = Scalar(1.0) * _tmp37;
  const Scalar _tmp39 = -_tmp36 + _tmp38;
  const Scalar _tmp40 = -_tmp19;
  const Scalar _tmp41 = _tmp16 + _tmp40;
  const Scalar _tmp42 = _tmp41 + _tmp8;
  const Scalar _tmp43 = Scalar(1.0) * _tmp42;
  const Scalar _tmp44 = -_tmp43;
  const Scalar _tmp45 = _tmp41 + _tmp7;
  const Scalar _tmp46 = Scalar(1.0) / (_tmp44 + _tmp45);
  const Scalar _tmp47 = Scalar(1.0) * _tmp46;
  const Scalar _tmp48 = _tmp36 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 - p_d(0, 0);
  const Scalar _tmp50 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_d(1, 0);
  const Scalar _tmp52 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp51, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp55 = _tmp54 - p_a(0, 0);
  const Scalar _tmp56 = Scalar(1.0) / (_tmp55);
  const Scalar _tmp57 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 - p_a(1, 0);
  const Scalar _tmp59 = _tmp56 * _tmp58;
  const Scalar _tmp60 = _tmp49 * _tmp52;
  const Scalar _tmp61 = Scalar(1.0) / (-_tmp53 + _tmp59 * _tmp60);
  const Scalar _tmp62 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp63 = -Scalar(0.010999999999999999) * _tmp23 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp65 = _tmp63 - _tmp64;
  const Scalar _tmp66 = _tmp62 + _tmp65;
  const Scalar _tmp67 = -_tmp62;
  const Scalar _tmp68 = _tmp65 + _tmp67;
  const Scalar _tmp69 = _tmp59 * _tmp68;
  const Scalar _tmp70 = _tmp61 * (_tmp53 * _tmp66 - _tmp60 * _tmp69);
  const Scalar _tmp71 = _tmp61 * (-_tmp60 * _tmp66 + _tmp60 * _tmp68);
  const Scalar _tmp72 = _tmp39 * _tmp47 * _tmp70 - Scalar(1.0) * _tmp71;
  const Scalar _tmp73 = _tmp24 + _tmp35;
  const Scalar _tmp74 = _tmp73 + position_vector(0, 0);
  const Scalar _tmp75 = _tmp74 - p_c(0, 0);
  const Scalar _tmp76 = _tmp20 + _tmp7;
  const Scalar _tmp77 = _tmp76 + position_vector(1, 0);
  const Scalar _tmp78 = _tmp77 - p_c(1, 0);
  const Scalar _tmp79 = std::pow(Scalar(std::pow(_tmp75, Scalar(2)) + std::pow(_tmp78, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp80 = _tmp75 * _tmp79;
  const Scalar _tmp81 = _tmp63 + _tmp64;
  const Scalar _tmp82 = _tmp62 + _tmp81;
  const Scalar _tmp83 = _tmp78 * _tmp79;
  const Scalar _tmp84 = _tmp59 * _tmp80 - _tmp83;
  const Scalar _tmp85 = -_tmp69 * _tmp80 - _tmp70 * _tmp84 + _tmp82 * _tmp83;
  const Scalar _tmp86 = _tmp39 * _tmp46;
  const Scalar _tmp87 = _tmp68 * _tmp80 - _tmp71 * _tmp84 - _tmp80 * _tmp82 - _tmp85 * _tmp86;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 =
      std::sqrt(Scalar(std::pow(_tmp55, Scalar(2)) + std::pow(_tmp58, Scalar(2))));
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp56 * _tmp89;
  const Scalar _tmp92 = _tmp91 * (_tmp37 * _tmp58 * _tmp90 - _tmp42 * _tmp55 * _tmp90);
  const Scalar _tmp93 = _tmp61 * (-_tmp36 * _tmp53 + _tmp45 * _tmp60 + _tmp60 * _tmp92);
  const Scalar _tmp94 = -_tmp73 * _tmp83 + _tmp76 * _tmp80 + _tmp80 * _tmp92 - _tmp84 * _tmp93;
  const Scalar _tmp95 = _tmp88 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp97 = _tmp87 * _tmp96;
  const Scalar _tmp98 = _tmp97 * (-_tmp72 * _tmp95 - Scalar(1.0) * _tmp93);
  const Scalar _tmp99 = _tmp72 + _tmp98;
  const Scalar _tmp100 = _tmp84 * _tmp88;
  const Scalar _tmp101 = -_tmp100 * _tmp99 + Scalar(1.0);
  const Scalar _tmp102 = _tmp60 * _tmp61;
  const Scalar _tmp103 = _tmp80 * _tmp88;
  const Scalar _tmp104 = _tmp32 - p_b(0, 0);
  const Scalar _tmp105 = _tmp22 - p_b(1, 0);
  const Scalar _tmp106 =
      std::pow(Scalar(std::pow(_tmp104, Scalar(2)) + std::pow(_tmp105, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp107 = _tmp105 * _tmp106;
  const Scalar _tmp108 = _tmp107 * fh1;
  const Scalar _tmp109 = Scalar(1.0) * _tmp96;
  const Scalar _tmp110 = _tmp104 * _tmp106;
  const Scalar _tmp111 = fh1 * (_tmp107 * _tmp31 - _tmp110 * _tmp21);
  const Scalar _tmp112 = _tmp59 * _tmp70 + _tmp69;
  const Scalar _tmp113 = -_tmp112 * _tmp86 + _tmp59 * _tmp71 - _tmp68;
  const Scalar _tmp114 = _tmp97 * (-_tmp113 * _tmp95 + _tmp59 * _tmp93 - _tmp92);
  const Scalar _tmp115 = _tmp113 + _tmp114;
  const Scalar _tmp116 = -_tmp100 * _tmp115 - _tmp59;
  const Scalar _tmp117 = _tmp110 * fh1;
  const Scalar _tmp118 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp119 = _tmp38 + _tmp43 * _tmp86;
  const Scalar _tmp120 = 0;
  const Scalar _tmp121 = _tmp100 * _tmp120;
  const Scalar _tmp122 = _tmp120 * _tmp88;
  const Scalar _tmp123 = _tmp91 * (-_tmp102 * _tmp121 + _tmp122 * _tmp80);
  const Scalar _tmp124 = -_tmp108 * _tmp91 * (_tmp101 * _tmp102 + _tmp103 * _tmp99) -
                         _tmp111 * _tmp91 * (-_tmp102 * _tmp109 * _tmp84 + _tmp109 * _tmp80) -
                         _tmp117 * _tmp91 * (_tmp102 * _tmp116 + _tmp103 * _tmp115 + Scalar(1.0)) -
                         _tmp118 * _tmp123;
  const Scalar _tmp125 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp126 = _tmp44 + _tmp76;
  const Scalar _tmp127 = _tmp126 * _tmp86;
  const Scalar _tmp128 = Scalar(1.0) / (-_tmp127 + _tmp38 - _tmp73);
  const Scalar _tmp129 = Scalar(1.0) * _tmp128;
  const Scalar _tmp130 = _tmp126 * _tmp128;
  const Scalar _tmp131 = _tmp85 * _tmp88;
  const Scalar _tmp132 = _tmp130 * _tmp98 - _tmp131 * _tmp99 - Scalar(1.0) * _tmp70;
  const Scalar _tmp133 = fh1 * (_tmp67 + _tmp81);
  const Scalar _tmp134 = _tmp110 * _tmp133 + Scalar(40.024799999999999) * _tmp27 + _tmp31 * fv1;
  const Scalar _tmp135 = _tmp126 * _tmp129;
  const Scalar _tmp136 = -Scalar(1.0) * _tmp129 + Scalar(1.0) * _tmp135 * _tmp46;
  const Scalar _tmp137 = _tmp129 * _tmp97;
  const Scalar _tmp138 = -_tmp109 * _tmp85 + _tmp135 * _tmp97;
  const Scalar _tmp139 = _tmp119 * _tmp128;
  const Scalar _tmp140 = _tmp46 * (-_tmp120 * _tmp131 - _tmp126 * _tmp139 + _tmp44);
  const Scalar _tmp141 = -Scalar(1.0) * _tmp119 * _tmp129 - Scalar(1.0) * _tmp140 + Scalar(1.0);
  const Scalar _tmp142 = -_tmp107 * _tmp133 - Scalar(40.024799999999999) * _tmp14 - _tmp21 * fv1;
  const Scalar _tmp143 = _tmp127 * _tmp129 + Scalar(1.0);
  const Scalar _tmp144 = _tmp129 * _tmp86;
  const Scalar _tmp145 = -Scalar(1.0) * _tmp143 * _tmp47 + Scalar(1.0) * _tmp144;
  const Scalar _tmp146 = _tmp112 + _tmp114 * _tmp130 - _tmp115 * _tmp131;
  const Scalar _tmp147 = Scalar(1.0) * _tmp108 * (_tmp129 * _tmp98 - _tmp132 * _tmp47) +
                         Scalar(1.0) * _tmp111 * (_tmp137 - _tmp138 * _tmp47) +
                         Scalar(1.0) * _tmp117 * (_tmp114 * _tmp129 - _tmp146 * _tmp47) +
                         _tmp118 * _tmp141 + _tmp134 * _tmp136 + _tmp142 * _tmp145;
  const Scalar _tmp148 = std::asinh(_tmp125 * _tmp147);
  const Scalar _tmp149 = Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = std::pow(_tmp124, Scalar(-2));
  const Scalar _tmp151 = _tmp123 * _tmp150;
  const Scalar _tmp152 = _tmp15 + _tmp40 + _tmp7;
  const Scalar _tmp153 =
      (_tmp125 * (_tmp136 * _tmp31 - _tmp141 + _tmp145 * _tmp152) - _tmp147 * _tmp151) /
      std::sqrt(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp150 + 1));
  const Scalar _tmp154 = Scalar(1.4083112389913199) * _tmp123;
  const Scalar _tmp155 = Scalar(1.4083112389913199) * _tmp124;
  const Scalar _tmp156 = Scalar(0.71007031138673404) * _tmp125;
  const Scalar _tmp157 =
      -_tmp148 * _tmp155 - std::sqrt(Scalar(std::pow(Scalar(-_tmp54 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp57 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp158 = Scalar(0.71007031138673404) * _tmp151;
  const Scalar _tmp159 = _tmp156 * _tmp157;
  const Scalar _tmp160 = _tmp121 * _tmp61;
  const Scalar _tmp161 = _tmp109 * _tmp111;
  const Scalar _tmp162 = _tmp61 * fh1;
  const Scalar _tmp163 = _tmp101 * _tmp107 * _tmp162 + _tmp110 * _tmp116 * _tmp162 -
                         _tmp118 * _tmp160 - _tmp161 * _tmp61 * _tmp84;
  const Scalar _tmp164 = Scalar(1.0) / (_tmp163);
  const Scalar _tmp165 = _tmp143 * _tmp46;
  const Scalar _tmp166 = _tmp129 * _tmp134;
  const Scalar _tmp167 = _tmp126 * _tmp46;
  const Scalar _tmp168 = _tmp108 * _tmp132 * _tmp46 + _tmp111 * _tmp138 * _tmp46 +
                         _tmp117 * _tmp146 * _tmp46 + _tmp118 * _tmp140 + _tmp142 * _tmp165 -
                         _tmp166 * _tmp167;
  const Scalar _tmp169 = std::asinh(_tmp164 * _tmp168);
  const Scalar _tmp170 = Scalar(1.0) * _tmp169;
  const Scalar _tmp171 = Scalar(1.4083112389913199) * _tmp163;
  const Scalar _tmp172 =
      -_tmp169 * _tmp171 - std::sqrt(Scalar(std::pow(Scalar(-_tmp48 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp173 = Scalar(0.71007031138673404) * _tmp164;
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = Scalar(1.4083112389913199) * _tmp160;
  const Scalar _tmp176 = _tmp129 * _tmp31;
  const Scalar _tmp177 = std::pow(_tmp163, Scalar(-2));
  const Scalar _tmp178 = _tmp160 * _tmp177;
  const Scalar _tmp179 =
      (_tmp164 * (-_tmp140 + _tmp152 * _tmp165 - _tmp167 * _tmp176) - _tmp168 * _tmp178) /
      std::sqrt(Scalar(std::pow(_tmp168, Scalar(2)) * _tmp177 + 1));
  const Scalar _tmp180 = Scalar(0.71007031138673404) * _tmp178;
  const Scalar _tmp181 =
      _tmp108 * _tmp88 * _tmp99 + _tmp115 * _tmp117 * _tmp88 + _tmp118 * _tmp122 + _tmp161;
  const Scalar _tmp182 = Scalar(1.0) / (_tmp181);
  const Scalar _tmp183 = -_tmp108 * _tmp128 * _tmp98 - _tmp111 * _tmp137 -
                         _tmp114 * _tmp117 * _tmp128 + _tmp118 * _tmp139 - _tmp142 * _tmp144 +
                         _tmp166;
  const Scalar _tmp184 = std::asinh(_tmp182 * _tmp183);
  const Scalar _tmp185 = Scalar(1.4083112389913199) * _tmp181;
  const Scalar _tmp186 =
      -_tmp184 * _tmp185 - std::sqrt(Scalar(std::pow(Scalar(-_tmp74 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp77 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.71007031138673404) * _tmp182;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = Scalar(1.0) * _tmp184;
  const Scalar _tmp190 = Scalar(1.4083112389913199) * _tmp122;
  const Scalar _tmp191 = std::pow(_tmp181, Scalar(-2));
  const Scalar _tmp192 = _tmp122 * _tmp191;
  const Scalar _tmp193 = Scalar(0.71007031138673404) * _tmp192;
  const Scalar _tmp194 = (_tmp182 * (-_tmp139 - _tmp144 * _tmp152 + _tmp176) + _tmp183 * _tmp192) /
                         std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp191 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp33 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp33 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_b(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp32 + p_b(0, 0)), Scalar(2)))))));
  _res(1, 0) = -_tmp154 * (_tmp156 * p_a(2, 0) + std::cosh(_tmp149) - std::cosh(_tmp159)) -
               _tmp155 * (Scalar(1.0) * _tmp153 * std::sinh(_tmp149) - _tmp158 * p_a(2, 0) -
                          (_tmp156 * (-_tmp148 * _tmp154 - _tmp153 * _tmp155) - _tmp157 * _tmp158) *
                              std::sinh(_tmp159));
  _res(2, 0) =
      -_tmp171 * (Scalar(1.0) * _tmp179 * std::sinh(_tmp170) - _tmp180 * p_d(2, 0) -
                  (-_tmp172 * _tmp180 + _tmp173 * (-_tmp169 * _tmp175 - _tmp171 * _tmp179)) *
                      std::sinh(_tmp174)) -
      _tmp175 * (_tmp173 * p_d(2, 0) + std::cosh(_tmp170) - std::cosh(_tmp174));
  _res(3, 0) = -_tmp185 * (_tmp193 * p_c(2, 0) + Scalar(1.0) * _tmp194 * std::sinh(_tmp189) -
                           (_tmp186 * _tmp193 + _tmp187 * (_tmp184 * _tmp190 - _tmp185 * _tmp194)) *
                               std::sinh(_tmp188)) +
               _tmp190 * (_tmp187 * p_c(2, 0) - std::cosh(_tmp188) + std::cosh(_tmp189));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
