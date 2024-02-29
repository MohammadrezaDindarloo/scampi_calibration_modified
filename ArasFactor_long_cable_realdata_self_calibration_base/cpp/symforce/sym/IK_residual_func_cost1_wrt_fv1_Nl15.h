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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl15
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl15(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 589

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (196)
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
  const Scalar _tmp10 = _tmp5 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = _tmp11 * _tmp3;
  const Scalar _tmp13 = _tmp10 - _tmp12;
  const Scalar _tmp14 = Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = -_tmp14;
  const Scalar _tmp16 = _tmp3 * _tmp9;
  const Scalar _tmp17 = _tmp11 * _tmp5;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp15 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp7;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp23 = 1 - 2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp25 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp26 = _tmp11 * _tmp8;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = _tmp24 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp34 = -_tmp33;
  const Scalar _tmp35 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp37 = _tmp35 + _tmp36;
  const Scalar _tmp38 = _tmp34 + _tmp37;
  const Scalar _tmp39 = -_tmp24 + _tmp28;
  const Scalar _tmp40 = _tmp22 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 - p_d(0, 0);
  const Scalar _tmp43 = -_tmp18;
  const Scalar _tmp44 = _tmp15 + _tmp43;
  const Scalar _tmp45 = _tmp44 + _tmp7;
  const Scalar _tmp46 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp47 = _tmp46 - p_d(1, 0);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp42 * _tmp48;
  const Scalar _tmp50 = _tmp35 - _tmp36;
  const Scalar _tmp51 = _tmp33 + _tmp50;
  const Scalar _tmp52 = -_tmp38 * _tmp49 + _tmp49 * _tmp51;
  const Scalar _tmp53 = -_tmp22;
  const Scalar _tmp54 = _tmp29 + _tmp53;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 - p_b(0, 0);
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = -_tmp7;
  const Scalar _tmp59 = _tmp19 + _tmp58;
  const Scalar _tmp60 = _tmp59 + position_vector(1, 0);
  const Scalar _tmp61 = _tmp60 - p_b(1, 0);
  const Scalar _tmp62 = _tmp57 * _tmp61;
  const Scalar _tmp63 = _tmp47 * _tmp48;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp49 * _tmp62 - _tmp63);
  const Scalar _tmp65 = Scalar(1.0) * _tmp64;
  const Scalar _tmp66 = Scalar(1.0) * _tmp54;
  const Scalar _tmp67 = -_tmp40 + _tmp66;
  const Scalar _tmp68 = _tmp51 * _tmp62;
  const Scalar _tmp69 = _tmp38 * _tmp63 - _tmp49 * _tmp68;
  const Scalar _tmp70 = Scalar(1.0) * _tmp59;
  const Scalar _tmp71 = -_tmp70;
  const Scalar _tmp72 = Scalar(1.0) / (_tmp45 + _tmp71);
  const Scalar _tmp73 = Scalar(1.0) * _tmp72;
  const Scalar _tmp74 = -_tmp52 * _tmp65 + _tmp64 * _tmp67 * _tmp69 * _tmp73;
  const Scalar _tmp75 = _tmp39 + _tmp53;
  const Scalar _tmp76 = _tmp75 + position_vector(0, 0);
  const Scalar _tmp77 = _tmp76 - p_a(0, 0);
  const Scalar _tmp78 = _tmp44 + _tmp58;
  const Scalar _tmp79 = _tmp78 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 - p_a(1, 0);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp77 * _tmp81;
  const Scalar _tmp83 = _tmp80 * _tmp81;
  const Scalar _tmp84 = _tmp62 * _tmp82 - _tmp83;
  const Scalar _tmp85 = _tmp64 * _tmp84;
  const Scalar _tmp86 = _tmp34 + _tmp50;
  const Scalar _tmp87 = -_tmp68 * _tmp82 - _tmp69 * _tmp85 + _tmp83 * _tmp86;
  const Scalar _tmp88 = _tmp67 * _tmp72;
  const Scalar _tmp89 = _tmp51 * _tmp82 - _tmp52 * _tmp85 - _tmp82 * _tmp86 - _tmp87 * _tmp88;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp57 * _tmp91;
  const Scalar _tmp94 = _tmp93 * (_tmp54 * _tmp61 * _tmp92 - _tmp56 * _tmp59 * _tmp92);
  const Scalar _tmp95 = -_tmp40 * _tmp63 + _tmp45 * _tmp49 + _tmp49 * _tmp94;
  const Scalar _tmp96 = -_tmp75 * _tmp83 + _tmp78 * _tmp82 + _tmp82 * _tmp94 - _tmp85 * _tmp95;
  const Scalar _tmp97 = _tmp90 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp89 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp65 * _tmp95 - _tmp74 * _tmp97);
  const Scalar _tmp101 = _tmp100 + _tmp74;
  const Scalar _tmp102 = _tmp84 * _tmp90;
  const Scalar _tmp103 = -_tmp101 * _tmp102 + Scalar(1.0);
  const Scalar _tmp104 = _tmp49 * _tmp64;
  const Scalar _tmp105 = _tmp82 * _tmp90;
  const Scalar _tmp106 = _tmp21 - p_c(1, 0);
  const Scalar _tmp107 = _tmp31 - p_c(0, 0);
  const Scalar _tmp108 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp107, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp109 = _tmp106 * _tmp108;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = _tmp62 * _tmp64;
  const Scalar _tmp112 = _tmp111 * _tmp69 + _tmp68;
  const Scalar _tmp113 = _tmp111 * _tmp52 - _tmp112 * _tmp88 - _tmp51;
  const Scalar _tmp114 = _tmp99 * (_tmp111 * _tmp95 - _tmp113 * _tmp97 - _tmp94);
  const Scalar _tmp115 = _tmp113 + _tmp114;
  const Scalar _tmp116 = -_tmp102 * _tmp115 - _tmp62;
  const Scalar _tmp117 = _tmp107 * _tmp108;
  const Scalar _tmp118 = _tmp117 * fh1;
  const Scalar _tmp119 = Scalar(1.0) * _tmp98;
  const Scalar _tmp120 = fh1 * (_tmp109 * _tmp30 - _tmp117 * _tmp20);
  const Scalar _tmp121 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp122 = _tmp66 + _tmp70 * _tmp88;
  const Scalar _tmp123 = 0;
  const Scalar _tmp124 = _tmp123 * _tmp90;
  const Scalar _tmp125 = _tmp124 * _tmp85;
  const Scalar _tmp126 = _tmp93 * (_tmp124 * _tmp82 - _tmp125 * _tmp49);
  const Scalar _tmp127 = -_tmp110 * _tmp93 * (_tmp101 * _tmp105 + _tmp103 * _tmp104) -
                         _tmp118 * _tmp93 * (_tmp104 * _tmp116 + _tmp105 * _tmp115 + Scalar(1.0)) -
                         _tmp120 * _tmp93 * (-_tmp119 * _tmp49 * _tmp85 + _tmp119 * _tmp82) -
                         _tmp121 * _tmp126;
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = Scalar(0.71007031138673404) * _tmp128;
  const Scalar _tmp130 = _tmp71 + _tmp78;
  const Scalar _tmp131 = _tmp130 * _tmp88;
  const Scalar _tmp132 = Scalar(1.0) / (-_tmp131 + _tmp66 - _tmp75);
  const Scalar _tmp133 = _tmp122 * _tmp132;
  const Scalar _tmp134 = _tmp87 * _tmp90;
  const Scalar _tmp135 = _tmp72 * (-_tmp123 * _tmp134 - _tmp130 * _tmp133 + _tmp71);
  const Scalar _tmp136 = -Scalar(1.0) * _tmp133 - Scalar(1.0) * _tmp135 + Scalar(1.0);
  const Scalar _tmp137 = Scalar(1.0) * _tmp132;
  const Scalar _tmp138 = _tmp137 * _tmp99;
  const Scalar _tmp139 = -_tmp119 * _tmp87 + _tmp130 * _tmp138;
  const Scalar _tmp140 = _tmp130 * _tmp132;
  const Scalar _tmp141 = _tmp112 + _tmp114 * _tmp140 - _tmp115 * _tmp134;
  const Scalar _tmp142 = _tmp100 * _tmp140 - _tmp101 * _tmp134 - _tmp65 * _tmp69;
  const Scalar _tmp143 = fh1 * (_tmp33 + _tmp37);
  const Scalar _tmp144 = -_tmp109 * _tmp143 - Scalar(40.024799999999999) * _tmp13 - _tmp20 * fv1;
  const Scalar _tmp145 = _tmp131 * _tmp137 + Scalar(1.0);
  const Scalar _tmp146 = _tmp137 * _tmp88;
  const Scalar _tmp147 = -Scalar(1.0) * _tmp145 * _tmp73 + Scalar(1.0) * _tmp146;
  const Scalar _tmp148 = _tmp117 * _tmp143 + Scalar(40.024799999999999) * _tmp27 + _tmp30 * fv1;
  const Scalar _tmp149 = _tmp130 * _tmp72;
  const Scalar _tmp150 = Scalar(1.0) * _tmp137 * _tmp149 - Scalar(1.0) * _tmp137;
  const Scalar _tmp151 = Scalar(1.0) * _tmp110 * (_tmp100 * _tmp137 - _tmp142 * _tmp73) +
                         Scalar(1.0) * _tmp118 * (_tmp114 * _tmp137 - _tmp141 * _tmp73) +
                         Scalar(1.0) * _tmp120 * (_tmp138 - _tmp139 * _tmp73) + _tmp121 * _tmp136 +
                         _tmp144 * _tmp147 + _tmp148 * _tmp150;
  const Scalar _tmp152 = std::asinh(_tmp128 * _tmp151);
  const Scalar _tmp153 = Scalar(1.4083112389913199) * _tmp127;
  const Scalar _tmp154 =
      -_tmp152 * _tmp153 - std::sqrt(Scalar(std::pow(Scalar(-_tmp55 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp60 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp155 = _tmp129 * _tmp154;
  const Scalar _tmp156 = Scalar(1.0) * _tmp152;
  const Scalar _tmp157 = Scalar(1.4083112389913199) * _tmp126;
  const Scalar _tmp158 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp159 = _tmp14 + _tmp43 + _tmp58;
  const Scalar _tmp160 = _tmp126 * _tmp158;
  const Scalar _tmp161 =
      (_tmp128 * (-_tmp136 + _tmp147 * _tmp159 + _tmp150 * _tmp30) - _tmp151 * _tmp160) /
      std::sqrt(Scalar(std::pow(_tmp151, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp162 = Scalar(0.71007031138673404) * _tmp160;
  const Scalar _tmp163 = _tmp145 * _tmp72;
  const Scalar _tmp164 = _tmp137 * _tmp148;
  const Scalar _tmp165 = _tmp110 * _tmp142 * _tmp72 + _tmp118 * _tmp141 * _tmp72 +
                         _tmp120 * _tmp139 * _tmp72 + _tmp121 * _tmp135 + _tmp144 * _tmp163 -
                         _tmp149 * _tmp164;
  const Scalar _tmp166 = _tmp119 * _tmp120;
  const Scalar _tmp167 = _tmp121 * _tmp124;
  const Scalar _tmp168 =
      _tmp103 * _tmp110 * _tmp64 + _tmp116 * _tmp118 * _tmp64 - _tmp166 * _tmp85 - _tmp167 * _tmp85;
  const Scalar _tmp169 = Scalar(1.0) / (_tmp168);
  const Scalar _tmp170 = std::asinh(_tmp165 * _tmp169);
  const Scalar _tmp171 = Scalar(1.0) * _tmp170;
  const Scalar _tmp172 = Scalar(1.4083112389913199) * _tmp168;
  const Scalar _tmp173 =
      -_tmp170 * _tmp172 - std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp46 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp174 = Scalar(0.71007031138673404) * _tmp169;
  const Scalar _tmp175 = _tmp173 * _tmp174;
  const Scalar _tmp176 = Scalar(1.4083112389913199) * _tmp124;
  const Scalar _tmp177 = _tmp176 * _tmp85;
  const Scalar _tmp178 = std::pow(_tmp168, Scalar(-2));
  const Scalar _tmp179 = _tmp125 * _tmp178;
  const Scalar _tmp180 = Scalar(0.71007031138673404) * _tmp179;
  const Scalar _tmp181 = _tmp137 * _tmp30;
  const Scalar _tmp182 =
      (-_tmp165 * _tmp179 + _tmp169 * (-_tmp135 - _tmp149 * _tmp181 + _tmp159 * _tmp163)) /
      std::sqrt(Scalar(std::pow(_tmp165, Scalar(2)) * _tmp178 + 1));
  const Scalar _tmp183 =
      _tmp101 * _tmp110 * _tmp90 + _tmp115 * _tmp118 * _tmp90 + _tmp166 + _tmp167;
  const Scalar _tmp184 = Scalar(1.0) / (_tmp183);
  const Scalar _tmp185 = -_tmp100 * _tmp110 * _tmp132 - _tmp114 * _tmp118 * _tmp132 -
                         _tmp120 * _tmp138 + _tmp121 * _tmp133 - _tmp144 * _tmp146 + _tmp164;
  const Scalar _tmp186 = std::asinh(_tmp184 * _tmp185);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = Scalar(0.71007031138673404) * _tmp184;
  const Scalar _tmp189 = Scalar(1.4083112389913199) * _tmp183;
  const Scalar _tmp190 =
      -_tmp186 * _tmp189 - std::sqrt(Scalar(std::pow(Scalar(-_tmp76 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp79 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp191 = _tmp188 * _tmp190;
  const Scalar _tmp192 = std::pow(_tmp183, Scalar(-2));
  const Scalar _tmp193 = _tmp124 * _tmp192;
  const Scalar _tmp194 = Scalar(0.71007031138673404) * _tmp193;
  const Scalar _tmp195 = (_tmp184 * (-_tmp133 - _tmp146 * _tmp159 + _tmp181) + _tmp185 * _tmp193) /
                         std::sqrt(Scalar(std::pow(_tmp185, Scalar(2)) * _tmp192 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp32 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_c(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp31 + p_c(0, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp153 * (Scalar(1.0) * _tmp161 * std::sinh(_tmp156) - _tmp162 * p_b(2, 0) -
                  (_tmp129 * (-_tmp152 * _tmp157 - _tmp153 * _tmp161) - _tmp154 * _tmp162) *
                      std::sinh(_tmp155)) -
      _tmp157 * (_tmp129 * p_b(2, 0) - std::cosh(_tmp155) + std::cosh(_tmp156));
  _res(2, 0) =
      -_tmp172 * (-_tmp180 * p_d(2, 0) + Scalar(1.0) * _tmp182 * std::sinh(_tmp171) -
                  (-_tmp173 * _tmp180 + _tmp174 * (-_tmp170 * _tmp177 - _tmp172 * _tmp182)) *
                      std::sinh(_tmp175)) -
      _tmp177 * (_tmp174 * p_d(2, 0) + std::cosh(_tmp171) - std::cosh(_tmp175));
  _res(3, 0) = _tmp176 * (_tmp188 * p_a(2, 0) + std::cosh(_tmp187) - std::cosh(_tmp191)) -
               _tmp189 * (_tmp194 * p_a(2, 0) + Scalar(1.0) * _tmp195 * std::sinh(_tmp187) -
                          (_tmp188 * (_tmp176 * _tmp186 - _tmp189 * _tmp195) + _tmp190 * _tmp194) *
                              std::sinh(_tmp191));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
