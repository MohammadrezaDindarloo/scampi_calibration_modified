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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl23
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl23(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 598

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (191)
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
  const Scalar _tmp19 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp21 = _tmp1 * _tmp11;
  const Scalar _tmp22 = _tmp2 * _tmp5;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp32 = Scalar(1.0) * _tmp0 /
                        std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp33 = _tmp18 + Scalar(1.7965602546229);
  const Scalar _tmp34 = _tmp29 + Scalar(-4.83288938413423);
  const Scalar _tmp35 = std::pow(Scalar(std::pow(_tmp33, Scalar(2)) + std::pow(_tmp34, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = _tmp33 * _tmp35;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp38 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp40 = _tmp38 - _tmp39;
  const Scalar _tmp41 = fh1 * (_tmp37 + _tmp40);
  const Scalar _tmp42 = Scalar(3.29616) * _tmp14 + _tmp17 * fv1 + _tmp36 * _tmp41;
  const Scalar _tmp43 = _tmp25 + _tmp26;
  const Scalar _tmp44 = _tmp20 + _tmp43;
  const Scalar _tmp45 = Scalar(1.0) * _tmp44;
  const Scalar _tmp46 = -_tmp45;
  const Scalar _tmp47 = -_tmp20;
  const Scalar _tmp48 = _tmp27 + _tmp47;
  const Scalar _tmp49 = _tmp46 + _tmp48;
  const Scalar _tmp50 = _tmp43 + _tmp47;
  const Scalar _tmp51 = Scalar(1.0) / (_tmp46 + _tmp50);
  const Scalar _tmp52 = -_tmp7;
  const Scalar _tmp53 = _tmp10 + _tmp15;
  const Scalar _tmp54 = _tmp52 + _tmp53;
  const Scalar _tmp55 = _tmp53 + _tmp7;
  const Scalar _tmp56 = Scalar(1.0) * _tmp55;
  const Scalar _tmp57 = _tmp51 * (-_tmp54 + _tmp56);
  const Scalar _tmp58 = _tmp49 * _tmp57;
  const Scalar _tmp59 = _tmp16 + _tmp52;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp56 - _tmp58 - _tmp59);
  const Scalar _tmp61 = Scalar(1.0) * _tmp60;
  const Scalar _tmp62 = _tmp49 * _tmp51;
  const Scalar _tmp63 = Scalar(1.0) * _tmp61 * _tmp62 - Scalar(1.0) * _tmp61;
  const Scalar _tmp64 = _tmp34 * _tmp35;
  const Scalar _tmp65 = -Scalar(3.29616) * _tmp23 - _tmp28 * fv1 - _tmp41 * _tmp64;
  const Scalar _tmp66 = _tmp51 * (_tmp58 * _tmp61 + Scalar(1.0));
  const Scalar _tmp67 = _tmp57 * _tmp61;
  const Scalar _tmp68 = -Scalar(1.0) * _tmp66 + Scalar(1.0) * _tmp67;
  const Scalar _tmp69 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp70 = _tmp45 * _tmp57 + _tmp56;
  const Scalar _tmp71 = 0;
  const Scalar _tmp72 = -_tmp37;
  const Scalar _tmp73 = _tmp40 + _tmp72;
  const Scalar _tmp74 = _tmp48 + position_vector(1, 0);
  const Scalar _tmp75 = _tmp74 + Scalar(8.3196563720703107);
  const Scalar _tmp76 = _tmp59 + position_vector(0, 0);
  const Scalar _tmp77 = _tmp76 + Scalar(1.9874742031097401);
  const Scalar _tmp78 = std::pow(Scalar(std::pow(_tmp75, Scalar(2)) + std::pow(_tmp77, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp79 = _tmp75 * _tmp78;
  const Scalar _tmp80 = _tmp38 + _tmp39;
  const Scalar _tmp81 = _tmp37 + _tmp80;
  const Scalar _tmp82 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp83 = _tmp82 + Scalar(-4.7744369927459998);
  const Scalar _tmp84 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp85 = _tmp84 + Scalar(-2.7171519410699099);
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = _tmp83 * _tmp86;
  const Scalar _tmp88 = _tmp81 * _tmp87;
  const Scalar _tmp89 = _tmp77 * _tmp78;
  const Scalar _tmp90 = _tmp72 + _tmp80;
  const Scalar _tmp91 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp92 = _tmp91 + Scalar(8.3885017487099702);
  const Scalar _tmp93 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp94 = _tmp93 + Scalar(-2.5193355532036801);
  const Scalar _tmp95 = std::pow(Scalar(std::pow(_tmp92, Scalar(2)) + std::pow(_tmp94, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp96 = _tmp92 * _tmp95;
  const Scalar _tmp97 = _tmp94 * _tmp95;
  const Scalar _tmp98 = -_tmp88 * _tmp97 + _tmp90 * _tmp96;
  const Scalar _tmp99 = -_tmp79 + _tmp87 * _tmp89;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp87 * _tmp97 - _tmp96);
  const Scalar _tmp101 = _tmp100 * _tmp99;
  const Scalar _tmp102 = -_tmp101 * _tmp98 + _tmp73 * _tmp79 - _tmp88 * _tmp89;
  const Scalar _tmp103 = _tmp81 * _tmp97 - _tmp90 * _tmp97;
  const Scalar _tmp104 = -_tmp101 * _tmp103 - _tmp102 * _tmp57 - _tmp73 * _tmp89 + _tmp81 * _tmp89;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp106 = _tmp102 * _tmp105;
  const Scalar _tmp107 = _tmp60 * _tmp70;
  const Scalar _tmp108 = _tmp51 * (-_tmp106 * _tmp71 - _tmp107 * _tmp49 + _tmp46);
  const Scalar _tmp109 = -Scalar(1.0) * _tmp108 - Scalar(1.0) * _tmp61 * _tmp70 + Scalar(1.0);
  const Scalar _tmp110 =
      std::sqrt(Scalar(std::pow(_tmp83, Scalar(2)) + std::pow(_tmp85, Scalar(2))));
  const Scalar _tmp111 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp112 = _tmp110 * _tmp86;
  const Scalar _tmp113 = _tmp112 * (-_tmp111 * _tmp44 * _tmp85 + _tmp111 * _tmp55 * _tmp83);
  const Scalar _tmp114 = _tmp113 * _tmp97 + _tmp50 * _tmp97 - _tmp54 * _tmp96;
  const Scalar _tmp115 = -_tmp101 * _tmp114 + _tmp113 * _tmp89 + _tmp48 * _tmp89 - _tmp59 * _tmp79;
  const Scalar _tmp116 = Scalar(1.0) / (_tmp115);
  const Scalar _tmp117 = _tmp104 * _tmp116;
  const Scalar _tmp118 = _tmp117 * _tmp61;
  const Scalar _tmp119 = Scalar(1.0) * _tmp116;
  const Scalar _tmp120 = -_tmp102 * _tmp119 + _tmp118 * _tmp49;
  const Scalar _tmp121 = Scalar(1.0) * _tmp51;
  const Scalar _tmp122 = fh1 * (_tmp17 * _tmp64 - _tmp28 * _tmp36);
  const Scalar _tmp123 = Scalar(1.0) * _tmp100;
  const Scalar _tmp124 = _tmp123 * _tmp98;
  const Scalar _tmp125 = -_tmp103 * _tmp123 + _tmp124 * _tmp57;
  const Scalar _tmp126 = _tmp105 * _tmp115;
  const Scalar _tmp127 = _tmp117 * (-_tmp114 * _tmp123 - _tmp125 * _tmp126);
  const Scalar _tmp128 = _tmp49 * _tmp60;
  const Scalar _tmp129 = _tmp125 + _tmp127;
  const Scalar _tmp130 = -_tmp106 * _tmp129 - _tmp124 + _tmp127 * _tmp128;
  const Scalar _tmp131 = _tmp64 * fh1;
  const Scalar _tmp132 = _tmp100 * _tmp87;
  const Scalar _tmp133 = _tmp132 * _tmp98 + _tmp88;
  const Scalar _tmp134 = _tmp103 * _tmp132 - _tmp133 * _tmp57 - _tmp81;
  const Scalar _tmp135 = _tmp117 * (-_tmp113 + _tmp114 * _tmp132 - _tmp126 * _tmp134);
  const Scalar _tmp136 = _tmp134 + _tmp135;
  const Scalar _tmp137 = -_tmp106 * _tmp136 + _tmp128 * _tmp135 + _tmp133;
  const Scalar _tmp138 = _tmp36 * fh1;
  const Scalar _tmp139 = _tmp109 * _tmp69 + Scalar(1.0) * _tmp122 * (_tmp118 - _tmp120 * _tmp121) +
                         Scalar(1.0) * _tmp131 * (-_tmp121 * _tmp130 + _tmp127 * _tmp61) +
                         Scalar(1.0) * _tmp138 * (-_tmp121 * _tmp137 + _tmp135 * _tmp61) +
                         _tmp42 * _tmp63 + _tmp65 * _tmp68;
  const Scalar _tmp140 = _tmp105 * _tmp99;
  const Scalar _tmp141 = -_tmp136 * _tmp140 - _tmp87;
  const Scalar _tmp142 = _tmp100 * _tmp97;
  const Scalar _tmp143 = _tmp105 * _tmp89;
  const Scalar _tmp144 = _tmp105 * _tmp71;
  const Scalar _tmp145 = _tmp140 * _tmp71;
  const Scalar _tmp146 = _tmp112 * (-_tmp142 * _tmp145 + _tmp144 * _tmp89);
  const Scalar _tmp147 = -_tmp129 * _tmp140 + Scalar(1.0);
  const Scalar _tmp148 = -_tmp112 * _tmp122 * (-_tmp101 * _tmp119 * _tmp97 + _tmp119 * _tmp89) -
                         _tmp112 * _tmp131 * (_tmp129 * _tmp143 + _tmp142 * _tmp147) -
                         _tmp112 * _tmp138 * (_tmp136 * _tmp143 + _tmp141 * _tmp142 + Scalar(1.0)) -
                         _tmp146 * _tmp69;
  const Scalar _tmp149 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp150 = std::asinh(_tmp139 * _tmp149);
  const Scalar _tmp151 = Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp148;
  const Scalar _tmp153 =
      -_tmp150 * _tmp152 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp82), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp84), Scalar(2))));
  const Scalar _tmp154 = Scalar(0.1034955) * _tmp149;
  const Scalar _tmp155 = _tmp153 * _tmp154;
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp146;
  const Scalar _tmp157 = _tmp24 + _tmp26 + _tmp47;
  const Scalar _tmp158 = std::pow(_tmp148, Scalar(-2));
  const Scalar _tmp159 = _tmp146 * _tmp158;
  const Scalar _tmp160 =
      (-_tmp139 * _tmp159 + _tmp149 * (-_tmp109 + _tmp157 * _tmp68 + _tmp17 * _tmp63)) /
      std::sqrt(Scalar(std::pow(_tmp139, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp161 = _tmp119 * _tmp122;
  const Scalar _tmp162 = _tmp100 * _tmp145;
  const Scalar _tmp163 = _tmp100 * _tmp131 * _tmp147 + _tmp100 * _tmp138 * _tmp141 -
                         _tmp101 * _tmp161 - _tmp162 * _tmp69;
  const Scalar _tmp164 = Scalar(1.0) / (_tmp163);
  const Scalar _tmp165 = _tmp42 * _tmp61;
  const Scalar _tmp166 = _tmp108 * _tmp69 + _tmp120 * _tmp122 * _tmp51 +
                         _tmp130 * _tmp131 * _tmp51 + _tmp137 * _tmp138 * _tmp51 -
                         _tmp165 * _tmp62 + _tmp65 * _tmp66;
  const Scalar _tmp167 = std::asinh(_tmp164 * _tmp166);
  const Scalar _tmp168 = Scalar(1.0) * _tmp167;
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp170 =
      -_tmp167 * _tmp169 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp93), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp91 - 1), Scalar(2))));
  const Scalar _tmp171 = Scalar(0.1034955) * _tmp164;
  const Scalar _tmp172 = _tmp170 * _tmp171;
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp162;
  const Scalar _tmp174 = _tmp17 * _tmp61;
  const Scalar _tmp175 = std::pow(_tmp163, Scalar(-2));
  const Scalar _tmp176 = _tmp162 * _tmp175;
  const Scalar _tmp177 =
      (_tmp164 * (-_tmp108 + _tmp157 * _tmp66 - _tmp174 * _tmp62) - _tmp166 * _tmp176) /
      std::sqrt(Scalar(std::pow(_tmp166, Scalar(2)) * _tmp175 + 1));
  const Scalar _tmp178 =
      _tmp105 * _tmp129 * _tmp131 + _tmp105 * _tmp136 * _tmp138 + _tmp144 * _tmp69 + _tmp161;
  const Scalar _tmp179 = Scalar(1.0) / (_tmp178);
  const Scalar _tmp180 = _tmp107 * _tmp69 - _tmp118 * _tmp122 - _tmp127 * _tmp131 * _tmp60 -
                         _tmp135 * _tmp138 * _tmp60 + _tmp165 - _tmp65 * _tmp67;
  const Scalar _tmp181 = std::asinh(_tmp179 * _tmp180);
  const Scalar _tmp182 = Scalar(1.0) * _tmp181;
  const Scalar _tmp183 = std::pow(_tmp178, Scalar(-2));
  const Scalar _tmp184 = _tmp144 * _tmp183;
  const Scalar _tmp185 = (_tmp179 * (-_tmp107 - _tmp157 * _tmp67 + _tmp174) + _tmp180 * _tmp184) /
                         std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp183 + 1));
  const Scalar _tmp186 = Scalar(9.6622558468725703) * _tmp178;
  const Scalar _tmp187 =
      -_tmp181 * _tmp186 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp74 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp76 - 1), Scalar(2))));
  const Scalar _tmp188 = Scalar(0.1034955) * _tmp179;
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = Scalar(9.6622558468725703) * _tmp144;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp31 *
      (-_tmp32 * std::cosh(Scalar(1.0) * _tmp30) +
       _tmp32 * std::cosh(
                    Scalar(0.1034955) * _tmp0 *
                    (-_tmp30 * _tmp31 -
                     Scalar(4.83288938413423) *
                         std::sqrt(Scalar(
                             std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp29), Scalar(2)) +
                             Scalar(0.13818785160942856) *
                                 std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp18 - 1),
                                          Scalar(2)))))));
  _res(1, 0) = _tmp152 * (-Scalar(1.0) * _tmp160 * std::cosh(_tmp151) -
                          (-Scalar(0.1034955) * _tmp153 * _tmp159 +
                           _tmp154 * (-_tmp150 * _tmp156 - _tmp152 * _tmp160)) *
                              std::cosh(_tmp155)) +
               _tmp156 * (-std::sinh(_tmp151) - std::sinh(_tmp155));
  _res(2, 0) = _tmp169 * (-Scalar(1.0) * _tmp177 * std::cosh(_tmp168) -
                          (-Scalar(0.1034955) * _tmp170 * _tmp176 +
                           _tmp171 * (-_tmp167 * _tmp173 - _tmp169 * _tmp177)) *
                              std::cosh(_tmp172)) +
               _tmp173 * (-std::sinh(_tmp168) - std::sinh(_tmp172));
  _res(3, 0) = _tmp186 * (-Scalar(1.0) * _tmp185 * std::cosh(_tmp182) -
                          (Scalar(0.1034955) * _tmp184 * _tmp187 +
                           _tmp188 * (_tmp181 * _tmp190 - _tmp185 * _tmp186)) *
                              std::cosh(_tmp189)) -
               _tmp190 * (-std::sinh(_tmp182) - std::sinh(_tmp189));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
