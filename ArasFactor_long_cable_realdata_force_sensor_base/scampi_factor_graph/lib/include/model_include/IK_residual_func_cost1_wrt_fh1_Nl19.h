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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl19
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl19(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 656

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (216)
  const Scalar _tmp0 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = 2 * _tmp1 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp4;
  const Scalar _tmp12 = _tmp11 * _tmp2;
  const Scalar _tmp13 = _tmp1 * _tmp5;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = _tmp1 * _tmp11;
  const Scalar _tmp22 = _tmp2 * _tmp5;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp27 = _tmp24 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = Scalar(1.0) / (fh1);
  const Scalar _tmp31 = _tmp30 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * _tmp32;
  const Scalar _tmp34 =
      -_tmp33 * fh1 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp29), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp18 - 1), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.71007031138673404) * _tmp30;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp0 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(1.0) * _tmp32;
  const Scalar _tmp39 = _tmp29 + Scalar(-110.0);
  const Scalar _tmp40 = _tmp18 + Scalar(125.0);
  const Scalar _tmp41 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp40, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp39 * _tmp41;
  const Scalar _tmp43 = _tmp40 * _tmp41;
  const Scalar _tmp44 = _tmp17 * _tmp42 - _tmp28 * _tmp43;
  const Scalar _tmp45 = _tmp24 - _tmp26;
  const Scalar _tmp46 = _tmp20 + _tmp45;
  const Scalar _tmp47 = Scalar(1.0) * _tmp46;
  const Scalar _tmp48 = -_tmp47;
  const Scalar _tmp49 = _tmp19 + _tmp45;
  const Scalar _tmp50 = _tmp48 + _tmp49;
  const Scalar _tmp51 = _tmp19 + _tmp27;
  const Scalar _tmp52 = Scalar(1.0) / (_tmp48 + _tmp51);
  const Scalar _tmp53 = -_tmp7;
  const Scalar _tmp54 = _tmp16 + _tmp53;
  const Scalar _tmp55 = Scalar(1.0) * _tmp54;
  const Scalar _tmp56 = _tmp10 + _tmp15;
  const Scalar _tmp57 = _tmp56 + _tmp7;
  const Scalar _tmp58 = _tmp52 * (_tmp55 - _tmp57);
  const Scalar _tmp59 = _tmp50 * _tmp58;
  const Scalar _tmp60 = _tmp53 + _tmp56;
  const Scalar _tmp61 = Scalar(1.0) / (_tmp55 - _tmp59 - _tmp60);
  const Scalar _tmp62 = Scalar(1.0) * _tmp61;
  const Scalar _tmp63 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp64 = _tmp63 + Scalar(-110.0);
  const Scalar _tmp65 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 + Scalar(-125.0);
  const Scalar _tmp67 = std::pow(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp66, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp68 = _tmp66 * _tmp67;
  const Scalar _tmp69 = _tmp64 * _tmp67;
  const Scalar _tmp70 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(110.0);
  const Scalar _tmp72 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp73 = _tmp72 + Scalar(125.0);
  const Scalar _tmp74 =
      std::sqrt(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp73, Scalar(2))));
  const Scalar _tmp75 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp76 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp77 = _tmp74 * _tmp76;
  const Scalar _tmp78 = _tmp77 * (-_tmp46 * _tmp73 * _tmp75 + _tmp54 * _tmp71 * _tmp75);
  const Scalar _tmp79 = _tmp51 * _tmp68 - _tmp57 * _tmp69 + _tmp68 * _tmp78;
  const Scalar _tmp80 = _tmp71 * _tmp76;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp68 * _tmp80 - _tmp69);
  const Scalar _tmp82 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp83 = _tmp82 + Scalar(110.0);
  const Scalar _tmp84 = _tmp60 + position_vector(0, 0);
  const Scalar _tmp85 = _tmp84 + Scalar(-125.0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp83, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp83 * _tmp86;
  const Scalar _tmp88 = _tmp85 * _tmp86;
  const Scalar _tmp89 = _tmp80 * _tmp88 - _tmp87;
  const Scalar _tmp90 = _tmp81 * _tmp89;
  const Scalar _tmp91 = _tmp49 * _tmp88 - _tmp60 * _tmp87 + _tmp78 * _tmp88 - _tmp79 * _tmp90;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp94 = -_tmp93;
  const Scalar _tmp95 =
      -Scalar(0.010999999999999999) * _tmp25 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp96 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp97 = _tmp95 - _tmp96;
  const Scalar _tmp98 = _tmp94 + _tmp97;
  const Scalar _tmp99 = _tmp95 + _tmp96;
  const Scalar _tmp100 = _tmp93 + _tmp99;
  const Scalar _tmp101 = -_tmp100 * _tmp68 + _tmp68 * _tmp98;
  const Scalar _tmp102 = _tmp94 + _tmp99;
  const Scalar _tmp103 = _tmp88 * _tmp98;
  const Scalar _tmp104 = _tmp80 * _tmp98;
  const Scalar _tmp105 = _tmp100 * _tmp69 - _tmp104 * _tmp68;
  const Scalar _tmp106 = _tmp102 * _tmp87 - _tmp103 * _tmp80 - _tmp105 * _tmp90;
  const Scalar _tmp107 = -_tmp101 * _tmp90 - _tmp102 * _tmp88 + _tmp103 - _tmp106 * _tmp58;
  const Scalar _tmp108 = _tmp107 * _tmp92;
  const Scalar _tmp109 = _tmp108 * _tmp62;
  const Scalar _tmp110 = Scalar(1.0) * _tmp92;
  const Scalar _tmp111 = -_tmp106 * _tmp110 + _tmp109 * _tmp50;
  const Scalar _tmp112 = Scalar(1.0) * _tmp52;
  const Scalar _tmp113 = Scalar(1.0) * _tmp44 * (_tmp109 - _tmp111 * _tmp112);
  const Scalar _tmp114 = _tmp93 + _tmp97;
  const Scalar _tmp115 = _tmp114 * fh1;
  const Scalar _tmp116 = -_tmp115 * _tmp42 - Scalar(40.024799999999999) * _tmp23 - _tmp28 * fv1;
  const Scalar _tmp117 = _tmp59 * _tmp62 + Scalar(1.0);
  const Scalar _tmp118 = _tmp58 * _tmp62;
  const Scalar _tmp119 = -Scalar(1.0) * _tmp112 * _tmp117 + Scalar(1.0) * _tmp118;
  const Scalar _tmp120 = _tmp115 * _tmp43 + Scalar(40.024799999999999) * _tmp14 + _tmp17 * fv1;
  const Scalar _tmp121 = _tmp50 * _tmp52;
  const Scalar _tmp122 = _tmp121 * _tmp62;
  const Scalar _tmp123 = Scalar(1.0) * _tmp122 - Scalar(1.0) * _tmp62;
  const Scalar _tmp124 = Scalar(1.0) * _tmp81;
  const Scalar _tmp125 = _tmp105 * _tmp124;
  const Scalar _tmp126 = -_tmp101 * _tmp124 + _tmp125 * _tmp58;
  const Scalar _tmp127 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp128 = _tmp127 * _tmp91;
  const Scalar _tmp129 = _tmp108 * (-_tmp124 * _tmp79 - _tmp126 * _tmp128);
  const Scalar _tmp130 = _tmp126 + _tmp129;
  const Scalar _tmp131 = _tmp106 * _tmp127;
  const Scalar _tmp132 = _tmp50 * _tmp61;
  const Scalar _tmp133 = -_tmp125 + _tmp129 * _tmp132 - _tmp130 * _tmp131;
  const Scalar _tmp134 = Scalar(1.0) * _tmp42 * (-_tmp112 * _tmp133 + _tmp129 * _tmp62);
  const Scalar _tmp135 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp136 = _tmp47 * _tmp58 + _tmp55;
  const Scalar _tmp137 = 0;
  const Scalar _tmp138 = _tmp136 * _tmp61;
  const Scalar _tmp139 = -_tmp131 * _tmp137 - _tmp138 * _tmp50 + _tmp48;
  const Scalar _tmp140 = _tmp80 * _tmp81;
  const Scalar _tmp141 = _tmp104 + _tmp105 * _tmp140;
  const Scalar _tmp142 = _tmp101 * _tmp140 - _tmp141 * _tmp58 - _tmp98;
  const Scalar _tmp143 = _tmp108 * (-_tmp128 * _tmp142 + _tmp140 * _tmp79 - _tmp78);
  const Scalar _tmp144 = _tmp142 + _tmp143;
  const Scalar _tmp145 = -_tmp131 * _tmp144 + _tmp132 * _tmp143 + _tmp141;
  const Scalar _tmp146 = Scalar(1.0) * _tmp43 * (-_tmp112 * _tmp145 + _tmp143 * _tmp62);
  const Scalar _tmp147 =
      _tmp113 * fh1 + _tmp116 * _tmp119 + _tmp120 * _tmp123 + _tmp134 * fh1 +
      Scalar(1.0) * _tmp135 * (-_tmp112 * _tmp139 - _tmp136 * _tmp62 + Scalar(1.0)) + _tmp146 * fh1;
  const Scalar _tmp148 = _tmp127 * _tmp130;
  const Scalar _tmp149 = _tmp127 * _tmp89;
  const Scalar _tmp150 = _tmp81 * (-_tmp130 * _tmp149 + Scalar(1.0));
  const Scalar _tmp151 = _tmp42 * _tmp77 * (_tmp148 * _tmp88 + _tmp150 * _tmp68);
  const Scalar _tmp152 = _tmp124 * _tmp89 * _tmp92;
  const Scalar _tmp153 = _tmp44 * _tmp77 * (_tmp110 * _tmp88 - _tmp152 * _tmp68);
  const Scalar _tmp154 = _tmp127 * _tmp137;
  const Scalar _tmp155 = _tmp127 * _tmp144;
  const Scalar _tmp156 = _tmp81 * (-_tmp144 * _tmp149 - _tmp80);
  const Scalar _tmp157 = _tmp43 * _tmp77 * (_tmp155 * _tmp88 + _tmp156 * _tmp68 + Scalar(1.0));
  const Scalar _tmp158 = -_tmp135 * _tmp77 * (-_tmp154 * _tmp68 * _tmp90 + _tmp154 * _tmp88) -
                         _tmp151 * fh1 - _tmp153 * fh1 - _tmp157 * fh1;
  const Scalar _tmp159 = Scalar(1.0) / (_tmp158);
  const Scalar _tmp160 = std::asinh(_tmp147 * _tmp159);
  const Scalar _tmp161 = -_tmp151 - _tmp153 - _tmp157;
  const Scalar _tmp162 = Scalar(1.4083112389913199) * _tmp161;
  const Scalar _tmp163 = Scalar(1.4083112389913199) * _tmp158;
  const Scalar _tmp164 = _tmp114 * _tmp43;
  const Scalar _tmp165 = _tmp114 * _tmp42;
  const Scalar _tmp166 = std::pow(_tmp158, Scalar(-2));
  const Scalar _tmp167 = _tmp161 * _tmp166;
  const Scalar _tmp168 = (-_tmp147 * _tmp167 + _tmp159 * (_tmp113 - _tmp119 * _tmp165 +
                                                          _tmp123 * _tmp164 + _tmp134 + _tmp146)) /
                         std::sqrt(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp166 + 1));
  const Scalar _tmp169 = Scalar(0.71007031138673404) * _tmp159;
  const Scalar _tmp170 =
      -_tmp160 * _tmp163 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp70 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp72 - 1), Scalar(2))));
  const Scalar _tmp171 = _tmp169 * _tmp170;
  const Scalar _tmp172 = Scalar(1.0) * _tmp160;
  const Scalar _tmp173 = _tmp156 * _tmp43;
  const Scalar _tmp174 = _tmp152 * _tmp44;
  const Scalar _tmp175 = _tmp150 * _tmp42;
  const Scalar _tmp176 = _tmp135 * _tmp154;
  const Scalar _tmp177 = _tmp173 * fh1 - _tmp174 * fh1 + _tmp175 * fh1 - _tmp176 * _tmp90;
  const Scalar _tmp178 = Scalar(1.0) / (_tmp177);
  const Scalar _tmp179 = _tmp133 * _tmp42 * _tmp52;
  const Scalar _tmp180 = _tmp117 * _tmp52;
  const Scalar _tmp181 = _tmp120 * _tmp62;
  const Scalar _tmp182 = _tmp111 * _tmp44 * _tmp52;
  const Scalar _tmp183 = _tmp145 * _tmp43 * _tmp52;
  const Scalar _tmp184 = _tmp116 * _tmp180 - _tmp121 * _tmp181 + _tmp135 * _tmp139 * _tmp52 +
                         _tmp179 * fh1 + _tmp182 * fh1 + _tmp183 * fh1;
  const Scalar _tmp185 = std::asinh(_tmp178 * _tmp184);
  const Scalar _tmp186 = Scalar(1.0) * _tmp185;
  const Scalar _tmp187 = Scalar(1.4083112389913199) * _tmp185;
  const Scalar _tmp188 =
      -_tmp177 * _tmp187 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp63), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp65), Scalar(2))));
  const Scalar _tmp189 = Scalar(0.71007031138673404) * _tmp178;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 = _tmp173 - _tmp174 + _tmp175;
  const Scalar _tmp192 = std::pow(_tmp177, Scalar(-2));
  const Scalar _tmp193 = _tmp191 * _tmp192;
  const Scalar _tmp194 =
      (_tmp178 * (-_tmp122 * _tmp164 - _tmp165 * _tmp180 + _tmp179 + _tmp182 + _tmp183) -
       _tmp184 * _tmp193) /
      std::sqrt(Scalar(std::pow(_tmp184, Scalar(2)) * _tmp192 + 1));
  const Scalar _tmp195 = Scalar(1.4083112389913199) * _tmp177;
  const Scalar _tmp196 = _tmp148 * _tmp42;
  const Scalar _tmp197 = _tmp110 * _tmp44;
  const Scalar _tmp198 = _tmp155 * _tmp43;
  const Scalar _tmp199 = _tmp176 + _tmp196 * fh1 + _tmp197 * fh1 + _tmp198 * fh1;
  const Scalar _tmp200 = Scalar(1.0) / (_tmp199);
  const Scalar _tmp201 = _tmp129 * _tmp42 * _tmp61;
  const Scalar _tmp202 = _tmp109 * _tmp44;
  const Scalar _tmp203 = _tmp143 * _tmp43 * _tmp61;
  const Scalar _tmp204 = -_tmp116 * _tmp118 + _tmp135 * _tmp138 + _tmp181 - _tmp201 * fh1 -
                         _tmp202 * fh1 - _tmp203 * fh1;
  const Scalar _tmp205 = std::asinh(_tmp200 * _tmp204);
  const Scalar _tmp206 = Scalar(1.0) * _tmp205;
  const Scalar _tmp207 = std::pow(_tmp199, Scalar(-2));
  const Scalar _tmp208 = _tmp196 + _tmp197 + _tmp198;
  const Scalar _tmp209 = _tmp207 * _tmp208;
  const Scalar _tmp210 =
      (_tmp200 * (_tmp118 * _tmp165 + _tmp164 * _tmp62 - _tmp201 - _tmp202 - _tmp203) -
       _tmp204 * _tmp209) /
      std::sqrt(Scalar(std::pow(_tmp204, Scalar(2)) * _tmp207 + 1));
  const Scalar _tmp211 = Scalar(1.4083112389913199) * _tmp199;
  const Scalar _tmp212 =
      -_tmp205 * _tmp211 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp84), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp82 - 1), Scalar(2))));
  const Scalar _tmp213 = Scalar(0.71007031138673404) * _tmp200;
  const Scalar _tmp214 = _tmp212 * _tmp213;
  const Scalar _tmp215 = Scalar(1.4083112389913199) * _tmp208;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -Scalar(48.000000000000128) * _tmp30 -
               Scalar(1.4083112389913199) * fh1 *
                   (-Scalar(1.0) * _tmp0 * _tmp37 * fv1 * std::sinh(_tmp38) -
                    Scalar(34.083374946563197) * _tmp0 -
                    (-Scalar(0.71007031138673404) * _tmp0 * _tmp34 +
                     _tmp35 * (Scalar(1.4083112389913199) * _tmp31 * _tmp37 - _tmp33)) *
                        std::sinh(_tmp36)) +
               Scalar(1.4083112389913199) * std::cosh(_tmp36) -
               Scalar(1.4083112389913199) * std::cosh(_tmp38);
  _res(1, 0) =
      -_tmp162 * (Scalar(34.083374946563197) * _tmp159 - std::cosh(_tmp171) + std::cosh(_tmp172)) -
      _tmp163 *
          (-Scalar(34.083374946563197) * _tmp167 + Scalar(1.0) * _tmp168 * std::sinh(_tmp172) -
           (-Scalar(0.71007031138673404) * _tmp167 * _tmp170 +
            _tmp169 * (-_tmp160 * _tmp162 - _tmp163 * _tmp168)) *
               std::sinh(_tmp171));
  _res(2, 0) =
      -Scalar(1.4083112389913199) * _tmp191 *
          (Scalar(34.083374946563197) * _tmp178 + std::cosh(_tmp186) - std::cosh(_tmp190)) -
      _tmp195 *
          (-Scalar(34.083374946563197) * _tmp193 + Scalar(1.0) * _tmp194 * std::sinh(_tmp186) -
           (-Scalar(0.71007031138673404) * _tmp188 * _tmp193 +
            _tmp189 * (-_tmp187 * _tmp191 - _tmp194 * _tmp195)) *
               std::sinh(_tmp190));
  _res(3, 0) =
      -_tmp211 *
          (-Scalar(34.083374946563197) * _tmp209 + Scalar(1.0) * _tmp210 * std::sinh(_tmp206) -
           (-Scalar(0.71007031138673404) * _tmp209 * _tmp212 +
            _tmp213 * (-_tmp205 * _tmp215 - _tmp210 * _tmp211)) *
               std::sinh(_tmp214)) -
      _tmp215 * (Scalar(34.083374946563197) * _tmp200 + std::cosh(_tmp206) - std::cosh(_tmp214));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym