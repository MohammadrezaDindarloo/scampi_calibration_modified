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
 * Symbolic function: IK_residual_func_cost2_Nl2
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl2(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 529

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (161)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = 2 * _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp11 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp1;
  const Scalar _tmp14 = _tmp13 * _tmp5;
  const Scalar _tmp15 = _tmp3 * _tmp6;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp12 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp9;
  const Scalar _tmp20 = _tmp19 + position_vector(1, 0);
  const Scalar _tmp21 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = _tmp3 * _tmp5;
  const Scalar _tmp25 = _tmp13 * _tmp6;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(69.216682149330126) *
                            std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp20 - 1), Scalar(2)) +
                        Scalar(3.9500537080266964) *
                            std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp31 - 1), Scalar(2));
  const Scalar _tmp33 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp34 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp36 = -_tmp35;
  const Scalar _tmp37 = -Scalar(0.010999999999999999) * _tmp10 -
                        Scalar(0.010999999999999999) * _tmp21 + Scalar(-0.010999999999999999);
  const Scalar _tmp38 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp39 = _tmp37 - _tmp38;
  const Scalar _tmp40 = _tmp36 + _tmp39;
  const Scalar _tmp41 = _tmp18 + _tmp8;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 + Scalar(8.3885017487099702);
  const Scalar _tmp44 = _tmp22 + _tmp29;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 + Scalar(-2.5193355532036801);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp46 * _tmp47;
  const Scalar _tmp49 = _tmp43 * _tmp47;
  const Scalar _tmp50 = _tmp12 + _tmp17;
  const Scalar _tmp51 = _tmp50 + _tmp8;
  const Scalar _tmp52 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(-4.7744369927459998);
  const Scalar _tmp54 = _tmp27 + _tmp28;
  const Scalar _tmp55 = _tmp22 + _tmp54;
  const Scalar _tmp56 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 + Scalar(-2.7171519410699099);
  const Scalar _tmp58 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp59 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp60 = Scalar(1.0) / (_tmp57);
  const Scalar _tmp61 = _tmp58 * _tmp60;
  const Scalar _tmp62 = _tmp61 * (-_tmp51 * _tmp57 * _tmp59 + _tmp53 * _tmp55 * _tmp59);
  const Scalar _tmp63 = _tmp41 * _tmp48 - _tmp44 * _tmp49 + _tmp48 * _tmp62;
  const Scalar _tmp64 = _tmp53 * _tmp60;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp48 * _tmp64 - _tmp49);
  const Scalar _tmp66 = _tmp64 * _tmp65;
  const Scalar _tmp67 = _tmp37 + _tmp38;
  const Scalar _tmp68 = _tmp35 + _tmp67;
  const Scalar _tmp69 = _tmp35 + _tmp39;
  const Scalar _tmp70 = _tmp64 * _tmp68;
  const Scalar _tmp71 = -_tmp48 * _tmp70 + _tmp49 * _tmp69;
  const Scalar _tmp72 = _tmp66 * _tmp71 + _tmp70;
  const Scalar _tmp73 = Scalar(1.0) * _tmp51;
  const Scalar _tmp74 = -_tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp41 + _tmp74);
  const Scalar _tmp76 = Scalar(1.0) * _tmp55;
  const Scalar _tmp77 = _tmp75 * (-_tmp44 + _tmp76);
  const Scalar _tmp78 = _tmp48 * _tmp68 - _tmp48 * _tmp69;
  const Scalar _tmp79 = _tmp66 * _tmp78 - _tmp68 - _tmp72 * _tmp77;
  const Scalar _tmp80 = _tmp23 + _tmp54;
  const Scalar _tmp81 = _tmp80 + position_vector(0, 0);
  const Scalar _tmp82 = _tmp81 + Scalar(1.7965602546229);
  const Scalar _tmp83 = _tmp50 + _tmp9;
  const Scalar _tmp84 = _tmp83 + position_vector(1, 0);
  const Scalar _tmp85 = _tmp84 + Scalar(-4.83288938413423);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp82 * _tmp86;
  const Scalar _tmp88 = _tmp36 + _tmp67;
  const Scalar _tmp89 = _tmp85 * _tmp86;
  const Scalar _tmp90 = _tmp64 * _tmp87 - _tmp89;
  const Scalar _tmp91 = _tmp65 * _tmp90;
  const Scalar _tmp92 = -_tmp70 * _tmp87 - _tmp71 * _tmp91 + _tmp88 * _tmp89;
  const Scalar _tmp93 = _tmp68 * _tmp87 - _tmp77 * _tmp92 - _tmp78 * _tmp91 - _tmp87 * _tmp88;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp62 * _tmp87 - _tmp63 * _tmp91 - _tmp80 * _tmp89 + _tmp83 * _tmp87;
  const Scalar _tmp96 = _tmp94 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp98 = _tmp93 * _tmp97;
  const Scalar _tmp99 = _tmp98 * (-_tmp62 + _tmp63 * _tmp66 - _tmp79 * _tmp96);
  const Scalar _tmp100 = _tmp79 + _tmp99;
  const Scalar _tmp101 = _tmp87 * _tmp94;
  const Scalar _tmp102 = _tmp90 * _tmp94;
  const Scalar _tmp103 = -_tmp100 * _tmp102 - _tmp64;
  const Scalar _tmp104 = _tmp48 * _tmp65;
  const Scalar _tmp105 = _tmp31 + Scalar(1.9874742031097401);
  const Scalar _tmp106 = _tmp20 + Scalar(8.3196563720703107);
  const Scalar _tmp107 =
      std::pow(Scalar(std::pow(_tmp105, Scalar(2)) + std::pow(_tmp106, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp108 = _tmp105 * _tmp107;
  const Scalar _tmp109 = _tmp108 * fh1;
  const Scalar _tmp110 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp111 = _tmp73 * _tmp77 + _tmp76;
  const Scalar _tmp112 = 0;
  const Scalar _tmp113 = _tmp112 * _tmp94;
  const Scalar _tmp114 = Scalar(1.0) * _tmp97;
  const Scalar _tmp115 = Scalar(1.0) * _tmp65;
  const Scalar _tmp116 = _tmp115 * _tmp90 * _tmp97;
  const Scalar _tmp117 = _tmp106 * _tmp107;
  const Scalar _tmp118 = fh1 * (-_tmp108 * _tmp19 + _tmp117 * _tmp30);
  const Scalar _tmp119 = _tmp115 * _tmp71;
  const Scalar _tmp120 = -_tmp115 * _tmp78 + _tmp119 * _tmp77;
  const Scalar _tmp121 = _tmp98 * (-_tmp115 * _tmp63 - _tmp120 * _tmp96);
  const Scalar _tmp122 = _tmp120 + _tmp121;
  const Scalar _tmp123 = -_tmp102 * _tmp122 + Scalar(1.0);
  const Scalar _tmp124 = _tmp117 * fh1;
  const Scalar _tmp125 = -_tmp109 * _tmp61 * (_tmp100 * _tmp101 + _tmp103 * _tmp104 + Scalar(1.0)) -
                         _tmp110 * _tmp61 * (-_tmp113 * _tmp48 * _tmp91 + _tmp113 * _tmp87) -
                         _tmp118 * _tmp61 * (_tmp114 * _tmp87 - _tmp116 * _tmp48) -
                         _tmp124 * _tmp61 * (_tmp101 * _tmp122 + _tmp104 * _tmp123);
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = Scalar(22.795248597701466) *
                             std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp52), Scalar(2)) +
                         Scalar(7.3829146708599787) *
                             std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp56), Scalar(2));
  const Scalar _tmp128 = _tmp74 + _tmp83;
  const Scalar _tmp129 = _tmp128 * _tmp77;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 + _tmp76 - _tmp80);
  const Scalar _tmp131 = _tmp128 * _tmp130;
  const Scalar _tmp132 = _tmp92 * _tmp94;
  const Scalar _tmp133 = -_tmp119 + _tmp121 * _tmp131 - _tmp122 * _tmp132;
  const Scalar _tmp134 = Scalar(1.0) * _tmp75;
  const Scalar _tmp135 = Scalar(1.0) * _tmp130;
  const Scalar _tmp136 = _tmp135 * _tmp77;
  const Scalar _tmp137 = _tmp75 * (_tmp129 * _tmp135 + Scalar(1.0));
  const Scalar _tmp138 = _tmp40 * fh1;
  const Scalar _tmp139 = -_tmp117 * _tmp138 - Scalar(3.29616) * _tmp16 - _tmp19 * fv1;
  const Scalar _tmp140 = _tmp108 * _tmp138 + Scalar(3.29616) * _tmp26 + _tmp30 * fv1;
  const Scalar _tmp141 = _tmp128 * _tmp75;
  const Scalar _tmp142 = -_tmp100 * _tmp132 + _tmp131 * _tmp99 + _tmp72;
  const Scalar _tmp143 = _tmp111 * _tmp130;
  const Scalar _tmp144 = -_tmp112 * _tmp132 - _tmp128 * _tmp143 + _tmp74;
  const Scalar _tmp145 = _tmp135 * _tmp98;
  const Scalar _tmp146 = -_tmp114 * _tmp92 + _tmp128 * _tmp145;
  const Scalar _tmp147 = std::asinh(
      _tmp126 * (Scalar(1.0) * _tmp109 * (-_tmp134 * _tmp142 + _tmp135 * _tmp99) +
                 Scalar(1.0) * _tmp110 * (-_tmp111 * _tmp135 - _tmp134 * _tmp144 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp118 * (-_tmp134 * _tmp146 + _tmp145) +
                 Scalar(1.0) * _tmp124 * (_tmp121 * _tmp135 - _tmp133 * _tmp134) +
                 Scalar(1.0) * _tmp139 * (_tmp136 - Scalar(1.0) * _tmp137) +
                 Scalar(1.0) * _tmp140 * (_tmp135 * _tmp141 - _tmp135)));
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp125;
  const Scalar _tmp149 = Scalar(6.347051629636093) *
                             std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp45), Scalar(2)) +
                         Scalar(70.366961588110229) *
                             std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp42 - 1), Scalar(2));
  const Scalar _tmp150 = _tmp135 * _tmp140;
  const Scalar _tmp151 = _tmp110 * _tmp113;
  const Scalar _tmp152 = _tmp103 * _tmp109 * _tmp65 - _tmp116 * _tmp118 +
                         _tmp123 * _tmp124 * _tmp65 - _tmp151 * _tmp91;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 =
      std::asinh(_tmp153 * (_tmp109 * _tmp142 * _tmp75 + _tmp110 * _tmp144 * _tmp75 +
                            _tmp118 * _tmp146 * _tmp75 + _tmp124 * _tmp133 * _tmp75 +
                            _tmp137 * _tmp139 - _tmp141 * _tmp150));
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp152;
  const Scalar _tmp156 = Scalar(23.356819799277336) *
                             std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp84), Scalar(2)) +
                         Scalar(3.2276287484906994) *
                             std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp81 - 1), Scalar(2));
  const Scalar _tmp157 =
      _tmp100 * _tmp109 * _tmp94 + _tmp114 * _tmp118 + _tmp122 * _tmp124 * _tmp94 + _tmp151;
  const Scalar _tmp158 = Scalar(1.0) / (_tmp157);
  const Scalar _tmp159 =
      std::asinh(_tmp158 * (-_tmp109 * _tmp130 * _tmp99 + _tmp110 * _tmp143 - _tmp118 * _tmp145 -
                            _tmp121 * _tmp124 * _tmp130 - _tmp136 * _tmp139 + _tmp150));
  const Scalar _tmp160 = Scalar(9.6622558468725703) * _tmp157;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp34 * (-std::sinh(Scalar(1.0) * _tmp33) -
                std::sinh(Scalar(0.1034955) * _tmp0 * (-std::sqrt(_tmp32) - _tmp33 * _tmp34))) -
      Scalar(8.4718465805053693) *
          std::sqrt(Scalar(Scalar(0.013932974274013004) * _tmp32 +
                           std::pow(Scalar(-Scalar(0.11803802045956635) * _tmp40 -
                                           Scalar(0.11803802045956635) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(1, 0) =
      _tmp148 *
          (-std::sinh(Scalar(1.0) * _tmp147) -
           std::sinh(Scalar(0.1034955) * _tmp126 * (-std::sqrt(_tmp127) - _tmp147 * _tmp148))) -
      Scalar(8.3641088633305802) *
          std::sqrt(Scalar(Scalar(0.014294226073078949) * _tmp127 +
                           std::pow(Scalar(-Scalar(0.11955846299229073) * _tmp68 -
                                           Scalar(0.11955846299229073) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(2, 0) =
      _tmp155 *
          (-std::sinh(Scalar(1.0) * _tmp154) -
           std::sinh(Scalar(0.1034955) * _tmp153 * (-std::sqrt(_tmp149) - _tmp154 * _tmp155))) -
      Scalar(8.4690207536791995) *
          std::sqrt(Scalar(Scalar(0.013942273753185566) * _tmp149 +
                           std::pow(Scalar(-Scalar(0.11807740576920533) * _tmp69 -
                                           Scalar(0.11807740576920533) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(3, 0) =
      _tmp160 *
          (-std::sinh(Scalar(1.0) * _tmp159) -
           std::sinh(Scalar(0.1034955) * _tmp158 * (-std::sqrt(_tmp156) - _tmp159 * _tmp160))) -
      Scalar(8.3701287145205097) *
          std::sqrt(Scalar(Scalar(0.014273672465547484) * _tmp156 +
                           std::pow(Scalar(-Scalar(0.11947247576553975) * _tmp88 -
                                           Scalar(0.11947247576553975) * position_vector(2, 0) + 1),
                                    Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym