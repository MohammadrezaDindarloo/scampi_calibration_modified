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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl11
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 643

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (217)
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
  const Scalar _tmp7 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp8 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp7 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = 2 * _tmp3;
  const Scalar _tmp11 = _tmp0 * _tmp10;
  const Scalar _tmp12 = _tmp1 * _tmp4;
  const Scalar _tmp13 = _tmp11 - _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp14 - _tmp9;
  const Scalar _tmp16 = _tmp15 + _tmp6;
  const Scalar _tmp17 = _tmp16 + position_vector(1, 0);
  const Scalar _tmp18 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp20 = _tmp1 * _tmp10;
  const Scalar _tmp21 = _tmp0 * _tmp4;
  const Scalar _tmp22 = _tmp20 + _tmp21;
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 + position_vector(0, 0);
  const Scalar _tmp28 = Scalar(1.0) / (fh1);
  const Scalar _tmp29 = _tmp28 * fv1;
  const Scalar _tmp30 = std::asinh(_tmp29);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * _tmp30;
  const Scalar _tmp32 =
      -_tmp31 * fh1 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp27), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp17 - 1), Scalar(2))));
  const Scalar _tmp33 = Scalar(0.1034955) * _tmp28;
  const Scalar _tmp34 = _tmp32 * _tmp33;
  const Scalar _tmp35 = Scalar(1.0) * _tmp30;
  const Scalar _tmp36 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp36 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = _tmp17 + Scalar(8.3885017487099702);
  const Scalar _tmp39 = _tmp27 + Scalar(-2.5193355532036801);
  const Scalar _tmp40 = std::pow(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp39, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp38 * _tmp40;
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp20 - Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp43 = -Scalar(0.010999999999999999) * _tmp18 -
                        Scalar(0.010999999999999999) * _tmp7 + Scalar(-0.010999999999999999);
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp45 = _tmp43 - _tmp44;
  const Scalar _tmp46 = _tmp42 + _tmp45;
  const Scalar _tmp47 = _tmp46 * fh1;
  const Scalar _tmp48 = -Scalar(3.29616) * _tmp13 - _tmp16 * fv1 - _tmp41 * _tmp47;
  const Scalar _tmp49 = -_tmp19;
  const Scalar _tmp50 = _tmp23 + _tmp24;
  const Scalar _tmp51 = _tmp49 + _tmp50;
  const Scalar _tmp52 = Scalar(1.0) * _tmp51;
  const Scalar _tmp53 = -_tmp6;
  const Scalar _tmp54 = _tmp14 + _tmp9;
  const Scalar _tmp55 = _tmp53 + _tmp54;
  const Scalar _tmp56 = Scalar(1.0) * _tmp55;
  const Scalar _tmp57 = -_tmp56;
  const Scalar _tmp58 = _tmp15 + _tmp53;
  const Scalar _tmp59 = _tmp57 + _tmp58;
  const Scalar _tmp60 = _tmp54 + _tmp6;
  const Scalar _tmp61 = Scalar(1.0) / (_tmp57 + _tmp60);
  const Scalar _tmp62 = _tmp19 + _tmp50;
  const Scalar _tmp63 = _tmp61 * (_tmp52 - _tmp62);
  const Scalar _tmp64 = _tmp59 * _tmp63;
  const Scalar _tmp65 = _tmp25 + _tmp49;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp52 - _tmp64 - _tmp65);
  const Scalar _tmp67 = Scalar(1.0) * _tmp66;
  const Scalar _tmp68 = _tmp63 * _tmp67;
  const Scalar _tmp69 = _tmp64 * _tmp67 + Scalar(1.0);
  const Scalar _tmp70 = Scalar(1.0) * _tmp61;
  const Scalar _tmp71 = Scalar(1.0) * _tmp68 - Scalar(1.0) * _tmp69 * _tmp70;
  const Scalar _tmp72 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp73 = _tmp52 + _tmp56 * _tmp63;
  const Scalar _tmp74 = _tmp66 * _tmp73;
  const Scalar _tmp75 = 0;
  const Scalar _tmp76 = -_tmp42;
  const Scalar _tmp77 = _tmp45 + _tmp76;
  const Scalar _tmp78 = _tmp65 + position_vector(0, 0);
  const Scalar _tmp79 = _tmp78 + Scalar(1.9874742031097401);
  const Scalar _tmp80 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp81 = _tmp80 + Scalar(8.3196563720703107);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp79, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp79 * _tmp82;
  const Scalar _tmp84 = _tmp81 * _tmp82;
  const Scalar _tmp85 = _tmp43 + _tmp44;
  const Scalar _tmp86 = _tmp42 + _tmp85;
  const Scalar _tmp87 = _tmp60 + position_vector(1, 0);
  const Scalar _tmp88 = _tmp87 + Scalar(-4.7744369927459998);
  const Scalar _tmp89 = _tmp62 + position_vector(0, 0);
  const Scalar _tmp90 = _tmp89 + Scalar(-2.7171519410699099);
  const Scalar _tmp91 = std::pow(Scalar(std::pow(_tmp88, Scalar(2)) + std::pow(_tmp90, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp92 = _tmp88 * _tmp91;
  const Scalar _tmp93 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp94 = _tmp93 + Scalar(-4.83288938413423);
  const Scalar _tmp95 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp96 = _tmp95 + Scalar(1.7965602546229);
  const Scalar _tmp97 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp98 = _tmp94 * _tmp97;
  const Scalar _tmp99 = _tmp76 + _tmp85;
  const Scalar _tmp100 = _tmp90 * _tmp91;
  const Scalar _tmp101 = _tmp100 * _tmp99;
  const Scalar _tmp102 = -_tmp101 * _tmp98 + _tmp86 * _tmp92;
  const Scalar _tmp103 = _tmp83 * _tmp98 - _tmp84;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp100 * _tmp98 - _tmp92);
  const Scalar _tmp105 = _tmp103 * _tmp104;
  const Scalar _tmp106 = _tmp98 * _tmp99;
  const Scalar _tmp107 = -_tmp102 * _tmp105 - _tmp106 * _tmp83 + _tmp77 * _tmp84;
  const Scalar _tmp108 = -_tmp100 * _tmp86 + _tmp101;
  const Scalar _tmp109 = -_tmp105 * _tmp108 - _tmp107 * _tmp63 - _tmp77 * _tmp83 + _tmp83 * _tmp99;
  const Scalar _tmp110 = Scalar(1.0) / (_tmp109);
  const Scalar _tmp111 = _tmp107 * _tmp110;
  const Scalar _tmp112 = -_tmp111 * _tmp75 + _tmp57 - _tmp59 * _tmp74;
  const Scalar _tmp113 =
      std::sqrt(Scalar(std::pow(_tmp94, Scalar(2)) + std::pow(_tmp96, Scalar(2))));
  const Scalar _tmp114 = Scalar(1.0) / (_tmp113);
  const Scalar _tmp115 = _tmp113 * _tmp97;
  const Scalar _tmp116 = _tmp115 * (_tmp114 * _tmp51 * _tmp94 - _tmp114 * _tmp55 * _tmp96);
  const Scalar _tmp117 = _tmp100 * _tmp116 + _tmp100 * _tmp60 - _tmp62 * _tmp92;
  const Scalar _tmp118 = -_tmp105 * _tmp117 + _tmp116 * _tmp83 + _tmp58 * _tmp83 - _tmp65 * _tmp84;
  const Scalar _tmp119 = Scalar(1.0) / (_tmp118);
  const Scalar _tmp120 = _tmp109 * _tmp119;
  const Scalar _tmp121 = _tmp120 * _tmp67;
  const Scalar _tmp122 = Scalar(1.0) * _tmp119;
  const Scalar _tmp123 = -_tmp107 * _tmp122 + _tmp121 * _tmp59;
  const Scalar _tmp124 = _tmp39 * _tmp40;
  const Scalar _tmp125 = -_tmp124 * _tmp16 + _tmp26 * _tmp41;
  const Scalar _tmp126 = Scalar(1.0) * _tmp125;
  const Scalar _tmp127 = _tmp126 * (_tmp121 - _tmp123 * _tmp70);
  const Scalar _tmp128 = _tmp104 * _tmp98;
  const Scalar _tmp129 = _tmp102 * _tmp128 + _tmp106;
  const Scalar _tmp130 = _tmp108 * _tmp128 - _tmp129 * _tmp63 - _tmp99;
  const Scalar _tmp131 = _tmp110 * _tmp118;
  const Scalar _tmp132 = _tmp120 * (-_tmp116 + _tmp117 * _tmp128 - _tmp130 * _tmp131);
  const Scalar _tmp133 = _tmp59 * _tmp66;
  const Scalar _tmp134 = _tmp130 + _tmp132;
  const Scalar _tmp135 = -_tmp111 * _tmp134 + _tmp129 + _tmp132 * _tmp133;
  const Scalar _tmp136 = Scalar(1.0) * _tmp124 * (_tmp132 * _tmp67 - _tmp135 * _tmp70);
  const Scalar _tmp137 = Scalar(1.0) * _tmp104;
  const Scalar _tmp138 = _tmp102 * _tmp137;
  const Scalar _tmp139 = -_tmp108 * _tmp137 + _tmp138 * _tmp63;
  const Scalar _tmp140 = _tmp120 * (-_tmp117 * _tmp137 - _tmp131 * _tmp139);
  const Scalar _tmp141 = _tmp139 + _tmp140;
  const Scalar _tmp142 = -_tmp111 * _tmp141 + _tmp133 * _tmp140 - _tmp138;
  const Scalar _tmp143 = Scalar(1.0) * _tmp41 * (_tmp140 * _tmp67 - _tmp142 * _tmp70);
  const Scalar _tmp144 = _tmp124 * _tmp47 + Scalar(3.29616) * _tmp22 + _tmp26 * fv1;
  const Scalar _tmp145 = _tmp59 * _tmp61;
  const Scalar _tmp146 = _tmp145 * _tmp67;
  const Scalar _tmp147 = Scalar(1.0) * _tmp146 - Scalar(1.0) * _tmp67;
  const Scalar _tmp148 = _tmp127 * fh1 + _tmp136 * fh1 + _tmp143 * fh1 + _tmp144 * _tmp147 +
                         _tmp48 * _tmp71 +
                         Scalar(1.0) * _tmp72 * (-_tmp112 * _tmp70 - _tmp67 * _tmp73 + Scalar(1.0));
  const Scalar _tmp149 = _tmp103 * _tmp110;
  const Scalar _tmp150 = _tmp104 * (-_tmp141 * _tmp149 + Scalar(1.0));
  const Scalar _tmp151 = _tmp110 * _tmp141;
  const Scalar _tmp152 = _tmp115 * _tmp41 * (_tmp100 * _tmp150 + _tmp151 * _tmp83);
  const Scalar _tmp153 = _tmp110 * _tmp134;
  const Scalar _tmp154 = _tmp104 * (-_tmp134 * _tmp149 - _tmp98);
  const Scalar _tmp155 = _tmp115 * _tmp124 * (_tmp100 * _tmp154 + _tmp153 * _tmp83 + Scalar(1.0));
  const Scalar _tmp156 = _tmp103 * _tmp119 * _tmp137;
  const Scalar _tmp157 = _tmp115 * _tmp125 * (-_tmp100 * _tmp156 + _tmp122 * _tmp83);
  const Scalar _tmp158 = _tmp110 * _tmp75;
  const Scalar _tmp159 = _tmp104 * _tmp149 * _tmp75;
  const Scalar _tmp160 = -_tmp115 * _tmp72 * (-_tmp100 * _tmp159 + _tmp158 * _tmp83) -
                         _tmp152 * fh1 - _tmp155 * fh1 - _tmp157 * fh1;
  const Scalar _tmp161 = Scalar(1.0) / (_tmp160);
  const Scalar _tmp162 = std::asinh(_tmp148 * _tmp161);
  const Scalar _tmp163 = Scalar(1.0) * _tmp162;
  const Scalar _tmp164 = std::pow(_tmp160, Scalar(-2));
  const Scalar _tmp165 = _tmp124 * _tmp46;
  const Scalar _tmp166 = _tmp41 * _tmp46;
  const Scalar _tmp167 = -_tmp152 - _tmp155 - _tmp157;
  const Scalar _tmp168 = _tmp164 * _tmp167;
  const Scalar _tmp169 = (-_tmp148 * _tmp168 + _tmp161 * (_tmp127 + _tmp136 + _tmp143 +
                                                          _tmp147 * _tmp165 - _tmp166 * _tmp71)) /
                         std::sqrt(Scalar(std::pow(_tmp148, Scalar(2)) * _tmp164 + 1));
  const Scalar _tmp170 = Scalar(9.6622558468725703) * _tmp160;
  const Scalar _tmp171 =
      -_tmp162 * _tmp170 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp93), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp95 - 1), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.1034955) * _tmp161;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = Scalar(9.6622558468725703) * _tmp167;
  const Scalar _tmp175 = _tmp125 * _tmp156;
  const Scalar _tmp176 = _tmp124 * _tmp154;
  const Scalar _tmp177 = _tmp150 * _tmp41;
  const Scalar _tmp178 = -_tmp159 * _tmp72 - _tmp175 * fh1 + _tmp176 * fh1 + _tmp177 * fh1;
  const Scalar _tmp179 = Scalar(1.0) / (_tmp178);
  const Scalar _tmp180 = _tmp124 * _tmp135 * _tmp61;
  const Scalar _tmp181 = _tmp61 * _tmp69;
  const Scalar _tmp182 = _tmp144 * _tmp67;
  const Scalar _tmp183 = _tmp142 * _tmp41 * _tmp61;
  const Scalar _tmp184 = _tmp123 * _tmp125 * _tmp61;
  const Scalar _tmp185 = _tmp112 * _tmp61 * _tmp72 - _tmp145 * _tmp182 + _tmp180 * fh1 +
                         _tmp181 * _tmp48 + _tmp183 * fh1 + _tmp184 * fh1;
  const Scalar _tmp186 = std::asinh(_tmp179 * _tmp185);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = std::pow(_tmp178, Scalar(-2));
  const Scalar _tmp189 = -_tmp175 + _tmp176 + _tmp177;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 =
      (_tmp179 * (-_tmp146 * _tmp165 - _tmp166 * _tmp181 + _tmp180 + _tmp183 + _tmp184) -
       _tmp185 * _tmp190) /
      std::sqrt(Scalar(std::pow(_tmp185, Scalar(2)) * _tmp188 + 1));
  const Scalar _tmp192 = Scalar(9.6622558468725703) * _tmp178;
  const Scalar _tmp193 =
      -_tmp186 * _tmp192 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp87), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp89), Scalar(2))));
  const Scalar _tmp194 = Scalar(9.6622558468725703) * _tmp189;
  const Scalar _tmp195 = Scalar(0.1034955) * _tmp179;
  const Scalar _tmp196 = _tmp193 * _tmp195;
  const Scalar _tmp197 = _tmp119 * _tmp126;
  const Scalar _tmp198 = _tmp124 * _tmp153;
  const Scalar _tmp199 = _tmp151 * _tmp41;
  const Scalar _tmp200 = _tmp197 + _tmp198 + _tmp199;
  const Scalar _tmp201 = _tmp121 * _tmp125;
  const Scalar _tmp202 = _tmp140 * _tmp41 * _tmp66;
  const Scalar _tmp203 = _tmp124 * _tmp132 * _tmp66;
  const Scalar _tmp204 =
      _tmp182 - _tmp201 * fh1 - _tmp202 * fh1 - _tmp203 * fh1 - _tmp48 * _tmp68 + _tmp72 * _tmp74;
  const Scalar _tmp205 = _tmp158 * _tmp72 + _tmp197 * fh1 + _tmp198 * fh1 + _tmp199 * fh1;
  const Scalar _tmp206 = Scalar(1.0) / (_tmp205);
  const Scalar _tmp207 = std::asinh(_tmp204 * _tmp206);
  const Scalar _tmp208 = Scalar(9.6622558468725703) * _tmp207;
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp205;
  const Scalar _tmp210 = std::pow(_tmp205, Scalar(-2));
  const Scalar _tmp211 = _tmp200 * _tmp210;
  const Scalar _tmp212 = (-_tmp204 * _tmp211 + _tmp206 * (_tmp165 * _tmp67 + _tmp166 * _tmp68 -
                                                          _tmp201 - _tmp202 - _tmp203)) /
                         std::sqrt(Scalar(std::pow(_tmp204, Scalar(2)) * _tmp210 + 1));
  const Scalar _tmp213 = Scalar(0.1034955) * _tmp206;
  const Scalar _tmp214 =
      -_tmp205 * _tmp208 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp78 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp80 - 1), Scalar(2))));
  const Scalar _tmp215 = _tmp213 * _tmp214;
  const Scalar _tmp216 = Scalar(1.0) * _tmp207;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(9.6622558468725703) * fh1 *
                   (Scalar(1.0) * _tmp36 * _tmp37 * fv1 * std::cosh(_tmp35) -
                    (-Scalar(0.1034955) * _tmp32 * _tmp36 +
                     _tmp33 * (Scalar(9.6622558468725703) * _tmp29 * _tmp37 - _tmp31)) *
                        std::cosh(_tmp34)) -
               Scalar(9.6622558468725703) * std::sinh(_tmp34) -
               Scalar(9.6622558468725703) * std::sinh(_tmp35);
  _res(1, 0) = _tmp170 * (-Scalar(1.0) * _tmp169 * std::cosh(_tmp163) -
                          (-Scalar(0.1034955) * _tmp168 * _tmp171 +
                           _tmp172 * (-_tmp162 * _tmp174 - _tmp169 * _tmp170)) *
                              std::cosh(_tmp173)) +
               _tmp174 * (-std::sinh(_tmp163) - std::sinh(_tmp173));
  _res(2, 0) = _tmp192 * (-Scalar(1.0) * _tmp191 * std::cosh(_tmp187) -
                          (-Scalar(0.1034955) * _tmp190 * _tmp193 +
                           _tmp195 * (-_tmp186 * _tmp194 - _tmp191 * _tmp192)) *
                              std::cosh(_tmp196)) +
               _tmp194 * (-std::sinh(_tmp187) - std::sinh(_tmp196));
  _res(3, 0) = Scalar(9.6622558468725703) * _tmp200 * (-std::sinh(_tmp215) - std::sinh(_tmp216)) +
               _tmp209 * (-Scalar(1.0) * _tmp212 * std::cosh(_tmp216) -
                          (-Scalar(0.1034955) * _tmp211 * _tmp214 +
                           _tmp213 * (-_tmp200 * _tmp208 - _tmp209 * _tmp212)) *
                              std::cosh(_tmp215));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
