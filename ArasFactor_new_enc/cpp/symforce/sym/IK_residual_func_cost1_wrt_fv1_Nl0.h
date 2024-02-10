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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl0
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl0(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 603

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (187)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp5;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp13 = _tmp12 * _tmp3;
  const Scalar _tmp14 = _tmp11 - _tmp13;
  const Scalar _tmp15 = Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp15;
  const Scalar _tmp17 = _tmp10 * _tmp3;
  const Scalar _tmp18 = _tmp12 * _tmp5;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 - _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp8;
  const Scalar _tmp22 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp26 = _tmp12 * _tmp9;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp29 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp31 = _tmp28 - _tmp30;
  const Scalar _tmp32 = _tmp24 + _tmp31;
  const Scalar _tmp33 = _tmp32 + position_vector(0, 0);
  const Scalar _tmp34 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp35 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp37 = -_tmp36;
  const Scalar _tmp38 = -Scalar(0.010999999999999999) * _tmp29 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp37 + _tmp40;
  const Scalar _tmp42 = _tmp28 + _tmp30;
  const Scalar _tmp43 = _tmp24 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 + Scalar(-2.5193355532036801);
  const Scalar _tmp46 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp47 = _tmp16 + _tmp19;
  const Scalar _tmp48 = _tmp47 + _tmp8;
  const Scalar _tmp49 = _tmp48 + position_vector(1, 0);
  const Scalar _tmp50 = _tmp49 + Scalar(8.3885017487099702);
  const Scalar _tmp51 = _tmp46 * _tmp50;
  const Scalar _tmp52 = _tmp41 * _tmp51;
  const Scalar _tmp53 = _tmp47 + _tmp7;
  const Scalar _tmp54 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp55 = _tmp54 + Scalar(-4.7744369927459998);
  const Scalar _tmp56 = _tmp23 + _tmp42;
  const Scalar _tmp57 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp58 = _tmp57 + Scalar(-2.7171519410699099);
  const Scalar _tmp59 = std::pow(Scalar(std::pow(_tmp55, Scalar(2)) + std::pow(_tmp58, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp58 * _tmp59;
  const Scalar _tmp61 = _tmp36 + _tmp40;
  const Scalar _tmp62 = _tmp55 * _tmp59;
  const Scalar _tmp63 = -_tmp52 * _tmp60 + _tmp61 * _tmp62;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp51 * _tmp60 - _tmp62);
  const Scalar _tmp65 = _tmp23 + _tmp31;
  const Scalar _tmp66 = _tmp65 + position_vector(0, 0);
  const Scalar _tmp67 = _tmp66 + Scalar(1.7965602546229);
  const Scalar _tmp68 = _tmp20 + _tmp7;
  const Scalar _tmp69 = _tmp68 + position_vector(1, 0);
  const Scalar _tmp70 = _tmp69 + Scalar(-4.83288938413423);
  const Scalar _tmp71 = std::pow(Scalar(std::pow(_tmp67, Scalar(2)) + std::pow(_tmp70, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp72 = _tmp67 * _tmp71;
  const Scalar _tmp73 = _tmp70 * _tmp71;
  const Scalar _tmp74 = _tmp51 * _tmp72 - _tmp73;
  const Scalar _tmp75 = _tmp64 * _tmp74;
  const Scalar _tmp76 = _tmp38 - _tmp39;
  const Scalar _tmp77 = _tmp36 + _tmp76;
  const Scalar _tmp78 = -_tmp52 * _tmp72 - _tmp63 * _tmp75 + _tmp73 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) * _tmp48;
  const Scalar _tmp80 = -_tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp53 + _tmp80);
  const Scalar _tmp82 = Scalar(1.0) * _tmp43;
  const Scalar _tmp83 = _tmp81 * (-_tmp56 + _tmp82);
  const Scalar _tmp84 = _tmp41 * _tmp60 - _tmp60 * _tmp61;
  const Scalar _tmp85 = _tmp41 * _tmp72 - _tmp72 * _tmp77 - _tmp75 * _tmp84 - _tmp78 * _tmp83;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = _tmp79 * _tmp83 + _tmp82;
  const Scalar _tmp88 = 0;
  const Scalar _tmp89 = _tmp75 * _tmp88;
  const Scalar _tmp90 =
      std::sqrt(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp50, Scalar(2))));
  const Scalar _tmp91 = _tmp46 * _tmp90;
  const Scalar _tmp92 = _tmp91 * (-_tmp60 * _tmp89 + _tmp72 * _tmp88);
  const Scalar _tmp93 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp94 = _tmp91 * (_tmp43 * _tmp50 * _tmp93 - _tmp45 * _tmp48 * _tmp93);
  const Scalar _tmp95 = _tmp53 * _tmp60 - _tmp56 * _tmp62 + _tmp60 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) * _tmp64;
  const Scalar _tmp97 = _tmp63 * _tmp96;
  const Scalar _tmp98 = _tmp83 * _tmp97 - _tmp84 * _tmp96;
  const Scalar _tmp99 = -_tmp65 * _tmp73 + _tmp68 * _tmp72 + _tmp72 * _tmp94 - _tmp75 * _tmp95;
  const Scalar _tmp100 = _tmp86 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp102 = _tmp101 * _tmp85;
  const Scalar _tmp103 = _tmp102 * (-_tmp100 * _tmp98 - _tmp95 * _tmp96);
  const Scalar _tmp104 = _tmp86 * (_tmp103 + _tmp98);
  const Scalar _tmp105 = -_tmp104 * _tmp74 + Scalar(1.0);
  const Scalar _tmp106 = _tmp60 * _tmp64;
  const Scalar _tmp107 = _tmp33 + Scalar(1.9874742031097401);
  const Scalar _tmp108 = _tmp22 + Scalar(8.3196563720703107);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp108 * _tmp109;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = Scalar(1.0) * _tmp101;
  const Scalar _tmp113 = _tmp101 * _tmp74 * _tmp96;
  const Scalar _tmp114 = _tmp107 * _tmp109;
  const Scalar _tmp115 = fh1 * (_tmp110 * _tmp32 - _tmp114 * _tmp21);
  const Scalar _tmp116 = _tmp51 * _tmp64;
  const Scalar _tmp117 = _tmp116 * _tmp63 + _tmp52;
  const Scalar _tmp118 = _tmp116 * _tmp84 - _tmp117 * _tmp83 - _tmp41;
  const Scalar _tmp119 = _tmp102 * (-_tmp100 * _tmp118 + _tmp116 * _tmp95 - _tmp94);
  const Scalar _tmp120 = _tmp86 * (_tmp118 + _tmp119);
  const Scalar _tmp121 = -_tmp120 * _tmp74 - _tmp51;
  const Scalar _tmp122 = _tmp114 * fh1;
  const Scalar _tmp123 = -_tmp111 * _tmp91 * (_tmp104 * _tmp72 + _tmp105 * _tmp106) -
                         _tmp115 * _tmp91 * (_tmp112 * _tmp72 - _tmp113 * _tmp60) -
                         _tmp122 * _tmp91 * (_tmp106 * _tmp121 + _tmp120 * _tmp72 + Scalar(1.0)) -
                         _tmp35 * _tmp92;
  const Scalar _tmp124 = std::pow(_tmp123, Scalar(-2));
  const Scalar _tmp125 = _tmp124 * _tmp92;
  const Scalar _tmp126 = Scalar(1.0) / (_tmp123);
  const Scalar _tmp127 = fh1 * (_tmp37 + _tmp76);
  const Scalar _tmp128 = _tmp114 * _tmp127 + Scalar(5.1796800000000003) * _tmp27 + _tmp32 * fv1;
  const Scalar _tmp129 = _tmp68 + _tmp80;
  const Scalar _tmp130 = _tmp129 * _tmp83;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 - _tmp65 + _tmp82);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp129 * _tmp81;
  const Scalar _tmp134 = Scalar(1.0) * _tmp132 * _tmp133 - Scalar(1.0) * _tmp132;
  const Scalar _tmp135 = _tmp129 * _tmp131;
  const Scalar _tmp136 = _tmp117 + _tmp119 * _tmp135 - _tmp120 * _tmp78;
  const Scalar _tmp137 = Scalar(1.0) * _tmp81;
  const Scalar _tmp138 = _tmp131 * _tmp87;
  const Scalar _tmp139 = _tmp81 * (-_tmp129 * _tmp138 - _tmp78 * _tmp88 + _tmp80);
  const Scalar _tmp140 = -Scalar(1.0) * _tmp132 * _tmp87 - Scalar(1.0) * _tmp139 + Scalar(1.0);
  const Scalar _tmp141 = _tmp103 * _tmp135 - _tmp104 * _tmp78 - _tmp97;
  const Scalar _tmp142 = _tmp102 * _tmp132;
  const Scalar _tmp143 = -_tmp112 * _tmp78 + _tmp129 * _tmp142;
  const Scalar _tmp144 = -_tmp110 * _tmp127 - Scalar(5.1796800000000003) * _tmp14 - _tmp21 * fv1;
  const Scalar _tmp145 = _tmp81 * (_tmp130 * _tmp132 + Scalar(1.0));
  const Scalar _tmp146 = _tmp132 * _tmp83;
  const Scalar _tmp147 = -Scalar(1.0) * _tmp145 + Scalar(1.0) * _tmp146;
  const Scalar _tmp148 = Scalar(1.0) * _tmp111 * (_tmp103 * _tmp132 - _tmp137 * _tmp141) +
                         Scalar(1.0) * _tmp115 * (-_tmp137 * _tmp143 + _tmp142) +
                         Scalar(1.0) * _tmp122 * (_tmp119 * _tmp132 - _tmp136 * _tmp137) +
                         _tmp128 * _tmp134 + _tmp140 * _tmp35 + _tmp144 * _tmp147;
  const Scalar _tmp149 = std::asinh(_tmp126 * _tmp148);
  const Scalar _tmp150 = Scalar(9.6622558468725703) * _tmp123;
  const Scalar _tmp151 =
      -_tmp149 * _tmp150 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp44), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp49 - 1), Scalar(2))));
  const Scalar _tmp152 = _tmp15 + _tmp19 + _tmp7;
  const Scalar _tmp153 =
      (-_tmp125 * _tmp148 + _tmp126 * (_tmp134 * _tmp32 - _tmp140 + _tmp147 * _tmp152)) /
      std::sqrt(Scalar(_tmp124 * std::pow(_tmp148, Scalar(2)) + 1));
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp92;
  const Scalar _tmp155 = Scalar(0.1034955) * _tmp126;
  const Scalar _tmp156 = _tmp151 * _tmp155;
  const Scalar _tmp157 = Scalar(1.0) * _tmp149;
  const Scalar _tmp158 = _tmp35 * _tmp88;
  const Scalar _tmp159 = _tmp105 * _tmp111 * _tmp64 - _tmp113 * _tmp115 +
                         _tmp121 * _tmp122 * _tmp64 - _tmp158 * _tmp75;
  const Scalar _tmp160 = std::pow(_tmp159, Scalar(-2));
  const Scalar _tmp161 = _tmp160 * _tmp89;
  const Scalar _tmp162 = Scalar(1.0) / (_tmp159);
  const Scalar _tmp163 = _tmp128 * _tmp132;
  const Scalar _tmp164 = _tmp111 * _tmp141 * _tmp81 + _tmp115 * _tmp143 * _tmp81 +
                         _tmp122 * _tmp136 * _tmp81 - _tmp133 * _tmp163 + _tmp139 * _tmp35 +
                         _tmp144 * _tmp145;
  const Scalar _tmp165 = std::asinh(_tmp162 * _tmp164);
  const Scalar _tmp166 = Scalar(1.0) * _tmp165;
  const Scalar _tmp167 = _tmp132 * _tmp32;
  const Scalar _tmp168 =
      (-_tmp161 * _tmp164 + _tmp162 * (-_tmp133 * _tmp167 - _tmp139 + _tmp145 * _tmp152)) /
      std::sqrt(Scalar(_tmp160 * std::pow(_tmp164, Scalar(2)) + 1));
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp159;
  const Scalar _tmp170 = Scalar(9.6622558468725703) * _tmp88;
  const Scalar _tmp171 = _tmp170 * _tmp75;
  const Scalar _tmp172 = Scalar(0.1034955) * _tmp162;
  const Scalar _tmp173 =
      -_tmp165 * _tmp169 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp54), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp57), Scalar(2))));
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = _tmp104 * _tmp111 + _tmp112 * _tmp115 + _tmp120 * _tmp122 + _tmp158;
  const Scalar _tmp176 = Scalar(1.0) / (_tmp175);
  const Scalar _tmp177 = -_tmp103 * _tmp111 * _tmp131 - _tmp115 * _tmp142 -
                         _tmp119 * _tmp122 * _tmp131 + _tmp138 * _tmp35 - _tmp144 * _tmp146 +
                         _tmp163;
  const Scalar _tmp178 = std::asinh(_tmp176 * _tmp177);
  const Scalar _tmp179 = Scalar(9.6622558468725703) * _tmp175;
  const Scalar _tmp180 =
      -_tmp178 * _tmp179 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp69), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp66 - 1), Scalar(2))));
  const Scalar _tmp181 = Scalar(0.1034955) * _tmp176;
  const Scalar _tmp182 = _tmp180 * _tmp181;
  const Scalar _tmp183 = Scalar(1.0) * _tmp178;
  const Scalar _tmp184 = std::pow(_tmp175, Scalar(-2));
  const Scalar _tmp185 = _tmp184 * _tmp88;
  const Scalar _tmp186 = (_tmp176 * (-_tmp138 - _tmp146 * _tmp152 + _tmp167) + _tmp177 * _tmp185) /
                         std::sqrt(Scalar(std::pow(_tmp177, Scalar(2)) * _tmp184 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp34 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(
                   Scalar(0.1034955) * _tmp0 *
                   (-_tmp1 * _tmp34 -
                    Scalar(8.3196563720703107) *
                        std::sqrt(Scalar(
                            std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp22 - 1), Scalar(2)) +
                            Scalar(0.057067943527034905) *
                                std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp33 - 1),
                                         Scalar(2)))))));
  _res(1, 0) =
      -_tmp150 *
          (-Scalar(0.876505537412406) * _tmp125 + Scalar(1.0) * _tmp153 * std::sinh(_tmp157) -
           (-Scalar(0.1034955) * _tmp125 * _tmp151 +
            _tmp155 * (-_tmp149 * _tmp154 - _tmp150 * _tmp153)) *
               std::sinh(_tmp156)) -
      _tmp154 * (Scalar(0.876505537412406) * _tmp126 - std::cosh(_tmp156) + std::cosh(_tmp157));
  _res(2, 0) =
      -_tmp169 *
          (-Scalar(0.86564762886483004) * _tmp161 + Scalar(1.0) * _tmp168 * std::sinh(_tmp166) -
           (-Scalar(0.1034955) * _tmp161 * _tmp173 +
            _tmp172 * (-_tmp165 * _tmp171 - _tmp168 * _tmp169)) *
               std::sinh(_tmp174)) -
      _tmp171 * (Scalar(0.86564762886483004) * _tmp162 + std::cosh(_tmp166) - std::cosh(_tmp174));
  _res(3, 0) =
      _tmp170 * (Scalar(0.86627065637365697) * _tmp176 - std::cosh(_tmp182) + std::cosh(_tmp183)) -
      _tmp179 *
          (Scalar(0.86627065637365697) * _tmp185 + Scalar(1.0) * _tmp186 * std::sinh(_tmp183) -
           (Scalar(0.1034955) * _tmp180 * _tmp185 +
            _tmp181 * (_tmp170 * _tmp178 - _tmp179 * _tmp186)) *
               std::sinh(_tmp182));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
