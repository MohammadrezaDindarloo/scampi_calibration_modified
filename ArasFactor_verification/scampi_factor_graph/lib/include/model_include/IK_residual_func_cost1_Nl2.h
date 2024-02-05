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
  // Total ops: 504

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (158)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp5 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp9 = 2 * _tmp2;
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                        _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = 2 * _tmp4;
  const Scalar _tmp13 = _tmp11 * _tmp12;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp12 * _tmp8;
  const Scalar _tmp16 = _tmp11 * _tmp9;
  const Scalar _tmp17 = _tmp15 - _tmp16;
  const Scalar _tmp18 = -Scalar(0.010999999999999999) * _tmp17;
  const Scalar _tmp19 = -_tmp14 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp7;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = 1 - 2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp26 = _tmp12 * _tmp2;
  const Scalar _tmp27 = 2 * _tmp11 * _tmp8;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp25 + _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(0, 0);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp26 - Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp35 = -_tmp34;
  const Scalar _tmp36 =
      -Scalar(0.010999999999999999) * _tmp24 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp38 = _tmp36 - _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = _tmp14 + _tmp18;
  const Scalar _tmp41 = _tmp40 + _tmp7;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 + Scalar(8.3885017487099702);
  const Scalar _tmp44 = _tmp25 + _tmp29;
  const Scalar _tmp45 = _tmp23 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 + Scalar(-2.5193355532036801);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp47 * _tmp48;
  const Scalar _tmp50 = _tmp43 * _tmp48;
  const Scalar _tmp51 = _tmp40 + _tmp6;
  const Scalar _tmp52 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(-4.7744369927459998);
  const Scalar _tmp54 = _tmp22 + _tmp44;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 + Scalar(-2.7171519410699099);
  const Scalar _tmp57 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))));
  const Scalar _tmp58 = Scalar(1.0) / (_tmp57);
  const Scalar _tmp59 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp60 = _tmp57 * _tmp59;
  const Scalar _tmp61 = _tmp60 * (-_tmp51 * _tmp56 * _tmp58 + _tmp53 * _tmp54 * _tmp58);
  const Scalar _tmp62 = _tmp41 * _tmp49 - _tmp45 * _tmp50 + _tmp49 * _tmp61;
  const Scalar _tmp63 = _tmp53 * _tmp59;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp49 * _tmp63 - _tmp50);
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = _tmp36 + _tmp37;
  const Scalar _tmp67 = _tmp34 + _tmp66;
  const Scalar _tmp68 = _tmp34 + _tmp38;
  const Scalar _tmp69 = _tmp63 * _tmp67;
  const Scalar _tmp70 = -_tmp49 * _tmp69 + _tmp50 * _tmp68;
  const Scalar _tmp71 = _tmp65 * _tmp70 + _tmp69;
  const Scalar _tmp72 = Scalar(1.0) * _tmp51;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp41 + _tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp54;
  const Scalar _tmp76 = -_tmp45 + _tmp75;
  const Scalar _tmp77 = _tmp74 * _tmp76;
  const Scalar _tmp78 = _tmp49 * _tmp67 - _tmp49 * _tmp68;
  const Scalar _tmp79 = _tmp65 * _tmp78 - _tmp67 - _tmp71 * _tmp77;
  const Scalar _tmp80 = _tmp22 + _tmp30;
  const Scalar _tmp81 = _tmp80 + position_vector(0, 0);
  const Scalar _tmp82 = _tmp81 + Scalar(1.7965602546229);
  const Scalar _tmp83 = _tmp19 + _tmp6;
  const Scalar _tmp84 = _tmp83 + position_vector(1, 0);
  const Scalar _tmp85 = _tmp84 + Scalar(-4.83288938413423);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp82 * _tmp86;
  const Scalar _tmp88 = _tmp35 + _tmp66;
  const Scalar _tmp89 = _tmp85 * _tmp86;
  const Scalar _tmp90 = _tmp63 * _tmp87 - _tmp89;
  const Scalar _tmp91 = _tmp64 * _tmp90;
  const Scalar _tmp92 = -_tmp69 * _tmp87 - _tmp70 * _tmp91 + _tmp88 * _tmp89;
  const Scalar _tmp93 = _tmp67 * _tmp87 - _tmp77 * _tmp92 - _tmp78 * _tmp91 - _tmp87 * _tmp88;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp61 * _tmp87 - _tmp62 * _tmp91 - _tmp80 * _tmp89 + _tmp83 * _tmp87;
  const Scalar _tmp96 = _tmp94 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp98 = _tmp93 * _tmp97;
  const Scalar _tmp99 = _tmp98 * (-_tmp61 + _tmp62 * _tmp65 - _tmp79 * _tmp96);
  const Scalar _tmp100 = _tmp79 + _tmp99;
  const Scalar _tmp101 = _tmp87 * _tmp94;
  const Scalar _tmp102 = _tmp90 * _tmp94;
  const Scalar _tmp103 = -_tmp100 * _tmp102 - _tmp63;
  const Scalar _tmp104 = _tmp49 * _tmp64;
  const Scalar _tmp105 = _tmp32 + Scalar(1.9874742031097401);
  const Scalar _tmp106 = _tmp21 + Scalar(8.3196563720703107);
  const Scalar _tmp107 =
      std::pow(Scalar(std::pow(_tmp105, Scalar(2)) + std::pow(_tmp106, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp108 = _tmp105 * _tmp107;
  const Scalar _tmp109 = _tmp108 * fh1;
  const Scalar _tmp110 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp111 = _tmp72 * _tmp77 + _tmp75;
  const Scalar _tmp112 = 0;
  const Scalar _tmp113 = _tmp112 * _tmp94;
  const Scalar _tmp114 = Scalar(1.0) * _tmp97;
  const Scalar _tmp115 = Scalar(1.0) * _tmp64;
  const Scalar _tmp116 = _tmp115 * _tmp90 * _tmp97;
  const Scalar _tmp117 = _tmp106 * _tmp107;
  const Scalar _tmp118 = fh1 * (-_tmp108 * _tmp20 + _tmp117 * _tmp31);
  const Scalar _tmp119 = Scalar(1.0) * _tmp74;
  const Scalar _tmp120 = -_tmp115 * _tmp78 + _tmp119 * _tmp64 * _tmp70 * _tmp76;
  const Scalar _tmp121 = _tmp98 * (-_tmp115 * _tmp62 - _tmp120 * _tmp96);
  const Scalar _tmp122 = _tmp120 + _tmp121;
  const Scalar _tmp123 = -_tmp102 * _tmp122 + Scalar(1.0);
  const Scalar _tmp124 = _tmp117 * fh1;
  const Scalar _tmp125 = -_tmp109 * _tmp60 * (_tmp100 * _tmp101 + _tmp103 * _tmp104 + Scalar(1.0)) -
                         _tmp110 * _tmp60 * (-_tmp113 * _tmp49 * _tmp91 + _tmp113 * _tmp87) -
                         _tmp118 * _tmp60 * (_tmp114 * _tmp87 - _tmp116 * _tmp49) -
                         _tmp124 * _tmp60 * (_tmp101 * _tmp122 + _tmp104 * _tmp123);
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = _tmp73 + _tmp83;
  const Scalar _tmp128 = _tmp127 * _tmp77;
  const Scalar _tmp129 = Scalar(1.0) / (-_tmp128 + _tmp75 - _tmp80);
  const Scalar _tmp130 = _tmp127 * _tmp129;
  const Scalar _tmp131 = _tmp92 * _tmp94;
  const Scalar _tmp132 = -_tmp115 * _tmp70 + _tmp121 * _tmp130 - _tmp122 * _tmp131;
  const Scalar _tmp133 = Scalar(1.0) * _tmp129;
  const Scalar _tmp134 = Scalar(1.0) * fh1;
  const Scalar _tmp135 = _tmp133 * _tmp77;
  const Scalar _tmp136 = _tmp128 * _tmp133 + Scalar(1.0);
  const Scalar _tmp137 = _tmp39 * fh1;
  const Scalar _tmp138 = -_tmp117 * _tmp137 - Scalar(3.29616) * _tmp17 - _tmp20 * fv1;
  const Scalar _tmp139 = _tmp108 * _tmp137 + Scalar(3.29616) * _tmp28 + _tmp31 * fv1;
  const Scalar _tmp140 = _tmp127 * _tmp74;
  const Scalar _tmp141 = -_tmp100 * _tmp131 + _tmp130 * _tmp99 + _tmp71;
  const Scalar _tmp142 = _tmp111 * _tmp129;
  const Scalar _tmp143 = -_tmp112 * _tmp131 - _tmp127 * _tmp142 + _tmp73;
  const Scalar _tmp144 = _tmp133 * _tmp98;
  const Scalar _tmp145 = -_tmp114 * _tmp92 + _tmp127 * _tmp144;
  const Scalar _tmp146 = std::asinh(
      _tmp126 * (_tmp108 * _tmp134 * (-_tmp119 * _tmp141 + _tmp133 * _tmp99) +
                 Scalar(1.0) * _tmp110 * (-_tmp111 * _tmp133 - _tmp119 * _tmp143 + Scalar(1.0)) +
                 _tmp117 * _tmp134 * (-_tmp119 * _tmp132 + _tmp121 * _tmp133) +
                 Scalar(1.0) * _tmp118 * (-_tmp119 * _tmp145 + _tmp144) +
                 Scalar(1.0) * _tmp138 * (-_tmp119 * _tmp136 + _tmp135) +
                 Scalar(1.0) * _tmp139 * (_tmp133 * _tmp140 - _tmp133)));
  const Scalar _tmp147 = Scalar(9.6622558468725703) * _tmp125;
  const Scalar _tmp148 = _tmp133 * _tmp139;
  const Scalar _tmp149 = _tmp110 * _tmp113;
  const Scalar _tmp150 = _tmp103 * _tmp109 * _tmp64 - _tmp116 * _tmp118 +
                         _tmp123 * _tmp124 * _tmp64 - _tmp149 * _tmp91;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 =
      std::asinh(_tmp151 * (_tmp109 * _tmp141 * _tmp74 + _tmp110 * _tmp143 * _tmp74 +
                            _tmp118 * _tmp145 * _tmp74 + _tmp124 * _tmp132 * _tmp74 +
                            _tmp136 * _tmp138 * _tmp74 - _tmp140 * _tmp148));
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp150;
  const Scalar _tmp154 =
      _tmp100 * _tmp109 * _tmp94 + _tmp114 * _tmp118 + _tmp122 * _tmp124 * _tmp94 + _tmp149;
  const Scalar _tmp155 = Scalar(1.0) / (_tmp154);
  const Scalar _tmp156 =
      std::asinh(_tmp155 * (-_tmp109 * _tmp129 * _tmp99 + _tmp110 * _tmp142 - _tmp118 * _tmp144 -
                            _tmp121 * _tmp124 * _tmp129 - _tmp135 * _tmp138 + _tmp148));
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp154;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp33 *
          (Scalar(0.87679799777269396) * _tmp0 + std::cosh(Scalar(1.0) * _tmp1) -
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp1 * _tmp33 -
                Scalar(8.3196563720703107) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp21 - 1), Scalar(2)) +
                        Scalar(0.057067943527034905) *
                            std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp32 - 1),
                                     Scalar(2))))))) +
      _tmp39 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp147 *
          (Scalar(0.86564762886483004) * _tmp126 + std::cosh(Scalar(1.0) * _tmp146) -
           std::cosh(Scalar(0.1034955) * _tmp126 *
                     (-_tmp146 * _tmp147 -
                      Scalar(4.7744369927459998) *
                          std::sqrt(Scalar(
                              std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp52), Scalar(2)) +
                              Scalar(0.32387954179207445) *
                                  std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp55),
                                           Scalar(2))))))) +
      _tmp67 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp153 *
          (Scalar(0.876505537412406) * _tmp151 + std::cosh(Scalar(1.0) * _tmp152) -
           std::cosh(
               Scalar(0.1034955) * _tmp151 *
               (-_tmp152 * _tmp153 -
                Scalar(8.3885017487099702) *
                    std::sqrt(Scalar(
                        Scalar(0.090199313518583735) *
                            std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp46), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp42 - 1),
                                 Scalar(2))))))) +
      _tmp68 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp157 *
          (Scalar(0.86627065637365697) * _tmp155 + std::cosh(Scalar(1.0) * _tmp156) -
           std::cosh(
               Scalar(0.1034955) * _tmp155 *
               (-_tmp156 * _tmp157 -
                Scalar(4.83288938413423) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp84), Scalar(2)) +
                        Scalar(0.13818785160942856) *
                            std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp81 - 1),
                                     Scalar(2))))))) +
      _tmp88 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
