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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl22
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl22(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 593

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (191)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = 2 * _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = 2 * _tmp1;
  const Scalar _tmp10 = _tmp5 * _tmp9;
  const Scalar _tmp11 = _tmp3 * _tmp6;
  const Scalar _tmp12 = _tmp10 + _tmp11;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp15 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 - _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp8;
  const Scalar _tmp19 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp14 +
                        Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999);
  const Scalar _tmp24 = _tmp3 * _tmp5;
  const Scalar _tmp25 = _tmp6 * _tmp9;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -_tmp27;
  const Scalar _tmp29 = _tmp23 + _tmp28;
  const Scalar _tmp30 = _tmp21 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp34 = Scalar(1.0) * _tmp0 /
                        std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp35 = -_tmp23;
  const Scalar _tmp36 = _tmp20 + _tmp35;
  const Scalar _tmp37 = _tmp28 + _tmp36;
  const Scalar _tmp38 = _tmp37 + position_vector(1, 0);
  const Scalar _tmp39 = _tmp38 + Scalar(8.3885017487099702);
  const Scalar _tmp40 = -_tmp8;
  const Scalar _tmp41 = _tmp13 + _tmp16;
  const Scalar _tmp42 = _tmp40 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp44 = _tmp43 + Scalar(-2.5193355532036801);
  const Scalar _tmp45 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp44, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp46 = _tmp44 * _tmp45;
  const Scalar _tmp47 = _tmp39 * _tmp45;
  const Scalar _tmp48 = _tmp17 + _tmp40;
  const Scalar _tmp49 = _tmp21 + _tmp28 + _tmp35;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 + Scalar(8.3196563720703107);
  const Scalar _tmp52 = _tmp48 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(1.9874742031097401);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp51 * _tmp54;
  const Scalar _tmp56 = _tmp53 * _tmp54;
  const Scalar _tmp57 = _tmp20 + _tmp29;
  const Scalar _tmp58 = _tmp57 + position_vector(1, 0);
  const Scalar _tmp59 = _tmp58 + Scalar(-4.7744369927459998);
  const Scalar _tmp60 = _tmp41 + _tmp8;
  const Scalar _tmp61 = _tmp60 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 + Scalar(-2.7171519410699099);
  const Scalar _tmp63 =
      std::sqrt(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp62, Scalar(2))));
  const Scalar _tmp64 = Scalar(1.0) / (_tmp63);
  const Scalar _tmp65 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp66 = _tmp63 * _tmp65;
  const Scalar _tmp67 = _tmp66 * (-_tmp57 * _tmp62 * _tmp64 + _tmp59 * _tmp60 * _tmp64);
  const Scalar _tmp68 = -_tmp48 * _tmp55 + _tmp49 * _tmp56 + _tmp56 * _tmp67;
  const Scalar _tmp69 = _tmp59 * _tmp65;
  const Scalar _tmp70 = _tmp46 * _tmp69 - _tmp47;
  const Scalar _tmp71 = Scalar(1.0) / (-_tmp55 + _tmp56 * _tmp69);
  const Scalar _tmp72 = _tmp70 * _tmp71;
  const Scalar _tmp73 = _tmp37 * _tmp46 - _tmp42 * _tmp47 + _tmp46 * _tmp67 - _tmp68 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp74;
  const Scalar _tmp76 = _tmp56 * _tmp72;
  const Scalar _tmp77 = _tmp19 + Scalar(1.7965602546229);
  const Scalar _tmp78 = _tmp31 + Scalar(-4.83288938413423);
  const Scalar _tmp79 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp78, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp80 = _tmp77 * _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp79;
  const Scalar _tmp82 = fh1 * (_tmp18 * _tmp81 - _tmp30 * _tmp80);
  const Scalar _tmp83 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp84 = -_tmp83;
  const Scalar _tmp85 =
      -Scalar(0.010999999999999999) * _tmp15 - Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp86 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp87 = _tmp85 + _tmp86;
  const Scalar _tmp88 = _tmp84 + _tmp87;
  const Scalar _tmp89 = _tmp85 - _tmp86;
  const Scalar _tmp90 = _tmp84 + _tmp89;
  const Scalar _tmp91 = _tmp83 + _tmp87;
  const Scalar _tmp92 = _tmp69 * _tmp91;
  const Scalar _tmp93 = _tmp55 * _tmp90 - _tmp56 * _tmp92;
  const Scalar _tmp94 = -_tmp46 * _tmp92 + _tmp47 * _tmp88 - _tmp72 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) * _tmp57;
  const Scalar _tmp96 = -_tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp49 + _tmp96);
  const Scalar _tmp98 = Scalar(1.0) * _tmp60;
  const Scalar _tmp99 = _tmp97 * (-_tmp48 + _tmp98);
  const Scalar _tmp100 = -_tmp56 * _tmp90 + _tmp56 * _tmp91;
  const Scalar _tmp101 = -_tmp100 * _tmp72 - _tmp46 * _tmp88 + _tmp46 * _tmp91 - _tmp94 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp103 = _tmp69 * _tmp71;
  const Scalar _tmp104 = _tmp103 * _tmp93 + _tmp92;
  const Scalar _tmp105 = _tmp100 * _tmp103 - _tmp104 * _tmp99 - _tmp91;
  const Scalar _tmp106 = _tmp102 * _tmp73;
  const Scalar _tmp107 = _tmp101 * _tmp74;
  const Scalar _tmp108 = _tmp107 * (_tmp103 * _tmp68 - _tmp105 * _tmp106 - _tmp67);
  const Scalar _tmp109 = _tmp102 * (_tmp105 + _tmp108);
  const Scalar _tmp110 = -_tmp109 * _tmp70 - _tmp69;
  const Scalar _tmp111 = _tmp56 * _tmp71;
  const Scalar _tmp112 = _tmp80 * fh1;
  const Scalar _tmp113 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp114 = _tmp95 * _tmp99 + _tmp98;
  const Scalar _tmp115 = 0;
  const Scalar _tmp116 = _tmp66 * (_tmp115 * _tmp46 - _tmp115 * _tmp76);
  const Scalar _tmp117 = Scalar(1.0) * _tmp71;
  const Scalar _tmp118 = _tmp117 * _tmp93;
  const Scalar _tmp119 = -_tmp100 * _tmp117 + _tmp118 * _tmp99;
  const Scalar _tmp120 = _tmp107 * (-_tmp106 * _tmp119 - _tmp117 * _tmp68);
  const Scalar _tmp121 = _tmp102 * (_tmp119 + _tmp120);
  const Scalar _tmp122 = -_tmp121 * _tmp70 + Scalar(1.0);
  const Scalar _tmp123 = _tmp81 * fh1;
  const Scalar _tmp124 = -_tmp112 * _tmp66 * (_tmp109 * _tmp46 + _tmp110 * _tmp111 + Scalar(1.0)) -
                         _tmp113 * _tmp116 -
                         _tmp123 * _tmp66 * (_tmp111 * _tmp122 + _tmp121 * _tmp46) -
                         _tmp66 * _tmp82 * (_tmp46 * _tmp75 - _tmp75 * _tmp76);
  const Scalar _tmp125 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp126 = fh1 * (_tmp83 + _tmp89);
  const Scalar _tmp127 = Scalar(5.1796800000000003) * _tmp12 + _tmp126 * _tmp80 + _tmp18 * fv1;
  const Scalar _tmp128 = _tmp37 + _tmp96;
  const Scalar _tmp129 = _tmp128 * _tmp99;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 - _tmp42 + _tmp98);
  const Scalar _tmp131 = Scalar(1.0) * _tmp130;
  const Scalar _tmp132 = _tmp128 * _tmp131;
  const Scalar _tmp133 = -Scalar(1.0) * _tmp131 + Scalar(1.0) * _tmp132 * _tmp97;
  const Scalar _tmp134 = _tmp107 * _tmp131;
  const Scalar _tmp135 = _tmp107 * _tmp132 - _tmp75 * _tmp94;
  const Scalar _tmp136 = Scalar(1.0) * _tmp97;
  const Scalar _tmp137 = _tmp128 * _tmp130;
  const Scalar _tmp138 = -_tmp118 + _tmp120 * _tmp137 - _tmp121 * _tmp94;
  const Scalar _tmp139 = _tmp114 * _tmp130;
  const Scalar _tmp140 = _tmp97 * (-_tmp115 * _tmp94 - _tmp128 * _tmp139 + _tmp96);
  const Scalar _tmp141 = -Scalar(1.0) * _tmp114 * _tmp131 - Scalar(1.0) * _tmp140 + Scalar(1.0);
  const Scalar _tmp142 = -_tmp126 * _tmp81 - Scalar(5.1796800000000003) * _tmp26 - _tmp30 * fv1;
  const Scalar _tmp143 = _tmp129 * _tmp131 + Scalar(1.0);
  const Scalar _tmp144 = _tmp131 * _tmp99;
  const Scalar _tmp145 = -Scalar(1.0) * _tmp136 * _tmp143 + Scalar(1.0) * _tmp144;
  const Scalar _tmp146 = _tmp104 + _tmp108 * _tmp137 - _tmp109 * _tmp94;
  const Scalar _tmp147 =
      Scalar(1.0) * _tmp112 * (_tmp108 * _tmp131 - _tmp136 * _tmp146) + _tmp113 * _tmp141 +
      Scalar(1.0) * _tmp123 * (_tmp120 * _tmp131 - _tmp136 * _tmp138) + _tmp127 * _tmp133 +
      _tmp142 * _tmp145 + Scalar(1.0) * _tmp82 * (_tmp134 - _tmp135 * _tmp136);
  const Scalar _tmp148 = std::asinh(_tmp125 * _tmp147);
  const Scalar _tmp149 = Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = Scalar(9.6622558468725703) * _tmp124;
  const Scalar _tmp151 =
      -_tmp148 * _tmp150 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp58), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp61), Scalar(2))));
  const Scalar _tmp152 = Scalar(0.1034955) * _tmp125;
  const Scalar _tmp153 = _tmp151 * _tmp152;
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp116;
  const Scalar _tmp155 = _tmp27 + _tmp36;
  const Scalar _tmp156 = std::pow(_tmp124, Scalar(-2));
  const Scalar _tmp157 = _tmp116 * _tmp156;
  const Scalar _tmp158 =
      (_tmp125 * (_tmp133 * _tmp18 - _tmp141 + _tmp145 * _tmp155) - _tmp147 * _tmp157) /
      std::sqrt(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp156 + 1));
  const Scalar _tmp159 = _tmp113 * _tmp115;
  const Scalar _tmp160 = _tmp75 * _tmp82;
  const Scalar _tmp161 =
      _tmp110 * _tmp112 * _tmp71 + _tmp122 * _tmp123 * _tmp71 - _tmp159 * _tmp72 - _tmp160 * _tmp72;
  const Scalar _tmp162 = Scalar(1.0) / (_tmp161);
  const Scalar _tmp163 = _tmp143 * _tmp97;
  const Scalar _tmp164 = _tmp127 * _tmp131;
  const Scalar _tmp165 = _tmp128 * _tmp97;
  const Scalar _tmp166 = _tmp112 * _tmp146 * _tmp97 + _tmp113 * _tmp140 +
                         _tmp123 * _tmp138 * _tmp97 + _tmp135 * _tmp82 * _tmp97 +
                         _tmp142 * _tmp163 - _tmp164 * _tmp165;
  const Scalar _tmp167 = std::asinh(_tmp162 * _tmp166);
  const Scalar _tmp168 = Scalar(1.0) * _tmp167;
  const Scalar _tmp169 = std::pow(_tmp161, Scalar(-2));
  const Scalar _tmp170 = _tmp115 * _tmp169 * _tmp72;
  const Scalar _tmp171 = _tmp131 * _tmp18;
  const Scalar _tmp172 =
      (_tmp162 * (-_tmp140 + _tmp155 * _tmp163 - _tmp165 * _tmp171) - _tmp166 * _tmp170) /
      std::sqrt(Scalar(std::pow(_tmp166, Scalar(2)) * _tmp169 + 1));
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp161;
  const Scalar _tmp174 =
      -_tmp167 * _tmp173 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp50 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp52 - 1), Scalar(2))));
  const Scalar _tmp175 = Scalar(0.1034955) * _tmp162;
  const Scalar _tmp176 = _tmp174 * _tmp175;
  const Scalar _tmp177 = Scalar(9.6622558468725703) * _tmp115;
  const Scalar _tmp178 = _tmp177 * _tmp72;
  const Scalar _tmp179 = _tmp109 * _tmp112 + _tmp121 * _tmp123 + _tmp159 + _tmp160;
  const Scalar _tmp180 = Scalar(9.6622558468725703) * _tmp179;
  const Scalar _tmp181 = -_tmp108 * _tmp112 * _tmp130 + _tmp113 * _tmp139 -
                         _tmp120 * _tmp123 * _tmp130 - _tmp134 * _tmp82 - _tmp142 * _tmp144 +
                         _tmp164;
  const Scalar _tmp182 = std::pow(_tmp179, Scalar(-2));
  const Scalar _tmp183 = _tmp115 * _tmp182;
  const Scalar _tmp184 = Scalar(1.0) / (_tmp179);
  const Scalar _tmp185 = (_tmp181 * _tmp183 + _tmp184 * (-_tmp139 - _tmp144 * _tmp155 + _tmp171)) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp182 + 1));
  const Scalar _tmp186 = std::asinh(_tmp181 * _tmp184);
  const Scalar _tmp187 = Scalar(0.1034955) * _tmp184;
  const Scalar _tmp188 =
      -_tmp180 * _tmp186 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp43), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp38 - 1), Scalar(2))));
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = Scalar(1.0) * _tmp186;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 *
      (-_tmp34 * std::cosh(Scalar(1.0) * _tmp32) +
       _tmp34 * std::cosh(
                    Scalar(0.1034955) * _tmp0 *
                    (-_tmp32 * _tmp33 -
                     Scalar(4.83288938413423) *
                         std::sqrt(Scalar(
                             std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp31), Scalar(2)) +
                             Scalar(0.13818785160942856) *
                                 std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp19 - 1),
                                          Scalar(2)))))));
  _res(1, 0) = _tmp150 * (-Scalar(1.0) * _tmp158 * std::cosh(_tmp149) -
                          (-Scalar(0.1034955) * _tmp151 * _tmp157 +
                           _tmp152 * (-_tmp148 * _tmp154 - _tmp150 * _tmp158)) *
                              std::cosh(_tmp153)) +
               _tmp154 * (-std::sinh(_tmp149) - std::sinh(_tmp153));
  _res(2, 0) = _tmp173 * (-Scalar(1.0) * _tmp172 * std::cosh(_tmp168) -
                          (-Scalar(0.1034955) * _tmp170 * _tmp174 +
                           _tmp175 * (-_tmp167 * _tmp178 - _tmp172 * _tmp173)) *
                              std::cosh(_tmp176)) +
               _tmp178 * (-std::sinh(_tmp168) - std::sinh(_tmp176));
  _res(3, 0) = -_tmp177 * (-std::sinh(_tmp189) - std::sinh(_tmp190)) +
               _tmp180 * (-Scalar(1.0) * _tmp185 * std::cosh(_tmp190) -
                          (Scalar(0.1034955) * _tmp183 * _tmp188 +
                           _tmp187 * (_tmp177 * _tmp186 - _tmp180 * _tmp185)) *
                              std::cosh(_tmp189));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym