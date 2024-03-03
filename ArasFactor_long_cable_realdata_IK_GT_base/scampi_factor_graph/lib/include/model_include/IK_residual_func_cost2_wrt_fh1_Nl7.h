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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl7
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl7(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 638

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (212)
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
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp23 = _tmp1 * _tmp5;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(0, 0);
  const Scalar _tmp29 = Scalar(1.0) / (fh1);
  const Scalar _tmp30 = _tmp29 * fv1;
  const Scalar _tmp31 = std::asinh(_tmp30);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * _tmp31;
  const Scalar _tmp33 =
      -_tmp32 * fh1 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp28), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp17 - 1), Scalar(2))));
  const Scalar _tmp34 = Scalar(0.71007031138673404) * _tmp29;
  const Scalar _tmp35 = _tmp33 * _tmp34;
  const Scalar _tmp36 = Scalar(1.0) * _tmp31;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = -_tmp7;
  const Scalar _tmp40 = _tmp10 + _tmp14;
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 + Scalar(-110.0);
  const Scalar _tmp44 = -_tmp21 + _tmp25;
  const Scalar _tmp45 = _tmp18 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 + Scalar(125.0);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp43 * _tmp48;
  const Scalar _tmp50 = _tmp15 + _tmp39;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 + Scalar(110.0);
  const Scalar _tmp53 = _tmp19 + _tmp44;
  const Scalar _tmp54 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp55 = _tmp54 + Scalar(125.0);
  const Scalar _tmp56 = Scalar(1.0) / (_tmp55);
  const Scalar _tmp57 = _tmp52 * _tmp56;
  const Scalar _tmp58 = _tmp47 * _tmp48;
  const Scalar _tmp59 = Scalar(1.0) / (-_tmp49 + _tmp57 * _tmp58);
  const Scalar _tmp60 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp61 = -_tmp60;
  const Scalar _tmp62 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp63 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp64 = _tmp62 - _tmp63;
  const Scalar _tmp65 = _tmp61 + _tmp64;
  const Scalar _tmp66 = _tmp57 * _tmp65;
  const Scalar _tmp67 = _tmp62 + _tmp63;
  const Scalar _tmp68 = _tmp61 + _tmp67;
  const Scalar _tmp69 = _tmp59 * (_tmp49 * _tmp68 - _tmp58 * _tmp66);
  const Scalar _tmp70 = Scalar(1.0) * _tmp69;
  const Scalar _tmp71 = Scalar(1.0) * _tmp50;
  const Scalar _tmp72 = -_tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp41 + _tmp72);
  const Scalar _tmp74 = Scalar(1.0) * _tmp53;
  const Scalar _tmp75 = _tmp73 * (-_tmp45 + _tmp74);
  const Scalar _tmp76 = _tmp58 * _tmp65 - _tmp58 * _tmp68;
  const Scalar _tmp77 = Scalar(1.0) * _tmp59;
  const Scalar _tmp78 = _tmp70 * _tmp75 - _tmp76 * _tmp77;
  const Scalar _tmp79 = _tmp40 + _tmp7;
  const Scalar _tmp80 = _tmp79 + position_vector(1, 0);
  const Scalar _tmp81 = _tmp80 + Scalar(-110.0);
  const Scalar _tmp82 = _tmp18 + _tmp26;
  const Scalar _tmp83 = _tmp82 + position_vector(0, 0);
  const Scalar _tmp84 = _tmp83 + Scalar(-125.0);
  const Scalar _tmp85 = std::pow(Scalar(std::pow(_tmp81, Scalar(2)) + std::pow(_tmp84, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp84 * _tmp85;
  const Scalar _tmp87 = _tmp60 + _tmp67;
  const Scalar _tmp88 = _tmp81 * _tmp85;
  const Scalar _tmp89 = _tmp57 * _tmp86 - _tmp88;
  const Scalar _tmp90 = _tmp59 * _tmp89;
  const Scalar _tmp91 = -_tmp66 * _tmp86 - _tmp69 * _tmp89 + _tmp87 * _tmp88;
  const Scalar _tmp92 = _tmp65 * _tmp86 - _tmp75 * _tmp91 - _tmp76 * _tmp90 - _tmp86 * _tmp87;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 =
      std::sqrt(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp55, Scalar(2))));
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp56 * _tmp94;
  const Scalar _tmp97 = _tmp96 * (-_tmp50 * _tmp55 * _tmp95 + _tmp52 * _tmp53 * _tmp95);
  const Scalar _tmp98 = _tmp41 * _tmp58 - _tmp45 * _tmp49 + _tmp58 * _tmp97;
  const Scalar _tmp99 = _tmp79 * _tmp86 - _tmp82 * _tmp88 + _tmp86 * _tmp97 - _tmp90 * _tmp98;
  const Scalar _tmp100 = _tmp93 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp102 = _tmp101 * _tmp92;
  const Scalar _tmp103 = _tmp102 * (-_tmp100 * _tmp78 - _tmp77 * _tmp98);
  const Scalar _tmp104 = _tmp93 * (_tmp103 + _tmp78);
  const Scalar _tmp105 = -_tmp104 * _tmp89 + Scalar(1.0);
  const Scalar _tmp106 = _tmp58 * _tmp59;
  const Scalar _tmp107 = _tmp17 + Scalar(110.0);
  const Scalar _tmp108 = _tmp28 + Scalar(-125.0);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp110 * _tmp96 * (_tmp104 * _tmp86 + _tmp105 * _tmp106);
  const Scalar _tmp112 = _tmp108 * _tmp109;
  const Scalar _tmp113 = _tmp110 * _tmp27 - _tmp112 * _tmp16;
  const Scalar _tmp114 = Scalar(1.0) * _tmp101;
  const Scalar _tmp115 = _tmp58 * _tmp90;
  const Scalar _tmp116 = _tmp113 * _tmp96 * (-_tmp114 * _tmp115 + _tmp114 * _tmp86);
  const Scalar _tmp117 = _tmp57 * _tmp59;
  const Scalar _tmp118 = _tmp57 * _tmp69 + _tmp66;
  const Scalar _tmp119 = _tmp117 * _tmp76 - _tmp118 * _tmp75 - _tmp65;
  const Scalar _tmp120 = _tmp102 * (-_tmp100 * _tmp119 + _tmp117 * _tmp98 - _tmp97);
  const Scalar _tmp121 = _tmp93 * (_tmp119 + _tmp120);
  const Scalar _tmp122 = -_tmp121 * _tmp89 - _tmp57;
  const Scalar _tmp123 = _tmp112 * _tmp96 * (_tmp106 * _tmp122 + _tmp121 * _tmp86 + Scalar(1.0));
  const Scalar _tmp124 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp125 = _tmp71 * _tmp75 + _tmp74;
  const Scalar _tmp126 = 0;
  const Scalar _tmp127 = -_tmp111 * fh1 - _tmp116 * fh1 - _tmp123 * fh1 -
                         _tmp124 * _tmp96 * (-_tmp115 * _tmp126 + _tmp126 * _tmp86);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp72 + _tmp79;
  const Scalar _tmp130 = _tmp129 * _tmp75;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 + _tmp74 - _tmp82);
  const Scalar _tmp132 = _tmp125 * _tmp131;
  const Scalar _tmp133 = -_tmp126 * _tmp91 - _tmp129 * _tmp132 + _tmp72;
  const Scalar _tmp134 = Scalar(1.0) * _tmp73;
  const Scalar _tmp135 = Scalar(1.0) * _tmp131;
  const Scalar _tmp136 = _tmp129 * _tmp131;
  const Scalar _tmp137 = _tmp103 * _tmp136 - _tmp104 * _tmp91 - _tmp70;
  const Scalar _tmp138 = Scalar(1.0) * _tmp110 * (_tmp103 * _tmp135 - _tmp134 * _tmp137);
  const Scalar _tmp139 = _tmp60 + _tmp64;
  const Scalar _tmp140 = _tmp139 * fh1;
  const Scalar _tmp141 = -_tmp110 * _tmp140 - Scalar(40.024799999999999) * _tmp13 - _tmp16 * fv1;
  const Scalar _tmp142 = _tmp130 * _tmp135 + Scalar(1.0);
  const Scalar _tmp143 = _tmp135 * _tmp75;
  const Scalar _tmp144 = -Scalar(1.0) * _tmp134 * _tmp142 + Scalar(1.0) * _tmp143;
  const Scalar _tmp145 = _tmp112 * _tmp140 + Scalar(40.024799999999999) * _tmp24 + _tmp27 * fv1;
  const Scalar _tmp146 = _tmp129 * _tmp73;
  const Scalar _tmp147 = _tmp135 * _tmp146;
  const Scalar _tmp148 = -Scalar(1.0) * _tmp135 + Scalar(1.0) * _tmp147;
  const Scalar _tmp149 = _tmp102 * _tmp135;
  const Scalar _tmp150 = -_tmp114 * _tmp91 + _tmp129 * _tmp149;
  const Scalar _tmp151 = Scalar(1.0) * _tmp113;
  const Scalar _tmp152 = _tmp151 * (-_tmp134 * _tmp150 + _tmp149);
  const Scalar _tmp153 = _tmp118 + _tmp120 * _tmp136 - _tmp121 * _tmp91;
  const Scalar _tmp154 = Scalar(1.0) * _tmp112 * (_tmp120 * _tmp135 - _tmp134 * _tmp153);
  const Scalar _tmp155 =
      Scalar(1.0) * _tmp124 * (-_tmp125 * _tmp135 - _tmp133 * _tmp134 + Scalar(1.0)) +
      _tmp138 * fh1 + _tmp141 * _tmp144 + _tmp145 * _tmp148 + _tmp152 * fh1 + _tmp154 * fh1;
  const Scalar _tmp156 = std::asinh(_tmp128 * _tmp155);
  const Scalar _tmp157 = Scalar(1.0) * _tmp156;
  const Scalar _tmp158 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp159 = -_tmp111 - _tmp116 - _tmp123;
  const Scalar _tmp160 = _tmp158 * _tmp159;
  const Scalar _tmp161 = _tmp110 * _tmp139;
  const Scalar _tmp162 = _tmp112 * _tmp139;
  const Scalar _tmp163 =
      (_tmp128 * (_tmp138 - _tmp144 * _tmp161 + _tmp148 * _tmp162 + _tmp152 + _tmp154) -
       _tmp155 * _tmp160) /
      std::sqrt(Scalar(std::pow(_tmp155, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp164 = Scalar(1.4083112389913199) * _tmp127;
  const Scalar _tmp165 =
      -_tmp156 * _tmp164 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp51 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp54 - 1), Scalar(2))));
  const Scalar _tmp166 = Scalar(0.71007031138673404) * _tmp128;
  const Scalar _tmp167 = _tmp165 * _tmp166;
  const Scalar _tmp168 = Scalar(1.4083112389913199) * _tmp159;
  const Scalar _tmp169 = _tmp142 * _tmp73;
  const Scalar _tmp170 = _tmp113 * _tmp150 * _tmp73;
  const Scalar _tmp171 = _tmp110 * _tmp137 * _tmp73;
  const Scalar _tmp172 = _tmp112 * _tmp153 * _tmp73;
  const Scalar _tmp173 = _tmp135 * _tmp145;
  const Scalar _tmp174 = _tmp124 * _tmp133 * _tmp73 + _tmp141 * _tmp169 - _tmp146 * _tmp173 +
                         _tmp170 * fh1 + _tmp171 * fh1 + _tmp172 * fh1;
  const Scalar _tmp175 = _tmp105 * _tmp110 * _tmp59;
  const Scalar _tmp176 = _tmp112 * _tmp122 * _tmp59;
  const Scalar _tmp177 = _tmp124 * _tmp126;
  const Scalar _tmp178 = _tmp101 * _tmp151;
  const Scalar _tmp179 = _tmp178 * fh1;
  const Scalar _tmp180 = _tmp175 * fh1 + _tmp176 * fh1 - _tmp177 * _tmp90 - _tmp179 * _tmp90;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = std::asinh(_tmp174 * _tmp181);
  const Scalar _tmp183 = Scalar(1.4083112389913199) * _tmp180;
  const Scalar _tmp184 =
      -_tmp182 * _tmp183 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp42), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp46 - 1), Scalar(2))));
  const Scalar _tmp185 = Scalar(0.71007031138673404) * _tmp181;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = Scalar(1.0) * _tmp182;
  const Scalar _tmp188 = _tmp175 + _tmp176 - _tmp178 * _tmp90;
  const Scalar _tmp189 = Scalar(1.4083112389913199) * _tmp188;
  const Scalar _tmp190 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp191 = _tmp188 * _tmp190;
  const Scalar _tmp192 = (-_tmp174 * _tmp191 + _tmp181 * (-_tmp147 * _tmp162 - _tmp161 * _tmp169 +
                                                          _tmp170 + _tmp171 + _tmp172)) /
                         std::sqrt(Scalar(std::pow(_tmp174, Scalar(2)) * _tmp190 + 1));
  const Scalar _tmp193 = _tmp104 * _tmp110;
  const Scalar _tmp194 = _tmp112 * _tmp121;
  const Scalar _tmp195 = _tmp177 + _tmp179 + _tmp193 * fh1 + _tmp194 * fh1;
  const Scalar _tmp196 = Scalar(1.0) / (_tmp195);
  const Scalar _tmp197 = _tmp112 * _tmp120 * _tmp131;
  const Scalar _tmp198 = _tmp103 * _tmp110 * _tmp131;
  const Scalar _tmp199 = _tmp113 * _tmp149;
  const Scalar _tmp200 = _tmp124 * _tmp132 - _tmp141 * _tmp143 + _tmp173 - _tmp197 * fh1 -
                         _tmp198 * fh1 - _tmp199 * fh1;
  const Scalar _tmp201 = std::asinh(_tmp196 * _tmp200);
  const Scalar _tmp202 = Scalar(1.4083112389913199) * _tmp195;
  const Scalar _tmp203 =
      -_tmp201 * _tmp202 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp80), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp83), Scalar(2))));
  const Scalar _tmp204 = Scalar(0.71007031138673404) * _tmp196;
  const Scalar _tmp205 = _tmp203 * _tmp204;
  const Scalar _tmp206 = Scalar(1.0) * _tmp201;
  const Scalar _tmp207 = _tmp178 + _tmp193 + _tmp194;
  const Scalar _tmp208 = Scalar(1.4083112389913199) * _tmp207;
  const Scalar _tmp209 = std::pow(_tmp195, Scalar(-2));
  const Scalar _tmp210 = _tmp207 * _tmp209;
  const Scalar _tmp211 =
      (_tmp196 * (_tmp135 * _tmp162 + _tmp143 * _tmp161 - _tmp197 - _tmp198 - _tmp199) -
       _tmp200 * _tmp210) /
      std::sqrt(Scalar(std::pow(_tmp200, Scalar(2)) * _tmp209 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(1.4083112389913199) * fh1 *
                   (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp36) -
                    (-Scalar(0.71007031138673404) * _tmp33 * _tmp37 +
                     _tmp34 * (Scalar(1.4083112389913199) * _tmp30 * _tmp38 - _tmp32)) *
                        std::cosh(_tmp35)) -
               Scalar(1.4083112389913199) * std::sinh(_tmp35) -
               Scalar(1.4083112389913199) * std::sinh(_tmp36);
  _res(1, 0) = _tmp164 * (-Scalar(1.0) * _tmp163 * std::cosh(_tmp157) -
                          (-Scalar(0.71007031138673404) * _tmp160 * _tmp165 +
                           _tmp166 * (-_tmp156 * _tmp168 - _tmp163 * _tmp164)) *
                              std::cosh(_tmp167)) +
               _tmp168 * (-std::sinh(_tmp157) - std::sinh(_tmp167));
  _res(2, 0) = _tmp183 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp187) -
                          (-Scalar(0.71007031138673404) * _tmp184 * _tmp191 +
                           _tmp185 * (-_tmp182 * _tmp189 - _tmp183 * _tmp192)) *
                              std::cosh(_tmp186)) +
               _tmp189 * (-std::sinh(_tmp186) - std::sinh(_tmp187));
  _res(3, 0) = _tmp202 * (-Scalar(1.0) * _tmp211 * std::cosh(_tmp206) -
                          (-Scalar(0.71007031138673404) * _tmp203 * _tmp210 +
                           _tmp204 * (-_tmp201 * _tmp208 - _tmp202 * _tmp211)) *
                              std::cosh(_tmp205)) +
               _tmp208 * (-std::sinh(_tmp205) - std::sinh(_tmp206));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym