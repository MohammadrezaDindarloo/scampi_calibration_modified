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
 * Symbolic function: IK_residual_func_cost4_wrt_fv1_Nl18
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost4WrtFv1Nl18(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 579

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
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp9 = 2 * _tmp3 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp10 * _tmp5;
  const Scalar _tmp12 = -_tmp11 + _tmp9;
  const Scalar _tmp13 = Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = -_tmp13;
  const Scalar _tmp15 = 2 * _tmp5;
  const Scalar _tmp16 = _tmp15 * _tmp8;
  const Scalar _tmp17 = _tmp10 * _tmp3;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp14 - _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp7;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp4 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = _tmp15 * _tmp3;
  const Scalar _tmp26 = _tmp10 * _tmp8;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(0, 0);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp34 = -_tmp7;
  const Scalar _tmp35 = _tmp19 + _tmp34;
  const Scalar _tmp36 = Scalar(1.0) * _tmp35;
  const Scalar _tmp37 = -_tmp36;
  const Scalar _tmp38 = _tmp14 + _tmp18;
  const Scalar _tmp39 = _tmp38 + _tmp7;
  const Scalar _tmp40 = _tmp37 + _tmp39;
  const Scalar _tmp41 = _tmp34 + _tmp38;
  const Scalar _tmp42 = Scalar(1.0) / (_tmp37 + _tmp41);
  const Scalar _tmp43 = _tmp28 - _tmp29;
  const Scalar _tmp44 = _tmp23 + _tmp43;
  const Scalar _tmp45 = _tmp24 + _tmp43;
  const Scalar _tmp46 = Scalar(1.0) * _tmp45;
  const Scalar _tmp47 = _tmp42 * (-_tmp44 + _tmp46);
  const Scalar _tmp48 = _tmp40 * _tmp47;
  const Scalar _tmp49 = _tmp23 + _tmp30;
  const Scalar _tmp50 = Scalar(1.0) / (_tmp46 - _tmp48 - _tmp49);
  const Scalar _tmp51 = Scalar(1.0) * _tmp50;
  const Scalar _tmp52 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 - p_a(0, 0);
  const Scalar _tmp54 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp55 = _tmp54 - p_a(1, 0);
  const Scalar _tmp56 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp55, Scalar(2))));
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp59 = _tmp56 * _tmp58;
  const Scalar _tmp60 = _tmp59 * (-_tmp35 * _tmp53 * _tmp57 + _tmp45 * _tmp55 * _tmp57);
  const Scalar _tmp61 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 - p_b(0, 0);
  const Scalar _tmp63 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp64 = _tmp63 - p_b(1, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp64 * _tmp65;
  const Scalar _tmp67 = _tmp62 * _tmp65;
  const Scalar _tmp68 = _tmp41 * _tmp67 - _tmp44 * _tmp66 + _tmp60 * _tmp67;
  const Scalar _tmp69 = _tmp55 * _tmp58;
  const Scalar _tmp70 = Scalar(1.0) / (-_tmp66 + _tmp67 * _tmp69);
  const Scalar _tmp71 = _tmp69 * _tmp70;
  const Scalar _tmp72 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp75 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp76 = _tmp74 - _tmp75;
  const Scalar _tmp77 = _tmp73 + _tmp76;
  const Scalar _tmp78 = _tmp69 * _tmp77;
  const Scalar _tmp79 = _tmp72 + _tmp76;
  const Scalar _tmp80 = _tmp67 * _tmp77;
  const Scalar _tmp81 = _tmp66 * _tmp79 - _tmp69 * _tmp80;
  const Scalar _tmp82 = _tmp71 * _tmp81 + _tmp78;
  const Scalar _tmp83 = -_tmp67 * _tmp79 + _tmp80;
  const Scalar _tmp84 = -_tmp47 * _tmp82 + _tmp71 * _tmp83 - _tmp77;
  const Scalar _tmp85 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp86 = _tmp85 - p_c(1, 0);
  const Scalar _tmp87 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp88 = _tmp87 - p_c(0, 0);
  const Scalar _tmp89 = std::pow(Scalar(std::pow(_tmp86, Scalar(2)) + std::pow(_tmp88, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp86 * _tmp89;
  const Scalar _tmp91 = _tmp88 * _tmp89;
  const Scalar _tmp92 = _tmp69 * _tmp91 - _tmp90;
  const Scalar _tmp93 = _tmp70 * _tmp92;
  const Scalar _tmp94 = _tmp74 + _tmp75;
  const Scalar _tmp95 = _tmp72 + _tmp94;
  const Scalar _tmp96 = -_tmp78 * _tmp91 - _tmp81 * _tmp93 + _tmp90 * _tmp95;
  const Scalar _tmp97 = -_tmp47 * _tmp96 + _tmp77 * _tmp91 - _tmp83 * _tmp93 - _tmp91 * _tmp95;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp99 = _tmp39 * _tmp91 - _tmp49 * _tmp90 + _tmp60 * _tmp91 - _tmp68 * _tmp93;
  const Scalar _tmp100 = _tmp98 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp102 = _tmp101 * _tmp97;
  const Scalar _tmp103 = _tmp102 * (-_tmp100 * _tmp84 - _tmp60 + _tmp68 * _tmp71);
  const Scalar _tmp104 = _tmp103 + _tmp84;
  const Scalar _tmp105 = _tmp96 * _tmp98;
  const Scalar _tmp106 = _tmp40 * _tmp50;
  const Scalar _tmp107 = _tmp103 * _tmp106 - _tmp104 * _tmp105 + _tmp82;
  const Scalar _tmp108 = Scalar(1.0) * _tmp42;
  const Scalar _tmp109 = _tmp32 - p_d(0, 0);
  const Scalar _tmp110 = _tmp21 - p_d(1, 0);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp109, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp109 * _tmp111;
  const Scalar _tmp113 = _tmp112 * fh1;
  const Scalar _tmp114 = fh1 * (_tmp73 + _tmp94);
  const Scalar _tmp115 = _tmp112 * _tmp114 + Scalar(40.024799999999999) * _tmp27 + _tmp31 * fv1;
  const Scalar _tmp116 = _tmp40 * _tmp42;
  const Scalar _tmp117 = Scalar(1.0) * _tmp116 * _tmp51 - Scalar(1.0) * _tmp51;
  const Scalar _tmp118 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp119 = _tmp36 * _tmp47 + _tmp46;
  const Scalar _tmp120 = 0;
  const Scalar _tmp121 = _tmp119 * _tmp50;
  const Scalar _tmp122 = _tmp42 * (-_tmp105 * _tmp120 - _tmp121 * _tmp40 + _tmp37);
  const Scalar _tmp123 = -Scalar(1.0) * _tmp121 - Scalar(1.0) * _tmp122 + Scalar(1.0);
  const Scalar _tmp124 = _tmp102 * _tmp51;
  const Scalar _tmp125 = Scalar(1.0) * _tmp101;
  const Scalar _tmp126 = _tmp124 * _tmp40 - _tmp125 * _tmp96;
  const Scalar _tmp127 = _tmp110 * _tmp111;
  const Scalar _tmp128 = fh1 * (-_tmp112 * _tmp20 + _tmp127 * _tmp31);
  const Scalar _tmp129 = -_tmp114 * _tmp127 - Scalar(40.024799999999999) * _tmp12 - _tmp20 * fv1;
  const Scalar _tmp130 = _tmp48 * _tmp51 + Scalar(1.0);
  const Scalar _tmp131 = _tmp47 * _tmp51;
  const Scalar _tmp132 = -Scalar(1.0) * _tmp108 * _tmp130 + Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = Scalar(1.0) * _tmp70;
  const Scalar _tmp134 = _tmp133 * _tmp81;
  const Scalar _tmp135 = -_tmp133 * _tmp83 + _tmp134 * _tmp47;
  const Scalar _tmp136 = _tmp102 * (-_tmp100 * _tmp135 - _tmp133 * _tmp68);
  const Scalar _tmp137 = _tmp135 + _tmp136;
  const Scalar _tmp138 = -_tmp105 * _tmp137 + _tmp106 * _tmp136 - _tmp134;
  const Scalar _tmp139 = _tmp127 * fh1;
  const Scalar _tmp140 =
      Scalar(1.0) * _tmp113 * (_tmp103 * _tmp51 - _tmp107 * _tmp108) + _tmp115 * _tmp117 +
      _tmp118 * _tmp123 + Scalar(1.0) * _tmp128 * (-_tmp108 * _tmp126 + _tmp124) +
      _tmp129 * _tmp132 + Scalar(1.0) * _tmp139 * (-_tmp108 * _tmp138 + _tmp136 * _tmp51);
  const Scalar _tmp141 = _tmp91 * _tmp98;
  const Scalar _tmp142 = _tmp92 * _tmp98;
  const Scalar _tmp143 = -_tmp137 * _tmp142 + Scalar(1.0);
  const Scalar _tmp144 = _tmp67 * _tmp70;
  const Scalar _tmp145 = _tmp101 * _tmp133 * _tmp92;
  const Scalar _tmp146 = -_tmp104 * _tmp142 - _tmp69;
  const Scalar _tmp147 = _tmp120 * _tmp142;
  const Scalar _tmp148 = _tmp120 * _tmp98;
  const Scalar _tmp149 = _tmp59 * (-_tmp144 * _tmp147 + _tmp148 * _tmp91);
  const Scalar _tmp150 = -_tmp113 * _tmp59 * (_tmp104 * _tmp141 + _tmp144 * _tmp146 + Scalar(1.0)) -
                         _tmp118 * _tmp149 -
                         _tmp128 * _tmp59 * (_tmp125 * _tmp91 - _tmp145 * _tmp67) -
                         _tmp139 * _tmp59 * (_tmp137 * _tmp141 + _tmp143 * _tmp144);
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 = std::asinh(_tmp140 * _tmp151);
  const Scalar _tmp153 = Scalar(1.0) * _tmp152;
  const Scalar _tmp154 = _tmp13 + _tmp18 + _tmp34;
  const Scalar _tmp155 = std::pow(_tmp150, Scalar(-2));
  const Scalar _tmp156 = _tmp149 * _tmp155;
  const Scalar _tmp157 =
      (-_tmp140 * _tmp156 + _tmp151 * (_tmp117 * _tmp31 - _tmp123 + _tmp132 * _tmp154)) /
      std::sqrt(Scalar(std::pow(_tmp140, Scalar(2)) * _tmp155 + 1));
  const Scalar _tmp158 = Scalar(1.4083112389913199) * _tmp150;
  const Scalar _tmp159 = Scalar(1.4083112389913199) * _tmp149;
  const Scalar _tmp160 = Scalar(0.71007031138673404) * _tmp151;
  const Scalar _tmp161 =
      -_tmp152 * _tmp158 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp54 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp162 = _tmp160 * _tmp161;
  const Scalar _tmp163 = _tmp147 * _tmp70;
  const Scalar _tmp164 = _tmp113 * _tmp146 * _tmp70 - _tmp118 * _tmp163 - _tmp128 * _tmp145 +
                         _tmp139 * _tmp143 * _tmp70;
  const Scalar _tmp165 = Scalar(1.0) / (_tmp164);
  const Scalar _tmp166 = _tmp130 * _tmp42;
  const Scalar _tmp167 = _tmp115 * _tmp51;
  const Scalar _tmp168 = _tmp107 * _tmp113 * _tmp42 - _tmp116 * _tmp167 + _tmp118 * _tmp122 +
                         _tmp126 * _tmp128 * _tmp42 + _tmp129 * _tmp166 +
                         _tmp138 * _tmp139 * _tmp42;
  const Scalar _tmp169 = std::asinh(_tmp165 * _tmp168);
  const Scalar _tmp170 = Scalar(1.4083112389913199) * _tmp164;
  const Scalar _tmp171 =
      -_tmp169 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp63 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.71007031138673404) * _tmp165;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = std::pow(_tmp164, Scalar(-2));
  const Scalar _tmp175 = _tmp163 * _tmp174;
  const Scalar _tmp176 = Scalar(1.4083112389913199) * _tmp163;
  const Scalar _tmp177 = _tmp31 * _tmp51;
  const Scalar _tmp178 =
      (_tmp165 * (-_tmp116 * _tmp177 - _tmp122 + _tmp154 * _tmp166) - _tmp168 * _tmp175) /
      std::sqrt(Scalar(std::pow(_tmp168, Scalar(2)) * _tmp174 + 1));
  const Scalar _tmp179 = Scalar(1.0) * _tmp169;
  const Scalar _tmp180 = -_tmp103 * _tmp113 * _tmp50 + _tmp118 * _tmp121 - _tmp124 * _tmp128 -
                         _tmp129 * _tmp131 - _tmp136 * _tmp139 * _tmp50 + _tmp167;
  const Scalar _tmp181 = _tmp104 * _tmp113 * _tmp98 + _tmp118 * _tmp148 + _tmp125 * _tmp128 +
                         _tmp137 * _tmp139 * _tmp98;
  const Scalar _tmp182 = Scalar(1.0) / (_tmp181);
  const Scalar _tmp183 = std::asinh(_tmp180 * _tmp182);
  const Scalar _tmp184 = Scalar(1.0) * _tmp183;
  const Scalar _tmp185 = Scalar(1.4083112389913199) * _tmp181;
  const Scalar _tmp186 =
      -_tmp183 * _tmp185 - std::sqrt(Scalar(std::pow(Scalar(-_tmp85 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp87 + p_c(0, 0)), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.71007031138673404) * _tmp182;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = Scalar(1.4083112389913199) * _tmp148;
  const Scalar _tmp190 = std::pow(_tmp181, Scalar(-2));
  const Scalar _tmp191 = _tmp148 * _tmp190;
  const Scalar _tmp192 = (_tmp180 * _tmp191 + _tmp182 * (-_tmp121 - _tmp131 * _tmp154 + _tmp177)) /
                         std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp190 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp33 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_d(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp32 + p_d(0, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp158 * (-Scalar(1.0) * _tmp157 * std::cosh(_tmp153) -
                          (-Scalar(0.71007031138673404) * _tmp156 * _tmp161 +
                           _tmp160 * (-_tmp152 * _tmp159 - _tmp157 * _tmp158)) *
                              std::cosh(_tmp162)) +
               _tmp159 * (-std::sinh(_tmp153) - std::sinh(_tmp162));
  _res(2, 0) = _tmp170 * (-Scalar(1.0) * _tmp178 * std::cosh(_tmp179) -
                          (-Scalar(0.71007031138673404) * _tmp171 * _tmp175 +
                           _tmp172 * (-_tmp169 * _tmp176 - _tmp170 * _tmp178)) *
                              std::cosh(_tmp173)) +
               _tmp176 * (-std::sinh(_tmp173) - std::sinh(_tmp179));
  _res(3, 0) = _tmp185 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp184) -
                          (Scalar(0.71007031138673404) * _tmp186 * _tmp191 +
                           _tmp187 * (_tmp183 * _tmp189 - _tmp185 * _tmp192)) *
                              std::cosh(_tmp188)) -
               _tmp189 * (-std::sinh(_tmp184) - std::sinh(_tmp188));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
