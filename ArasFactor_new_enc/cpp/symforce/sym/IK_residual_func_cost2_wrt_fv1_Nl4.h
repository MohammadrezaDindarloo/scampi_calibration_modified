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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl4
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 603

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (197)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6 +
                       Scalar(0.20999999999999999);
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
  const Scalar _tmp25 = 1 - 2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp27 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp28 = _tmp12 * _tmp9;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = -_tmp26 + _tmp30;
  const Scalar _tmp32 = _tmp24 + _tmp31;
  const Scalar _tmp33 = _tmp32 + position_vector(0, 0);
  const Scalar _tmp34 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp35 = _tmp33 + Scalar(1.9874742031097401);
  const Scalar _tmp36 = _tmp22 + Scalar(8.3196563720703107);
  const Scalar _tmp37 = std::pow(Scalar(std::pow(_tmp35, Scalar(2)) + std::pow(_tmp36, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = _tmp36 * _tmp37;
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp27 - Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp40 = -_tmp39;
  const Scalar _tmp41 =
      -Scalar(0.010999999999999999) * _tmp25 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp43 = _tmp41 - _tmp42;
  const Scalar _tmp44 = fh1 * (_tmp40 + _tmp43);
  const Scalar _tmp45 = -Scalar(5.1796800000000003) * _tmp14 - _tmp21 * fv1 - _tmp38 * _tmp44;
  const Scalar _tmp46 = _tmp20 + _tmp7;
  const Scalar _tmp47 = Scalar(1.0) * _tmp46;
  const Scalar _tmp48 = -_tmp47;
  const Scalar _tmp49 = _tmp16 + _tmp19;
  const Scalar _tmp50 = _tmp49 + _tmp8;
  const Scalar _tmp51 = Scalar(1.0) / (_tmp48 + _tmp50);
  const Scalar _tmp52 = _tmp23 + _tmp31;
  const Scalar _tmp53 = Scalar(1.0) * _tmp52;
  const Scalar _tmp54 = _tmp49 + _tmp7;
  const Scalar _tmp55 = _tmp48 + _tmp54;
  const Scalar _tmp56 = _tmp26 + _tmp30;
  const Scalar _tmp57 = _tmp24 + _tmp56;
  const Scalar _tmp58 = _tmp51 * (_tmp53 - _tmp57);
  const Scalar _tmp59 = _tmp55 * _tmp58;
  const Scalar _tmp60 = _tmp23 + _tmp56;
  const Scalar _tmp61 = Scalar(1.0) / (_tmp53 - _tmp59 - _tmp60);
  const Scalar _tmp62 = Scalar(1.0) * _tmp61;
  const Scalar _tmp63 = _tmp51 * (_tmp59 * _tmp62 + Scalar(1.0));
  const Scalar _tmp64 = _tmp58 * _tmp62;
  const Scalar _tmp65 = -Scalar(1.0) * _tmp63 + Scalar(1.0) * _tmp64;
  const Scalar _tmp66 = _tmp35 * _tmp37;
  const Scalar _tmp67 = Scalar(5.1796800000000003) * _tmp29 + _tmp32 * fv1 + _tmp44 * _tmp66;
  const Scalar _tmp68 = _tmp55 * _tmp62;
  const Scalar _tmp69 = Scalar(1.0) * _tmp51 * _tmp68 - Scalar(1.0) * _tmp62;
  const Scalar _tmp70 = _tmp39 + _tmp43;
  const Scalar _tmp71 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp72 = _tmp71 + Scalar(8.3885017487099702);
  const Scalar _tmp73 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp74 = _tmp73 + Scalar(-2.5193355532036801);
  const Scalar _tmp75 = std::pow(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp74, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp72 * _tmp75;
  const Scalar _tmp77 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp78 = _tmp77 + Scalar(-4.83288938413423);
  const Scalar _tmp79 = _tmp52 + position_vector(0, 0);
  const Scalar _tmp80 = _tmp79 + Scalar(1.7965602546229);
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp78 * _tmp81;
  const Scalar _tmp83 = _tmp41 + _tmp42;
  const Scalar _tmp84 = _tmp40 + _tmp83;
  const Scalar _tmp85 = _tmp74 * _tmp75;
  const Scalar _tmp86 = _tmp84 * _tmp85;
  const Scalar _tmp87 = _tmp70 * _tmp76 - _tmp82 * _tmp86;
  const Scalar _tmp88 = Scalar(1.0) / (-_tmp76 + _tmp82 * _tmp85);
  const Scalar _tmp89 = Scalar(1.0) * _tmp88;
  const Scalar _tmp90 = _tmp87 * _tmp89;
  const Scalar _tmp91 = -_tmp70 * _tmp85 + _tmp86;
  const Scalar _tmp92 = _tmp58 * _tmp90 - _tmp89 * _tmp91;
  const Scalar _tmp93 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp94 = _tmp93 + Scalar(-4.7744369927459998);
  const Scalar _tmp95 = _tmp60 + position_vector(0, 0);
  const Scalar _tmp96 = _tmp95 + Scalar(-2.7171519410699099);
  const Scalar _tmp97 = std::pow(Scalar(std::pow(_tmp94, Scalar(2)) + std::pow(_tmp96, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp98 = _tmp96 * _tmp97;
  const Scalar _tmp99 = _tmp84 * _tmp98;
  const Scalar _tmp100 = _tmp39 + _tmp83;
  const Scalar _tmp101 = _tmp94 * _tmp97;
  const Scalar _tmp102 = -_tmp101 + _tmp82 * _tmp98;
  const Scalar _tmp103 = _tmp102 * _tmp88;
  const Scalar _tmp104 = _tmp100 * _tmp101 - _tmp103 * _tmp87 - _tmp82 * _tmp99;
  const Scalar _tmp105 = -_tmp100 * _tmp98 - _tmp103 * _tmp91 - _tmp104 * _tmp58 + _tmp99;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 =
      std::sqrt(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp80, Scalar(2))));
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = _tmp107 * _tmp81;
  const Scalar _tmp110 = _tmp109 * (-_tmp108 * _tmp46 * _tmp80 + _tmp108 * _tmp52 * _tmp78);
  const Scalar _tmp111 = _tmp110 * _tmp85 + _tmp50 * _tmp85 - _tmp57 * _tmp76;
  const Scalar _tmp112 = -_tmp101 * _tmp60 - _tmp103 * _tmp111 + _tmp110 * _tmp98 + _tmp54 * _tmp98;
  const Scalar _tmp113 = _tmp106 * _tmp112;
  const Scalar _tmp114 = Scalar(1.0) / (_tmp112);
  const Scalar _tmp115 = _tmp105 * _tmp114;
  const Scalar _tmp116 = _tmp115 * (-_tmp111 * _tmp89 - _tmp113 * _tmp92);
  const Scalar _tmp117 = _tmp55 * _tmp61;
  const Scalar _tmp118 = _tmp116 + _tmp92;
  const Scalar _tmp119 = _tmp104 * _tmp106;
  const Scalar _tmp120 = _tmp116 * _tmp117 - _tmp118 * _tmp119 - _tmp90;
  const Scalar _tmp121 = Scalar(1.0) * _tmp51;
  const Scalar _tmp122 = Scalar(1.0) * fh1;
  const Scalar _tmp123 = Scalar(1.0) * _tmp114;
  const Scalar _tmp124 = -_tmp104 * _tmp123 + _tmp115 * _tmp68;
  const Scalar _tmp125 = _tmp115 * _tmp62;
  const Scalar _tmp126 = fh1 * (-_tmp21 * _tmp66 + _tmp32 * _tmp38);
  const Scalar _tmp127 = _tmp82 * _tmp88;
  const Scalar _tmp128 = _tmp127 * _tmp87 + _tmp82 * _tmp84;
  const Scalar _tmp129 = _tmp127 * _tmp91 - _tmp128 * _tmp58 - _tmp84;
  const Scalar _tmp130 = _tmp115 * (-_tmp110 + _tmp111 * _tmp127 - _tmp113 * _tmp129);
  const Scalar _tmp131 = _tmp129 + _tmp130;
  const Scalar _tmp132 = _tmp117 * _tmp130 - _tmp119 * _tmp131 + _tmp128;
  const Scalar _tmp133 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp134 = _tmp47 * _tmp58 + _tmp53;
  const Scalar _tmp135 = 0;
  const Scalar _tmp136 = _tmp134 * _tmp61;
  const Scalar _tmp137 = _tmp51 * (-_tmp119 * _tmp135 - _tmp136 * _tmp55 + _tmp48);
  const Scalar _tmp138 = -Scalar(1.0) * _tmp134 * _tmp62 - Scalar(1.0) * _tmp137 + Scalar(1.0);
  const Scalar _tmp139 = _tmp122 * _tmp38 * (_tmp116 * _tmp62 - _tmp120 * _tmp121) +
                         _tmp122 * _tmp66 * (-_tmp121 * _tmp132 + _tmp130 * _tmp62) +
                         Scalar(1.0) * _tmp126 * (-_tmp121 * _tmp124 + _tmp125) +
                         _tmp133 * _tmp138 + _tmp45 * _tmp65 + _tmp67 * _tmp69;
  const Scalar _tmp140 = _tmp106 * _tmp98;
  const Scalar _tmp141 = _tmp102 * _tmp106;
  const Scalar _tmp142 = -_tmp131 * _tmp141 - _tmp82;
  const Scalar _tmp143 = _tmp85 * _tmp88;
  const Scalar _tmp144 = _tmp109 * fh1;
  const Scalar _tmp145 = _tmp106 * _tmp135;
  const Scalar _tmp146 = _tmp135 * _tmp141;
  const Scalar _tmp147 = _tmp109 * (-_tmp143 * _tmp146 + _tmp145 * _tmp98);
  const Scalar _tmp148 = -_tmp118 * _tmp141 + Scalar(1.0);
  const Scalar _tmp149 = -_tmp109 * _tmp126 * (-_tmp103 * _tmp123 * _tmp85 + _tmp123 * _tmp98) -
                         _tmp133 * _tmp147 -
                         _tmp144 * _tmp38 * (_tmp118 * _tmp140 + _tmp143 * _tmp148) -
                         _tmp144 * _tmp66 * (_tmp131 * _tmp140 + _tmp142 * _tmp143 + Scalar(1.0));
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 = std::asinh(_tmp139 * _tmp150);
  const Scalar _tmp152 = Scalar(1.0) * _tmp151;
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp149;
  const Scalar _tmp154 =
      -_tmp151 * _tmp153 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp77), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp79 - 1), Scalar(2))));
  const Scalar _tmp155 = Scalar(0.1034955) * _tmp150;
  const Scalar _tmp156 = _tmp154 * _tmp155;
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp147;
  const Scalar _tmp158 = std::pow(_tmp149, Scalar(-2));
  const Scalar _tmp159 = _tmp147 * _tmp158;
  const Scalar _tmp160 = _tmp15 + _tmp19 + _tmp7;
  const Scalar _tmp161 =
      (-_tmp139 * _tmp159 + _tmp150 * (-_tmp138 + _tmp160 * _tmp65 + _tmp32 * _tmp69)) /
      std::sqrt(Scalar(std::pow(_tmp139, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp162 = _tmp51 * fh1;
  const Scalar _tmp163 = _tmp62 * _tmp67;
  const Scalar _tmp164 = _tmp51 * _tmp55;
  const Scalar _tmp165 = _tmp120 * _tmp162 * _tmp38 + _tmp124 * _tmp126 * _tmp51 +
                         _tmp132 * _tmp162 * _tmp66 + _tmp133 * _tmp137 - _tmp163 * _tmp164 +
                         _tmp45 * _tmp63;
  const Scalar _tmp166 = _tmp88 * fh1;
  const Scalar _tmp167 = _tmp123 * _tmp126;
  const Scalar _tmp168 = _tmp146 * _tmp88;
  const Scalar _tmp169 = -_tmp103 * _tmp167 - _tmp133 * _tmp168 + _tmp142 * _tmp166 * _tmp66 +
                         _tmp148 * _tmp166 * _tmp38;
  const Scalar _tmp170 = Scalar(1.0) / (_tmp169);
  const Scalar _tmp171 = std::asinh(_tmp165 * _tmp170);
  const Scalar _tmp172 = Scalar(9.6622558468725703) * _tmp169;
  const Scalar _tmp173 =
      -_tmp171 * _tmp172 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp73), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp71 - 1), Scalar(2))));
  const Scalar _tmp174 = Scalar(0.1034955) * _tmp170;
  const Scalar _tmp175 = _tmp173 * _tmp174;
  const Scalar _tmp176 = std::pow(_tmp169, Scalar(-2));
  const Scalar _tmp177 = _tmp168 * _tmp176;
  const Scalar _tmp178 = _tmp32 * _tmp62;
  const Scalar _tmp179 =
      (-_tmp165 * _tmp177 + _tmp170 * (-_tmp137 + _tmp160 * _tmp63 - _tmp164 * _tmp178)) /
      std::sqrt(Scalar(std::pow(_tmp165, Scalar(2)) * _tmp176 + 1));
  const Scalar _tmp180 = Scalar(9.6622558468725703) * _tmp168;
  const Scalar _tmp181 = Scalar(1.0) * _tmp171;
  const Scalar _tmp182 = _tmp61 * fh1;
  const Scalar _tmp183 = -_tmp116 * _tmp182 * _tmp38 - _tmp125 * _tmp126 -
                         _tmp130 * _tmp182 * _tmp66 + _tmp133 * _tmp136 + _tmp163 - _tmp45 * _tmp64;
  const Scalar _tmp184 = _tmp106 * fh1;
  const Scalar _tmp185 =
      _tmp118 * _tmp184 * _tmp38 + _tmp131 * _tmp184 * _tmp66 + _tmp133 * _tmp145 + _tmp167;
  const Scalar _tmp186 = Scalar(1.0) / (_tmp185);
  const Scalar _tmp187 = std::asinh(_tmp183 * _tmp186);
  const Scalar _tmp188 = Scalar(1.0) * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp185, Scalar(-2));
  const Scalar _tmp190 = _tmp145 * _tmp189;
  const Scalar _tmp191 = (_tmp183 * _tmp190 + _tmp186 * (-_tmp136 - _tmp160 * _tmp64 + _tmp178)) /
                         std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp192 = Scalar(9.6622558468725703) * _tmp185;
  const Scalar _tmp193 =
      -_tmp187 * _tmp192 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp93), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp95), Scalar(2))));
  const Scalar _tmp194 = Scalar(0.1034955) * _tmp186;
  const Scalar _tmp195 = _tmp193 * _tmp194;
  const Scalar _tmp196 = Scalar(9.6622558468725703) * _tmp145;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp34 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(
                   Scalar(0.1034955) * _tmp0 *
                   (-_tmp1 * _tmp34 -
                    Scalar(8.3196563720703107) *
                        std::sqrt(Scalar(
                            std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp22 - 1), Scalar(2)) +
                            Scalar(0.057067943527034905) *
                                std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp33 - 1),
                                         Scalar(2)))))));
  _res(1, 0) = _tmp153 * (-Scalar(1.0) * _tmp161 * std::cosh(_tmp152) -
                          (-Scalar(0.1034955) * _tmp154 * _tmp159 +
                           _tmp155 * (-_tmp151 * _tmp157 - _tmp153 * _tmp161)) *
                              std::cosh(_tmp156)) +
               _tmp157 * (-std::sinh(_tmp152) - std::sinh(_tmp156));
  _res(2, 0) = _tmp172 * (-Scalar(1.0) * _tmp179 * std::cosh(_tmp181) -
                          (-Scalar(0.1034955) * _tmp173 * _tmp177 +
                           _tmp174 * (-_tmp171 * _tmp180 - _tmp172 * _tmp179)) *
                              std::cosh(_tmp175)) +
               _tmp180 * (-std::sinh(_tmp175) - std::sinh(_tmp181));
  _res(3, 0) = _tmp192 * (-Scalar(1.0) * _tmp191 * std::cosh(_tmp188) -
                          (Scalar(0.1034955) * _tmp190 * _tmp193 +
                           _tmp194 * (_tmp187 * _tmp196 - _tmp191 * _tmp192)) *
                              std::cosh(_tmp195)) -
               _tmp196 * (-std::sinh(_tmp188) - std::sinh(_tmp195));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym