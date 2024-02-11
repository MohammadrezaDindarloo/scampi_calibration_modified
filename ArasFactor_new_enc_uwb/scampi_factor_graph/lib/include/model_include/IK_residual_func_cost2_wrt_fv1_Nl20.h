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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl20
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 596

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (188)
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
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp34 = -_tmp33;
  const Scalar _tmp35 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp37 = _tmp35 + _tmp36;
  const Scalar _tmp38 = _tmp34 + _tmp37;
  const Scalar _tmp39 = -_tmp7;
  const Scalar _tmp40 = _tmp10 + _tmp15;
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp43 = _tmp42 + Scalar(-2.5193355532036801);
  const Scalar _tmp44 = Scalar(1.0) / (_tmp43);
  const Scalar _tmp45 = -_tmp20;
  const Scalar _tmp46 = _tmp25 + _tmp26;
  const Scalar _tmp47 = _tmp45 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 + Scalar(8.3885017487099702);
  const Scalar _tmp50 = _tmp44 * _tmp49;
  const Scalar _tmp51 = _tmp38 * _tmp50;
  const Scalar _tmp52 = _tmp20 + _tmp46;
  const Scalar _tmp53 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp54 = _tmp53 + Scalar(-4.7744369927459998);
  const Scalar _tmp55 = _tmp40 + _tmp7;
  const Scalar _tmp56 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 + Scalar(-2.7171519410699099);
  const Scalar _tmp58 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp57, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp59 = _tmp57 * _tmp58;
  const Scalar _tmp60 = _tmp33 + _tmp37;
  const Scalar _tmp61 = _tmp54 * _tmp58;
  const Scalar _tmp62 = _tmp35 - _tmp36;
  const Scalar _tmp63 = _tmp34 + _tmp62;
  const Scalar _tmp64 = _tmp27 + _tmp45;
  const Scalar _tmp65 = _tmp64 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 + Scalar(8.3196563720703107);
  const Scalar _tmp67 = _tmp16 + _tmp39;
  const Scalar _tmp68 = _tmp67 + position_vector(0, 0);
  const Scalar _tmp69 = _tmp68 + Scalar(1.9874742031097401);
  const Scalar _tmp70 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp69, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp71 = _tmp66 * _tmp70;
  const Scalar _tmp72 = _tmp69 * _tmp70;
  const Scalar _tmp73 = -_tmp51 * _tmp72 + _tmp63 * _tmp71;
  const Scalar _tmp74 = _tmp50 * _tmp59 - _tmp61;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp50 * _tmp72 - _tmp71);
  const Scalar _tmp76 = _tmp74 * _tmp75;
  const Scalar _tmp77 = -_tmp51 * _tmp59 + _tmp60 * _tmp61 - _tmp73 * _tmp76;
  const Scalar _tmp78 =
      std::sqrt(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp49, Scalar(2))));
  const Scalar _tmp79 = Scalar(1.0) / (_tmp78);
  const Scalar _tmp80 = _tmp44 * _tmp78;
  const Scalar _tmp81 = _tmp80 * (_tmp41 * _tmp49 * _tmp79 - _tmp43 * _tmp47 * _tmp79);
  const Scalar _tmp82 = _tmp64 * _tmp72 - _tmp67 * _tmp71 + _tmp72 * _tmp81;
  const Scalar _tmp83 = _tmp52 * _tmp59 - _tmp55 * _tmp61 + _tmp59 * _tmp81 - _tmp76 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 = Scalar(1.0) * _tmp84;
  const Scalar _tmp86 = Scalar(1.0) * _tmp47;
  const Scalar _tmp87 = -_tmp86;
  const Scalar _tmp88 = _tmp52 + _tmp87;
  const Scalar _tmp89 = Scalar(1.0) * _tmp41;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp64 + _tmp87);
  const Scalar _tmp91 = -_tmp67 + _tmp89;
  const Scalar _tmp92 = _tmp90 * _tmp91;
  const Scalar _tmp93 = _tmp88 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (-_tmp55 + _tmp89 - _tmp93);
  const Scalar _tmp95 = Scalar(1.0) * _tmp94;
  const Scalar _tmp96 = _tmp38 * _tmp72 - _tmp63 * _tmp72;
  const Scalar _tmp97 = _tmp38 * _tmp59 - _tmp59 * _tmp60 - _tmp76 * _tmp96 - _tmp77 * _tmp92;
  const Scalar _tmp98 = _tmp84 * _tmp97;
  const Scalar _tmp99 = _tmp95 * _tmp98;
  const Scalar _tmp100 = -_tmp77 * _tmp85 + _tmp88 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) * _tmp90;
  const Scalar _tmp102 = _tmp18 + Scalar(1.7965602546229);
  const Scalar _tmp103 = _tmp29 + Scalar(-4.83288938413423);
  const Scalar _tmp104 =
      std::pow(Scalar(std::pow(_tmp102, Scalar(2)) + std::pow(_tmp103, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp105 = _tmp102 * _tmp104;
  const Scalar _tmp106 = _tmp103 * _tmp104;
  const Scalar _tmp107 = fh1 * (-_tmp105 * _tmp28 + _tmp106 * _tmp17);
  const Scalar _tmp108 = Scalar(1.0) * _tmp75;
  const Scalar _tmp109 = _tmp101 * _tmp73 * _tmp75 * _tmp91 - _tmp108 * _tmp96;
  const Scalar _tmp110 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp111 = _tmp110 * _tmp83;
  const Scalar _tmp112 = _tmp98 * (-_tmp108 * _tmp82 - _tmp109 * _tmp111);
  const Scalar _tmp113 = _tmp88 * _tmp94;
  const Scalar _tmp114 = _tmp110 * (_tmp109 + _tmp112);
  const Scalar _tmp115 = -_tmp108 * _tmp73 + _tmp112 * _tmp113 - _tmp114 * _tmp77;
  const Scalar _tmp116 = _tmp106 * fh1;
  const Scalar _tmp117 = fh1 * (_tmp33 + _tmp62);
  const Scalar _tmp118 = -_tmp106 * _tmp117 - Scalar(5.1796800000000003) * _tmp23 - _tmp28 * fv1;
  const Scalar _tmp119 = _tmp92 * _tmp95;
  const Scalar _tmp120 = _tmp93 * _tmp95 + Scalar(1.0);
  const Scalar _tmp121 = -Scalar(1.0) * _tmp101 * _tmp120 + Scalar(1.0) * _tmp119;
  const Scalar _tmp122 = _tmp105 * _tmp117 + Scalar(5.1796800000000003) * _tmp14 + _tmp17 * fv1;
  const Scalar _tmp123 = _tmp88 * _tmp90;
  const Scalar _tmp124 = Scalar(1.0) * _tmp123 * _tmp95 - Scalar(1.0) * _tmp95;
  const Scalar _tmp125 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp126 = _tmp86 * _tmp92 + _tmp89;
  const Scalar _tmp127 = _tmp126 * _tmp94;
  const Scalar _tmp128 = 0;
  const Scalar _tmp129 = _tmp90 * (-_tmp127 * _tmp88 - _tmp128 * _tmp77 + _tmp87);
  const Scalar _tmp130 = -Scalar(1.0) * _tmp126 * _tmp95 - Scalar(1.0) * _tmp129 + Scalar(1.0);
  const Scalar _tmp131 = _tmp50 * _tmp75;
  const Scalar _tmp132 = _tmp131 * _tmp73 + _tmp51;
  const Scalar _tmp133 = _tmp131 * _tmp96 - _tmp132 * _tmp92 - _tmp38;
  const Scalar _tmp134 = _tmp98 * (-_tmp111 * _tmp133 + _tmp131 * _tmp82 - _tmp81);
  const Scalar _tmp135 = _tmp110 * (_tmp133 + _tmp134);
  const Scalar _tmp136 = _tmp113 * _tmp134 + _tmp132 - _tmp135 * _tmp77;
  const Scalar _tmp137 = _tmp105 * fh1;
  const Scalar _tmp138 = Scalar(1.0) * _tmp107 * (-_tmp100 * _tmp101 + _tmp99) +
                         Scalar(1.0) * _tmp116 * (-_tmp101 * _tmp115 + _tmp112 * _tmp95) +
                         _tmp118 * _tmp121 + _tmp122 * _tmp124 + _tmp125 * _tmp130 +
                         Scalar(1.0) * _tmp137 * (-_tmp101 * _tmp136 + _tmp134 * _tmp95);
  const Scalar _tmp139 = -_tmp114 * _tmp74 + Scalar(1.0);
  const Scalar _tmp140 = _tmp72 * _tmp75;
  const Scalar _tmp141 = _tmp128 * _tmp76;
  const Scalar _tmp142 = _tmp80 * (_tmp128 * _tmp59 - _tmp141 * _tmp72);
  const Scalar _tmp143 = -_tmp135 * _tmp74 - _tmp50;
  const Scalar _tmp144 = -_tmp107 * _tmp80 * (_tmp59 * _tmp85 - _tmp72 * _tmp76 * _tmp85) -
                         _tmp116 * _tmp80 * (_tmp114 * _tmp59 + _tmp139 * _tmp140) -
                         _tmp125 * _tmp142 -
                         _tmp137 * _tmp80 * (_tmp135 * _tmp59 + _tmp140 * _tmp143 + Scalar(1.0));
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = std::asinh(_tmp138 * _tmp145);
  const Scalar _tmp147 = Scalar(1.0) * _tmp146;
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp149 =
      -_tmp146 * _tmp148 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp42), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp48 - 1), Scalar(2))));
  const Scalar _tmp150 = Scalar(0.1034955) * _tmp145;
  const Scalar _tmp151 = _tmp149 * _tmp150;
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp142;
  const Scalar _tmp153 = std::pow(_tmp144, Scalar(-2));
  const Scalar _tmp154 = _tmp142 * _tmp153;
  const Scalar _tmp155 = _tmp24 + _tmp26 + _tmp45;
  const Scalar _tmp156 =
      (-_tmp138 * _tmp154 + _tmp145 * (_tmp121 * _tmp155 + _tmp124 * _tmp17 - _tmp130)) /
      std::sqrt(Scalar(std::pow(_tmp138, Scalar(2)) * _tmp153 + 1));
  const Scalar _tmp157 = _tmp120 * _tmp90;
  const Scalar _tmp158 = _tmp122 * _tmp95;
  const Scalar _tmp159 = _tmp100 * _tmp107 * _tmp90 + _tmp115 * _tmp116 * _tmp90 +
                         _tmp118 * _tmp157 - _tmp123 * _tmp158 + _tmp125 * _tmp129 +
                         _tmp136 * _tmp137 * _tmp90;
  const Scalar _tmp160 = _tmp125 * _tmp128;
  const Scalar _tmp161 = _tmp107 * _tmp85;
  const Scalar _tmp162 =
      _tmp116 * _tmp139 * _tmp75 + _tmp137 * _tmp143 * _tmp75 - _tmp160 * _tmp76 - _tmp161 * _tmp76;
  const Scalar _tmp163 = Scalar(1.0) / (_tmp162);
  const Scalar _tmp164 = std::asinh(_tmp159 * _tmp163);
  const Scalar _tmp165 = Scalar(1.0) * _tmp164;
  const Scalar _tmp166 = _tmp17 * _tmp95;
  const Scalar _tmp167 = std::pow(_tmp162, Scalar(-2));
  const Scalar _tmp168 = _tmp141 * _tmp167;
  const Scalar _tmp169 =
      (-_tmp159 * _tmp168 + _tmp163 * (-_tmp123 * _tmp166 - _tmp129 + _tmp155 * _tmp157)) /
      std::sqrt(Scalar(std::pow(_tmp159, Scalar(2)) * _tmp167 + 1));
  const Scalar _tmp170 = Scalar(9.6622558468725703) * _tmp162;
  const Scalar _tmp171 =
      -_tmp164 * _tmp170 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp65 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp68 - 1), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.1034955) * _tmp163;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = Scalar(9.6622558468725703) * _tmp128;
  const Scalar _tmp175 = _tmp174 * _tmp76;
  const Scalar _tmp176 = _tmp114 * _tmp116 + _tmp135 * _tmp137 + _tmp160 + _tmp161;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = -_tmp107 * _tmp99 - _tmp112 * _tmp116 * _tmp94 - _tmp118 * _tmp119 +
                         _tmp125 * _tmp127 - _tmp134 * _tmp137 * _tmp94 + _tmp158;
  const Scalar _tmp179 = std::asinh(_tmp177 * _tmp178);
  const Scalar _tmp180 = Scalar(1.0) * _tmp179;
  const Scalar _tmp181 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp182 =
      -_tmp179 * _tmp181 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp53), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp56), Scalar(2))));
  const Scalar _tmp183 = Scalar(0.1034955) * _tmp177;
  const Scalar _tmp184 = _tmp182 * _tmp183;
  const Scalar _tmp185 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp186 = _tmp128 * _tmp185;
  const Scalar _tmp187 = (_tmp177 * (-_tmp119 * _tmp155 - _tmp127 + _tmp166) + _tmp178 * _tmp186) /
                         std::sqrt(Scalar(std::pow(_tmp178, Scalar(2)) * _tmp185 + 1));

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
  _res(1, 0) = _tmp148 * (-Scalar(1.0) * _tmp156 * std::cosh(_tmp147) -
                          (-Scalar(0.1034955) * _tmp149 * _tmp154 +
                           _tmp150 * (-_tmp146 * _tmp152 - _tmp148 * _tmp156)) *
                              std::cosh(_tmp151)) +
               _tmp152 * (-std::sinh(_tmp147) - std::sinh(_tmp151));
  _res(2, 0) = _tmp170 * (-Scalar(1.0) * _tmp169 * std::cosh(_tmp165) -
                          (-Scalar(0.1034955) * _tmp168 * _tmp171 +
                           _tmp172 * (-_tmp164 * _tmp175 - _tmp169 * _tmp170)) *
                              std::cosh(_tmp173)) +
               _tmp175 * (-std::sinh(_tmp165) - std::sinh(_tmp173));
  _res(3, 0) = -_tmp174 * (-std::sinh(_tmp180) - std::sinh(_tmp184)) +
               _tmp181 * (-Scalar(1.0) * _tmp187 * std::cosh(_tmp180) -
                          (Scalar(0.1034955) * _tmp182 * _tmp186 +
                           _tmp183 * (_tmp174 * _tmp179 - _tmp181 * _tmp187)) *
                              std::cosh(_tmp184));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
