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
  // Total ops: 528

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (157)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp3;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp1 * _tmp10;
  const Scalar _tmp12 = -_tmp11 + _tmp9;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp1 * _tmp7;
  const Scalar _tmp15 = _tmp10 * _tmp3;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 - _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp24 = _tmp1 * _tmp8;
  const Scalar _tmp25 = _tmp10 * _tmp7;
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
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp35 = -_tmp34;
  const Scalar _tmp36 =
      -Scalar(0.010999999999999999) * _tmp2 - Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp38 = _tmp36 - _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = _tmp20 + _tmp28;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 + Scalar(1.7965602546229);
  const Scalar _tmp43 = _tmp17 + _tmp5;
  const Scalar _tmp44 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp45 = _tmp44 + Scalar(-4.83288938413423);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp42 * _tmp46;
  const Scalar _tmp48 = _tmp36 + _tmp37;
  const Scalar _tmp49 = _tmp34 + _tmp48;
  const Scalar _tmp50 = _tmp13 + _tmp16;
  const Scalar _tmp51 = _tmp5 + _tmp50;
  const Scalar _tmp52 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(-4.7744369927459998);
  const Scalar _tmp54 = _tmp23 + _tmp27;
  const Scalar _tmp55 = _tmp20 + _tmp54;
  const Scalar _tmp56 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 + Scalar(-2.7171519410699099);
  const Scalar _tmp58 = Scalar(1.0) / (_tmp57);
  const Scalar _tmp59 = _tmp53 * _tmp58;
  const Scalar _tmp60 = _tmp49 * _tmp59;
  const Scalar _tmp61 = _tmp34 + _tmp38;
  const Scalar _tmp62 = _tmp45 * _tmp46;
  const Scalar _tmp63 = _tmp35 + _tmp48;
  const Scalar _tmp64 = _tmp50 + _tmp6;
  const Scalar _tmp65 = _tmp64 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 + Scalar(8.3885017487099702);
  const Scalar _tmp67 = _tmp21 + _tmp54;
  const Scalar _tmp68 = _tmp67 + position_vector(0, 0);
  const Scalar _tmp69 = _tmp68 + Scalar(-2.5193355532036801);
  const Scalar _tmp70 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp69, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp71 = _tmp66 * _tmp70;
  const Scalar _tmp72 = _tmp69 * _tmp70;
  const Scalar _tmp73 = -_tmp60 * _tmp72 + _tmp63 * _tmp71;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp59 * _tmp72 - _tmp71);
  const Scalar _tmp75 = _tmp47 * _tmp59 - _tmp62;
  const Scalar _tmp76 = _tmp74 * _tmp75;
  const Scalar _tmp77 = -_tmp47 * _tmp60 + _tmp61 * _tmp62 - _tmp73 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) * _tmp51;
  const Scalar _tmp79 = -_tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp64 + _tmp79);
  const Scalar _tmp81 = Scalar(1.0) * _tmp55;
  const Scalar _tmp82 = -_tmp67 + _tmp81;
  const Scalar _tmp83 = _tmp80 * _tmp82;
  const Scalar _tmp84 = _tmp49 * _tmp72 - _tmp63 * _tmp72;
  const Scalar _tmp85 = _tmp47 * _tmp49 - _tmp47 * _tmp61 - _tmp76 * _tmp84 - _tmp77 * _tmp83;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 = _tmp58 * _tmp87;
  const Scalar _tmp90 = _tmp89 * (-_tmp51 * _tmp57 * _tmp88 + _tmp53 * _tmp55 * _tmp88);
  const Scalar _tmp91 = _tmp64 * _tmp72 - _tmp67 * _tmp71 + _tmp72 * _tmp90;
  const Scalar _tmp92 = _tmp59 * _tmp74;
  const Scalar _tmp93 = _tmp60 + _tmp73 * _tmp92;
  const Scalar _tmp94 = -_tmp49 - _tmp83 * _tmp93 + _tmp84 * _tmp92;
  const Scalar _tmp95 = -_tmp40 * _tmp62 + _tmp43 * _tmp47 + _tmp47 * _tmp90 - _tmp76 * _tmp91;
  const Scalar _tmp96 = _tmp86 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp98 = _tmp85 * _tmp97;
  const Scalar _tmp99 = _tmp98 * (-_tmp90 + _tmp91 * _tmp92 - _tmp94 * _tmp96);
  const Scalar _tmp100 = _tmp86 * (_tmp94 + _tmp99);
  const Scalar _tmp101 = -_tmp100 * _tmp75 - _tmp59;
  const Scalar _tmp102 = _tmp72 * _tmp74;
  const Scalar _tmp103 = _tmp30 + Scalar(1.9874742031097401);
  const Scalar _tmp104 = _tmp19 + Scalar(8.3196563720703107);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp103, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = _tmp106 * fh1;
  const Scalar _tmp108 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp109 = _tmp78 * _tmp83 + _tmp81;
  const Scalar _tmp110 = 0;
  const Scalar _tmp111 = _tmp72 * _tmp76;
  const Scalar _tmp112 = Scalar(1.0) * _tmp97;
  const Scalar _tmp113 = _tmp104 * _tmp105;
  const Scalar _tmp114 = fh1 * (-_tmp106 * _tmp18 + _tmp113 * _tmp29);
  const Scalar _tmp115 = Scalar(1.0) * _tmp80;
  const Scalar _tmp116 = Scalar(1.0) * _tmp74;
  const Scalar _tmp117 = _tmp115 * _tmp73 * _tmp74 * _tmp82 - _tmp116 * _tmp84;
  const Scalar _tmp118 = _tmp98 * (-_tmp116 * _tmp91 - _tmp117 * _tmp96);
  const Scalar _tmp119 = _tmp86 * (_tmp117 + _tmp118);
  const Scalar _tmp120 = -_tmp119 * _tmp75 + Scalar(1.0);
  const Scalar _tmp121 = _tmp113 * fh1;
  const Scalar _tmp122 = -_tmp107 * _tmp89 * (_tmp100 * _tmp47 + _tmp101 * _tmp102 + Scalar(1.0)) -
                         _tmp108 * _tmp89 * (-_tmp110 * _tmp111 + _tmp110 * _tmp47) -
                         _tmp114 * _tmp89 * (-_tmp111 * _tmp112 + _tmp112 * _tmp47) -
                         _tmp121 * _tmp89 * (_tmp102 * _tmp120 + _tmp119 * _tmp47);
  const Scalar _tmp123 = Scalar(1.0) / (_tmp122);
  const Scalar _tmp124 = _tmp43 + _tmp79;
  const Scalar _tmp125 = _tmp124 * _tmp83;
  const Scalar _tmp126 = Scalar(1.0) / (-_tmp125 - _tmp40 + _tmp81);
  const Scalar _tmp127 = _tmp124 * _tmp126;
  const Scalar _tmp128 = -_tmp116 * _tmp73 + _tmp118 * _tmp127 - _tmp119 * _tmp77;
  const Scalar _tmp129 = Scalar(1.0) * _tmp126;
  const Scalar _tmp130 = _tmp129 * _tmp83;
  const Scalar _tmp131 = _tmp125 * _tmp129 + Scalar(1.0);
  const Scalar _tmp132 = _tmp39 * fh1;
  const Scalar _tmp133 = -_tmp113 * _tmp132 - Scalar(5.1796800000000003) * _tmp12 - _tmp18 * fv1;
  const Scalar _tmp134 = _tmp106 * _tmp132 + Scalar(5.1796800000000003) * _tmp26 + _tmp29 * fv1;
  const Scalar _tmp135 = _tmp124 * _tmp80;
  const Scalar _tmp136 = -_tmp100 * _tmp77 + _tmp127 * _tmp99 + _tmp93;
  const Scalar _tmp137 = _tmp109 * _tmp126;
  const Scalar _tmp138 = -_tmp110 * _tmp77 - _tmp124 * _tmp137 + _tmp79;
  const Scalar _tmp139 = _tmp129 * _tmp98;
  const Scalar _tmp140 = -_tmp112 * _tmp77 + _tmp124 * _tmp139;
  const Scalar _tmp141 = std::asinh(
      _tmp123 * (Scalar(1.0) * _tmp107 * (-_tmp115 * _tmp136 + _tmp129 * _tmp99) +
                 Scalar(1.0) * _tmp108 * (-_tmp109 * _tmp129 - _tmp115 * _tmp138 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp114 * (-_tmp115 * _tmp140 + _tmp139) +
                 Scalar(1.0) * _tmp121 * (-_tmp115 * _tmp128 + _tmp118 * _tmp129) +
                 Scalar(1.0) * _tmp133 * (-_tmp115 * _tmp131 + _tmp130) +
                 Scalar(1.0) * _tmp134 * (_tmp129 * _tmp135 - _tmp129)));
  const Scalar _tmp142 = Scalar(22.795248597701466) *
                             std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp52), Scalar(2)) +
                         Scalar(7.3829146708599787) *
                             std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp56), Scalar(2));
  const Scalar _tmp143 = Scalar(9.6622558468725703) * _tmp122;
  const Scalar _tmp144 = Scalar(6.347051629636093) *
                             std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp68), Scalar(2)) +
                         Scalar(70.366961588110229) *
                             std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp65 - 1), Scalar(2));
  const Scalar _tmp145 = _tmp108 * _tmp110;
  const Scalar _tmp146 = _tmp112 * _tmp114;
  const Scalar _tmp147 =
      _tmp101 * _tmp107 * _tmp74 + _tmp120 * _tmp121 * _tmp74 - _tmp145 * _tmp76 - _tmp146 * _tmp76;
  const Scalar _tmp148 = Scalar(1.0) / (_tmp147);
  const Scalar _tmp149 = _tmp129 * _tmp134;
  const Scalar _tmp150 =
      std::asinh(_tmp148 * (_tmp107 * _tmp136 * _tmp80 + _tmp108 * _tmp138 * _tmp80 +
                            _tmp114 * _tmp140 * _tmp80 + _tmp121 * _tmp128 * _tmp80 +
                            _tmp131 * _tmp133 * _tmp80 - _tmp135 * _tmp149));
  const Scalar _tmp151 = Scalar(9.6622558468725703) * _tmp147;
  const Scalar _tmp152 = _tmp100 * _tmp107 + _tmp119 * _tmp121 + _tmp145 + _tmp146;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 =
      std::asinh(_tmp153 * (-_tmp107 * _tmp126 * _tmp99 + _tmp108 * _tmp137 - _tmp114 * _tmp139 -
                            _tmp118 * _tmp121 * _tmp126 - _tmp130 * _tmp133 + _tmp149));
  const Scalar _tmp155 = Scalar(23.356819799277336) *
                             std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp44), Scalar(2)) +
                         Scalar(3.2276287484906994) *
                             std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp41 - 1), Scalar(2));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp152;

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
      _tmp143 *
          (-std::sinh(Scalar(1.0) * _tmp141) -
           std::sinh(Scalar(0.1034955) * _tmp123 * (-_tmp141 * _tmp143 - std::sqrt(_tmp142)))) -
      Scalar(8.3641088633305802) *
          std::sqrt(Scalar(Scalar(0.014294226073078949) * _tmp142 +
                           std::pow(Scalar(-Scalar(0.11955846299229073) * _tmp49 -
                                           Scalar(0.11955846299229073) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(2, 0) =
      _tmp151 *
          (-std::sinh(Scalar(1.0) * _tmp150) -
           std::sinh(Scalar(0.1034955) * _tmp148 * (-std::sqrt(_tmp144) - _tmp150 * _tmp151))) -
      Scalar(8.4690207536791995) *
          std::sqrt(Scalar(Scalar(0.013942273753185566) * _tmp144 +
                           std::pow(Scalar(-Scalar(0.11807740576920533) * _tmp63 -
                                           Scalar(0.11807740576920533) * position_vector(2, 0) + 1),
                                    Scalar(2))));
  _res(3, 0) =
      _tmp156 *
          (-std::sinh(Scalar(1.0) * _tmp154) -
           std::sinh(Scalar(0.1034955) * _tmp153 * (-_tmp154 * _tmp156 - std::sqrt(_tmp155)))) -
      Scalar(8.3701287145205097) *
          std::sqrt(Scalar(Scalar(0.014273672465547484) * _tmp155 +
                           std::pow(Scalar(-Scalar(0.11947247576553975) * _tmp61 -
                                           Scalar(0.11947247576553975) * position_vector(2, 0) + 1),
                                    Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
