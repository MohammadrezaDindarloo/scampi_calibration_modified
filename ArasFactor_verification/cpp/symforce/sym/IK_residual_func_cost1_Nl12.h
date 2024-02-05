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
 * Symbolic function: IK_residual_func_cost1_Nl12
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 506

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (159)
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
  const Scalar _tmp19 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp22 = _tmp1 * _tmp7;
  const Scalar _tmp23 = _tmp6 * _tmp9;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp30 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp19 -
                        Scalar(0.010999999999999999) * _tmp2 + Scalar(-0.010999999999999999);
  const Scalar _tmp33 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp31 + _tmp34;
  const Scalar _tmp36 = -_tmp20;
  const Scalar _tmp37 = -_tmp21 + _tmp25;
  const Scalar _tmp38 = _tmp36 + _tmp37;
  const Scalar _tmp39 = _tmp38 + position_vector(1, 0);
  const Scalar _tmp40 = _tmp39 + Scalar(8.3196563720703107);
  const Scalar _tmp41 = -_tmp5;
  const Scalar _tmp42 = _tmp12 - _tmp15;
  const Scalar _tmp43 = _tmp41 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 + Scalar(1.9874742031097401);
  const Scalar _tmp46 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp45, Scalar(2))));
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp49 = _tmp46 * _tmp48;
  const Scalar _tmp50 = _tmp49 * (-_tmp38 * _tmp45 * _tmp47 + _tmp40 * _tmp43 * _tmp47);
  const Scalar _tmp51 = _tmp16 + _tmp41;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(1.7965602546229);
  const Scalar _tmp54 = _tmp20 + _tmp37;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 + Scalar(-4.83288938413423);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = _tmp56 * _tmp57;
  const Scalar _tmp60 = _tmp26 + _tmp36;
  const Scalar _tmp61 = _tmp60 + position_vector(1, 0);
  const Scalar _tmp62 = _tmp61 + Scalar(8.3885017487099702);
  const Scalar _tmp63 = _tmp42 + _tmp5;
  const Scalar _tmp64 = _tmp63 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 + Scalar(-2.5193355532036801);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp65 * _tmp66;
  const Scalar _tmp68 = _tmp62 * _tmp66;
  const Scalar _tmp69 = _tmp50 * _tmp67 + _tmp60 * _tmp67 - _tmp63 * _tmp68;
  const Scalar _tmp70 = _tmp40 * _tmp48;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp67 * _tmp70 - _tmp68);
  const Scalar _tmp72 = _tmp58 * _tmp70 - _tmp59;
  const Scalar _tmp73 = _tmp71 * _tmp72;
  const Scalar _tmp74 = _tmp50 * _tmp58 - _tmp51 * _tmp59 + _tmp54 * _tmp58 - _tmp69 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp76 = Scalar(1.0) * _tmp75;
  const Scalar _tmp77 = _tmp67 * _tmp73;
  const Scalar _tmp78 = _tmp28 + Scalar(-4.7744369927459998);
  const Scalar _tmp79 = _tmp18 + Scalar(-2.7171519410699099);
  const Scalar _tmp80 = std::pow(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp79, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp81 = _tmp78 * _tmp80;
  const Scalar _tmp82 = _tmp79 * _tmp80;
  const Scalar _tmp83 = fh1 * (_tmp17 * _tmp81 - _tmp27 * _tmp82);
  const Scalar _tmp84 = -_tmp31;
  const Scalar _tmp85 = _tmp34 + _tmp84;
  const Scalar _tmp86 = _tmp32 - _tmp33;
  const Scalar _tmp87 = _tmp84 + _tmp86;
  const Scalar _tmp88 = -_tmp67 * _tmp85 + _tmp67 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) * _tmp71;
  const Scalar _tmp90 = Scalar(1.0) * _tmp43;
  const Scalar _tmp91 = -_tmp63 + _tmp90;
  const Scalar _tmp92 = _tmp70 * _tmp87;
  const Scalar _tmp93 = -_tmp67 * _tmp92 + _tmp68 * _tmp85;
  const Scalar _tmp94 = Scalar(1.0) * _tmp38;
  const Scalar _tmp95 = -_tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp60 + _tmp95);
  const Scalar _tmp97 = Scalar(1.0) * _tmp96;
  const Scalar _tmp98 = _tmp71 * _tmp91 * _tmp93 * _tmp97 - _tmp88 * _tmp89;
  const Scalar _tmp99 = _tmp31 + _tmp86;
  const Scalar _tmp100 = -_tmp58 * _tmp92 + _tmp59 * _tmp99 - _tmp73 * _tmp93;
  const Scalar _tmp101 = _tmp91 * _tmp96;
  const Scalar _tmp102 = -_tmp100 * _tmp101 + _tmp58 * _tmp87 - _tmp58 * _tmp99 - _tmp73 * _tmp88;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp104 = _tmp103 * _tmp74;
  const Scalar _tmp105 = _tmp102 * _tmp75;
  const Scalar _tmp106 = _tmp105 * (-_tmp104 * _tmp98 - _tmp69 * _tmp89);
  const Scalar _tmp107 = _tmp106 + _tmp98;
  const Scalar _tmp108 = _tmp103 * _tmp72;
  const Scalar _tmp109 = -_tmp107 * _tmp108 + Scalar(1.0);
  const Scalar _tmp110 = _tmp67 * _tmp71;
  const Scalar _tmp111 = _tmp103 * _tmp58;
  const Scalar _tmp112 = _tmp81 * fh1;
  const Scalar _tmp113 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp114 = _tmp101 * _tmp94 + _tmp90;
  const Scalar _tmp115 = 0;
  const Scalar _tmp116 = _tmp103 * _tmp115;
  const Scalar _tmp117 = _tmp70 * _tmp71;
  const Scalar _tmp118 = _tmp117 * _tmp93 + _tmp92;
  const Scalar _tmp119 = -_tmp101 * _tmp118 + _tmp117 * _tmp88 - _tmp87;
  const Scalar _tmp120 = _tmp105 * (-_tmp104 * _tmp119 + _tmp117 * _tmp69 - _tmp50);
  const Scalar _tmp121 = _tmp119 + _tmp120;
  const Scalar _tmp122 = -_tmp108 * _tmp121 - _tmp70;
  const Scalar _tmp123 = _tmp82 * fh1;
  const Scalar _tmp124 = -_tmp112 * _tmp49 * (_tmp107 * _tmp111 + _tmp109 * _tmp110) -
                         _tmp113 * _tmp49 * (_tmp116 * _tmp58 - _tmp116 * _tmp77) -
                         _tmp123 * _tmp49 * (_tmp110 * _tmp122 + _tmp111 * _tmp121 + Scalar(1.0)) -
                         _tmp49 * _tmp83 * (_tmp58 * _tmp76 - _tmp76 * _tmp77);
  const Scalar _tmp125 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp126 = _tmp35 * fh1;
  const Scalar _tmp127 = Scalar(5.1796800000000003) * _tmp11 + _tmp126 * _tmp82 + _tmp17 * fv1;
  const Scalar _tmp128 = _tmp54 + _tmp95;
  const Scalar _tmp129 = _tmp101 * _tmp128;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 - _tmp51 + _tmp90);
  const Scalar _tmp131 = Scalar(1.0) * _tmp130;
  const Scalar _tmp132 = _tmp128 * _tmp96;
  const Scalar _tmp133 = _tmp105 * _tmp131;
  const Scalar _tmp134 = -_tmp100 * _tmp76 + _tmp128 * _tmp133;
  const Scalar _tmp135 = _tmp100 * _tmp103;
  const Scalar _tmp136 = _tmp114 * _tmp130;
  const Scalar _tmp137 = _tmp96 * (-_tmp115 * _tmp135 - _tmp128 * _tmp136 + _tmp95);
  const Scalar _tmp138 = _tmp128 * _tmp130;
  const Scalar _tmp139 = _tmp118 + _tmp120 * _tmp138 - _tmp121 * _tmp135;
  const Scalar _tmp140 = Scalar(1.0) * fh1;
  const Scalar _tmp141 = _tmp106 * _tmp138 - _tmp107 * _tmp135 - _tmp89 * _tmp93;
  const Scalar _tmp142 = -_tmp126 * _tmp81 - Scalar(5.1796800000000003) * _tmp24 - _tmp27 * fv1;
  const Scalar _tmp143 = _tmp101 * _tmp131;
  const Scalar _tmp144 = _tmp129 * _tmp131 + Scalar(1.0);
  const Scalar _tmp145 =
      std::asinh(_tmp125 * (Scalar(1.0) * _tmp113 *
                                (-_tmp114 * _tmp131 - Scalar(1.0) * _tmp137 + Scalar(1.0)) +
                            Scalar(1.0) * _tmp127 * (_tmp131 * _tmp132 - _tmp131) +
                            _tmp140 * _tmp81 * (_tmp106 * _tmp131 - _tmp141 * _tmp97) +
                            _tmp140 * _tmp82 * (_tmp120 * _tmp131 - _tmp139 * _tmp97) +
                            Scalar(1.0) * _tmp142 * (_tmp143 - _tmp144 * _tmp97) +
                            Scalar(1.0) * _tmp83 * (_tmp133 - _tmp134 * _tmp97)));
  const Scalar _tmp146 = Scalar(9.6622558468725703) * _tmp124;
  const Scalar _tmp147 = _tmp113 * _tmp116;
  const Scalar _tmp148 = _tmp76 * _tmp83;
  const Scalar _tmp149 =
      _tmp109 * _tmp112 * _tmp71 + _tmp122 * _tmp123 * _tmp71 - _tmp147 * _tmp73 - _tmp148 * _tmp73;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 = _tmp127 * _tmp131;
  const Scalar _tmp152 = std::asinh(
      _tmp150 * (_tmp112 * _tmp141 * _tmp96 + _tmp113 * _tmp137 + _tmp123 * _tmp139 * _tmp96 -
                 _tmp132 * _tmp151 + _tmp134 * _tmp83 * _tmp96 + _tmp142 * _tmp144 * _tmp96));
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp149;
  const Scalar _tmp154 = _tmp103 * fh1;
  const Scalar _tmp155 =
      _tmp107 * _tmp154 * _tmp81 + _tmp121 * _tmp154 * _tmp82 + _tmp147 + _tmp148;
  const Scalar _tmp156 = Scalar(1.0) / (_tmp155);
  const Scalar _tmp157 = std::asinh(_tmp156 * (-_tmp106 * _tmp112 * _tmp130 + _tmp113 * _tmp136 -
                                               _tmp120 * _tmp123 * _tmp130 - _tmp133 * _tmp83 -
                                               _tmp142 * _tmp143 + _tmp151));
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp155;

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
      -_tmp146 *
          (Scalar(0.87679799777269396) * _tmp125 + std::cosh(Scalar(1.0) * _tmp145) -
           std::cosh(
               Scalar(0.1034955) * _tmp125 *
               (-_tmp145 * _tmp146 -
                Scalar(8.3196563720703107) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp39 - 1), Scalar(2)) +
                        Scalar(0.057067943527034905) *
                            std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp44 - 1),
                                     Scalar(2))))))) +
      _tmp87 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp153 *
          (Scalar(0.876505537412406) * _tmp150 + std::cosh(Scalar(1.0) * _tmp152) -
           std::cosh(
               Scalar(0.1034955) * _tmp150 *
               (-_tmp152 * _tmp153 -
                Scalar(8.3885017487099702) *
                    std::sqrt(Scalar(
                        Scalar(0.090199313518583735) *
                            std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp64), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp61 - 1),
                                 Scalar(2))))))) +
      _tmp85 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp158 *
          (Scalar(0.86627065637365697) * _tmp156 + std::cosh(Scalar(1.0) * _tmp157) -
           std::cosh(
               Scalar(0.1034955) * _tmp156 *
               (-_tmp157 * _tmp158 -
                Scalar(4.83288938413423) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp55), Scalar(2)) +
                        Scalar(0.13818785160942856) *
                            std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp52 - 1),
                                     Scalar(2))))))) +
      _tmp99 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
