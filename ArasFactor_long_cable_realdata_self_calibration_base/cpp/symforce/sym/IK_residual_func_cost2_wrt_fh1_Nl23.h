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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl23
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl23(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 620

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (215)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp6 = 2 * _tmp0;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp7 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp2 * _tmp5;
  const Scalar _tmp12 = _tmp0 * _tmp8;
  const Scalar _tmp13 = _tmp11 - _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = -_tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(1, 0);
  const Scalar _tmp18 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = _tmp2 * _tmp6;
  const Scalar _tmp22 = _tmp5 * _tmp8;
  const Scalar _tmp23 = _tmp21 + _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(0, 0);
  const Scalar _tmp29 = Scalar(1.0) / (fh1);
  const Scalar _tmp30 = _tmp29 * fv1;
  const Scalar _tmp31 = std::asinh(_tmp30);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * _tmp31;
  const Scalar _tmp33 =
      -_tmp32 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp17 + p_d(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp28 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp34 = Scalar(0.71007031138673404) * _tmp29;
  const Scalar _tmp35 = _tmp33 * _tmp34;
  const Scalar _tmp36 = Scalar(1.0) * _tmp31;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp10 + _tmp14;
  const Scalar _tmp40 = _tmp39 + _tmp4;
  const Scalar _tmp41 = Scalar(1.0) * _tmp40;
  const Scalar _tmp42 = -_tmp41;
  const Scalar _tmp43 = -_tmp4;
  const Scalar _tmp44 = _tmp15 + _tmp43;
  const Scalar _tmp45 = _tmp42 + _tmp44;
  const Scalar _tmp46 = _tmp39 + _tmp43;
  const Scalar _tmp47 = Scalar(1.0) / (_tmp42 + _tmp46);
  const Scalar _tmp48 = _tmp24 - _tmp25;
  const Scalar _tmp49 = _tmp19 + _tmp48;
  const Scalar _tmp50 = _tmp19 + _tmp26;
  const Scalar _tmp51 = Scalar(1.0) * _tmp50;
  const Scalar _tmp52 = _tmp47 * (-_tmp49 + _tmp51);
  const Scalar _tmp53 = _tmp45 * _tmp52;
  const Scalar _tmp54 = _tmp20 + _tmp48;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp51 - _tmp53 - _tmp54);
  const Scalar _tmp56 = _tmp41 * _tmp52 + _tmp51;
  const Scalar _tmp57 = _tmp55 * _tmp56;
  const Scalar _tmp58 = 0;
  const Scalar _tmp59 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp60 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp18 + Scalar(-0.010999999999999999);
  const Scalar _tmp61 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp62 = _tmp60 - _tmp61;
  const Scalar _tmp63 = _tmp59 + _tmp62;
  const Scalar _tmp64 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 - p_b(0, 0);
  const Scalar _tmp66 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp67 = _tmp66 - p_b(1, 0);
  const Scalar _tmp68 = std::pow(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp67, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp69 = _tmp67 * _tmp68;
  const Scalar _tmp70 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp71 = _tmp70 - p_c(0, 0);
  const Scalar _tmp72 = Scalar(1.0) / (_tmp71);
  const Scalar _tmp73 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp74 = _tmp73 - p_c(1, 0);
  const Scalar _tmp75 = _tmp72 * _tmp74;
  const Scalar _tmp76 = _tmp60 + _tmp61;
  const Scalar _tmp77 = _tmp59 + _tmp76;
  const Scalar _tmp78 = _tmp65 * _tmp68;
  const Scalar _tmp79 = _tmp77 * _tmp78;
  const Scalar _tmp80 = _tmp63 * _tmp69 - _tmp75 * _tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (-_tmp69 + _tmp75 * _tmp78);
  const Scalar _tmp82 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp83 = _tmp82 - p_a(1, 0);
  const Scalar _tmp84 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp85 = _tmp84 - p_a(0, 0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp83, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp83 * _tmp86;
  const Scalar _tmp88 = _tmp85 * _tmp86;
  const Scalar _tmp89 = _tmp75 * _tmp88 - _tmp87;
  const Scalar _tmp90 = _tmp81 * _tmp89;
  const Scalar _tmp91 = _tmp75 * _tmp77;
  const Scalar _tmp92 = -_tmp59;
  const Scalar _tmp93 = _tmp62 + _tmp92;
  const Scalar _tmp94 = -_tmp80 * _tmp90 + _tmp87 * _tmp93 - _tmp88 * _tmp91;
  const Scalar _tmp95 = -_tmp63 * _tmp78 + _tmp79;
  const Scalar _tmp96 = -_tmp52 * _tmp94 + _tmp77 * _tmp88 - _tmp88 * _tmp93 - _tmp90 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp98 = _tmp94 * _tmp97;
  const Scalar _tmp99 = _tmp42 - _tmp45 * _tmp57 - _tmp58 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp47;
  const Scalar _tmp101 = Scalar(1.0) * _tmp55;
  const Scalar _tmp102 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp103 = _tmp28 - p_d(0, 0);
  const Scalar _tmp104 = _tmp17 - p_d(1, 0);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp103, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = _tmp76 + _tmp92;
  const Scalar _tmp108 = _tmp107 * fh1;
  const Scalar _tmp109 = _tmp106 * _tmp108 + Scalar(40.024799999999999) * _tmp23 + _tmp27 * fv1;
  const Scalar _tmp110 = _tmp101 * _tmp45;
  const Scalar _tmp111 = _tmp110 * _tmp47;
  const Scalar _tmp112 = -Scalar(1.0) * _tmp101 + Scalar(1.0) * _tmp111;
  const Scalar _tmp113 = _tmp75 * _tmp81;
  const Scalar _tmp114 = _tmp113 * _tmp80 + _tmp91;
  const Scalar _tmp115 = _tmp113 * _tmp95 - _tmp114 * _tmp52 - _tmp77;
  const Scalar _tmp116 =
      std::sqrt(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp74, Scalar(2))));
  const Scalar _tmp117 = Scalar(1.0) / (_tmp116);
  const Scalar _tmp118 = _tmp116 * _tmp72;
  const Scalar _tmp119 = _tmp118 * (-_tmp117 * _tmp40 * _tmp71 + _tmp117 * _tmp50 * _tmp74);
  const Scalar _tmp120 = _tmp119 * _tmp78 + _tmp46 * _tmp78 - _tmp49 * _tmp69;
  const Scalar _tmp121 = _tmp119 * _tmp88 - _tmp120 * _tmp90 + _tmp44 * _tmp88 - _tmp54 * _tmp87;
  const Scalar _tmp122 = _tmp121 * _tmp97;
  const Scalar _tmp123 = Scalar(1.0) / (_tmp121);
  const Scalar _tmp124 = _tmp123 * _tmp96;
  const Scalar _tmp125 = _tmp124 * (_tmp113 * _tmp120 - _tmp115 * _tmp122 - _tmp119);
  const Scalar _tmp126 = _tmp115 + _tmp125;
  const Scalar _tmp127 = _tmp45 * _tmp55;
  const Scalar _tmp128 = _tmp114 + _tmp125 * _tmp127 - _tmp126 * _tmp98;
  const Scalar _tmp129 = Scalar(1.0) * _tmp106 * (-_tmp100 * _tmp128 + _tmp101 * _tmp125);
  const Scalar _tmp130 = Scalar(1.0) * _tmp81;
  const Scalar _tmp131 = _tmp130 * _tmp80;
  const Scalar _tmp132 = -_tmp130 * _tmp95 + _tmp131 * _tmp52;
  const Scalar _tmp133 = _tmp124 * (-_tmp120 * _tmp130 - _tmp122 * _tmp132);
  const Scalar _tmp134 = _tmp132 + _tmp133;
  const Scalar _tmp135 = _tmp127 * _tmp133 - _tmp131 - _tmp134 * _tmp98;
  const Scalar _tmp136 = _tmp104 * _tmp105;
  const Scalar _tmp137 = Scalar(1.0) * _tmp136 * (-_tmp100 * _tmp135 + _tmp101 * _tmp133);
  const Scalar _tmp138 = -_tmp108 * _tmp136 - Scalar(40.024799999999999) * _tmp13 - _tmp16 * fv1;
  const Scalar _tmp139 = _tmp47 * (_tmp101 * _tmp53 + Scalar(1.0));
  const Scalar _tmp140 = _tmp101 * _tmp52;
  const Scalar _tmp141 = -Scalar(1.0) * _tmp139 + Scalar(1.0) * _tmp140;
  const Scalar _tmp142 = Scalar(1.0) * _tmp123;
  const Scalar _tmp143 = _tmp110 * _tmp124 - _tmp142 * _tmp94;
  const Scalar _tmp144 = _tmp101 * _tmp124;
  const Scalar _tmp145 = -_tmp106 * _tmp16 + _tmp136 * _tmp27;
  const Scalar _tmp146 = Scalar(1.0) * _tmp145 * (-_tmp100 * _tmp143 + _tmp144);
  const Scalar _tmp147 =
      Scalar(1.0) * _tmp102 * (-_tmp100 * _tmp99 - _tmp101 * _tmp56 + Scalar(1.0)) +
      _tmp109 * _tmp112 + _tmp129 * fh1 + _tmp137 * fh1 + _tmp138 * _tmp141 + _tmp146 * fh1;
  const Scalar _tmp148 = _tmp58 * _tmp97;
  const Scalar _tmp149 = _tmp78 * _tmp90;
  const Scalar _tmp150 = _tmp89 * _tmp97;
  const Scalar _tmp151 = _tmp81 * (-_tmp134 * _tmp150 + Scalar(1.0));
  const Scalar _tmp152 = _tmp134 * _tmp97;
  const Scalar _tmp153 = _tmp118 * _tmp136 * (_tmp151 * _tmp78 + _tmp152 * _tmp88);
  const Scalar _tmp154 = _tmp118 * _tmp145 * (-_tmp142 * _tmp149 + _tmp142 * _tmp88);
  const Scalar _tmp155 = _tmp81 * (-_tmp126 * _tmp150 - _tmp75);
  const Scalar _tmp156 = _tmp126 * _tmp97;
  const Scalar _tmp157 = _tmp106 * _tmp118 * (_tmp155 * _tmp78 + _tmp156 * _tmp88 + Scalar(1.0));
  const Scalar _tmp158 = -_tmp102 * _tmp118 * (-_tmp148 * _tmp149 + _tmp148 * _tmp88) -
                         _tmp153 * fh1 - _tmp154 * fh1 - _tmp157 * fh1;
  const Scalar _tmp159 = Scalar(1.0) / (_tmp158);
  const Scalar _tmp160 = std::asinh(_tmp147 * _tmp159);
  const Scalar _tmp161 = Scalar(1.0) * _tmp160;
  const Scalar _tmp162 = Scalar(1.4083112389913199) * _tmp158;
  const Scalar _tmp163 =
      -_tmp160 * _tmp162 - std::sqrt(Scalar(std::pow(Scalar(-_tmp70 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp73 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp164 = Scalar(0.71007031138673404) * _tmp159;
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = -_tmp153 - _tmp154 - _tmp157;
  const Scalar _tmp167 = Scalar(1.4083112389913199) * _tmp166;
  const Scalar _tmp168 = _tmp107 * _tmp136;
  const Scalar _tmp169 = _tmp106 * _tmp107;
  const Scalar _tmp170 = std::pow(_tmp158, Scalar(-2));
  const Scalar _tmp171 = _tmp166 * _tmp170;
  const Scalar _tmp172 = (-_tmp147 * _tmp171 + _tmp159 * (_tmp112 * _tmp169 + _tmp129 + _tmp137 -
                                                          _tmp141 * _tmp168 + _tmp146)) /
                         std::sqrt(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp170 + 1));
  const Scalar _tmp173 = _tmp106 * _tmp155;
  const Scalar _tmp174 = _tmp142 * _tmp145;
  const Scalar _tmp175 = _tmp136 * _tmp151;
  const Scalar _tmp176 = _tmp173 - _tmp174 * _tmp90 + _tmp175;
  const Scalar _tmp177 = _tmp135 * _tmp136 * _tmp47;
  const Scalar _tmp178 = _tmp143 * _tmp145 * _tmp47;
  const Scalar _tmp179 = _tmp106 * _tmp128 * _tmp47;
  const Scalar _tmp180 = _tmp101 * _tmp109;
  const Scalar _tmp181 = _tmp102 * _tmp47 * _tmp99 + _tmp138 * _tmp139 + _tmp177 * fh1 +
                         _tmp178 * fh1 + _tmp179 * fh1 - _tmp180 * _tmp45 * _tmp47;
  const Scalar _tmp182 = _tmp102 * _tmp148;
  const Scalar _tmp183 = _tmp174 * fh1;
  const Scalar _tmp184 = _tmp173 * fh1 + _tmp175 * fh1 - _tmp182 * _tmp90 - _tmp183 * _tmp90;
  const Scalar _tmp185 = Scalar(1.0) / (_tmp184);
  const Scalar _tmp186 = std::asinh(_tmp181 * _tmp185);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = Scalar(1.4083112389913199) * _tmp186;
  const Scalar _tmp189 =
      -_tmp184 * _tmp188 - std::sqrt(Scalar(std::pow(Scalar(-_tmp64 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp66 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp190 = Scalar(0.71007031138673404) * _tmp185;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = std::pow(_tmp184, Scalar(-2));
  const Scalar _tmp193 = _tmp176 * _tmp192;
  const Scalar _tmp194 = (-_tmp181 * _tmp193 + _tmp185 * (-_tmp111 * _tmp169 - _tmp139 * _tmp168 +
                                                          _tmp177 + _tmp178 + _tmp179)) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp192 + 1));
  const Scalar _tmp195 = Scalar(1.4083112389913199) * _tmp184;
  const Scalar _tmp196 = _tmp144 * _tmp145;
  const Scalar _tmp197 = _tmp106 * _tmp125 * _tmp55;
  const Scalar _tmp198 = _tmp133 * _tmp136 * _tmp55;
  const Scalar _tmp199 = _tmp102 * _tmp57 - _tmp138 * _tmp140 + _tmp180 - _tmp196 * fh1 -
                         _tmp197 * fh1 - _tmp198 * fh1;
  const Scalar _tmp200 = _tmp136 * _tmp152;
  const Scalar _tmp201 = _tmp106 * _tmp156;
  const Scalar _tmp202 = _tmp182 + _tmp183 + _tmp200 * fh1 + _tmp201 * fh1;
  const Scalar _tmp203 = Scalar(1.0) / (_tmp202);
  const Scalar _tmp204 = std::asinh(_tmp199 * _tmp203);
  const Scalar _tmp205 = Scalar(1.4083112389913199) * _tmp202;
  const Scalar _tmp206 =
      -_tmp204 * _tmp205 - std::sqrt(Scalar(std::pow(Scalar(-_tmp82 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp84 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp207 = Scalar(0.71007031138673404) * _tmp203;
  const Scalar _tmp208 = _tmp206 * _tmp207;
  const Scalar _tmp209 = Scalar(1.0) * _tmp204;
  const Scalar _tmp210 = _tmp174 + _tmp200 + _tmp201;
  const Scalar _tmp211 = Scalar(1.4083112389913199) * _tmp210;
  const Scalar _tmp212 = std::pow(_tmp202, Scalar(-2));
  const Scalar _tmp213 = _tmp210 * _tmp212;
  const Scalar _tmp214 = (-_tmp199 * _tmp213 + _tmp203 * (_tmp101 * _tmp169 + _tmp140 * _tmp168 -
                                                          _tmp196 - _tmp197 - _tmp198)) /
                         std::sqrt(Scalar(std::pow(_tmp199, Scalar(2)) * _tmp212 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(1.4083112389913199) * fh1 *
                   (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp36) -
                    (-Scalar(0.71007031138673404) * _tmp33 * _tmp37 +
                     _tmp34 * (Scalar(1.4083112389913199) * _tmp30 * _tmp38 - _tmp32)) *
                        std::cosh(_tmp35)) -
               Scalar(1.4083112389913199) * std::sinh(_tmp35) -
               Scalar(1.4083112389913199) * std::sinh(_tmp36);
  _res(1, 0) = _tmp162 * (-Scalar(1.0) * _tmp172 * std::cosh(_tmp161) -
                          (-Scalar(0.71007031138673404) * _tmp163 * _tmp171 +
                           _tmp164 * (-_tmp160 * _tmp167 - _tmp162 * _tmp172)) *
                              std::cosh(_tmp165)) +
               _tmp167 * (-std::sinh(_tmp161) - std::sinh(_tmp165));
  _res(2, 0) = Scalar(1.4083112389913199) * _tmp176 * (-std::sinh(_tmp187) - std::sinh(_tmp191)) +
               _tmp195 * (-Scalar(1.0) * _tmp194 * std::cosh(_tmp187) -
                          (-Scalar(0.71007031138673404) * _tmp189 * _tmp193 +
                           _tmp190 * (-_tmp176 * _tmp188 - _tmp194 * _tmp195)) *
                              std::cosh(_tmp191));
  _res(3, 0) = _tmp205 * (-Scalar(1.0) * _tmp214 * std::cosh(_tmp209) -
                          (-Scalar(0.71007031138673404) * _tmp206 * _tmp213 +
                           _tmp207 * (-_tmp204 * _tmp211 - _tmp205 * _tmp214)) *
                              std::cosh(_tmp208)) +
               _tmp211 * (-std::sinh(_tmp208) - std::sinh(_tmp209));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
