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
 * Symbolic function: IK_residual_func_cost1_Nl18
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl18(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 504

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (156)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp8 = 2 * _tmp3;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp1 * _tmp10;
  const Scalar _tmp12 = _tmp11 + _tmp9;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp1 * _tmp7;
  const Scalar _tmp15 = _tmp10 * _tmp3;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp1 * _tmp8;
  const Scalar _tmp23 = _tmp10 * _tmp7;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp28 = _tmp25 + _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(1, 0);
  const Scalar _tmp31 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp34 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp26 + Scalar(-0.010999999999999999);
  const Scalar _tmp35 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = _tmp33 + _tmp36;
  const Scalar _tmp38 = _tmp25 - _tmp27;
  const Scalar _tmp39 = _tmp21 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = _tmp40 + Scalar(8.3196563720703107);
  const Scalar _tmp42 = _tmp13 - _tmp16;
  const Scalar _tmp43 = _tmp42 + _tmp6;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 + Scalar(1.9874742031097401);
  const Scalar _tmp46 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp47 = _tmp41 * _tmp46;
  const Scalar _tmp48 = _tmp20 + _tmp38;
  const Scalar _tmp49 = _tmp48 + position_vector(1, 0);
  const Scalar _tmp50 = _tmp49 + Scalar(8.3885017487099702);
  const Scalar _tmp51 = _tmp42 + _tmp5;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(-2.5193355532036801);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp50, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp50 * _tmp54;
  const Scalar _tmp56 = _tmp53 * _tmp54;
  const Scalar _tmp57 = Scalar(1.0) / (_tmp47 * _tmp56 - _tmp55);
  const Scalar _tmp58 =
      std::sqrt(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp45, Scalar(2))));
  const Scalar _tmp59 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp60 = _tmp46 * _tmp58;
  const Scalar _tmp61 = _tmp60 * (-_tmp39 * _tmp45 * _tmp59 + _tmp41 * _tmp43 * _tmp59);
  const Scalar _tmp62 = _tmp57 * (_tmp48 * _tmp56 - _tmp51 * _tmp55 + _tmp56 * _tmp61);
  const Scalar _tmp63 = -_tmp33;
  const Scalar _tmp64 = _tmp34 + _tmp35;
  const Scalar _tmp65 = _tmp63 + _tmp64;
  const Scalar _tmp66 = _tmp36 + _tmp63;
  const Scalar _tmp67 = _tmp57 * (-_tmp56 * _tmp65 + _tmp56 * _tmp66);
  const Scalar _tmp68 = _tmp47 * _tmp66;
  const Scalar _tmp69 = _tmp57 * (_tmp55 * _tmp65 - _tmp56 * _tmp68);
  const Scalar _tmp70 = _tmp47 * _tmp69 + _tmp68;
  const Scalar _tmp71 = Scalar(1.0) * _tmp39;
  const Scalar _tmp72 = -_tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp48 + _tmp72);
  const Scalar _tmp74 = Scalar(1.0) * _tmp43;
  const Scalar _tmp75 = _tmp73 * (-_tmp51 + _tmp74);
  const Scalar _tmp76 = _tmp47 * _tmp67 - _tmp66 - _tmp70 * _tmp75;
  const Scalar _tmp77 = _tmp33 + _tmp64;
  const Scalar _tmp78 = _tmp20 + _tmp28;
  const Scalar _tmp79 = _tmp78 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 + Scalar(-4.7744369927459998);
  const Scalar _tmp81 = _tmp17 + _tmp5;
  const Scalar _tmp82 = _tmp81 + position_vector(0, 0);
  const Scalar _tmp83 = _tmp82 + Scalar(-2.7171519410699099);
  const Scalar _tmp84 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp83, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp85 = _tmp80 * _tmp84;
  const Scalar _tmp86 = _tmp83 * _tmp84;
  const Scalar _tmp87 = _tmp47 * _tmp86 - _tmp85;
  const Scalar _tmp88 = -_tmp68 * _tmp86 - _tmp69 * _tmp87 + _tmp77 * _tmp85;
  const Scalar _tmp89 = _tmp66 * _tmp86 - _tmp67 * _tmp87 - _tmp75 * _tmp88 - _tmp77 * _tmp86;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp61 * _tmp86 - _tmp62 * _tmp87 + _tmp78 * _tmp86 - _tmp81 * _tmp85;
  const Scalar _tmp92 = _tmp90 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp94 = _tmp89 * _tmp93;
  const Scalar _tmp95 = _tmp94 * (_tmp47 * _tmp62 - _tmp61 - _tmp76 * _tmp92);
  const Scalar _tmp96 = _tmp76 + _tmp95;
  const Scalar _tmp97 = _tmp86 * _tmp90;
  const Scalar _tmp98 = _tmp87 * _tmp90;
  const Scalar _tmp99 = -_tmp47 - _tmp96 * _tmp98;
  const Scalar _tmp100 = _tmp56 * _tmp57;
  const Scalar _tmp101 = _tmp19 + Scalar(1.7965602546229);
  const Scalar _tmp102 = _tmp30 + Scalar(-4.83288938413423);
  const Scalar _tmp103 =
      std::pow(Scalar(std::pow(_tmp101, Scalar(2)) + std::pow(_tmp102, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp104 = _tmp101 * _tmp103;
  const Scalar _tmp105 = _tmp104 * fh1;
  const Scalar _tmp106 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp107 = _tmp71 * _tmp75 + _tmp74;
  const Scalar _tmp108 = 0;
  const Scalar _tmp109 = _tmp108 * _tmp90;
  const Scalar _tmp110 = _tmp100 * _tmp87;
  const Scalar _tmp111 = Scalar(1.0) * _tmp69;
  const Scalar _tmp112 = _tmp111 * _tmp75 - Scalar(1.0) * _tmp67;
  const Scalar _tmp113 = _tmp94 * (-_tmp112 * _tmp92 - Scalar(1.0) * _tmp62);
  const Scalar _tmp114 = _tmp112 + _tmp113;
  const Scalar _tmp115 = -_tmp114 * _tmp98 + Scalar(1.0);
  const Scalar _tmp116 = _tmp102 * _tmp103;
  const Scalar _tmp117 = _tmp116 * fh1;
  const Scalar _tmp118 = Scalar(1.0) * _tmp93;
  const Scalar _tmp119 = fh1 * (-_tmp104 * _tmp29 + _tmp116 * _tmp18);
  const Scalar _tmp120 = -_tmp105 * _tmp60 * (_tmp100 * _tmp99 + _tmp96 * _tmp97 + Scalar(1.0)) -
                         _tmp106 * _tmp60 * (-_tmp109 * _tmp110 + _tmp109 * _tmp86) -
                         _tmp117 * _tmp60 * (_tmp100 * _tmp115 + _tmp114 * _tmp97) -
                         _tmp119 * _tmp60 * (-_tmp110 * _tmp118 + _tmp118 * _tmp86);
  const Scalar _tmp121 = Scalar(1.0) / (_tmp120);
  const Scalar _tmp122 = _tmp37 * fh1;
  const Scalar _tmp123 = _tmp104 * _tmp122 + Scalar(3.29616) * _tmp12 + _tmp18 * fv1;
  const Scalar _tmp124 = _tmp72 + _tmp78;
  const Scalar _tmp125 = _tmp124 * _tmp75;
  const Scalar _tmp126 = Scalar(1.0) / (-_tmp125 + _tmp74 - _tmp81);
  const Scalar _tmp127 = Scalar(1.0) * _tmp126;
  const Scalar _tmp128 = _tmp124 * _tmp73;
  const Scalar _tmp129 = -_tmp116 * _tmp122 - Scalar(3.29616) * _tmp24 - _tmp29 * fv1;
  const Scalar _tmp130 = _tmp125 * _tmp127 + Scalar(1.0);
  const Scalar _tmp131 = Scalar(1.0) * _tmp73;
  const Scalar _tmp132 = _tmp127 * _tmp75;
  const Scalar _tmp133 = _tmp124 * _tmp126;
  const Scalar _tmp134 = _tmp88 * _tmp90;
  const Scalar _tmp135 = -_tmp111 + _tmp113 * _tmp133 - _tmp114 * _tmp134;
  const Scalar _tmp136 = _tmp133 * _tmp95 - _tmp134 * _tmp96 + _tmp70;
  const Scalar _tmp137 = _tmp127 * _tmp94;
  const Scalar _tmp138 = -_tmp118 * _tmp88 + _tmp124 * _tmp137;
  const Scalar _tmp139 = _tmp107 * _tmp126;
  const Scalar _tmp140 = -_tmp108 * _tmp134 - _tmp124 * _tmp139 + _tmp72;
  const Scalar _tmp141 = std::asinh(
      _tmp121 * (Scalar(1.0) * _tmp105 * (_tmp127 * _tmp95 - _tmp131 * _tmp136) +
                 Scalar(1.0) * _tmp106 * (-_tmp107 * _tmp127 - _tmp131 * _tmp140 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp117 * (_tmp113 * _tmp127 - _tmp131 * _tmp135) +
                 Scalar(1.0) * _tmp119 * (-_tmp131 * _tmp138 + _tmp137) +
                 Scalar(1.0) * _tmp123 * (_tmp127 * _tmp128 - _tmp127) +
                 Scalar(1.0) * _tmp129 * (-_tmp130 * _tmp131 + _tmp132)));
  const Scalar _tmp142 = Scalar(9.6622558468725703) * _tmp120;
  const Scalar _tmp143 = _tmp118 * _tmp119;
  const Scalar _tmp144 = _tmp57 * _tmp87;
  const Scalar _tmp145 = _tmp106 * _tmp109;
  const Scalar _tmp146 = _tmp105 * _tmp57 * _tmp99 + _tmp115 * _tmp117 * _tmp57 -
                         _tmp143 * _tmp144 - _tmp144 * _tmp145;
  const Scalar _tmp147 = Scalar(1.0) / (_tmp146);
  const Scalar _tmp148 = _tmp123 * _tmp127;
  const Scalar _tmp149 =
      std::asinh(_tmp147 * (_tmp105 * _tmp136 * _tmp73 + _tmp106 * _tmp140 * _tmp73 +
                            _tmp117 * _tmp135 * _tmp73 + _tmp119 * _tmp138 * _tmp73 -
                            _tmp128 * _tmp148 + _tmp129 * _tmp130 * _tmp73));
  const Scalar _tmp150 = Scalar(9.6622558468725703) * _tmp146;
  const Scalar _tmp151 = _tmp90 * fh1;
  const Scalar _tmp152 =
      _tmp104 * _tmp151 * _tmp96 + _tmp114 * _tmp116 * _tmp151 + _tmp143 + _tmp145;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = std::asinh(_tmp153 * (-_tmp105 * _tmp126 * _tmp95 + _tmp106 * _tmp139 -
                                               _tmp113 * _tmp117 * _tmp126 - _tmp119 * _tmp137 -
                                               _tmp129 * _tmp132 + _tmp148));
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp152;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 *
          (Scalar(0.86627065637365697) * _tmp0 + std::cosh(Scalar(1.0) * _tmp31) -
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp31 * _tmp32 -
                Scalar(4.83288938413423) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp30), Scalar(2)) +
                        Scalar(0.13818785160942856) *
                            std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp19 - 1),
                                     Scalar(2))))))) +
      _tmp37 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp142 *
          (Scalar(0.87679799777269396) * _tmp121 + std::cosh(Scalar(1.0) * _tmp141) -
           std::cosh(
               Scalar(0.1034955) * _tmp121 *
               (-_tmp141 * _tmp142 -
                Scalar(8.3196563720703107) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp40 - 1), Scalar(2)) +
                        Scalar(0.057067943527034905) *
                            std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp44 - 1),
                                     Scalar(2))))))) +
      _tmp66 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp150 *
          (Scalar(0.876505537412406) * _tmp147 + std::cosh(Scalar(1.0) * _tmp149) -
           std::cosh(
               Scalar(0.1034955) * _tmp147 *
               (-_tmp149 * _tmp150 -
                Scalar(8.3885017487099702) *
                    std::sqrt(Scalar(
                        Scalar(0.090199313518583735) *
                            std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp52), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp49 - 1),
                                 Scalar(2))))))) +
      _tmp65 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp155 *
          (Scalar(0.86564762886483004) * _tmp153 + std::cosh(Scalar(1.0) * _tmp154) -
           std::cosh(Scalar(0.1034955) * _tmp153 *
                     (-_tmp154 * _tmp155 -
                      Scalar(4.7744369927459998) *
                          std::sqrt(Scalar(
                              std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp79), Scalar(2)) +
                              Scalar(0.32387954179207445) *
                                  std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp82),
                                           Scalar(2))))))) +
      _tmp77 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
