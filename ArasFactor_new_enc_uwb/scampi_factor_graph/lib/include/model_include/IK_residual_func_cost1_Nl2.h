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
 * Symbolic function: IK_residual_func_cost1_Nl2
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl2(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 500

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (153)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp9 = 2 * _tmp8;
  const Scalar _tmp10 = _tmp4 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = _tmp11 * _tmp2;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp2 * _tmp9;
  const Scalar _tmp15 = _tmp11 * _tmp4;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp13 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp7;
  const Scalar _tmp20 = _tmp19 + position_vector(1, 0);
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp3 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp25 = 2 * _tmp2 * _tmp4;
  const Scalar _tmp26 = _tmp11 * _tmp8;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp24 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp34 = -_tmp33;
  const Scalar _tmp35 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp5;
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp37 = _tmp35 - _tmp36;
  const Scalar _tmp38 = _tmp34 + _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp36;
  const Scalar _tmp40 = _tmp33 + _tmp39;
  const Scalar _tmp41 = _tmp13 + _tmp17;
  const Scalar _tmp42 = _tmp41 + _tmp6;
  const Scalar _tmp43 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp44 = _tmp43 + Scalar(-4.7744369927459998);
  const Scalar _tmp45 = _tmp24 + _tmp28;
  const Scalar _tmp46 = _tmp21 + _tmp45;
  const Scalar _tmp47 = _tmp46 + position_vector(0, 0);
  const Scalar _tmp48 = _tmp47 + Scalar(-2.7171519410699099);
  const Scalar _tmp49 = Scalar(1.0) / (_tmp48);
  const Scalar _tmp50 = _tmp44 * _tmp49;
  const Scalar _tmp51 = _tmp40 * _tmp50;
  const Scalar _tmp52 = _tmp21 + _tmp29;
  const Scalar _tmp53 = _tmp52 + position_vector(0, 0);
  const Scalar _tmp54 = _tmp53 + Scalar(1.7965602546229);
  const Scalar _tmp55 = _tmp18 + _tmp6;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 + Scalar(-4.83288938413423);
  const Scalar _tmp58 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp57, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp59 = _tmp54 * _tmp58;
  const Scalar _tmp60 = _tmp34 + _tmp39;
  const Scalar _tmp61 = _tmp57 * _tmp58;
  const Scalar _tmp62 = _tmp33 + _tmp37;
  const Scalar _tmp63 = _tmp41 + _tmp7;
  const Scalar _tmp64 = _tmp63 + position_vector(1, 0);
  const Scalar _tmp65 = _tmp64 + Scalar(8.3885017487099702);
  const Scalar _tmp66 = _tmp22 + _tmp45;
  const Scalar _tmp67 = _tmp66 + position_vector(0, 0);
  const Scalar _tmp68 = _tmp67 + Scalar(-2.5193355532036801);
  const Scalar _tmp69 = std::pow(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp68, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp70 = _tmp65 * _tmp69;
  const Scalar _tmp71 = _tmp68 * _tmp69;
  const Scalar _tmp72 = -_tmp51 * _tmp71 + _tmp62 * _tmp70;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp50 * _tmp71 - _tmp70);
  const Scalar _tmp74 = _tmp50 * _tmp59 - _tmp61;
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = -_tmp51 * _tmp59 + _tmp60 * _tmp61 - _tmp72 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) * _tmp42;
  const Scalar _tmp78 = -_tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp63 + _tmp78);
  const Scalar _tmp80 = Scalar(1.0) * _tmp46;
  const Scalar _tmp81 = -_tmp66 + _tmp80;
  const Scalar _tmp82 = _tmp79 * _tmp81;
  const Scalar _tmp83 = _tmp40 * _tmp71 - _tmp62 * _tmp71;
  const Scalar _tmp84 = _tmp40 * _tmp59 - _tmp59 * _tmp60 - _tmp75 * _tmp83 - _tmp76 * _tmp82;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp84);
  const Scalar _tmp86 =
      std::sqrt(Scalar(std::pow(_tmp44, Scalar(2)) + std::pow(_tmp48, Scalar(2))));
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp49 * _tmp86;
  const Scalar _tmp89 = _tmp88 * (-_tmp42 * _tmp48 * _tmp87 + _tmp44 * _tmp46 * _tmp87);
  const Scalar _tmp90 = _tmp63 * _tmp71 - _tmp66 * _tmp70 + _tmp71 * _tmp89;
  const Scalar _tmp91 = _tmp50 * _tmp73;
  const Scalar _tmp92 = _tmp51 + _tmp72 * _tmp91;
  const Scalar _tmp93 = -_tmp40 - _tmp82 * _tmp92 + _tmp83 * _tmp91;
  const Scalar _tmp94 = -_tmp52 * _tmp61 + _tmp55 * _tmp59 + _tmp59 * _tmp89 - _tmp75 * _tmp90;
  const Scalar _tmp95 = _tmp85 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp97 = _tmp84 * _tmp96;
  const Scalar _tmp98 = _tmp97 * (-_tmp89 + _tmp90 * _tmp91 - _tmp93 * _tmp95);
  const Scalar _tmp99 = _tmp85 * (_tmp93 + _tmp98);
  const Scalar _tmp100 = -_tmp50 - _tmp74 * _tmp99;
  const Scalar _tmp101 = _tmp71 * _tmp73;
  const Scalar _tmp102 = _tmp31 + Scalar(1.9874742031097401);
  const Scalar _tmp103 = _tmp20 + Scalar(8.3196563720703107);
  const Scalar _tmp104 =
      std::pow(Scalar(std::pow(_tmp102, Scalar(2)) + std::pow(_tmp103, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp105 = _tmp102 * _tmp104;
  const Scalar _tmp106 = _tmp105 * fh1;
  const Scalar _tmp107 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp108 = _tmp77 * _tmp82 + _tmp80;
  const Scalar _tmp109 = 0;
  const Scalar _tmp110 = _tmp71 * _tmp75;
  const Scalar _tmp111 = Scalar(1.0) * _tmp96;
  const Scalar _tmp112 = _tmp103 * _tmp104;
  const Scalar _tmp113 = fh1 * (-_tmp105 * _tmp19 + _tmp112 * _tmp30);
  const Scalar _tmp114 = Scalar(1.0) * _tmp79;
  const Scalar _tmp115 = Scalar(1.0) * _tmp73;
  const Scalar _tmp116 = _tmp114 * _tmp72 * _tmp73 * _tmp81 - _tmp115 * _tmp83;
  const Scalar _tmp117 = _tmp97 * (-_tmp115 * _tmp90 - _tmp116 * _tmp95);
  const Scalar _tmp118 = _tmp85 * (_tmp116 + _tmp117);
  const Scalar _tmp119 = -_tmp118 * _tmp74 + Scalar(1.0);
  const Scalar _tmp120 = _tmp112 * fh1;
  const Scalar _tmp121 = -_tmp106 * _tmp88 * (_tmp100 * _tmp101 + _tmp59 * _tmp99 + Scalar(1.0)) -
                         _tmp107 * _tmp88 * (-_tmp109 * _tmp110 + _tmp109 * _tmp59) -
                         _tmp113 * _tmp88 * (-_tmp110 * _tmp111 + _tmp111 * _tmp59) -
                         _tmp120 * _tmp88 * (_tmp101 * _tmp119 + _tmp118 * _tmp59);
  const Scalar _tmp122 = Scalar(1.0) / (_tmp121);
  const Scalar _tmp123 = _tmp55 + _tmp78;
  const Scalar _tmp124 = _tmp123 * _tmp82;
  const Scalar _tmp125 = Scalar(1.0) / (-_tmp124 - _tmp52 + _tmp80);
  const Scalar _tmp126 = _tmp123 * _tmp125;
  const Scalar _tmp127 = -_tmp115 * _tmp72 + _tmp117 * _tmp126 - _tmp118 * _tmp76;
  const Scalar _tmp128 = Scalar(1.0) * _tmp125;
  const Scalar _tmp129 = _tmp128 * _tmp82;
  const Scalar _tmp130 = _tmp124 * _tmp128 + Scalar(1.0);
  const Scalar _tmp131 = _tmp38 * fh1;
  const Scalar _tmp132 = -_tmp112 * _tmp131 - Scalar(5.1796800000000003) * _tmp16 - _tmp19 * fv1;
  const Scalar _tmp133 = _tmp105 * _tmp131 + Scalar(5.1796800000000003) * _tmp27 + _tmp30 * fv1;
  const Scalar _tmp134 = _tmp123 * _tmp79;
  const Scalar _tmp135 = _tmp126 * _tmp98 - _tmp76 * _tmp99 + _tmp92;
  const Scalar _tmp136 = _tmp108 * _tmp125;
  const Scalar _tmp137 = -_tmp109 * _tmp76 - _tmp123 * _tmp136 + _tmp78;
  const Scalar _tmp138 = _tmp128 * _tmp97;
  const Scalar _tmp139 = -_tmp111 * _tmp76 + _tmp123 * _tmp138;
  const Scalar _tmp140 = std::asinh(
      _tmp122 * (Scalar(1.0) * _tmp106 * (-_tmp114 * _tmp135 + _tmp128 * _tmp98) +
                 Scalar(1.0) * _tmp107 * (-_tmp108 * _tmp128 - _tmp114 * _tmp137 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp113 * (-_tmp114 * _tmp139 + _tmp138) +
                 Scalar(1.0) * _tmp120 * (-_tmp114 * _tmp127 + _tmp117 * _tmp128) +
                 Scalar(1.0) * _tmp132 * (-_tmp114 * _tmp130 + _tmp129) +
                 Scalar(1.0) * _tmp133 * (_tmp128 * _tmp134 - _tmp128)));
  const Scalar _tmp141 = Scalar(9.6622558468725703) * _tmp121;
  const Scalar _tmp142 = _tmp107 * _tmp109;
  const Scalar _tmp143 = _tmp111 * _tmp113;
  const Scalar _tmp144 =
      _tmp100 * _tmp106 * _tmp73 + _tmp119 * _tmp120 * _tmp73 - _tmp142 * _tmp75 - _tmp143 * _tmp75;
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = _tmp128 * _tmp133;
  const Scalar _tmp147 =
      std::asinh(_tmp145 * (_tmp106 * _tmp135 * _tmp79 + _tmp107 * _tmp137 * _tmp79 +
                            _tmp113 * _tmp139 * _tmp79 + _tmp120 * _tmp127 * _tmp79 +
                            _tmp130 * _tmp132 * _tmp79 - _tmp134 * _tmp146));
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp149 = _tmp106 * _tmp99 + _tmp118 * _tmp120 + _tmp142 + _tmp143;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 =
      std::asinh(_tmp150 * (-_tmp106 * _tmp125 * _tmp98 + _tmp107 * _tmp136 - _tmp113 * _tmp138 -
                            _tmp117 * _tmp120 * _tmp125 - _tmp129 * _tmp132 + _tmp146));
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp149;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 *
          (Scalar(0.87679799777269396) * _tmp0 + std::cosh(Scalar(1.0) * _tmp1) -
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp1 * _tmp32 -
                Scalar(8.3196563720703107) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp20 - 1), Scalar(2)) +
                        Scalar(0.057067943527034905) *
                            std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp31 - 1),
                                     Scalar(2))))))) +
      _tmp38 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp141 *
          (Scalar(0.86564762886483004) * _tmp122 + std::cosh(Scalar(1.0) * _tmp140) -
           std::cosh(Scalar(0.1034955) * _tmp122 *
                     (-_tmp140 * _tmp141 -
                      Scalar(4.7744369927459998) *
                          std::sqrt(Scalar(
                              std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp43), Scalar(2)) +
                              Scalar(0.32387954179207445) *
                                  std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp47),
                                           Scalar(2))))))) +
      _tmp40 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp148 *
          (Scalar(0.876505537412406) * _tmp145 + std::cosh(Scalar(1.0) * _tmp147) -
           std::cosh(
               Scalar(0.1034955) * _tmp145 *
               (-_tmp147 * _tmp148 -
                Scalar(8.3885017487099702) *
                    std::sqrt(Scalar(
                        Scalar(0.090199313518583735) *
                            std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp67), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp64 - 1),
                                 Scalar(2))))))) +
      _tmp62 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp152 *
          (Scalar(0.86627065637365697) * _tmp150 + std::cosh(Scalar(1.0) * _tmp151) -
           std::cosh(
               Scalar(0.1034955) * _tmp150 *
               (-_tmp151 * _tmp152 -
                Scalar(4.83288938413423) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp56), Scalar(2)) +
                        Scalar(0.13818785160942856) *
                            std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp53 - 1),
                                     Scalar(2))))))) +
      _tmp60 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
