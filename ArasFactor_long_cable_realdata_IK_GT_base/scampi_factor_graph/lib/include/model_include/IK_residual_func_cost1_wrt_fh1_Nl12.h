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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl12
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 654

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (212)
  const Scalar _tmp0 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp10 = _tmp2 * _tmp6;
  const Scalar _tmp11 = _tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp20 = _tmp3 * _tmp5;
  const Scalar _tmp21 = _tmp1 * _tmp6;
  const Scalar _tmp22 = _tmp20 - _tmp21;
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp23 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = Scalar(1.0) / (fh1);
  const Scalar _tmp30 = _tmp29 * fv1;
  const Scalar _tmp31 = std::asinh(_tmp30);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * _tmp31;
  const Scalar _tmp33 =
      -_tmp32 * fh1 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp18), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp28), Scalar(2))));
  const Scalar _tmp34 = Scalar(0.71007031138673404) * _tmp29;
  const Scalar _tmp35 = _tmp33 * _tmp34;
  const Scalar _tmp36 =
      std::pow(Scalar(_tmp0 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = Scalar(1.0) * _tmp31;
  const Scalar _tmp38 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp39 = _tmp12 - _tmp15;
  const Scalar _tmp40 = _tmp39 + _tmp8;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 + Scalar(125.0);
  const Scalar _tmp43 = -_tmp19;
  const Scalar _tmp44 = _tmp26 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp46 = _tmp45 + Scalar(-110.0);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp42 * _tmp47;
  const Scalar _tmp49 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp50 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp24 + Scalar(-0.010999999999999999);
  const Scalar _tmp51 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp52 = _tmp50 - _tmp51;
  const Scalar _tmp53 = _tmp49 + _tmp52;
  const Scalar _tmp54 = _tmp23 - _tmp25;
  const Scalar _tmp55 = _tmp43 + _tmp54;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 + Scalar(110.0);
  const Scalar _tmp58 = -_tmp8;
  const Scalar _tmp59 = _tmp39 + _tmp58;
  const Scalar _tmp60 = _tmp59 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(125.0);
  const Scalar _tmp62 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp63 = _tmp57 * _tmp62;
  const Scalar _tmp64 = -_tmp49;
  const Scalar _tmp65 = _tmp52 + _tmp64;
  const Scalar _tmp66 = _tmp48 * _tmp65;
  const Scalar _tmp67 = _tmp46 * _tmp47;
  const Scalar _tmp68 = _tmp50 + _tmp51;
  const Scalar _tmp69 = _tmp64 + _tmp68;
  const Scalar _tmp70 = _tmp19 + _tmp54;
  const Scalar _tmp71 = _tmp70 + position_vector(1, 0);
  const Scalar _tmp72 = _tmp71 + Scalar(110.0);
  const Scalar _tmp73 = _tmp16 + _tmp58;
  const Scalar _tmp74 = _tmp73 + position_vector(0, 0);
  const Scalar _tmp75 = _tmp74 + Scalar(-125.0);
  const Scalar _tmp76 = std::pow(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp75, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp77 = _tmp72 * _tmp76;
  const Scalar _tmp78 = _tmp75 * _tmp76;
  const Scalar _tmp79 = _tmp65 * _tmp78;
  const Scalar _tmp80 = -_tmp63 * _tmp79 + _tmp69 * _tmp77;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp63 * _tmp78 - _tmp77);
  const Scalar _tmp82 = _tmp48 * _tmp63 - _tmp67;
  const Scalar _tmp83 = _tmp81 * _tmp82;
  const Scalar _tmp84 = _tmp53 * _tmp67 - _tmp63 * _tmp66 - _tmp80 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) * _tmp55;
  const Scalar _tmp86 = -_tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp70 + _tmp86);
  const Scalar _tmp88 = Scalar(1.0) * _tmp59;
  const Scalar _tmp89 = _tmp87 * (-_tmp73 + _tmp88);
  const Scalar _tmp90 = -_tmp69 * _tmp78 + _tmp79;
  const Scalar _tmp91 = -_tmp48 * _tmp53 + _tmp66 - _tmp83 * _tmp90 - _tmp84 * _tmp89;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp85 * _tmp89 + _tmp88;
  const Scalar _tmp94 = 0;
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp96 = _tmp62 * _tmp95;
  const Scalar _tmp97 = _tmp28 + Scalar(-110.0);
  const Scalar _tmp98 = _tmp18 + Scalar(-125.0);
  const Scalar _tmp99 = std::pow(Scalar(std::pow(_tmp97, Scalar(2)) + std::pow(_tmp98, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp100 = _tmp98 * _tmp99;
  const Scalar _tmp101 = _tmp97 * _tmp99;
  const Scalar _tmp102 = -_tmp100 * _tmp27 + _tmp101 * _tmp17;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp104 = _tmp96 * (-_tmp103 * _tmp55 * _tmp61 + _tmp103 * _tmp57 * _tmp59);
  const Scalar _tmp105 = _tmp104 * _tmp78 + _tmp70 * _tmp78 - _tmp73 * _tmp77;
  const Scalar _tmp106 = _tmp104 * _tmp48 - _tmp105 * _tmp83 - _tmp40 * _tmp67 + _tmp44 * _tmp48;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp108 = Scalar(1.0) * _tmp81;
  const Scalar _tmp109 = _tmp107 * _tmp108 * _tmp82;
  const Scalar _tmp110 = Scalar(1.0) * _tmp107;
  const Scalar _tmp111 = _tmp102 * _tmp96 * (-_tmp109 * _tmp78 + _tmp110 * _tmp48);
  const Scalar _tmp112 = _tmp108 * _tmp80;
  const Scalar _tmp113 = -_tmp108 * _tmp90 + _tmp112 * _tmp89;
  const Scalar _tmp114 = _tmp106 * _tmp92;
  const Scalar _tmp115 = _tmp107 * _tmp91;
  const Scalar _tmp116 = _tmp115 * (-_tmp105 * _tmp108 - _tmp113 * _tmp114);
  const Scalar _tmp117 = _tmp92 * (_tmp113 + _tmp116);
  const Scalar _tmp118 = _tmp81 * (-_tmp117 * _tmp82 + Scalar(1.0));
  const Scalar _tmp119 = _tmp101 * _tmp96 * (_tmp117 * _tmp48 + _tmp118 * _tmp78);
  const Scalar _tmp120 = _tmp63 * _tmp81;
  const Scalar _tmp121 = _tmp120 * _tmp80 + _tmp63 * _tmp65;
  const Scalar _tmp122 = _tmp120 * _tmp90 - _tmp121 * _tmp89 - _tmp65;
  const Scalar _tmp123 = _tmp115 * (-_tmp104 + _tmp105 * _tmp120 - _tmp114 * _tmp122);
  const Scalar _tmp124 = _tmp92 * (_tmp122 + _tmp123);
  const Scalar _tmp125 = _tmp81 * (-_tmp124 * _tmp82 - _tmp63);
  const Scalar _tmp126 = _tmp100 * _tmp96 * (_tmp124 * _tmp48 + _tmp125 * _tmp78 + Scalar(1.0));
  const Scalar _tmp127 = -_tmp111 * fh1 - _tmp119 * fh1 - _tmp126 * fh1 -
                         _tmp38 * _tmp96 * (_tmp48 * _tmp94 - _tmp78 * _tmp83 * _tmp94);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp44 + _tmp86;
  const Scalar _tmp130 = _tmp129 * _tmp89;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 - _tmp40 + _tmp88);
  const Scalar _tmp132 = _tmp129 * _tmp131;
  const Scalar _tmp133 = -_tmp112 + _tmp116 * _tmp132 - _tmp117 * _tmp84;
  const Scalar _tmp134 = Scalar(1.0) * _tmp87;
  const Scalar _tmp135 = Scalar(1.0) * _tmp131;
  const Scalar _tmp136 = Scalar(1.0) * _tmp101 * (_tmp116 * _tmp135 - _tmp133 * _tmp134);
  const Scalar _tmp137 = _tmp115 * _tmp135;
  const Scalar _tmp138 = -_tmp110 * _tmp84 + _tmp129 * _tmp137;
  const Scalar _tmp139 = Scalar(1.0) * _tmp102;
  const Scalar _tmp140 = _tmp139 * (-_tmp134 * _tmp138 + _tmp137);
  const Scalar _tmp141 = _tmp131 * _tmp93;
  const Scalar _tmp142 = -_tmp129 * _tmp141 - _tmp84 * _tmp94 + _tmp86;
  const Scalar _tmp143 = _tmp49 + _tmp68;
  const Scalar _tmp144 = _tmp143 * fh1;
  const Scalar _tmp145 = -_tmp101 * _tmp144 - Scalar(40.024799999999999) * _tmp22 - _tmp27 * fv1;
  const Scalar _tmp146 = _tmp135 * _tmp89;
  const Scalar _tmp147 = _tmp130 * _tmp135 + Scalar(1.0);
  const Scalar _tmp148 = -Scalar(1.0) * _tmp134 * _tmp147 + Scalar(1.0) * _tmp146;
  const Scalar _tmp149 = _tmp121 + _tmp123 * _tmp132 - _tmp124 * _tmp84;
  const Scalar _tmp150 = Scalar(1.0) * _tmp100 * (_tmp123 * _tmp135 - _tmp134 * _tmp149);
  const Scalar _tmp151 = _tmp100 * _tmp144 + Scalar(40.024799999999999) * _tmp11 + _tmp17 * fv1;
  const Scalar _tmp152 = _tmp129 * _tmp87;
  const Scalar _tmp153 = Scalar(1.0) * _tmp135 * _tmp152 - Scalar(1.0) * _tmp135;
  const Scalar _tmp154 =
      _tmp136 * fh1 + _tmp140 * fh1 + _tmp145 * _tmp148 + _tmp150 * fh1 + _tmp151 * _tmp153 +
      Scalar(1.0) * _tmp38 * (-_tmp134 * _tmp142 - _tmp135 * _tmp93 + Scalar(1.0));
  const Scalar _tmp155 = std::asinh(_tmp128 * _tmp154);
  const Scalar _tmp156 = Scalar(1.0) * _tmp155;
  const Scalar _tmp157 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp158 = -_tmp111 - _tmp119 - _tmp126;
  const Scalar _tmp159 = _tmp157 * _tmp158;
  const Scalar _tmp160 = _tmp101 * _tmp143;
  const Scalar _tmp161 = _tmp100 * _tmp143;
  const Scalar _tmp162 =
      (_tmp128 * (_tmp136 + _tmp140 - _tmp148 * _tmp160 + _tmp150 + _tmp153 * _tmp161) -
       _tmp154 * _tmp159) /
      std::sqrt(Scalar(std::pow(_tmp154, Scalar(2)) * _tmp157 + 1));
  const Scalar _tmp163 = Scalar(1.4083112389913199) * _tmp127;
  const Scalar _tmp164 =
      -_tmp155 * _tmp163 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp56 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp60 - 1), Scalar(2))));
  const Scalar _tmp165 = Scalar(1.4083112389913199) * _tmp158;
  const Scalar _tmp166 = Scalar(0.71007031138673404) * _tmp128;
  const Scalar _tmp167 = _tmp164 * _tmp166;
  const Scalar _tmp168 = _tmp100 * _tmp125;
  const Scalar _tmp169 = _tmp102 * _tmp109;
  const Scalar _tmp170 = _tmp101 * _tmp118;
  const Scalar _tmp171 = _tmp38 * _tmp94;
  const Scalar _tmp172 = _tmp168 * fh1 - _tmp169 * fh1 + _tmp170 * fh1 - _tmp171 * _tmp83;
  const Scalar _tmp173 = Scalar(1.0) / (_tmp172);
  const Scalar _tmp174 = _tmp101 * _tmp133 * _tmp87;
  const Scalar _tmp175 = _tmp135 * _tmp151;
  const Scalar _tmp176 = _tmp100 * _tmp87;
  const Scalar _tmp177 = _tmp149 * _tmp176;
  const Scalar _tmp178 = _tmp147 * _tmp87;
  const Scalar _tmp179 = _tmp102 * _tmp138 * _tmp87;
  const Scalar _tmp180 = _tmp142 * _tmp38 * _tmp87 + _tmp145 * _tmp178 - _tmp152 * _tmp175 +
                         _tmp174 * fh1 + _tmp177 * fh1 + _tmp179 * fh1;
  const Scalar _tmp181 = std::asinh(_tmp173 * _tmp180);
  const Scalar _tmp182 = Scalar(1.0) * _tmp181;
  const Scalar _tmp183 = Scalar(1.4083112389913199) * _tmp172;
  const Scalar _tmp184 =
      -_tmp181 * _tmp183 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp74), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp71 - 1), Scalar(2))));
  const Scalar _tmp185 = Scalar(0.71007031138673404) * _tmp173;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = _tmp168 - _tmp169 + _tmp170;
  const Scalar _tmp188 = Scalar(1.4083112389913199) * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp172, Scalar(-2));
  const Scalar _tmp190 = _tmp187 * _tmp189;
  const Scalar _tmp191 = (_tmp173 * (-_tmp129 * _tmp135 * _tmp143 * _tmp176 - _tmp160 * _tmp178 +
                                     _tmp174 + _tmp177 + _tmp179) -
                          _tmp180 * _tmp190) /
                         std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp192 = _tmp102 * _tmp137;
  const Scalar _tmp193 = _tmp101 * _tmp116 * _tmp131;
  const Scalar _tmp194 = _tmp100 * _tmp123 * _tmp131;
  const Scalar _tmp195 = _tmp141 * _tmp38 - _tmp145 * _tmp146 + _tmp175 - _tmp192 * fh1 -
                         _tmp193 * fh1 - _tmp194 * fh1;
  const Scalar _tmp196 = _tmp107 * _tmp139;
  const Scalar _tmp197 = _tmp100 * _tmp124;
  const Scalar _tmp198 = _tmp101 * _tmp117;
  const Scalar _tmp199 = _tmp171 + _tmp196 * fh1 + _tmp197 * fh1 + _tmp198 * fh1;
  const Scalar _tmp200 = Scalar(1.0) / (_tmp199);
  const Scalar _tmp201 = std::asinh(_tmp195 * _tmp200);
  const Scalar _tmp202 = Scalar(1.0) * _tmp201;
  const Scalar _tmp203 = std::pow(_tmp199, Scalar(-2));
  const Scalar _tmp204 = _tmp196 + _tmp197 + _tmp198;
  const Scalar _tmp205 = _tmp203 * _tmp204;
  const Scalar _tmp206 = (-_tmp195 * _tmp205 + _tmp200 * (_tmp135 * _tmp161 + _tmp146 * _tmp160 -
                                                          _tmp192 - _tmp193 - _tmp194)) /
                         std::sqrt(Scalar(std::pow(_tmp195, Scalar(2)) * _tmp203 + 1));
  const Scalar _tmp207 = Scalar(1.4083112389913199) * _tmp199;
  const Scalar _tmp208 =
      -_tmp201 * _tmp207 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp45), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp41 - 1), Scalar(2))));
  const Scalar _tmp209 = Scalar(1.4083112389913199) * _tmp204;
  const Scalar _tmp210 = Scalar(0.71007031138673404) * _tmp200;
  const Scalar _tmp211 = _tmp208 * _tmp210;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -Scalar(48.000000000000128) * _tmp29 -
               Scalar(1.4083112389913199) * fh1 *
                   (-Scalar(1.0) * _tmp0 * _tmp36 * fv1 * std::sinh(_tmp37) -
                    Scalar(34.083374946563197) * _tmp0 -
                    (-Scalar(0.71007031138673404) * _tmp0 * _tmp33 +
                     _tmp34 * (Scalar(1.4083112389913199) * _tmp30 * _tmp36 - _tmp32)) *
                        std::sinh(_tmp35)) +
               Scalar(1.4083112389913199) * std::cosh(_tmp35) -
               Scalar(1.4083112389913199) * std::cosh(_tmp37);
  _res(1, 0) =
      -_tmp163 *
          (-Scalar(34.083374946563197) * _tmp159 + Scalar(1.0) * _tmp162 * std::sinh(_tmp156) -
           (-Scalar(0.71007031138673404) * _tmp159 * _tmp164 +
            _tmp166 * (-_tmp155 * _tmp165 - _tmp162 * _tmp163)) *
               std::sinh(_tmp167)) -
      _tmp165 * (Scalar(34.083374946563197) * _tmp128 + std::cosh(_tmp156) - std::cosh(_tmp167));
  _res(2, 0) =
      -_tmp183 *
          (-Scalar(34.083374946563197) * _tmp190 + Scalar(1.0) * _tmp191 * std::sinh(_tmp182) -
           (-Scalar(0.71007031138673404) * _tmp184 * _tmp190 +
            _tmp185 * (-_tmp181 * _tmp188 - _tmp183 * _tmp191)) *
               std::sinh(_tmp186)) -
      _tmp188 * (Scalar(34.083374946563197) * _tmp173 + std::cosh(_tmp182) - std::cosh(_tmp186));
  _res(3, 0) =
      -_tmp207 *
          (-Scalar(34.083374946563197) * _tmp205 + Scalar(1.0) * _tmp206 * std::sinh(_tmp202) -
           (-Scalar(0.71007031138673404) * _tmp205 * _tmp208 +
            _tmp210 * (-_tmp201 * _tmp209 - _tmp206 * _tmp207)) *
               std::sinh(_tmp211)) -
      _tmp209 * (Scalar(34.083374946563197) * _tmp200 + std::cosh(_tmp202) - std::cosh(_tmp211));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
