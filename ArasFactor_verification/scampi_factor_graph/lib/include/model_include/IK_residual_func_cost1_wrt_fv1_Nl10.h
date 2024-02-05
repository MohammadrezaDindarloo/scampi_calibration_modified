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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl10
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl10(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 608

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (189)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = _tmp3 * _tmp5;
  const Scalar _tmp10 = _tmp1 * _tmp6;
  const Scalar _tmp11 = -_tmp10 + _tmp9;
  const Scalar _tmp12 = Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -_tmp12;
  const Scalar _tmp14 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp15 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 - _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp8;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp25 = _tmp2 * _tmp6;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = _tmp23 + _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(0, 0);
  const Scalar _tmp31 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = Scalar(1.0) * _tmp0 /
                        std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp34 = -_tmp23 + _tmp27;
  const Scalar _tmp35 = _tmp20 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp37 = -_tmp8;
  const Scalar _tmp38 = _tmp13 + _tmp16;
  const Scalar _tmp39 = _tmp37 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp42 = _tmp17 + _tmp37;
  const Scalar _tmp43 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp44 = _tmp43 + Scalar(8.3196563720703107);
  const Scalar _tmp45 = _tmp21 + _tmp34;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 + Scalar(1.9874742031097401);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp44, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp44 * _tmp48;
  const Scalar _tmp50 = _tmp40 + Scalar(-4.83288938413423);
  const Scalar _tmp51 = _tmp36 + Scalar(1.7965602546229);
  const Scalar _tmp52 = Scalar(1.0) / (_tmp51);
  const Scalar _tmp53 = _tmp50 * _tmp52;
  const Scalar _tmp54 = _tmp47 * _tmp48;
  const Scalar _tmp55 = Scalar(1.0) / (-_tmp49 + _tmp53 * _tmp54);
  const Scalar _tmp56 = _tmp54 * _tmp55;
  const Scalar _tmp57 = Scalar(1.0) * _tmp35;
  const Scalar _tmp58 = Scalar(1.0) * _tmp39;
  const Scalar _tmp59 = -_tmp58;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp42 + _tmp59);
  const Scalar _tmp61 = _tmp60 * (-_tmp45 + _tmp57);
  const Scalar _tmp62 = _tmp57 + _tmp58 * _tmp61;
  const Scalar _tmp63 = 0;
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp65 = -Scalar(0.010999999999999999) * _tmp14 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp66 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp67 = _tmp65 - _tmp66;
  const Scalar _tmp68 = _tmp64 + _tmp67;
  const Scalar _tmp69 = _tmp38 + _tmp8;
  const Scalar _tmp70 = _tmp69 + position_vector(1, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(-4.7744369927459998);
  const Scalar _tmp72 = _tmp20 + _tmp28;
  const Scalar _tmp73 = _tmp72 + position_vector(0, 0);
  const Scalar _tmp74 = _tmp73 + Scalar(-2.7171519410699099);
  const Scalar _tmp75 = std::pow(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp74, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp74 * _tmp75;
  const Scalar _tmp77 = _tmp68 * _tmp76;
  const Scalar _tmp78 = _tmp65 + _tmp66;
  const Scalar _tmp79 = _tmp64 + _tmp78;
  const Scalar _tmp80 = _tmp71 * _tmp75;
  const Scalar _tmp81 = _tmp53 * _tmp76 - _tmp80;
  const Scalar _tmp82 = -_tmp64;
  const Scalar _tmp83 = _tmp67 + _tmp82;
  const Scalar _tmp84 = _tmp54 * _tmp68;
  const Scalar _tmp85 = _tmp55 * (-_tmp54 * _tmp83 + _tmp84);
  const Scalar _tmp86 = _tmp55 * (_tmp49 * _tmp83 - _tmp53 * _tmp84);
  const Scalar _tmp87 = -_tmp53 * _tmp77 + _tmp79 * _tmp80 - _tmp81 * _tmp86;
  const Scalar _tmp88 = -_tmp61 * _tmp87 - _tmp76 * _tmp79 + _tmp77 - _tmp81 * _tmp85;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = _tmp81 * _tmp89;
  const Scalar _tmp91 = _tmp63 * _tmp90;
  const Scalar _tmp92 = _tmp63 * _tmp89;
  const Scalar _tmp93 =
      std::sqrt(Scalar(std::pow(_tmp50, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp94 = _tmp52 * _tmp93;
  const Scalar _tmp95 = _tmp94 * (-_tmp56 * _tmp91 + _tmp76 * _tmp92);
  const Scalar _tmp96 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp97 = _tmp94 * (_tmp35 * _tmp50 * _tmp96 - _tmp39 * _tmp51 * _tmp96);
  const Scalar _tmp98 = _tmp53 * _tmp68 + _tmp53 * _tmp86;
  const Scalar _tmp99 = _tmp53 * _tmp85 - _tmp61 * _tmp98 - _tmp68;
  const Scalar _tmp100 = _tmp55 * (_tmp42 * _tmp54 - _tmp45 * _tmp49 + _tmp54 * _tmp97);
  const Scalar _tmp101 = -_tmp100 * _tmp81 + _tmp69 * _tmp76 - _tmp72 * _tmp80 + _tmp76 * _tmp97;
  const Scalar _tmp102 = _tmp101 * _tmp89;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp104 = _tmp103 * _tmp88;
  const Scalar _tmp105 = _tmp104 * (_tmp100 * _tmp53 - _tmp102 * _tmp99 - _tmp97);
  const Scalar _tmp106 = _tmp105 + _tmp99;
  const Scalar _tmp107 = _tmp76 * _tmp89;
  const Scalar _tmp108 = -_tmp106 * _tmp90 - _tmp53;
  const Scalar _tmp109 = _tmp30 + Scalar(-2.5193355532036801);
  const Scalar _tmp110 = _tmp19 + Scalar(8.3885017487099702);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp109, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp109 * _tmp111;
  const Scalar _tmp113 = _tmp112 * fh1;
  const Scalar _tmp114 = Scalar(1.0) * _tmp103;
  const Scalar _tmp115 = _tmp110 * _tmp111;
  const Scalar _tmp116 = fh1 * (-_tmp112 * _tmp18 + _tmp115 * _tmp29);
  const Scalar _tmp117 = Scalar(1.0) * _tmp86;
  const Scalar _tmp118 = _tmp117 * _tmp61 - Scalar(1.0) * _tmp85;
  const Scalar _tmp119 = _tmp104 * (-Scalar(1.0) * _tmp100 - _tmp102 * _tmp118);
  const Scalar _tmp120 = _tmp118 + _tmp119;
  const Scalar _tmp121 = -_tmp120 * _tmp90 + Scalar(1.0);
  const Scalar _tmp122 = _tmp115 * fh1;
  const Scalar _tmp123 = -_tmp113 * _tmp94 * (_tmp106 * _tmp107 + _tmp108 * _tmp56 + Scalar(1.0)) -
                         _tmp116 * _tmp94 * (-_tmp114 * _tmp56 * _tmp81 + _tmp114 * _tmp76) -
                         _tmp122 * _tmp94 * (_tmp107 * _tmp120 + _tmp121 * _tmp56) -
                         _tmp41 * _tmp95;
  const Scalar _tmp124 = Scalar(1.0) / (_tmp123);
  const Scalar _tmp125 = _tmp59 + _tmp69;
  const Scalar _tmp126 = _tmp125 * _tmp61;
  const Scalar _tmp127 = Scalar(1.0) / (-_tmp126 + _tmp57 - _tmp72);
  const Scalar _tmp128 = Scalar(1.0) * _tmp127;
  const Scalar _tmp129 = _tmp127 * _tmp62;
  const Scalar _tmp130 = _tmp87 * _tmp89;
  const Scalar _tmp131 = _tmp60 * (-_tmp125 * _tmp129 - _tmp130 * _tmp63 + _tmp59);
  const Scalar _tmp132 = -Scalar(1.0) * _tmp128 * _tmp62 - Scalar(1.0) * _tmp131 + Scalar(1.0);
  const Scalar _tmp133 = fh1 * (_tmp78 + _tmp82);
  const Scalar _tmp134 = -Scalar(3.29616) * _tmp11 - _tmp115 * _tmp133 - _tmp18 * fv1;
  const Scalar _tmp135 = _tmp128 * _tmp61;
  const Scalar _tmp136 = _tmp60 * (_tmp126 * _tmp128 + Scalar(1.0));
  const Scalar _tmp137 = Scalar(1.0) * _tmp135 - Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp125 * _tmp127;
  const Scalar _tmp139 = -_tmp117 + _tmp119 * _tmp138 - _tmp120 * _tmp130;
  const Scalar _tmp140 = Scalar(1.0) * _tmp60;
  const Scalar _tmp141 = _tmp105 * _tmp138 - _tmp106 * _tmp130 + _tmp98;
  const Scalar _tmp142 = _tmp112 * _tmp133 + Scalar(3.29616) * _tmp26 + _tmp29 * fv1;
  const Scalar _tmp143 = _tmp125 * _tmp60;
  const Scalar _tmp144 = Scalar(1.0) * _tmp128 * _tmp143 - Scalar(1.0) * _tmp128;
  const Scalar _tmp145 = _tmp104 * _tmp128;
  const Scalar _tmp146 = -_tmp114 * _tmp87 + _tmp125 * _tmp145;
  const Scalar _tmp147 = Scalar(1.0) * _tmp113 * (_tmp105 * _tmp128 - _tmp140 * _tmp141) +
                         Scalar(1.0) * _tmp116 * (-_tmp140 * _tmp146 + _tmp145) +
                         Scalar(1.0) * _tmp122 * (_tmp119 * _tmp128 - _tmp139 * _tmp140) +
                         _tmp132 * _tmp41 + _tmp134 * _tmp137 + _tmp142 * _tmp144;
  const Scalar _tmp148 = std::asinh(_tmp124 * _tmp147);
  const Scalar _tmp149 = Scalar(9.6622558468725703) * _tmp123;
  const Scalar _tmp150 =
      -_tmp148 * _tmp149 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp40), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp36 - 1), Scalar(2))));
  const Scalar _tmp151 = Scalar(0.1034955) * _tmp124;
  const Scalar _tmp152 = _tmp150 * _tmp151;
  const Scalar _tmp153 = Scalar(1.0) * _tmp148;
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp95;
  const Scalar _tmp155 = std::pow(_tmp123, Scalar(-2));
  const Scalar _tmp156 = _tmp155 * _tmp95;
  const Scalar _tmp157 = _tmp12 + _tmp16 + _tmp37;
  const Scalar _tmp158 =
      (_tmp124 * (-_tmp132 + _tmp137 * _tmp157 + _tmp144 * _tmp29) - _tmp147 * _tmp156) /
      std::sqrt(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp155 + 1));
  const Scalar _tmp159 = _tmp55 * _tmp91;
  const Scalar _tmp160 = _tmp114 * _tmp116;
  const Scalar _tmp161 = _tmp108 * _tmp113 * _tmp55 + _tmp121 * _tmp122 * _tmp55 -
                         _tmp159 * _tmp41 - _tmp160 * _tmp55 * _tmp81;
  const Scalar _tmp162 = Scalar(1.0) / (_tmp161);
  const Scalar _tmp163 = _tmp128 * _tmp142;
  const Scalar _tmp164 = _tmp113 * _tmp141 * _tmp60 + _tmp116 * _tmp146 * _tmp60 +
                         _tmp122 * _tmp139 * _tmp60 + _tmp131 * _tmp41 + _tmp134 * _tmp136 -
                         _tmp143 * _tmp163;
  const Scalar _tmp165 = std::asinh(_tmp162 * _tmp164);
  const Scalar _tmp166 = Scalar(1.0) * _tmp165;
  const Scalar _tmp167 = Scalar(9.6622558468725703) * _tmp161;
  const Scalar _tmp168 =
      -_tmp165 * _tmp167 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp43 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp46 - 1), Scalar(2))));
  const Scalar _tmp169 = Scalar(0.1034955) * _tmp162;
  const Scalar _tmp170 = _tmp168 * _tmp169;
  const Scalar _tmp171 = Scalar(9.6622558468725703) * _tmp159;
  const Scalar _tmp172 = std::pow(_tmp161, Scalar(-2));
  const Scalar _tmp173 = _tmp159 * _tmp172;
  const Scalar _tmp174 = _tmp128 * _tmp29;
  const Scalar _tmp175 =
      (_tmp162 * (-_tmp131 + _tmp136 * _tmp157 - _tmp143 * _tmp174) - _tmp164 * _tmp173) /
      std::sqrt(Scalar(std::pow(_tmp164, Scalar(2)) * _tmp172 + 1));
  const Scalar _tmp176 =
      _tmp106 * _tmp113 * _tmp89 + _tmp120 * _tmp122 * _tmp89 + _tmp160 + _tmp41 * _tmp92;
  const Scalar _tmp177 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp178 = _tmp177 * _tmp92;
  const Scalar _tmp179 = -_tmp105 * _tmp113 * _tmp127 - _tmp116 * _tmp145 -
                         _tmp119 * _tmp122 * _tmp127 + _tmp129 * _tmp41 - _tmp134 * _tmp135 +
                         _tmp163;
  const Scalar _tmp180 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp181 = std::asinh(_tmp179 * _tmp180);
  const Scalar _tmp182 = Scalar(1.0) * _tmp181;
  const Scalar _tmp183 = (_tmp178 * _tmp179 + _tmp180 * (-_tmp129 - _tmp135 * _tmp157 + _tmp174)) /
                         std::sqrt(Scalar(_tmp177 * std::pow(_tmp179, Scalar(2)) + 1));
  const Scalar _tmp184 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp185 =
      -_tmp181 * _tmp184 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp70), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp73), Scalar(2))));
  const Scalar _tmp186 = Scalar(9.6622558468725703) * _tmp92;
  const Scalar _tmp187 = Scalar(0.1034955) * _tmp180;
  const Scalar _tmp188 = _tmp185 * _tmp187;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 *
      (_tmp33 * std::sinh(Scalar(1.0) * _tmp31) +
       _tmp33 *
           std::sinh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp31 * _tmp32 -
                Scalar(8.3885017487099702) *
                    std::sqrt(Scalar(
                        Scalar(0.090199313518583735) *
                            std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp30), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp19 - 1), Scalar(2)))))));
  _res(1, 0) =
      -_tmp149 *
          (-Scalar(0.86627065637365697) * _tmp156 + Scalar(1.0) * _tmp158 * std::sinh(_tmp153) -
           (-Scalar(0.1034955) * _tmp150 * _tmp156 +
            _tmp151 * (-_tmp148 * _tmp154 - _tmp149 * _tmp158)) *
               std::sinh(_tmp152)) -
      _tmp154 * (Scalar(0.86627065637365697) * _tmp124 - std::cosh(_tmp152) + std::cosh(_tmp153));
  _res(2, 0) =
      -_tmp167 *
          (-Scalar(0.87679799777269396) * _tmp173 + Scalar(1.0) * _tmp175 * std::sinh(_tmp166) -
           (-Scalar(0.1034955) * _tmp168 * _tmp173 +
            _tmp169 * (-_tmp165 * _tmp171 - _tmp167 * _tmp175)) *
               std::sinh(_tmp170)) -
      _tmp171 * (Scalar(0.87679799777269396) * _tmp162 + std::cosh(_tmp166) - std::cosh(_tmp170));
  _res(3, 0) =
      -_tmp184 *
          (Scalar(0.86564762886483004) * _tmp178 + Scalar(1.0) * _tmp183 * std::sinh(_tmp182) -
           (Scalar(0.1034955) * _tmp178 * _tmp185 +
            _tmp187 * (_tmp181 * _tmp186 - _tmp183 * _tmp184)) *
               std::sinh(_tmp188)) +
      _tmp186 * (Scalar(0.86564762886483004) * _tmp180 + std::cosh(_tmp182) - std::cosh(_tmp188));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
