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
  // Total ops: 636

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (211)
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
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = 2 * _tmp2;
  const Scalar _tmp11 = _tmp10 * _tmp9;
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp13 = _tmp10 * _tmp6;
  const Scalar _tmp14 = 2 * _tmp0 * _tmp9;
  const Scalar _tmp15 = _tmp13 - _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp12 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp5;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp0 * _tmp10;
  const Scalar _tmp23 = _tmp7 * _tmp9;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp28 = _tmp25 + _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(0, 0);
  const Scalar _tmp31 = Scalar(1.0) / (fh1);
  const Scalar _tmp32 = _tmp31 * fv1;
  const Scalar _tmp33 = std::asinh(_tmp32);
  const Scalar _tmp34 = Scalar(9.6622558468725703) * _tmp33;
  const Scalar _tmp35 =
      -_tmp34 * fh1 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp30), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp19 - 1), Scalar(2))));
  const Scalar _tmp36 = Scalar(0.1034955) * _tmp31;
  const Scalar _tmp37 = _tmp35 * _tmp36;
  const Scalar _tmp38 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp39 =
      std::pow(Scalar(_tmp38 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = Scalar(1.0) * _tmp33;
  const Scalar _tmp41 = -_tmp12 + _tmp16;
  const Scalar _tmp42 = _tmp41 + _tmp5;
  const Scalar _tmp43 = Scalar(1.0) * _tmp42;
  const Scalar _tmp44 = -_tmp43;
  const Scalar _tmp45 = _tmp17 + _tmp4;
  const Scalar _tmp46 = _tmp44 + _tmp45;
  const Scalar _tmp47 = _tmp4 + _tmp41;
  const Scalar _tmp48 = Scalar(1.0) / (_tmp44 + _tmp47);
  const Scalar _tmp49 = _tmp25 - _tmp27;
  const Scalar _tmp50 = _tmp20 + _tmp49;
  const Scalar _tmp51 = _tmp21 + _tmp49;
  const Scalar _tmp52 = Scalar(1.0) * _tmp51;
  const Scalar _tmp53 = _tmp48 * (-_tmp50 + _tmp52);
  const Scalar _tmp54 = _tmp46 * _tmp53;
  const Scalar _tmp55 = _tmp20 + _tmp28;
  const Scalar _tmp56 = Scalar(1.0) / (_tmp52 - _tmp54 - _tmp55);
  const Scalar _tmp57 = Scalar(1.0) * _tmp56;
  const Scalar _tmp58 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp59 = _tmp58 + Scalar(-110.0);
  const Scalar _tmp60 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(125.0);
  const Scalar _tmp62 = std::pow(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp61, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp63 = _tmp59 * _tmp62;
  const Scalar _tmp64 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp65 = _tmp64 + Scalar(110.0);
  const Scalar _tmp66 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp67 = _tmp66 + Scalar(125.0);
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp65 * _tmp68;
  const Scalar _tmp70 = _tmp61 * _tmp62;
  const Scalar _tmp71 = Scalar(1.0) / (-_tmp63 + _tmp69 * _tmp70);
  const Scalar _tmp72 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp75 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp76 = _tmp74 - _tmp75;
  const Scalar _tmp77 = _tmp73 + _tmp76;
  const Scalar _tmp78 = _tmp69 * _tmp77;
  const Scalar _tmp79 = _tmp72 + _tmp76;
  const Scalar _tmp80 = _tmp71 * (_tmp63 * _tmp79 - _tmp70 * _tmp78);
  const Scalar _tmp81 = Scalar(1.0) * _tmp80;
  const Scalar _tmp82 = _tmp71 * (_tmp70 * _tmp77 - _tmp70 * _tmp79);
  const Scalar _tmp83 = _tmp53 * _tmp81 - Scalar(1.0) * _tmp82;
  const Scalar _tmp84 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp85 = _tmp84 + Scalar(-110.0);
  const Scalar _tmp86 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp87 = _tmp86 + Scalar(-125.0);
  const Scalar _tmp88 = std::pow(Scalar(std::pow(_tmp85, Scalar(2)) + std::pow(_tmp87, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp89 = _tmp87 * _tmp88;
  const Scalar _tmp90 = _tmp74 + _tmp75;
  const Scalar _tmp91 = _tmp72 + _tmp90;
  const Scalar _tmp92 = _tmp85 * _tmp88;
  const Scalar _tmp93 = _tmp69 * _tmp89 - _tmp92;
  const Scalar _tmp94 = -_tmp78 * _tmp89 - _tmp80 * _tmp93 + _tmp91 * _tmp92;
  const Scalar _tmp95 = -_tmp53 * _tmp94 + _tmp77 * _tmp89 - _tmp82 * _tmp93 - _tmp89 * _tmp91;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 =
      std::sqrt(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp67, Scalar(2))));
  const Scalar _tmp98 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp99 = _tmp68 * _tmp97;
  const Scalar _tmp100 = _tmp99 * (-_tmp42 * _tmp67 * _tmp98 + _tmp51 * _tmp65 * _tmp98);
  const Scalar _tmp101 = _tmp71 * (_tmp100 * _tmp70 + _tmp47 * _tmp70 - _tmp50 * _tmp63);
  const Scalar _tmp102 = _tmp100 * _tmp89 - _tmp101 * _tmp93 + _tmp45 * _tmp89 - _tmp55 * _tmp92;
  const Scalar _tmp103 = _tmp102 * _tmp96;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp105 = _tmp104 * _tmp95;
  const Scalar _tmp106 = _tmp105 * (-Scalar(1.0) * _tmp101 - _tmp103 * _tmp83);
  const Scalar _tmp107 = _tmp46 * _tmp56;
  const Scalar _tmp108 = _tmp96 * (_tmp106 + _tmp83);
  const Scalar _tmp109 = _tmp106 * _tmp107 - _tmp108 * _tmp94 - _tmp81;
  const Scalar _tmp110 = Scalar(1.0) * _tmp48;
  const Scalar _tmp111 = _tmp19 + Scalar(110.0);
  const Scalar _tmp112 = _tmp30 + Scalar(-125.0);
  const Scalar _tmp113 =
      std::pow(Scalar(std::pow(_tmp111, Scalar(2)) + std::pow(_tmp112, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp114 = _tmp111 * _tmp113;
  const Scalar _tmp115 = Scalar(1.0) * _tmp114 * (_tmp106 * _tmp57 - _tmp109 * _tmp110);
  const Scalar _tmp116 = _tmp43 * _tmp53 + _tmp52;
  const Scalar _tmp117 = _tmp116 * _tmp56;
  const Scalar _tmp118 = 0;
  const Scalar _tmp119 = -_tmp117 * _tmp46 - _tmp118 * _tmp94 + _tmp44;
  const Scalar _tmp120 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp121 = _tmp112 * _tmp113;
  const Scalar _tmp122 = _tmp73 + _tmp90;
  const Scalar _tmp123 = _tmp122 * fh1;
  const Scalar _tmp124 = _tmp121 * _tmp123 + Scalar(2.3544) * _tmp24 + _tmp29 * fv1;
  const Scalar _tmp125 = _tmp46 * _tmp57;
  const Scalar _tmp126 = _tmp125 * _tmp48;
  const Scalar _tmp127 = Scalar(1.0) * _tmp126 - Scalar(1.0) * _tmp57;
  const Scalar _tmp128 = -_tmp114 * _tmp123 - Scalar(2.3544) * _tmp15 - _tmp18 * fv1;
  const Scalar _tmp129 = _tmp54 * _tmp57 + Scalar(1.0);
  const Scalar _tmp130 = _tmp53 * _tmp57;
  const Scalar _tmp131 = -Scalar(1.0) * _tmp110 * _tmp129 + Scalar(1.0) * _tmp130;
  const Scalar _tmp132 = Scalar(1.0) * _tmp104;
  const Scalar _tmp133 = _tmp105 * _tmp125 - _tmp132 * _tmp94;
  const Scalar _tmp134 = _tmp105 * _tmp57;
  const Scalar _tmp135 = _tmp114 * _tmp29 - _tmp121 * _tmp18;
  const Scalar _tmp136 = Scalar(1.0) * _tmp135;
  const Scalar _tmp137 = _tmp136 * (-_tmp110 * _tmp133 + _tmp134);
  const Scalar _tmp138 = _tmp69 * _tmp80 + _tmp78;
  const Scalar _tmp139 = -_tmp138 * _tmp53 + _tmp69 * _tmp82 - _tmp77;
  const Scalar _tmp140 = _tmp105 * (-_tmp100 + _tmp101 * _tmp69 - _tmp103 * _tmp139);
  const Scalar _tmp141 = _tmp96 * (_tmp139 + _tmp140);
  const Scalar _tmp142 = _tmp107 * _tmp140 + _tmp138 - _tmp141 * _tmp94;
  const Scalar _tmp143 = Scalar(1.0) * _tmp121 * (-_tmp110 * _tmp142 + _tmp140 * _tmp57);
  const Scalar _tmp144 =
      _tmp115 * fh1 +
      Scalar(1.0) * _tmp120 * (-_tmp110 * _tmp119 - _tmp116 * _tmp57 + Scalar(1.0)) +
      _tmp124 * _tmp127 + _tmp128 * _tmp131 + _tmp137 * fh1 + _tmp143 * fh1;
  const Scalar _tmp145 = -_tmp108 * _tmp93 + Scalar(1.0);
  const Scalar _tmp146 = _tmp70 * _tmp71;
  const Scalar _tmp147 = _tmp114 * _tmp99 * (_tmp108 * _tmp89 + _tmp145 * _tmp146);
  const Scalar _tmp148 = _tmp146 * _tmp93;
  const Scalar _tmp149 = _tmp135 * _tmp99 * (-_tmp132 * _tmp148 + _tmp132 * _tmp89);
  const Scalar _tmp150 = -_tmp141 * _tmp93 - _tmp69;
  const Scalar _tmp151 = _tmp121 * _tmp99 * (_tmp141 * _tmp89 + _tmp146 * _tmp150 + Scalar(1.0));
  const Scalar _tmp152 = -_tmp120 * _tmp99 * (-_tmp118 * _tmp148 + _tmp118 * _tmp89) -
                         _tmp147 * fh1 - _tmp149 * fh1 - _tmp151 * fh1;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = std::asinh(_tmp144 * _tmp153);
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp152;
  const Scalar _tmp156 =
      -_tmp154 * _tmp155 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp64 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp66 - 1), Scalar(2))));
  const Scalar _tmp157 = Scalar(0.1034955) * _tmp153;
  const Scalar _tmp158 = _tmp156 * _tmp157;
  const Scalar _tmp159 = Scalar(1.0) * _tmp154;
  const Scalar _tmp160 = -_tmp147 - _tmp149 - _tmp151;
  const Scalar _tmp161 = Scalar(9.6622558468725703) * _tmp160;
  const Scalar _tmp162 = std::pow(_tmp152, Scalar(-2));
  const Scalar _tmp163 = _tmp160 * _tmp162;
  const Scalar _tmp164 = _tmp114 * _tmp122;
  const Scalar _tmp165 = _tmp121 * _tmp122;
  const Scalar _tmp166 = (-_tmp144 * _tmp163 + _tmp153 * (_tmp115 + _tmp127 * _tmp165 -
                                                          _tmp131 * _tmp164 + _tmp137 + _tmp143)) /
                         std::sqrt(Scalar(std::pow(_tmp144, Scalar(2)) * _tmp162 + 1));
  const Scalar _tmp167 = _tmp118 * _tmp120;
  const Scalar _tmp168 = _tmp71 * _tmp93;
  const Scalar _tmp169 = _tmp114 * _tmp145 * _tmp71;
  const Scalar _tmp170 = _tmp121 * _tmp150 * _tmp71;
  const Scalar _tmp171 = _tmp104 * _tmp136;
  const Scalar _tmp172 = _tmp171 * fh1;
  const Scalar _tmp173 = -_tmp167 * _tmp168 - _tmp168 * _tmp172 + _tmp169 * fh1 + _tmp170 * fh1;
  const Scalar _tmp174 = Scalar(1.0) / (_tmp173);
  const Scalar _tmp175 = _tmp129 * _tmp48;
  const Scalar _tmp176 = _tmp124 * _tmp57;
  const Scalar _tmp177 = _tmp133 * _tmp135 * _tmp48;
  const Scalar _tmp178 = _tmp109 * _tmp114 * _tmp48;
  const Scalar _tmp179 = _tmp121 * _tmp142 * _tmp48;
  const Scalar _tmp180 = _tmp119 * _tmp120 * _tmp48 + _tmp128 * _tmp175 -
                         _tmp176 * _tmp46 * _tmp48 + _tmp177 * fh1 + _tmp178 * fh1 + _tmp179 * fh1;
  const Scalar _tmp181 = std::asinh(_tmp174 * _tmp180);
  const Scalar _tmp182 = Scalar(1.0) * _tmp181;
  const Scalar _tmp183 = std::pow(_tmp173, Scalar(-2));
  const Scalar _tmp184 = -_tmp168 * _tmp171 + _tmp169 + _tmp170;
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 =
      (_tmp174 * (-_tmp126 * _tmp165 - _tmp164 * _tmp175 + _tmp177 + _tmp178 + _tmp179) -
       _tmp180 * _tmp185) /
      std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp183 + 1));
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp173;
  const Scalar _tmp188 =
      -_tmp181 * _tmp187 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp58), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp60 - 1), Scalar(2))));
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp184;
  const Scalar _tmp190 = Scalar(0.1034955) * _tmp174;
  const Scalar _tmp191 = _tmp188 * _tmp190;
  const Scalar _tmp192 = _tmp121 * _tmp140 * _tmp56;
  const Scalar _tmp193 = _tmp106 * _tmp114 * _tmp56;
  const Scalar _tmp194 = _tmp134 * _tmp135;
  const Scalar _tmp195 = _tmp117 * _tmp120 - _tmp128 * _tmp130 + _tmp176 - _tmp192 * fh1 -
                         _tmp193 * fh1 - _tmp194 * fh1;
  const Scalar _tmp196 = _tmp108 * _tmp114;
  const Scalar _tmp197 = _tmp121 * _tmp141;
  const Scalar _tmp198 = _tmp167 + _tmp172 + _tmp196 * fh1 + _tmp197 * fh1;
  const Scalar _tmp199 = Scalar(1.0) / (_tmp198);
  const Scalar _tmp200 = std::asinh(_tmp195 * _tmp199);
  const Scalar _tmp201 = Scalar(1.0) * _tmp200;
  const Scalar _tmp202 = Scalar(9.6622558468725703) * _tmp198;
  const Scalar _tmp203 =
      -_tmp200 * _tmp202 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp84), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp86), Scalar(2))));
  const Scalar _tmp204 = Scalar(0.1034955) * _tmp199;
  const Scalar _tmp205 = _tmp203 * _tmp204;
  const Scalar _tmp206 = _tmp171 + _tmp196 + _tmp197;
  const Scalar _tmp207 = Scalar(9.6622558468725703) * _tmp206;
  const Scalar _tmp208 = std::pow(_tmp198, Scalar(-2));
  const Scalar _tmp209 = _tmp206 * _tmp208;
  const Scalar _tmp210 = (-_tmp195 * _tmp209 + _tmp199 * (_tmp130 * _tmp164 + _tmp165 * _tmp57 -
                                                          _tmp192 - _tmp193 - _tmp194)) /
                         std::sqrt(Scalar(std::pow(_tmp195, Scalar(2)) * _tmp208 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(9.6622558468725703) * fh1 *
                   (Scalar(1.0) * _tmp38 * _tmp39 * fv1 * std::cosh(_tmp40) -
                    (-Scalar(0.1034955) * _tmp35 * _tmp38 +
                     _tmp36 * (Scalar(9.6622558468725703) * _tmp32 * _tmp39 - _tmp34)) *
                        std::cosh(_tmp37)) -
               Scalar(9.6622558468725703) * std::sinh(_tmp37) -
               Scalar(9.6622558468725703) * std::sinh(_tmp40);
  _res(1, 0) = _tmp155 * (-Scalar(1.0) * _tmp166 * std::cosh(_tmp159) -
                          (-Scalar(0.1034955) * _tmp156 * _tmp163 +
                           _tmp157 * (-_tmp154 * _tmp161 - _tmp155 * _tmp166)) *
                              std::cosh(_tmp158)) +
               _tmp161 * (-std::sinh(_tmp158) - std::sinh(_tmp159));
  _res(2, 0) = _tmp187 * (-Scalar(1.0) * _tmp186 * std::cosh(_tmp182) -
                          (-Scalar(0.1034955) * _tmp185 * _tmp188 +
                           _tmp190 * (-_tmp181 * _tmp189 - _tmp186 * _tmp187)) *
                              std::cosh(_tmp191)) +
               _tmp189 * (-std::sinh(_tmp182) - std::sinh(_tmp191));
  _res(3, 0) = _tmp202 * (-Scalar(1.0) * _tmp210 * std::cosh(_tmp201) -
                          (-Scalar(0.1034955) * _tmp203 * _tmp209 +
                           _tmp204 * (-_tmp200 * _tmp207 - _tmp202 * _tmp210)) *
                              std::cosh(_tmp205)) +
               _tmp207 * (-std::sinh(_tmp201) - std::sinh(_tmp205));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
