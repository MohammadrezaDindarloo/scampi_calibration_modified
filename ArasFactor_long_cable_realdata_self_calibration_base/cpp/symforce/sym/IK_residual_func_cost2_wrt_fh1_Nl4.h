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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl4
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 625

  // Unused inputs
  (void)encoder;
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
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp0 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp7 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp2;
  const Scalar _tmp12 = _tmp11 * _tmp6;
  const Scalar _tmp13 = _tmp0 * _tmp8;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp0 * _tmp11;
  const Scalar _tmp23 = _tmp6 * _tmp8;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = Scalar(1.0) / (fh1);
  const Scalar _tmp31 = _tmp30 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * _tmp32;
  const Scalar _tmp34 =
      -_tmp33 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_a(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp29 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.71007031138673404) * _tmp30;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(1.0) * _tmp32;
  const Scalar _tmp40 = _tmp16 + _tmp4;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp25 + _tmp26;
  const Scalar _tmp43 = _tmp21 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp46 = _tmp20 + _tmp27;
  const Scalar _tmp47 = _tmp46 + position_vector(0, 0);
  const Scalar _tmp48 = _tmp47 - p_b(0, 0);
  const Scalar _tmp49 = _tmp10 + _tmp15;
  const Scalar _tmp50 = _tmp49 + _tmp5;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 - p_b(1, 0);
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp48 * _tmp53;
  const Scalar _tmp55 = _tmp44 - p_d(0, 0);
  const Scalar _tmp56 = Scalar(1.0) / (_tmp55);
  const Scalar _tmp57 = _tmp41 - p_d(1, 0);
  const Scalar _tmp58 = _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp52 * _tmp53;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp54 * _tmp58 - _tmp59);
  const Scalar _tmp61 = Scalar(1.0) * _tmp43;
  const Scalar _tmp62 = Scalar(1.0) * _tmp40;
  const Scalar _tmp63 = -_tmp62;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp50 + _tmp63);
  const Scalar _tmp65 = _tmp64 * (-_tmp46 + _tmp61);
  const Scalar _tmp66 = _tmp61 + _tmp62 * _tmp65;
  const Scalar _tmp67 = 0;
  const Scalar _tmp68 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp69 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp70 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp71 = _tmp69 - _tmp70;
  const Scalar _tmp72 = _tmp68 + _tmp71;
  const Scalar _tmp73 = -_tmp68;
  const Scalar _tmp74 = _tmp69 + _tmp70;
  const Scalar _tmp75 = _tmp73 + _tmp74;
  const Scalar _tmp76 = _tmp58 * _tmp75;
  const Scalar _tmp77 = -_tmp54 * _tmp76 + _tmp59 * _tmp72;
  const Scalar _tmp78 = _tmp20 + _tmp42;
  const Scalar _tmp79 = _tmp78 + position_vector(0, 0);
  const Scalar _tmp80 = _tmp79 - p_c(0, 0);
  const Scalar _tmp81 = _tmp4 + _tmp49;
  const Scalar _tmp82 = _tmp81 + position_vector(1, 0);
  const Scalar _tmp83 = _tmp82 - p_c(1, 0);
  const Scalar _tmp84 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp83, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp85 = _tmp80 * _tmp84;
  const Scalar _tmp86 = _tmp83 * _tmp84;
  const Scalar _tmp87 = _tmp58 * _tmp85 - _tmp86;
  const Scalar _tmp88 = _tmp60 * _tmp87;
  const Scalar _tmp89 = _tmp68 + _tmp74;
  const Scalar _tmp90 = -_tmp76 * _tmp85 - _tmp77 * _tmp88 + _tmp86 * _tmp89;
  const Scalar _tmp91 = -_tmp54 * _tmp72 + _tmp54 * _tmp75;
  const Scalar _tmp92 = -_tmp65 * _tmp90 + _tmp75 * _tmp85 - _tmp85 * _tmp89 - _tmp88 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp87 * _tmp93;
  const Scalar _tmp95 = _tmp60 * _tmp67 * _tmp94;
  const Scalar _tmp96 = _tmp67 * _tmp93;
  const Scalar _tmp97 =
      std::sqrt(Scalar(std::pow(_tmp55, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp98 = _tmp56 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) * _tmp60;
  const Scalar _tmp100 = _tmp77 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp65 - _tmp91 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp103 = _tmp98 * (-_tmp102 * _tmp40 * _tmp55 + _tmp102 * _tmp43 * _tmp57);
  const Scalar _tmp104 = _tmp103 * _tmp54 - _tmp46 * _tmp59 + _tmp50 * _tmp54;
  const Scalar _tmp105 = _tmp103 * _tmp85 - _tmp104 * _tmp88 - _tmp78 * _tmp86 + _tmp81 * _tmp85;
  const Scalar _tmp106 = _tmp105 * _tmp93;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp108 = _tmp107 * _tmp92;
  const Scalar _tmp109 = _tmp108 * (-_tmp101 * _tmp106 - _tmp104 * _tmp99);
  const Scalar _tmp110 = _tmp101 + _tmp109;
  const Scalar _tmp111 = _tmp60 * (-_tmp110 * _tmp94 + Scalar(1.0));
  const Scalar _tmp112 = _tmp110 * _tmp93;
  const Scalar _tmp113 = _tmp18 - p_a(1, 0);
  const Scalar _tmp114 = _tmp29 - p_a(0, 0);
  const Scalar _tmp115 =
      std::pow(Scalar(std::pow(_tmp113, Scalar(2)) + std::pow(_tmp114, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp116 = _tmp113 * _tmp115;
  const Scalar _tmp117 = _tmp116 * _tmp98 * (_tmp111 * _tmp54 + _tmp112 * _tmp85);
  const Scalar _tmp118 = _tmp58 * _tmp60;
  const Scalar _tmp119 = _tmp118 * _tmp77 + _tmp76;
  const Scalar _tmp120 = _tmp118 * _tmp91 - _tmp119 * _tmp65 - _tmp75;
  const Scalar _tmp121 = _tmp108 * (-_tmp103 + _tmp104 * _tmp118 - _tmp106 * _tmp120);
  const Scalar _tmp122 = _tmp120 + _tmp121;
  const Scalar _tmp123 = _tmp122 * _tmp93;
  const Scalar _tmp124 = _tmp60 * (-_tmp122 * _tmp94 - _tmp58);
  const Scalar _tmp125 = _tmp114 * _tmp115;
  const Scalar _tmp126 = _tmp125 * _tmp98 * (_tmp123 * _tmp85 + _tmp124 * _tmp54 + Scalar(1.0));
  const Scalar _tmp127 = _tmp116 * _tmp28 - _tmp125 * _tmp17;
  const Scalar _tmp128 = Scalar(1.0) * _tmp107;
  const Scalar _tmp129 = _tmp107 * _tmp87 * _tmp99;
  const Scalar _tmp130 = _tmp127 * _tmp98 * (_tmp128 * _tmp85 - _tmp129 * _tmp54);
  const Scalar _tmp131 = -_tmp117 * fh1 - _tmp126 * fh1 - _tmp130 * fh1 -
                         _tmp45 * _tmp98 * (-_tmp54 * _tmp95 + _tmp85 * _tmp96);
  const Scalar _tmp132 = _tmp71 + _tmp73;
  const Scalar _tmp133 = _tmp132 * fh1;
  const Scalar _tmp134 = -_tmp116 * _tmp133 - Scalar(40.024799999999999) * _tmp14 - _tmp17 * fv1;
  const Scalar _tmp135 = _tmp63 + _tmp81;
  const Scalar _tmp136 = _tmp135 * _tmp65;
  const Scalar _tmp137 = Scalar(1.0) / (-_tmp136 + _tmp61 - _tmp78);
  const Scalar _tmp138 = Scalar(1.0) * _tmp137;
  const Scalar _tmp139 = _tmp64 * (_tmp136 * _tmp138 + Scalar(1.0));
  const Scalar _tmp140 = _tmp138 * _tmp65;
  const Scalar _tmp141 = -Scalar(1.0) * _tmp139 + Scalar(1.0) * _tmp140;
  const Scalar _tmp142 = _tmp90 * _tmp93;
  const Scalar _tmp143 = _tmp135 * _tmp137;
  const Scalar _tmp144 = -_tmp100 + _tmp109 * _tmp143 - _tmp110 * _tmp142;
  const Scalar _tmp145 = Scalar(1.0) * _tmp64;
  const Scalar _tmp146 = Scalar(1.0) * _tmp116 * (_tmp109 * _tmp138 - _tmp144 * _tmp145);
  const Scalar _tmp147 = _tmp125 * _tmp133 + Scalar(40.024799999999999) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp148 = _tmp135 * _tmp64;
  const Scalar _tmp149 = Scalar(1.0) * _tmp138 * _tmp148 - Scalar(1.0) * _tmp138;
  const Scalar _tmp150 = _tmp119 + _tmp121 * _tmp143 - _tmp122 * _tmp142;
  const Scalar _tmp151 = Scalar(1.0) * _tmp125 * (_tmp121 * _tmp138 - _tmp145 * _tmp150);
  const Scalar _tmp152 = _tmp108 * _tmp138;
  const Scalar _tmp153 = -_tmp128 * _tmp90 + _tmp135 * _tmp152;
  const Scalar _tmp154 = Scalar(1.0) * _tmp127;
  const Scalar _tmp155 = _tmp154 * (-_tmp145 * _tmp153 + _tmp152);
  const Scalar _tmp156 = _tmp137 * _tmp66;
  const Scalar _tmp157 = -_tmp135 * _tmp156 + _tmp63 - _tmp90 * _tmp96;
  const Scalar _tmp158 =
      _tmp134 * _tmp141 + _tmp146 * fh1 + _tmp147 * _tmp149 + _tmp151 * fh1 + _tmp155 * fh1 +
      Scalar(1.0) * _tmp45 * (-_tmp138 * _tmp66 - _tmp145 * _tmp157 + Scalar(1.0));
  const Scalar _tmp159 = Scalar(1.0) / (_tmp131);
  const Scalar _tmp160 = std::asinh(_tmp158 * _tmp159);
  const Scalar _tmp161 = Scalar(1.4083112389913199) * _tmp160;
  const Scalar _tmp162 =
      -_tmp131 * _tmp161 - std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp44 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp163 = Scalar(0.71007031138673404) * _tmp159;
  const Scalar _tmp164 = _tmp162 * _tmp163;
  const Scalar _tmp165 = Scalar(1.0) * _tmp160;
  const Scalar _tmp166 = -_tmp117 - _tmp126 - _tmp130;
  const Scalar _tmp167 = Scalar(1.4083112389913199) * _tmp131;
  const Scalar _tmp168 = std::pow(_tmp131, Scalar(-2));
  const Scalar _tmp169 = _tmp116 * _tmp132;
  const Scalar _tmp170 = _tmp125 * _tmp132;
  const Scalar _tmp171 = _tmp166 * _tmp168;
  const Scalar _tmp172 = (-_tmp158 * _tmp171 + _tmp159 * (-_tmp141 * _tmp169 + _tmp146 +
                                                          _tmp149 * _tmp170 + _tmp151 + _tmp155)) /
                         std::sqrt(Scalar(std::pow(_tmp158, Scalar(2)) * _tmp168 + 1));
  const Scalar _tmp173 = _tmp127 * _tmp129;
  const Scalar _tmp174 = _tmp124 * _tmp125;
  const Scalar _tmp175 = _tmp111 * _tmp116;
  const Scalar _tmp176 = -_tmp173 * fh1 + _tmp174 * fh1 + _tmp175 * fh1 - _tmp45 * _tmp95;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = _tmp116 * _tmp144 * _tmp64;
  const Scalar _tmp179 = _tmp125 * _tmp64;
  const Scalar _tmp180 = _tmp150 * _tmp179;
  const Scalar _tmp181 = _tmp127 * _tmp153 * _tmp64;
  const Scalar _tmp182 = _tmp138 * _tmp147;
  const Scalar _tmp183 = _tmp134 * _tmp139 - _tmp148 * _tmp182 + _tmp157 * _tmp45 * _tmp64 +
                         _tmp178 * fh1 + _tmp180 * fh1 + _tmp181 * fh1;
  const Scalar _tmp184 = std::asinh(_tmp177 * _tmp183);
  const Scalar _tmp185 = Scalar(1.4083112389913199) * _tmp176;
  const Scalar _tmp186 =
      -_tmp184 * _tmp185 - std::sqrt(Scalar(std::pow(Scalar(-_tmp47 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp51 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.71007031138673404) * _tmp177;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp190 = -_tmp173 + _tmp174 + _tmp175;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = (_tmp177 * (-_tmp132 * _tmp135 * _tmp138 * _tmp179 - _tmp139 * _tmp169 +
                                     _tmp178 + _tmp180 + _tmp181) -
                          _tmp183 * _tmp191) /
                         std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp193 = Scalar(1.4083112389913199) * _tmp190;
  const Scalar _tmp194 = Scalar(1.0) * _tmp184;
  const Scalar _tmp195 = _tmp107 * _tmp154;
  const Scalar _tmp196 = _tmp123 * _tmp125;
  const Scalar _tmp197 = _tmp112 * _tmp116;
  const Scalar _tmp198 = _tmp195 * fh1 + _tmp196 * fh1 + _tmp197 * fh1 + _tmp45 * _tmp96;
  const Scalar _tmp199 = Scalar(1.0) / (_tmp198);
  const Scalar _tmp200 = _tmp127 * _tmp152;
  const Scalar _tmp201 = _tmp109 * _tmp116 * _tmp137;
  const Scalar _tmp202 = _tmp121 * _tmp125 * _tmp137;
  const Scalar _tmp203 = -_tmp134 * _tmp140 + _tmp156 * _tmp45 + _tmp182 - _tmp200 * fh1 -
                         _tmp201 * fh1 - _tmp202 * fh1;
  const Scalar _tmp204 = std::asinh(_tmp199 * _tmp203);
  const Scalar _tmp205 = Scalar(1.4083112389913199) * _tmp204;
  const Scalar _tmp206 =
      -_tmp198 * _tmp205 - std::sqrt(Scalar(std::pow(Scalar(-_tmp79 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp82 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp207 = Scalar(0.71007031138673404) * _tmp199;
  const Scalar _tmp208 = _tmp206 * _tmp207;
  const Scalar _tmp209 = _tmp195 + _tmp196 + _tmp197;
  const Scalar _tmp210 = Scalar(1.4083112389913199) * _tmp198;
  const Scalar _tmp211 = std::pow(_tmp198, Scalar(-2));
  const Scalar _tmp212 = _tmp209 * _tmp211;
  const Scalar _tmp213 =
      (_tmp199 * (_tmp138 * _tmp170 + _tmp140 * _tmp169 - _tmp200 - _tmp201 - _tmp202) -
       _tmp203 * _tmp212) /
      std::sqrt(Scalar(std::pow(_tmp203, Scalar(2)) * _tmp211 + 1));
  const Scalar _tmp214 = Scalar(1.0) * _tmp204;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(1.4083112389913199) * fh1 *
                   (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp39) -
                    (-Scalar(0.71007031138673404) * _tmp34 * _tmp37 +
                     _tmp35 * (Scalar(1.4083112389913199) * _tmp31 * _tmp38 - _tmp33)) *
                        std::cosh(_tmp36)) -
               Scalar(1.4083112389913199) * std::sinh(_tmp36) -
               Scalar(1.4083112389913199) * std::sinh(_tmp39);
  _res(1, 0) = Scalar(1.4083112389913199) * _tmp166 * (-std::sinh(_tmp164) - std::sinh(_tmp165)) +
               _tmp167 * (-Scalar(1.0) * _tmp172 * std::cosh(_tmp165) -
                          (-Scalar(0.71007031138673404) * _tmp162 * _tmp171 +
                           _tmp163 * (-_tmp161 * _tmp166 - _tmp167 * _tmp172)) *
                              std::cosh(_tmp164));
  _res(2, 0) = _tmp185 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp194) -
                          (-Scalar(0.71007031138673404) * _tmp186 * _tmp191 +
                           _tmp187 * (-_tmp184 * _tmp193 - _tmp185 * _tmp192)) *
                              std::cosh(_tmp188)) +
               _tmp193 * (-std::sinh(_tmp188) - std::sinh(_tmp194));
  _res(3, 0) = Scalar(1.4083112389913199) * _tmp209 * (-std::sinh(_tmp208) - std::sinh(_tmp214)) +
               _tmp210 * (-Scalar(1.0) * _tmp213 * std::cosh(_tmp214) -
                          (-Scalar(0.71007031138673404) * _tmp206 * _tmp212 +
                           _tmp207 * (-_tmp205 * _tmp209 - _tmp210 * _tmp213)) *
                              std::cosh(_tmp208));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
