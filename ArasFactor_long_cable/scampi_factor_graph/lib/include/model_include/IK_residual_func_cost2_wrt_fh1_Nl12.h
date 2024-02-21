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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl12
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 643

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (209)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = _tmp3 * _tmp5;
  const Scalar _tmp10 = _tmp1 * _tmp6;
  const Scalar _tmp11 = _tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp22 = _tmp2 * _tmp6;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = _tmp0 * fv1;
  const Scalar _tmp30 = std::asinh(_tmp29);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * _tmp30;
  const Scalar _tmp32 =
      -Scalar(0.1034955) * _tmp31 * fh1 -
      Scalar(12.936937500000001) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp18), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp28), Scalar(2))));
  const Scalar _tmp33 = _tmp0 * _tmp32;
  const Scalar _tmp34 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp35 =
      std::pow(Scalar(_tmp34 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = Scalar(1.0) * _tmp30;
  const Scalar _tmp37 = _tmp28 + Scalar(-110.0);
  const Scalar _tmp38 = _tmp18 + Scalar(-125.0);
  const Scalar _tmp39 = std::pow(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp38, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp38 * _tmp39;
  const Scalar _tmp41 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp42 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp19 + Scalar(-0.010999999999999999);
  const Scalar _tmp43 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp41 + _tmp44;
  const Scalar _tmp46 = _tmp45 * fh1;
  const Scalar _tmp47 = Scalar(2.3544) * _tmp11 + _tmp17 * fv1 + _tmp40 * _tmp46;
  const Scalar _tmp48 = _tmp12 - _tmp15;
  const Scalar _tmp49 = _tmp48 + _tmp8;
  const Scalar _tmp50 = -_tmp20;
  const Scalar _tmp51 = _tmp24 - _tmp25;
  const Scalar _tmp52 = _tmp50 + _tmp51;
  const Scalar _tmp53 = Scalar(1.0) * _tmp52;
  const Scalar _tmp54 = -_tmp53;
  const Scalar _tmp55 = _tmp20 + _tmp51;
  const Scalar _tmp56 = _tmp54 + _tmp55;
  const Scalar _tmp57 = _tmp26 + _tmp50;
  const Scalar _tmp58 = Scalar(1.0) / (_tmp54 + _tmp57);
  const Scalar _tmp59 = -_tmp8;
  const Scalar _tmp60 = _tmp16 + _tmp59;
  const Scalar _tmp61 = _tmp48 + _tmp59;
  const Scalar _tmp62 = Scalar(1.0) * _tmp61;
  const Scalar _tmp63 = -_tmp60 + _tmp62;
  const Scalar _tmp64 = _tmp58 * _tmp63;
  const Scalar _tmp65 = _tmp56 * _tmp64;
  const Scalar _tmp66 = Scalar(1.0) / (-_tmp49 + _tmp62 - _tmp65);
  const Scalar _tmp67 = Scalar(1.0) * _tmp66;
  const Scalar _tmp68 = _tmp56 * _tmp58;
  const Scalar _tmp69 = Scalar(1.0) * _tmp67 * _tmp68 - Scalar(1.0) * _tmp67;
  const Scalar _tmp70 = _tmp57 + position_vector(1, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(110.0);
  const Scalar _tmp72 = _tmp60 + position_vector(0, 0);
  const Scalar _tmp73 = _tmp72 + Scalar(-125.0);
  const Scalar _tmp74 = std::pow(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp73, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp77 = _tmp76 + Scalar(110.0);
  const Scalar _tmp78 = _tmp61 + position_vector(0, 0);
  const Scalar _tmp79 = _tmp78 + Scalar(125.0);
  const Scalar _tmp80 =
      std::sqrt(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp79, Scalar(2))));
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = Scalar(1.0) / (_tmp79);
  const Scalar _tmp83 = _tmp80 * _tmp82;
  const Scalar _tmp84 = _tmp83 * (-_tmp52 * _tmp79 * _tmp81 + _tmp61 * _tmp77 * _tmp81);
  const Scalar _tmp85 = _tmp71 * _tmp74;
  const Scalar _tmp86 = _tmp77 * _tmp82;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp75 * _tmp86 - _tmp85);
  const Scalar _tmp88 = _tmp87 * (_tmp57 * _tmp75 - _tmp60 * _tmp85 + _tmp75 * _tmp84);
  const Scalar _tmp89 = _tmp42 - _tmp43;
  const Scalar _tmp90 = _tmp41 + _tmp89;
  const Scalar _tmp91 = -_tmp41;
  const Scalar _tmp92 = _tmp89 + _tmp91;
  const Scalar _tmp93 = _tmp86 * _tmp92;
  const Scalar _tmp94 = -_tmp75 * _tmp93 + _tmp85 * _tmp90;
  const Scalar _tmp95 = Scalar(1.0) * _tmp58;
  const Scalar _tmp96 = -_tmp75 * _tmp90 + _tmp75 * _tmp92;
  const Scalar _tmp97 = Scalar(1.0) * _tmp87;
  const Scalar _tmp98 = _tmp63 * _tmp87 * _tmp94 * _tmp95 - _tmp96 * _tmp97;
  const Scalar _tmp99 = _tmp44 + _tmp91;
  const Scalar _tmp100 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp101 = _tmp100 + Scalar(125.0);
  const Scalar _tmp102 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp103 = _tmp102 + Scalar(-110.0);
  const Scalar _tmp104 =
      std::pow(Scalar(std::pow(_tmp101, Scalar(2)) + std::pow(_tmp103, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp105 = _tmp101 * _tmp104;
  const Scalar _tmp106 = _tmp103 * _tmp104;
  const Scalar _tmp107 = _tmp105 * _tmp86 - _tmp106;
  const Scalar _tmp108 = _tmp107 * _tmp87;
  const Scalar _tmp109 = -_tmp105 * _tmp93 + _tmp106 * _tmp99 - _tmp108 * _tmp94;
  const Scalar _tmp110 = _tmp105 * _tmp92 - _tmp105 * _tmp99 - _tmp108 * _tmp96 - _tmp109 * _tmp64;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp112 = _tmp105 * _tmp55 + _tmp105 * _tmp84 - _tmp106 * _tmp49 - _tmp107 * _tmp88;
  const Scalar _tmp113 = _tmp111 * _tmp112;
  const Scalar _tmp114 = Scalar(1.0) / (_tmp112);
  const Scalar _tmp115 = _tmp110 * _tmp114;
  const Scalar _tmp116 = _tmp115 * (-_tmp113 * _tmp98 - Scalar(1.0) * _tmp88);
  const Scalar _tmp117 = _tmp56 * _tmp66;
  const Scalar _tmp118 = _tmp111 * (_tmp116 + _tmp98);
  const Scalar _tmp119 = -_tmp109 * _tmp118 + _tmp116 * _tmp117 - _tmp94 * _tmp97;
  const Scalar _tmp120 = _tmp37 * _tmp39;
  const Scalar _tmp121 = Scalar(1.0) * _tmp120 * (_tmp116 * _tmp67 - _tmp119 * _tmp95);
  const Scalar _tmp122 = _tmp115 * _tmp67;
  const Scalar _tmp123 = Scalar(1.0) * _tmp114;
  const Scalar _tmp124 = -_tmp109 * _tmp123 + _tmp122 * _tmp56;
  const Scalar _tmp125 = _tmp120 * _tmp17 - _tmp27 * _tmp40;
  const Scalar _tmp126 = Scalar(1.0) * _tmp125;
  const Scalar _tmp127 = _tmp126 * (_tmp122 - _tmp124 * _tmp95);
  const Scalar _tmp128 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp129 = _tmp53 * _tmp64 + _tmp62;
  const Scalar _tmp130 = 0;
  const Scalar _tmp131 = _tmp129 * _tmp66;
  const Scalar _tmp132 = -_tmp109 * _tmp130 - _tmp131 * _tmp56 + _tmp54;
  const Scalar _tmp133 = -_tmp120 * _tmp46 - Scalar(2.3544) * _tmp23 - _tmp27 * fv1;
  const Scalar _tmp134 = _tmp64 * _tmp67;
  const Scalar _tmp135 = _tmp65 * _tmp67 + Scalar(1.0);
  const Scalar _tmp136 = Scalar(1.0) * _tmp134 - Scalar(1.0) * _tmp135 * _tmp95;
  const Scalar _tmp137 = _tmp86 * _tmp87;
  const Scalar _tmp138 = _tmp137 * _tmp94 + _tmp93;
  const Scalar _tmp139 = _tmp137 * _tmp96 - _tmp138 * _tmp64 - _tmp92;
  const Scalar _tmp140 = _tmp115 * (-_tmp113 * _tmp139 - _tmp84 + _tmp86 * _tmp88);
  const Scalar _tmp141 = _tmp111 * (_tmp139 + _tmp140);
  const Scalar _tmp142 = -_tmp109 * _tmp141 + _tmp117 * _tmp140 + _tmp138;
  const Scalar _tmp143 = Scalar(1.0) * _tmp40 * (_tmp140 * _tmp67 - _tmp142 * _tmp95);
  const Scalar _tmp144 =
      _tmp121 * fh1 + _tmp127 * fh1 +
      Scalar(1.0) * _tmp128 * (-_tmp129 * _tmp67 - _tmp132 * _tmp95 + Scalar(1.0)) +
      _tmp133 * _tmp136 + _tmp143 * fh1 + _tmp47 * _tmp69;
  const Scalar _tmp145 =
      _tmp125 * _tmp83 * (_tmp105 * _tmp123 - _tmp107 * _tmp114 * _tmp75 * _tmp97);
  const Scalar _tmp146 = _tmp87 * (-_tmp107 * _tmp118 + Scalar(1.0));
  const Scalar _tmp147 = _tmp120 * _tmp83 * (_tmp105 * _tmp118 + _tmp146 * _tmp75);
  const Scalar _tmp148 = _tmp87 * (-_tmp107 * _tmp141 - _tmp86);
  const Scalar _tmp149 = _tmp40 * _tmp83 * (_tmp105 * _tmp141 + _tmp148 * _tmp75 + Scalar(1.0));
  const Scalar _tmp150 = -_tmp128 * _tmp83 * (_tmp105 * _tmp130 - _tmp108 * _tmp130 * _tmp75) -
                         _tmp145 * fh1 - _tmp147 * fh1 - _tmp149 * fh1;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 = std::asinh(_tmp144 * _tmp151);
  const Scalar _tmp153 = Scalar(1.0) * _tmp152;
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp150;
  const Scalar _tmp155 =
      -_tmp152 * _tmp154 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp76 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp78 - 1), Scalar(2))));
  const Scalar _tmp156 = Scalar(0.1034955) * _tmp151;
  const Scalar _tmp157 = _tmp155 * _tmp156;
  const Scalar _tmp158 = -_tmp145 - _tmp147 - _tmp149;
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp158;
  const Scalar _tmp160 = std::pow(_tmp150, Scalar(-2));
  const Scalar _tmp161 = _tmp120 * _tmp45;
  const Scalar _tmp162 = _tmp40 * _tmp45;
  const Scalar _tmp163 = _tmp158 * _tmp160;
  const Scalar _tmp164 = (-_tmp144 * _tmp163 + _tmp151 * (_tmp121 + _tmp127 - _tmp136 * _tmp161 +
                                                          _tmp143 + _tmp162 * _tmp69)) /
                         std::sqrt(Scalar(std::pow(_tmp144, Scalar(2)) * _tmp160 + 1));
  const Scalar _tmp165 = _tmp119 * _tmp120 * _tmp58;
  const Scalar _tmp166 = _tmp40 * _tmp58;
  const Scalar _tmp167 = _tmp142 * _tmp166;
  const Scalar _tmp168 = _tmp135 * _tmp58;
  const Scalar _tmp169 = _tmp124 * _tmp125 * _tmp58;
  const Scalar _tmp170 = _tmp47 * _tmp67;
  const Scalar _tmp171 = _tmp128 * _tmp132 * _tmp58 + _tmp133 * _tmp168 + _tmp165 * fh1 +
                         _tmp167 * fh1 + _tmp169 * fh1 - _tmp170 * _tmp68;
  const Scalar _tmp172 = _tmp128 * _tmp130;
  const Scalar _tmp173 = _tmp148 * _tmp40;
  const Scalar _tmp174 = _tmp114 * _tmp126;
  const Scalar _tmp175 = _tmp174 * fh1;
  const Scalar _tmp176 = _tmp120 * _tmp146;
  const Scalar _tmp177 = -_tmp108 * _tmp172 - _tmp108 * _tmp175 + _tmp173 * fh1 + _tmp176 * fh1;
  const Scalar _tmp178 = Scalar(1.0) / (_tmp177);
  const Scalar _tmp179 = std::asinh(_tmp171 * _tmp178);
  const Scalar _tmp180 = Scalar(1.0) * _tmp179;
  const Scalar _tmp181 = std::pow(_tmp177, Scalar(-2));
  const Scalar _tmp182 = -_tmp108 * _tmp174 + _tmp173 + _tmp176;
  const Scalar _tmp183 = _tmp181 * _tmp182;
  const Scalar _tmp184 =
      (-_tmp171 * _tmp183 + _tmp178 * (-_tmp161 * _tmp168 + _tmp165 -
                                       _tmp166 * _tmp45 * _tmp56 * _tmp67 + _tmp167 + _tmp169)) /
      std::sqrt(Scalar(std::pow(_tmp171, Scalar(2)) * _tmp181 + 1));
  const Scalar _tmp185 = Scalar(9.6622558468725703) * _tmp177;
  const Scalar _tmp186 =
      -_tmp179 * _tmp185 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp72), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp70 - 1), Scalar(2))));
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp182;
  const Scalar _tmp188 = Scalar(0.1034955) * _tmp178;
  const Scalar _tmp189 = _tmp186 * _tmp188;
  const Scalar _tmp190 = _tmp122 * _tmp125;
  const Scalar _tmp191 = _tmp116 * _tmp120 * _tmp66;
  const Scalar _tmp192 = _tmp140 * _tmp40 * _tmp66;
  const Scalar _tmp193 = _tmp128 * _tmp131 - _tmp133 * _tmp134 + _tmp170 - _tmp190 * fh1 -
                         _tmp191 * fh1 - _tmp192 * fh1;
  const Scalar _tmp194 = _tmp141 * _tmp40;
  const Scalar _tmp195 = _tmp118 * _tmp120;
  const Scalar _tmp196 = _tmp172 + _tmp175 + _tmp194 * fh1 + _tmp195 * fh1;
  const Scalar _tmp197 = Scalar(1.0) / (_tmp196);
  const Scalar _tmp198 = std::asinh(_tmp193 * _tmp197);
  const Scalar _tmp199 = Scalar(9.6622558468725703) * _tmp196;
  const Scalar _tmp200 =
      -_tmp198 * _tmp199 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp102), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp100 - 1), Scalar(2))));
  const Scalar _tmp201 = Scalar(0.1034955) * _tmp197;
  const Scalar _tmp202 = _tmp200 * _tmp201;
  const Scalar _tmp203 = Scalar(1.0) * _tmp198;
  const Scalar _tmp204 = _tmp174 + _tmp194 + _tmp195;
  const Scalar _tmp205 = Scalar(9.6622558468725703) * _tmp204;
  const Scalar _tmp206 = std::pow(_tmp196, Scalar(-2));
  const Scalar _tmp207 = _tmp204 * _tmp206;
  const Scalar _tmp208 = (-_tmp193 * _tmp207 + _tmp197 * (_tmp134 * _tmp161 + _tmp162 * _tmp67 -
                                                          _tmp190 - _tmp191 - _tmp192)) /
                         std::sqrt(Scalar(std::pow(_tmp193, Scalar(2)) * _tmp206 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      Scalar(9.6622558468725703) * fh1 *
          (Scalar(1.0) * _tmp34 * _tmp35 * fv1 * std::cosh(_tmp36) -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp29 * _tmp35 - _tmp31) -
            _tmp32 * _tmp34) *
               std::cosh(_tmp33)) -
      Scalar(9.6622558468725703) * std::sinh(_tmp33) -
      Scalar(9.6622558468725703) * std::sinh(_tmp36);
  _res(1, 0) = _tmp154 * (-Scalar(1.0) * _tmp164 * std::cosh(_tmp153) -
                          (-Scalar(0.1034955) * _tmp155 * _tmp163 +
                           _tmp156 * (-_tmp152 * _tmp159 - _tmp154 * _tmp164)) *
                              std::cosh(_tmp157)) +
               _tmp159 * (-std::sinh(_tmp153) - std::sinh(_tmp157));
  _res(2, 0) = _tmp185 * (-Scalar(1.0) * _tmp184 * std::cosh(_tmp180) -
                          (-Scalar(0.1034955) * _tmp183 * _tmp186 +
                           _tmp188 * (-_tmp179 * _tmp187 - _tmp184 * _tmp185)) *
                              std::cosh(_tmp189)) +
               _tmp187 * (-std::sinh(_tmp180) - std::sinh(_tmp189));
  _res(3, 0) = _tmp199 * (-Scalar(1.0) * _tmp208 * std::cosh(_tmp203) -
                          (-Scalar(0.1034955) * _tmp200 * _tmp207 +
                           _tmp201 * (-_tmp198 * _tmp205 - _tmp199 * _tmp208)) *
                              std::cosh(_tmp202)) +
               _tmp205 * (-std::sinh(_tmp202) - std::sinh(_tmp203));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym