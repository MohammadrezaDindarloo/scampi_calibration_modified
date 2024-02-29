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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl2
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl2(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 619

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (214)
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
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp0 * _tmp11;
  const Scalar _tmp13 = _tmp1 * _tmp4;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp23 = _tmp1 * _tmp11;
  const Scalar _tmp24 = _tmp0 * _tmp4;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -_tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
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
  const Scalar _tmp40 = _tmp29 - p_a(0, 0);
  const Scalar _tmp41 = _tmp18 - p_a(1, 0);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp40 * _tmp42;
  const Scalar _tmp44 = _tmp41 * _tmp42;
  const Scalar _tmp45 = -_tmp17 * _tmp43 + _tmp28 * _tmp44;
  const Scalar _tmp46 = _tmp19 + _tmp27;
  const Scalar _tmp47 = _tmp46 + position_vector(0, 0);
  const Scalar _tmp48 = _tmp47 - p_d(0, 0);
  const Scalar _tmp49 = _tmp10 + _tmp15;
  const Scalar _tmp50 = _tmp49 + _tmp7;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 - p_d(1, 0);
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp48 * _tmp53;
  const Scalar _tmp55 = _tmp22 + _tmp26;
  const Scalar _tmp56 = _tmp19 + _tmp55;
  const Scalar _tmp57 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp58 = _tmp57 - p_c(0, 0);
  const Scalar _tmp59 = _tmp49 + _tmp6;
  const Scalar _tmp60 = _tmp59 + position_vector(1, 0);
  const Scalar _tmp61 = _tmp60 - p_c(1, 0);
  const Scalar _tmp62 =
      std::sqrt(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp65 = _tmp62 * _tmp64;
  const Scalar _tmp66 = _tmp65 * (_tmp56 * _tmp61 * _tmp63 - _tmp58 * _tmp59 * _tmp63);
  const Scalar _tmp67 = _tmp20 + _tmp55;
  const Scalar _tmp68 = _tmp67 + position_vector(0, 0);
  const Scalar _tmp69 = _tmp68 - p_b(0, 0);
  const Scalar _tmp70 = _tmp16 + _tmp6;
  const Scalar _tmp71 = _tmp70 + position_vector(1, 0);
  const Scalar _tmp72 = _tmp71 - p_b(1, 0);
  const Scalar _tmp73 = std::pow(Scalar(std::pow(_tmp69, Scalar(2)) + std::pow(_tmp72, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp74 = _tmp72 * _tmp73;
  const Scalar _tmp75 = _tmp69 * _tmp73;
  const Scalar _tmp76 = _tmp66 * _tmp75 - _tmp67 * _tmp74 + _tmp70 * _tmp75;
  const Scalar _tmp77 = _tmp61 * _tmp64;
  const Scalar _tmp78 = Scalar(1.0) / (-_tmp74 + _tmp75 * _tmp77);
  const Scalar _tmp79 = _tmp52 * _tmp53;
  const Scalar _tmp80 = _tmp54 * _tmp77 - _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp80;
  const Scalar _tmp82 = -_tmp46 * _tmp79 + _tmp50 * _tmp54 + _tmp54 * _tmp66 - _tmp76 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) * _tmp78;
  const Scalar _tmp86 = _tmp45 * _tmp65 * (_tmp54 * _tmp84 - _tmp75 * _tmp80 * _tmp83 * _tmp85);
  const Scalar _tmp87 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp88 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp89 = -Scalar(0.010999999999999999) * _tmp21 -
                        Scalar(0.010999999999999999) * _tmp8 + Scalar(-0.010999999999999999);
  const Scalar _tmp90 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp91 = _tmp89 + _tmp90;
  const Scalar _tmp92 = _tmp88 + _tmp91;
  const Scalar _tmp93 = -_tmp88;
  const Scalar _tmp94 = _tmp91 + _tmp93;
  const Scalar _tmp95 = _tmp89 - _tmp90;
  const Scalar _tmp96 = _tmp88 + _tmp95;
  const Scalar _tmp97 = _tmp75 * _tmp92;
  const Scalar _tmp98 = -_tmp75 * _tmp96 + _tmp97;
  const Scalar _tmp99 = _tmp77 * _tmp92;
  const Scalar _tmp100 = _tmp74 * _tmp96 - _tmp77 * _tmp97;
  const Scalar _tmp101 = -_tmp100 * _tmp81 - _tmp54 * _tmp99 + _tmp79 * _tmp94;
  const Scalar _tmp102 = Scalar(1.0) * _tmp59;
  const Scalar _tmp103 = -_tmp102;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp103 + _tmp70);
  const Scalar _tmp105 = Scalar(1.0) * _tmp56;
  const Scalar _tmp106 = _tmp104 * (_tmp105 - _tmp67);
  const Scalar _tmp107 = -_tmp101 * _tmp106 + _tmp54 * _tmp92 - _tmp54 * _tmp94 - _tmp81 * _tmp98;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = _tmp102 * _tmp106 + _tmp105;
  const Scalar _tmp110 = 0;
  const Scalar _tmp111 = _tmp77 * _tmp78;
  const Scalar _tmp112 = _tmp100 * _tmp111 + _tmp99;
  const Scalar _tmp113 = -_tmp106 * _tmp112 + _tmp111 * _tmp98 - _tmp92;
  const Scalar _tmp114 = _tmp108 * _tmp82;
  const Scalar _tmp115 = _tmp107 * _tmp83;
  const Scalar _tmp116 = _tmp115 * (_tmp111 * _tmp76 - _tmp113 * _tmp114 - _tmp66);
  const Scalar _tmp117 = _tmp113 + _tmp116;
  const Scalar _tmp118 = _tmp108 * _tmp80;
  const Scalar _tmp119 = _tmp78 * (-_tmp117 * _tmp118 - _tmp77);
  const Scalar _tmp120 = _tmp108 * _tmp117;
  const Scalar _tmp121 = _tmp43 * _tmp65 * (_tmp119 * _tmp75 + _tmp120 * _tmp54 + Scalar(1.0));
  const Scalar _tmp122 = _tmp100 * _tmp85;
  const Scalar _tmp123 = _tmp106 * _tmp122 - _tmp85 * _tmp98;
  const Scalar _tmp124 = _tmp115 * (-_tmp114 * _tmp123 - _tmp76 * _tmp85);
  const Scalar _tmp125 = _tmp123 + _tmp124;
  const Scalar _tmp126 = _tmp78 * (-_tmp118 * _tmp125 + Scalar(1.0));
  const Scalar _tmp127 = _tmp108 * _tmp125;
  const Scalar _tmp128 = _tmp44 * _tmp65 * (_tmp126 * _tmp75 + _tmp127 * _tmp54);
  const Scalar _tmp129 = -_tmp121 * fh1 - _tmp128 * fh1 -
                         _tmp65 * _tmp87 * (_tmp110 * _tmp54 - _tmp110 * _tmp75 * _tmp81) -
                         _tmp86 * fh1;
  const Scalar _tmp130 = Scalar(1.0) / (_tmp129);
  const Scalar _tmp131 = _tmp93 + _tmp95;
  const Scalar _tmp132 = _tmp131 * fh1;
  const Scalar _tmp133 = _tmp132 * _tmp43 + Scalar(40.024799999999999) * _tmp25 + _tmp28 * fv1;
  const Scalar _tmp134 = _tmp103 + _tmp50;
  const Scalar _tmp135 = _tmp106 * _tmp134;
  const Scalar _tmp136 = Scalar(1.0) / (_tmp105 - _tmp135 - _tmp46);
  const Scalar _tmp137 = Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp104 * _tmp134;
  const Scalar _tmp139 = _tmp137 * _tmp138;
  const Scalar _tmp140 = -Scalar(1.0) * _tmp137 + Scalar(1.0) * _tmp139;
  const Scalar _tmp141 = _tmp109 * _tmp136;
  const Scalar _tmp142 = -_tmp101 * _tmp110 + _tmp103 - _tmp134 * _tmp141;
  const Scalar _tmp143 = Scalar(1.0) * _tmp104;
  const Scalar _tmp144 = _tmp134 * _tmp136;
  const Scalar _tmp145 = _tmp101 * _tmp108;
  const Scalar _tmp146 = -_tmp122 + _tmp124 * _tmp144 - _tmp125 * _tmp145;
  const Scalar _tmp147 = Scalar(1.0) * _tmp44 * (_tmp124 * _tmp137 - _tmp143 * _tmp146);
  const Scalar _tmp148 = -_tmp132 * _tmp44 - Scalar(40.024799999999999) * _tmp14 - _tmp17 * fv1;
  const Scalar _tmp149 = _tmp106 * _tmp137;
  const Scalar _tmp150 = _tmp104 * (_tmp135 * _tmp137 + Scalar(1.0));
  const Scalar _tmp151 = Scalar(1.0) * _tmp149 - Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = _tmp112 + _tmp116 * _tmp144 - _tmp117 * _tmp145;
  const Scalar _tmp153 = Scalar(1.0) * _tmp43 * (_tmp116 * _tmp137 - _tmp143 * _tmp152);
  const Scalar _tmp154 = _tmp115 * _tmp137;
  const Scalar _tmp155 = _tmp104 * (-_tmp101 * _tmp84 + _tmp134 * _tmp154);
  const Scalar _tmp156 = Scalar(1.0) * _tmp45;
  const Scalar _tmp157 = _tmp156 * (_tmp154 - Scalar(1.0) * _tmp155);
  const Scalar _tmp158 =
      _tmp133 * _tmp140 + _tmp147 * fh1 + _tmp148 * _tmp151 + _tmp153 * fh1 + _tmp157 * fh1 +
      Scalar(1.0) * _tmp87 * (-_tmp109 * _tmp137 - _tmp142 * _tmp143 + Scalar(1.0));
  const Scalar _tmp159 = std::asinh(_tmp130 * _tmp158);
  const Scalar _tmp160 = Scalar(1.0) * _tmp159;
  const Scalar _tmp161 = Scalar(1.4083112389913199) * _tmp129;
  const Scalar _tmp162 =
      -_tmp159 * _tmp161 - std::sqrt(Scalar(std::pow(Scalar(-_tmp57 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp60 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp163 = Scalar(0.71007031138673404) * _tmp130;
  const Scalar _tmp164 = _tmp162 * _tmp163;
  const Scalar _tmp165 = -_tmp121 - _tmp128 - _tmp86;
  const Scalar _tmp166 = Scalar(1.4083112389913199) * _tmp165;
  const Scalar _tmp167 = std::pow(_tmp129, Scalar(-2));
  const Scalar _tmp168 = _tmp165 * _tmp167;
  const Scalar _tmp169 = _tmp131 * _tmp43;
  const Scalar _tmp170 = _tmp131 * _tmp44;
  const Scalar _tmp171 =
      (_tmp130 * (_tmp140 * _tmp169 + _tmp147 - _tmp151 * _tmp170 + _tmp153 + _tmp157) -
       _tmp158 * _tmp168) /
      std::sqrt(Scalar(std::pow(_tmp158, Scalar(2)) * _tmp167 + 1));
  const Scalar _tmp172 = _tmp156 * _tmp83;
  const Scalar _tmp173 = _tmp172 * fh1;
  const Scalar _tmp174 = _tmp119 * _tmp43;
  const Scalar _tmp175 = _tmp126 * _tmp44;
  const Scalar _tmp176 = _tmp110 * _tmp87;
  const Scalar _tmp177 = -_tmp173 * _tmp81 + _tmp174 * fh1 + _tmp175 * fh1 - _tmp176 * _tmp81;
  const Scalar _tmp178 = Scalar(1.0) / (_tmp177);
  const Scalar _tmp179 = _tmp104 * _tmp146 * _tmp44;
  const Scalar _tmp180 = _tmp155 * _tmp45;
  const Scalar _tmp181 = _tmp133 * _tmp137;
  const Scalar _tmp182 = _tmp104 * _tmp152 * _tmp43;
  const Scalar _tmp183 = _tmp104 * _tmp142 * _tmp87 - _tmp138 * _tmp181 + _tmp148 * _tmp150 +
                         _tmp179 * fh1 + _tmp180 * fh1 + _tmp182 * fh1;
  const Scalar _tmp184 = std::asinh(_tmp178 * _tmp183);
  const Scalar _tmp185 = Scalar(1.0) * _tmp184;
  const Scalar _tmp186 = Scalar(1.4083112389913199) * _tmp177;
  const Scalar _tmp187 =
      -_tmp184 * _tmp186 - std::sqrt(Scalar(std::pow(Scalar(-_tmp68 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp71 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp188 = Scalar(0.71007031138673404) * _tmp178;
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = -_tmp172 * _tmp81 + _tmp174 + _tmp175;
  const Scalar _tmp191 = Scalar(1.4083112389913199) * _tmp190;
  const Scalar _tmp192 = std::pow(_tmp177, Scalar(-2));
  const Scalar _tmp193 = _tmp190 * _tmp192;
  const Scalar _tmp194 =
      (_tmp178 * (-_tmp139 * _tmp169 - _tmp150 * _tmp170 + _tmp179 + _tmp180 + _tmp182) -
       _tmp183 * _tmp193) /
      std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp192 + 1));
  const Scalar _tmp195 = _tmp120 * _tmp43;
  const Scalar _tmp196 = _tmp127 * _tmp44;
  const Scalar _tmp197 = _tmp173 + _tmp176 + _tmp195 * fh1 + _tmp196 * fh1;
  const Scalar _tmp198 = Scalar(1.0) / (_tmp197);
  const Scalar _tmp199 = _tmp124 * _tmp136 * _tmp44;
  const Scalar _tmp200 = _tmp116 * _tmp136 * _tmp43;
  const Scalar _tmp201 = _tmp154 * _tmp45;
  const Scalar _tmp202 = _tmp141 * _tmp87 - _tmp148 * _tmp149 + _tmp181 - _tmp199 * fh1 -
                         _tmp200 * fh1 - _tmp201 * fh1;
  const Scalar _tmp203 = std::asinh(_tmp198 * _tmp202);
  const Scalar _tmp204 = Scalar(1.4083112389913199) * _tmp197;
  const Scalar _tmp205 =
      -_tmp203 * _tmp204 - std::sqrt(Scalar(std::pow(Scalar(-_tmp47 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp51 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp206 = Scalar(0.71007031138673404) * _tmp198;
  const Scalar _tmp207 = _tmp205 * _tmp206;
  const Scalar _tmp208 = Scalar(1.0) * _tmp203;
  const Scalar _tmp209 = _tmp172 + _tmp195 + _tmp196;
  const Scalar _tmp210 = Scalar(1.4083112389913199) * _tmp209;
  const Scalar _tmp211 = std::pow(_tmp197, Scalar(-2));
  const Scalar _tmp212 = _tmp209 * _tmp211;
  const Scalar _tmp213 =
      (_tmp198 * (_tmp137 * _tmp169 + _tmp149 * _tmp170 - _tmp199 - _tmp200 - _tmp201) -
       _tmp202 * _tmp212) /
      std::sqrt(Scalar(std::pow(_tmp202, Scalar(2)) * _tmp211 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(1.4083112389913199) * fh1 *
                   (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp39) -
                    (-Scalar(0.71007031138673404) * _tmp34 * _tmp37 +
                     _tmp35 * (Scalar(1.4083112389913199) * _tmp31 * _tmp38 - _tmp33)) *
                        std::cosh(_tmp36)) -
               Scalar(1.4083112389913199) * std::sinh(_tmp36) -
               Scalar(1.4083112389913199) * std::sinh(_tmp39);
  _res(1, 0) = _tmp161 * (-Scalar(1.0) * _tmp171 * std::cosh(_tmp160) -
                          (-Scalar(0.71007031138673404) * _tmp162 * _tmp168 +
                           _tmp163 * (-_tmp159 * _tmp166 - _tmp161 * _tmp171)) *
                              std::cosh(_tmp164)) +
               _tmp166 * (-std::sinh(_tmp160) - std::sinh(_tmp164));
  _res(2, 0) = _tmp186 * (-Scalar(1.0) * _tmp194 * std::cosh(_tmp185) -
                          (-Scalar(0.71007031138673404) * _tmp187 * _tmp193 +
                           _tmp188 * (-_tmp184 * _tmp191 - _tmp186 * _tmp194)) *
                              std::cosh(_tmp189)) +
               _tmp191 * (-std::sinh(_tmp185) - std::sinh(_tmp189));
  _res(3, 0) = _tmp204 * (-Scalar(1.0) * _tmp213 * std::cosh(_tmp208) -
                          (-Scalar(0.71007031138673404) * _tmp205 * _tmp212 +
                           _tmp206 * (-_tmp203 * _tmp210 - _tmp204 * _tmp213)) *
                              std::cosh(_tmp207)) +
               _tmp210 * (-std::sinh(_tmp207) - std::sinh(_tmp208));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
