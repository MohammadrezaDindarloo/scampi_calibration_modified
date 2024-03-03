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
 * Symbolic function: IK_residual_func_cost4_wrt_fh1_Nl20
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost4WrtFh1Nl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 623

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (216)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp5 = _tmp3 * _tmp4;
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp9 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp0 * _tmp11;
  const Scalar _tmp13 = _tmp1 * _tmp4;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp1 * _tmp11;
  const Scalar _tmp23 = _tmp0 * _tmp4;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = Scalar(1.0) / (fh1);
  const Scalar _tmp31 = _tmp30 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * _tmp32;
  const Scalar _tmp34 =
      -_tmp33 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_d(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp29 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.71007031138673404) * _tmp30;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = Scalar(1.0) * _tmp32;
  const Scalar _tmp38 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp39 =
      std::pow(Scalar(_tmp38 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp20 + _tmp27;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 - p_c(0, 0);
  const Scalar _tmp43 = _tmp16 + _tmp6;
  const Scalar _tmp44 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp45 = _tmp44 - p_c(1, 0);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp42 * _tmp46;
  const Scalar _tmp48 = _tmp25 - _tmp26;
  const Scalar _tmp49 = _tmp20 + _tmp48;
  const Scalar _tmp50 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 - p_b(0, 0);
  const Scalar _tmp52 = Scalar(1.0) / (_tmp51);
  const Scalar _tmp53 = -_tmp10 + _tmp15;
  const Scalar _tmp54 = _tmp53 + _tmp6;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_b(1, 0);
  const Scalar _tmp57 = _tmp52 * _tmp56;
  const Scalar _tmp58 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp59 = -_tmp58;
  const Scalar _tmp60 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp61 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp62 = _tmp60 + _tmp61;
  const Scalar _tmp63 = _tmp59 + _tmp62;
  const Scalar _tmp64 = _tmp21 + _tmp48;
  const Scalar _tmp65 = _tmp64 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 - p_a(0, 0);
  const Scalar _tmp67 = _tmp53 + _tmp7;
  const Scalar _tmp68 = _tmp67 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 - p_a(1, 0);
  const Scalar _tmp70 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp69, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp71 = _tmp66 * _tmp70;
  const Scalar _tmp72 = _tmp63 * _tmp71;
  const Scalar _tmp73 = _tmp60 - _tmp61;
  const Scalar _tmp74 = _tmp59 + _tmp73;
  const Scalar _tmp75 = _tmp69 * _tmp70;
  const Scalar _tmp76 = -_tmp57 * _tmp72 + _tmp74 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp57 * _tmp71 - _tmp75);
  const Scalar _tmp78 = _tmp45 * _tmp46;
  const Scalar _tmp79 = _tmp47 * _tmp57 - _tmp78;
  const Scalar _tmp80 = _tmp77 * _tmp79;
  const Scalar _tmp81 = _tmp47 * _tmp63;
  const Scalar _tmp82 = _tmp58 + _tmp62;
  const Scalar _tmp83 = -_tmp57 * _tmp81 - _tmp76 * _tmp80 + _tmp78 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) * _tmp54;
  const Scalar _tmp85 = -_tmp84;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp67 + _tmp85);
  const Scalar _tmp87 = Scalar(1.0) * _tmp49;
  const Scalar _tmp88 = _tmp86 * (-_tmp64 + _tmp87);
  const Scalar _tmp89 = -_tmp71 * _tmp74 + _tmp72;
  const Scalar _tmp90 = -_tmp47 * _tmp82 - _tmp80 * _tmp89 + _tmp81 - _tmp83 * _tmp88;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = Scalar(1.0) * _tmp77;
  const Scalar _tmp93 = _tmp76 * _tmp92;
  const Scalar _tmp94 = _tmp88 * _tmp93 - _tmp89 * _tmp92;
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp56, Scalar(2))));
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp52 * _tmp95;
  const Scalar _tmp98 = _tmp97 * (_tmp49 * _tmp56 * _tmp96 - _tmp51 * _tmp54 * _tmp96);
  const Scalar _tmp99 = -_tmp64 * _tmp75 + _tmp67 * _tmp71 + _tmp71 * _tmp98;
  const Scalar _tmp100 = -_tmp40 * _tmp78 + _tmp43 * _tmp47 + _tmp47 * _tmp98 - _tmp80 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp91;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp90;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp94 - _tmp92 * _tmp99);
  const Scalar _tmp105 = _tmp104 + _tmp94;
  const Scalar _tmp106 = _tmp105 * _tmp91;
  const Scalar _tmp107 = _tmp79 * _tmp91;
  const Scalar _tmp108 = _tmp77 * (-_tmp105 * _tmp107 + Scalar(1.0));
  const Scalar _tmp109 = _tmp29 - p_d(0, 0);
  const Scalar _tmp110 = _tmp18 - p_d(1, 0);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp109, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp110 * _tmp111;
  const Scalar _tmp113 = _tmp112 * _tmp97 * (_tmp106 * _tmp47 + _tmp108 * _tmp71);
  const Scalar _tmp114 = _tmp57 * _tmp77;
  const Scalar _tmp115 = _tmp114 * _tmp76 + _tmp57 * _tmp63;
  const Scalar _tmp116 = _tmp114 * _tmp89 - _tmp115 * _tmp88 - _tmp63;
  const Scalar _tmp117 = _tmp103 * (-_tmp101 * _tmp116 + _tmp114 * _tmp99 - _tmp98);
  const Scalar _tmp118 = _tmp116 + _tmp117;
  const Scalar _tmp119 = _tmp118 * _tmp91;
  const Scalar _tmp120 = _tmp77 * (-_tmp107 * _tmp118 - _tmp57);
  const Scalar _tmp121 = _tmp109 * _tmp111;
  const Scalar _tmp122 = _tmp121 * _tmp97 * (_tmp119 * _tmp47 + _tmp120 * _tmp71 + Scalar(1.0));
  const Scalar _tmp123 = _tmp112 * _tmp28 - _tmp121 * _tmp17;
  const Scalar _tmp124 = Scalar(1.0) * _tmp102;
  const Scalar _tmp125 = _tmp71 * _tmp80;
  const Scalar _tmp126 = _tmp123 * _tmp97 * (-_tmp124 * _tmp125 + _tmp124 * _tmp47);
  const Scalar _tmp127 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp128 = _tmp84 * _tmp88 + _tmp87;
  const Scalar _tmp129 = 0;
  const Scalar _tmp130 = _tmp129 * _tmp91;
  const Scalar _tmp131 = -_tmp113 * fh1 - _tmp122 * fh1 - _tmp126 * fh1 -
                         _tmp127 * _tmp97 * (-_tmp125 * _tmp130 + _tmp130 * _tmp47);
  const Scalar _tmp132 = Scalar(1.0) / (_tmp131);
  const Scalar _tmp133 = _tmp43 + _tmp85;
  const Scalar _tmp134 = _tmp133 * _tmp88;
  const Scalar _tmp135 = Scalar(1.0) / (-_tmp134 - _tmp40 + _tmp87);
  const Scalar _tmp136 = Scalar(1.0) * _tmp135;
  const Scalar _tmp137 = _tmp83 * _tmp91;
  const Scalar _tmp138 = _tmp133 * _tmp135;
  const Scalar _tmp139 = _tmp104 * _tmp138 - _tmp105 * _tmp137 - _tmp93;
  const Scalar _tmp140 = Scalar(1.0) * _tmp86;
  const Scalar _tmp141 = Scalar(1.0) * _tmp112 * (_tmp104 * _tmp136 - _tmp139 * _tmp140);
  const Scalar _tmp142 = _tmp58 + _tmp73;
  const Scalar _tmp143 = _tmp142 * fh1;
  const Scalar _tmp144 = _tmp121 * _tmp143 + Scalar(40.024799999999999) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp145 = _tmp133 * _tmp86;
  const Scalar _tmp146 = Scalar(1.0) * _tmp136 * _tmp145 - Scalar(1.0) * _tmp136;
  const Scalar _tmp147 = _tmp115 + _tmp117 * _tmp138 - _tmp118 * _tmp137;
  const Scalar _tmp148 = Scalar(1.0) * _tmp121 * (_tmp117 * _tmp136 - _tmp140 * _tmp147);
  const Scalar _tmp149 = -_tmp112 * _tmp143 - Scalar(40.024799999999999) * _tmp14 - _tmp17 * fv1;
  const Scalar _tmp150 = _tmp136 * _tmp88;
  const Scalar _tmp151 = _tmp134 * _tmp136 + Scalar(1.0);
  const Scalar _tmp152 = -Scalar(1.0) * _tmp140 * _tmp151 + Scalar(1.0) * _tmp150;
  const Scalar _tmp153 = _tmp128 * _tmp135;
  const Scalar _tmp154 = -_tmp129 * _tmp137 - _tmp133 * _tmp153 + _tmp85;
  const Scalar _tmp155 = _tmp103 * _tmp136;
  const Scalar _tmp156 = _tmp86 * (-_tmp124 * _tmp83 + _tmp133 * _tmp155);
  const Scalar _tmp157 = Scalar(1.0) * _tmp123 * (_tmp155 - Scalar(1.0) * _tmp156);
  const Scalar _tmp158 =
      Scalar(1.0) * _tmp127 * (-_tmp128 * _tmp136 - _tmp140 * _tmp154 + Scalar(1.0)) +
      _tmp141 * fh1 + _tmp144 * _tmp146 + _tmp148 * fh1 + _tmp149 * _tmp152 + _tmp157 * fh1;
  const Scalar _tmp159 = std::asinh(_tmp132 * _tmp158);
  const Scalar _tmp160 = Scalar(1.0) * _tmp159;
  const Scalar _tmp161 = std::pow(_tmp131, Scalar(-2));
  const Scalar _tmp162 = _tmp121 * _tmp142;
  const Scalar _tmp163 = _tmp112 * _tmp142;
  const Scalar _tmp164 = -_tmp113 - _tmp122 - _tmp126;
  const Scalar _tmp165 = _tmp161 * _tmp164;
  const Scalar _tmp166 =
      (_tmp132 * (_tmp141 + _tmp146 * _tmp162 + _tmp148 - _tmp152 * _tmp163 + _tmp157) -
       _tmp158 * _tmp165) /
      std::sqrt(Scalar(std::pow(_tmp158, Scalar(2)) * _tmp161 + 1));
  const Scalar _tmp167 = Scalar(1.4083112389913199) * _tmp159;
  const Scalar _tmp168 =
      -_tmp131 * _tmp167 - std::sqrt(Scalar(std::pow(Scalar(-_tmp50 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp169 = Scalar(0.71007031138673404) * _tmp132;
  const Scalar _tmp170 = _tmp168 * _tmp169;
  const Scalar _tmp171 = Scalar(1.4083112389913199) * _tmp131;
  const Scalar _tmp172 = _tmp123 * _tmp156;
  const Scalar _tmp173 = _tmp136 * _tmp144;
  const Scalar _tmp174 = _tmp121 * _tmp86;
  const Scalar _tmp175 = _tmp147 * _tmp174;
  const Scalar _tmp176 = _tmp151 * _tmp86;
  const Scalar _tmp177 = _tmp112 * _tmp139 * _tmp86;
  const Scalar _tmp178 = _tmp127 * _tmp154 * _tmp86 - _tmp145 * _tmp173 + _tmp149 * _tmp176 +
                         _tmp172 * fh1 + _tmp175 * fh1 + _tmp177 * fh1;
  const Scalar _tmp179 = _tmp123 * _tmp124;
  const Scalar _tmp180 = _tmp179 * fh1;
  const Scalar _tmp181 = _tmp127 * _tmp130;
  const Scalar _tmp182 = _tmp120 * _tmp121;
  const Scalar _tmp183 = _tmp108 * _tmp112;
  const Scalar _tmp184 = -_tmp180 * _tmp80 - _tmp181 * _tmp80 + _tmp182 * fh1 + _tmp183 * fh1;
  const Scalar _tmp185 = Scalar(1.0) / (_tmp184);
  const Scalar _tmp186 = std::asinh(_tmp178 * _tmp185);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = Scalar(1.4083112389913199) * _tmp184;
  const Scalar _tmp189 =
      -_tmp186 * _tmp188 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp68 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp190 = Scalar(0.71007031138673404) * _tmp185;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = -_tmp179 * _tmp80 + _tmp182 + _tmp183;
  const Scalar _tmp193 = Scalar(1.4083112389913199) * _tmp192;
  const Scalar _tmp194 = std::pow(_tmp184, Scalar(-2));
  const Scalar _tmp195 = _tmp192 * _tmp194;
  const Scalar _tmp196 =
      (-_tmp178 * _tmp195 + _tmp185 * (-_tmp133 * _tmp136 * _tmp142 * _tmp174 - _tmp163 * _tmp176 +
                                       _tmp172 + _tmp175 + _tmp177)) /
      std::sqrt(Scalar(std::pow(_tmp178, Scalar(2)) * _tmp194 + 1));
  const Scalar _tmp197 = _tmp123 * _tmp155;
  const Scalar _tmp198 = _tmp104 * _tmp112 * _tmp135;
  const Scalar _tmp199 = _tmp117 * _tmp121 * _tmp135;
  const Scalar _tmp200 = _tmp127 * _tmp153 - _tmp149 * _tmp150 + _tmp173 - _tmp197 * fh1 -
                         _tmp198 * fh1 - _tmp199 * fh1;
  const Scalar _tmp201 = _tmp106 * _tmp112;
  const Scalar _tmp202 = _tmp119 * _tmp121;
  const Scalar _tmp203 = _tmp180 + _tmp181 + _tmp201 * fh1 + _tmp202 * fh1;
  const Scalar _tmp204 = Scalar(1.0) / (_tmp203);
  const Scalar _tmp205 = std::asinh(_tmp200 * _tmp204);
  const Scalar _tmp206 = Scalar(1.0) * _tmp205;
  const Scalar _tmp207 = Scalar(1.4083112389913199) * _tmp205;
  const Scalar _tmp208 =
      -_tmp203 * _tmp207 - std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp44 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp209 = Scalar(0.71007031138673404) * _tmp204;
  const Scalar _tmp210 = _tmp208 * _tmp209;
  const Scalar _tmp211 = _tmp179 + _tmp201 + _tmp202;
  const Scalar _tmp212 = std::pow(_tmp203, Scalar(-2));
  const Scalar _tmp213 = _tmp211 * _tmp212;
  const Scalar _tmp214 = (-_tmp200 * _tmp213 + _tmp204 * (_tmp136 * _tmp162 + _tmp150 * _tmp163 -
                                                          _tmp197 - _tmp198 - _tmp199)) /
                         std::sqrt(Scalar(std::pow(_tmp200, Scalar(2)) * _tmp212 + 1));
  const Scalar _tmp215 = Scalar(1.4083112389913199) * _tmp203;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(1.4083112389913199) * fh1 *
                   (Scalar(1.0) * _tmp38 * _tmp39 * fv1 * std::cosh(_tmp37) -
                    (-Scalar(0.71007031138673404) * _tmp34 * _tmp38 +
                     _tmp35 * (Scalar(1.4083112389913199) * _tmp31 * _tmp39 - _tmp33)) *
                        std::cosh(_tmp36)) -
               Scalar(1.4083112389913199) * std::sinh(_tmp36) -
               Scalar(1.4083112389913199) * std::sinh(_tmp37);
  _res(1, 0) = Scalar(1.4083112389913199) * _tmp164 * (-std::sinh(_tmp160) - std::sinh(_tmp170)) +
               _tmp171 * (-Scalar(1.0) * _tmp166 * std::cosh(_tmp160) -
                          (-Scalar(0.71007031138673404) * _tmp165 * _tmp168 +
                           _tmp169 * (-_tmp164 * _tmp167 - _tmp166 * _tmp171)) *
                              std::cosh(_tmp170));
  _res(2, 0) = _tmp188 * (-Scalar(1.0) * _tmp196 * std::cosh(_tmp187) -
                          (-Scalar(0.71007031138673404) * _tmp189 * _tmp195 +
                           _tmp190 * (-_tmp186 * _tmp193 - _tmp188 * _tmp196)) *
                              std::cosh(_tmp191)) +
               _tmp193 * (-std::sinh(_tmp187) - std::sinh(_tmp191));
  _res(3, 0) = Scalar(1.4083112389913199) * _tmp211 * (-std::sinh(_tmp206) - std::sinh(_tmp210)) +
               _tmp215 * (-Scalar(1.0) * _tmp214 * std::cosh(_tmp206) -
                          (-Scalar(0.71007031138673404) * _tmp208 * _tmp213 +
                           _tmp209 * (-_tmp207 * _tmp211 - _tmp214 * _tmp215)) *
                              std::cosh(_tmp210));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
