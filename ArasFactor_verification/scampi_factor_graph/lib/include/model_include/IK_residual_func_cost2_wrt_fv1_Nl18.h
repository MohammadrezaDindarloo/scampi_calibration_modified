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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl18
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl18(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 602

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (190)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp8 = 2 * _tmp1 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp3 * _tmp9;
  const Scalar _tmp11 = _tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp3;
  const Scalar _tmp14 = _tmp13 * _tmp7;
  const Scalar _tmp15 = _tmp1 * _tmp9;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp12 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp20 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp23 = _tmp1 * _tmp13;
  const Scalar _tmp24 = _tmp7 * _tmp9;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -_tmp26;
  const Scalar _tmp28 = -_tmp22 + _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(1, 0);
  const Scalar _tmp31 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = Scalar(1.0) * _tmp0 /
                        std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp34 = -_tmp21;
  const Scalar _tmp35 = _tmp28 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp37 = _tmp36 + Scalar(8.3196563720703107);
  const Scalar _tmp38 = _tmp12 - _tmp16;
  const Scalar _tmp39 = _tmp38 + _tmp6;
  const Scalar _tmp40 = _tmp39 + position_vector(0, 0);
  const Scalar _tmp41 = _tmp40 + Scalar(1.9874742031097401);
  const Scalar _tmp42 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp43 = _tmp37 * _tmp42;
  const Scalar _tmp44 = _tmp22 + _tmp34;
  const Scalar _tmp45 = _tmp27 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp47 = _tmp46 + Scalar(8.3885017487099702);
  const Scalar _tmp48 = _tmp38 + _tmp5;
  const Scalar _tmp49 = _tmp48 + position_vector(0, 0);
  const Scalar _tmp50 = _tmp49 + Scalar(-2.5193355532036801);
  const Scalar _tmp51 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp50, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp52 = _tmp47 * _tmp51;
  const Scalar _tmp53 = _tmp50 * _tmp51;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp43 * _tmp53 - _tmp52);
  const Scalar _tmp55 =
      std::sqrt(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp41, Scalar(2))));
  const Scalar _tmp56 = Scalar(1.0) / (_tmp55);
  const Scalar _tmp57 = _tmp42 * _tmp55;
  const Scalar _tmp58 = _tmp57 * (-_tmp35 * _tmp41 * _tmp56 + _tmp37 * _tmp39 * _tmp56);
  const Scalar _tmp59 = _tmp54 * (_tmp45 * _tmp53 - _tmp48 * _tmp52 + _tmp53 * _tmp58);
  const Scalar _tmp60 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp61 = -_tmp60;
  const Scalar _tmp62 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp63 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp64 = _tmp62 + _tmp63;
  const Scalar _tmp65 = _tmp61 + _tmp64;
  const Scalar _tmp66 = _tmp62 - _tmp63;
  const Scalar _tmp67 = _tmp61 + _tmp66;
  const Scalar _tmp68 = _tmp54 * (-_tmp53 * _tmp65 + _tmp53 * _tmp67);
  const Scalar _tmp69 = _tmp43 * _tmp67;
  const Scalar _tmp70 = _tmp54 * (_tmp52 * _tmp65 - _tmp53 * _tmp69);
  const Scalar _tmp71 = _tmp43 * _tmp70 + _tmp69;
  const Scalar _tmp72 = Scalar(1.0) * _tmp35;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp45 + _tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp39;
  const Scalar _tmp76 = -_tmp48 + _tmp75;
  const Scalar _tmp77 = _tmp74 * _tmp76;
  const Scalar _tmp78 = _tmp43 * _tmp68 - _tmp67 - _tmp71 * _tmp77;
  const Scalar _tmp79 = _tmp60 + _tmp64;
  const Scalar _tmp80 = _tmp21 + _tmp22 + _tmp27;
  const Scalar _tmp81 = _tmp80 + position_vector(1, 0);
  const Scalar _tmp82 = _tmp81 + Scalar(-4.7744369927459998);
  const Scalar _tmp83 = _tmp17 + _tmp5;
  const Scalar _tmp84 = _tmp83 + position_vector(0, 0);
  const Scalar _tmp85 = _tmp84 + Scalar(-2.7171519410699099);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp82 * _tmp86;
  const Scalar _tmp88 = _tmp85 * _tmp86;
  const Scalar _tmp89 = _tmp43 * _tmp88 - _tmp87;
  const Scalar _tmp90 = -_tmp69 * _tmp88 - _tmp70 * _tmp89 + _tmp79 * _tmp87;
  const Scalar _tmp91 = _tmp67 * _tmp88 - _tmp68 * _tmp89 - _tmp77 * _tmp90 - _tmp79 * _tmp88;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp58 * _tmp88 - _tmp59 * _tmp89 + _tmp80 * _tmp88 - _tmp83 * _tmp87;
  const Scalar _tmp94 = _tmp92 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp96 = _tmp91 * _tmp95;
  const Scalar _tmp97 = _tmp96 * (_tmp43 * _tmp59 - _tmp58 - _tmp78 * _tmp94);
  const Scalar _tmp98 = _tmp78 + _tmp97;
  const Scalar _tmp99 = _tmp88 * _tmp92;
  const Scalar _tmp100 = _tmp89 * _tmp92;
  const Scalar _tmp101 = -_tmp100 * _tmp98 - _tmp43;
  const Scalar _tmp102 = _tmp53 * _tmp54;
  const Scalar _tmp103 = _tmp19 + Scalar(1.7965602546229);
  const Scalar _tmp104 = _tmp30 + Scalar(-4.83288938413423);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp103, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = _tmp106 * fh1;
  const Scalar _tmp108 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp109 = _tmp72 * _tmp77 + _tmp75;
  const Scalar _tmp110 = 0;
  const Scalar _tmp111 = _tmp100 * _tmp110;
  const Scalar _tmp112 = _tmp110 * _tmp92;
  const Scalar _tmp113 = _tmp57 * (-_tmp102 * _tmp111 + _tmp112 * _tmp88);
  const Scalar _tmp114 = Scalar(1.0) * _tmp74;
  const Scalar _tmp115 = _tmp114 * _tmp70 * _tmp76 - Scalar(1.0) * _tmp68;
  const Scalar _tmp116 = _tmp96 * (-_tmp115 * _tmp94 - Scalar(1.0) * _tmp59);
  const Scalar _tmp117 = _tmp115 + _tmp116;
  const Scalar _tmp118 = -_tmp100 * _tmp117 + Scalar(1.0);
  const Scalar _tmp119 = _tmp104 * _tmp105;
  const Scalar _tmp120 = _tmp119 * fh1;
  const Scalar _tmp121 = Scalar(1.0) * _tmp95;
  const Scalar _tmp122 = fh1 * (-_tmp106 * _tmp29 + _tmp119 * _tmp18);
  const Scalar _tmp123 = -_tmp107 * _tmp57 * (_tmp101 * _tmp102 + _tmp98 * _tmp99 + Scalar(1.0)) -
                         _tmp108 * _tmp113 -
                         _tmp120 * _tmp57 * (_tmp102 * _tmp118 + _tmp117 * _tmp99) -
                         _tmp122 * _tmp57 * (-_tmp102 * _tmp121 * _tmp89 + _tmp121 * _tmp88);
  const Scalar _tmp124 = Scalar(1.0) / (_tmp123);
  const Scalar _tmp125 = fh1 * (_tmp60 + _tmp66);
  const Scalar _tmp126 = _tmp106 * _tmp125 + Scalar(3.29616) * _tmp11 + _tmp18 * fv1;
  const Scalar _tmp127 = _tmp73 + _tmp80;
  const Scalar _tmp128 = _tmp127 * _tmp77;
  const Scalar _tmp129 = Scalar(1.0) / (-_tmp128 + _tmp75 - _tmp83);
  const Scalar _tmp130 = Scalar(1.0) * _tmp129;
  const Scalar _tmp131 = _tmp127 * _tmp130;
  const Scalar _tmp132 = -Scalar(1.0) * _tmp130 + Scalar(1.0) * _tmp131 * _tmp74;
  const Scalar _tmp133 = -_tmp119 * _tmp125 - Scalar(3.29616) * _tmp25 - _tmp29 * fv1;
  const Scalar _tmp134 = _tmp128 * _tmp130 + Scalar(1.0);
  const Scalar _tmp135 = _tmp130 * _tmp77;
  const Scalar _tmp136 = -Scalar(1.0) * _tmp114 * _tmp134 + Scalar(1.0) * _tmp135;
  const Scalar _tmp137 = _tmp127 * _tmp129;
  const Scalar _tmp138 = _tmp90 * _tmp92;
  const Scalar _tmp139 = _tmp116 * _tmp137 - _tmp117 * _tmp138 - Scalar(1.0) * _tmp70;
  const Scalar _tmp140 = _tmp137 * _tmp97 - _tmp138 * _tmp98 + _tmp71;
  const Scalar _tmp141 = -_tmp121 * _tmp90 + _tmp131 * _tmp96;
  const Scalar _tmp142 = _tmp130 * _tmp96;
  const Scalar _tmp143 = _tmp109 * _tmp129;
  const Scalar _tmp144 = _tmp74 * (-_tmp110 * _tmp138 - _tmp127 * _tmp143 + _tmp73);
  const Scalar _tmp145 = -Scalar(1.0) * _tmp109 * _tmp130 - Scalar(1.0) * _tmp144 + Scalar(1.0);
  const Scalar _tmp146 = Scalar(1.0) * _tmp107 * (-_tmp114 * _tmp140 + _tmp130 * _tmp97) +
                         _tmp108 * _tmp145 +
                         Scalar(1.0) * _tmp120 * (-_tmp114 * _tmp139 + _tmp116 * _tmp130) +
                         Scalar(1.0) * _tmp122 * (-_tmp114 * _tmp141 + _tmp142) +
                         _tmp126 * _tmp132 + _tmp133 * _tmp136;
  const Scalar _tmp147 = std::asinh(_tmp124 * _tmp146);
  const Scalar _tmp148 = Scalar(1.0) * _tmp147;
  const Scalar _tmp149 = Scalar(9.6622558468725703) * _tmp123;
  const Scalar _tmp150 =
      -_tmp147 * _tmp149 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp36 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp40 - 1), Scalar(2))));
  const Scalar _tmp151 = Scalar(0.1034955) * _tmp124;
  const Scalar _tmp152 = _tmp150 * _tmp151;
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp113;
  const Scalar _tmp154 = _tmp26 + _tmp44;
  const Scalar _tmp155 = std::pow(_tmp123, Scalar(-2));
  const Scalar _tmp156 = _tmp113 * _tmp155;
  const Scalar _tmp157 =
      (_tmp124 * (_tmp132 * _tmp18 + _tmp136 * _tmp154 - _tmp145) - _tmp146 * _tmp156) /
      std::sqrt(Scalar(std::pow(_tmp146, Scalar(2)) * _tmp155 + 1));
  const Scalar _tmp158 = _tmp121 * _tmp122;
  const Scalar _tmp159 = _tmp111 * _tmp54;
  const Scalar _tmp160 = _tmp101 * _tmp107 * _tmp54 - _tmp108 * _tmp159 +
                         _tmp118 * _tmp120 * _tmp54 - _tmp158 * _tmp54 * _tmp89;
  const Scalar _tmp161 = Scalar(9.6622558468725703) * _tmp160;
  const Scalar _tmp162 = _tmp130 * _tmp18;
  const Scalar _tmp163 = _tmp127 * _tmp74;
  const Scalar _tmp164 = _tmp134 * _tmp74;
  const Scalar _tmp165 = Scalar(1.0) / (_tmp160);
  const Scalar _tmp166 = _tmp126 * _tmp130;
  const Scalar _tmp167 = _tmp107 * _tmp140 * _tmp74 + _tmp108 * _tmp144 +
                         _tmp120 * _tmp139 * _tmp74 + _tmp122 * _tmp141 * _tmp74 +
                         _tmp133 * _tmp164 - _tmp163 * _tmp166;
  const Scalar _tmp168 = std::pow(_tmp160, Scalar(-2));
  const Scalar _tmp169 = _tmp159 * _tmp168;
  const Scalar _tmp170 =
      (_tmp165 * (-_tmp144 + _tmp154 * _tmp164 - _tmp162 * _tmp163) - _tmp167 * _tmp169) /
      std::sqrt(Scalar(std::pow(_tmp167, Scalar(2)) * _tmp168 + 1));
  const Scalar _tmp171 = std::asinh(_tmp165 * _tmp167);
  const Scalar _tmp172 = Scalar(9.6622558468725703) * _tmp159;
  const Scalar _tmp173 = Scalar(0.1034955) * _tmp165;
  const Scalar _tmp174 =
      -_tmp161 * _tmp171 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp49), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp46 - 1), Scalar(2))));
  const Scalar _tmp175 = _tmp173 * _tmp174;
  const Scalar _tmp176 = Scalar(1.0) * _tmp171;
  const Scalar _tmp177 =
      _tmp107 * _tmp92 * _tmp98 + _tmp108 * _tmp112 + _tmp117 * _tmp120 * _tmp92 + _tmp158;
  const Scalar _tmp178 = Scalar(1.0) / (_tmp177);
  const Scalar _tmp179 = -_tmp107 * _tmp129 * _tmp97 + _tmp108 * _tmp143 -
                         _tmp116 * _tmp120 * _tmp129 - _tmp122 * _tmp142 - _tmp133 * _tmp135 +
                         _tmp166;
  const Scalar _tmp180 = std::asinh(_tmp178 * _tmp179);
  const Scalar _tmp181 = Scalar(1.0) * _tmp180;
  const Scalar _tmp182 = Scalar(9.6622558468725703) * _tmp177;
  const Scalar _tmp183 =
      -_tmp180 * _tmp182 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp81), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp84), Scalar(2))));
  const Scalar _tmp184 = Scalar(0.1034955) * _tmp178;
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = Scalar(9.6622558468725703) * _tmp112;
  const Scalar _tmp187 = std::pow(_tmp177, Scalar(-2));
  const Scalar _tmp188 = _tmp112 * _tmp187;
  const Scalar _tmp189 = (_tmp178 * (-_tmp135 * _tmp154 - _tmp143 + _tmp162) + _tmp179 * _tmp188) /
                         std::sqrt(Scalar(std::pow(_tmp179, Scalar(2)) * _tmp187 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp32 *
      (-_tmp33 * std::cosh(Scalar(1.0) * _tmp31) +
       _tmp33 * std::cosh(
                    Scalar(0.1034955) * _tmp0 *
                    (-_tmp31 * _tmp32 -
                     Scalar(4.83288938413423) *
                         std::sqrt(Scalar(
                             std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp30), Scalar(2)) +
                             Scalar(0.13818785160942856) *
                                 std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp19 - 1),
                                          Scalar(2)))))));
  _res(1, 0) = _tmp149 * (-Scalar(1.0) * _tmp157 * std::cosh(_tmp148) -
                          (-Scalar(0.1034955) * _tmp150 * _tmp156 +
                           _tmp151 * (-_tmp147 * _tmp153 - _tmp149 * _tmp157)) *
                              std::cosh(_tmp152)) +
               _tmp153 * (-std::sinh(_tmp148) - std::sinh(_tmp152));
  _res(2, 0) = _tmp161 * (-Scalar(1.0) * _tmp170 * std::cosh(_tmp176) -
                          (-Scalar(0.1034955) * _tmp169 * _tmp174 +
                           _tmp173 * (-_tmp161 * _tmp170 - _tmp171 * _tmp172)) *
                              std::cosh(_tmp175)) +
               _tmp172 * (-std::sinh(_tmp175) - std::sinh(_tmp176));
  _res(3, 0) = _tmp182 * (-Scalar(1.0) * _tmp189 * std::cosh(_tmp181) -
                          (Scalar(0.1034955) * _tmp183 * _tmp188 +
                           _tmp184 * (_tmp180 * _tmp186 - _tmp182 * _tmp189)) *
                              std::cosh(_tmp185)) -
               _tmp186 * (-std::sinh(_tmp181) - std::sinh(_tmp185));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
