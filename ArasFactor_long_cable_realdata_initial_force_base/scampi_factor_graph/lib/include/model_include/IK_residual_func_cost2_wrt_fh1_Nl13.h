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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl13
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl13(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 641

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (212)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp0 * _tmp5;
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp2 * _tmp7;
  const Scalar _tmp9 = _tmp6 + _tmp8;
  const Scalar _tmp10 = -Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp2;
  const Scalar _tmp12 = _tmp11 * _tmp5;
  const Scalar _tmp13 = _tmp0 * _tmp7;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp18 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp21 = _tmp0 * _tmp11;
  const Scalar _tmp22 = _tmp5 * _tmp7;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp20 + _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 + position_vector(1, 0);
  const Scalar _tmp28 = Scalar(1.0) / (fh1);
  const Scalar _tmp29 = _tmp28 * fv1;
  const Scalar _tmp30 = std::asinh(_tmp29);
  const Scalar _tmp31 = Scalar(1.4083112389913199) * _tmp30;
  const Scalar _tmp32 =
      -_tmp31 * fh1 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp17), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp27), Scalar(2))));
  const Scalar _tmp33 = Scalar(0.71007031138673404) * _tmp28;
  const Scalar _tmp34 = _tmp32 * _tmp33;
  const Scalar _tmp35 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp36 =
      std::pow(Scalar(_tmp35 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = Scalar(1.0) * _tmp30;
  const Scalar _tmp38 = -_tmp19;
  const Scalar _tmp39 = -_tmp20 + _tmp24;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = -_tmp4;
  const Scalar _tmp43 = _tmp10 - _tmp14;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp25 + _tmp38;
  const Scalar _tmp47 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp48 = _tmp47 + Scalar(110.0);
  const Scalar _tmp49 = _tmp4 + _tmp43;
  const Scalar _tmp50 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 + Scalar(-125.0);
  const Scalar _tmp52 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp51, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp55 = -_tmp54;
  const Scalar _tmp56 =
      -Scalar(0.010999999999999999) * _tmp18 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp57 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp58 = _tmp56 + _tmp57;
  const Scalar _tmp59 = _tmp55 + _tmp58;
  const Scalar _tmp60 = _tmp48 * _tmp52;
  const Scalar _tmp61 = _tmp41 + Scalar(110.0);
  const Scalar _tmp62 = _tmp45 + Scalar(125.0);
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = _tmp61 * _tmp63;
  const Scalar _tmp65 = _tmp53 * _tmp64 - _tmp60;
  const Scalar _tmp66 = _tmp19 + _tmp39;
  const Scalar _tmp67 = _tmp66 + position_vector(1, 0);
  const Scalar _tmp68 = _tmp67 + Scalar(-110.0);
  const Scalar _tmp69 = _tmp15 + _tmp42;
  const Scalar _tmp70 = _tmp69 + position_vector(0, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(125.0);
  const Scalar _tmp72 = std::pow(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp71, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp73 = _tmp68 * _tmp72;
  const Scalar _tmp74 = _tmp71 * _tmp72;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp64 * _tmp74 - _tmp73);
  const Scalar _tmp76 = _tmp56 - _tmp57;
  const Scalar _tmp77 = _tmp55 + _tmp76;
  const Scalar _tmp78 = _tmp64 * _tmp77;
  const Scalar _tmp79 = _tmp54 + _tmp76;
  const Scalar _tmp80 = _tmp75 * (_tmp73 * _tmp79 - _tmp74 * _tmp78);
  const Scalar _tmp81 = -_tmp53 * _tmp78 + _tmp59 * _tmp60 - _tmp65 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) * _tmp40;
  const Scalar _tmp83 = -_tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp66 + _tmp83);
  const Scalar _tmp85 = Scalar(1.0) * _tmp44;
  const Scalar _tmp86 = -_tmp69 + _tmp85;
  const Scalar _tmp87 = _tmp84 * _tmp86;
  const Scalar _tmp88 = _tmp74 * _tmp77 - _tmp74 * _tmp79;
  const Scalar _tmp89 = _tmp65 * _tmp75;
  const Scalar _tmp90 = -_tmp53 * _tmp59 + _tmp53 * _tmp77 - _tmp81 * _tmp87 - _tmp88 * _tmp89;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = Scalar(1.0) * _tmp80;
  const Scalar _tmp93 = Scalar(1.0) * _tmp75;
  const Scalar _tmp94 = _tmp87 * _tmp92 - _tmp88 * _tmp93;
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp61, Scalar(2)) + std::pow(_tmp62, Scalar(2))));
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp63 * _tmp95;
  const Scalar _tmp98 = _tmp97 * (-_tmp40 * _tmp62 * _tmp96 + _tmp44 * _tmp61 * _tmp96);
  const Scalar _tmp99 = _tmp66 * _tmp74 - _tmp69 * _tmp73 + _tmp74 * _tmp98;
  const Scalar _tmp100 = _tmp46 * _tmp53 - _tmp49 * _tmp60 + _tmp53 * _tmp98 - _tmp89 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp91;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp90;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp94 - _tmp93 * _tmp99);
  const Scalar _tmp105 = _tmp91 * (_tmp104 + _tmp94);
  const Scalar _tmp106 = _tmp75 * (-_tmp105 * _tmp65 + Scalar(1.0));
  const Scalar _tmp107 = _tmp27 + Scalar(-110.0);
  const Scalar _tmp108 = _tmp17 + Scalar(-125.0);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp110 * _tmp97 * (_tmp105 * _tmp53 + _tmp106 * _tmp74);
  const Scalar _tmp112 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp113 = _tmp82 * _tmp87 + _tmp85;
  const Scalar _tmp114 = 0;
  const Scalar _tmp115 = _tmp74 * _tmp89;
  const Scalar _tmp116 = _tmp64 * _tmp80 + _tmp78;
  const Scalar _tmp117 = _tmp64 * _tmp75;
  const Scalar _tmp118 = -_tmp116 * _tmp87 + _tmp117 * _tmp88 - _tmp77;
  const Scalar _tmp119 = _tmp103 * (-_tmp101 * _tmp118 + _tmp117 * _tmp99 - _tmp98);
  const Scalar _tmp120 = _tmp91 * (_tmp118 + _tmp119);
  const Scalar _tmp121 = _tmp75 * (-_tmp120 * _tmp65 - _tmp64);
  const Scalar _tmp122 = _tmp108 * _tmp109;
  const Scalar _tmp123 = _tmp122 * _tmp97 * (_tmp120 * _tmp53 + _tmp121 * _tmp74 + Scalar(1.0));
  const Scalar _tmp124 = _tmp110 * _tmp16 - _tmp122 * _tmp26;
  const Scalar _tmp125 = Scalar(1.0) * _tmp102;
  const Scalar _tmp126 = _tmp124 * _tmp97 * (-_tmp115 * _tmp125 + _tmp125 * _tmp53);
  const Scalar _tmp127 = -_tmp111 * fh1 -
                         _tmp112 * _tmp97 * (-_tmp114 * _tmp115 + _tmp114 * _tmp53) -
                         _tmp123 * fh1 - _tmp126 * fh1;
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp46 + _tmp83;
  const Scalar _tmp130 = _tmp129 * _tmp87;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 - _tmp49 + _tmp85);
  const Scalar _tmp132 = _tmp113 * _tmp131;
  const Scalar _tmp133 = -_tmp114 * _tmp81 - _tmp129 * _tmp132 + _tmp83;
  const Scalar _tmp134 = Scalar(1.0) * _tmp84;
  const Scalar _tmp135 = Scalar(1.0) * _tmp131;
  const Scalar _tmp136 = _tmp129 * _tmp131;
  const Scalar _tmp137 = _tmp104 * _tmp136 - _tmp105 * _tmp81 - _tmp92;
  const Scalar _tmp138 = Scalar(1.0) * _tmp110 * (_tmp104 * _tmp135 - _tmp134 * _tmp137);
  const Scalar _tmp139 = _tmp54 + _tmp58;
  const Scalar _tmp140 = _tmp139 * fh1;
  const Scalar _tmp141 = _tmp122 * _tmp140 + _tmp16 * fv1 + Scalar(40.024799999999999) * _tmp9;
  const Scalar _tmp142 = _tmp129 * _tmp135;
  const Scalar _tmp143 = _tmp142 * _tmp84;
  const Scalar _tmp144 = -Scalar(1.0) * _tmp135 + Scalar(1.0) * _tmp143;
  const Scalar _tmp145 = _tmp116 + _tmp119 * _tmp136 - _tmp120 * _tmp81;
  const Scalar _tmp146 = Scalar(1.0) * _tmp122 * (_tmp119 * _tmp135 - _tmp134 * _tmp145);
  const Scalar _tmp147 = -_tmp110 * _tmp140 - Scalar(40.024799999999999) * _tmp23 - _tmp26 * fv1;
  const Scalar _tmp148 = _tmp135 * _tmp87;
  const Scalar _tmp149 = _tmp130 * _tmp135 + Scalar(1.0);
  const Scalar _tmp150 = -Scalar(1.0) * _tmp134 * _tmp149 + Scalar(1.0) * _tmp148;
  const Scalar _tmp151 = _tmp103 * _tmp142 - _tmp125 * _tmp81;
  const Scalar _tmp152 = _tmp103 * _tmp135;
  const Scalar _tmp153 = Scalar(1.0) * _tmp124 * (-_tmp134 * _tmp151 + _tmp152);
  const Scalar _tmp154 =
      Scalar(1.0) * _tmp112 * (-_tmp113 * _tmp135 - _tmp133 * _tmp134 + Scalar(1.0)) +
      _tmp138 * fh1 + _tmp141 * _tmp144 + _tmp146 * fh1 + _tmp147 * _tmp150 + _tmp153 * fh1;
  const Scalar _tmp155 = std::asinh(_tmp128 * _tmp154);
  const Scalar _tmp156 = Scalar(1.4083112389913199) * _tmp127;
  const Scalar _tmp157 =
      -_tmp155 * _tmp156 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp41 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp45 - 1), Scalar(2))));
  const Scalar _tmp158 = Scalar(0.71007031138673404) * _tmp128;
  const Scalar _tmp159 = _tmp157 * _tmp158;
  const Scalar _tmp160 = Scalar(1.0) * _tmp155;
  const Scalar _tmp161 = -_tmp111 - _tmp123 - _tmp126;
  const Scalar _tmp162 = Scalar(1.4083112389913199) * _tmp161;
  const Scalar _tmp163 = _tmp122 * _tmp139;
  const Scalar _tmp164 = _tmp110 * _tmp139;
  const Scalar _tmp165 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp166 = _tmp161 * _tmp165;
  const Scalar _tmp167 =
      (_tmp128 * (_tmp138 + _tmp144 * _tmp163 + _tmp146 - _tmp150 * _tmp164 + _tmp153) -
       _tmp154 * _tmp166) /
      std::sqrt(Scalar(std::pow(_tmp154, Scalar(2)) * _tmp165 + 1));
  const Scalar _tmp168 = _tmp112 * _tmp114;
  const Scalar _tmp169 = _tmp121 * _tmp122;
  const Scalar _tmp170 = _tmp124 * _tmp125;
  const Scalar _tmp171 = _tmp170 * fh1;
  const Scalar _tmp172 = _tmp106 * _tmp110;
  const Scalar _tmp173 = -_tmp168 * _tmp89 + _tmp169 * fh1 - _tmp171 * _tmp89 + _tmp172 * fh1;
  const Scalar _tmp174 = Scalar(1.0) / (_tmp173);
  const Scalar _tmp175 = _tmp110 * _tmp84;
  const Scalar _tmp176 = _tmp137 * _tmp175;
  const Scalar _tmp177 = _tmp135 * _tmp141;
  const Scalar _tmp178 = _tmp147 * _tmp84;
  const Scalar _tmp179 = _tmp124 * _tmp151 * _tmp84;
  const Scalar _tmp180 = _tmp122 * _tmp145 * _tmp84;
  const Scalar _tmp181 = _tmp112 * _tmp133 * _tmp84 - _tmp129 * _tmp177 * _tmp84 +
                         _tmp149 * _tmp178 + _tmp176 * fh1 + _tmp179 * fh1 + _tmp180 * fh1;
  const Scalar _tmp182 = std::asinh(_tmp174 * _tmp181);
  const Scalar _tmp183 = Scalar(1.4083112389913199) * _tmp173;
  const Scalar _tmp184 =
      -_tmp182 * _tmp183 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp67), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp70 - 1), Scalar(2))));
  const Scalar _tmp185 = Scalar(0.71007031138673404) * _tmp174;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = Scalar(1.0) * _tmp182;
  const Scalar _tmp188 = _tmp169 - _tmp170 * _tmp89 + _tmp172;
  const Scalar _tmp189 = Scalar(1.4083112389913199) * _tmp188;
  const Scalar _tmp190 = std::pow(_tmp173, Scalar(-2));
  const Scalar _tmp191 = _tmp188 * _tmp190;
  const Scalar _tmp192 =
      (_tmp174 * (-_tmp139 * _tmp149 * _tmp175 - _tmp143 * _tmp163 + _tmp176 + _tmp179 + _tmp180) -
       _tmp181 * _tmp191) /
      std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp190 + 1));
  const Scalar _tmp193 = _tmp120 * _tmp122;
  const Scalar _tmp194 = _tmp105 * _tmp110;
  const Scalar _tmp195 = _tmp168 + _tmp171 + _tmp193 * fh1 + _tmp194 * fh1;
  const Scalar _tmp196 = Scalar(1.0) / (_tmp195);
  const Scalar _tmp197 = _tmp119 * _tmp122 * _tmp131;
  const Scalar _tmp198 = _tmp124 * _tmp152;
  const Scalar _tmp199 = _tmp104 * _tmp110 * _tmp131;
  const Scalar _tmp200 = _tmp112 * _tmp132 - _tmp135 * _tmp178 * _tmp86 + _tmp177 - _tmp197 * fh1 -
                         _tmp198 * fh1 - _tmp199 * fh1;
  const Scalar _tmp201 = std::asinh(_tmp196 * _tmp200);
  const Scalar _tmp202 = Scalar(1.0) * _tmp201;
  const Scalar _tmp203 = Scalar(1.4083112389913199) * _tmp201;
  const Scalar _tmp204 =
      -_tmp195 * _tmp203 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp50), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp47 - 1), Scalar(2))));
  const Scalar _tmp205 = Scalar(0.71007031138673404) * _tmp196;
  const Scalar _tmp206 = _tmp204 * _tmp205;
  const Scalar _tmp207 = _tmp170 + _tmp193 + _tmp194;
  const Scalar _tmp208 = std::pow(_tmp195, Scalar(-2));
  const Scalar _tmp209 = _tmp207 * _tmp208;
  const Scalar _tmp210 =
      (_tmp196 * (_tmp135 * _tmp163 + _tmp148 * _tmp164 - _tmp197 - _tmp198 - _tmp199) -
       _tmp200 * _tmp209) /
      std::sqrt(Scalar(std::pow(_tmp200, Scalar(2)) * _tmp208 + 1));
  const Scalar _tmp211 = Scalar(1.4083112389913199) * _tmp195;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(1.4083112389913199) * fh1 *
                   (Scalar(1.0) * _tmp35 * _tmp36 * fv1 * std::cosh(_tmp37) -
                    (-Scalar(0.71007031138673404) * _tmp32 * _tmp35 +
                     _tmp33 * (Scalar(1.4083112389913199) * _tmp29 * _tmp36 - _tmp31)) *
                        std::cosh(_tmp34)) -
               Scalar(1.4083112389913199) * std::sinh(_tmp34) -
               Scalar(1.4083112389913199) * std::sinh(_tmp37);
  _res(1, 0) = _tmp156 * (-Scalar(1.0) * _tmp167 * std::cosh(_tmp160) -
                          (-Scalar(0.71007031138673404) * _tmp157 * _tmp166 +
                           _tmp158 * (-_tmp155 * _tmp162 - _tmp156 * _tmp167)) *
                              std::cosh(_tmp159)) +
               _tmp162 * (-std::sinh(_tmp159) - std::sinh(_tmp160));
  _res(2, 0) = _tmp183 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp187) -
                          (-Scalar(0.71007031138673404) * _tmp184 * _tmp191 +
                           _tmp185 * (-_tmp182 * _tmp189 - _tmp183 * _tmp192)) *
                              std::cosh(_tmp186)) +
               _tmp189 * (-std::sinh(_tmp186) - std::sinh(_tmp187));
  _res(3, 0) = Scalar(1.4083112389913199) * _tmp207 * (-std::sinh(_tmp202) - std::sinh(_tmp206)) +
               _tmp211 * (-Scalar(1.0) * _tmp210 * std::cosh(_tmp202) -
                          (-Scalar(0.71007031138673404) * _tmp204 * _tmp209 +
                           _tmp205 * (-_tmp203 * _tmp207 - _tmp210 * _tmp211)) *
                              std::cosh(_tmp206));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
