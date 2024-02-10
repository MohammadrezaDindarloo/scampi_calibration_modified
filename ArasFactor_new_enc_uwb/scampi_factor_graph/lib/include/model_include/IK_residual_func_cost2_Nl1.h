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
 * Symbolic function: IK_residual_func_cost2_Nl1
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 531

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (160)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp1 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp3 * _tmp9;
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp12 = 2 * _tmp3;
  const Scalar _tmp13 = _tmp12 * _tmp7;
  const Scalar _tmp14 = _tmp1 * _tmp9;
  const Scalar _tmp15 = _tmp13 - _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = -_tmp11 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp24 = _tmp1 * _tmp12;
  const Scalar _tmp25 = _tmp7 * _tmp9;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -_tmp23 + _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(0, 0);
  const Scalar _tmp31 = Scalar(69.216682149330126) *
                            std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp19 - 1), Scalar(2)) +
                        Scalar(3.9500537080266964) *
                            std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp30 - 1), Scalar(2));
  const Scalar _tmp32 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp35 = -_tmp34;
  const Scalar _tmp36 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp38 = _tmp36 - _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp41 = _tmp23 + _tmp27;
  const Scalar _tmp42 = _tmp21 + _tmp41;
  const Scalar _tmp43 = Scalar(1.0) * _tmp42;
  const Scalar _tmp44 = _tmp11 + _tmp16;
  const Scalar _tmp45 = _tmp44 + _tmp6;
  const Scalar _tmp46 = Scalar(1.0) * _tmp45;
  const Scalar _tmp47 = -_tmp46;
  const Scalar _tmp48 = _tmp17 + _tmp5;
  const Scalar _tmp49 = Scalar(1.0) / (_tmp47 + _tmp48);
  const Scalar _tmp50 = _tmp20 + _tmp28;
  const Scalar _tmp51 = _tmp43 - _tmp50;
  const Scalar _tmp52 = _tmp49 * _tmp51;
  const Scalar _tmp53 = _tmp43 + _tmp46 * _tmp52;
  const Scalar _tmp54 = _tmp44 + _tmp5;
  const Scalar _tmp55 = _tmp47 + _tmp54;
  const Scalar _tmp56 = _tmp52 * _tmp55;
  const Scalar _tmp57 = _tmp20 + _tmp41;
  const Scalar _tmp58 = Scalar(1.0) / (_tmp43 - _tmp56 - _tmp57);
  const Scalar _tmp59 = Scalar(1.0) * _tmp58;
  const Scalar _tmp60 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(-4.7744369927459998);
  const Scalar _tmp62 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp63 = _tmp62 + Scalar(-2.7171519410699099);
  const Scalar _tmp64 = std::pow(Scalar(std::pow(_tmp61, Scalar(2)) + std::pow(_tmp63, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = _tmp34 + _tmp38;
  const Scalar _tmp67 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp68 = _tmp67 + Scalar(-2.5193355532036801);
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(8.3885017487099702);
  const Scalar _tmp72 = _tmp69 * _tmp71;
  const Scalar _tmp73 = _tmp66 * _tmp72;
  const Scalar _tmp74 = _tmp36 + _tmp37;
  const Scalar _tmp75 = _tmp34 + _tmp74;
  const Scalar _tmp76 = _tmp61 * _tmp64;
  const Scalar _tmp77 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp78 = _tmp77 + Scalar(1.7965602546229);
  const Scalar _tmp79 = _tmp48 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 + Scalar(-4.83288938413423);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp78 * _tmp81;
  const Scalar _tmp83 = _tmp35 + _tmp74;
  const Scalar _tmp84 = _tmp80 * _tmp81;
  const Scalar _tmp85 = -_tmp73 * _tmp82 + _tmp83 * _tmp84;
  const Scalar _tmp86 = _tmp65 * _tmp72 - _tmp76;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp72 * _tmp82 - _tmp84);
  const Scalar _tmp88 = _tmp86 * _tmp87;
  const Scalar _tmp89 = -_tmp65 * _tmp73 + _tmp75 * _tmp76 - _tmp85 * _tmp88;
  const Scalar _tmp90 = _tmp66 * _tmp82 - _tmp82 * _tmp83;
  const Scalar _tmp91 = -_tmp52 * _tmp89 + _tmp65 * _tmp66 - _tmp65 * _tmp75 - _tmp88 * _tmp90;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = 0;
  const Scalar _tmp94 = _tmp53 * _tmp58;
  const Scalar _tmp95 = _tmp49 * (_tmp47 - _tmp55 * _tmp94 - _tmp89 * _tmp93);
  const Scalar _tmp96 = _tmp30 + Scalar(1.9874742031097401);
  const Scalar _tmp97 = _tmp19 + Scalar(8.3196563720703107);
  const Scalar _tmp98 = std::pow(Scalar(std::pow(_tmp96, Scalar(2)) + std::pow(_tmp97, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp99 = _tmp97 * _tmp98;
  const Scalar _tmp100 = _tmp39 * fh1;
  const Scalar _tmp101 = -_tmp100 * _tmp99 - Scalar(5.1796800000000003) * _tmp15 - _tmp18 * fv1;
  const Scalar _tmp102 = _tmp56 * _tmp59 + Scalar(1.0);
  const Scalar _tmp103 = Scalar(1.0) * _tmp49;
  const Scalar _tmp104 = _tmp52 * _tmp59;
  const Scalar _tmp105 =
      std::sqrt(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp71, Scalar(2))));
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = _tmp105 * _tmp69;
  const Scalar _tmp108 = _tmp107 * (_tmp106 * _tmp42 * _tmp71 - _tmp106 * _tmp45 * _tmp68);
  const Scalar _tmp109 = _tmp108 * _tmp82 + _tmp48 * _tmp82 - _tmp50 * _tmp84;
  const Scalar _tmp110 = _tmp108 * _tmp65 - _tmp109 * _tmp88 + _tmp54 * _tmp65 - _tmp57 * _tmp76;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp112 = Scalar(1.0) * _tmp111;
  const Scalar _tmp113 = _tmp111 * _tmp91;
  const Scalar _tmp114 = _tmp113 * _tmp59;
  const Scalar _tmp115 = -_tmp112 * _tmp89 + _tmp114 * _tmp55;
  const Scalar _tmp116 = _tmp96 * _tmp98;
  const Scalar _tmp117 = fh1 * (-_tmp116 * _tmp18 + _tmp29 * _tmp99);
  const Scalar _tmp118 = _tmp100 * _tmp116 + Scalar(5.1796800000000003) * _tmp26 + _tmp29 * fv1;
  const Scalar _tmp119 = _tmp49 * _tmp55;
  const Scalar _tmp120 = Scalar(1.0) * _tmp87;
  const Scalar _tmp121 = _tmp103 * _tmp51 * _tmp85 * _tmp87 - _tmp120 * _tmp90;
  const Scalar _tmp122 = _tmp110 * _tmp92;
  const Scalar _tmp123 = _tmp113 * (-_tmp109 * _tmp120 - _tmp121 * _tmp122);
  const Scalar _tmp124 = _tmp121 + _tmp123;
  const Scalar _tmp125 = _tmp89 * _tmp92;
  const Scalar _tmp126 = _tmp55 * _tmp58;
  const Scalar _tmp127 = -_tmp120 * _tmp85 + _tmp123 * _tmp126 - _tmp124 * _tmp125;
  const Scalar _tmp128 = _tmp99 * fh1;
  const Scalar _tmp129 = _tmp72 * _tmp87;
  const Scalar _tmp130 = _tmp129 * _tmp85 + _tmp73;
  const Scalar _tmp131 = _tmp129 * _tmp90 - _tmp130 * _tmp52 - _tmp66;
  const Scalar _tmp132 = _tmp113 * (-_tmp108 + _tmp109 * _tmp129 - _tmp122 * _tmp131);
  const Scalar _tmp133 = _tmp131 + _tmp132;
  const Scalar _tmp134 = -_tmp125 * _tmp133 + _tmp126 * _tmp132 + _tmp130;
  const Scalar _tmp135 = _tmp116 * fh1;
  const Scalar _tmp136 = _tmp82 * _tmp88;
  const Scalar _tmp137 = _tmp65 * _tmp92;
  const Scalar _tmp138 = _tmp86 * _tmp92;
  const Scalar _tmp139 = -_tmp124 * _tmp138 + Scalar(1.0);
  const Scalar _tmp140 = _tmp82 * _tmp87;
  const Scalar _tmp141 = -_tmp133 * _tmp138 - _tmp72;
  const Scalar _tmp142 = -_tmp107 * _tmp117 * (-_tmp112 * _tmp136 + _tmp112 * _tmp65) -
                         _tmp107 * _tmp128 * (_tmp124 * _tmp137 + _tmp139 * _tmp140) -
                         _tmp107 * _tmp135 * (_tmp133 * _tmp137 + _tmp140 * _tmp141 + Scalar(1.0)) -
                         _tmp107 * _tmp40 * (-_tmp136 * _tmp93 + _tmp65 * _tmp93);
  const Scalar _tmp143 = Scalar(1.0) / (_tmp142);
  const Scalar _tmp144 = std::asinh(
      _tmp143 * (Scalar(1.0) * _tmp101 * (-_tmp102 * _tmp103 + _tmp104) +
                 Scalar(1.0) * _tmp117 * (-_tmp103 * _tmp115 + _tmp114) +
                 Scalar(1.0) * _tmp118 * (_tmp119 * _tmp59 - _tmp59) +
                 Scalar(1.0) * _tmp128 * (-_tmp103 * _tmp127 + _tmp123 * _tmp59) +
                 Scalar(1.0) * _tmp135 * (-_tmp103 * _tmp134 + _tmp132 * _tmp59) +
                 Scalar(1.0) * _tmp40 * (-_tmp53 * _tmp59 - Scalar(1.0) * _tmp95 + Scalar(1.0))));
  const Scalar _tmp145 = Scalar(6.347051629636093) *
                             std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp67), Scalar(2)) +
                         Scalar(70.366961588110229) *
                             std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp70 - 1), Scalar(2));
  const Scalar _tmp146 = Scalar(9.6622558468725703) * _tmp142;
  const Scalar _tmp147 = Scalar(23.356819799277336) *
                             std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp79), Scalar(2)) +
                         Scalar(3.2276287484906994) *
                             std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp77 - 1), Scalar(2));
  const Scalar _tmp148 = _tmp40 * _tmp93;
  const Scalar _tmp149 = _tmp112 * _tmp117;
  const Scalar _tmp150 =
      _tmp128 * _tmp139 * _tmp87 + _tmp135 * _tmp141 * _tmp87 - _tmp148 * _tmp88 - _tmp149 * _tmp88;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 = _tmp118 * _tmp59;
  const Scalar _tmp153 = std::asinh(
      _tmp151 * (_tmp101 * _tmp102 * _tmp49 + _tmp115 * _tmp117 * _tmp49 - _tmp119 * _tmp152 +
                 _tmp127 * _tmp128 * _tmp49 + _tmp134 * _tmp135 * _tmp49 + _tmp40 * _tmp95));
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp150;
  const Scalar _tmp155 = Scalar(22.795248597701466) *
                             std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp60), Scalar(2)) +
                         Scalar(7.3829146708599787) *
                             std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp62), Scalar(2));
  const Scalar _tmp156 =
      _tmp124 * _tmp128 * _tmp92 + _tmp133 * _tmp135 * _tmp92 + _tmp148 + _tmp149;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 =
      std::asinh(_tmp157 * (-_tmp101 * _tmp104 - _tmp114 * _tmp117 - _tmp123 * _tmp128 * _tmp58 -
                            _tmp132 * _tmp135 * _tmp58 + _tmp152 + _tmp40 * _tmp94));
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp156;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 * (-std::sinh(Scalar(1.0) * _tmp32) -
                std::sinh(Scalar(0.1034955) * _tmp0 * (-std::sqrt(_tmp31) - _tmp32 * _tmp33))) -
      Scalar(8.4718465805053693) *
          std::sqrt(Scalar(Scalar(0.013932974274013004) * _tmp31 +
                           std::pow(Scalar(-Scalar(0.11803802045956635) * _tmp39 -
                                           Scalar(0.11803802045956635) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(1, 0) =
      _tmp146 *
          (-std::sinh(Scalar(1.0) * _tmp144) -
           std::sinh(Scalar(0.1034955) * _tmp143 * (-_tmp144 * _tmp146 - std::sqrt(_tmp145)))) -
      Scalar(8.4690207536791995) *
          std::sqrt(Scalar(Scalar(0.013942273753185566) * _tmp145 +
                           std::pow(Scalar(-Scalar(0.11807740576920533) * _tmp66 -
                                           Scalar(0.11807740576920533) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(2, 0) =
      _tmp154 *
          (-std::sinh(Scalar(1.0) * _tmp153) -
           std::sinh(Scalar(0.1034955) * _tmp151 * (-std::sqrt(_tmp147) - _tmp153 * _tmp154))) -
      Scalar(8.3701287145205097) *
          std::sqrt(Scalar(Scalar(0.014273672465547484) * _tmp147 +
                           std::pow(Scalar(-Scalar(0.11947247576553975) * _tmp83 -
                                           Scalar(0.11947247576553975) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(3, 0) =
      _tmp159 *
          (-std::sinh(Scalar(1.0) * _tmp158) -
           std::sinh(Scalar(0.1034955) * _tmp157 * (-std::sqrt(_tmp155) - _tmp158 * _tmp159))) -
      Scalar(8.3641088633305802) *
          std::sqrt(Scalar(Scalar(0.014294226073078949) * _tmp155 +
                           std::pow(Scalar(-Scalar(0.11955846299229073) * _tmp75 -
                                           Scalar(0.11955846299229073) * position_vector(2, 0) + 1),
                                    Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
