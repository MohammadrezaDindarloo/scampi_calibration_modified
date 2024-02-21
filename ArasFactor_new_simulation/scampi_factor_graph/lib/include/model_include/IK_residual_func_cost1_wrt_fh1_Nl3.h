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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl3
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl3(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 658

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (215)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * fv1;
  const Scalar _tmp2 = std::asinh(_tmp1);
  const Scalar _tmp3 = Scalar(1.0) * _tmp2;
  const Scalar _tmp4 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp5 * _tmp7;
  const Scalar _tmp9 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp10 * _tmp9;
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp13 = -_tmp12;
  const Scalar _tmp14 = _tmp7 * _tmp9;
  const Scalar _tmp15 = _tmp10 * _tmp5;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = _tmp17 - _tmp20;
  const Scalar _tmp22 = _tmp13 + _tmp21;
  const Scalar _tmp23 = _tmp22 + position_vector(1, 0);
  const Scalar _tmp24 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = 2 * _tmp5 * _tmp9;
  const Scalar _tmp27 = _tmp10 * _tmp6;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp30;
  const Scalar _tmp32 = _tmp29 - _tmp31;
  const Scalar _tmp33 = _tmp25 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp35 = Scalar(9.6622558468725703) * _tmp2;
  const Scalar _tmp36 =
      -Scalar(0.1034955) * _tmp35 * fh1 -
      Scalar(0.86104699605560286) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp23 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp34 - 1), Scalar(2))));
  const Scalar _tmp37 = _tmp0 * _tmp36;
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp4 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp12 + _tmp21;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = _tmp40 + Scalar(8.3885017487099702);
  const Scalar _tmp42 = _tmp29 + _tmp31;
  const Scalar _tmp43 = _tmp25 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 + Scalar(-2.5193355532036801);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp45 * _tmp46;
  const Scalar _tmp48 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp49 = -_tmp48;
  const Scalar _tmp50 = -Scalar(0.010999999999999999) * _tmp18 -
                        Scalar(0.010999999999999999) * _tmp30 + Scalar(-0.010999999999999999);
  const Scalar _tmp51 = Scalar(0.20999999999999999) * _tmp26 - Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp52 = _tmp50 + _tmp51;
  const Scalar _tmp53 = _tmp49 + _tmp52;
  const Scalar _tmp54 = _tmp48 + _tmp52;
  const Scalar _tmp55 = _tmp17 + _tmp20;
  const Scalar _tmp56 = _tmp12 + _tmp55;
  const Scalar _tmp57 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 + Scalar(-4.7744369927459998);
  const Scalar _tmp59 = _tmp24 + _tmp42;
  const Scalar _tmp60 = _tmp59 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(-2.7171519410699099);
  const Scalar _tmp62 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp63 = _tmp58 * _tmp62;
  const Scalar _tmp64 = _tmp41 * _tmp46;
  const Scalar _tmp65 = _tmp47 * _tmp63 - _tmp64;
  const Scalar _tmp66 = _tmp13 + _tmp55;
  const Scalar _tmp67 = _tmp66 + position_vector(1, 0);
  const Scalar _tmp68 = _tmp67 + Scalar(-4.83288938413423);
  const Scalar _tmp69 = _tmp24 + _tmp32;
  const Scalar _tmp70 = _tmp69 + position_vector(0, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(1.7965602546229);
  const Scalar _tmp72 = std::pow(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp71, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp73 = _tmp68 * _tmp72;
  const Scalar _tmp74 = _tmp71 * _tmp72;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp63 * _tmp74 - _tmp73);
  const Scalar _tmp76 = _tmp54 * _tmp74;
  const Scalar _tmp77 = _tmp50 - _tmp51;
  const Scalar _tmp78 = _tmp48 + _tmp77;
  const Scalar _tmp79 = _tmp75 * (-_tmp63 * _tmp76 + _tmp73 * _tmp78);
  const Scalar _tmp80 = _tmp54 * _tmp63;
  const Scalar _tmp81 = -_tmp47 * _tmp80 + _tmp53 * _tmp64 - _tmp65 * _tmp79;
  const Scalar _tmp82 = Scalar(1.0) * _tmp56;
  const Scalar _tmp83 = -_tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp66 + _tmp83);
  const Scalar _tmp85 = Scalar(1.0) * _tmp59;
  const Scalar _tmp86 = -_tmp69 + _tmp85;
  const Scalar _tmp87 = _tmp84 * _tmp86;
  const Scalar _tmp88 = _tmp75 * (-_tmp74 * _tmp78 + _tmp76);
  const Scalar _tmp89 = -_tmp47 * _tmp53 + _tmp47 * _tmp54 - _tmp65 * _tmp88 - _tmp81 * _tmp87;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp62 * _tmp91;
  const Scalar _tmp94 = _tmp93 * (-_tmp56 * _tmp61 * _tmp92 + _tmp58 * _tmp59 * _tmp92);
  const Scalar _tmp95 = _tmp75 * (_tmp66 * _tmp74 - _tmp69 * _tmp73 + _tmp74 * _tmp94);
  const Scalar _tmp96 = _tmp63 * _tmp79 + _tmp80;
  const Scalar _tmp97 = -_tmp54 + _tmp63 * _tmp88 - _tmp87 * _tmp96;
  const Scalar _tmp98 = _tmp39 * _tmp47 - _tmp43 * _tmp64 + _tmp47 * _tmp94 - _tmp65 * _tmp95;
  const Scalar _tmp99 = _tmp90 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp101 = _tmp100 * _tmp89;
  const Scalar _tmp102 = _tmp101 * (_tmp63 * _tmp95 - _tmp94 - _tmp97 * _tmp99);
  const Scalar _tmp103 = _tmp102 + _tmp97;
  const Scalar _tmp104 = _tmp103 * _tmp90;
  const Scalar _tmp105 = _tmp65 * _tmp90;
  const Scalar _tmp106 = -_tmp103 * _tmp105 - _tmp63;
  const Scalar _tmp107 = _tmp74 * _tmp75;
  const Scalar _tmp108 = _tmp34 + Scalar(1.9874742031097401);
  const Scalar _tmp109 = _tmp23 + Scalar(8.3196563720703107);
  const Scalar _tmp110 =
      std::pow(Scalar(std::pow(_tmp108, Scalar(2)) + std::pow(_tmp109, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp111 = _tmp108 * _tmp110;
  const Scalar _tmp112 = _tmp111 * _tmp93 * (_tmp104 * _tmp47 + _tmp106 * _tmp107 + Scalar(1.0));
  const Scalar _tmp113 = Scalar(1.0) * _tmp84;
  const Scalar _tmp114 = _tmp113 * _tmp79 * _tmp86 - Scalar(1.0) * _tmp88;
  const Scalar _tmp115 = _tmp101 * (-_tmp114 * _tmp99 - Scalar(1.0) * _tmp95);
  const Scalar _tmp116 = _tmp114 + _tmp115;
  const Scalar _tmp117 = -_tmp105 * _tmp116 + Scalar(1.0);
  const Scalar _tmp118 = _tmp116 * _tmp90;
  const Scalar _tmp119 = _tmp109 * _tmp110;
  const Scalar _tmp120 = _tmp119 * _tmp93 * (_tmp107 * _tmp117 + _tmp118 * _tmp47);
  const Scalar _tmp121 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp122 = _tmp82 * _tmp87 + _tmp85;
  const Scalar _tmp123 = 0;
  const Scalar _tmp124 = _tmp123 * _tmp90;
  const Scalar _tmp125 = _tmp107 * _tmp65;
  const Scalar _tmp126 = -_tmp111 * _tmp22 + _tmp119 * _tmp33;
  const Scalar _tmp127 = Scalar(1.0) * _tmp100;
  const Scalar _tmp128 = _tmp126 * _tmp93 * (-_tmp125 * _tmp127 + _tmp127 * _tmp47);
  const Scalar _tmp129 = -_tmp112 * fh1 - _tmp120 * fh1 -
                         _tmp121 * _tmp93 * (-_tmp124 * _tmp125 + _tmp124 * _tmp47) - _tmp128 * fh1;
  const Scalar _tmp130 = std::pow(_tmp129, Scalar(-2));
  const Scalar _tmp131 = -_tmp112 - _tmp120 - _tmp128;
  const Scalar _tmp132 = _tmp130 * _tmp131;
  const Scalar _tmp133 = Scalar(9.6622558468725703) * _tmp129;
  const Scalar _tmp134 = _tmp39 + _tmp83;
  const Scalar _tmp135 = _tmp134 * _tmp87;
  const Scalar _tmp136 = Scalar(1.0) / (-_tmp135 - _tmp43 + _tmp85);
  const Scalar _tmp137 = Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp81 * _tmp90;
  const Scalar _tmp139 = _tmp122 * _tmp136;
  const Scalar _tmp140 = -_tmp123 * _tmp138 - _tmp134 * _tmp139 + _tmp83;
  const Scalar _tmp141 = _tmp134 * _tmp136;
  const Scalar _tmp142 = _tmp115 * _tmp141 - _tmp116 * _tmp138 - Scalar(1.0) * _tmp79;
  const Scalar _tmp143 = Scalar(1.0) * _tmp119 * (-_tmp113 * _tmp142 + _tmp115 * _tmp137);
  const Scalar _tmp144 = _tmp49 + _tmp77;
  const Scalar _tmp145 = _tmp144 * fh1;
  const Scalar _tmp146 = _tmp111 * _tmp145 + Scalar(5.1796800000000003) * _tmp28 + _tmp33 * fv1;
  const Scalar _tmp147 = _tmp134 * _tmp84;
  const Scalar _tmp148 = Scalar(1.0) * _tmp137 * _tmp147 - Scalar(1.0) * _tmp137;
  const Scalar _tmp149 = -_tmp119 * _tmp145 - Scalar(5.1796800000000003) * _tmp16 - _tmp22 * fv1;
  const Scalar _tmp150 = _tmp137 * _tmp87;
  const Scalar _tmp151 = _tmp135 * _tmp137 + Scalar(1.0);
  const Scalar _tmp152 = -Scalar(1.0) * _tmp113 * _tmp151 + Scalar(1.0) * _tmp150;
  const Scalar _tmp153 = _tmp102 * _tmp141 - _tmp103 * _tmp138 + _tmp96;
  const Scalar _tmp154 = Scalar(1.0) * _tmp111 * (_tmp102 * _tmp137 - _tmp113 * _tmp153);
  const Scalar _tmp155 = _tmp101 * _tmp137;
  const Scalar _tmp156 = _tmp84 * (-_tmp127 * _tmp81 + _tmp134 * _tmp155);
  const Scalar _tmp157 = Scalar(1.0) * _tmp126;
  const Scalar _tmp158 = _tmp157 * (_tmp155 - Scalar(1.0) * _tmp156);
  const Scalar _tmp159 =
      Scalar(1.0) * _tmp121 * (-_tmp113 * _tmp140 - _tmp122 * _tmp137 + Scalar(1.0)) +
      _tmp143 * fh1 + _tmp146 * _tmp148 + _tmp149 * _tmp152 + _tmp154 * fh1 + _tmp158 * fh1;
  const Scalar _tmp160 = _tmp119 * _tmp144;
  const Scalar _tmp161 = _tmp111 * _tmp144;
  const Scalar _tmp162 = Scalar(1.0) / (_tmp129);
  const Scalar _tmp163 = (-_tmp132 * _tmp159 + _tmp162 * (_tmp143 + _tmp148 * _tmp161 -
                                                          _tmp152 * _tmp160 + _tmp154 + _tmp158)) /
                         std::sqrt(Scalar(_tmp130 * std::pow(_tmp159, Scalar(2)) + 1));
  const Scalar _tmp164 = std::asinh(_tmp159 * _tmp162);
  const Scalar _tmp165 = Scalar(9.6622558468725703) * _tmp131;
  const Scalar _tmp166 = Scalar(0.1034955) * _tmp162;
  const Scalar _tmp167 =
      -_tmp133 * _tmp164 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp57), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp60), Scalar(2))));
  const Scalar _tmp168 = _tmp166 * _tmp167;
  const Scalar _tmp169 = Scalar(1.0) * _tmp164;
  const Scalar _tmp170 = _tmp117 * _tmp119 * _tmp75;
  const Scalar _tmp171 = _tmp121 * _tmp124;
  const Scalar _tmp172 = _tmp65 * _tmp75;
  const Scalar _tmp173 = _tmp100 * _tmp157;
  const Scalar _tmp174 = _tmp173 * fh1;
  const Scalar _tmp175 = _tmp106 * _tmp111 * _tmp75;
  const Scalar _tmp176 = _tmp170 * fh1 - _tmp171 * _tmp172 - _tmp172 * _tmp174 + _tmp175 * fh1;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = _tmp137 * _tmp146;
  const Scalar _tmp179 = _tmp151 * _tmp84;
  const Scalar _tmp180 = _tmp126 * _tmp156;
  const Scalar _tmp181 = _tmp119 * _tmp142 * _tmp84;
  const Scalar _tmp182 = _tmp111 * _tmp84;
  const Scalar _tmp183 = _tmp153 * _tmp182;
  const Scalar _tmp184 = _tmp121 * _tmp140 * _tmp84 - _tmp147 * _tmp178 + _tmp149 * _tmp179 +
                         _tmp180 * fh1 + _tmp181 * fh1 + _tmp183 * fh1;
  const Scalar _tmp185 = std::asinh(_tmp177 * _tmp184);
  const Scalar _tmp186 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp187 =
      -_tmp185 * _tmp186 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp67), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp70 - 1), Scalar(2))));
  const Scalar _tmp188 = Scalar(0.1034955) * _tmp177;
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp191 = _tmp170 - _tmp172 * _tmp173 + _tmp175;
  const Scalar _tmp192 = _tmp190 * _tmp191;
  const Scalar _tmp193 = (_tmp177 * (-_tmp134 * _tmp137 * _tmp144 * _tmp182 - _tmp160 * _tmp179 +
                                     _tmp180 + _tmp181 + _tmp183) -
                          _tmp184 * _tmp192) /
                         std::sqrt(Scalar(std::pow(_tmp184, Scalar(2)) * _tmp190 + 1));
  const Scalar _tmp194 = Scalar(9.6622558468725703) * _tmp191;
  const Scalar _tmp195 = Scalar(1.0) * _tmp185;
  const Scalar _tmp196 = _tmp104 * _tmp111;
  const Scalar _tmp197 = _tmp118 * _tmp119;
  const Scalar _tmp198 = _tmp171 + _tmp174 + _tmp196 * fh1 + _tmp197 * fh1;
  const Scalar _tmp199 = Scalar(1.0) / (_tmp198);
  const Scalar _tmp200 = _tmp126 * _tmp155;
  const Scalar _tmp201 = _tmp115 * _tmp119 * _tmp136;
  const Scalar _tmp202 = _tmp102 * _tmp111 * _tmp136;
  const Scalar _tmp203 = _tmp121 * _tmp139 - _tmp149 * _tmp150 + _tmp178 - _tmp200 * fh1 -
                         _tmp201 * fh1 - _tmp202 * fh1;
  const Scalar _tmp204 = std::asinh(_tmp199 * _tmp203);
  const Scalar _tmp205 = Scalar(1.0) * _tmp204;
  const Scalar _tmp206 = std::pow(_tmp198, Scalar(-2));
  const Scalar _tmp207 = _tmp173 + _tmp196 + _tmp197;
  const Scalar _tmp208 = _tmp206 * _tmp207;
  const Scalar _tmp209 =
      (_tmp199 * (_tmp137 * _tmp161 + _tmp150 * _tmp160 - _tmp200 - _tmp201 - _tmp202) -
       _tmp203 * _tmp208) /
      std::sqrt(Scalar(std::pow(_tmp203, Scalar(2)) * _tmp206 + 1));
  const Scalar _tmp210 = Scalar(9.6622558468725703) * _tmp198;
  const Scalar _tmp211 =
      -_tmp204 * _tmp210 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp44), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp40 - 1), Scalar(2))));
  const Scalar _tmp212 = Scalar(0.1034955) * _tmp199;
  const Scalar _tmp213 = _tmp211 * _tmp212;
  const Scalar _tmp214 = Scalar(9.6622558468725703) * _tmp207;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(8.4718465805053746) * _tmp0 -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp38 * _tmp4 * fv1 * std::sinh(_tmp3) -
           Scalar(0.87679799777269396) * _tmp4 -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp1 * _tmp38 - _tmp35) -
            _tmp36 * _tmp4) *
               std::sinh(_tmp37)) -
      Scalar(9.6622558468725703) * std::cosh(_tmp3) +
      Scalar(9.6622558468725703) * std::cosh(_tmp37);
  _res(1, 0) =
      -_tmp133 *
          (-Scalar(0.86564762886483004) * _tmp132 + Scalar(1.0) * _tmp163 * std::sinh(_tmp169) -
           (-Scalar(0.1034955) * _tmp132 * _tmp167 +
            _tmp166 * (-_tmp133 * _tmp163 - _tmp164 * _tmp165)) *
               std::sinh(_tmp168)) -
      _tmp165 * (Scalar(0.86564762886483004) * _tmp162 - std::cosh(_tmp168) + std::cosh(_tmp169));
  _res(2, 0) =
      -_tmp186 *
          (-Scalar(0.86627065637365697) * _tmp192 + Scalar(1.0) * _tmp193 * std::sinh(_tmp195) -
           (-Scalar(0.1034955) * _tmp187 * _tmp192 +
            _tmp188 * (-_tmp185 * _tmp194 - _tmp186 * _tmp193)) *
               std::sinh(_tmp189)) -
      _tmp194 * (Scalar(0.86627065637365697) * _tmp177 - std::cosh(_tmp189) + std::cosh(_tmp195));
  _res(3, 0) =
      -_tmp210 *
          (-Scalar(0.876505537412406) * _tmp208 + Scalar(1.0) * _tmp209 * std::sinh(_tmp205) -
           (-Scalar(0.1034955) * _tmp208 * _tmp211 +
            _tmp212 * (-_tmp204 * _tmp214 - _tmp209 * _tmp210)) *
               std::sinh(_tmp213)) -
      _tmp214 * (Scalar(0.876505537412406) * _tmp199 + std::cosh(_tmp205) - std::cosh(_tmp213));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym