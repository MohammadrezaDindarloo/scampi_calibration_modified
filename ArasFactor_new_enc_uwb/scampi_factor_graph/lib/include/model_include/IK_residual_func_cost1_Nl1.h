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
 * Symbolic function: IK_residual_func_cost1_Nl1
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl1(
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
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp4 = 2 * _tmp3;
  const Scalar _tmp5 = _tmp2 * _tmp4;
  const Scalar _tmp6 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp12 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp4 * _tmp6;
  const Scalar _tmp15 = _tmp2 * _tmp7;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp13 + _tmp17;
  const Scalar _tmp19 = _tmp10 + _tmp18;
  const Scalar _tmp20 = _tmp19 + position_vector(1, 0);
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp5 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = 2 * _tmp2 * _tmp6;
  const Scalar _tmp26 = _tmp3 * _tmp7;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp24 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp34 = -_tmp33;
  const Scalar _tmp35 = -Scalar(0.010999999999999999) * _tmp11 -
                        Scalar(0.010999999999999999) * _tmp23 + Scalar(-0.010999999999999999);
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp37 = _tmp35 - _tmp36;
  const Scalar _tmp38 = _tmp34 + _tmp37;
  const Scalar _tmp39 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp40 = _tmp24 + _tmp28;
  const Scalar _tmp41 = _tmp22 + _tmp40;
  const Scalar _tmp42 = Scalar(1.0) * _tmp41;
  const Scalar _tmp43 = _tmp18 + _tmp9;
  const Scalar _tmp44 = Scalar(1.0) * _tmp43;
  const Scalar _tmp45 = -_tmp44;
  const Scalar _tmp46 = _tmp13 + _tmp17;
  const Scalar _tmp47 = _tmp10 + _tmp46;
  const Scalar _tmp48 = Scalar(1.0) / (_tmp45 + _tmp47);
  const Scalar _tmp49 = _tmp21 + _tmp29;
  const Scalar _tmp50 = _tmp42 - _tmp49;
  const Scalar _tmp51 = _tmp48 * _tmp50;
  const Scalar _tmp52 = _tmp42 + _tmp44 * _tmp51;
  const Scalar _tmp53 = _tmp46 + _tmp9;
  const Scalar _tmp54 = _tmp45 + _tmp53;
  const Scalar _tmp55 = _tmp51 * _tmp54;
  const Scalar _tmp56 = _tmp21 + _tmp40;
  const Scalar _tmp57 = Scalar(1.0) / (_tmp42 - _tmp55 - _tmp56);
  const Scalar _tmp58 = Scalar(1.0) * _tmp57;
  const Scalar _tmp59 = _tmp35 + _tmp36;
  const Scalar _tmp60 = _tmp34 + _tmp59;
  const Scalar _tmp61 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 + Scalar(-2.5193355532036801);
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp65 = _tmp64 + Scalar(8.3885017487099702);
  const Scalar _tmp66 = _tmp63 * _tmp65;
  const Scalar _tmp67 = _tmp60 * _tmp66;
  const Scalar _tmp68 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 + Scalar(-4.7744369927459998);
  const Scalar _tmp70 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(-2.7171519410699099);
  const Scalar _tmp72 = std::pow(Scalar(std::pow(_tmp69, Scalar(2)) + std::pow(_tmp71, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp73 = _tmp71 * _tmp72;
  const Scalar _tmp74 = _tmp33 + _tmp59;
  const Scalar _tmp75 = _tmp69 * _tmp72;
  const Scalar _tmp76 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp77 = _tmp76 + Scalar(1.7965602546229);
  const Scalar _tmp78 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp79 = _tmp78 + Scalar(-4.83288938413423);
  const Scalar _tmp80 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp79, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp81 = _tmp77 * _tmp80;
  const Scalar _tmp82 = _tmp33 + _tmp37;
  const Scalar _tmp83 = _tmp79 * _tmp80;
  const Scalar _tmp84 = -_tmp67 * _tmp81 + _tmp82 * _tmp83;
  const Scalar _tmp85 = _tmp66 * _tmp73 - _tmp75;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp66 * _tmp81 - _tmp83);
  const Scalar _tmp87 = _tmp85 * _tmp86;
  const Scalar _tmp88 = -_tmp67 * _tmp73 + _tmp74 * _tmp75 - _tmp84 * _tmp87;
  const Scalar _tmp89 = _tmp60 * _tmp81 - _tmp81 * _tmp82;
  const Scalar _tmp90 = -_tmp51 * _tmp88 + _tmp60 * _tmp73 - _tmp73 * _tmp74 - _tmp87 * _tmp89;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = 0;
  const Scalar _tmp93 = _tmp52 * _tmp57;
  const Scalar _tmp94 = _tmp48 * (_tmp45 - _tmp54 * _tmp93 - _tmp88 * _tmp92);
  const Scalar _tmp95 = _tmp31 + Scalar(1.9874742031097401);
  const Scalar _tmp96 = _tmp20 + Scalar(8.3196563720703107);
  const Scalar _tmp97 = std::pow(Scalar(std::pow(_tmp95, Scalar(2)) + std::pow(_tmp96, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp98 = _tmp96 * _tmp97;
  const Scalar _tmp99 = _tmp38 * fh1;
  const Scalar _tmp100 = -Scalar(5.1796800000000003) * _tmp16 - _tmp19 * fv1 - _tmp98 * _tmp99;
  const Scalar _tmp101 = _tmp55 * _tmp58 + Scalar(1.0);
  const Scalar _tmp102 = Scalar(1.0) * _tmp48;
  const Scalar _tmp103 = _tmp51 * _tmp58;
  const Scalar _tmp104 =
      std::sqrt(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp65, Scalar(2))));
  const Scalar _tmp105 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp106 = _tmp104 * _tmp63;
  const Scalar _tmp107 = _tmp106 * (_tmp105 * _tmp41 * _tmp65 - _tmp105 * _tmp43 * _tmp62);
  const Scalar _tmp108 = _tmp107 * _tmp81 + _tmp47 * _tmp81 - _tmp49 * _tmp83;
  const Scalar _tmp109 = _tmp107 * _tmp73 - _tmp108 * _tmp87 + _tmp53 * _tmp73 - _tmp56 * _tmp75;
  const Scalar _tmp110 = Scalar(1.0) / (_tmp109);
  const Scalar _tmp111 = Scalar(1.0) * _tmp110;
  const Scalar _tmp112 = _tmp110 * _tmp90;
  const Scalar _tmp113 = _tmp112 * _tmp58;
  const Scalar _tmp114 = -_tmp111 * _tmp88 + _tmp113 * _tmp54;
  const Scalar _tmp115 = _tmp95 * _tmp97;
  const Scalar _tmp116 = fh1 * (-_tmp115 * _tmp19 + _tmp30 * _tmp98);
  const Scalar _tmp117 = _tmp115 * _tmp99 + Scalar(5.1796800000000003) * _tmp27 + _tmp30 * fv1;
  const Scalar _tmp118 = _tmp48 * _tmp54;
  const Scalar _tmp119 = Scalar(1.0) * _tmp86;
  const Scalar _tmp120 = _tmp102 * _tmp50 * _tmp84 * _tmp86 - _tmp119 * _tmp89;
  const Scalar _tmp121 = _tmp109 * _tmp91;
  const Scalar _tmp122 = _tmp112 * (-_tmp108 * _tmp119 - _tmp120 * _tmp121);
  const Scalar _tmp123 = _tmp91 * (_tmp120 + _tmp122);
  const Scalar _tmp124 = _tmp54 * _tmp57;
  const Scalar _tmp125 = -_tmp119 * _tmp84 + _tmp122 * _tmp124 - _tmp123 * _tmp88;
  const Scalar _tmp126 = _tmp98 * fh1;
  const Scalar _tmp127 = _tmp66 * _tmp86;
  const Scalar _tmp128 = _tmp127 * _tmp84 + _tmp67;
  const Scalar _tmp129 = _tmp127 * _tmp89 - _tmp128 * _tmp51 - _tmp60;
  const Scalar _tmp130 = _tmp112 * (-_tmp107 + _tmp108 * _tmp127 - _tmp121 * _tmp129);
  const Scalar _tmp131 = _tmp91 * (_tmp129 + _tmp130);
  const Scalar _tmp132 = _tmp124 * _tmp130 + _tmp128 - _tmp131 * _tmp88;
  const Scalar _tmp133 = _tmp115 * fh1;
  const Scalar _tmp134 = _tmp81 * _tmp87;
  const Scalar _tmp135 = -_tmp123 * _tmp85 + Scalar(1.0);
  const Scalar _tmp136 = _tmp81 * _tmp86;
  const Scalar _tmp137 = -_tmp131 * _tmp85 - _tmp66;
  const Scalar _tmp138 = -_tmp106 * _tmp116 * (-_tmp111 * _tmp134 + _tmp111 * _tmp73) -
                         _tmp106 * _tmp126 * (_tmp123 * _tmp73 + _tmp135 * _tmp136) -
                         _tmp106 * _tmp133 * (_tmp131 * _tmp73 + _tmp136 * _tmp137 + Scalar(1.0)) -
                         _tmp106 * _tmp39 * (-_tmp134 * _tmp92 + _tmp73 * _tmp92);
  const Scalar _tmp139 = Scalar(1.0) / (_tmp138);
  const Scalar _tmp140 = std::asinh(
      _tmp139 * (Scalar(1.0) * _tmp100 * (-_tmp101 * _tmp102 + _tmp103) +
                 Scalar(1.0) * _tmp116 * (-_tmp102 * _tmp114 + _tmp113) +
                 Scalar(1.0) * _tmp117 * (_tmp118 * _tmp58 - _tmp58) +
                 Scalar(1.0) * _tmp126 * (-_tmp102 * _tmp125 + _tmp122 * _tmp58) +
                 Scalar(1.0) * _tmp133 * (-_tmp102 * _tmp132 + _tmp130 * _tmp58) +
                 Scalar(1.0) * _tmp39 * (-_tmp52 * _tmp58 - Scalar(1.0) * _tmp94 + Scalar(1.0))));
  const Scalar _tmp141 = Scalar(9.6622558468725703) * _tmp138;
  const Scalar _tmp142 = _tmp39 * _tmp92;
  const Scalar _tmp143 = _tmp111 * _tmp116;
  const Scalar _tmp144 =
      _tmp126 * _tmp135 * _tmp86 + _tmp133 * _tmp137 * _tmp86 - _tmp142 * _tmp87 - _tmp143 * _tmp87;
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = _tmp117 * _tmp58;
  const Scalar _tmp147 = std::asinh(
      _tmp145 * (_tmp100 * _tmp101 * _tmp48 + _tmp114 * _tmp116 * _tmp48 - _tmp118 * _tmp146 +
                 _tmp125 * _tmp126 * _tmp48 + _tmp132 * _tmp133 * _tmp48 + _tmp39 * _tmp94));
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp149 = _tmp123 * _tmp126 + _tmp131 * _tmp133 + _tmp142 + _tmp143;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 =
      std::asinh(_tmp150 * (-_tmp100 * _tmp103 - _tmp113 * _tmp116 - _tmp122 * _tmp126 * _tmp57 -
                            _tmp130 * _tmp133 * _tmp57 + _tmp146 + _tmp39 * _tmp93));
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
          (Scalar(0.876505537412406) * _tmp139 + std::cosh(Scalar(1.0) * _tmp140) -
           std::cosh(
               Scalar(0.1034955) * _tmp139 *
               (-_tmp140 * _tmp141 -
                Scalar(8.3885017487099702) *
                    std::sqrt(Scalar(
                        Scalar(0.090199313518583735) *
                            std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp61), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp64 - 1),
                                 Scalar(2))))))) +
      _tmp60 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp148 *
          (Scalar(0.86627065637365697) * _tmp145 + std::cosh(Scalar(1.0) * _tmp147) -
           std::cosh(
               Scalar(0.1034955) * _tmp145 *
               (-_tmp147 * _tmp148 -
                Scalar(4.83288938413423) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp78), Scalar(2)) +
                        Scalar(0.13818785160942856) *
                            std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp76 - 1),
                                     Scalar(2))))))) +
      _tmp82 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp152 *
          (Scalar(0.86564762886483004) * _tmp150 + std::cosh(Scalar(1.0) * _tmp151) -
           std::cosh(Scalar(0.1034955) * _tmp150 *
                     (-_tmp151 * _tmp152 -
                      Scalar(4.7744369927459998) *
                          std::sqrt(Scalar(
                              std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp68), Scalar(2)) +
                              Scalar(0.32387954179207445) *
                                  std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp70),
                                           Scalar(2))))))) +
      _tmp74 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
