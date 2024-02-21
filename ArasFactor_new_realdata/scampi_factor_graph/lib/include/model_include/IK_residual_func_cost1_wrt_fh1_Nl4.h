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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl4
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 655

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (211)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * fv1;
  const Scalar _tmp2 = std::asinh(_tmp1);
  const Scalar _tmp3 = Scalar(1.0) * _tmp2;
  const Scalar _tmp4 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp8 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                        _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp12 = 2 * _tmp11;
  const Scalar _tmp13 = _tmp12 * _tmp7;
  const Scalar _tmp14 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp15 = _tmp14 * _tmp5;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp12 * _tmp5;
  const Scalar _tmp18 = _tmp14 * _tmp7;
  const Scalar _tmp19 = _tmp17 - _tmp18;
  const Scalar _tmp20 = -Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp21 = -_tmp16 + _tmp20;
  const Scalar _tmp22 = _tmp10 + _tmp21;
  const Scalar _tmp23 = _tmp22 + position_vector(1, 0);
  const Scalar _tmp24 = -2 * std::pow(_tmp11, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp6 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp26 = -_tmp25;
  const Scalar _tmp27 = 2 * _tmp5 * _tmp7;
  const Scalar _tmp28 = _tmp11 * _tmp14;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp32 = _tmp30 - _tmp31;
  const Scalar _tmp33 = _tmp26 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp35 = Scalar(9.6622558468725703) * _tmp2;
  const Scalar _tmp36 =
      -Scalar(0.1034955) * _tmp35 * fh1 -
      Scalar(0.86104699605560286) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp23 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp34 - 1), Scalar(2))));
  const Scalar _tmp37 = _tmp0 * _tmp36;
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp4 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp34 + Scalar(1.9874742031097401);
  const Scalar _tmp40 = _tmp23 + Scalar(8.3196563720703107);
  const Scalar _tmp41 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp40, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp40 * _tmp41;
  const Scalar _tmp43 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp44 = -_tmp43;
  const Scalar _tmp45 =
      -Scalar(0.010999999999999999) * _tmp24 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp46 = Scalar(0.20999999999999999) * _tmp27 - Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp47 = _tmp45 - _tmp46;
  const Scalar _tmp48 = _tmp44 + _tmp47;
  const Scalar _tmp49 = _tmp48 * fh1;
  const Scalar _tmp50 = -Scalar(5.1796800000000003) * _tmp19 - _tmp22 * fv1 - _tmp42 * _tmp49;
  const Scalar _tmp51 = _tmp30 + _tmp31;
  const Scalar _tmp52 = _tmp26 + _tmp51;
  const Scalar _tmp53 = Scalar(1.0) * _tmp52;
  const Scalar _tmp54 = _tmp21 + _tmp9;
  const Scalar _tmp55 = Scalar(1.0) * _tmp54;
  const Scalar _tmp56 = -_tmp55;
  const Scalar _tmp57 = _tmp16 + _tmp20;
  const Scalar _tmp58 = _tmp57 + _tmp9;
  const Scalar _tmp59 = _tmp56 + _tmp58;
  const Scalar _tmp60 = _tmp10 + _tmp57;
  const Scalar _tmp61 = Scalar(1.0) / (_tmp56 + _tmp60);
  const Scalar _tmp62 = _tmp25 + _tmp32;
  const Scalar _tmp63 = _tmp53 - _tmp62;
  const Scalar _tmp64 = _tmp61 * _tmp63;
  const Scalar _tmp65 = _tmp59 * _tmp64;
  const Scalar _tmp66 = _tmp25 + _tmp51;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp53 - _tmp65 - _tmp66);
  const Scalar _tmp68 = Scalar(1.0) * _tmp67;
  const Scalar _tmp69 = _tmp65 * _tmp68 + Scalar(1.0);
  const Scalar _tmp70 = Scalar(1.0) * _tmp61;
  const Scalar _tmp71 = _tmp64 * _tmp68;
  const Scalar _tmp72 = -Scalar(1.0) * _tmp69 * _tmp70 + Scalar(1.0) * _tmp71;
  const Scalar _tmp73 = _tmp39 * _tmp41;
  const Scalar _tmp74 = Scalar(5.1796800000000003) * _tmp29 + _tmp33 * fv1 + _tmp49 * _tmp73;
  const Scalar _tmp75 = _tmp59 * _tmp68;
  const Scalar _tmp76 = Scalar(1.0) * _tmp61 * _tmp75 - Scalar(1.0) * _tmp68;
  const Scalar _tmp77 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp78 = _tmp77 + Scalar(-4.83288938413423);
  const Scalar _tmp79 = _tmp52 + position_vector(0, 0);
  const Scalar _tmp80 = _tmp79 + Scalar(1.7965602546229);
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp78 * _tmp81;
  const Scalar _tmp83 = _tmp60 + position_vector(1, 0);
  const Scalar _tmp84 = _tmp83 + Scalar(8.3885017487099702);
  const Scalar _tmp85 = _tmp62 + position_vector(0, 0);
  const Scalar _tmp86 = _tmp85 + Scalar(-2.5193355532036801);
  const Scalar _tmp87 = std::pow(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp86, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp88 = _tmp86 * _tmp87;
  const Scalar _tmp89 = _tmp84 * _tmp87;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp82 * _tmp88 - _tmp89);
  const Scalar _tmp91 = _tmp45 + _tmp46;
  const Scalar _tmp92 = _tmp44 + _tmp91;
  const Scalar _tmp93 = _tmp43 + _tmp47;
  const Scalar _tmp94 = _tmp88 * _tmp93;
  const Scalar _tmp95 = -_tmp82 * _tmp94 + _tmp89 * _tmp92;
  const Scalar _tmp96 = _tmp90 * (-_tmp88 * _tmp92 + _tmp94);
  const Scalar _tmp97 = _tmp63 * _tmp70 * _tmp90 * _tmp95 - Scalar(1.0) * _tmp96;
  const Scalar _tmp98 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp99 = _tmp98 + Scalar(-4.7744369927459998);
  const Scalar _tmp100 = _tmp66 + position_vector(0, 0);
  const Scalar _tmp101 = _tmp100 + Scalar(-2.7171519410699099);
  const Scalar _tmp102 =
      std::pow(Scalar(std::pow(_tmp101, Scalar(2)) + std::pow(_tmp99, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp103 = _tmp101 * _tmp102;
  const Scalar _tmp104 = _tmp103 * _tmp93;
  const Scalar _tmp105 = _tmp43 + _tmp91;
  const Scalar _tmp106 = _tmp102 * _tmp99;
  const Scalar _tmp107 = _tmp103 * _tmp82 - _tmp106;
  const Scalar _tmp108 = _tmp107 * _tmp90;
  const Scalar _tmp109 = -_tmp104 * _tmp82 + _tmp105 * _tmp106 - _tmp108 * _tmp95;
  const Scalar _tmp110 = -_tmp103 * _tmp105 + _tmp104 - _tmp107 * _tmp96 - _tmp109 * _tmp64;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp112 =
      std::sqrt(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp80, Scalar(2))));
  const Scalar _tmp113 = Scalar(1.0) / (_tmp112);
  const Scalar _tmp114 = _tmp112 * _tmp81;
  const Scalar _tmp115 = _tmp114 * (_tmp113 * _tmp52 * _tmp78 - _tmp113 * _tmp54 * _tmp80);
  const Scalar _tmp116 = _tmp115 * _tmp88 + _tmp60 * _tmp88 - _tmp62 * _tmp89;
  const Scalar _tmp117 =
      _tmp103 * _tmp115 + _tmp103 * _tmp58 - _tmp106 * _tmp66 - _tmp108 * _tmp116;
  const Scalar _tmp118 = _tmp111 * _tmp117;
  const Scalar _tmp119 = Scalar(1.0) * _tmp90;
  const Scalar _tmp120 = Scalar(1.0) / (_tmp117);
  const Scalar _tmp121 = _tmp110 * _tmp120;
  const Scalar _tmp122 = _tmp121 * (-_tmp116 * _tmp119 - _tmp118 * _tmp97);
  const Scalar _tmp123 = _tmp59 * _tmp67;
  const Scalar _tmp124 = _tmp111 * (_tmp122 + _tmp97);
  const Scalar _tmp125 = -_tmp109 * _tmp124 - _tmp119 * _tmp95 + _tmp122 * _tmp123;
  const Scalar _tmp126 = Scalar(1.0) * _tmp42 * (_tmp122 * _tmp68 - _tmp125 * _tmp70);
  const Scalar _tmp127 = Scalar(1.0) * _tmp120;
  const Scalar _tmp128 = -_tmp109 * _tmp127 + _tmp121 * _tmp75;
  const Scalar _tmp129 = _tmp121 * _tmp68;
  const Scalar _tmp130 = -_tmp22 * _tmp73 + _tmp33 * _tmp42;
  const Scalar _tmp131 = Scalar(1.0) * _tmp130;
  const Scalar _tmp132 = _tmp131 * (-_tmp128 * _tmp70 + _tmp129);
  const Scalar _tmp133 = _tmp82 * _tmp90;
  const Scalar _tmp134 = _tmp133 * _tmp95 + _tmp82 * _tmp93;
  const Scalar _tmp135 = -_tmp134 * _tmp64 + _tmp82 * _tmp96 - _tmp93;
  const Scalar _tmp136 = _tmp121 * (-_tmp115 + _tmp116 * _tmp133 - _tmp118 * _tmp135);
  const Scalar _tmp137 = _tmp111 * (_tmp135 + _tmp136);
  const Scalar _tmp138 = -_tmp109 * _tmp137 + _tmp123 * _tmp136 + _tmp134;
  const Scalar _tmp139 = Scalar(1.0) * _tmp73 * (_tmp136 * _tmp68 - _tmp138 * _tmp70);
  const Scalar _tmp140 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp141 = _tmp53 + _tmp55 * _tmp64;
  const Scalar _tmp142 = 0;
  const Scalar _tmp143 = _tmp141 * _tmp67;
  const Scalar _tmp144 = -_tmp109 * _tmp142 - _tmp143 * _tmp59 + _tmp56;
  const Scalar _tmp145 =
      _tmp126 * fh1 + _tmp132 * fh1 + _tmp139 * fh1 +
      Scalar(1.0) * _tmp140 * (-_tmp141 * _tmp68 - _tmp144 * _tmp70 + Scalar(1.0)) +
      _tmp50 * _tmp72 + _tmp74 * _tmp76;
  const Scalar _tmp146 = _tmp90 * (-_tmp107 * _tmp137 - _tmp82);
  const Scalar _tmp147 = _tmp114 * _tmp73 * (_tmp103 * _tmp137 + _tmp146 * _tmp88 + Scalar(1.0));
  const Scalar _tmp148 = _tmp108 * _tmp88;
  const Scalar _tmp149 = _tmp114 * _tmp130 * (_tmp103 * _tmp127 - _tmp127 * _tmp148);
  const Scalar _tmp150 = _tmp90 * (-_tmp107 * _tmp124 + Scalar(1.0));
  const Scalar _tmp151 = _tmp114 * _tmp42 * (_tmp103 * _tmp124 + _tmp150 * _tmp88);
  const Scalar _tmp152 = -_tmp114 * _tmp140 * (_tmp103 * _tmp142 - _tmp142 * _tmp148) -
                         _tmp147 * fh1 - _tmp149 * fh1 - _tmp151 * fh1;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = std::asinh(_tmp145 * _tmp153);
  const Scalar _tmp155 = Scalar(1.0) * _tmp154;
  const Scalar _tmp156 = std::pow(_tmp152, Scalar(-2));
  const Scalar _tmp157 = -_tmp147 - _tmp149 - _tmp151;
  const Scalar _tmp158 = _tmp156 * _tmp157;
  const Scalar _tmp159 = _tmp48 * _tmp73;
  const Scalar _tmp160 = _tmp42 * _tmp48;
  const Scalar _tmp161 = (-_tmp145 * _tmp158 + _tmp153 * (_tmp126 + _tmp132 + _tmp139 +
                                                          _tmp159 * _tmp76 - _tmp160 * _tmp72)) /
                         std::sqrt(Scalar(std::pow(_tmp145, Scalar(2)) * _tmp156 + 1));
  const Scalar _tmp162 = Scalar(9.6622558468725703) * _tmp152;
  const Scalar _tmp163 =
      -_tmp154 * _tmp162 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp77), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp79 - 1), Scalar(2))));
  const Scalar _tmp164 = Scalar(9.6622558468725703) * _tmp157;
  const Scalar _tmp165 = Scalar(0.1034955) * _tmp153;
  const Scalar _tmp166 = _tmp163 * _tmp165;
  const Scalar _tmp167 = _tmp128 * _tmp130 * _tmp61;
  const Scalar _tmp168 = _tmp125 * _tmp42 * _tmp61;
  const Scalar _tmp169 = _tmp61 * _tmp73;
  const Scalar _tmp170 = _tmp138 * _tmp169;
  const Scalar _tmp171 = _tmp61 * _tmp69;
  const Scalar _tmp172 = _tmp68 * _tmp74;
  const Scalar _tmp173 = _tmp140 * _tmp144 * _tmp61 + _tmp167 * fh1 + _tmp168 * fh1 +
                         _tmp170 * fh1 + _tmp171 * _tmp50 - _tmp172 * _tmp59 * _tmp61;
  const Scalar _tmp174 = _tmp146 * _tmp73;
  const Scalar _tmp175 = _tmp120 * _tmp131;
  const Scalar _tmp176 = _tmp175 * fh1;
  const Scalar _tmp177 = _tmp140 * _tmp142;
  const Scalar _tmp178 = _tmp150 * _tmp42;
  const Scalar _tmp179 = -_tmp108 * _tmp176 - _tmp108 * _tmp177 + _tmp174 * fh1 + _tmp178 * fh1;
  const Scalar _tmp180 = Scalar(1.0) / (_tmp179);
  const Scalar _tmp181 = std::asinh(_tmp173 * _tmp180);
  const Scalar _tmp182 = Scalar(1.0) * _tmp181;
  const Scalar _tmp183 = std::pow(_tmp179, Scalar(-2));
  const Scalar _tmp184 = -_tmp108 * _tmp175 + _tmp174 + _tmp178;
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = (-_tmp173 * _tmp185 + _tmp180 * (-_tmp160 * _tmp171 + _tmp167 + _tmp168 -
                                                          _tmp169 * _tmp48 * _tmp75 + _tmp170)) /
                         std::sqrt(Scalar(std::pow(_tmp173, Scalar(2)) * _tmp183 + 1));
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp179;
  const Scalar _tmp188 =
      -_tmp181 * _tmp187 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp85), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp83 - 1), Scalar(2))));
  const Scalar _tmp189 = Scalar(0.1034955) * _tmp180;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 = Scalar(9.6622558468725703) * _tmp184;
  const Scalar _tmp192 = _tmp124 * _tmp42;
  const Scalar _tmp193 = _tmp137 * _tmp73;
  const Scalar _tmp194 = _tmp176 + _tmp177 + _tmp192 * fh1 + _tmp193 * fh1;
  const Scalar _tmp195 = std::pow(_tmp194, Scalar(-2));
  const Scalar _tmp196 = _tmp175 + _tmp192 + _tmp193;
  const Scalar _tmp197 = _tmp195 * _tmp196;
  const Scalar _tmp198 = _tmp129 * _tmp130;
  const Scalar _tmp199 = _tmp136 * _tmp67 * _tmp73;
  const Scalar _tmp200 = _tmp122 * _tmp42 * _tmp67;
  const Scalar _tmp201 =
      _tmp140 * _tmp143 + _tmp172 - _tmp198 * fh1 - _tmp199 * fh1 - _tmp200 * fh1 - _tmp50 * _tmp71;
  const Scalar _tmp202 = Scalar(1.0) / (_tmp194);
  const Scalar _tmp203 = std::asinh(_tmp201 * _tmp202);
  const Scalar _tmp204 = Scalar(9.6622558468725703) * _tmp194;
  const Scalar _tmp205 =
      -_tmp203 * _tmp204 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp100), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp98), Scalar(2))));
  const Scalar _tmp206 = Scalar(0.1034955) * _tmp202;
  const Scalar _tmp207 = _tmp205 * _tmp206;
  const Scalar _tmp208 = (-_tmp197 * _tmp201 + _tmp202 * (_tmp159 * _tmp68 + _tmp160 * _tmp71 -
                                                          _tmp198 - _tmp199 - _tmp200)) /
                         std::sqrt(Scalar(_tmp195 * std::pow(_tmp201, Scalar(2)) + 1));
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp196;
  const Scalar _tmp210 = Scalar(1.0) * _tmp203;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(8.4718465805053746) * _tmp0 -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp38 * _tmp4 * fv1 * std::sinh(_tmp3) -
           Scalar(0.87679799777269396) * _tmp4 -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp1 * _tmp38 - _tmp35) -
            _tmp36 * _tmp4) *
               std::sinh(_tmp37)) -
      Scalar(9.6622558468725703) * std::cosh(_tmp3) +
      Scalar(9.6622558468725703) * std::cosh(_tmp37);
  _res(1, 0) =
      -_tmp162 *
          (-Scalar(0.86627065637365697) * _tmp158 + Scalar(1.0) * _tmp161 * std::sinh(_tmp155) -
           (-Scalar(0.1034955) * _tmp158 * _tmp163 +
            _tmp165 * (-_tmp154 * _tmp164 - _tmp161 * _tmp162)) *
               std::sinh(_tmp166)) -
      _tmp164 * (Scalar(0.86627065637365697) * _tmp153 + std::cosh(_tmp155) - std::cosh(_tmp166));
  _res(2, 0) =
      -_tmp187 *
          (-Scalar(0.876505537412406) * _tmp185 + Scalar(1.0) * _tmp186 * std::sinh(_tmp182) -
           (-Scalar(0.1034955) * _tmp185 * _tmp188 +
            _tmp189 * (-_tmp181 * _tmp191 - _tmp186 * _tmp187)) *
               std::sinh(_tmp190)) -
      _tmp191 * (Scalar(0.876505537412406) * _tmp180 + std::cosh(_tmp182) - std::cosh(_tmp190));
  _res(3, 0) =
      -_tmp204 *
          (-Scalar(0.86564762886483004) * _tmp197 + Scalar(1.0) * _tmp208 * std::sinh(_tmp210) -
           (-Scalar(0.1034955) * _tmp197 * _tmp205 +
            _tmp206 * (-_tmp203 * _tmp209 - _tmp204 * _tmp208)) *
               std::sinh(_tmp207)) -
      _tmp209 * (Scalar(0.86564762886483004) * _tmp202 - std::cosh(_tmp207) + std::cosh(_tmp210));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym