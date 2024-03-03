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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl5
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 641

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (211)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * fv1;
  const Scalar _tmp2 = std::asinh(_tmp1);
  const Scalar _tmp3 = Scalar(1.0) * _tmp2;
  const Scalar _tmp4 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp8 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp8 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                        _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp12 = 2 * _tmp7;
  const Scalar _tmp13 = _tmp11 * _tmp12;
  const Scalar _tmp14 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp15 = _tmp14 * _tmp5;
  const Scalar _tmp16 = _tmp13 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = 2 * _tmp11 * _tmp5;
  const Scalar _tmp19 = _tmp14 * _tmp7;
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = _tmp17 - _tmp20;
  const Scalar _tmp22 = _tmp10 + _tmp21;
  const Scalar _tmp23 = _tmp22 + position_vector(1, 0);
  const Scalar _tmp24 = 1 - 2 * std::pow(_tmp11, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp26 = -_tmp25;
  const Scalar _tmp27 = _tmp12 * _tmp5;
  const Scalar _tmp28 = _tmp11 * _tmp14;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp18 - Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp32 = _tmp30 - _tmp31;
  const Scalar _tmp33 = _tmp26 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp35 = Scalar(1.4083112389913199) * _tmp2;
  const Scalar _tmp36 =
      -_tmp35 * fh1 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp23 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp34 - 1), Scalar(2))));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp4 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(0.71007031138673404) * _tmp0;
  const Scalar _tmp39 = _tmp36 * _tmp38;
  const Scalar _tmp40 = _tmp23 + Scalar(110.0);
  const Scalar _tmp41 = _tmp34 + Scalar(125.0);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp40 * _tmp42;
  const Scalar _tmp44 = _tmp41 * _tmp42;
  const Scalar _tmp45 = -_tmp22 * _tmp44 + _tmp33 * _tmp43;
  const Scalar _tmp46 = _tmp17 + _tmp20;
  const Scalar _tmp47 = _tmp10 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 + Scalar(110.0);
  const Scalar _tmp50 = _tmp25 + _tmp32;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 + Scalar(-125.0);
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp52 * _tmp53;
  const Scalar _tmp55 = _tmp21 + _tmp9;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 + Scalar(-110.0);
  const Scalar _tmp58 = _tmp30 + _tmp31;
  const Scalar _tmp59 = _tmp26 + _tmp58;
  const Scalar _tmp60 = _tmp59 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(125.0);
  const Scalar _tmp62 =
      std::sqrt(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp65 = _tmp62 * _tmp64;
  const Scalar _tmp66 = _tmp65 * (-_tmp55 * _tmp61 * _tmp63 + _tmp57 * _tmp59 * _tmp63);
  const Scalar _tmp67 = _tmp49 * _tmp53;
  const Scalar _tmp68 = _tmp46 + _tmp9;
  const Scalar _tmp69 = _tmp68 + position_vector(1, 0);
  const Scalar _tmp70 = _tmp69 + Scalar(-110.0);
  const Scalar _tmp71 = _tmp25 + _tmp58;
  const Scalar _tmp72 = _tmp71 + position_vector(0, 0);
  const Scalar _tmp73 = _tmp72 + Scalar(-125.0);
  const Scalar _tmp74 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp73, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = _tmp70 * _tmp74;
  const Scalar _tmp77 = _tmp66 * _tmp75 + _tmp68 * _tmp75 - _tmp71 * _tmp76;
  const Scalar _tmp78 = _tmp57 * _tmp64;
  const Scalar _tmp79 = _tmp54 * _tmp78 - _tmp67;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp75 * _tmp78 - _tmp76);
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp47 * _tmp54 - _tmp50 * _tmp67 + _tmp54 * _tmp66 - _tmp77 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp83;
  const Scalar _tmp85 = _tmp75 * _tmp81;
  const Scalar _tmp86 = _tmp45 * _tmp65 * (_tmp54 * _tmp84 - _tmp84 * _tmp85);
  const Scalar _tmp87 = Scalar(0.20999999999999999) * _tmp27 - Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp88 =
      -Scalar(0.010999999999999999) * _tmp24 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp89 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp90 = _tmp88 - _tmp89;
  const Scalar _tmp91 = _tmp87 + _tmp90;
  const Scalar _tmp92 = -_tmp87;
  const Scalar _tmp93 = _tmp88 + _tmp89;
  const Scalar _tmp94 = _tmp92 + _tmp93;
  const Scalar _tmp95 = _tmp54 * _tmp94;
  const Scalar _tmp96 = _tmp75 * _tmp94;
  const Scalar _tmp97 = _tmp87 + _tmp93;
  const Scalar _tmp98 = _tmp76 * _tmp97 - _tmp78 * _tmp96;
  const Scalar _tmp99 = _tmp67 * _tmp91 - _tmp78 * _tmp95 - _tmp81 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp55;
  const Scalar _tmp101 = -_tmp100;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101 + _tmp68);
  const Scalar _tmp103 = Scalar(1.0) * _tmp59;
  const Scalar _tmp104 = _tmp103 - _tmp71;
  const Scalar _tmp105 = _tmp102 * _tmp104;
  const Scalar _tmp106 = -_tmp75 * _tmp97 + _tmp96;
  const Scalar _tmp107 = -_tmp105 * _tmp99 - _tmp106 * _tmp81 - _tmp54 * _tmp91 + _tmp95;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = _tmp78 * _tmp80;
  const Scalar _tmp110 = _tmp109 * _tmp98 + _tmp78 * _tmp94;
  const Scalar _tmp111 = -_tmp105 * _tmp110 + _tmp106 * _tmp109 - _tmp94;
  const Scalar _tmp112 = _tmp108 * _tmp82;
  const Scalar _tmp113 = _tmp107 * _tmp83;
  const Scalar _tmp114 = _tmp113 * (_tmp109 * _tmp77 - _tmp111 * _tmp112 - _tmp66);
  const Scalar _tmp115 = _tmp108 * (_tmp111 + _tmp114);
  const Scalar _tmp116 = _tmp80 * (-_tmp115 * _tmp79 - _tmp78);
  const Scalar _tmp117 = _tmp44 * _tmp65 * (_tmp115 * _tmp54 + _tmp116 * _tmp75 + Scalar(1.0));
  const Scalar _tmp118 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp119 = _tmp100 * _tmp105 + _tmp103;
  const Scalar _tmp120 = 0;
  const Scalar _tmp121 = Scalar(1.0) * _tmp80;
  const Scalar _tmp122 = Scalar(1.0) * _tmp102;
  const Scalar _tmp123 = _tmp104 * _tmp122 * _tmp80 * _tmp98 - _tmp106 * _tmp121;
  const Scalar _tmp124 = _tmp113 * (-_tmp112 * _tmp123 - _tmp121 * _tmp77);
  const Scalar _tmp125 = _tmp108 * (_tmp123 + _tmp124);
  const Scalar _tmp126 = _tmp80 * (-_tmp125 * _tmp79 + Scalar(1.0));
  const Scalar _tmp127 = _tmp43 * _tmp65 * (_tmp125 * _tmp54 + _tmp126 * _tmp75);
  const Scalar _tmp128 = -_tmp117 * fh1 - _tmp118 * _tmp65 * (_tmp120 * _tmp54 - _tmp120 * _tmp85) -
                         _tmp127 * fh1 - _tmp86 * fh1;
  const Scalar _tmp129 = Scalar(1.0) / (_tmp128);
  const Scalar _tmp130 = _tmp101 + _tmp47;
  const Scalar _tmp131 = _tmp105 * _tmp130;
  const Scalar _tmp132 = Scalar(1.0) / (_tmp103 - _tmp131 - _tmp50);
  const Scalar _tmp133 = _tmp130 * _tmp132;
  const Scalar _tmp134 = -_tmp121 * _tmp98 + _tmp124 * _tmp133 - _tmp125 * _tmp99;
  const Scalar _tmp135 = Scalar(1.0) * _tmp132;
  const Scalar _tmp136 = Scalar(1.0) * _tmp43 * (-_tmp122 * _tmp134 + _tmp124 * _tmp135);
  const Scalar _tmp137 = _tmp113 * _tmp135;
  const Scalar _tmp138 = _tmp130 * _tmp137 - _tmp84 * _tmp99;
  const Scalar _tmp139 = Scalar(1.0) * _tmp45 * (-_tmp122 * _tmp138 + _tmp137);
  const Scalar _tmp140 = _tmp119 * _tmp132;
  const Scalar _tmp141 = _tmp101 - _tmp120 * _tmp99 - _tmp130 * _tmp140;
  const Scalar _tmp142 = _tmp110 + _tmp114 * _tmp133 - _tmp115 * _tmp99;
  const Scalar _tmp143 = Scalar(1.0) * _tmp44 * (_tmp114 * _tmp135 - _tmp122 * _tmp142);
  const Scalar _tmp144 = _tmp90 + _tmp92;
  const Scalar _tmp145 = _tmp144 * fh1;
  const Scalar _tmp146 = -_tmp145 * _tmp43 - Scalar(40.024799999999999) * _tmp16 - _tmp22 * fv1;
  const Scalar _tmp147 = _tmp131 * _tmp135 + Scalar(1.0);
  const Scalar _tmp148 = _tmp105 * _tmp135;
  const Scalar _tmp149 = -Scalar(1.0) * _tmp122 * _tmp147 + Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = _tmp145 * _tmp44 + Scalar(40.024799999999999) * _tmp29 + _tmp33 * fv1;
  const Scalar _tmp151 = _tmp102 * _tmp130;
  const Scalar _tmp152 = Scalar(1.0) * _tmp135 * _tmp151 - Scalar(1.0) * _tmp135;
  const Scalar _tmp153 =
      Scalar(1.0) * _tmp118 * (-_tmp119 * _tmp135 - _tmp122 * _tmp141 + Scalar(1.0)) +
      _tmp136 * fh1 + _tmp139 * fh1 + _tmp143 * fh1 + _tmp146 * _tmp149 + _tmp150 * _tmp152;
  const Scalar _tmp154 = std::asinh(_tmp129 * _tmp153);
  const Scalar _tmp155 = Scalar(1.0) * _tmp154;
  const Scalar _tmp156 = _tmp144 * _tmp44;
  const Scalar _tmp157 = _tmp144 * _tmp43;
  const Scalar _tmp158 = std::pow(_tmp128, Scalar(-2));
  const Scalar _tmp159 = -_tmp117 - _tmp127 - _tmp86;
  const Scalar _tmp160 = _tmp158 * _tmp159;
  const Scalar _tmp161 =
      (_tmp129 * (_tmp136 + _tmp139 + _tmp143 - _tmp149 * _tmp157 + _tmp152 * _tmp156) -
       _tmp153 * _tmp160) /
      std::sqrt(Scalar(std::pow(_tmp153, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp162 = Scalar(1.4083112389913199) * _tmp154;
  const Scalar _tmp163 =
      -_tmp128 * _tmp162 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp56), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp60 - 1), Scalar(2))));
  const Scalar _tmp164 = Scalar(0.71007031138673404) * _tmp129;
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = Scalar(1.4083112389913199) * _tmp128;
  const Scalar _tmp167 = _tmp45 * _tmp84;
  const Scalar _tmp168 = _tmp167 * fh1;
  const Scalar _tmp169 = _tmp116 * _tmp44;
  const Scalar _tmp170 = _tmp118 * _tmp120;
  const Scalar _tmp171 = _tmp126 * _tmp43;
  const Scalar _tmp172 = -_tmp168 * _tmp81 + _tmp169 * fh1 - _tmp170 * _tmp81 + _tmp171 * fh1;
  const Scalar _tmp173 = Scalar(1.0) / (_tmp172);
  const Scalar _tmp174 = _tmp102 * _tmp134 * _tmp43;
  const Scalar _tmp175 = _tmp135 * _tmp150;
  const Scalar _tmp176 = _tmp102 * _tmp147;
  const Scalar _tmp177 = _tmp102 * _tmp138 * _tmp45;
  const Scalar _tmp178 = _tmp102 * _tmp44;
  const Scalar _tmp179 = _tmp142 * _tmp178;
  const Scalar _tmp180 = _tmp102 * _tmp118 * _tmp141 + _tmp146 * _tmp176 - _tmp151 * _tmp175 +
                         _tmp174 * fh1 + _tmp177 * fh1 + _tmp179 * fh1;
  const Scalar _tmp181 = std::asinh(_tmp173 * _tmp180);
  const Scalar _tmp182 = Scalar(1.0) * _tmp181;
  const Scalar _tmp183 = std::pow(_tmp172, Scalar(-2));
  const Scalar _tmp184 = -_tmp167 * _tmp81 + _tmp169 + _tmp171;
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = (_tmp173 * (-_tmp130 * _tmp135 * _tmp144 * _tmp178 - _tmp157 * _tmp176 +
                                     _tmp174 + _tmp177 + _tmp179) -
                          _tmp180 * _tmp185) /
                         std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp183 + 1));
  const Scalar _tmp187 = Scalar(1.4083112389913199) * _tmp184;
  const Scalar _tmp188 = Scalar(1.4083112389913199) * _tmp172;
  const Scalar _tmp189 = Scalar(0.71007031138673404) * _tmp173;
  const Scalar _tmp190 =
      -_tmp181 * _tmp188 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp69), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp72), Scalar(2))));
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = _tmp115 * _tmp44;
  const Scalar _tmp193 = _tmp125 * _tmp43;
  const Scalar _tmp194 = _tmp168 + _tmp170 + _tmp192 * fh1 + _tmp193 * fh1;
  const Scalar _tmp195 = Scalar(1.0) / (_tmp194);
  const Scalar _tmp196 = _tmp114 * _tmp132 * _tmp44;
  const Scalar _tmp197 = _tmp137 * _tmp45;
  const Scalar _tmp198 = _tmp124 * _tmp132 * _tmp43;
  const Scalar _tmp199 = _tmp118 * _tmp140 - _tmp146 * _tmp148 + _tmp175 - _tmp196 * fh1 -
                         _tmp197 * fh1 - _tmp198 * fh1;
  const Scalar _tmp200 = std::asinh(_tmp195 * _tmp199);
  const Scalar _tmp201 = Scalar(1.0) * _tmp200;
  const Scalar _tmp202 = std::pow(_tmp194, Scalar(-2));
  const Scalar _tmp203 = _tmp167 + _tmp192 + _tmp193;
  const Scalar _tmp204 = _tmp202 * _tmp203;
  const Scalar _tmp205 =
      (_tmp195 * (_tmp135 * _tmp156 + _tmp148 * _tmp157 - _tmp196 - _tmp197 - _tmp198) -
       _tmp199 * _tmp204) /
      std::sqrt(Scalar(std::pow(_tmp199, Scalar(2)) * _tmp202 + 1));
  const Scalar _tmp206 = Scalar(1.4083112389913199) * _tmp194;
  const Scalar _tmp207 =
      -_tmp200 * _tmp206 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp51), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp48 - 1), Scalar(2))));
  const Scalar _tmp208 = Scalar(0.71007031138673404) * _tmp195;
  const Scalar _tmp209 = _tmp207 * _tmp208;
  const Scalar _tmp210 = Scalar(1.4083112389913199) * _tmp203;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(1.4083112389913199) * fh1 *
                   (Scalar(1.0) * _tmp37 * _tmp4 * fv1 * std::cosh(_tmp3) -
                    (-Scalar(0.71007031138673404) * _tmp36 * _tmp4 +
                     _tmp38 * (Scalar(1.4083112389913199) * _tmp1 * _tmp37 - _tmp35)) *
                        std::cosh(_tmp39)) -
               Scalar(1.4083112389913199) * std::sinh(_tmp3) -
               Scalar(1.4083112389913199) * std::sinh(_tmp39);
  _res(1, 0) = Scalar(1.4083112389913199) * _tmp159 * (-std::sinh(_tmp155) - std::sinh(_tmp165)) +
               _tmp166 * (-Scalar(1.0) * _tmp161 * std::cosh(_tmp155) -
                          (-Scalar(0.71007031138673404) * _tmp160 * _tmp163 +
                           _tmp164 * (-_tmp159 * _tmp162 - _tmp161 * _tmp166)) *
                              std::cosh(_tmp165));
  _res(2, 0) = _tmp187 * (-std::sinh(_tmp182) - std::sinh(_tmp191)) +
               _tmp188 * (-Scalar(1.0) * _tmp186 * std::cosh(_tmp182) -
                          (-Scalar(0.71007031138673404) * _tmp185 * _tmp190 +
                           _tmp189 * (-_tmp181 * _tmp187 - _tmp186 * _tmp188)) *
                              std::cosh(_tmp191));
  _res(3, 0) = _tmp206 * (-Scalar(1.0) * _tmp205 * std::cosh(_tmp201) -
                          (-Scalar(0.71007031138673404) * _tmp204 * _tmp207 +
                           _tmp208 * (-_tmp200 * _tmp210 - _tmp205 * _tmp206)) *
                              std::cosh(_tmp209)) +
               _tmp210 * (-std::sinh(_tmp201) - std::sinh(_tmp209));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym