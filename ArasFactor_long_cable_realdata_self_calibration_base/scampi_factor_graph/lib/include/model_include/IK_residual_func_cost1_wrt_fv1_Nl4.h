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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl4
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl4(
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
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp3;
  const Scalar _tmp12 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                        _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp13 = 2 * _tmp12 * _tmp5;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 * _tmp5;
  const Scalar _tmp16 = 2 * _tmp3;
  const Scalar _tmp17 = _tmp12 * _tmp16;
  const Scalar _tmp18 = _tmp15 - _tmp17;
  const Scalar _tmp19 = Scalar(0.010999999999999999) * _tmp18;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = -_tmp14 + _tmp20;
  const Scalar _tmp22 = _tmp21 + _tmp8;
  const Scalar _tmp23 = _tmp22 + position_vector(1, 0);
  const Scalar _tmp24 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp26 = -_tmp25;
  const Scalar _tmp27 = _tmp16 * _tmp5;
  const Scalar _tmp28 = _tmp10 * _tmp12;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp32 = _tmp30 - _tmp31;
  const Scalar _tmp33 = _tmp26 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp35 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp36 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp37 = _tmp30 + _tmp31;
  const Scalar _tmp38 = _tmp26 + _tmp37;
  const Scalar _tmp39 = _tmp38 + position_vector(0, 0);
  const Scalar _tmp40 = _tmp39 - p_d(0, 0);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = _tmp21 + _tmp7;
  const Scalar _tmp43 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp44 = _tmp43 - p_d(1, 0);
  const Scalar _tmp45 = _tmp41 * _tmp44;
  const Scalar _tmp46 = _tmp25 + _tmp32;
  const Scalar _tmp47 = _tmp46 + position_vector(0, 0);
  const Scalar _tmp48 = _tmp47 - p_b(0, 0);
  const Scalar _tmp49 = _tmp14 + _tmp20 + _tmp8;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_b(1, 0);
  const Scalar _tmp52 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp51, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp48 * _tmp52;
  const Scalar _tmp54 = _tmp51 * _tmp52;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp45 * _tmp53 - _tmp54);
  const Scalar _tmp56 = _tmp53 * _tmp55;
  const Scalar _tmp57 = Scalar(1.0) * _tmp38;
  const Scalar _tmp58 = Scalar(1.0) * _tmp42;
  const Scalar _tmp59 = -_tmp58;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp49 + _tmp59);
  const Scalar _tmp61 = _tmp60 * (-_tmp46 + _tmp57);
  const Scalar _tmp62 = _tmp57 + _tmp58 * _tmp61;
  const Scalar _tmp63 = 0;
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp27 - Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp65 = -Scalar(0.010999999999999999) * _tmp24 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp66 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp67 = _tmp65 - _tmp66;
  const Scalar _tmp68 = _tmp64 + _tmp67;
  const Scalar _tmp69 = -_tmp64;
  const Scalar _tmp70 = _tmp65 + _tmp66;
  const Scalar _tmp71 = _tmp69 + _tmp70;
  const Scalar _tmp72 = _tmp53 * _tmp71;
  const Scalar _tmp73 = -_tmp45 * _tmp72 + _tmp54 * _tmp68;
  const Scalar _tmp74 = _tmp25 + _tmp37;
  const Scalar _tmp75 = _tmp74 + position_vector(0, 0);
  const Scalar _tmp76 = _tmp75 - p_c(0, 0);
  const Scalar _tmp77 = _tmp14 + _tmp7;
  const Scalar _tmp78 = _tmp20 + _tmp77;
  const Scalar _tmp79 = _tmp78 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 - p_c(1, 0);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp76 * _tmp81;
  const Scalar _tmp83 = _tmp80 * _tmp81;
  const Scalar _tmp84 = _tmp45 * _tmp82 - _tmp83;
  const Scalar _tmp85 = _tmp55 * _tmp84;
  const Scalar _tmp86 = _tmp71 * _tmp82;
  const Scalar _tmp87 = _tmp64 + _tmp70;
  const Scalar _tmp88 = -_tmp45 * _tmp86 - _tmp73 * _tmp85 + _tmp83 * _tmp87;
  const Scalar _tmp89 = -_tmp53 * _tmp68 + _tmp72;
  const Scalar _tmp90 = -_tmp61 * _tmp88 - _tmp82 * _tmp87 - _tmp85 * _tmp89 + _tmp86;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = _tmp84 * _tmp91;
  const Scalar _tmp93 = _tmp63 * _tmp92;
  const Scalar _tmp94 = _tmp63 * _tmp91;
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp44, Scalar(2))));
  const Scalar _tmp96 = _tmp41 * _tmp95;
  const Scalar _tmp97 = _tmp96 * (-_tmp56 * _tmp93 + _tmp82 * _tmp94);
  const Scalar _tmp98 = Scalar(1.0) * _tmp55;
  const Scalar _tmp99 = _tmp73 * _tmp98;
  const Scalar _tmp100 = _tmp61 * _tmp99 - _tmp89 * _tmp98;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp102 = _tmp96 * (_tmp101 * _tmp38 * _tmp44 - _tmp101 * _tmp40 * _tmp42);
  const Scalar _tmp103 = _tmp55 * (_tmp102 * _tmp53 - _tmp46 * _tmp54 + _tmp49 * _tmp53);
  const Scalar _tmp104 = _tmp102 * _tmp82 - _tmp103 * _tmp84 - _tmp74 * _tmp83 + _tmp78 * _tmp82;
  const Scalar _tmp105 = _tmp104 * _tmp91;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp107 = _tmp106 * _tmp90;
  const Scalar _tmp108 = _tmp107 * (-_tmp100 * _tmp105 - Scalar(1.0) * _tmp103);
  const Scalar _tmp109 = _tmp100 + _tmp108;
  const Scalar _tmp110 = -_tmp109 * _tmp92 + Scalar(1.0);
  const Scalar _tmp111 = _tmp82 * _tmp91;
  const Scalar _tmp112 = _tmp34 - p_a(0, 0);
  const Scalar _tmp113 = _tmp23 - p_a(1, 0);
  const Scalar _tmp114 =
      std::pow(Scalar(std::pow(_tmp112, Scalar(2)) + std::pow(_tmp113, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp115 = _tmp113 * _tmp114;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = _tmp45 * _tmp55;
  const Scalar _tmp118 = _tmp117 * _tmp73 + _tmp45 * _tmp71;
  const Scalar _tmp119 = _tmp117 * _tmp89 - _tmp118 * _tmp61 - _tmp71;
  const Scalar _tmp120 = _tmp107 * (-_tmp102 + _tmp103 * _tmp45 - _tmp105 * _tmp119);
  const Scalar _tmp121 = _tmp119 + _tmp120;
  const Scalar _tmp122 = -_tmp121 * _tmp92 - _tmp45;
  const Scalar _tmp123 = _tmp112 * _tmp114;
  const Scalar _tmp124 = _tmp123 * fh1;
  const Scalar _tmp125 = Scalar(1.0) * _tmp106;
  const Scalar _tmp126 = _tmp106 * _tmp84 * _tmp98;
  const Scalar _tmp127 = fh1 * (_tmp115 * _tmp33 - _tmp123 * _tmp22);
  const Scalar _tmp128 = -_tmp116 * _tmp96 * (_tmp109 * _tmp111 + _tmp110 * _tmp56) -
                         _tmp124 * _tmp96 * (_tmp111 * _tmp121 + _tmp122 * _tmp56 + Scalar(1.0)) -
                         _tmp127 * _tmp96 * (_tmp125 * _tmp82 - _tmp126 * _tmp53) - _tmp36 * _tmp97;
  const Scalar _tmp129 = std::pow(_tmp128, Scalar(-2));
  const Scalar _tmp130 = _tmp129 * _tmp97;
  const Scalar _tmp131 = Scalar(0.71007031138673404) * _tmp130;
  const Scalar _tmp132 = Scalar(1.4083112389913199) * _tmp128;
  const Scalar _tmp133 = fh1 * (_tmp67 + _tmp69);
  const Scalar _tmp134 = -_tmp115 * _tmp133 - Scalar(40.024799999999999) * _tmp18 - _tmp22 * fv1;
  const Scalar _tmp135 = _tmp59 + _tmp78;
  const Scalar _tmp136 = _tmp135 * _tmp61;
  const Scalar _tmp137 = Scalar(1.0) / (-_tmp136 + _tmp57 - _tmp74);
  const Scalar _tmp138 = Scalar(1.0) * _tmp137;
  const Scalar _tmp139 = _tmp60 * (_tmp136 * _tmp138 + Scalar(1.0));
  const Scalar _tmp140 = _tmp138 * _tmp61;
  const Scalar _tmp141 = -Scalar(1.0) * _tmp139 + Scalar(1.0) * _tmp140;
  const Scalar _tmp142 = _tmp88 * _tmp91;
  const Scalar _tmp143 = _tmp135 * _tmp137;
  const Scalar _tmp144 = _tmp108 * _tmp143 - _tmp109 * _tmp142 - _tmp99;
  const Scalar _tmp145 = Scalar(1.0) * _tmp60;
  const Scalar _tmp146 = _tmp123 * _tmp133 + Scalar(40.024799999999999) * _tmp29 + _tmp33 * fv1;
  const Scalar _tmp147 = _tmp135 * _tmp60;
  const Scalar _tmp148 = Scalar(1.0) * _tmp138 * _tmp147 - Scalar(1.0) * _tmp138;
  const Scalar _tmp149 = _tmp118 + _tmp120 * _tmp143 - _tmp121 * _tmp142;
  const Scalar _tmp150 = _tmp107 * _tmp138;
  const Scalar _tmp151 = -_tmp125 * _tmp88 + _tmp135 * _tmp150;
  const Scalar _tmp152 = _tmp137 * _tmp62;
  const Scalar _tmp153 = _tmp60 * (-_tmp135 * _tmp152 + _tmp59 - _tmp88 * _tmp94);
  const Scalar _tmp154 = -Scalar(1.0) * _tmp138 * _tmp62 - Scalar(1.0) * _tmp153 + Scalar(1.0);
  const Scalar _tmp155 = Scalar(1.0) * _tmp116 * (_tmp108 * _tmp138 - _tmp144 * _tmp145) +
                         Scalar(1.0) * _tmp124 * (_tmp120 * _tmp138 - _tmp145 * _tmp149) +
                         Scalar(1.0) * _tmp127 * (-_tmp145 * _tmp151 + _tmp150) +
                         _tmp134 * _tmp141 + _tmp146 * _tmp148 + _tmp154 * _tmp36;
  const Scalar _tmp156 = _tmp19 + _tmp77;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp128);
  const Scalar _tmp158 =
      (-_tmp130 * _tmp155 + _tmp157 * (_tmp141 * _tmp156 + _tmp148 * _tmp33 - _tmp154)) /
      std::sqrt(Scalar(_tmp129 * std::pow(_tmp155, Scalar(2)) + 1));
  const Scalar _tmp159 = std::asinh(_tmp155 * _tmp157);
  const Scalar _tmp160 = Scalar(1.4083112389913199) * _tmp97;
  const Scalar _tmp161 = Scalar(0.71007031138673404) * _tmp157;
  const Scalar _tmp162 =
      -_tmp132 * _tmp159 - std::sqrt(Scalar(std::pow(Scalar(-_tmp39 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp43 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp163 = _tmp161 * _tmp162;
  const Scalar _tmp164 = Scalar(1.0) * _tmp159;
  const Scalar _tmp165 = _tmp55 * _tmp93;
  const Scalar _tmp166 = _tmp110 * _tmp116 * _tmp55 + _tmp122 * _tmp124 * _tmp55 -
                         _tmp126 * _tmp127 - _tmp165 * _tmp36;
  const Scalar _tmp167 = Scalar(1.0) / (_tmp166);
  const Scalar _tmp168 = _tmp138 * _tmp146;
  const Scalar _tmp169 = _tmp116 * _tmp144 * _tmp60 + _tmp124 * _tmp149 * _tmp60 +
                         _tmp127 * _tmp151 * _tmp60 + _tmp134 * _tmp139 - _tmp147 * _tmp168 +
                         _tmp153 * _tmp36;
  const Scalar _tmp170 = std::asinh(_tmp167 * _tmp169);
  const Scalar _tmp171 = Scalar(1.4083112389913199) * _tmp166;
  const Scalar _tmp172 =
      -_tmp170 * _tmp171 - std::sqrt(Scalar(std::pow(Scalar(-_tmp47 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp173 = Scalar(0.71007031138673404) * _tmp167;
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = Scalar(1.0) * _tmp170;
  const Scalar _tmp176 = Scalar(1.4083112389913199) * _tmp165;
  const Scalar _tmp177 = std::pow(_tmp166, Scalar(-2));
  const Scalar _tmp178 = _tmp138 * _tmp33;
  const Scalar _tmp179 = _tmp165 * _tmp177;
  const Scalar _tmp180 =
      (_tmp167 * (_tmp139 * _tmp156 - _tmp147 * _tmp178 - _tmp153) - _tmp169 * _tmp179) /
      std::sqrt(Scalar(std::pow(_tmp169, Scalar(2)) * _tmp177 + 1));
  const Scalar _tmp181 = Scalar(0.71007031138673404) * _tmp179;
  const Scalar _tmp182 = _tmp91 * fh1;
  const Scalar _tmp183 = _tmp109 * _tmp115 * _tmp182 + _tmp121 * _tmp123 * _tmp182 +
                         _tmp125 * _tmp127 + _tmp36 * _tmp94;
  const Scalar _tmp184 = Scalar(1.0) / (_tmp183);
  const Scalar _tmp185 = -_tmp108 * _tmp116 * _tmp137 - _tmp120 * _tmp124 * _tmp137 -
                         _tmp127 * _tmp150 - _tmp134 * _tmp140 + _tmp152 * _tmp36 + _tmp168;
  const Scalar _tmp186 = std::asinh(_tmp184 * _tmp185);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = Scalar(1.4083112389913199) * _tmp183;
  const Scalar _tmp189 =
      -_tmp186 * _tmp188 - std::sqrt(Scalar(std::pow(Scalar(-_tmp75 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp79 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp190 = Scalar(0.71007031138673404) * _tmp184;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = Scalar(1.4083112389913199) * _tmp94;
  const Scalar _tmp193 = std::pow(_tmp183, Scalar(-2));
  const Scalar _tmp194 = _tmp193 * _tmp94;
  const Scalar _tmp195 = Scalar(0.71007031138673404) * _tmp194;
  const Scalar _tmp196 = (_tmp184 * (-_tmp140 * _tmp156 - _tmp152 + _tmp178) + _tmp185 * _tmp194) /
                         std::sqrt(Scalar(std::pow(_tmp185, Scalar(2)) * _tmp193 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp35 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp35 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp23 + p_a(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp34 + p_a(0, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp132 * (-_tmp131 * p_d(2, 0) + Scalar(1.0) * _tmp158 * std::sinh(_tmp164) -
                  (-_tmp131 * _tmp162 + _tmp161 * (-_tmp132 * _tmp158 - _tmp159 * _tmp160)) *
                      std::sinh(_tmp163)) -
      _tmp160 * (_tmp161 * p_d(2, 0) - std::cosh(_tmp163) + std::cosh(_tmp164));
  _res(2, 0) =
      -_tmp171 * (Scalar(1.0) * _tmp180 * std::sinh(_tmp175) - _tmp181 * p_b(2, 0) -
                  (-_tmp172 * _tmp181 + _tmp173 * (-_tmp170 * _tmp176 - _tmp171 * _tmp180)) *
                      std::sinh(_tmp174)) -
      _tmp176 * (_tmp173 * p_b(2, 0) - std::cosh(_tmp174) + std::cosh(_tmp175));
  _res(3, 0) = -_tmp188 * (_tmp195 * p_c(2, 0) + Scalar(1.0) * _tmp196 * std::sinh(_tmp187) -
                           (_tmp189 * _tmp195 + _tmp190 * (_tmp186 * _tmp192 - _tmp188 * _tmp196)) *
                               std::sinh(_tmp191)) +
               _tmp192 * (_tmp190 * p_c(2, 0) + std::cosh(_tmp187) - std::cosh(_tmp191));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym