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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl5
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 639

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (216)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp1 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp3 * _tmp9;
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp12 = 2 * _tmp3;
  const Scalar _tmp13 = _tmp12 * _tmp7;
  const Scalar _tmp14 = _tmp1 * _tmp9;
  const Scalar _tmp15 = _tmp13 - _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = -_tmp11 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp1 * _tmp12;
  const Scalar _tmp24 = _tmp7 * _tmp9;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = _tmp22 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(0, 0);
  const Scalar _tmp31 = _tmp0 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * _tmp32;
  const Scalar _tmp34 =
      -Scalar(0.1034955) * _tmp33 * fh1 -
      Scalar(12.936937500000001) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp19 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp30 - 1), Scalar(2))));
  const Scalar _tmp35 = _tmp0 * _tmp34;
  const Scalar _tmp36 = Scalar(1.0) * _tmp32;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp19 + Scalar(110.0);
  const Scalar _tmp40 = _tmp30 + Scalar(125.0);
  const Scalar _tmp41 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp40, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp39 * _tmp41;
  const Scalar _tmp43 = _tmp40 * _tmp41;
  const Scalar _tmp44 = -_tmp18 * _tmp43 + _tmp29 * _tmp42;
  const Scalar _tmp45 = _tmp11 + _tmp16;
  const Scalar _tmp46 = _tmp45 + _tmp6;
  const Scalar _tmp47 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp48 = _tmp47 + Scalar(110.0);
  const Scalar _tmp49 = _tmp21 + _tmp28;
  const Scalar _tmp50 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 + Scalar(-125.0);
  const Scalar _tmp52 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp51, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 = _tmp17 + _tmp5;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 + Scalar(-110.0);
  const Scalar _tmp57 = _tmp26 + _tmp27;
  const Scalar _tmp58 = _tmp22 + _tmp57;
  const Scalar _tmp59 = _tmp58 + position_vector(0, 0);
  const Scalar _tmp60 = _tmp59 + Scalar(125.0);
  const Scalar _tmp61 =
      std::sqrt(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp60, Scalar(2))));
  const Scalar _tmp62 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp63 = Scalar(1.0) / (_tmp60);
  const Scalar _tmp64 = _tmp61 * _tmp63;
  const Scalar _tmp65 = _tmp64 * (-_tmp54 * _tmp60 * _tmp62 + _tmp56 * _tmp58 * _tmp62);
  const Scalar _tmp66 = _tmp48 * _tmp52;
  const Scalar _tmp67 = _tmp45 + _tmp5;
  const Scalar _tmp68 = _tmp67 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 + Scalar(-110.0);
  const Scalar _tmp70 = _tmp21 + _tmp57;
  const Scalar _tmp71 = _tmp70 + position_vector(0, 0);
  const Scalar _tmp72 = _tmp71 + Scalar(-125.0);
  const Scalar _tmp73 = std::pow(Scalar(std::pow(_tmp69, Scalar(2)) + std::pow(_tmp72, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp74 = _tmp72 * _tmp73;
  const Scalar _tmp75 = _tmp69 * _tmp73;
  const Scalar _tmp76 = _tmp65 * _tmp74 + _tmp67 * _tmp74 - _tmp70 * _tmp75;
  const Scalar _tmp77 = _tmp56 * _tmp63;
  const Scalar _tmp78 = _tmp53 * _tmp77 - _tmp66;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp74 * _tmp77 - _tmp75);
  const Scalar _tmp80 = _tmp78 * _tmp79;
  const Scalar _tmp81 = _tmp46 * _tmp53 - _tmp49 * _tmp66 + _tmp53 * _tmp65 - _tmp76 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp82;
  const Scalar _tmp84 = _tmp74 * _tmp80;
  const Scalar _tmp85 = _tmp44 * _tmp64 * (_tmp53 * _tmp83 - _tmp83 * _tmp84);
  const Scalar _tmp86 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp87 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp88 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp89 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp90 = _tmp88 - _tmp89;
  const Scalar _tmp91 = _tmp87 + _tmp90;
  const Scalar _tmp92 = -_tmp87;
  const Scalar _tmp93 = _tmp88 + _tmp89;
  const Scalar _tmp94 = _tmp92 + _tmp93;
  const Scalar _tmp95 = _tmp53 * _tmp94;
  const Scalar _tmp96 = _tmp74 * _tmp94;
  const Scalar _tmp97 = _tmp87 + _tmp93;
  const Scalar _tmp98 = _tmp75 * _tmp97 - _tmp77 * _tmp96;
  const Scalar _tmp99 = _tmp66 * _tmp91 - _tmp77 * _tmp95 - _tmp80 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp54;
  const Scalar _tmp101 = -_tmp100;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101 + _tmp67);
  const Scalar _tmp103 = Scalar(1.0) * _tmp58;
  const Scalar _tmp104 = _tmp102 * (_tmp103 - _tmp70);
  const Scalar _tmp105 = -_tmp74 * _tmp97 + _tmp96;
  const Scalar _tmp106 = -_tmp104 * _tmp99 - _tmp105 * _tmp80 - _tmp53 * _tmp91 + _tmp95;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp108 = _tmp100 * _tmp104 + _tmp103;
  const Scalar _tmp109 = 0;
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp77 * _tmp79;
  const Scalar _tmp112 = _tmp111 * _tmp98 + _tmp77 * _tmp94;
  const Scalar _tmp113 = -_tmp104 * _tmp112 + _tmp105 * _tmp111 - _tmp94;
  const Scalar _tmp114 = _tmp107 * _tmp81;
  const Scalar _tmp115 = _tmp106 * _tmp82;
  const Scalar _tmp116 = _tmp115 * (_tmp111 * _tmp76 - _tmp113 * _tmp114 - _tmp65);
  const Scalar _tmp117 = _tmp113 + _tmp116;
  const Scalar _tmp118 = _tmp107 * _tmp117;
  const Scalar _tmp119 = _tmp107 * _tmp78;
  const Scalar _tmp120 = _tmp79 * (-_tmp117 * _tmp119 - _tmp77);
  const Scalar _tmp121 = _tmp43 * _tmp64 * (_tmp118 * _tmp53 + _tmp120 * _tmp74 + Scalar(1.0));
  const Scalar _tmp122 = Scalar(1.0) * _tmp79;
  const Scalar _tmp123 = _tmp122 * _tmp98;
  const Scalar _tmp124 = _tmp104 * _tmp123 - _tmp105 * _tmp122;
  const Scalar _tmp125 = _tmp115 * (-_tmp114 * _tmp124 - _tmp122 * _tmp76);
  const Scalar _tmp126 = _tmp124 + _tmp125;
  const Scalar _tmp127 = _tmp107 * _tmp126;
  const Scalar _tmp128 = _tmp79 * (-_tmp119 * _tmp126 + Scalar(1.0));
  const Scalar _tmp129 = _tmp42 * _tmp64 * (_tmp127 * _tmp53 + _tmp128 * _tmp74);
  const Scalar _tmp130 = -_tmp121 * fh1 - _tmp129 * fh1 -
                         _tmp64 * _tmp86 * (_tmp110 * _tmp53 - _tmp110 * _tmp84) - _tmp85 * fh1;
  const Scalar _tmp131 = Scalar(1.0) / (_tmp130);
  const Scalar _tmp132 = _tmp101 + _tmp46;
  const Scalar _tmp133 = _tmp104 * _tmp132;
  const Scalar _tmp134 = Scalar(1.0) / (_tmp103 - _tmp133 - _tmp49);
  const Scalar _tmp135 = Scalar(1.0) * _tmp134;
  const Scalar _tmp136 = _tmp107 * _tmp99;
  const Scalar _tmp137 = _tmp108 * _tmp134;
  const Scalar _tmp138 = _tmp101 - _tmp109 * _tmp136 - _tmp132 * _tmp137;
  const Scalar _tmp139 = Scalar(1.0) * _tmp102;
  const Scalar _tmp140 = _tmp132 * _tmp134;
  const Scalar _tmp141 = -_tmp123 + _tmp125 * _tmp140 - _tmp126 * _tmp136;
  const Scalar _tmp142 = Scalar(1.0) * _tmp42 * (_tmp125 * _tmp135 - _tmp139 * _tmp141);
  const Scalar _tmp143 = _tmp90 + _tmp92;
  const Scalar _tmp144 = _tmp143 * fh1;
  const Scalar _tmp145 = -_tmp144 * _tmp42 - Scalar(2.3544) * _tmp15 - _tmp18 * fv1;
  const Scalar _tmp146 = _tmp133 * _tmp135 + Scalar(1.0);
  const Scalar _tmp147 = _tmp104 * _tmp135;
  const Scalar _tmp148 = -Scalar(1.0) * _tmp139 * _tmp146 + Scalar(1.0) * _tmp147;
  const Scalar _tmp149 = _tmp144 * _tmp43 + Scalar(2.3544) * _tmp25 + _tmp29 * fv1;
  const Scalar _tmp150 = _tmp102 * _tmp132;
  const Scalar _tmp151 = _tmp135 * _tmp150;
  const Scalar _tmp152 = -Scalar(1.0) * _tmp135 + Scalar(1.0) * _tmp151;
  const Scalar _tmp153 = _tmp115 * _tmp135;
  const Scalar _tmp154 = _tmp132 * _tmp153 - _tmp83 * _tmp99;
  const Scalar _tmp155 = Scalar(1.0) * _tmp44;
  const Scalar _tmp156 = _tmp155 * (-_tmp139 * _tmp154 + _tmp153);
  const Scalar _tmp157 = _tmp112 + _tmp116 * _tmp140 - _tmp117 * _tmp136;
  const Scalar _tmp158 = Scalar(1.0) * _tmp43 * (_tmp116 * _tmp135 - _tmp139 * _tmp157);
  const Scalar _tmp159 =
      _tmp142 * fh1 + _tmp145 * _tmp148 + _tmp149 * _tmp152 + _tmp156 * fh1 + _tmp158 * fh1 +
      Scalar(1.0) * _tmp86 * (-_tmp108 * _tmp135 - _tmp138 * _tmp139 + Scalar(1.0));
  const Scalar _tmp160 = std::asinh(_tmp131 * _tmp159);
  const Scalar _tmp161 = Scalar(1.0) * _tmp160;
  const Scalar _tmp162 = Scalar(9.6622558468725703) * _tmp130;
  const Scalar _tmp163 =
      -_tmp160 * _tmp162 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp55), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp59 - 1), Scalar(2))));
  const Scalar _tmp164 = Scalar(0.1034955) * _tmp131;
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = -_tmp121 - _tmp129 - _tmp85;
  const Scalar _tmp167 = Scalar(9.6622558468725703) * _tmp166;
  const Scalar _tmp168 = std::pow(_tmp130, Scalar(-2));
  const Scalar _tmp169 = _tmp143 * _tmp43;
  const Scalar _tmp170 = _tmp143 * _tmp42;
  const Scalar _tmp171 = _tmp166 * _tmp168;
  const Scalar _tmp172 =
      (_tmp131 * (_tmp142 - _tmp148 * _tmp170 + _tmp152 * _tmp169 + _tmp156 + _tmp158) -
       _tmp159 * _tmp171) /
      std::sqrt(Scalar(std::pow(_tmp159, Scalar(2)) * _tmp168 + 1));
  const Scalar _tmp173 = _tmp155 * _tmp82;
  const Scalar _tmp174 = _tmp173 * fh1;
  const Scalar _tmp175 = _tmp120 * _tmp43;
  const Scalar _tmp176 = _tmp110 * _tmp86;
  const Scalar _tmp177 = _tmp128 * _tmp42;
  const Scalar _tmp178 = -_tmp174 * _tmp80 + _tmp175 * fh1 - _tmp176 * _tmp80 + _tmp177 * fh1;
  const Scalar _tmp179 = Scalar(1.0) / (_tmp178);
  const Scalar _tmp180 = _tmp102 * _tmp141 * _tmp42;
  const Scalar _tmp181 = _tmp102 * _tmp146;
  const Scalar _tmp182 = _tmp102 * _tmp154 * _tmp44;
  const Scalar _tmp183 = _tmp135 * _tmp149;
  const Scalar _tmp184 = _tmp102 * _tmp157 * _tmp43;
  const Scalar _tmp185 = _tmp102 * _tmp138 * _tmp86 + _tmp145 * _tmp181 - _tmp150 * _tmp183 +
                         _tmp180 * fh1 + _tmp182 * fh1 + _tmp184 * fh1;
  const Scalar _tmp186 = std::asinh(_tmp179 * _tmp185);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = std::pow(_tmp178, Scalar(-2));
  const Scalar _tmp189 = -_tmp173 * _tmp80 + _tmp175 + _tmp177;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 =
      (_tmp179 * (-_tmp151 * _tmp169 - _tmp170 * _tmp181 + _tmp180 + _tmp182 + _tmp184) -
       _tmp185 * _tmp190) /
      std::sqrt(Scalar(std::pow(_tmp185, Scalar(2)) * _tmp188 + 1));
  const Scalar _tmp192 = Scalar(9.6622558468725703) * _tmp178;
  const Scalar _tmp193 =
      -_tmp186 * _tmp192 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp68), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp71), Scalar(2))));
  const Scalar _tmp194 = Scalar(9.6622558468725703) * _tmp189;
  const Scalar _tmp195 = Scalar(0.1034955) * _tmp179;
  const Scalar _tmp196 = _tmp193 * _tmp195;
  const Scalar _tmp197 = _tmp116 * _tmp134 * _tmp43;
  const Scalar _tmp198 = _tmp153 * _tmp44;
  const Scalar _tmp199 = _tmp125 * _tmp134 * _tmp42;
  const Scalar _tmp200 = _tmp137 * _tmp86 - _tmp145 * _tmp147 + _tmp183 - _tmp197 * fh1 -
                         _tmp198 * fh1 - _tmp199 * fh1;
  const Scalar _tmp201 = _tmp118 * _tmp43;
  const Scalar _tmp202 = _tmp127 * _tmp42;
  const Scalar _tmp203 = _tmp174 + _tmp176 + _tmp201 * fh1 + _tmp202 * fh1;
  const Scalar _tmp204 = Scalar(1.0) / (_tmp203);
  const Scalar _tmp205 = std::asinh(_tmp200 * _tmp204);
  const Scalar _tmp206 = Scalar(9.6622558468725703) * _tmp203;
  const Scalar _tmp207 =
      -_tmp205 * _tmp206 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp50), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp47 - 1), Scalar(2))));
  const Scalar _tmp208 = Scalar(0.1034955) * _tmp204;
  const Scalar _tmp209 = _tmp207 * _tmp208;
  const Scalar _tmp210 = std::pow(_tmp203, Scalar(-2));
  const Scalar _tmp211 = _tmp173 + _tmp201 + _tmp202;
  const Scalar _tmp212 = _tmp210 * _tmp211;
  const Scalar _tmp213 = Scalar(9.6622558468725703) * _tmp211;
  const Scalar _tmp214 = (-_tmp200 * _tmp212 + _tmp204 * (_tmp135 * _tmp169 + _tmp147 * _tmp170 -
                                                          _tmp197 - _tmp198 - _tmp199)) /
                         std::sqrt(Scalar(std::pow(_tmp200, Scalar(2)) * _tmp210 + 1));
  const Scalar _tmp215 = Scalar(1.0) * _tmp205;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      Scalar(9.6622558468725703) * fh1 *
          (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp36) -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp31 * _tmp38 - _tmp33) -
            _tmp34 * _tmp37) *
               std::cosh(_tmp35)) -
      Scalar(9.6622558468725703) * std::sinh(_tmp35) -
      Scalar(9.6622558468725703) * std::sinh(_tmp36);
  _res(1, 0) = _tmp162 * (-Scalar(1.0) * _tmp172 * std::cosh(_tmp161) -
                          (-Scalar(0.1034955) * _tmp163 * _tmp171 +
                           _tmp164 * (-_tmp160 * _tmp167 - _tmp162 * _tmp172)) *
                              std::cosh(_tmp165)) +
               _tmp167 * (-std::sinh(_tmp161) - std::sinh(_tmp165));
  _res(2, 0) = _tmp192 * (-Scalar(1.0) * _tmp191 * std::cosh(_tmp187) -
                          (-Scalar(0.1034955) * _tmp190 * _tmp193 +
                           _tmp195 * (-_tmp186 * _tmp194 - _tmp191 * _tmp192)) *
                              std::cosh(_tmp196)) +
               _tmp194 * (-std::sinh(_tmp187) - std::sinh(_tmp196));
  _res(3, 0) = _tmp206 * (-Scalar(1.0) * _tmp214 * std::cosh(_tmp215) -
                          (-Scalar(0.1034955) * _tmp207 * _tmp212 +
                           _tmp208 * (-_tmp205 * _tmp213 - _tmp206 * _tmp214)) *
                              std::cosh(_tmp209)) +
               _tmp213 * (-std::sinh(_tmp209) - std::sinh(_tmp215));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
