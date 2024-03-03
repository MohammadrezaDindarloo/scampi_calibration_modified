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
 * Symbolic function: IK_residual_func_cost4_wrt_fv1_Nl11
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost4WrtFv1Nl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 581

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (190)
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
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp5;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp13 = _tmp12 * _tmp3;
  const Scalar _tmp14 = _tmp11 - _tmp13;
  const Scalar _tmp15 = Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp15;
  const Scalar _tmp17 = _tmp10 * _tmp3;
  const Scalar _tmp18 = _tmp12 * _tmp5;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 + _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp8;
  const Scalar _tmp22 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp23 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp25 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp26 = _tmp12 * _tmp9;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp30 = _tmp28 - _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(0, 0);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp34 = _tmp32 - p_b(0, 0);
  const Scalar _tmp35 = _tmp22 - p_b(1, 0);
  const Scalar _tmp36 = std::pow(Scalar(std::pow(_tmp34, Scalar(2)) + std::pow(_tmp35, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = _tmp34 * _tmp36;
  const Scalar _tmp38 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp39 = -_tmp38;
  const Scalar _tmp40 = -Scalar(0.010999999999999999) * _tmp23 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp41 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp42 = _tmp40 + _tmp41;
  const Scalar _tmp43 = fh1 * (_tmp39 + _tmp42);
  const Scalar _tmp44 = Scalar(40.024799999999999) * _tmp27 + _tmp31 * fv1 + _tmp37 * _tmp43;
  const Scalar _tmp45 = -_tmp24;
  const Scalar _tmp46 = _tmp28 + _tmp29;
  const Scalar _tmp47 = _tmp45 + _tmp46;
  const Scalar _tmp48 = Scalar(1.0) * _tmp47;
  const Scalar _tmp49 = -_tmp19;
  const Scalar _tmp50 = _tmp16 + _tmp49;
  const Scalar _tmp51 = _tmp50 + _tmp7;
  const Scalar _tmp52 = Scalar(1.0) * _tmp51;
  const Scalar _tmp53 = -_tmp52;
  const Scalar _tmp54 = _tmp50 + _tmp8;
  const Scalar _tmp55 = _tmp53 + _tmp54;
  const Scalar _tmp56 = _tmp20 + _tmp7;
  const Scalar _tmp57 = Scalar(1.0) / (_tmp53 + _tmp56);
  const Scalar _tmp58 = _tmp24 + _tmp46;
  const Scalar _tmp59 = _tmp57 * (_tmp48 - _tmp58);
  const Scalar _tmp60 = _tmp55 * _tmp59;
  const Scalar _tmp61 = _tmp30 + _tmp45;
  const Scalar _tmp62 = Scalar(1.0) / (_tmp48 - _tmp60 - _tmp61);
  const Scalar _tmp63 = Scalar(1.0) * _tmp62;
  const Scalar _tmp64 = _tmp55 * _tmp57;
  const Scalar _tmp65 = Scalar(1.0) * _tmp63 * _tmp64 - Scalar(1.0) * _tmp63;
  const Scalar _tmp66 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp67 = _tmp66 - p_d(0, 0);
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp70 = _tmp69 - p_d(1, 0);
  const Scalar _tmp71 = _tmp68 * _tmp70;
  const Scalar _tmp72 = _tmp58 + position_vector(0, 0);
  const Scalar _tmp73 = _tmp72 - p_c(0, 0);
  const Scalar _tmp74 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp75 = _tmp74 - p_c(1, 0);
  const Scalar _tmp76 = std::pow(Scalar(std::pow(_tmp73, Scalar(2)) + std::pow(_tmp75, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp77 = _tmp73 * _tmp76;
  const Scalar _tmp78 = _tmp75 * _tmp76;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp71 * _tmp77 - _tmp78);
  const Scalar _tmp80 = _tmp38 + _tmp42;
  const Scalar _tmp81 = _tmp40 - _tmp41;
  const Scalar _tmp82 = _tmp38 + _tmp81;
  const Scalar _tmp83 = _tmp79 * (-_tmp77 * _tmp80 + _tmp77 * _tmp82);
  const Scalar _tmp84 = _tmp71 * _tmp82;
  const Scalar _tmp85 = _tmp79 * (-_tmp77 * _tmp84 + _tmp78 * _tmp80);
  const Scalar _tmp86 = _tmp71 * _tmp85 + _tmp84;
  const Scalar _tmp87 = -_tmp59 * _tmp86 + _tmp71 * _tmp83 - _tmp82;
  const Scalar _tmp88 = _tmp39 + _tmp81;
  const Scalar _tmp89 = _tmp61 + position_vector(0, 0);
  const Scalar _tmp90 = _tmp89 - p_a(0, 0);
  const Scalar _tmp91 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp92 = _tmp91 - p_a(1, 0);
  const Scalar _tmp93 = std::pow(Scalar(std::pow(_tmp90, Scalar(2)) + std::pow(_tmp92, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp94 = _tmp90 * _tmp93;
  const Scalar _tmp95 = _tmp92 * _tmp93;
  const Scalar _tmp96 = _tmp71 * _tmp94 - _tmp95;
  const Scalar _tmp97 = -_tmp84 * _tmp94 - _tmp85 * _tmp96 + _tmp88 * _tmp95;
  const Scalar _tmp98 = -_tmp59 * _tmp97 + _tmp82 * _tmp94 - _tmp83 * _tmp96 - _tmp88 * _tmp94;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp100 =
      std::sqrt(Scalar(std::pow(_tmp67, Scalar(2)) + std::pow(_tmp70, Scalar(2))));
  const Scalar _tmp101 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp102 = _tmp100 * _tmp68;
  const Scalar _tmp103 = _tmp102 * (_tmp101 * _tmp47 * _tmp70 - _tmp101 * _tmp51 * _tmp67);
  const Scalar _tmp104 = _tmp79 * (_tmp103 * _tmp77 + _tmp56 * _tmp77 - _tmp58 * _tmp78);
  const Scalar _tmp105 = _tmp103 * _tmp94 - _tmp104 * _tmp96 + _tmp54 * _tmp94 - _tmp61 * _tmp95;
  const Scalar _tmp106 = _tmp105 * _tmp99;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp108 = _tmp107 * _tmp98;
  const Scalar _tmp109 = _tmp108 * (-_tmp103 + _tmp104 * _tmp71 - _tmp106 * _tmp87);
  const Scalar _tmp110 = _tmp55 * _tmp62;
  const Scalar _tmp111 = _tmp109 + _tmp87;
  const Scalar _tmp112 = _tmp97 * _tmp99;
  const Scalar _tmp113 = _tmp109 * _tmp110 - _tmp111 * _tmp112 + _tmp86;
  const Scalar _tmp114 = Scalar(1.0) * _tmp57;
  const Scalar _tmp115 = _tmp37 * fh1;
  const Scalar _tmp116 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp117 = _tmp48 + _tmp52 * _tmp59;
  const Scalar _tmp118 = _tmp117 * _tmp62;
  const Scalar _tmp119 = 0;
  const Scalar _tmp120 = _tmp57 * (-_tmp112 * _tmp119 - _tmp118 * _tmp55 + _tmp53);
  const Scalar _tmp121 = -Scalar(1.0) * _tmp117 * _tmp63 - Scalar(1.0) * _tmp120 + Scalar(1.0);
  const Scalar _tmp122 = Scalar(1.0) * _tmp85;
  const Scalar _tmp123 = _tmp122 * _tmp59 - Scalar(1.0) * _tmp83;
  const Scalar _tmp124 = _tmp108 * (-Scalar(1.0) * _tmp104 - _tmp106 * _tmp123);
  const Scalar _tmp125 = _tmp123 + _tmp124;
  const Scalar _tmp126 = _tmp110 * _tmp124 - _tmp112 * _tmp125 - _tmp122;
  const Scalar _tmp127 = _tmp35 * _tmp36;
  const Scalar _tmp128 = _tmp127 * fh1;
  const Scalar _tmp129 = -_tmp127 * _tmp43 - Scalar(40.024799999999999) * _tmp14 - _tmp21 * fv1;
  const Scalar _tmp130 = _tmp59 * _tmp63;
  const Scalar _tmp131 = _tmp60 * _tmp63 + Scalar(1.0);
  const Scalar _tmp132 = -Scalar(1.0) * _tmp114 * _tmp131 + Scalar(1.0) * _tmp130;
  const Scalar _tmp133 = _tmp108 * _tmp63;
  const Scalar _tmp134 = Scalar(1.0) * _tmp107;
  const Scalar _tmp135 = _tmp133 * _tmp55 - _tmp134 * _tmp97;
  const Scalar _tmp136 = fh1 * (_tmp127 * _tmp31 - _tmp21 * _tmp37);
  const Scalar _tmp137 =
      Scalar(1.0) * _tmp115 * (_tmp109 * _tmp63 - _tmp113 * _tmp114) + _tmp116 * _tmp121 +
      Scalar(1.0) * _tmp128 * (-_tmp114 * _tmp126 + _tmp124 * _tmp63) + _tmp129 * _tmp132 +
      Scalar(1.0) * _tmp136 * (-_tmp114 * _tmp135 + _tmp133) + _tmp44 * _tmp65;
  const Scalar _tmp138 = _tmp96 * _tmp99;
  const Scalar _tmp139 = -_tmp125 * _tmp138 + Scalar(1.0);
  const Scalar _tmp140 = _tmp77 * _tmp79;
  const Scalar _tmp141 = _tmp94 * _tmp99;
  const Scalar _tmp142 = -_tmp111 * _tmp138 - _tmp71;
  const Scalar _tmp143 = _tmp119 * _tmp138;
  const Scalar _tmp144 = _tmp119 * _tmp99;
  const Scalar _tmp145 = _tmp102 * (-_tmp140 * _tmp143 + _tmp144 * _tmp94);
  const Scalar _tmp146 =
      -_tmp102 * _tmp115 * (_tmp111 * _tmp141 + _tmp140 * _tmp142 + Scalar(1.0)) -
      _tmp102 * _tmp128 * (_tmp125 * _tmp141 + _tmp139 * _tmp140) -
      _tmp102 * _tmp136 * (-_tmp134 * _tmp140 * _tmp96 + _tmp134 * _tmp94) - _tmp116 * _tmp145;
  const Scalar _tmp147 = Scalar(1.0) / (_tmp146);
  const Scalar _tmp148 = std::asinh(_tmp137 * _tmp147);
  const Scalar _tmp149 = Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = std::pow(_tmp146, Scalar(-2));
  const Scalar _tmp151 = _tmp145 * _tmp150;
  const Scalar _tmp152 = _tmp15 + _tmp49 + _tmp7;
  const Scalar _tmp153 =
      (-_tmp137 * _tmp151 + _tmp147 * (-_tmp121 + _tmp132 * _tmp152 + _tmp31 * _tmp65)) /
      std::sqrt(Scalar(std::pow(_tmp137, Scalar(2)) * _tmp150 + 1));
  const Scalar _tmp154 = Scalar(1.4083112389913199) * _tmp146;
  const Scalar _tmp155 =
      -_tmp148 * _tmp154 - std::sqrt(Scalar(std::pow(Scalar(-_tmp66 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp69 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp156 = Scalar(1.4083112389913199) * _tmp145;
  const Scalar _tmp157 = Scalar(0.71007031138673404) * _tmp147;
  const Scalar _tmp158 = _tmp155 * _tmp157;
  const Scalar _tmp159 = _tmp44 * _tmp63;
  const Scalar _tmp160 = _tmp131 * _tmp57;
  const Scalar _tmp161 = _tmp113 * _tmp115 * _tmp57 + _tmp116 * _tmp120 +
                         _tmp126 * _tmp128 * _tmp57 + _tmp129 * _tmp160 +
                         _tmp135 * _tmp136 * _tmp57 - _tmp159 * _tmp64;
  const Scalar _tmp162 = _tmp134 * _tmp136;
  const Scalar _tmp163 = _tmp143 * _tmp79;
  const Scalar _tmp164 = _tmp115 * _tmp142 * _tmp79 - _tmp116 * _tmp163 +
                         _tmp128 * _tmp139 * _tmp79 - _tmp162 * _tmp79 * _tmp96;
  const Scalar _tmp165 = Scalar(1.0) / (_tmp164);
  const Scalar _tmp166 = std::asinh(_tmp161 * _tmp165);
  const Scalar _tmp167 = Scalar(1.4083112389913199) * _tmp164;
  const Scalar _tmp168 =
      -_tmp166 * _tmp167 - std::sqrt(Scalar(std::pow(Scalar(-_tmp72 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp74 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp169 = Scalar(0.71007031138673404) * _tmp165;
  const Scalar _tmp170 = _tmp168 * _tmp169;
  const Scalar _tmp171 = Scalar(1.0) * _tmp166;
  const Scalar _tmp172 = Scalar(1.4083112389913199) * _tmp163;
  const Scalar _tmp173 = std::pow(_tmp164, Scalar(-2));
  const Scalar _tmp174 = _tmp31 * _tmp63;
  const Scalar _tmp175 = _tmp163 * _tmp173;
  const Scalar _tmp176 =
      (-_tmp161 * _tmp175 + _tmp165 * (-_tmp120 + _tmp152 * _tmp160 - _tmp174 * _tmp64)) /
      std::sqrt(Scalar(std::pow(_tmp161, Scalar(2)) * _tmp173 + 1));
  const Scalar _tmp177 = -_tmp109 * _tmp115 * _tmp62 + _tmp116 * _tmp118 -
                         _tmp124 * _tmp128 * _tmp62 - _tmp129 * _tmp130 - _tmp133 * _tmp136 +
                         _tmp159;
  const Scalar _tmp178 =
      _tmp111 * _tmp115 * _tmp99 + _tmp116 * _tmp144 + _tmp125 * _tmp128 * _tmp99 + _tmp162;
  const Scalar _tmp179 = Scalar(1.0) / (_tmp178);
  const Scalar _tmp180 = std::asinh(_tmp177 * _tmp179);
  const Scalar _tmp181 = Scalar(1.0) * _tmp180;
  const Scalar _tmp182 = std::pow(_tmp178, Scalar(-2));
  const Scalar _tmp183 = _tmp144 * _tmp182;
  const Scalar _tmp184 = (_tmp177 * _tmp183 + _tmp179 * (-_tmp118 - _tmp130 * _tmp152 + _tmp174)) /
                         std::sqrt(Scalar(std::pow(_tmp177, Scalar(2)) * _tmp182 + 1));
  const Scalar _tmp185 = Scalar(1.4083112389913199) * _tmp178;
  const Scalar _tmp186 =
      -_tmp180 * _tmp185 - std::sqrt(Scalar(std::pow(Scalar(-_tmp89 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp91 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.71007031138673404) * _tmp179;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = Scalar(1.4083112389913199) * _tmp144;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp33 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_b(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp32 + p_b(0, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp154 * (-Scalar(1.0) * _tmp153 * std::cosh(_tmp149) -
                          (-Scalar(0.71007031138673404) * _tmp151 * _tmp155 +
                           _tmp157 * (-_tmp148 * _tmp156 - _tmp153 * _tmp154)) *
                              std::cosh(_tmp158)) +
               _tmp156 * (-std::sinh(_tmp149) - std::sinh(_tmp158));
  _res(2, 0) = _tmp167 * (-Scalar(1.0) * _tmp176 * std::cosh(_tmp171) -
                          (-Scalar(0.71007031138673404) * _tmp168 * _tmp175 +
                           _tmp169 * (-_tmp166 * _tmp172 - _tmp167 * _tmp176)) *
                              std::cosh(_tmp170)) +
               _tmp172 * (-std::sinh(_tmp170) - std::sinh(_tmp171));
  _res(3, 0) = _tmp185 * (-Scalar(1.0) * _tmp184 * std::cosh(_tmp181) -
                          (Scalar(0.71007031138673404) * _tmp183 * _tmp186 +
                           _tmp187 * (_tmp180 * _tmp189 - _tmp184 * _tmp185)) *
                              std::cosh(_tmp188)) -
               _tmp189 * (-std::sinh(_tmp181) - std::sinh(_tmp188));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym