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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl20
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 635

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (219)
  const Scalar _tmp0 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp1 = Scalar(0.71007031138673404) * p_d(2, 0);
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp5 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp4;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp10 * _tmp2;
  const Scalar _tmp12 = -_tmp11 + _tmp9;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp2 * _tmp7;
  const Scalar _tmp15 = _tmp10 * _tmp4;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 - _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp2 * _tmp8;
  const Scalar _tmp24 = _tmp10 * _tmp7;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = _tmp22 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(0, 0);
  const Scalar _tmp31 = Scalar(1.0) / (fh1);
  const Scalar _tmp32 = _tmp31 * fv1;
  const Scalar _tmp33 = std::asinh(_tmp32);
  const Scalar _tmp34 = Scalar(1.4083112389913199) * _tmp33;
  const Scalar _tmp35 =
      -_tmp34 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp19 + p_d(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp30 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp36 = Scalar(0.71007031138673404) * _tmp31;
  const Scalar _tmp37 = _tmp35 * _tmp36;
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp0 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(1.0) * _tmp33;
  const Scalar _tmp40 = _tmp21 + _tmp28;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 - p_c(0, 0);
  const Scalar _tmp43 = _tmp13 + _tmp16;
  const Scalar _tmp44 = _tmp43 + _tmp6;
  const Scalar _tmp45 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp46 = _tmp45 - p_c(1, 0);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp42 * _tmp47;
  const Scalar _tmp49 = _tmp26 - _tmp27;
  const Scalar _tmp50 = _tmp21 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - p_b(0, 0);
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = -_tmp6;
  const Scalar _tmp55 = _tmp43 + _tmp54;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 - p_b(1, 0);
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp60 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp61 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp62 = _tmp60 - _tmp61;
  const Scalar _tmp63 = _tmp59 + _tmp62;
  const Scalar _tmp64 = _tmp22 + _tmp49;
  const Scalar _tmp65 = _tmp64 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 - p_a(0, 0);
  const Scalar _tmp67 = _tmp17 + _tmp54;
  const Scalar _tmp68 = _tmp67 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 - p_a(1, 0);
  const Scalar _tmp70 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp69, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp71 = _tmp66 * _tmp70;
  const Scalar _tmp72 = _tmp63 * _tmp71;
  const Scalar _tmp73 = -_tmp59;
  const Scalar _tmp74 = _tmp62 + _tmp73;
  const Scalar _tmp75 = _tmp69 * _tmp70;
  const Scalar _tmp76 = -_tmp58 * _tmp72 + _tmp74 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp58 * _tmp71 - _tmp75);
  const Scalar _tmp78 = _tmp46 * _tmp47;
  const Scalar _tmp79 = _tmp48 * _tmp58 - _tmp78;
  const Scalar _tmp80 = _tmp77 * _tmp79;
  const Scalar _tmp81 = _tmp48 * _tmp63;
  const Scalar _tmp82 = _tmp60 + _tmp61;
  const Scalar _tmp83 = _tmp59 + _tmp82;
  const Scalar _tmp84 = -_tmp58 * _tmp81 - _tmp76 * _tmp80 + _tmp78 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) * _tmp55;
  const Scalar _tmp86 = -_tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp67 + _tmp86);
  const Scalar _tmp88 = Scalar(1.0) * _tmp50;
  const Scalar _tmp89 = _tmp87 * (-_tmp64 + _tmp88);
  const Scalar _tmp90 = -_tmp71 * _tmp74 + _tmp72;
  const Scalar _tmp91 = -_tmp48 * _tmp83 - _tmp80 * _tmp90 + _tmp81 - _tmp84 * _tmp89;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = Scalar(1.0) * _tmp77;
  const Scalar _tmp94 = _tmp76 * _tmp93;
  const Scalar _tmp95 = _tmp89 * _tmp94 - _tmp90 * _tmp93;
  const Scalar _tmp96 =
      std::sqrt(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp97 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp98 = _tmp53 * _tmp96;
  const Scalar _tmp99 = _tmp98 * (_tmp50 * _tmp57 * _tmp97 - _tmp52 * _tmp55 * _tmp97);
  const Scalar _tmp100 = -_tmp64 * _tmp75 + _tmp67 * _tmp71 + _tmp71 * _tmp99;
  const Scalar _tmp101 = -_tmp100 * _tmp80 - _tmp40 * _tmp78 + _tmp44 * _tmp48 + _tmp48 * _tmp99;
  const Scalar _tmp102 = _tmp101 * _tmp92;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp104 = _tmp103 * _tmp91;
  const Scalar _tmp105 = _tmp104 * (-_tmp100 * _tmp93 - _tmp102 * _tmp95);
  const Scalar _tmp106 = _tmp105 + _tmp95;
  const Scalar _tmp107 = _tmp106 * _tmp92;
  const Scalar _tmp108 = _tmp79 * _tmp92;
  const Scalar _tmp109 = _tmp77 * (-_tmp106 * _tmp108 + Scalar(1.0));
  const Scalar _tmp110 = _tmp30 - p_d(0, 0);
  const Scalar _tmp111 = _tmp19 - p_d(1, 0);
  const Scalar _tmp112 =
      std::pow(Scalar(std::pow(_tmp110, Scalar(2)) + std::pow(_tmp111, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp113 = _tmp111 * _tmp112;
  const Scalar _tmp114 = _tmp113 * _tmp98 * (_tmp107 * _tmp48 + _tmp109 * _tmp71);
  const Scalar _tmp115 = _tmp58 * _tmp77;
  const Scalar _tmp116 = _tmp115 * _tmp76 + _tmp58 * _tmp63;
  const Scalar _tmp117 = _tmp115 * _tmp90 - _tmp116 * _tmp89 - _tmp63;
  const Scalar _tmp118 = _tmp104 * (_tmp100 * _tmp115 - _tmp102 * _tmp117 - _tmp99);
  const Scalar _tmp119 = _tmp117 + _tmp118;
  const Scalar _tmp120 = _tmp119 * _tmp92;
  const Scalar _tmp121 = _tmp77 * (-_tmp108 * _tmp119 - _tmp58);
  const Scalar _tmp122 = _tmp110 * _tmp112;
  const Scalar _tmp123 = _tmp122 * _tmp98 * (_tmp120 * _tmp48 + _tmp121 * _tmp71 + Scalar(1.0));
  const Scalar _tmp124 = _tmp113 * _tmp29 - _tmp122 * _tmp18;
  const Scalar _tmp125 = Scalar(1.0) * _tmp103;
  const Scalar _tmp126 = _tmp71 * _tmp80;
  const Scalar _tmp127 = _tmp124 * _tmp98 * (-_tmp125 * _tmp126 + _tmp125 * _tmp48);
  const Scalar _tmp128 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp129 = _tmp85 * _tmp89 + _tmp88;
  const Scalar _tmp130 = 0;
  const Scalar _tmp131 = _tmp130 * _tmp92;
  const Scalar _tmp132 = -_tmp114 * fh1 - _tmp123 * fh1 - _tmp127 * fh1 -
                         _tmp128 * _tmp98 * (-_tmp126 * _tmp131 + _tmp131 * _tmp48);
  const Scalar _tmp133 = Scalar(1.0) / (_tmp132);
  const Scalar _tmp134 = _tmp44 + _tmp86;
  const Scalar _tmp135 = _tmp134 * _tmp89;
  const Scalar _tmp136 = Scalar(1.0) / (-_tmp135 - _tmp40 + _tmp88);
  const Scalar _tmp137 = Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp84 * _tmp92;
  const Scalar _tmp139 = _tmp134 * _tmp136;
  const Scalar _tmp140 = _tmp105 * _tmp139 - _tmp106 * _tmp138 - _tmp94;
  const Scalar _tmp141 = Scalar(1.0) * _tmp87;
  const Scalar _tmp142 = Scalar(1.0) * _tmp113 * (_tmp105 * _tmp137 - _tmp140 * _tmp141);
  const Scalar _tmp143 = _tmp73 + _tmp82;
  const Scalar _tmp144 = _tmp143 * fh1;
  const Scalar _tmp145 = _tmp122 * _tmp144 + Scalar(40.024799999999999) * _tmp25 + _tmp29 * fv1;
  const Scalar _tmp146 = _tmp134 * _tmp87;
  const Scalar _tmp147 = _tmp137 * _tmp146;
  const Scalar _tmp148 = -Scalar(1.0) * _tmp137 + Scalar(1.0) * _tmp147;
  const Scalar _tmp149 = _tmp116 + _tmp118 * _tmp139 - _tmp119 * _tmp138;
  const Scalar _tmp150 = Scalar(1.0) * _tmp122 * (_tmp118 * _tmp137 - _tmp141 * _tmp149);
  const Scalar _tmp151 = -_tmp113 * _tmp144 - Scalar(40.024799999999999) * _tmp12 - _tmp18 * fv1;
  const Scalar _tmp152 = _tmp137 * _tmp89;
  const Scalar _tmp153 = _tmp87 * (_tmp135 * _tmp137 + Scalar(1.0));
  const Scalar _tmp154 = Scalar(1.0) * _tmp152 - Scalar(1.0) * _tmp153;
  const Scalar _tmp155 = _tmp129 * _tmp136;
  const Scalar _tmp156 = -_tmp130 * _tmp138 - _tmp134 * _tmp155 + _tmp86;
  const Scalar _tmp157 = _tmp104 * _tmp137;
  const Scalar _tmp158 = _tmp87 * (-_tmp125 * _tmp84 + _tmp134 * _tmp157);
  const Scalar _tmp159 = Scalar(1.0) * _tmp124 * (_tmp157 - Scalar(1.0) * _tmp158);
  const Scalar _tmp160 =
      Scalar(1.0) * _tmp128 * (-_tmp129 * _tmp137 - _tmp141 * _tmp156 + Scalar(1.0)) +
      _tmp142 * fh1 + _tmp145 * _tmp148 + _tmp150 * fh1 + _tmp151 * _tmp154 + _tmp159 * fh1;
  const Scalar _tmp161 = std::asinh(_tmp133 * _tmp160);
  const Scalar _tmp162 = Scalar(1.0) * _tmp161;
  const Scalar _tmp163 = std::pow(_tmp132, Scalar(-2));
  const Scalar _tmp164 = _tmp122 * _tmp143;
  const Scalar _tmp165 = _tmp113 * _tmp143;
  const Scalar _tmp166 = -_tmp114 - _tmp123 - _tmp127;
  const Scalar _tmp167 = _tmp163 * _tmp166;
  const Scalar _tmp168 =
      (_tmp133 * (_tmp142 + _tmp148 * _tmp164 + _tmp150 - _tmp154 * _tmp165 + _tmp159) -
       _tmp160 * _tmp167) /
      std::sqrt(Scalar(std::pow(_tmp160, Scalar(2)) * _tmp163 + 1));
  const Scalar _tmp169 = Scalar(0.71007031138673404) * _tmp167;
  const Scalar _tmp170 = Scalar(1.4083112389913199) * _tmp161;
  const Scalar _tmp171 =
      -_tmp132 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp56 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.71007031138673404) * _tmp133;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = Scalar(1.4083112389913199) * _tmp132;
  const Scalar _tmp175 = _tmp124 * _tmp125;
  const Scalar _tmp176 = _tmp175 * fh1;
  const Scalar _tmp177 = _tmp128 * _tmp131;
  const Scalar _tmp178 = _tmp121 * _tmp122;
  const Scalar _tmp179 = _tmp109 * _tmp113;
  const Scalar _tmp180 = -_tmp176 * _tmp80 - _tmp177 * _tmp80 + _tmp178 * fh1 + _tmp179 * fh1;
  const Scalar _tmp181 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp182 = -_tmp175 * _tmp80 + _tmp178 + _tmp179;
  const Scalar _tmp183 = _tmp181 * _tmp182;
  const Scalar _tmp184 = Scalar(0.71007031138673404) * _tmp183;
  const Scalar _tmp185 = _tmp124 * _tmp158;
  const Scalar _tmp186 = _tmp137 * _tmp145;
  const Scalar _tmp187 = _tmp122 * _tmp149 * _tmp87;
  const Scalar _tmp188 = _tmp113 * _tmp140 * _tmp87;
  const Scalar _tmp189 = _tmp128 * _tmp156 * _tmp87 - _tmp146 * _tmp186 + _tmp151 * _tmp153 +
                         _tmp185 * fh1 + _tmp187 * fh1 + _tmp188 * fh1;
  const Scalar _tmp190 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp191 = std::asinh(_tmp189 * _tmp190);
  const Scalar _tmp192 = Scalar(1.0) * _tmp191;
  const Scalar _tmp193 = (-_tmp183 * _tmp189 + _tmp190 * (-_tmp147 * _tmp164 - _tmp153 * _tmp165 +
                                                          _tmp185 + _tmp187 + _tmp188)) /
                         std::sqrt(Scalar(_tmp181 * std::pow(_tmp189, Scalar(2)) + 1));
  const Scalar _tmp194 = Scalar(1.4083112389913199) * _tmp180;
  const Scalar _tmp195 =
      -_tmp191 * _tmp194 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp68 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp196 = Scalar(1.4083112389913199) * _tmp182;
  const Scalar _tmp197 = Scalar(0.71007031138673404) * _tmp190;
  const Scalar _tmp198 = _tmp195 * _tmp197;
  const Scalar _tmp199 = _tmp124 * _tmp157;
  const Scalar _tmp200 = _tmp105 * _tmp113 * _tmp136;
  const Scalar _tmp201 = _tmp118 * _tmp122 * _tmp136;
  const Scalar _tmp202 = _tmp128 * _tmp155 - _tmp151 * _tmp152 + _tmp186 - _tmp199 * fh1 -
                         _tmp200 * fh1 - _tmp201 * fh1;
  const Scalar _tmp203 = _tmp107 * _tmp113;
  const Scalar _tmp204 = _tmp120 * _tmp122;
  const Scalar _tmp205 = _tmp176 + _tmp177 + _tmp203 * fh1 + _tmp204 * fh1;
  const Scalar _tmp206 = Scalar(1.0) / (_tmp205);
  const Scalar _tmp207 = std::asinh(_tmp202 * _tmp206);
  const Scalar _tmp208 = Scalar(1.0) * _tmp207;
  const Scalar _tmp209 = std::pow(_tmp205, Scalar(-2));
  const Scalar _tmp210 = _tmp175 + _tmp203 + _tmp204;
  const Scalar _tmp211 = _tmp209 * _tmp210;
  const Scalar _tmp212 = (-_tmp202 * _tmp211 + _tmp206 * (_tmp137 * _tmp164 + _tmp152 * _tmp165 -
                                                          _tmp199 - _tmp200 - _tmp201)) /
                         std::sqrt(Scalar(std::pow(_tmp202, Scalar(2)) * _tmp209 + 1));
  const Scalar _tmp213 = Scalar(1.4083112389913199) * _tmp205;
  const Scalar _tmp214 = Scalar(1.4083112389913199) * _tmp210;
  const Scalar _tmp215 = Scalar(0.71007031138673404) * _tmp206;
  const Scalar _tmp216 =
      -_tmp207 * _tmp213 - std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp45 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp217 = Scalar(0.71007031138673404) * _tmp211;
  const Scalar _tmp218 = _tmp215 * _tmp216;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -Scalar(1.4083112389913199) * _tmp1 * _tmp31 -
               Scalar(1.4083112389913199) * fh1 *
                   (-_tmp0 * _tmp1 - Scalar(1.0) * _tmp0 * _tmp38 * fv1 * std::sinh(_tmp39) -
                    (-Scalar(0.71007031138673404) * _tmp0 * _tmp35 +
                     _tmp36 * (Scalar(1.4083112389913199) * _tmp32 * _tmp38 - _tmp34)) *
                        std::sinh(_tmp37)) +
               Scalar(1.4083112389913199) * std::cosh(_tmp37) -
               Scalar(1.4083112389913199) * std::cosh(_tmp39);
  _res(1, 0) =
      -Scalar(1.4083112389913199) * _tmp166 *
          (_tmp172 * p_b(2, 0) + std::cosh(_tmp162) - std::cosh(_tmp173)) -
      _tmp174 * (Scalar(1.0) * _tmp168 * std::sinh(_tmp162) - _tmp169 * p_b(2, 0) -
                 (-_tmp169 * _tmp171 + _tmp172 * (-_tmp166 * _tmp170 - _tmp168 * _tmp174)) *
                     std::sinh(_tmp173));
  _res(2, 0) =
      -_tmp194 * (-_tmp184 * p_a(2, 0) + Scalar(1.0) * _tmp193 * std::sinh(_tmp192) -
                  (-_tmp184 * _tmp195 + _tmp197 * (-_tmp191 * _tmp196 - _tmp193 * _tmp194)) *
                      std::sinh(_tmp198)) -
      _tmp196 * (_tmp197 * p_a(2, 0) + std::cosh(_tmp192) - std::cosh(_tmp198));
  _res(3, 0) =
      -_tmp213 * (Scalar(1.0) * _tmp212 * std::sinh(_tmp208) - _tmp217 * p_c(2, 0) -
                  (_tmp215 * (-_tmp207 * _tmp214 - _tmp212 * _tmp213) - _tmp216 * _tmp217) *
                      std::sinh(_tmp218)) -
      _tmp214 * (_tmp215 * p_c(2, 0) + std::cosh(_tmp208) - std::cosh(_tmp218));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
