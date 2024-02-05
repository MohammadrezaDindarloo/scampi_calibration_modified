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
 * Symbolic function: IK_residual_func_cost1_Nl20
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 503

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (158)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = 2 * _tmp1 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp4;
  const Scalar _tmp12 = _tmp11 * _tmp2;
  const Scalar _tmp13 = _tmp1 * _tmp5;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = _tmp1 * _tmp11;
  const Scalar _tmp22 = _tmp2 * _tmp5;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp27 = _tmp24 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp33 = -_tmp32;
  const Scalar _tmp34 =
      -Scalar(0.010999999999999999) * _tmp25 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp36 = _tmp34 + _tmp35;
  const Scalar _tmp37 = _tmp33 + _tmp36;
  const Scalar _tmp38 = -_tmp7;
  const Scalar _tmp39 = _tmp16 + _tmp38;
  const Scalar _tmp40 = _tmp24 - _tmp26;
  const Scalar _tmp41 = _tmp20 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 + Scalar(8.3196563720703107);
  const Scalar _tmp44 = _tmp39 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 + Scalar(1.9874742031097401);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp43 * _tmp46;
  const Scalar _tmp48 = _tmp45 * _tmp46;
  const Scalar _tmp49 = _tmp10 + _tmp15;
  const Scalar _tmp50 = _tmp38 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 + Scalar(-2.5193355532036801);
  const Scalar _tmp53 = _tmp19 + _tmp40;
  const Scalar _tmp54 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp55 = _tmp54 + Scalar(8.3885017487099702);
  const Scalar _tmp56 =
      std::sqrt(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp55, Scalar(2))));
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp59 = _tmp56 * _tmp58;
  const Scalar _tmp60 = _tmp59 * (_tmp50 * _tmp55 * _tmp57 - _tmp52 * _tmp53 * _tmp57);
  const Scalar _tmp61 = -_tmp39 * _tmp47 + _tmp41 * _tmp48 + _tmp48 * _tmp60;
  const Scalar _tmp62 = _tmp55 * _tmp58;
  const Scalar _tmp63 = Scalar(1.0) / (-_tmp47 + _tmp48 * _tmp62);
  const Scalar _tmp64 = Scalar(1.0) * _tmp63;
  const Scalar _tmp65 = _tmp34 - _tmp35;
  const Scalar _tmp66 = _tmp33 + _tmp65;
  const Scalar _tmp67 = _tmp32 + _tmp65;
  const Scalar _tmp68 = _tmp48 * _tmp67;
  const Scalar _tmp69 = -_tmp48 * _tmp66 + _tmp68;
  const Scalar _tmp70 = Scalar(1.0) * _tmp53;
  const Scalar _tmp71 = -_tmp70;
  const Scalar _tmp72 = Scalar(1.0) / (_tmp41 + _tmp71);
  const Scalar _tmp73 = Scalar(1.0) * _tmp50;
  const Scalar _tmp74 = _tmp72 * (-_tmp39 + _tmp73);
  const Scalar _tmp75 = _tmp47 * _tmp66 - _tmp62 * _tmp68;
  const Scalar _tmp76 = _tmp64 * _tmp75;
  const Scalar _tmp77 = -_tmp64 * _tmp69 + _tmp74 * _tmp76;
  const Scalar _tmp78 = _tmp19 + _tmp27;
  const Scalar _tmp79 = _tmp78 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 + Scalar(-4.7744369927459998);
  const Scalar _tmp81 = _tmp49 + _tmp7;
  const Scalar _tmp82 = _tmp81 + position_vector(0, 0);
  const Scalar _tmp83 = _tmp82 + Scalar(-2.7171519410699099);
  const Scalar _tmp84 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp83, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp85 = _tmp80 * _tmp84;
  const Scalar _tmp86 = _tmp83 * _tmp84;
  const Scalar _tmp87 = _tmp62 * _tmp86 - _tmp85;
  const Scalar _tmp88 = _tmp63 * _tmp87;
  const Scalar _tmp89 = _tmp67 * _tmp86;
  const Scalar _tmp90 = _tmp32 + _tmp36;
  const Scalar _tmp91 = -_tmp62 * _tmp89 - _tmp75 * _tmp88 + _tmp85 * _tmp90;
  const Scalar _tmp92 = -_tmp69 * _tmp88 - _tmp74 * _tmp91 - _tmp86 * _tmp90 + _tmp89;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp60 * _tmp86 - _tmp61 * _tmp88 + _tmp78 * _tmp86 - _tmp81 * _tmp85;
  const Scalar _tmp95 = _tmp93 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp97 = _tmp92 * _tmp96;
  const Scalar _tmp98 = _tmp97 * (-_tmp61 * _tmp64 - _tmp77 * _tmp95);
  const Scalar _tmp99 = _tmp77 + _tmp98;
  const Scalar _tmp100 = _tmp86 * _tmp93;
  const Scalar _tmp101 = _tmp87 * _tmp93;
  const Scalar _tmp102 = -_tmp101 * _tmp99 + Scalar(1.0);
  const Scalar _tmp103 = _tmp48 * _tmp63;
  const Scalar _tmp104 = _tmp18 + Scalar(1.7965602546229);
  const Scalar _tmp105 = _tmp29 + Scalar(-4.83288938413423);
  const Scalar _tmp106 =
      std::pow(Scalar(std::pow(_tmp104, Scalar(2)) + std::pow(_tmp105, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp107 = _tmp105 * _tmp106;
  const Scalar _tmp108 = _tmp107 * fh1;
  const Scalar _tmp109 = Scalar(1.0) * _tmp96;
  const Scalar _tmp110 = _tmp48 * _tmp88;
  const Scalar _tmp111 = _tmp104 * _tmp106;
  const Scalar _tmp112 = fh1 * (_tmp107 * _tmp17 - _tmp111 * _tmp28);
  const Scalar _tmp113 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp114 = _tmp70 * _tmp74 + _tmp73;
  const Scalar _tmp115 = 0;
  const Scalar _tmp116 = _tmp115 * _tmp93;
  const Scalar _tmp117 = _tmp62 * _tmp63;
  const Scalar _tmp118 = _tmp117 * _tmp75 + _tmp62 * _tmp67;
  const Scalar _tmp119 = _tmp117 * _tmp69 - _tmp118 * _tmp74 - _tmp67;
  const Scalar _tmp120 = _tmp97 * (_tmp117 * _tmp61 - _tmp119 * _tmp95 - _tmp60);
  const Scalar _tmp121 = _tmp119 + _tmp120;
  const Scalar _tmp122 = -_tmp101 * _tmp121 - _tmp62;
  const Scalar _tmp123 = _tmp111 * fh1;
  const Scalar _tmp124 = -_tmp108 * _tmp59 * (_tmp100 * _tmp99 + _tmp102 * _tmp103) -
                         _tmp112 * _tmp59 * (-_tmp109 * _tmp110 + _tmp109 * _tmp86) -
                         _tmp113 * _tmp59 * (-_tmp110 * _tmp116 + _tmp116 * _tmp86) -
                         _tmp123 * _tmp59 * (_tmp100 * _tmp121 + _tmp103 * _tmp122 + Scalar(1.0));
  const Scalar _tmp125 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp126 = _tmp71 + _tmp78;
  const Scalar _tmp127 = _tmp126 * _tmp74;
  const Scalar _tmp128 = Scalar(1.0) / (-_tmp127 + _tmp73 - _tmp81);
  const Scalar _tmp129 = Scalar(1.0) * _tmp128;
  const Scalar _tmp130 = _tmp126 * _tmp129;
  const Scalar _tmp131 = -_tmp109 * _tmp91 + _tmp130 * _tmp97;
  const Scalar _tmp132 = Scalar(1.0) * _tmp72;
  const Scalar _tmp133 = _tmp129 * _tmp97;
  const Scalar _tmp134 = _tmp126 * _tmp128;
  const Scalar _tmp135 = _tmp91 * _tmp93;
  const Scalar _tmp136 = _tmp134 * _tmp98 - _tmp135 * _tmp99 - _tmp76;
  const Scalar _tmp137 = _tmp129 * _tmp74;
  const Scalar _tmp138 = _tmp127 * _tmp129 + Scalar(1.0);
  const Scalar _tmp139 = _tmp37 * fh1;
  const Scalar _tmp140 = -_tmp107 * _tmp139 - Scalar(3.29616) * _tmp23 - _tmp28 * fv1;
  const Scalar _tmp141 = _tmp111 * _tmp139 + Scalar(3.29616) * _tmp14 + _tmp17 * fv1;
  const Scalar _tmp142 = _tmp114 * _tmp128;
  const Scalar _tmp143 = _tmp72 * (-_tmp115 * _tmp135 - _tmp126 * _tmp142 + _tmp71);
  const Scalar _tmp144 = _tmp118 + _tmp120 * _tmp134 - _tmp121 * _tmp135;
  const Scalar _tmp145 =
      std::asinh(_tmp125 * (Scalar(1.0) * _tmp108 * (_tmp129 * _tmp98 - _tmp132 * _tmp136) +
                            Scalar(1.0) * _tmp112 * (-_tmp131 * _tmp132 + _tmp133) +
                            Scalar(1.0) * _tmp113 *
                                (-_tmp114 * _tmp129 - Scalar(1.0) * _tmp143 + Scalar(1.0)) +
                            Scalar(1.0) * _tmp123 * (_tmp120 * _tmp129 - _tmp132 * _tmp144) +
                            Scalar(1.0) * _tmp140 * (-_tmp132 * _tmp138 + _tmp137) +
                            Scalar(1.0) * _tmp141 * (-_tmp129 + _tmp130 * _tmp72)));
  const Scalar _tmp146 = Scalar(9.6622558468725703) * _tmp124;
  const Scalar _tmp147 = _tmp113 * _tmp116;
  const Scalar _tmp148 = _tmp109 * _tmp112;
  const Scalar _tmp149 =
      _tmp102 * _tmp108 * _tmp63 + _tmp122 * _tmp123 * _tmp63 - _tmp147 * _tmp88 - _tmp148 * _tmp88;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 = _tmp129 * _tmp141;
  const Scalar _tmp152 =
      std::asinh(_tmp150 * (_tmp108 * _tmp136 * _tmp72 + _tmp112 * _tmp131 * _tmp72 +
                            _tmp113 * _tmp143 + _tmp123 * _tmp144 * _tmp72 -
                            _tmp126 * _tmp151 * _tmp72 + _tmp138 * _tmp140 * _tmp72));
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp149;
  const Scalar _tmp154 = _tmp108 * _tmp93 * _tmp99 + _tmp121 * _tmp123 * _tmp93 + _tmp147 + _tmp148;
  const Scalar _tmp155 = Scalar(1.0) / (_tmp154);
  const Scalar _tmp156 =
      std::asinh(_tmp155 * (-_tmp108 * _tmp128 * _tmp98 - _tmp112 * _tmp133 + _tmp113 * _tmp142 -
                            _tmp120 * _tmp123 * _tmp128 - _tmp137 * _tmp140 + _tmp151));
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp154;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp31 *
          (Scalar(0.86627065637365697) * _tmp0 + std::cosh(Scalar(1.0) * _tmp30) -
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp30 * _tmp31 -
                Scalar(4.83288938413423) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp29), Scalar(2)) +
                        Scalar(0.13818785160942856) *
                            std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp18 - 1),
                                     Scalar(2))))))) +
      _tmp37 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp146 *
          (Scalar(0.876505537412406) * _tmp125 + std::cosh(Scalar(1.0) * _tmp145) -
           std::cosh(
               Scalar(0.1034955) * _tmp125 *
               (-_tmp145 * _tmp146 -
                Scalar(8.3885017487099702) *
                    std::sqrt(Scalar(
                        Scalar(0.090199313518583735) *
                            std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp51), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp54 - 1),
                                 Scalar(2))))))) +
      _tmp67 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp153 *
          (Scalar(0.87679799777269396) * _tmp150 + std::cosh(Scalar(1.0) * _tmp152) -
           std::cosh(
               Scalar(0.1034955) * _tmp150 *
               (-_tmp152 * _tmp153 -
                Scalar(8.3196563720703107) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp42 - 1), Scalar(2)) +
                        Scalar(0.057067943527034905) *
                            std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp44 - 1),
                                     Scalar(2))))))) +
      _tmp66 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp157 *
          (Scalar(0.86564762886483004) * _tmp155 + std::cosh(Scalar(1.0) * _tmp156) -
           std::cosh(Scalar(0.1034955) * _tmp155 *
                     (-_tmp156 * _tmp157 -
                      Scalar(4.7744369927459998) *
                          std::sqrt(Scalar(
                              std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp79), Scalar(2)) +
                              Scalar(0.32387954179207445) *
                                  std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp82),
                                           Scalar(2))))))) +
      _tmp90 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym