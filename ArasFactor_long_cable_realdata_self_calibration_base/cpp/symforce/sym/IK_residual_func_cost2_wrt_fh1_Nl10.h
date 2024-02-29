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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl10
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl10(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 623

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (214)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp11 = _tmp2 * _tmp4;
  const Scalar _tmp12 = _tmp0 * _tmp5;
  const Scalar _tmp13 = _tmp11 - _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = -_tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = _tmp16 + position_vector(1, 0);
  const Scalar _tmp18 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp20 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp21 = _tmp1 * _tmp5;
  const Scalar _tmp22 = _tmp20 + _tmp21;
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 + position_vector(0, 0);
  const Scalar _tmp28 = Scalar(1.0) / (fh1);
  const Scalar _tmp29 = _tmp28 * fv1;
  const Scalar _tmp30 = std::asinh(_tmp29);
  const Scalar _tmp31 = Scalar(1.4083112389913199) * _tmp30;
  const Scalar _tmp32 =
      -_tmp31 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp17 + p_b(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp27 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp33 = Scalar(0.71007031138673404) * _tmp28;
  const Scalar _tmp34 = _tmp32 * _tmp33;
  const Scalar _tmp35 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp36 =
      std::pow(Scalar(_tmp35 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = Scalar(1.0) * _tmp30;
  const Scalar _tmp38 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp39 = -_tmp19;
  const Scalar _tmp40 = _tmp23 + _tmp24;
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp43 = _tmp42 - p_d(0, 0);
  const Scalar _tmp44 = Scalar(1.0) / (_tmp43);
  const Scalar _tmp45 = -_tmp7;
  const Scalar _tmp46 = _tmp10 + _tmp14;
  const Scalar _tmp47 = _tmp45 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 - p_d(1, 0);
  const Scalar _tmp50 = _tmp44 * _tmp49;
  const Scalar _tmp51 = _tmp25 + _tmp39;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 - p_a(0, 0);
  const Scalar _tmp54 = _tmp15 + _tmp45;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_a(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = _tmp56 * _tmp57;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp50 * _tmp58 - _tmp59);
  const Scalar _tmp61 = _tmp19 + _tmp40;
  const Scalar _tmp62 = _tmp61 + position_vector(0, 0);
  const Scalar _tmp63 = _tmp62 - p_c(0, 0);
  const Scalar _tmp64 = _tmp46 + _tmp7;
  const Scalar _tmp65 = _tmp64 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 - p_c(1, 0);
  const Scalar _tmp67 = std::pow(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp66, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp68 = _tmp63 * _tmp67;
  const Scalar _tmp69 = _tmp66 * _tmp67;
  const Scalar _tmp70 = _tmp50 * _tmp68 - _tmp69;
  const Scalar _tmp71 = _tmp60 * _tmp70;
  const Scalar _tmp72 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp73 =
      -Scalar(0.010999999999999999) * _tmp18 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp74 = Scalar(0.20999999999999999) * _tmp20 - Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp75 = _tmp73 + _tmp74;
  const Scalar _tmp76 = _tmp72 + _tmp75;
  const Scalar _tmp77 = -_tmp72;
  const Scalar _tmp78 = _tmp73 - _tmp74;
  const Scalar _tmp79 = _tmp77 + _tmp78;
  const Scalar _tmp80 = _tmp72 + _tmp78;
  const Scalar _tmp81 = _tmp58 * _tmp80;
  const Scalar _tmp82 = -_tmp58 * _tmp79 + _tmp81;
  const Scalar _tmp83 = _tmp68 * _tmp80;
  const Scalar _tmp84 = -_tmp50 * _tmp81 + _tmp59 * _tmp79;
  const Scalar _tmp85 = -_tmp50 * _tmp83 + _tmp69 * _tmp76 - _tmp71 * _tmp84;
  const Scalar _tmp86 = Scalar(1.0) * _tmp47;
  const Scalar _tmp87 = -_tmp86;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp54 + _tmp87);
  const Scalar _tmp89 = Scalar(1.0) * _tmp41;
  const Scalar _tmp90 = _tmp88 * (-_tmp51 + _tmp89);
  const Scalar _tmp91 = -_tmp68 * _tmp76 - _tmp71 * _tmp82 + _tmp83 - _tmp85 * _tmp90;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp86 * _tmp90 + _tmp89;
  const Scalar _tmp94 = 0;
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp49, Scalar(2))));
  const Scalar _tmp96 = _tmp44 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) * _tmp60;
  const Scalar _tmp98 = _tmp84 * _tmp97;
  const Scalar _tmp99 = -_tmp82 * _tmp97 + _tmp90 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp101 = _tmp96 * (_tmp100 * _tmp41 * _tmp49 - _tmp100 * _tmp43 * _tmp47);
  const Scalar _tmp102 = _tmp101 * _tmp58 - _tmp51 * _tmp59 + _tmp54 * _tmp58;
  const Scalar _tmp103 = _tmp101 * _tmp68 - _tmp102 * _tmp71 - _tmp61 * _tmp69 + _tmp64 * _tmp68;
  const Scalar _tmp104 = _tmp103 * _tmp92;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp106 = _tmp105 * _tmp91;
  const Scalar _tmp107 = _tmp106 * (-_tmp102 * _tmp97 - _tmp104 * _tmp99);
  const Scalar _tmp108 = _tmp107 + _tmp99;
  const Scalar _tmp109 = _tmp68 * _tmp92;
  const Scalar _tmp110 = _tmp70 * _tmp92;
  const Scalar _tmp111 = _tmp60 * (-_tmp108 * _tmp110 + Scalar(1.0));
  const Scalar _tmp112 = _tmp27 - p_b(0, 0);
  const Scalar _tmp113 = _tmp17 - p_b(1, 0);
  const Scalar _tmp114 =
      std::pow(Scalar(std::pow(_tmp112, Scalar(2)) + std::pow(_tmp113, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp115 = _tmp113 * _tmp114;
  const Scalar _tmp116 = _tmp115 * _tmp96 * (_tmp108 * _tmp109 + _tmp111 * _tmp58);
  const Scalar _tmp117 = _tmp50 * _tmp60;
  const Scalar _tmp118 = _tmp117 * _tmp84 + _tmp50 * _tmp80;
  const Scalar _tmp119 = _tmp117 * _tmp82 - _tmp118 * _tmp90 - _tmp80;
  const Scalar _tmp120 = _tmp106 * (-_tmp101 + _tmp102 * _tmp117 - _tmp104 * _tmp119);
  const Scalar _tmp121 = _tmp119 + _tmp120;
  const Scalar _tmp122 = _tmp60 * (-_tmp110 * _tmp121 - _tmp50);
  const Scalar _tmp123 = _tmp112 * _tmp114;
  const Scalar _tmp124 = _tmp123 * _tmp96 * (_tmp109 * _tmp121 + _tmp122 * _tmp58 + Scalar(1.0));
  const Scalar _tmp125 = _tmp115 * _tmp26 - _tmp123 * _tmp16;
  const Scalar _tmp126 = _tmp105 * _tmp70 * _tmp97;
  const Scalar _tmp127 = Scalar(1.0) * _tmp105;
  const Scalar _tmp128 = _tmp125 * _tmp96 * (-_tmp126 * _tmp58 + _tmp127 * _tmp68);
  const Scalar _tmp129 = -_tmp116 * fh1 - _tmp124 * fh1 - _tmp128 * fh1 -
                         _tmp38 * _tmp96 * (-_tmp58 * _tmp71 * _tmp94 + _tmp68 * _tmp94);
  const Scalar _tmp130 = Scalar(1.0) / (_tmp129);
  const Scalar _tmp131 = _tmp75 + _tmp77;
  const Scalar _tmp132 = _tmp131 * fh1;
  const Scalar _tmp133 = _tmp123 * _tmp132 + Scalar(40.024799999999999) * _tmp22 + _tmp26 * fv1;
  const Scalar _tmp134 = _tmp64 + _tmp87;
  const Scalar _tmp135 = _tmp134 * _tmp90;
  const Scalar _tmp136 = Scalar(1.0) / (-_tmp135 - _tmp61 + _tmp89);
  const Scalar _tmp137 = Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp134 * _tmp88;
  const Scalar _tmp139 = _tmp137 * _tmp138;
  const Scalar _tmp140 = -Scalar(1.0) * _tmp137 + Scalar(1.0) * _tmp139;
  const Scalar _tmp141 = -_tmp115 * _tmp132 - Scalar(40.024799999999999) * _tmp13 - _tmp16 * fv1;
  const Scalar _tmp142 = _tmp137 * _tmp90;
  const Scalar _tmp143 = _tmp135 * _tmp137 + Scalar(1.0);
  const Scalar _tmp144 = Scalar(1.0) * _tmp88;
  const Scalar _tmp145 = Scalar(1.0) * _tmp142 - Scalar(1.0) * _tmp143 * _tmp144;
  const Scalar _tmp146 = _tmp106 * _tmp137;
  const Scalar _tmp147 = -_tmp127 * _tmp85 + _tmp134 * _tmp146;
  const Scalar _tmp148 = Scalar(1.0) * _tmp125 * (-_tmp144 * _tmp147 + _tmp146);
  const Scalar _tmp149 = _tmp136 * _tmp93;
  const Scalar _tmp150 = -_tmp134 * _tmp149 - _tmp85 * _tmp94 + _tmp87;
  const Scalar _tmp151 = _tmp85 * _tmp92;
  const Scalar _tmp152 = _tmp134 * _tmp136;
  const Scalar _tmp153 = _tmp118 + _tmp120 * _tmp152 - _tmp121 * _tmp151;
  const Scalar _tmp154 = Scalar(1.0) * _tmp123 * (_tmp120 * _tmp137 - _tmp144 * _tmp153);
  const Scalar _tmp155 = _tmp107 * _tmp152 - _tmp108 * _tmp151 - _tmp98;
  const Scalar _tmp156 = Scalar(1.0) * _tmp115 * (_tmp107 * _tmp137 - _tmp144 * _tmp155);
  const Scalar _tmp157 =
      _tmp133 * _tmp140 + _tmp141 * _tmp145 + _tmp148 * fh1 + _tmp154 * fh1 + _tmp156 * fh1 +
      Scalar(1.0) * _tmp38 * (-_tmp137 * _tmp93 - _tmp144 * _tmp150 + Scalar(1.0));
  const Scalar _tmp158 = std::asinh(_tmp130 * _tmp157);
  const Scalar _tmp159 = Scalar(1.0) * _tmp158;
  const Scalar _tmp160 = std::pow(_tmp129, Scalar(-2));
  const Scalar _tmp161 = _tmp123 * _tmp131;
  const Scalar _tmp162 = _tmp115 * _tmp131;
  const Scalar _tmp163 = -_tmp116 - _tmp124 - _tmp128;
  const Scalar _tmp164 = _tmp160 * _tmp163;
  const Scalar _tmp165 =
      (_tmp130 * (_tmp140 * _tmp161 - _tmp145 * _tmp162 + _tmp148 + _tmp154 + _tmp156) -
       _tmp157 * _tmp164) /
      std::sqrt(Scalar(std::pow(_tmp157, Scalar(2)) * _tmp160 + 1));
  const Scalar _tmp166 = Scalar(1.4083112389913199) * _tmp158;
  const Scalar _tmp167 =
      -_tmp129 * _tmp166 - std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp48 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp168 = Scalar(0.71007031138673404) * _tmp130;
  const Scalar _tmp169 = _tmp167 * _tmp168;
  const Scalar _tmp170 = Scalar(1.4083112389913199) * _tmp129;
  const Scalar _tmp171 = _tmp122 * _tmp123;
  const Scalar _tmp172 = _tmp125 * _tmp126;
  const Scalar _tmp173 = _tmp38 * _tmp94;
  const Scalar _tmp174 = _tmp111 * _tmp115;
  const Scalar _tmp175 = _tmp171 * fh1 - _tmp172 * fh1 - _tmp173 * _tmp71 + _tmp174 * fh1;
  const Scalar _tmp176 = Scalar(1.0) / (_tmp175);
  const Scalar _tmp177 = _tmp133 * _tmp137;
  const Scalar _tmp178 = _tmp123 * _tmp153 * _tmp88;
  const Scalar _tmp179 = _tmp115 * _tmp155 * _tmp88;
  const Scalar _tmp180 = _tmp143 * _tmp88;
  const Scalar _tmp181 = _tmp125 * _tmp147 * _tmp88;
  const Scalar _tmp182 = -_tmp138 * _tmp177 + _tmp141 * _tmp180 + _tmp150 * _tmp38 * _tmp88 +
                         _tmp178 * fh1 + _tmp179 * fh1 + _tmp181 * fh1;
  const Scalar _tmp183 = std::asinh(_tmp176 * _tmp182);
  const Scalar _tmp184 = Scalar(1.0) * _tmp183;
  const Scalar _tmp185 = Scalar(1.4083112389913199) * _tmp183;
  const Scalar _tmp186 =
      -_tmp175 * _tmp185 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.71007031138673404) * _tmp176;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = _tmp171 - _tmp172 + _tmp174;
  const Scalar _tmp190 = std::pow(_tmp175, Scalar(-2));
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 =
      (_tmp176 * (-_tmp139 * _tmp161 - _tmp162 * _tmp180 + _tmp178 + _tmp179 + _tmp181) -
       _tmp182 * _tmp191) /
      std::sqrt(Scalar(std::pow(_tmp182, Scalar(2)) * _tmp190 + 1));
  const Scalar _tmp193 = Scalar(1.4083112389913199) * _tmp175;
  const Scalar _tmp194 = _tmp125 * _tmp146;
  const Scalar _tmp195 = _tmp107 * _tmp115 * _tmp136;
  const Scalar _tmp196 = _tmp120 * _tmp123 * _tmp136;
  const Scalar _tmp197 = -_tmp141 * _tmp142 + _tmp149 * _tmp38 + _tmp177 - _tmp194 * fh1 -
                         _tmp195 * fh1 - _tmp196 * fh1;
  const Scalar _tmp198 = _tmp121 * _tmp123 * _tmp92;
  const Scalar _tmp199 = _tmp108 * _tmp115 * _tmp92;
  const Scalar _tmp200 = _tmp125 * _tmp127;
  const Scalar _tmp201 = _tmp173 + _tmp198 * fh1 + _tmp199 * fh1 + _tmp200 * fh1;
  const Scalar _tmp202 = Scalar(1.0) / (_tmp201);
  const Scalar _tmp203 = std::asinh(_tmp197 * _tmp202);
  const Scalar _tmp204 = Scalar(1.0) * _tmp203;
  const Scalar _tmp205 = Scalar(1.4083112389913199) * _tmp201;
  const Scalar _tmp206 =
      -_tmp203 * _tmp205 - std::sqrt(Scalar(std::pow(Scalar(-_tmp62 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp65 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp207 = Scalar(0.71007031138673404) * _tmp202;
  const Scalar _tmp208 = _tmp206 * _tmp207;
  const Scalar _tmp209 = _tmp198 + _tmp199 + _tmp200;
  const Scalar _tmp210 = Scalar(1.4083112389913199) * _tmp209;
  const Scalar _tmp211 = std::pow(_tmp201, Scalar(-2));
  const Scalar _tmp212 = _tmp209 * _tmp211;
  const Scalar _tmp213 = (-_tmp197 * _tmp212 + _tmp202 * (_tmp137 * _tmp161 + _tmp142 * _tmp162 -
                                                          _tmp194 - _tmp195 - _tmp196)) /
                         std::sqrt(Scalar(std::pow(_tmp197, Scalar(2)) * _tmp211 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(1.4083112389913199) * fh1 *
                   (Scalar(1.0) * _tmp35 * _tmp36 * fv1 * std::cosh(_tmp37) -
                    (-Scalar(0.71007031138673404) * _tmp32 * _tmp35 +
                     _tmp33 * (Scalar(1.4083112389913199) * _tmp29 * _tmp36 - _tmp31)) *
                        std::cosh(_tmp34)) -
               Scalar(1.4083112389913199) * std::sinh(_tmp34) -
               Scalar(1.4083112389913199) * std::sinh(_tmp37);
  _res(1, 0) = Scalar(1.4083112389913199) * _tmp163 * (-std::sinh(_tmp159) - std::sinh(_tmp169)) +
               _tmp170 * (-Scalar(1.0) * _tmp165 * std::cosh(_tmp159) -
                          (-Scalar(0.71007031138673404) * _tmp164 * _tmp167 +
                           _tmp168 * (-_tmp163 * _tmp166 - _tmp165 * _tmp170)) *
                              std::cosh(_tmp169));
  _res(2, 0) = Scalar(1.4083112389913199) * _tmp189 * (-std::sinh(_tmp184) - std::sinh(_tmp188)) +
               _tmp193 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp184) -
                          (-Scalar(0.71007031138673404) * _tmp186 * _tmp191 +
                           _tmp187 * (-_tmp185 * _tmp189 - _tmp192 * _tmp193)) *
                              std::cosh(_tmp188));
  _res(3, 0) = _tmp205 * (-Scalar(1.0) * _tmp213 * std::cosh(_tmp204) -
                          (-Scalar(0.71007031138673404) * _tmp206 * _tmp212 +
                           _tmp207 * (-_tmp203 * _tmp210 - _tmp205 * _tmp213)) *
                              std::cosh(_tmp208)) +
               _tmp210 * (-std::sinh(_tmp204) - std::sinh(_tmp208));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
