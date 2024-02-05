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
 * Symbolic function: IK_residual_func_cost2_Nl16
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl16(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 533

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (161)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp1 * _tmp9;
  const Scalar _tmp11 = _tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp1 * _tmp6;
  const Scalar _tmp14 = _tmp3 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp22 = _tmp1 * _tmp7;
  const Scalar _tmp23 = _tmp6 * _tmp9;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = Scalar(7.3829146708599787) *
                            std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp18), Scalar(2)) +
                        Scalar(22.795248597701466) *
                            std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp28), Scalar(2));
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp33 =
      -Scalar(0.010999999999999999) * _tmp2 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp34 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp38 = -_tmp19;
  const Scalar _tmp39 = -_tmp21 + _tmp25;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp41 + Scalar(8.3196563720703107);
  const Scalar _tmp43 = -_tmp5;
  const Scalar _tmp44 = _tmp12 - _tmp15;
  const Scalar _tmp45 = _tmp43 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 + Scalar(1.9874742031097401);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp42 * _tmp48;
  const Scalar _tmp50 = _tmp26 + _tmp38;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 + Scalar(-4.83288938413423);
  const Scalar _tmp53 = _tmp16 + _tmp43;
  const Scalar _tmp54 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp55 = _tmp54 + Scalar(1.7965602546229);
  const Scalar _tmp56 = Scalar(1.0) / (_tmp55);
  const Scalar _tmp57 = _tmp52 * _tmp56;
  const Scalar _tmp58 = _tmp47 * _tmp48;
  const Scalar _tmp59 = Scalar(1.0) / (-_tmp49 + _tmp57 * _tmp58);
  const Scalar _tmp60 = _tmp58 * _tmp59;
  const Scalar _tmp61 = Scalar(1.0) * _tmp53;
  const Scalar _tmp62 = Scalar(1.0) * _tmp50;
  const Scalar _tmp63 = -_tmp62;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp40 + _tmp63);
  const Scalar _tmp65 = _tmp64 * (-_tmp45 + _tmp61);
  const Scalar _tmp66 = _tmp61 + _tmp62 * _tmp65;
  const Scalar _tmp67 = 0;
  const Scalar _tmp68 = _tmp33 - _tmp34;
  const Scalar _tmp69 = _tmp32 + _tmp68;
  const Scalar _tmp70 = _tmp19 + _tmp39;
  const Scalar _tmp71 = _tmp70 + position_vector(1, 0);
  const Scalar _tmp72 = _tmp71 + Scalar(8.3885017487099702);
  const Scalar _tmp73 = _tmp44 + _tmp5;
  const Scalar _tmp74 = _tmp73 + position_vector(0, 0);
  const Scalar _tmp75 = _tmp74 + Scalar(-2.5193355532036801);
  const Scalar _tmp76 = std::pow(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp75, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp77 = _tmp75 * _tmp76;
  const Scalar _tmp78 = _tmp69 * _tmp77;
  const Scalar _tmp79 = -_tmp32;
  const Scalar _tmp80 = _tmp35 + _tmp79;
  const Scalar _tmp81 = _tmp68 + _tmp79;
  const Scalar _tmp82 = _tmp58 * _tmp69;
  const Scalar _tmp83 = -_tmp58 * _tmp81 + _tmp82;
  const Scalar _tmp84 = _tmp72 * _tmp76;
  const Scalar _tmp85 = _tmp57 * _tmp77 - _tmp84;
  const Scalar _tmp86 = _tmp59 * _tmp85;
  const Scalar _tmp87 = _tmp49 * _tmp81 - _tmp57 * _tmp82;
  const Scalar _tmp88 = -_tmp57 * _tmp78 + _tmp80 * _tmp84 - _tmp86 * _tmp87;
  const Scalar _tmp89 = -_tmp65 * _tmp88 - _tmp77 * _tmp80 + _tmp78 - _tmp83 * _tmp86;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp85 * _tmp90;
  const Scalar _tmp92 = _tmp67 * _tmp91;
  const Scalar _tmp93 = _tmp67 * _tmp90;
  const Scalar _tmp94 =
      std::sqrt(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp55, Scalar(2))));
  const Scalar _tmp95 = _tmp56 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp97 = _tmp95 * (-_tmp50 * _tmp55 * _tmp96 + _tmp52 * _tmp53 * _tmp96);
  const Scalar _tmp98 = _tmp40 * _tmp58 - _tmp45 * _tmp49 + _tmp58 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) * _tmp59;
  const Scalar _tmp100 = _tmp87 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp65 - _tmp83 * _tmp99;
  const Scalar _tmp102 = _tmp70 * _tmp77 - _tmp73 * _tmp84 + _tmp77 * _tmp97 - _tmp86 * _tmp98;
  const Scalar _tmp103 = _tmp102 * _tmp90;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp105 = _tmp104 * _tmp89;
  const Scalar _tmp106 = _tmp105 * (-_tmp101 * _tmp103 - _tmp98 * _tmp99);
  const Scalar _tmp107 = _tmp101 + _tmp106;
  const Scalar _tmp108 = _tmp77 * _tmp90;
  const Scalar _tmp109 = -_tmp107 * _tmp91 + Scalar(1.0);
  const Scalar _tmp110 = _tmp28 + Scalar(-4.7744369927459998);
  const Scalar _tmp111 = _tmp18 + Scalar(-2.7171519410699099);
  const Scalar _tmp112 =
      std::pow(Scalar(std::pow(_tmp110, Scalar(2)) + std::pow(_tmp111, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp113 * fh1;
  const Scalar _tmp115 = Scalar(1.0) * _tmp104;
  const Scalar _tmp116 = _tmp111 * _tmp112;
  const Scalar _tmp117 = fh1 * (_tmp113 * _tmp17 - _tmp116 * _tmp27);
  const Scalar _tmp118 = _tmp57 * _tmp59;
  const Scalar _tmp119 = _tmp118 * _tmp87 + _tmp57 * _tmp69;
  const Scalar _tmp120 = _tmp118 * _tmp83 - _tmp119 * _tmp65 - _tmp69;
  const Scalar _tmp121 = _tmp105 * (-_tmp103 * _tmp120 + _tmp118 * _tmp98 - _tmp97);
  const Scalar _tmp122 = _tmp120 + _tmp121;
  const Scalar _tmp123 = -_tmp122 * _tmp91 - _tmp57;
  const Scalar _tmp124 = _tmp116 * fh1;
  const Scalar _tmp125 = -_tmp114 * _tmp95 * (_tmp107 * _tmp108 + _tmp109 * _tmp60) -
                         _tmp117 * _tmp95 * (-_tmp115 * _tmp58 * _tmp86 + _tmp115 * _tmp77) -
                         _tmp124 * _tmp95 * (_tmp108 * _tmp122 + _tmp123 * _tmp60 + Scalar(1.0)) -
                         _tmp37 * _tmp95 * (-_tmp60 * _tmp92 + _tmp77 * _tmp93);
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = _tmp88 * _tmp90;
  const Scalar _tmp128 = _tmp63 + _tmp70;
  const Scalar _tmp129 = _tmp128 * _tmp65;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 + _tmp61 - _tmp73);
  const Scalar _tmp131 = _tmp128 * _tmp130;
  const Scalar _tmp132 = -_tmp100 + _tmp106 * _tmp131 - _tmp107 * _tmp127;
  const Scalar _tmp133 = Scalar(1.0) * _tmp64;
  const Scalar _tmp134 = Scalar(1.0) * _tmp130;
  const Scalar _tmp135 = _tmp128 * _tmp134;
  const Scalar _tmp136 = _tmp105 * _tmp135 - _tmp115 * _tmp88;
  const Scalar _tmp137 = _tmp105 * _tmp134;
  const Scalar _tmp138 = _tmp130 * _tmp66;
  const Scalar _tmp139 = -_tmp128 * _tmp138 + _tmp63 - _tmp88 * _tmp93;
  const Scalar _tmp140 = _tmp119 + _tmp121 * _tmp131 - _tmp122 * _tmp127;
  const Scalar _tmp141 = _tmp36 * fh1;
  const Scalar _tmp142 = -_tmp113 * _tmp141 - Scalar(3.29616) * _tmp24 - _tmp27 * fv1;
  const Scalar _tmp143 = _tmp129 * _tmp134 + Scalar(1.0);
  const Scalar _tmp144 = _tmp134 * _tmp65;
  const Scalar _tmp145 = Scalar(3.29616) * _tmp11 + _tmp116 * _tmp141 + _tmp17 * fv1;
  const Scalar _tmp146 = std::asinh(
      _tmp126 * (Scalar(1.0) * _tmp114 * (_tmp106 * _tmp134 - _tmp132 * _tmp133) +
                 Scalar(1.0) * _tmp117 * (-_tmp133 * _tmp136 + _tmp137) +
                 Scalar(1.0) * _tmp124 * (_tmp121 * _tmp134 - _tmp133 * _tmp140) +
                 Scalar(1.0) * _tmp142 * (-_tmp133 * _tmp143 + _tmp144) +
                 Scalar(1.0) * _tmp145 * (-_tmp134 + _tmp135 * _tmp64) +
                 Scalar(1.0) * _tmp37 * (-_tmp133 * _tmp139 - _tmp134 * _tmp66 + Scalar(1.0))));
  const Scalar _tmp147 = Scalar(23.356819799277336) *
                             std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp51), Scalar(2)) +
                         Scalar(3.2276287484906994) *
                             std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp54 - 1), Scalar(2));
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp125;
  const Scalar _tmp149 =
      Scalar(69.216682149330126) *
          std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp41 - 1), Scalar(2)) +
      Scalar(3.9500537080266964) *
          std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp46 - 1), Scalar(2));
  const Scalar _tmp150 = _tmp115 * _tmp117;
  const Scalar _tmp151 = _tmp109 * _tmp114 * _tmp59 + _tmp123 * _tmp124 * _tmp59 -
                         _tmp150 * _tmp86 - _tmp37 * _tmp59 * _tmp92;
  const Scalar _tmp152 = Scalar(1.0) / (_tmp151);
  const Scalar _tmp153 = _tmp134 * _tmp145;
  const Scalar _tmp154 =
      std::asinh(_tmp152 * (_tmp114 * _tmp132 * _tmp64 + _tmp117 * _tmp136 * _tmp64 +
                            _tmp124 * _tmp140 * _tmp64 - _tmp128 * _tmp153 * _tmp64 +
                            _tmp139 * _tmp37 * _tmp64 + _tmp142 * _tmp143 * _tmp64));
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp151;
  const Scalar _tmp156 =
      _tmp107 * _tmp114 * _tmp90 + _tmp122 * _tmp124 * _tmp90 + _tmp150 + _tmp37 * _tmp93;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 = std::asinh(_tmp157 * (-_tmp106 * _tmp114 * _tmp130 - _tmp117 * _tmp137 -
                                               _tmp121 * _tmp124 * _tmp130 + _tmp138 * _tmp37 -
                                               _tmp142 * _tmp144 + _tmp153));
  const Scalar _tmp159 = Scalar(6.347051629636093) *
                             std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp74), Scalar(2)) +
                         Scalar(70.366961588110229) *
                             std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp71 - 1), Scalar(2));
  const Scalar _tmp160 = Scalar(9.6622558468725703) * _tmp156;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp31 * (-std::sinh(Scalar(1.0) * _tmp30) -
                std::sinh(Scalar(0.1034955) * _tmp0 * (-std::sqrt(_tmp29) - _tmp30 * _tmp31))) -
      Scalar(8.3641088633305802) *
          std::sqrt(Scalar(Scalar(0.014294226073078949) * _tmp29 +
                           std::pow(Scalar(-Scalar(0.11955846299229073) * _tmp36 -
                                           Scalar(0.11955846299229073) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(1, 0) =
      _tmp148 *
          (-std::sinh(Scalar(1.0) * _tmp146) -
           std::sinh(Scalar(0.1034955) * _tmp126 * (-_tmp146 * _tmp148 - std::sqrt(_tmp147)))) -
      Scalar(8.3701287145205097) *
          std::sqrt(Scalar(Scalar(0.014273672465547484) * _tmp147 +
                           std::pow(Scalar(-Scalar(0.11947247576553975) * _tmp69 -
                                           Scalar(0.11947247576553975) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(2, 0) =
      _tmp155 *
          (-std::sinh(Scalar(1.0) * _tmp154) -
           std::sinh(Scalar(0.1034955) * _tmp152 * (-std::sqrt(_tmp149) - _tmp154 * _tmp155))) -
      Scalar(8.4718465805053693) *
          std::sqrt(Scalar(Scalar(0.013932974274013004) * _tmp149 +
                           std::pow(Scalar(-Scalar(0.11803802045956635) * _tmp81 -
                                           Scalar(0.11803802045956635) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(3, 0) =
      _tmp160 *
          (-std::sinh(Scalar(1.0) * _tmp158) -
           std::sinh(Scalar(0.1034955) * _tmp157 * (-_tmp158 * _tmp160 - std::sqrt(_tmp159)))) -
      Scalar(8.4690207536791995) *
          std::sqrt(Scalar(Scalar(0.013942273753185566) * _tmp159 +
                           std::pow(Scalar(-Scalar(0.11807740576920533) * _tmp80 -
                                           Scalar(0.11807740576920533) * position_vector(2, 0) + 1),
                                    Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
