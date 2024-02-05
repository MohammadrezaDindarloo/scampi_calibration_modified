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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl0
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl0(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 644

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (213)
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
  const Scalar _tmp8 = 2 * _tmp3;
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 = _tmp1 * _tmp4;
  const Scalar _tmp11 = -_tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp1 * _tmp8;
  const Scalar _tmp23 = _tmp0 * _tmp4;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = Scalar(1.0) / (fh1);
  const Scalar _tmp31 = _tmp30 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * _tmp32;
  const Scalar _tmp34 =
      -_tmp33 * fh1 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp18 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp29 - 1), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.1034955) * _tmp30;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(1.0) * _tmp32;
  const Scalar _tmp40 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp41 = _tmp25 + _tmp26;
  const Scalar _tmp42 = _tmp21 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp44 = _tmp43 + Scalar(1.7965602546229);
  const Scalar _tmp45 = _tmp12 + _tmp15;
  const Scalar _tmp46 = _tmp45 + _tmp7;
  const Scalar _tmp47 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp48 = _tmp47 + Scalar(-4.83288938413423);
  const Scalar _tmp49 = std::pow(Scalar(std::pow(_tmp44, Scalar(2)) + std::pow(_tmp48, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp50 = _tmp44 * _tmp49;
  const Scalar _tmp51 = _tmp20 + _tmp27;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(-2.5193355532036801);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp55 = _tmp16 + _tmp6;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 + Scalar(8.3885017487099702);
  const Scalar _tmp58 = _tmp54 * _tmp57;
  const Scalar _tmp59 = _tmp48 * _tmp49;
  const Scalar _tmp60 = _tmp50 * _tmp58 - _tmp59;
  const Scalar _tmp61 = _tmp45 + _tmp6;
  const Scalar _tmp62 = _tmp61 + position_vector(1, 0);
  const Scalar _tmp63 = _tmp62 + Scalar(-4.7744369927459998);
  const Scalar _tmp64 = _tmp20 + _tmp41;
  const Scalar _tmp65 = _tmp64 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 + Scalar(-2.7171519410699099);
  const Scalar _tmp67 = std::pow(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp66, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp68 = _tmp63 * _tmp67;
  const Scalar _tmp69 = _tmp66 * _tmp67;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp58 * _tmp69 - _tmp68);
  const Scalar _tmp71 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp72 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp19 + Scalar(-0.010999999999999999);
  const Scalar _tmp73 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp74 = _tmp72 - _tmp73;
  const Scalar _tmp75 = _tmp71 + _tmp74;
  const Scalar _tmp76 = _tmp58 * _tmp75;
  const Scalar _tmp77 = _tmp72 + _tmp73;
  const Scalar _tmp78 = _tmp71 + _tmp77;
  const Scalar _tmp79 = _tmp70 * (_tmp68 * _tmp78 - _tmp69 * _tmp76);
  const Scalar _tmp80 = -_tmp71;
  const Scalar _tmp81 = _tmp77 + _tmp80;
  const Scalar _tmp82 = -_tmp50 * _tmp76 + _tmp59 * _tmp81 - _tmp60 * _tmp79;
  const Scalar _tmp83 = Scalar(1.0) * _tmp55;
  const Scalar _tmp84 = -_tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp61 + _tmp84);
  const Scalar _tmp86 = Scalar(1.0) * _tmp51;
  const Scalar _tmp87 = _tmp85 * (-_tmp64 + _tmp86);
  const Scalar _tmp88 = _tmp69 * _tmp75 - _tmp69 * _tmp78;
  const Scalar _tmp89 = _tmp60 * _tmp70;
  const Scalar _tmp90 = _tmp50 * _tmp75 - _tmp50 * _tmp81 - _tmp82 * _tmp87 - _tmp88 * _tmp89;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = _tmp83 * _tmp87 + _tmp86;
  const Scalar _tmp93 = 0;
  const Scalar _tmp94 = _tmp91 * _tmp93;
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp96 = _tmp54 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp98 = _tmp96 * (_tmp51 * _tmp57 * _tmp97 - _tmp53 * _tmp55 * _tmp97);
  const Scalar _tmp99 = _tmp61 * _tmp69 - _tmp64 * _tmp68 + _tmp69 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp70;
  const Scalar _tmp101 = Scalar(1.0) * _tmp79;
  const Scalar _tmp102 = -_tmp100 * _tmp88 + _tmp101 * _tmp87;
  const Scalar _tmp103 = -_tmp42 * _tmp59 + _tmp46 * _tmp50 + _tmp50 * _tmp98 - _tmp89 * _tmp99;
  const Scalar _tmp104 = _tmp103 * _tmp91;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp106 = _tmp105 * _tmp90;
  const Scalar _tmp107 = _tmp106 * (-_tmp100 * _tmp99 - _tmp102 * _tmp104);
  const Scalar _tmp108 = _tmp102 + _tmp107;
  const Scalar _tmp109 = _tmp108 * _tmp91;
  const Scalar _tmp110 = _tmp70 * (-_tmp109 * _tmp60 + Scalar(1.0));
  const Scalar _tmp111 = _tmp29 + Scalar(1.9874742031097401);
  const Scalar _tmp112 = _tmp18 + Scalar(8.3196563720703107);
  const Scalar _tmp113 =
      std::pow(Scalar(std::pow(_tmp111, Scalar(2)) + std::pow(_tmp112, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp114 = _tmp112 * _tmp113;
  const Scalar _tmp115 = _tmp114 * _tmp96 * (_tmp109 * _tmp50 + _tmp110 * _tmp69);
  const Scalar _tmp116 = _tmp111 * _tmp113;
  const Scalar _tmp117 = _tmp114 * _tmp28 - _tmp116 * _tmp17;
  const Scalar _tmp118 = Scalar(1.0) * _tmp105;
  const Scalar _tmp119 =
      _tmp117 * _tmp96 * (-_tmp100 * _tmp105 * _tmp60 * _tmp69 + _tmp118 * _tmp50);
  const Scalar _tmp120 = _tmp58 * _tmp79 + _tmp76;
  const Scalar _tmp121 = _tmp58 * _tmp70;
  const Scalar _tmp122 = -_tmp120 * _tmp87 + _tmp121 * _tmp88 - _tmp75;
  const Scalar _tmp123 = _tmp106 * (-_tmp104 * _tmp122 + _tmp121 * _tmp99 - _tmp98);
  const Scalar _tmp124 = _tmp91 * (_tmp122 + _tmp123);
  const Scalar _tmp125 = _tmp70 * (-_tmp124 * _tmp60 - _tmp58);
  const Scalar _tmp126 = _tmp116 * _tmp96 * (_tmp124 * _tmp50 + _tmp125 * _tmp69 + Scalar(1.0));
  const Scalar _tmp127 = -_tmp115 * fh1 - _tmp119 * fh1 - _tmp126 * fh1 -
                         _tmp40 * _tmp96 * (_tmp50 * _tmp94 - _tmp69 * _tmp89 * _tmp94);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp74 + _tmp80;
  const Scalar _tmp130 = _tmp129 * fh1;
  const Scalar _tmp131 = _tmp116 * _tmp130 + Scalar(3.29616) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp132 = _tmp46 + _tmp84;
  const Scalar _tmp133 = _tmp132 * _tmp87;
  const Scalar _tmp134 = Scalar(1.0) / (-_tmp133 - _tmp42 + _tmp86);
  const Scalar _tmp135 = Scalar(1.0) * _tmp134;
  const Scalar _tmp136 = _tmp132 * _tmp85;
  const Scalar _tmp137 = Scalar(1.0) * _tmp135 * _tmp136 - Scalar(1.0) * _tmp135;
  const Scalar _tmp138 = _tmp132 * _tmp134;
  const Scalar _tmp139 = _tmp120 + _tmp123 * _tmp138 - _tmp124 * _tmp82;
  const Scalar _tmp140 = Scalar(1.0) * _tmp85;
  const Scalar _tmp141 = Scalar(1.0) * _tmp116 * (_tmp123 * _tmp135 - _tmp139 * _tmp140);
  const Scalar _tmp142 = _tmp134 * _tmp92;
  const Scalar _tmp143 = _tmp82 * _tmp91;
  const Scalar _tmp144 = _tmp85 * (-_tmp132 * _tmp142 - _tmp143 * _tmp93 + _tmp84);
  const Scalar _tmp145 = -_tmp101 + _tmp107 * _tmp138 - _tmp108 * _tmp143;
  const Scalar _tmp146 = Scalar(1.0) * _tmp114 * (_tmp107 * _tmp135 - _tmp140 * _tmp145);
  const Scalar _tmp147 = _tmp106 * _tmp135;
  const Scalar _tmp148 = -_tmp118 * _tmp82 + _tmp132 * _tmp147;
  const Scalar _tmp149 = Scalar(1.0) * _tmp117;
  const Scalar _tmp150 = _tmp149 * (-_tmp140 * _tmp148 + _tmp147);
  const Scalar _tmp151 = -Scalar(3.29616) * _tmp11 - _tmp114 * _tmp130 - _tmp17 * fv1;
  const Scalar _tmp152 = _tmp133 * _tmp135 + Scalar(1.0);
  const Scalar _tmp153 = _tmp135 * _tmp87;
  const Scalar _tmp154 = -Scalar(1.0) * _tmp140 * _tmp152 + Scalar(1.0) * _tmp153;
  const Scalar _tmp155 =
      _tmp131 * _tmp137 + _tmp141 * fh1 + _tmp146 * fh1 + _tmp150 * fh1 + _tmp151 * _tmp154 +
      Scalar(1.0) * _tmp40 * (-_tmp135 * _tmp92 - Scalar(1.0) * _tmp144 + Scalar(1.0));
  const Scalar _tmp156 = std::asinh(_tmp128 * _tmp155);
  const Scalar _tmp157 = Scalar(1.0) * _tmp156;
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp159 =
      -_tmp156 * _tmp158 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp52), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp56 - 1), Scalar(2))));
  const Scalar _tmp160 = Scalar(0.1034955) * _tmp128;
  const Scalar _tmp161 = _tmp159 * _tmp160;
  const Scalar _tmp162 = -_tmp115 - _tmp119 - _tmp126;
  const Scalar _tmp163 = Scalar(9.6622558468725703) * _tmp162;
  const Scalar _tmp164 = _tmp116 * _tmp129;
  const Scalar _tmp165 = _tmp114 * _tmp129;
  const Scalar _tmp166 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp167 = _tmp162 * _tmp166;
  const Scalar _tmp168 =
      (_tmp128 * (_tmp137 * _tmp164 + _tmp141 + _tmp146 + _tmp150 - _tmp154 * _tmp165) -
       _tmp155 * _tmp167) /
      std::sqrt(Scalar(std::pow(_tmp155, Scalar(2)) * _tmp166 + 1));
  const Scalar _tmp169 = _tmp152 * _tmp85;
  const Scalar _tmp170 = _tmp131 * _tmp135;
  const Scalar _tmp171 = _tmp114 * _tmp145 * _tmp85;
  const Scalar _tmp172 = _tmp116 * _tmp85;
  const Scalar _tmp173 = _tmp139 * _tmp172;
  const Scalar _tmp174 = _tmp117 * _tmp148 * _tmp85;
  const Scalar _tmp175 = -_tmp136 * _tmp170 + _tmp144 * _tmp40 + _tmp151 * _tmp169 + _tmp171 * fh1 +
                         _tmp173 * fh1 + _tmp174 * fh1;
  const Scalar _tmp176 = _tmp40 * _tmp94;
  const Scalar _tmp177 = _tmp116 * _tmp125;
  const Scalar _tmp178 = _tmp105 * _tmp149;
  const Scalar _tmp179 = _tmp178 * fh1;
  const Scalar _tmp180 = _tmp110 * _tmp114;
  const Scalar _tmp181 = -_tmp176 * _tmp89 + _tmp177 * fh1 - _tmp179 * _tmp89 + _tmp180 * fh1;
  const Scalar _tmp182 = Scalar(1.0) / (_tmp181);
  const Scalar _tmp183 = std::asinh(_tmp175 * _tmp182);
  const Scalar _tmp184 = Scalar(1.0) * _tmp183;
  const Scalar _tmp185 = std::pow(_tmp181, Scalar(-2));
  const Scalar _tmp186 = _tmp177 - _tmp178 * _tmp89 + _tmp180;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 =
      (-_tmp175 * _tmp187 + _tmp182 * (-_tmp129 * _tmp132 * _tmp135 * _tmp172 - _tmp165 * _tmp169 +
                                       _tmp171 + _tmp173 + _tmp174)) /
      std::sqrt(Scalar(std::pow(_tmp175, Scalar(2)) * _tmp185 + 1));
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp183;
  const Scalar _tmp190 =
      -_tmp181 * _tmp189 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp62), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp65), Scalar(2))));
  const Scalar _tmp191 = Scalar(9.6622558468725703) * _tmp181;
  const Scalar _tmp192 = Scalar(0.1034955) * _tmp182;
  const Scalar _tmp193 = _tmp190 * _tmp192;
  const Scalar _tmp194 = _tmp107 * _tmp114 * _tmp134;
  const Scalar _tmp195 = _tmp116 * _tmp123 * _tmp134;
  const Scalar _tmp196 = _tmp117 * _tmp147;
  const Scalar _tmp197 = _tmp142 * _tmp40 - _tmp151 * _tmp153 + _tmp170 - _tmp194 * fh1 -
                         _tmp195 * fh1 - _tmp196 * fh1;
  const Scalar _tmp198 = _tmp109 * _tmp114;
  const Scalar _tmp199 = _tmp116 * _tmp124;
  const Scalar _tmp200 = _tmp176 + _tmp179 + _tmp198 * fh1 + _tmp199 * fh1;
  const Scalar _tmp201 = Scalar(1.0) / (_tmp200);
  const Scalar _tmp202 = std::asinh(_tmp197 * _tmp201);
  const Scalar _tmp203 = Scalar(9.6622558468725703) * _tmp200;
  const Scalar _tmp204 =
      -_tmp202 * _tmp203 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp47), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp43 - 1), Scalar(2))));
  const Scalar _tmp205 = Scalar(0.1034955) * _tmp201;
  const Scalar _tmp206 = _tmp204 * _tmp205;
  const Scalar _tmp207 = Scalar(1.0) * _tmp202;
  const Scalar _tmp208 = _tmp178 + _tmp198 + _tmp199;
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp208;
  const Scalar _tmp210 = std::pow(_tmp200, Scalar(-2));
  const Scalar _tmp211 = _tmp208 * _tmp210;
  const Scalar _tmp212 = (-_tmp197 * _tmp211 + _tmp201 * (_tmp135 * _tmp164 + _tmp153 * _tmp165 -
                                                          _tmp194 - _tmp195 - _tmp196)) /
                         std::sqrt(Scalar(std::pow(_tmp197, Scalar(2)) * _tmp210 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(9.6622558468725703) * fh1 *
                   (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp39) -
                    (-Scalar(0.1034955) * _tmp34 * _tmp37 +
                     _tmp35 * (Scalar(9.6622558468725703) * _tmp31 * _tmp38 - _tmp33)) *
                        std::cosh(_tmp36)) -
               Scalar(9.6622558468725703) * std::sinh(_tmp36) -
               Scalar(9.6622558468725703) * std::sinh(_tmp39);
  _res(1, 0) = _tmp158 * (-Scalar(1.0) * _tmp168 * std::cosh(_tmp157) -
                          (-Scalar(0.1034955) * _tmp159 * _tmp167 +
                           _tmp160 * (-_tmp156 * _tmp163 - _tmp158 * _tmp168)) *
                              std::cosh(_tmp161)) +
               _tmp163 * (-std::sinh(_tmp157) - std::sinh(_tmp161));
  _res(2, 0) = Scalar(9.6622558468725703) * _tmp186 * (-std::sinh(_tmp184) - std::sinh(_tmp193)) +
               _tmp191 * (-Scalar(1.0) * _tmp188 * std::cosh(_tmp184) -
                          (-Scalar(0.1034955) * _tmp187 * _tmp190 +
                           _tmp192 * (-_tmp186 * _tmp189 - _tmp188 * _tmp191)) *
                              std::cosh(_tmp193));
  _res(3, 0) = _tmp203 * (-Scalar(1.0) * _tmp212 * std::cosh(_tmp207) -
                          (-Scalar(0.1034955) * _tmp204 * _tmp211 +
                           _tmp205 * (-_tmp202 * _tmp209 - _tmp203 * _tmp212)) *
                              std::cosh(_tmp206)) +
               _tmp209 * (-std::sinh(_tmp206) - std::sinh(_tmp207));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
