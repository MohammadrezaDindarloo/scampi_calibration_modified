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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl11
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 599

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (192)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp10 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp12 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp13 = _tmp2 * _tmp6;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp15;
  const Scalar _tmp17 = -_tmp11 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp8;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp3 * _tmp5;
  const Scalar _tmp23 = _tmp1 * _tmp6;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp28 = _tmp25 + _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(0, 0);
  const Scalar _tmp31 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = Scalar(1.0) * _tmp0 /
                        std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp34 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp35 = _tmp25 - _tmp27;
  const Scalar _tmp36 = _tmp20 + _tmp35;
  const Scalar _tmp37 = Scalar(1.0) * _tmp36;
  const Scalar _tmp38 = -_tmp8;
  const Scalar _tmp39 = _tmp11 + _tmp38;
  const Scalar _tmp40 = _tmp16 + _tmp39;
  const Scalar _tmp41 = Scalar(1.0) * _tmp40;
  const Scalar _tmp42 = -_tmp41;
  const Scalar _tmp43 = _tmp11 + _tmp16 + _tmp8;
  const Scalar _tmp44 = Scalar(1.0) / (_tmp42 + _tmp43);
  const Scalar _tmp45 = _tmp20 + _tmp28;
  const Scalar _tmp46 = _tmp44 * (_tmp37 - _tmp45);
  const Scalar _tmp47 = _tmp37 + _tmp41 * _tmp46;
  const Scalar _tmp48 = _tmp17 + _tmp38;
  const Scalar _tmp49 = _tmp42 + _tmp48;
  const Scalar _tmp50 = _tmp46 * _tmp49;
  const Scalar _tmp51 = _tmp21 + _tmp35;
  const Scalar _tmp52 = Scalar(1.0) / (_tmp37 - _tmp50 - _tmp51);
  const Scalar _tmp53 = Scalar(1.0) * _tmp52;
  const Scalar _tmp54 = _tmp47 * _tmp52;
  const Scalar _tmp55 = 0;
  const Scalar _tmp56 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp57 = -_tmp56;
  const Scalar _tmp58 = -Scalar(0.010999999999999999) * _tmp26 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp59 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp60 = _tmp58 - _tmp59;
  const Scalar _tmp61 = _tmp57 + _tmp60;
  const Scalar _tmp62 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp63 = _tmp62 + Scalar(1.9874742031097401);
  const Scalar _tmp64 = _tmp48 + position_vector(1, 0);
  const Scalar _tmp65 = _tmp64 + Scalar(8.3196563720703107);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp63 * _tmp66;
  const Scalar _tmp68 = _tmp65 * _tmp66;
  const Scalar _tmp69 = _tmp58 + _tmp59;
  const Scalar _tmp70 = _tmp56 + _tmp69;
  const Scalar _tmp71 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp72 = _tmp71 + Scalar(-4.7744369927459998);
  const Scalar _tmp73 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp74 = _tmp73 + Scalar(-2.7171519410699099);
  const Scalar _tmp75 = std::pow(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp74, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp72 * _tmp75;
  const Scalar _tmp77 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp78 = _tmp77 + Scalar(-4.83288938413423);
  const Scalar _tmp79 = _tmp36 + position_vector(0, 0);
  const Scalar _tmp80 = _tmp79 + Scalar(1.7965602546229);
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp78 * _tmp81;
  const Scalar _tmp83 = _tmp57 + _tmp69;
  const Scalar _tmp84 = _tmp74 * _tmp75;
  const Scalar _tmp85 = _tmp83 * _tmp84;
  const Scalar _tmp86 = _tmp70 * _tmp76 - _tmp82 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (-_tmp76 + _tmp82 * _tmp84);
  const Scalar _tmp88 = _tmp67 * _tmp82 - _tmp68;
  const Scalar _tmp89 = _tmp87 * _tmp88;
  const Scalar _tmp90 = _tmp82 * _tmp83;
  const Scalar _tmp91 = _tmp61 * _tmp68 - _tmp67 * _tmp90 - _tmp86 * _tmp89;
  const Scalar _tmp92 = -_tmp70 * _tmp84 + _tmp85;
  const Scalar _tmp93 = -_tmp46 * _tmp91 - _tmp61 * _tmp67 + _tmp67 * _tmp83 - _tmp89 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp91 * _tmp94;
  const Scalar _tmp96 = _tmp44 * (_tmp42 - _tmp49 * _tmp54 - _tmp55 * _tmp95);
  const Scalar _tmp97 = -Scalar(1.0) * _tmp47 * _tmp53 - Scalar(1.0) * _tmp96 + Scalar(1.0);
  const Scalar _tmp98 = _tmp19 + Scalar(8.3885017487099702);
  const Scalar _tmp99 = _tmp30 + Scalar(-2.5193355532036801);
  const Scalar _tmp100 = std::pow(Scalar(std::pow(_tmp98, Scalar(2)) + std::pow(_tmp99, Scalar(2))),
                                  Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp101 = _tmp100 * _tmp98;
  const Scalar _tmp102 = fh1 * (_tmp56 + _tmp60);
  const Scalar _tmp103 = -_tmp101 * _tmp102 - Scalar(5.1796800000000003) * _tmp14 - _tmp18 * fv1;
  const Scalar _tmp104 = _tmp46 * _tmp53;
  const Scalar _tmp105 = _tmp44 * (_tmp50 * _tmp53 + Scalar(1.0));
  const Scalar _tmp106 = Scalar(1.0) * _tmp104 - Scalar(1.0) * _tmp105;
  const Scalar _tmp107 =
      std::sqrt(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp80, Scalar(2))));
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = _tmp107 * _tmp81;
  const Scalar _tmp110 = _tmp109 * (_tmp108 * _tmp36 * _tmp78 - _tmp108 * _tmp40 * _tmp80);
  const Scalar _tmp111 = _tmp110 * _tmp84 + _tmp43 * _tmp84 - _tmp45 * _tmp76;
  const Scalar _tmp112 = _tmp110 * _tmp67 - _tmp111 * _tmp89 + _tmp48 * _tmp67 - _tmp51 * _tmp68;
  const Scalar _tmp113 = Scalar(1.0) / (_tmp112);
  const Scalar _tmp114 = _tmp113 * _tmp93;
  const Scalar _tmp115 = _tmp114 * _tmp53;
  const Scalar _tmp116 = Scalar(1.0) * _tmp113;
  const Scalar _tmp117 = _tmp115 * _tmp49 - _tmp116 * _tmp91;
  const Scalar _tmp118 = Scalar(1.0) * _tmp44;
  const Scalar _tmp119 = _tmp100 * _tmp99;
  const Scalar _tmp120 = fh1 * (_tmp101 * _tmp29 - _tmp119 * _tmp18);
  const Scalar _tmp121 = _tmp82 * _tmp87;
  const Scalar _tmp122 = _tmp121 * _tmp86 + _tmp90;
  const Scalar _tmp123 = _tmp121 * _tmp92 - _tmp122 * _tmp46 - _tmp83;
  const Scalar _tmp124 = _tmp112 * _tmp94;
  const Scalar _tmp125 = _tmp114 * (-_tmp110 + _tmp111 * _tmp121 - _tmp123 * _tmp124);
  const Scalar _tmp126 = _tmp49 * _tmp52;
  const Scalar _tmp127 = _tmp123 + _tmp125;
  const Scalar _tmp128 = _tmp122 + _tmp125 * _tmp126 - _tmp127 * _tmp95;
  const Scalar _tmp129 = _tmp119 * fh1;
  const Scalar _tmp130 = Scalar(1.0) * _tmp87;
  const Scalar _tmp131 = _tmp130 * _tmp86;
  const Scalar _tmp132 = -_tmp130 * _tmp92 + _tmp131 * _tmp46;
  const Scalar _tmp133 = _tmp114 * (-_tmp111 * _tmp130 - _tmp124 * _tmp132);
  const Scalar _tmp134 = _tmp132 + _tmp133;
  const Scalar _tmp135 = _tmp126 * _tmp133 - _tmp131 - _tmp134 * _tmp95;
  const Scalar _tmp136 = _tmp101 * fh1;
  const Scalar _tmp137 = _tmp102 * _tmp119 + Scalar(5.1796800000000003) * _tmp24 + _tmp29 * fv1;
  const Scalar _tmp138 = _tmp44 * _tmp49;
  const Scalar _tmp139 = Scalar(1.0) * _tmp138 * _tmp53 - Scalar(1.0) * _tmp53;
  const Scalar _tmp140 = _tmp103 * _tmp106 + Scalar(1.0) * _tmp120 * (_tmp115 - _tmp117 * _tmp118) +
                         Scalar(1.0) * _tmp129 * (-_tmp118 * _tmp128 + _tmp125 * _tmp53) +
                         Scalar(1.0) * _tmp136 * (-_tmp118 * _tmp135 + _tmp133 * _tmp53) +
                         _tmp137 * _tmp139 + _tmp34 * _tmp97;
  const Scalar _tmp141 = _tmp88 * _tmp94;
  const Scalar _tmp142 = -_tmp134 * _tmp141 + Scalar(1.0);
  const Scalar _tmp143 = _tmp84 * _tmp87;
  const Scalar _tmp144 = _tmp67 * _tmp94;
  const Scalar _tmp145 = -_tmp127 * _tmp141 - _tmp82;
  const Scalar _tmp146 = _tmp113 * _tmp130 * _tmp88;
  const Scalar _tmp147 = _tmp55 * _tmp94;
  const Scalar _tmp148 = _tmp141 * _tmp55;
  const Scalar _tmp149 = _tmp109 * (-_tmp143 * _tmp148 + _tmp147 * _tmp67);
  const Scalar _tmp150 = -_tmp109 * _tmp120 * (_tmp116 * _tmp67 - _tmp146 * _tmp84) -
                         _tmp109 * _tmp129 * (_tmp127 * _tmp144 + _tmp143 * _tmp145 + Scalar(1.0)) -
                         _tmp109 * _tmp136 * (_tmp134 * _tmp144 + _tmp142 * _tmp143) -
                         _tmp149 * _tmp34;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 = std::asinh(_tmp140 * _tmp151);
  const Scalar _tmp153 = Scalar(1.0) * _tmp152;
  const Scalar _tmp154 = std::pow(_tmp150, Scalar(-2));
  const Scalar _tmp155 = _tmp15 + _tmp39;
  const Scalar _tmp156 = _tmp149 * _tmp154;
  const Scalar _tmp157 =
      (-_tmp140 * _tmp156 + _tmp151 * (_tmp106 * _tmp155 + _tmp139 * _tmp29 - _tmp97)) /
      std::sqrt(Scalar(std::pow(_tmp140, Scalar(2)) * _tmp154 + 1));
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp150;
  const Scalar _tmp159 =
      -_tmp152 * _tmp158 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp77), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp79 - 1), Scalar(2))));
  const Scalar _tmp160 = Scalar(0.1034955) * _tmp151;
  const Scalar _tmp161 = _tmp159 * _tmp160;
  const Scalar _tmp162 = Scalar(9.6622558468725703) * _tmp149;
  const Scalar _tmp163 = _tmp148 * _tmp87;
  const Scalar _tmp164 = -_tmp120 * _tmp146 + _tmp129 * _tmp145 * _tmp87 +
                         _tmp136 * _tmp142 * _tmp87 - _tmp163 * _tmp34;
  const Scalar _tmp165 = Scalar(1.0) / (_tmp164);
  const Scalar _tmp166 = _tmp137 * _tmp53;
  const Scalar _tmp167 = _tmp103 * _tmp105 + _tmp117 * _tmp120 * _tmp44 +
                         _tmp128 * _tmp129 * _tmp44 + _tmp135 * _tmp136 * _tmp44 -
                         _tmp138 * _tmp166 + _tmp34 * _tmp96;
  const Scalar _tmp168 = std::asinh(_tmp165 * _tmp167);
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp170 =
      -_tmp168 * _tmp169 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp71), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp73), Scalar(2))));
  const Scalar _tmp171 = std::pow(_tmp164, Scalar(-2));
  const Scalar _tmp172 = _tmp163 * _tmp171;
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp174 = _tmp29 * _tmp53;
  const Scalar _tmp175 =
      (_tmp165 * (_tmp105 * _tmp155 - _tmp138 * _tmp174 - _tmp96) - _tmp167 * _tmp172) /
      std::sqrt(Scalar(std::pow(_tmp167, Scalar(2)) * _tmp171 + 1));
  const Scalar _tmp176 = Scalar(0.1034955) * _tmp165;
  const Scalar _tmp177 = _tmp170 * _tmp176;
  const Scalar _tmp178 = Scalar(1.0) * _tmp168;
  const Scalar _tmp179 = -_tmp103 * _tmp104 - _tmp115 * _tmp120 - _tmp125 * _tmp129 * _tmp52 -
                         _tmp133 * _tmp136 * _tmp52 + _tmp166 + _tmp34 * _tmp54;
  const Scalar _tmp180 = _tmp116 * _tmp120 + _tmp127 * _tmp129 * _tmp94 +
                         _tmp134 * _tmp136 * _tmp94 + _tmp147 * _tmp34;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = std::asinh(_tmp179 * _tmp181);
  const Scalar _tmp183 = Scalar(9.6622558468725703) * _tmp180;
  const Scalar _tmp184 =
      -_tmp182 * _tmp183 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp62 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp64 - 1), Scalar(2))));
  const Scalar _tmp185 = Scalar(0.1034955) * _tmp181;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = Scalar(1.0) * _tmp182;
  const Scalar _tmp188 = Scalar(9.6622558468725703) * _tmp147;
  const Scalar _tmp189 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp190 = _tmp147 * _tmp189;
  const Scalar _tmp191 = (_tmp179 * _tmp190 + _tmp181 * (-_tmp104 * _tmp155 + _tmp174 - _tmp54)) /
                         std::sqrt(Scalar(std::pow(_tmp179, Scalar(2)) * _tmp189 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp32 *
      (-_tmp33 * std::cosh(Scalar(1.0) * _tmp31) +
       _tmp33 *
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp31 * _tmp32 -
                Scalar(8.3885017487099702) *
                    std::sqrt(Scalar(
                        Scalar(0.090199313518583735) *
                            std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp30), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp19 - 1), Scalar(2)))))));
  _res(1, 0) = _tmp158 * (-Scalar(1.0) * _tmp157 * std::cosh(_tmp153) -
                          (-Scalar(0.1034955) * _tmp156 * _tmp159 +
                           _tmp160 * (-_tmp152 * _tmp162 - _tmp157 * _tmp158)) *
                              std::cosh(_tmp161)) +
               _tmp162 * (-std::sinh(_tmp153) - std::sinh(_tmp161));
  _res(2, 0) = _tmp169 * (-Scalar(1.0) * _tmp175 * std::cosh(_tmp178) -
                          (-Scalar(0.1034955) * _tmp170 * _tmp172 +
                           _tmp176 * (-_tmp168 * _tmp173 - _tmp169 * _tmp175)) *
                              std::cosh(_tmp177)) +
               _tmp173 * (-std::sinh(_tmp177) - std::sinh(_tmp178));
  _res(3, 0) = _tmp183 * (-Scalar(1.0) * _tmp191 * std::cosh(_tmp187) -
                          (Scalar(0.1034955) * _tmp184 * _tmp190 +
                           _tmp185 * (_tmp182 * _tmp188 - _tmp183 * _tmp191)) *
                              std::cosh(_tmp186)) -
               _tmp188 * (-std::sinh(_tmp186) - std::sinh(_tmp187));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym