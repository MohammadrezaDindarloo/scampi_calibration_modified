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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl10
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl10(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 595

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (186)
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
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp4;
  const Scalar _tmp12 = _tmp1 * _tmp11;
  const Scalar _tmp13 = _tmp2 * _tmp5;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp15;
  const Scalar _tmp17 = -_tmp10 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp7;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp22 = _tmp11 * _tmp2;
  const Scalar _tmp23 = _tmp1 * _tmp5;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp32 = Scalar(1.0) * _tmp0 /
                        std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp33 = -_tmp21;
  const Scalar _tmp34 = _tmp25 + _tmp26;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp37 = -_tmp7;
  const Scalar _tmp38 = _tmp10 + _tmp37;
  const Scalar _tmp39 = _tmp16 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp43 = -_tmp42;
  const Scalar _tmp44 = -Scalar(0.010999999999999999) * _tmp20 -
                        Scalar(0.010999999999999999) * _tmp8 + Scalar(-0.010999999999999999);
  const Scalar _tmp45 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp46 = _tmp44 + _tmp45;
  const Scalar _tmp47 = _tmp43 + _tmp46;
  const Scalar _tmp48 = _tmp10 + _tmp16 + _tmp7;
  const Scalar _tmp49 = _tmp48 + position_vector(1, 0);
  const Scalar _tmp50 = _tmp49 + Scalar(-4.7744369927459998);
  const Scalar _tmp51 = _tmp21 + _tmp34;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(-2.7171519410699099);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp50, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp53 * _tmp54;
  const Scalar _tmp56 = _tmp42 + _tmp46;
  const Scalar _tmp57 = _tmp40 + Scalar(-4.83288938413423);
  const Scalar _tmp58 = _tmp36 + Scalar(1.7965602546229);
  const Scalar _tmp59 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp60 = _tmp57 * _tmp59;
  const Scalar _tmp61 = _tmp50 * _tmp54;
  const Scalar _tmp62 = _tmp55 * _tmp60 - _tmp61;
  const Scalar _tmp63 = _tmp17 + _tmp37;
  const Scalar _tmp64 = _tmp63 + position_vector(1, 0);
  const Scalar _tmp65 = _tmp64 + Scalar(8.3196563720703107);
  const Scalar _tmp66 = _tmp27 + _tmp33;
  const Scalar _tmp67 = _tmp66 + position_vector(0, 0);
  const Scalar _tmp68 = _tmp67 + Scalar(1.9874742031097401);
  const Scalar _tmp69 = std::pow(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp68, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp70 = _tmp65 * _tmp69;
  const Scalar _tmp71 = _tmp68 * _tmp69;
  const Scalar _tmp72 = Scalar(1.0) / (_tmp60 * _tmp71 - _tmp70);
  const Scalar _tmp73 = _tmp44 - _tmp45;
  const Scalar _tmp74 = _tmp43 + _tmp73;
  const Scalar _tmp75 = _tmp47 * _tmp71;
  const Scalar _tmp76 = _tmp72 * (-_tmp71 * _tmp74 + _tmp75);
  const Scalar _tmp77 = _tmp72 * (-_tmp60 * _tmp75 + _tmp70 * _tmp74);
  const Scalar _tmp78 = _tmp47 * _tmp60;
  const Scalar _tmp79 = -_tmp55 * _tmp78 + _tmp56 * _tmp61 - _tmp62 * _tmp77;
  const Scalar _tmp80 = Scalar(1.0) * _tmp39;
  const Scalar _tmp81 = -_tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp63 + _tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp35;
  const Scalar _tmp84 = -_tmp66 + _tmp83;
  const Scalar _tmp85 = _tmp82 * _tmp84;
  const Scalar _tmp86 = _tmp47 * _tmp55 - _tmp55 * _tmp56 - _tmp62 * _tmp76 - _tmp79 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp80 * _tmp85 + _tmp83;
  const Scalar _tmp89 = 0;
  const Scalar _tmp90 = _tmp71 * _tmp72;
  const Scalar _tmp91 = _tmp62 * _tmp90;
  const Scalar _tmp92 =
      std::sqrt(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp58, Scalar(2))));
  const Scalar _tmp93 = _tmp59 * _tmp92;
  const Scalar _tmp94 = _tmp93 * (_tmp55 * _tmp89 - _tmp89 * _tmp91);
  const Scalar _tmp95 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp96 = _tmp93 * (_tmp35 * _tmp57 * _tmp95 - _tmp39 * _tmp58 * _tmp95);
  const Scalar _tmp97 = _tmp60 * _tmp77 + _tmp78;
  const Scalar _tmp98 = -_tmp47 + _tmp60 * _tmp76 - _tmp85 * _tmp97;
  const Scalar _tmp99 = _tmp72 * (_tmp63 * _tmp71 - _tmp66 * _tmp70 + _tmp71 * _tmp96);
  const Scalar _tmp100 = _tmp48 * _tmp55 - _tmp51 * _tmp61 + _tmp55 * _tmp96 - _tmp62 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp87;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp86;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp98 + _tmp60 * _tmp99 - _tmp96);
  const Scalar _tmp105 = _tmp87 * (_tmp104 + _tmp98);
  const Scalar _tmp106 = -_tmp105 * _tmp62 - _tmp60;
  const Scalar _tmp107 = _tmp29 + Scalar(-2.5193355532036801);
  const Scalar _tmp108 = _tmp19 + Scalar(8.3885017487099702);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = Scalar(1.0) * _tmp102;
  const Scalar _tmp113 = _tmp108 * _tmp109;
  const Scalar _tmp114 = fh1 * (-_tmp110 * _tmp18 + _tmp113 * _tmp28);
  const Scalar _tmp115 = Scalar(1.0) * _tmp82;
  const Scalar _tmp116 = _tmp115 * _tmp77 * _tmp84 - Scalar(1.0) * _tmp76;
  const Scalar _tmp117 = _tmp103 * (-_tmp101 * _tmp116 - Scalar(1.0) * _tmp99);
  const Scalar _tmp118 = _tmp87 * (_tmp116 + _tmp117);
  const Scalar _tmp119 = -_tmp118 * _tmp62 + Scalar(1.0);
  const Scalar _tmp120 = _tmp113 * fh1;
  const Scalar _tmp121 = -_tmp111 * _tmp93 * (_tmp105 * _tmp55 + _tmp106 * _tmp90 + Scalar(1.0)) -
                         _tmp114 * _tmp93 * (_tmp112 * _tmp55 - _tmp112 * _tmp91) -
                         _tmp120 * _tmp93 * (_tmp118 * _tmp55 + _tmp119 * _tmp90) - _tmp41 * _tmp94;
  const Scalar _tmp122 = Scalar(1.0) / (_tmp121);
  const Scalar _tmp123 = _tmp48 + _tmp81;
  const Scalar _tmp124 = _tmp123 * _tmp85;
  const Scalar _tmp125 = Scalar(1.0) / (-_tmp124 - _tmp51 + _tmp83);
  const Scalar _tmp126 = Scalar(1.0) * _tmp125;
  const Scalar _tmp127 = _tmp125 * _tmp88;
  const Scalar _tmp128 = _tmp82 * (-_tmp123 * _tmp127 - _tmp79 * _tmp89 + _tmp81);
  const Scalar _tmp129 = -Scalar(1.0) * _tmp126 * _tmp88 - Scalar(1.0) * _tmp128 + Scalar(1.0);
  const Scalar _tmp130 = fh1 * (_tmp42 + _tmp73);
  const Scalar _tmp131 = -_tmp113 * _tmp130 - Scalar(3.29616) * _tmp14 - _tmp18 * fv1;
  const Scalar _tmp132 = _tmp126 * _tmp85;
  const Scalar _tmp133 = _tmp82 * (_tmp124 * _tmp126 + Scalar(1.0));
  const Scalar _tmp134 = Scalar(1.0) * _tmp132 - Scalar(1.0) * _tmp133;
  const Scalar _tmp135 = _tmp123 * _tmp125;
  const Scalar _tmp136 = _tmp117 * _tmp135 - _tmp118 * _tmp79 - Scalar(1.0) * _tmp77;
  const Scalar _tmp137 = _tmp104 * _tmp135 - _tmp105 * _tmp79 + _tmp97;
  const Scalar _tmp138 = _tmp110 * _tmp130 + Scalar(3.29616) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp139 = _tmp123 * _tmp82;
  const Scalar _tmp140 = Scalar(1.0) * _tmp126 * _tmp139 - Scalar(1.0) * _tmp126;
  const Scalar _tmp141 = _tmp103 * _tmp126;
  const Scalar _tmp142 = -_tmp112 * _tmp79 + _tmp123 * _tmp141;
  const Scalar _tmp143 = Scalar(1.0) * _tmp111 * (_tmp104 * _tmp126 - _tmp115 * _tmp137) +
                         Scalar(1.0) * _tmp114 * (-_tmp115 * _tmp142 + _tmp141) +
                         Scalar(1.0) * _tmp120 * (-_tmp115 * _tmp136 + _tmp117 * _tmp126) +
                         _tmp129 * _tmp41 + _tmp131 * _tmp134 + _tmp138 * _tmp140;
  const Scalar _tmp144 = std::asinh(_tmp122 * _tmp143);
  const Scalar _tmp145 = Scalar(9.6622558468725703) * _tmp121;
  const Scalar _tmp146 =
      -_tmp144 * _tmp145 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp40), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp36 - 1), Scalar(2))));
  const Scalar _tmp147 = Scalar(0.1034955) * _tmp122;
  const Scalar _tmp148 = _tmp146 * _tmp147;
  const Scalar _tmp149 = Scalar(1.0) * _tmp144;
  const Scalar _tmp150 = Scalar(9.6622558468725703) * _tmp94;
  const Scalar _tmp151 = std::pow(_tmp121, Scalar(-2));
  const Scalar _tmp152 = _tmp151 * _tmp94;
  const Scalar _tmp153 = _tmp15 + _tmp38;
  const Scalar _tmp154 =
      (_tmp122 * (-_tmp129 + _tmp134 * _tmp153 + _tmp140 * _tmp28) - _tmp143 * _tmp152) /
      std::sqrt(Scalar(std::pow(_tmp143, Scalar(2)) * _tmp151 + 1));
  const Scalar _tmp155 = _tmp41 * _tmp89;
  const Scalar _tmp156 = _tmp62 * _tmp72;
  const Scalar _tmp157 = _tmp112 * _tmp114;
  const Scalar _tmp158 = _tmp106 * _tmp111 * _tmp72 + _tmp119 * _tmp120 * _tmp72 -
                         _tmp155 * _tmp156 - _tmp156 * _tmp157;
  const Scalar _tmp159 = Scalar(1.0) / (_tmp158);
  const Scalar _tmp160 = _tmp126 * _tmp138;
  const Scalar _tmp161 = _tmp111 * _tmp137 * _tmp82 + _tmp114 * _tmp142 * _tmp82 +
                         _tmp120 * _tmp136 * _tmp82 + _tmp128 * _tmp41 + _tmp131 * _tmp133 -
                         _tmp139 * _tmp160;
  const Scalar _tmp162 = std::asinh(_tmp159 * _tmp161);
  const Scalar _tmp163 = Scalar(9.6622558468725703) * _tmp158;
  const Scalar _tmp164 =
      -_tmp162 * _tmp163 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp64 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp67 - 1), Scalar(2))));
  const Scalar _tmp165 = Scalar(0.1034955) * _tmp159;
  const Scalar _tmp166 = _tmp164 * _tmp165;
  const Scalar _tmp167 = Scalar(1.0) * _tmp162;
  const Scalar _tmp168 = Scalar(9.6622558468725703) * _tmp89;
  const Scalar _tmp169 = _tmp156 * _tmp168;
  const Scalar _tmp170 = std::pow(_tmp158, Scalar(-2));
  const Scalar _tmp171 = _tmp156 * _tmp170 * _tmp89;
  const Scalar _tmp172 = _tmp126 * _tmp28;
  const Scalar _tmp173 =
      (_tmp159 * (-_tmp128 + _tmp133 * _tmp153 - _tmp139 * _tmp172) - _tmp161 * _tmp171) /
      std::sqrt(Scalar(std::pow(_tmp161, Scalar(2)) * _tmp170 + 1));
  const Scalar _tmp174 = -_tmp104 * _tmp111 * _tmp125 - _tmp114 * _tmp141 -
                         _tmp117 * _tmp120 * _tmp125 + _tmp127 * _tmp41 - _tmp131 * _tmp132 +
                         _tmp160;
  const Scalar _tmp175 = _tmp105 * _tmp111 + _tmp118 * _tmp120 + _tmp155 + _tmp157;
  const Scalar _tmp176 = Scalar(1.0) / (_tmp175);
  const Scalar _tmp177 = std::asinh(_tmp174 * _tmp176);
  const Scalar _tmp178 = Scalar(1.0) * _tmp177;
  const Scalar _tmp179 = std::pow(_tmp175, Scalar(-2));
  const Scalar _tmp180 = _tmp179 * _tmp89;
  const Scalar _tmp181 = (_tmp174 * _tmp180 + _tmp176 * (-_tmp127 - _tmp132 * _tmp153 + _tmp172)) /
                         std::sqrt(Scalar(std::pow(_tmp174, Scalar(2)) * _tmp179 + 1));
  const Scalar _tmp182 = Scalar(9.6622558468725703) * _tmp175;
  const Scalar _tmp183 =
      -_tmp177 * _tmp182 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp49), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp52), Scalar(2))));
  const Scalar _tmp184 = Scalar(0.1034955) * _tmp176;
  const Scalar _tmp185 = _tmp183 * _tmp184;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp31 *
      (-_tmp32 * std::cosh(Scalar(1.0) * _tmp30) +
       _tmp32 *
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp30 * _tmp31 -
                Scalar(8.3885017487099702) *
                    std::sqrt(Scalar(
                        Scalar(0.090199313518583735) *
                            std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp29), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp19 - 1), Scalar(2)))))));
  _res(1, 0) = _tmp145 * (-Scalar(1.0) * _tmp154 * std::cosh(_tmp149) -
                          (-Scalar(0.1034955) * _tmp146 * _tmp152 +
                           _tmp147 * (-_tmp144 * _tmp150 - _tmp145 * _tmp154)) *
                              std::cosh(_tmp148)) +
               _tmp150 * (-std::sinh(_tmp148) - std::sinh(_tmp149));
  _res(2, 0) = _tmp163 * (-Scalar(1.0) * _tmp173 * std::cosh(_tmp167) -
                          (-Scalar(0.1034955) * _tmp164 * _tmp171 +
                           _tmp165 * (-_tmp162 * _tmp169 - _tmp163 * _tmp173)) *
                              std::cosh(_tmp166)) +
               _tmp169 * (-std::sinh(_tmp166) - std::sinh(_tmp167));
  _res(3, 0) = -_tmp168 * (-std::sinh(_tmp178) - std::sinh(_tmp185)) +
               _tmp182 * (-Scalar(1.0) * _tmp181 * std::cosh(_tmp178) -
                          (Scalar(0.1034955) * _tmp180 * _tmp183 +
                           _tmp184 * (_tmp168 * _tmp177 - _tmp181 * _tmp182)) *
                              std::cosh(_tmp185));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
