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
 * Symbolic function: IK_residual_func_cost1_Nl16
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl16(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 505

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (154)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp3 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp1 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp1;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp3 * _tmp8;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp22 = _tmp12 * _tmp3;
  const Scalar _tmp23 = _tmp6 * _tmp8;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp30 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp19 -
                        Scalar(0.010999999999999999) * _tmp2 + Scalar(-0.010999999999999999);
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp31 + _tmp34;
  const Scalar _tmp36 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp37 = -_tmp20;
  const Scalar _tmp38 = -_tmp21 + _tmp25;
  const Scalar _tmp39 = _tmp37 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = _tmp40 + Scalar(8.3196563720703107);
  const Scalar _tmp42 = -_tmp5;
  const Scalar _tmp43 = _tmp11 - _tmp15;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 + Scalar(1.9874742031097401);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp41 * _tmp47;
  const Scalar _tmp49 = _tmp20 + _tmp38;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 + Scalar(-4.83288938413423);
  const Scalar _tmp52 = _tmp16 + _tmp42;
  const Scalar _tmp53 = _tmp52 + position_vector(0, 0);
  const Scalar _tmp54 = _tmp53 + Scalar(1.7965602546229);
  const Scalar _tmp55 = Scalar(1.0) / (_tmp54);
  const Scalar _tmp56 = _tmp51 * _tmp55;
  const Scalar _tmp57 = _tmp46 * _tmp47;
  const Scalar _tmp58 = Scalar(1.0) / (-_tmp48 + _tmp56 * _tmp57);
  const Scalar _tmp59 = _tmp57 * _tmp58;
  const Scalar _tmp60 = Scalar(1.0) * _tmp52;
  const Scalar _tmp61 = Scalar(1.0) * _tmp49;
  const Scalar _tmp62 = -_tmp61;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp39 + _tmp62);
  const Scalar _tmp64 = _tmp63 * (-_tmp44 + _tmp60);
  const Scalar _tmp65 = _tmp60 + _tmp61 * _tmp64;
  const Scalar _tmp66 = 0;
  const Scalar _tmp67 = -_tmp31;
  const Scalar _tmp68 = _tmp34 + _tmp67;
  const Scalar _tmp69 = _tmp26 + _tmp37;
  const Scalar _tmp70 = _tmp69 + position_vector(1, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(8.3885017487099702);
  const Scalar _tmp72 = _tmp43 + _tmp5;
  const Scalar _tmp73 = _tmp72 + position_vector(0, 0);
  const Scalar _tmp74 = _tmp73 + Scalar(-2.5193355532036801);
  const Scalar _tmp75 = std::pow(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp74, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp74 * _tmp75;
  const Scalar _tmp77 = _tmp68 * _tmp76;
  const Scalar _tmp78 = _tmp32 - _tmp33;
  const Scalar _tmp79 = _tmp31 + _tmp78;
  const Scalar _tmp80 = _tmp71 * _tmp75;
  const Scalar _tmp81 = _tmp56 * _tmp76 - _tmp80;
  const Scalar _tmp82 = _tmp67 + _tmp78;
  const Scalar _tmp83 = _tmp57 * _tmp68;
  const Scalar _tmp84 = _tmp58 * (-_tmp57 * _tmp82 + _tmp83);
  const Scalar _tmp85 = _tmp58 * (_tmp48 * _tmp82 - _tmp56 * _tmp83);
  const Scalar _tmp86 = -_tmp56 * _tmp77 + _tmp79 * _tmp80 - _tmp81 * _tmp85;
  const Scalar _tmp87 = -_tmp64 * _tmp86 - _tmp76 * _tmp79 + _tmp77 - _tmp81 * _tmp84;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 = _tmp81 * _tmp88;
  const Scalar _tmp90 = _tmp66 * _tmp89;
  const Scalar _tmp91 = _tmp66 * _tmp88;
  const Scalar _tmp92 =
      std::sqrt(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp54, Scalar(2))));
  const Scalar _tmp93 = _tmp55 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp95 = _tmp93 * (-_tmp49 * _tmp54 * _tmp94 + _tmp51 * _tmp52 * _tmp94);
  const Scalar _tmp96 = _tmp58 * (_tmp39 * _tmp57 - _tmp44 * _tmp48 + _tmp57 * _tmp95);
  const Scalar _tmp97 = Scalar(1.0) * _tmp85;
  const Scalar _tmp98 = _tmp64 * _tmp97 - Scalar(1.0) * _tmp84;
  const Scalar _tmp99 = _tmp69 * _tmp76 - _tmp72 * _tmp80 + _tmp76 * _tmp95 - _tmp81 * _tmp96;
  const Scalar _tmp100 = _tmp88 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp102 = _tmp101 * _tmp87;
  const Scalar _tmp103 = _tmp102 * (-_tmp100 * _tmp98 - Scalar(1.0) * _tmp96);
  const Scalar _tmp104 = _tmp103 + _tmp98;
  const Scalar _tmp105 = _tmp76 * _tmp88;
  const Scalar _tmp106 = -_tmp104 * _tmp89 + Scalar(1.0);
  const Scalar _tmp107 = _tmp28 + Scalar(-4.7744369927459998);
  const Scalar _tmp108 = _tmp18 + Scalar(-2.7171519410699099);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = Scalar(1.0) * _tmp101;
  const Scalar _tmp113 = _tmp108 * _tmp109;
  const Scalar _tmp114 = fh1 * (_tmp110 * _tmp17 - _tmp113 * _tmp27);
  const Scalar _tmp115 = _tmp56 * _tmp68 + _tmp56 * _tmp85;
  const Scalar _tmp116 = -_tmp115 * _tmp64 + _tmp56 * _tmp84 - _tmp68;
  const Scalar _tmp117 = _tmp102 * (-_tmp100 * _tmp116 + _tmp56 * _tmp96 - _tmp95);
  const Scalar _tmp118 = _tmp116 + _tmp117;
  const Scalar _tmp119 = -_tmp118 * _tmp89 - _tmp56;
  const Scalar _tmp120 = _tmp113 * fh1;
  const Scalar _tmp121 = -_tmp111 * _tmp93 * (_tmp104 * _tmp105 + _tmp106 * _tmp59) -
                         _tmp114 * _tmp93 * (-_tmp112 * _tmp59 * _tmp81 + _tmp112 * _tmp76) -
                         _tmp120 * _tmp93 * (_tmp105 * _tmp118 + _tmp119 * _tmp59 + Scalar(1.0)) -
                         _tmp36 * _tmp93 * (-_tmp59 * _tmp90 + _tmp76 * _tmp91);
  const Scalar _tmp122 = Scalar(1.0) / (_tmp121);
  const Scalar _tmp123 = _tmp86 * _tmp88;
  const Scalar _tmp124 = _tmp62 + _tmp69;
  const Scalar _tmp125 = _tmp124 * _tmp64;
  const Scalar _tmp126 = Scalar(1.0) / (-_tmp125 + _tmp60 - _tmp72);
  const Scalar _tmp127 = _tmp124 * _tmp126;
  const Scalar _tmp128 = _tmp103 * _tmp127 - _tmp104 * _tmp123 - _tmp97;
  const Scalar _tmp129 = Scalar(1.0) * _tmp63;
  const Scalar _tmp130 = Scalar(1.0) * _tmp126;
  const Scalar _tmp131 = _tmp102 * _tmp130;
  const Scalar _tmp132 = -_tmp112 * _tmp86 + _tmp124 * _tmp131;
  const Scalar _tmp133 = _tmp126 * _tmp65;
  const Scalar _tmp134 = -_tmp124 * _tmp133 + _tmp62 - _tmp86 * _tmp91;
  const Scalar _tmp135 = _tmp115 + _tmp117 * _tmp127 - _tmp118 * _tmp123;
  const Scalar _tmp136 = _tmp35 * fh1;
  const Scalar _tmp137 = -_tmp110 * _tmp136 - Scalar(3.29616) * _tmp24 - _tmp27 * fv1;
  const Scalar _tmp138 = _tmp125 * _tmp130 + Scalar(1.0);
  const Scalar _tmp139 = _tmp130 * _tmp64;
  const Scalar _tmp140 = Scalar(3.29616) * _tmp10 + _tmp113 * _tmp136 + _tmp17 * fv1;
  const Scalar _tmp141 = _tmp124 * _tmp63;
  const Scalar _tmp142 = std::asinh(
      _tmp122 * (Scalar(1.0) * _tmp111 * (_tmp103 * _tmp130 - _tmp128 * _tmp129) +
                 Scalar(1.0) * _tmp114 * (-_tmp129 * _tmp132 + _tmp131) +
                 Scalar(1.0) * _tmp120 * (_tmp117 * _tmp130 - _tmp129 * _tmp135) +
                 Scalar(1.0) * _tmp137 * (-_tmp129 * _tmp138 + _tmp139) +
                 Scalar(1.0) * _tmp140 * (_tmp130 * _tmp141 - _tmp130) +
                 Scalar(1.0) * _tmp36 * (-_tmp129 * _tmp134 - _tmp130 * _tmp65 + Scalar(1.0))));
  const Scalar _tmp143 = Scalar(9.6622558468725703) * _tmp121;
  const Scalar _tmp144 = _tmp112 * _tmp114;
  const Scalar _tmp145 = _tmp106 * _tmp111 * _tmp58 + _tmp119 * _tmp120 * _tmp58 -
                         _tmp144 * _tmp58 * _tmp81 - _tmp36 * _tmp58 * _tmp90;
  const Scalar _tmp146 = Scalar(1.0) / (_tmp145);
  const Scalar _tmp147 = _tmp130 * _tmp140;
  const Scalar _tmp148 =
      std::asinh(_tmp146 * (_tmp111 * _tmp128 * _tmp63 + _tmp114 * _tmp132 * _tmp63 +
                            _tmp120 * _tmp135 * _tmp63 + _tmp134 * _tmp36 * _tmp63 +
                            _tmp137 * _tmp138 * _tmp63 - _tmp141 * _tmp147));
  const Scalar _tmp149 = Scalar(9.6622558468725703) * _tmp145;
  const Scalar _tmp150 =
      _tmp104 * _tmp111 * _tmp88 + _tmp118 * _tmp120 * _tmp88 + _tmp144 + _tmp36 * _tmp91;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 = std::asinh(_tmp151 * (-_tmp103 * _tmp111 * _tmp126 - _tmp114 * _tmp131 -
                                               _tmp117 * _tmp120 * _tmp126 + _tmp133 * _tmp36 -
                                               _tmp137 * _tmp139 + _tmp147));
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp150;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp30 *
          (Scalar(0.86564762886483004) * _tmp0 + std::cosh(Scalar(1.0) * _tmp29) -
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp29 * _tmp30 -
                Scalar(4.7744369927459998) *
                    std::sqrt(Scalar(
                        Scalar(0.32387954179207445) *
                            std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp18), Scalar(2)) +
                        std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp28), Scalar(2))))))) +
      _tmp35 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp143 *
          (Scalar(0.86627065637365697) * _tmp122 + std::cosh(Scalar(1.0) * _tmp142) -
           std::cosh(
               Scalar(0.1034955) * _tmp122 *
               (-_tmp142 * _tmp143 -
                Scalar(4.83288938413423) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp50), Scalar(2)) +
                        Scalar(0.13818785160942856) *
                            std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp53 - 1),
                                     Scalar(2))))))) +
      _tmp68 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp149 *
          (Scalar(0.87679799777269396) * _tmp146 + std::cosh(Scalar(1.0) * _tmp148) -
           std::cosh(
               Scalar(0.1034955) * _tmp146 *
               (-_tmp148 * _tmp149 -
                Scalar(8.3196563720703107) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp40 - 1), Scalar(2)) +
                        Scalar(0.057067943527034905) *
                            std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp45 - 1),
                                     Scalar(2))))))) +
      _tmp82 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp153 *
          (Scalar(0.876505537412406) * _tmp151 + std::cosh(Scalar(1.0) * _tmp152) -
           std::cosh(
               Scalar(0.1034955) * _tmp151 *
               (-_tmp152 * _tmp153 -
                Scalar(8.3885017487099702) *
                    std::sqrt(Scalar(
                        Scalar(0.090199313518583735) *
                            std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp73), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp70 - 1),
                                 Scalar(2))))))) +
      _tmp79 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym