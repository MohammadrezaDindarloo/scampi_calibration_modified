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

  // Intermediate terms (192)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp8 = 2 * _tmp7;
  const Scalar _tmp9 = _tmp3 * _tmp8;
  const Scalar _tmp10 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                        _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = 2 * _tmp1;
  const Scalar _tmp12 = _tmp10 * _tmp11;
  const Scalar _tmp13 = _tmp12 + _tmp9;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 * _tmp7;
  const Scalar _tmp16 = 2 * _tmp10 * _tmp3;
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp15 - Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp18 = _tmp14 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp6;
  const Scalar _tmp20 = _tmp19 + position_vector(0, 0);
  const Scalar _tmp21 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp24 = _tmp11 * _tmp3;
  const Scalar _tmp25 = _tmp10 * _tmp8;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -_tmp27;
  const Scalar _tmp29 = -_tmp23 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp34 = Scalar(1.0) * _tmp0 /
                        std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp35 = _tmp18 + _tmp5;
  const Scalar _tmp36 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp37 = _tmp22 + _tmp23 + _tmp28;
  const Scalar _tmp38 = _tmp37 + position_vector(1, 0);
  const Scalar _tmp39 = _tmp38 + Scalar(-4.7744369927459998);
  const Scalar _tmp40 = _tmp36 + Scalar(-2.7171519410699099);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = _tmp39 * _tmp41;
  const Scalar _tmp43 = -_tmp22;
  const Scalar _tmp44 = _tmp23 + _tmp43;
  const Scalar _tmp45 = _tmp28 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp47 = _tmp46 + Scalar(8.3885017487099702);
  const Scalar _tmp48 = _tmp14 - _tmp17;
  const Scalar _tmp49 = _tmp48 + _tmp5;
  const Scalar _tmp50 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 + Scalar(-2.5193355532036801);
  const Scalar _tmp52 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp51, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 = _tmp47 * _tmp52;
  const Scalar _tmp55 = _tmp42 * _tmp53 - _tmp54;
  const Scalar _tmp56 = _tmp29 + _tmp43;
  const Scalar _tmp57 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 + Scalar(8.3196563720703107);
  const Scalar _tmp59 = _tmp48 + _tmp6;
  const Scalar _tmp60 = _tmp59 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(1.9874742031097401);
  const Scalar _tmp62 = std::pow(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp61, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp63 = _tmp58 * _tmp62;
  const Scalar _tmp64 = _tmp61 * _tmp62;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp42 * _tmp64 - _tmp63);
  const Scalar _tmp66 = _tmp55 * _tmp65;
  const Scalar _tmp67 =
      std::sqrt(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp40, Scalar(2))));
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp41 * _tmp67;
  const Scalar _tmp70 = _tmp69 * (_tmp35 * _tmp39 * _tmp68 - _tmp37 * _tmp40 * _tmp68);
  const Scalar _tmp71 = _tmp56 * _tmp64 - _tmp59 * _tmp63 + _tmp64 * _tmp70;
  const Scalar _tmp72 = _tmp45 * _tmp53 - _tmp49 * _tmp54 + _tmp53 * _tmp70 - _tmp66 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = Scalar(1.0) * _tmp73;
  const Scalar _tmp75 = _tmp20 + Scalar(1.7965602546229);
  const Scalar _tmp76 = _tmp31 + Scalar(-4.83288938413423);
  const Scalar _tmp77 = std::pow(Scalar(std::pow(_tmp75, Scalar(2)) + std::pow(_tmp76, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp78 = _tmp75 * _tmp77;
  const Scalar _tmp79 = _tmp76 * _tmp77;
  const Scalar _tmp80 = fh1 * (_tmp19 * _tmp79 - _tmp30 * _tmp78);
  const Scalar _tmp81 = -Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp82 = -_tmp81;
  const Scalar _tmp83 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp21 + Scalar(-0.010999999999999999);
  const Scalar _tmp84 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp85 = _tmp83 - _tmp84;
  const Scalar _tmp86 = _tmp82 + _tmp85;
  const Scalar _tmp87 = _tmp83 + _tmp84;
  const Scalar _tmp88 = _tmp81 + _tmp87;
  const Scalar _tmp89 = -_tmp64 * _tmp86 + _tmp64 * _tmp88;
  const Scalar _tmp90 = _tmp42 * _tmp65;
  const Scalar _tmp91 = _tmp42 * _tmp88;
  const Scalar _tmp92 = _tmp63 * _tmp86 - _tmp64 * _tmp91;
  const Scalar _tmp93 = _tmp90 * _tmp92 + _tmp91;
  const Scalar _tmp94 = Scalar(1.0) * _tmp37;
  const Scalar _tmp95 = -_tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp56 + _tmp95);
  const Scalar _tmp97 = Scalar(1.0) * _tmp35;
  const Scalar _tmp98 = _tmp96 * (-_tmp59 + _tmp97);
  const Scalar _tmp99 = -_tmp88 + _tmp89 * _tmp90 - _tmp93 * _tmp98;
  const Scalar _tmp100 = _tmp81 + _tmp85;
  const Scalar _tmp101 = _tmp100 * _tmp54 - _tmp53 * _tmp91 - _tmp66 * _tmp92;
  const Scalar _tmp102 = -_tmp100 * _tmp53 - _tmp101 * _tmp98 + _tmp53 * _tmp88 - _tmp66 * _tmp89;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp104 = _tmp103 * _tmp72;
  const Scalar _tmp105 = _tmp102 * _tmp73;
  const Scalar _tmp106 = _tmp105 * (-_tmp104 * _tmp99 - _tmp70 + _tmp71 * _tmp90);
  const Scalar _tmp107 = _tmp106 + _tmp99;
  const Scalar _tmp108 = _tmp103 * _tmp55;
  const Scalar _tmp109 = -_tmp107 * _tmp108 - _tmp42;
  const Scalar _tmp110 = _tmp64 * _tmp65;
  const Scalar _tmp111 = _tmp103 * _tmp53;
  const Scalar _tmp112 = _tmp78 * fh1;
  const Scalar _tmp113 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp114 = _tmp94 * _tmp98 + _tmp97;
  const Scalar _tmp115 = 0;
  const Scalar _tmp116 = _tmp103 * _tmp115;
  const Scalar _tmp117 = _tmp116 * _tmp66;
  const Scalar _tmp118 = _tmp69 * (_tmp116 * _tmp53 - _tmp117 * _tmp64);
  const Scalar _tmp119 = Scalar(1.0) * _tmp65;
  const Scalar _tmp120 = _tmp119 * _tmp92;
  const Scalar _tmp121 = -_tmp119 * _tmp89 + _tmp120 * _tmp98;
  const Scalar _tmp122 = _tmp105 * (-_tmp104 * _tmp121 - _tmp119 * _tmp71);
  const Scalar _tmp123 = _tmp121 + _tmp122;
  const Scalar _tmp124 = -_tmp108 * _tmp123 + Scalar(1.0);
  const Scalar _tmp125 = _tmp79 * fh1;
  const Scalar _tmp126 = -_tmp112 * _tmp69 * (_tmp107 * _tmp111 + _tmp109 * _tmp110 + Scalar(1.0)) -
                         _tmp113 * _tmp118 -
                         _tmp125 * _tmp69 * (_tmp110 * _tmp124 + _tmp111 * _tmp123) -
                         _tmp69 * _tmp80 * (_tmp53 * _tmp74 - _tmp64 * _tmp66 * _tmp74);
  const Scalar _tmp127 = Scalar(1.0) / (_tmp126);
  const Scalar _tmp128 = _tmp45 + _tmp95;
  const Scalar _tmp129 = _tmp128 * _tmp98;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 - _tmp49 + _tmp97);
  const Scalar _tmp131 = Scalar(1.0) * _tmp130;
  const Scalar _tmp132 = _tmp105 * _tmp131;
  const Scalar _tmp133 = -_tmp101 * _tmp74 + _tmp128 * _tmp132;
  const Scalar _tmp134 = Scalar(1.0) * _tmp96;
  const Scalar _tmp135 = fh1 * (_tmp82 + _tmp87);
  const Scalar _tmp136 = Scalar(3.29616) * _tmp13 + _tmp135 * _tmp78 + _tmp19 * fv1;
  const Scalar _tmp137 = _tmp128 * _tmp96;
  const Scalar _tmp138 = Scalar(1.0) * _tmp131 * _tmp137 - Scalar(1.0) * _tmp131;
  const Scalar _tmp139 = _tmp101 * _tmp103;
  const Scalar _tmp140 = _tmp128 * _tmp130;
  const Scalar _tmp141 = -_tmp120 + _tmp122 * _tmp140 - _tmp123 * _tmp139;
  const Scalar _tmp142 = _tmp114 * _tmp130;
  const Scalar _tmp143 = _tmp96 * (-_tmp115 * _tmp139 - _tmp128 * _tmp142 + _tmp95);
  const Scalar _tmp144 = -Scalar(1.0) * _tmp142 - Scalar(1.0) * _tmp143 + Scalar(1.0);
  const Scalar _tmp145 = -_tmp135 * _tmp79 - Scalar(3.29616) * _tmp26 - _tmp30 * fv1;
  const Scalar _tmp146 = _tmp96 * (_tmp129 * _tmp131 + Scalar(1.0));
  const Scalar _tmp147 = _tmp131 * _tmp98;
  const Scalar _tmp148 = -Scalar(1.0) * _tmp146 + Scalar(1.0) * _tmp147;
  const Scalar _tmp149 = _tmp106 * _tmp140 - _tmp107 * _tmp139 + _tmp93;
  const Scalar _tmp150 =
      Scalar(1.0) * _tmp112 * (_tmp106 * _tmp131 - _tmp134 * _tmp149) + _tmp113 * _tmp144 +
      Scalar(1.0) * _tmp125 * (_tmp122 * _tmp131 - _tmp134 * _tmp141) + _tmp136 * _tmp138 +
      _tmp145 * _tmp148 + Scalar(1.0) * _tmp80 * (_tmp132 - _tmp133 * _tmp134);
  const Scalar _tmp151 = std::asinh(_tmp127 * _tmp150);
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp126;
  const Scalar _tmp153 =
      -_tmp151 * _tmp152 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp36), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp38), Scalar(2))));
  const Scalar _tmp154 = Scalar(0.1034955) * _tmp127;
  const Scalar _tmp155 = _tmp153 * _tmp154;
  const Scalar _tmp156 = Scalar(1.0) * _tmp151;
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp118;
  const Scalar _tmp158 = std::pow(_tmp126, Scalar(-2));
  const Scalar _tmp159 = _tmp118 * _tmp158;
  const Scalar _tmp160 = _tmp27 + _tmp44;
  const Scalar _tmp161 =
      (_tmp127 * (_tmp138 * _tmp19 - _tmp144 + _tmp148 * _tmp160) - _tmp150 * _tmp159) /
      std::sqrt(Scalar(std::pow(_tmp150, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp162 = _tmp113 * _tmp116;
  const Scalar _tmp163 = _tmp74 * _tmp80;
  const Scalar _tmp164 =
      _tmp109 * _tmp112 * _tmp65 + _tmp124 * _tmp125 * _tmp65 - _tmp162 * _tmp66 - _tmp163 * _tmp66;
  const Scalar _tmp165 = Scalar(1.0) / (_tmp164);
  const Scalar _tmp166 = _tmp131 * _tmp136;
  const Scalar _tmp167 = _tmp112 * _tmp149 * _tmp96 + _tmp113 * _tmp143 +
                         _tmp125 * _tmp141 * _tmp96 + _tmp133 * _tmp80 * _tmp96 -
                         _tmp137 * _tmp166 + _tmp145 * _tmp146;
  const Scalar _tmp168 = std::asinh(_tmp165 * _tmp167);
  const Scalar _tmp169 = Scalar(1.0) * _tmp168;
  const Scalar _tmp170 = _tmp131 * _tmp19;
  const Scalar _tmp171 = std::pow(_tmp164, Scalar(-2));
  const Scalar _tmp172 = _tmp117 * _tmp171;
  const Scalar _tmp173 =
      (_tmp165 * (-_tmp137 * _tmp170 - _tmp143 + _tmp146 * _tmp160) - _tmp167 * _tmp172) /
      std::sqrt(Scalar(std::pow(_tmp167, Scalar(2)) * _tmp171 + 1));
  const Scalar _tmp174 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp175 = Scalar(9.6622558468725703) * _tmp116;
  const Scalar _tmp176 = _tmp175 * _tmp66;
  const Scalar _tmp177 = Scalar(0.1034955) * _tmp165;
  const Scalar _tmp178 =
      -_tmp168 * _tmp174 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp57 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp60 - 1), Scalar(2))));
  const Scalar _tmp179 = _tmp177 * _tmp178;
  const Scalar _tmp180 = -_tmp106 * _tmp112 * _tmp130 + _tmp113 * _tmp142 -
                         _tmp122 * _tmp125 * _tmp130 - _tmp132 * _tmp80 - _tmp145 * _tmp147 +
                         _tmp166;
  const Scalar _tmp181 =
      _tmp103 * _tmp107 * _tmp112 + _tmp103 * _tmp123 * _tmp125 + _tmp162 + _tmp163;
  const Scalar _tmp182 = Scalar(1.0) / (_tmp181);
  const Scalar _tmp183 = std::asinh(_tmp180 * _tmp182);
  const Scalar _tmp184 = Scalar(1.0) * _tmp183;
  const Scalar _tmp185 = Scalar(9.6622558468725703) * _tmp181;
  const Scalar _tmp186 =
      -_tmp183 * _tmp185 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp50), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp46 - 1), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.1034955) * _tmp182;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp181, Scalar(-2));
  const Scalar _tmp190 = _tmp116 * _tmp189;
  const Scalar _tmp191 = (_tmp180 * _tmp190 + _tmp182 * (-_tmp142 - _tmp147 * _tmp160 + _tmp170)) /
                         std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp189 + 1));

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
                                 std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp20 - 1),
                                          Scalar(2)))))));
  _res(1, 0) = _tmp152 * (-Scalar(1.0) * _tmp161 * std::cosh(_tmp156) -
                          (-Scalar(0.1034955) * _tmp153 * _tmp159 +
                           _tmp154 * (-_tmp151 * _tmp157 - _tmp152 * _tmp161)) *
                              std::cosh(_tmp155)) +
               _tmp157 * (-std::sinh(_tmp155) - std::sinh(_tmp156));
  _res(2, 0) = _tmp174 * (-Scalar(1.0) * _tmp173 * std::cosh(_tmp169) -
                          (-Scalar(0.1034955) * _tmp172 * _tmp178 +
                           _tmp177 * (-_tmp168 * _tmp176 - _tmp173 * _tmp174)) *
                              std::cosh(_tmp179)) +
               _tmp176 * (-std::sinh(_tmp169) - std::sinh(_tmp179));
  _res(3, 0) = -_tmp175 * (-std::sinh(_tmp184) - std::sinh(_tmp188)) +
               _tmp185 * (-Scalar(1.0) * _tmp191 * std::cosh(_tmp184) -
                          (Scalar(0.1034955) * _tmp186 * _tmp190 +
                           _tmp187 * (_tmp175 * _tmp183 - _tmp185 * _tmp191)) *
                              std::cosh(_tmp188));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
