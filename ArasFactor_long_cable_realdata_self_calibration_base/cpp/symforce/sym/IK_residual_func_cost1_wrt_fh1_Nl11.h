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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl11
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 639

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (218)
  const Scalar _tmp0 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp1 = Scalar(0.71007031138673404) * p_b(2, 0);
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp4 = 2 * _tmp2 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp10 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp12 = 2 * _tmp5;
  const Scalar _tmp13 = _tmp12 * _tmp2;
  const Scalar _tmp14 = _tmp3 * _tmp6;
  const Scalar _tmp15 = _tmp13 - _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = -_tmp11 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp8;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp9 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp22 = _tmp12 * _tmp3;
  const Scalar _tmp23 = _tmp2 * _tmp6;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = Scalar(1.0) / (fh1);
  const Scalar _tmp31 = _tmp30 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * _tmp32;
  const Scalar _tmp34 =
      -_tmp33 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp19 + p_b(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp29 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.71007031138673404) * _tmp30;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp0 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(1.0) * _tmp32;
  const Scalar _tmp39 = _tmp25 + _tmp26;
  const Scalar _tmp40 = _tmp21 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 - p_c(0, 0);
  const Scalar _tmp43 = _tmp11 + _tmp16;
  const Scalar _tmp44 = _tmp43 + _tmp8;
  const Scalar _tmp45 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp46 = _tmp45 - p_c(1, 0);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp42 * _tmp47;
  const Scalar _tmp49 = -_tmp21;
  const Scalar _tmp50 = _tmp39 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - p_d(0, 0);
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = -_tmp8;
  const Scalar _tmp55 = _tmp43 + _tmp54;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 - p_d(1, 0);
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = _tmp46 * _tmp47;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp48 * _tmp58 - _tmp59);
  const Scalar _tmp61 =
      std::sqrt(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp62 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp63 = _tmp53 * _tmp61;
  const Scalar _tmp64 = _tmp63 * (_tmp50 * _tmp57 * _tmp62 - _tmp52 * _tmp55 * _tmp62);
  const Scalar _tmp65 = -_tmp40 * _tmp59 + _tmp44 * _tmp48 + _tmp48 * _tmp64;
  const Scalar _tmp66 = Scalar(1.0) * _tmp60;
  const Scalar _tmp67 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp68 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp69 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp70 = _tmp68 + _tmp69;
  const Scalar _tmp71 = _tmp67 + _tmp70;
  const Scalar _tmp72 = -_tmp67;
  const Scalar _tmp73 = _tmp70 + _tmp72;
  const Scalar _tmp74 = _tmp48 * _tmp73;
  const Scalar _tmp75 = -_tmp48 * _tmp71 + _tmp74;
  const Scalar _tmp76 = -_tmp58 * _tmp74 + _tmp59 * _tmp71;
  const Scalar _tmp77 = _tmp66 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) * _tmp55;
  const Scalar _tmp79 = -_tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp44 + _tmp79);
  const Scalar _tmp81 = Scalar(1.0) * _tmp50;
  const Scalar _tmp82 = _tmp80 * (-_tmp40 + _tmp81);
  const Scalar _tmp83 = -_tmp66 * _tmp75 + _tmp77 * _tmp82;
  const Scalar _tmp84 = _tmp68 - _tmp69;
  const Scalar _tmp85 = _tmp72 + _tmp84;
  const Scalar _tmp86 = _tmp27 + _tmp49;
  const Scalar _tmp87 = _tmp86 + position_vector(0, 0);
  const Scalar _tmp88 = _tmp87 - p_a(0, 0);
  const Scalar _tmp89 = _tmp17 + _tmp54;
  const Scalar _tmp90 = _tmp89 + position_vector(1, 0);
  const Scalar _tmp91 = _tmp90 - p_a(1, 0);
  const Scalar _tmp92 = std::pow(Scalar(std::pow(_tmp88, Scalar(2)) + std::pow(_tmp91, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp93 = _tmp88 * _tmp92;
  const Scalar _tmp94 = _tmp91 * _tmp92;
  const Scalar _tmp95 = _tmp58 * _tmp93 - _tmp94;
  const Scalar _tmp96 = _tmp60 * _tmp95;
  const Scalar _tmp97 = _tmp73 * _tmp93;
  const Scalar _tmp98 = -_tmp58 * _tmp97 - _tmp76 * _tmp96 + _tmp85 * _tmp94;
  const Scalar _tmp99 = -_tmp75 * _tmp96 - _tmp82 * _tmp98 - _tmp85 * _tmp93 + _tmp97;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp101 = _tmp64 * _tmp93 - _tmp65 * _tmp96 - _tmp86 * _tmp94 + _tmp89 * _tmp93;
  const Scalar _tmp102 = _tmp100 * _tmp101;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp104 = _tmp103 * _tmp99;
  const Scalar _tmp105 = _tmp104 * (-_tmp102 * _tmp83 - _tmp65 * _tmp66);
  const Scalar _tmp106 = _tmp105 + _tmp83;
  const Scalar _tmp107 = _tmp100 * _tmp95;
  const Scalar _tmp108 = _tmp60 * (-_tmp106 * _tmp107 + Scalar(1.0));
  const Scalar _tmp109 = _tmp100 * _tmp93;
  const Scalar _tmp110 = _tmp29 - p_b(0, 0);
  const Scalar _tmp111 = _tmp19 - p_b(1, 0);
  const Scalar _tmp112 =
      std::pow(Scalar(std::pow(_tmp110, Scalar(2)) + std::pow(_tmp111, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp113 = _tmp111 * _tmp112;
  const Scalar _tmp114 = _tmp113 * _tmp63 * (_tmp106 * _tmp109 + _tmp108 * _tmp48);
  const Scalar _tmp115 = _tmp58 * _tmp60;
  const Scalar _tmp116 = _tmp115 * _tmp76 + _tmp58 * _tmp73;
  const Scalar _tmp117 = _tmp115 * _tmp75 - _tmp116 * _tmp82 - _tmp73;
  const Scalar _tmp118 = _tmp104 * (-_tmp102 * _tmp117 + _tmp115 * _tmp65 - _tmp64);
  const Scalar _tmp119 = _tmp117 + _tmp118;
  const Scalar _tmp120 = _tmp60 * (-_tmp107 * _tmp119 - _tmp58);
  const Scalar _tmp121 = _tmp110 * _tmp112;
  const Scalar _tmp122 = _tmp121 * _tmp63 * (_tmp109 * _tmp119 + _tmp120 * _tmp48 + Scalar(1.0));
  const Scalar _tmp123 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp124 = _tmp78 * _tmp82 + _tmp81;
  const Scalar _tmp125 = 0;
  const Scalar _tmp126 = _tmp100 * _tmp125;
  const Scalar _tmp127 = _tmp113 * _tmp28 - _tmp121 * _tmp18;
  const Scalar _tmp128 = _tmp103 * _tmp66 * _tmp95;
  const Scalar _tmp129 = Scalar(1.0) * _tmp103;
  const Scalar _tmp130 = _tmp127 * _tmp63 * (-_tmp128 * _tmp48 + _tmp129 * _tmp93);
  const Scalar _tmp131 = -_tmp114 * fh1 - _tmp122 * fh1 -
                         _tmp123 * _tmp63 * (-_tmp126 * _tmp48 * _tmp96 + _tmp126 * _tmp93) -
                         _tmp130 * fh1;
  const Scalar _tmp132 = Scalar(1.4083112389913199) * _tmp131;
  const Scalar _tmp133 = _tmp67 + _tmp84;
  const Scalar _tmp134 = _tmp133 * fh1;
  const Scalar _tmp135 = _tmp121 * _tmp134 + Scalar(40.024799999999999) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp136 = _tmp79 + _tmp89;
  const Scalar _tmp137 = _tmp136 * _tmp82;
  const Scalar _tmp138 = Scalar(1.0) / (-_tmp137 + _tmp81 - _tmp86);
  const Scalar _tmp139 = Scalar(1.0) * _tmp138;
  const Scalar _tmp140 = _tmp136 * _tmp80;
  const Scalar _tmp141 = Scalar(1.0) * _tmp139 * _tmp140 - Scalar(1.0) * _tmp139;
  const Scalar _tmp142 = _tmp136 * _tmp138;
  const Scalar _tmp143 = _tmp100 * _tmp98;
  const Scalar _tmp144 = _tmp116 + _tmp118 * _tmp142 - _tmp119 * _tmp143;
  const Scalar _tmp145 = Scalar(1.0) * _tmp80;
  const Scalar _tmp146 = Scalar(1.0) * _tmp121 * (_tmp118 * _tmp139 - _tmp144 * _tmp145);
  const Scalar _tmp147 = _tmp124 * _tmp138;
  const Scalar _tmp148 = _tmp80 * (-_tmp125 * _tmp143 - _tmp136 * _tmp147 + _tmp79);
  const Scalar _tmp149 = _tmp105 * _tmp142 - _tmp106 * _tmp143 - _tmp77;
  const Scalar _tmp150 = Scalar(1.0) * _tmp113 * (_tmp105 * _tmp139 - _tmp145 * _tmp149);
  const Scalar _tmp151 = -_tmp113 * _tmp134 - Scalar(40.024799999999999) * _tmp15 - _tmp18 * fv1;
  const Scalar _tmp152 = _tmp139 * _tmp82;
  const Scalar _tmp153 = _tmp80 * (_tmp137 * _tmp139 + Scalar(1.0));
  const Scalar _tmp154 = Scalar(1.0) * _tmp152 - Scalar(1.0) * _tmp153;
  const Scalar _tmp155 = _tmp104 * _tmp139;
  const Scalar _tmp156 = _tmp80 * (-_tmp129 * _tmp98 + _tmp136 * _tmp155);
  const Scalar _tmp157 = Scalar(1.0) * _tmp127 * (_tmp155 - Scalar(1.0) * _tmp156);
  const Scalar _tmp158 =
      Scalar(1.0) * _tmp123 * (-_tmp124 * _tmp139 - Scalar(1.0) * _tmp148 + Scalar(1.0)) +
      _tmp135 * _tmp141 + _tmp146 * fh1 + _tmp150 * fh1 + _tmp151 * _tmp154 + _tmp157 * fh1;
  const Scalar _tmp159 = std::pow(_tmp131, Scalar(-2));
  const Scalar _tmp160 = -_tmp114 - _tmp122 - _tmp130;
  const Scalar _tmp161 = _tmp159 * _tmp160;
  const Scalar _tmp162 = _tmp113 * _tmp133;
  const Scalar _tmp163 = _tmp121 * _tmp133;
  const Scalar _tmp164 = Scalar(1.0) / (_tmp131);
  const Scalar _tmp165 = (-_tmp158 * _tmp161 + _tmp164 * (_tmp141 * _tmp163 + _tmp146 + _tmp150 -
                                                          _tmp154 * _tmp162 + _tmp157)) /
                         std::sqrt(Scalar(std::pow(_tmp158, Scalar(2)) * _tmp159 + 1));
  const Scalar _tmp166 = std::asinh(_tmp158 * _tmp164);
  const Scalar _tmp167 = Scalar(1.4083112389913199) * _tmp160;
  const Scalar _tmp168 = Scalar(0.71007031138673404) * _tmp164;
  const Scalar _tmp169 =
      -_tmp132 * _tmp166 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp56 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp170 = Scalar(0.71007031138673404) * _tmp161;
  const Scalar _tmp171 = _tmp168 * _tmp169;
  const Scalar _tmp172 = Scalar(1.0) * _tmp166;
  const Scalar _tmp173 = _tmp135 * _tmp139;
  const Scalar _tmp174 = _tmp127 * _tmp156;
  const Scalar _tmp175 = _tmp113 * _tmp149 * _tmp80;
  const Scalar _tmp176 = _tmp121 * _tmp80;
  const Scalar _tmp177 = _tmp144 * _tmp176;
  const Scalar _tmp178 = _tmp123 * _tmp148 - _tmp140 * _tmp173 + _tmp151 * _tmp153 + _tmp174 * fh1 +
                         _tmp175 * fh1 + _tmp177 * fh1;
  const Scalar _tmp179 = _tmp127 * _tmp128;
  const Scalar _tmp180 = _tmp120 * _tmp121;
  const Scalar _tmp181 = _tmp108 * _tmp113;
  const Scalar _tmp182 = _tmp123 * _tmp126;
  const Scalar _tmp183 = -_tmp179 * fh1 + _tmp180 * fh1 + _tmp181 * fh1 - _tmp182 * _tmp96;
  const Scalar _tmp184 = Scalar(1.0) / (_tmp183);
  const Scalar _tmp185 = std::asinh(_tmp178 * _tmp184);
  const Scalar _tmp186 = Scalar(1.0) * _tmp185;
  const Scalar _tmp187 = Scalar(0.71007031138673404) * _tmp184;
  const Scalar _tmp188 = Scalar(1.4083112389913199) * _tmp183;
  const Scalar _tmp189 =
      -_tmp185 * _tmp188 - std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp45 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp190 = _tmp187 * _tmp189;
  const Scalar _tmp191 = -_tmp179 + _tmp180 + _tmp181;
  const Scalar _tmp192 = Scalar(1.4083112389913199) * _tmp191;
  const Scalar _tmp193 = std::pow(_tmp183, Scalar(-2));
  const Scalar _tmp194 = _tmp191 * _tmp193;
  const Scalar _tmp195 =
      (-_tmp178 * _tmp194 + _tmp184 * (-_tmp133 * _tmp136 * _tmp139 * _tmp176 - _tmp153 * _tmp162 +
                                       _tmp174 + _tmp175 + _tmp177)) /
      std::sqrt(Scalar(std::pow(_tmp178, Scalar(2)) * _tmp193 + 1));
  const Scalar _tmp196 = Scalar(0.71007031138673404) * _tmp194;
  const Scalar _tmp197 = _tmp105 * _tmp113 * _tmp138;
  const Scalar _tmp198 = _tmp118 * _tmp121 * _tmp138;
  const Scalar _tmp199 = _tmp127 * _tmp155;
  const Scalar _tmp200 = _tmp123 * _tmp147 - _tmp151 * _tmp152 + _tmp173 - _tmp197 * fh1 -
                         _tmp198 * fh1 - _tmp199 * fh1;
  const Scalar _tmp201 = _tmp100 * _tmp106 * _tmp113;
  const Scalar _tmp202 = _tmp100 * _tmp119 * _tmp121;
  const Scalar _tmp203 = _tmp127 * _tmp129;
  const Scalar _tmp204 = _tmp182 + _tmp201 * fh1 + _tmp202 * fh1 + _tmp203 * fh1;
  const Scalar _tmp205 = Scalar(1.0) / (_tmp204);
  const Scalar _tmp206 = std::asinh(_tmp200 * _tmp205);
  const Scalar _tmp207 = Scalar(1.0) * _tmp206;
  const Scalar _tmp208 = Scalar(1.4083112389913199) * _tmp204;
  const Scalar _tmp209 =
      -_tmp206 * _tmp208 - std::sqrt(Scalar(std::pow(Scalar(-_tmp87 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp90 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp210 = Scalar(0.71007031138673404) * _tmp205;
  const Scalar _tmp211 = _tmp209 * _tmp210;
  const Scalar _tmp212 = _tmp201 + _tmp202 + _tmp203;
  const Scalar _tmp213 = Scalar(1.4083112389913199) * _tmp212;
  const Scalar _tmp214 = std::pow(_tmp204, Scalar(-2));
  const Scalar _tmp215 = _tmp212 * _tmp214;
  const Scalar _tmp216 = Scalar(0.71007031138673404) * _tmp215;
  const Scalar _tmp217 = (-_tmp200 * _tmp215 + _tmp205 * (_tmp139 * _tmp163 + _tmp152 * _tmp162 -
                                                          _tmp197 - _tmp198 - _tmp199)) /
                         std::sqrt(Scalar(std::pow(_tmp200, Scalar(2)) * _tmp214 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -Scalar(1.4083112389913199) * _tmp1 * _tmp30 -
               Scalar(1.4083112389913199) * fh1 *
                   (-_tmp0 * _tmp1 - Scalar(1.0) * _tmp0 * _tmp37 * fv1 * std::sinh(_tmp38) -
                    (-Scalar(0.71007031138673404) * _tmp0 * _tmp34 +
                     _tmp35 * (Scalar(1.4083112389913199) * _tmp31 * _tmp37 - _tmp33)) *
                        std::sinh(_tmp36)) +
               Scalar(1.4083112389913199) * std::cosh(_tmp36) -
               Scalar(1.4083112389913199) * std::cosh(_tmp38);
  _res(1, 0) =
      -_tmp132 * (Scalar(1.0) * _tmp165 * std::sinh(_tmp172) - _tmp170 * p_d(2, 0) -
                  (_tmp168 * (-_tmp132 * _tmp165 - _tmp166 * _tmp167) - _tmp169 * _tmp170) *
                      std::sinh(_tmp171)) -
      _tmp167 * (_tmp168 * p_d(2, 0) - std::cosh(_tmp171) + std::cosh(_tmp172));
  _res(2, 0) =
      -_tmp188 * (Scalar(1.0) * _tmp195 * std::sinh(_tmp186) - _tmp196 * p_c(2, 0) -
                  (_tmp187 * (-_tmp185 * _tmp192 - _tmp188 * _tmp195) - _tmp189 * _tmp196) *
                      std::sinh(_tmp190)) -
      _tmp192 * (_tmp187 * p_c(2, 0) + std::cosh(_tmp186) - std::cosh(_tmp190));
  _res(3, 0) =
      -_tmp208 * (-_tmp216 * p_a(2, 0) + Scalar(1.0) * _tmp217 * std::sinh(_tmp207) -
                  (-_tmp209 * _tmp216 + _tmp210 * (-_tmp206 * _tmp213 - _tmp208 * _tmp217)) *
                      std::sinh(_tmp211)) -
      _tmp213 * (_tmp210 * p_a(2, 0) + std::cosh(_tmp207) - std::cosh(_tmp211));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
