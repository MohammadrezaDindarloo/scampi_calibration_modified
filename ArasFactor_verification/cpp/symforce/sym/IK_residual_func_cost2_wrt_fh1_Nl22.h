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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl22
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl22(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 638

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (216)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * fv1;
  const Scalar _tmp2 = std::asinh(_tmp1);
  const Scalar _tmp3 = Scalar(1.0) * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp4 * _tmp6;
  const Scalar _tmp8 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp8;
  const Scalar _tmp12 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp13 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp10 * _tmp4;
  const Scalar _tmp17 = _tmp6 * _tmp8;
  const Scalar _tmp18 = _tmp16 + _tmp17;
  const Scalar _tmp19 = -Scalar(0.010999999999999999) * _tmp18;
  const Scalar _tmp20 = -_tmp15 + _tmp19;
  const Scalar _tmp21 = _tmp12 + _tmp20;
  const Scalar _tmp22 = _tmp21 + position_vector(0, 0);
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = _tmp6 * _tmp9;
  const Scalar _tmp26 = 2 * _tmp4 * _tmp8;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp29;
  const Scalar _tmp31 = _tmp28 + _tmp30;
  const Scalar _tmp32 = _tmp24 + _tmp31;
  const Scalar _tmp33 = _tmp32 + position_vector(1, 0);
  const Scalar _tmp34 = Scalar(9.6622558468725703) * _tmp2;
  const Scalar _tmp35 =
      -Scalar(0.1034955) * _tmp34 * fh1 -
      Scalar(0.50018230325566426) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp33), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp22 - 1), Scalar(2))));
  const Scalar _tmp36 = _tmp0 * _tmp35;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp22 + Scalar(1.7965602546229);
  const Scalar _tmp40 = _tmp33 + Scalar(-4.83288938413423);
  const Scalar _tmp41 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp40, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp39 * _tmp41;
  const Scalar _tmp43 = _tmp40 * _tmp41;
  const Scalar _tmp44 = _tmp21 * _tmp43 - _tmp32 * _tmp42;
  const Scalar _tmp45 = _tmp28 - _tmp30;
  const Scalar _tmp46 = _tmp23 + _tmp45;
  const Scalar _tmp47 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp48 = _tmp47 + Scalar(8.3885017487099702);
  const Scalar _tmp49 = -_tmp12;
  const Scalar _tmp50 = _tmp15 + _tmp19;
  const Scalar _tmp51 = _tmp49 + _tmp50;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(-2.5193355532036801);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp53 * _tmp54;
  const Scalar _tmp56 = _tmp48 * _tmp54;
  const Scalar _tmp57 = _tmp20 + _tmp49;
  const Scalar _tmp58 = _tmp24 + _tmp45;
  const Scalar _tmp59 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 + Scalar(8.3196563720703107);
  const Scalar _tmp61 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 + Scalar(1.9874742031097401);
  const Scalar _tmp63 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp62, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp60 * _tmp63;
  const Scalar _tmp65 = _tmp62 * _tmp63;
  const Scalar _tmp66 = _tmp23 + _tmp31;
  const Scalar _tmp67 = _tmp66 + position_vector(1, 0);
  const Scalar _tmp68 = _tmp67 + Scalar(-4.7744369927459998);
  const Scalar _tmp69 = _tmp12 + _tmp50;
  const Scalar _tmp70 = _tmp69 + position_vector(0, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(-2.7171519410699099);
  const Scalar _tmp72 =
      std::sqrt(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp71, Scalar(2))));
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = Scalar(1.0) / (_tmp71);
  const Scalar _tmp75 = _tmp72 * _tmp74;
  const Scalar _tmp76 = _tmp75 * (-_tmp66 * _tmp71 * _tmp73 + _tmp68 * _tmp69 * _tmp73);
  const Scalar _tmp77 = -_tmp57 * _tmp64 + _tmp58 * _tmp65 + _tmp65 * _tmp76;
  const Scalar _tmp78 = _tmp68 * _tmp74;
  const Scalar _tmp79 = _tmp55 * _tmp78 - _tmp56;
  const Scalar _tmp80 = Scalar(1.0) / (-_tmp64 + _tmp65 * _tmp78);
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp46 * _tmp55 - _tmp51 * _tmp56 + _tmp55 * _tmp76 - _tmp77 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp83;
  const Scalar _tmp85 = _tmp65 * _tmp81;
  const Scalar _tmp86 = _tmp44 * _tmp75 * (_tmp55 * _tmp84 - _tmp84 * _tmp85);
  const Scalar _tmp87 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp88 = -_tmp87;
  const Scalar _tmp89 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp29 + Scalar(-0.010999999999999999);
  const Scalar _tmp90 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp91 = _tmp89 - _tmp90;
  const Scalar _tmp92 = _tmp88 + _tmp91;
  const Scalar _tmp93 = _tmp89 + _tmp90;
  const Scalar _tmp94 = _tmp87 + _tmp93;
  const Scalar _tmp95 = _tmp65 * _tmp94;
  const Scalar _tmp96 = -_tmp65 * _tmp92 + _tmp95;
  const Scalar _tmp97 = _tmp78 * _tmp80;
  const Scalar _tmp98 = _tmp64 * _tmp92 - _tmp78 * _tmp95;
  const Scalar _tmp99 = _tmp78 * _tmp94;
  const Scalar _tmp100 = _tmp97 * _tmp98 + _tmp99;
  const Scalar _tmp101 = Scalar(1.0) * _tmp66;
  const Scalar _tmp102 = -_tmp101;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp102 + _tmp58);
  const Scalar _tmp104 = Scalar(1.0) * _tmp69;
  const Scalar _tmp105 = _tmp104 - _tmp57;
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = -_tmp100 * _tmp106 - _tmp94 + _tmp96 * _tmp97;
  const Scalar _tmp108 = _tmp87 + _tmp91;
  const Scalar _tmp109 = _tmp108 * _tmp56 - _tmp55 * _tmp99 - _tmp81 * _tmp98;
  const Scalar _tmp110 = -_tmp106 * _tmp109 - _tmp108 * _tmp55 + _tmp55 * _tmp94 - _tmp81 * _tmp96;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp112 = _tmp111 * _tmp82;
  const Scalar _tmp113 = _tmp110 * _tmp83;
  const Scalar _tmp114 = _tmp113 * (-_tmp107 * _tmp112 - _tmp76 + _tmp77 * _tmp97);
  const Scalar _tmp115 = _tmp107 + _tmp114;
  const Scalar _tmp116 = _tmp111 * _tmp79;
  const Scalar _tmp117 = _tmp80 * (-_tmp115 * _tmp116 - _tmp78);
  const Scalar _tmp118 = _tmp111 * _tmp115;
  const Scalar _tmp119 = _tmp42 * _tmp75 * (_tmp117 * _tmp65 + _tmp118 * _tmp55 + Scalar(1.0));
  const Scalar _tmp120 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp121 = _tmp101 * _tmp106 + _tmp104;
  const Scalar _tmp122 = 0;
  const Scalar _tmp123 = _tmp111 * _tmp122;
  const Scalar _tmp124 = Scalar(1.0) * _tmp80;
  const Scalar _tmp125 = Scalar(1.0) * _tmp103;
  const Scalar _tmp126 = _tmp105 * _tmp125 * _tmp80 * _tmp98 - _tmp124 * _tmp96;
  const Scalar _tmp127 = _tmp113 * (-_tmp112 * _tmp126 - _tmp124 * _tmp77);
  const Scalar _tmp128 = _tmp126 + _tmp127;
  const Scalar _tmp129 = _tmp111 * _tmp128;
  const Scalar _tmp130 = _tmp80 * (-_tmp116 * _tmp128 + Scalar(1.0));
  const Scalar _tmp131 = _tmp43 * _tmp75 * (_tmp129 * _tmp55 + _tmp130 * _tmp65);
  const Scalar _tmp132 = -_tmp119 * fh1 - _tmp120 * _tmp75 * (_tmp123 * _tmp55 - _tmp123 * _tmp85) -
                         _tmp131 * fh1 - _tmp86 * fh1;
  const Scalar _tmp133 = Scalar(1.0) / (_tmp132);
  const Scalar _tmp134 = _tmp88 + _tmp93;
  const Scalar _tmp135 = _tmp134 * fh1;
  const Scalar _tmp136 = _tmp135 * _tmp42 + Scalar(5.1796800000000003) * _tmp18 + _tmp21 * fv1;
  const Scalar _tmp137 = _tmp102 + _tmp46;
  const Scalar _tmp138 = _tmp106 * _tmp137;
  const Scalar _tmp139 = Scalar(1.0) / (_tmp104 - _tmp138 - _tmp51);
  const Scalar _tmp140 = Scalar(1.0) * _tmp139;
  const Scalar _tmp141 = _tmp103 * _tmp137;
  const Scalar _tmp142 = _tmp140 * _tmp141;
  const Scalar _tmp143 = -Scalar(1.0) * _tmp140 + Scalar(1.0) * _tmp142;
  const Scalar _tmp144 = _tmp113 * _tmp140;
  const Scalar _tmp145 = -_tmp109 * _tmp84 + _tmp137 * _tmp144;
  const Scalar _tmp146 = Scalar(1.0) * _tmp44 * (-_tmp125 * _tmp145 + _tmp144);
  const Scalar _tmp147 = _tmp109 * _tmp111;
  const Scalar _tmp148 = _tmp137 * _tmp139;
  const Scalar _tmp149 = -_tmp124 * _tmp98 + _tmp127 * _tmp148 - _tmp128 * _tmp147;
  const Scalar _tmp150 = Scalar(1.0) * _tmp43 * (-_tmp125 * _tmp149 + _tmp127 * _tmp140);
  const Scalar _tmp151 = _tmp121 * _tmp139;
  const Scalar _tmp152 = _tmp103 * (_tmp102 - _tmp122 * _tmp147 - _tmp137 * _tmp151);
  const Scalar _tmp153 = -_tmp135 * _tmp43 - Scalar(5.1796800000000003) * _tmp27 - _tmp32 * fv1;
  const Scalar _tmp154 = _tmp138 * _tmp140 + Scalar(1.0);
  const Scalar _tmp155 = _tmp106 * _tmp140;
  const Scalar _tmp156 = -Scalar(1.0) * _tmp125 * _tmp154 + Scalar(1.0) * _tmp155;
  const Scalar _tmp157 = _tmp100 + _tmp114 * _tmp148 - _tmp115 * _tmp147;
  const Scalar _tmp158 = Scalar(1.0) * _tmp42 * (_tmp114 * _tmp140 - _tmp125 * _tmp157);
  const Scalar _tmp159 =
      Scalar(1.0) * _tmp120 * (-_tmp121 * _tmp140 - Scalar(1.0) * _tmp152 + Scalar(1.0)) +
      _tmp136 * _tmp143 + _tmp146 * fh1 + _tmp150 * fh1 + _tmp153 * _tmp156 + _tmp158 * fh1;
  const Scalar _tmp160 = std::asinh(_tmp133 * _tmp159);
  const Scalar _tmp161 = Scalar(1.0) * _tmp160;
  const Scalar _tmp162 = std::pow(_tmp132, Scalar(-2));
  const Scalar _tmp163 = -_tmp119 - _tmp131 - _tmp86;
  const Scalar _tmp164 = _tmp162 * _tmp163;
  const Scalar _tmp165 = _tmp134 * _tmp43;
  const Scalar _tmp166 = _tmp134 * _tmp42;
  const Scalar _tmp167 =
      (_tmp133 * (_tmp143 * _tmp166 + _tmp146 + _tmp150 - _tmp156 * _tmp165 + _tmp158) -
       _tmp159 * _tmp164) /
      std::sqrt(Scalar(std::pow(_tmp159, Scalar(2)) * _tmp162 + 1));
  const Scalar _tmp168 = Scalar(9.6622558468725703) * _tmp132;
  const Scalar _tmp169 =
      -_tmp160 * _tmp168 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp67), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp70), Scalar(2))));
  const Scalar _tmp170 = Scalar(0.1034955) * _tmp133;
  const Scalar _tmp171 = _tmp169 * _tmp170;
  const Scalar _tmp172 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp173 = _tmp120 * _tmp123;
  const Scalar _tmp174 = _tmp117 * _tmp42;
  const Scalar _tmp175 = _tmp44 * _tmp84;
  const Scalar _tmp176 = _tmp175 * fh1;
  const Scalar _tmp177 = _tmp130 * _tmp43;
  const Scalar _tmp178 = -_tmp173 * _tmp81 + _tmp174 * fh1 - _tmp176 * _tmp81 + _tmp177 * fh1;
  const Scalar _tmp179 = Scalar(1.0) / (_tmp178);
  const Scalar _tmp180 = _tmp103 * _tmp154;
  const Scalar _tmp181 = _tmp103 * _tmp157 * _tmp42;
  const Scalar _tmp182 = _tmp103 * _tmp145 * _tmp44;
  const Scalar _tmp183 = _tmp136 * _tmp140;
  const Scalar _tmp184 = _tmp103 * _tmp149 * _tmp43;
  const Scalar _tmp185 = _tmp120 * _tmp152 - _tmp141 * _tmp183 + _tmp153 * _tmp180 + _tmp181 * fh1 +
                         _tmp182 * fh1 + _tmp184 * fh1;
  const Scalar _tmp186 = std::asinh(_tmp179 * _tmp185);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = std::pow(_tmp178, Scalar(-2));
  const Scalar _tmp189 = _tmp174 - _tmp175 * _tmp81 + _tmp177;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 =
      (_tmp179 * (-_tmp142 * _tmp166 - _tmp165 * _tmp180 + _tmp181 + _tmp182 + _tmp184) -
       _tmp185 * _tmp190) /
      std::sqrt(Scalar(std::pow(_tmp185, Scalar(2)) * _tmp188 + 1));
  const Scalar _tmp192 = Scalar(9.6622558468725703) * _tmp189;
  const Scalar _tmp193 = Scalar(9.6622558468725703) * _tmp178;
  const Scalar _tmp194 = Scalar(0.1034955) * _tmp179;
  const Scalar _tmp195 =
      -_tmp186 * _tmp193 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp59 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp61 - 1), Scalar(2))));
  const Scalar _tmp196 = _tmp194 * _tmp195;
  const Scalar _tmp197 = _tmp127 * _tmp139 * _tmp43;
  const Scalar _tmp198 = _tmp114 * _tmp139 * _tmp42;
  const Scalar _tmp199 = _tmp144 * _tmp44;
  const Scalar _tmp200 = _tmp120 * _tmp151 - _tmp153 * _tmp155 + _tmp183 - _tmp197 * fh1 -
                         _tmp198 * fh1 - _tmp199 * fh1;
  const Scalar _tmp201 = _tmp129 * _tmp43;
  const Scalar _tmp202 = _tmp118 * _tmp42;
  const Scalar _tmp203 = _tmp173 + _tmp176 + _tmp201 * fh1 + _tmp202 * fh1;
  const Scalar _tmp204 = Scalar(1.0) / (_tmp203);
  const Scalar _tmp205 = std::asinh(_tmp200 * _tmp204);
  const Scalar _tmp206 = Scalar(1.0) * _tmp205;
  const Scalar _tmp207 = Scalar(9.6622558468725703) * _tmp203;
  const Scalar _tmp208 =
      -_tmp205 * _tmp207 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp52), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp47 - 1), Scalar(2))));
  const Scalar _tmp209 = Scalar(0.1034955) * _tmp204;
  const Scalar _tmp210 = _tmp208 * _tmp209;
  const Scalar _tmp211 = _tmp175 + _tmp201 + _tmp202;
  const Scalar _tmp212 = Scalar(9.6622558468725703) * _tmp211;
  const Scalar _tmp213 = std::pow(_tmp203, Scalar(-2));
  const Scalar _tmp214 = _tmp211 * _tmp213;
  const Scalar _tmp215 = (-_tmp200 * _tmp214 + _tmp204 * (_tmp140 * _tmp166 + _tmp155 * _tmp165 -
                                                          _tmp197 - _tmp198 - _tmp199)) /
                         std::sqrt(Scalar(std::pow(_tmp200, Scalar(2)) * _tmp213 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      Scalar(9.6622558468725703) * fh1 *
          (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp3) -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp1 * _tmp38 - _tmp34) -
            _tmp35 * _tmp37) *
               std::cosh(_tmp36)) -
      Scalar(9.6622558468725703) * std::sinh(_tmp3) -
      Scalar(9.6622558468725703) * std::sinh(_tmp36);
  _res(1, 0) = _tmp168 * (-Scalar(1.0) * _tmp167 * std::cosh(_tmp161) -
                          (-Scalar(0.1034955) * _tmp164 * _tmp169 +
                           _tmp170 * (-_tmp160 * _tmp172 - _tmp167 * _tmp168)) *
                              std::cosh(_tmp171)) +
               _tmp172 * (-std::sinh(_tmp161) - std::sinh(_tmp171));
  _res(2, 0) = _tmp192 * (-std::sinh(_tmp187) - std::sinh(_tmp196)) +
               _tmp193 * (-Scalar(1.0) * _tmp191 * std::cosh(_tmp187) -
                          (-Scalar(0.1034955) * _tmp190 * _tmp195 +
                           _tmp194 * (-_tmp186 * _tmp192 - _tmp191 * _tmp193)) *
                              std::cosh(_tmp196));
  _res(3, 0) = _tmp207 * (-Scalar(1.0) * _tmp215 * std::cosh(_tmp206) -
                          (-Scalar(0.1034955) * _tmp208 * _tmp214 +
                           _tmp209 * (-_tmp205 * _tmp212 - _tmp207 * _tmp215)) *
                              std::cosh(_tmp210)) +
               _tmp212 * (-std::sinh(_tmp206) - std::sinh(_tmp210));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym