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
 * Symbolic function: IK_residual_func_cost3_wrt_pb_Nl18
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     encoder: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPbNl18(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 658

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (215)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp5 = _tmp3 * _tmp4;
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = _tmp1 * _tmp4;
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 + Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp12 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 - _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp6;
  const Scalar _tmp16 = _tmp15 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp17 = _tmp1 * _tmp7;
  const Scalar _tmp18 = _tmp0 * _tmp4;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp21 = -Scalar(0.010999999999999999) * _tmp11 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = _tmp19 + _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp26 =
      -Scalar(0.010999999999999999) * _tmp17 - Scalar(0.010999999999999999) * _tmp18;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = _tmp25 + _tmp28;
  const Scalar _tmp30 = _tmp29 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp31 = std::pow(_tmp30, Scalar(2));
  const Scalar _tmp32 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp33 = _tmp31 + _tmp32;
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp35 = _tmp24 * _tmp34;
  const Scalar _tmp36 = -_tmp25;
  const Scalar _tmp37 = _tmp28 + _tmp36;
  const Scalar _tmp38 = _tmp37 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp39 = Scalar(1.0) / (_tmp38);
  const Scalar _tmp40 = -_tmp6;
  const Scalar _tmp41 = _tmp14 + _tmp40;
  const Scalar _tmp42 = _tmp41 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp43 = _tmp39 * _tmp42;
  const Scalar _tmp44 = -_tmp19 + _tmp23;
  const Scalar _tmp45 = _tmp34 * _tmp44;
  const Scalar _tmp46 = _tmp30 * _tmp45;
  const Scalar _tmp47 = _tmp16 * _tmp35 - _tmp43 * _tmp46;
  const Scalar _tmp48 = _tmp16 * _tmp34;
  const Scalar _tmp49 = _tmp34 * _tmp43;
  const Scalar _tmp50 = _tmp30 * _tmp49 - _tmp48;
  const Scalar _tmp51 = Scalar(1.0) / (_tmp50);
  const Scalar _tmp52 = Scalar(1.0) * _tmp51;
  const Scalar _tmp53 = Scalar(1.0) * _tmp41;
  const Scalar _tmp54 = Scalar(1.0) * _tmp37;
  const Scalar _tmp55 = (-_tmp29 + _tmp54) / (_tmp15 - _tmp53);
  const Scalar _tmp56 = _tmp52 * _tmp55;
  const Scalar _tmp57 = -_tmp30 * _tmp35 + _tmp46;
  const Scalar _tmp58 = _tmp47 * _tmp56 - _tmp52 * _tmp57;
  const Scalar _tmp59 = _tmp10 + _tmp13;
  const Scalar _tmp60 = _tmp59 + _tmp6;
  const Scalar _tmp61 = _tmp60 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp62 = _tmp26 + _tmp27;
  const Scalar _tmp63 = _tmp25 + _tmp62;
  const Scalar _tmp64 = _tmp63 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp61, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp61 * _tmp65;
  const Scalar _tmp67 = _tmp64 * _tmp65;
  const Scalar _tmp68 = _tmp43 * _tmp67 - _tmp66;
  const Scalar _tmp69 = _tmp51 * _tmp68;
  const Scalar _tmp70 = _tmp44 * _tmp67;
  const Scalar _tmp71 = _tmp19 + _tmp21 + _tmp22;
  const Scalar _tmp72 = -_tmp55 * (-_tmp43 * _tmp70 - _tmp47 * _tmp69 + _tmp66 * _tmp71) -
                        _tmp57 * _tmp69 - _tmp67 * _tmp71 + _tmp70;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = _tmp15 * _tmp34;
  const Scalar _tmp75 =
      std::sqrt(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp42, Scalar(2))));
  const Scalar _tmp76 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp77 = _tmp39 * _tmp75;
  const Scalar _tmp78 = _tmp77 * (_tmp37 * _tmp42 * _tmp76 - _tmp38 * _tmp41 * _tmp76);
  const Scalar _tmp79 = _tmp34 * _tmp78;
  const Scalar _tmp80 = -_tmp29 * _tmp48 + _tmp30 * _tmp74 + _tmp30 * _tmp79;
  const Scalar _tmp81 = _tmp60 * _tmp67 - _tmp63 * _tmp66 + _tmp67 * _tmp78 - _tmp69 * _tmp80;
  const Scalar _tmp82 = _tmp73 * _tmp81;
  const Scalar _tmp83 = -_tmp52 * _tmp80 - _tmp58 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp81);
  const Scalar _tmp85 = _tmp72 * _tmp84;
  const Scalar _tmp86 = _tmp58 + _tmp83 * _tmp85;
  const Scalar _tmp87 = _tmp67 * _tmp73;
  const Scalar _tmp88 = _tmp68 * _tmp73;
  const Scalar _tmp89 = -_tmp86 * _tmp88 + Scalar(1.0);
  const Scalar _tmp90 = _tmp34 * _tmp51;
  const Scalar _tmp91 = _tmp89 * _tmp90;
  const Scalar _tmp92 = _tmp36 + _tmp62;
  const Scalar _tmp93 = _tmp92 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp94 = _tmp40 + _tmp59;
  const Scalar _tmp95 = _tmp94 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp96 = std::pow(Scalar(std::pow(_tmp93, Scalar(2)) + std::pow(_tmp95, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp97 = _tmp95 * _tmp96;
  const Scalar _tmp98 = _tmp97 * fh1;
  const Scalar _tmp99 = _tmp77 * _tmp98;
  const Scalar _tmp100 = _tmp30 * _tmp34;
  const Scalar _tmp101 = Scalar(1.0) * _tmp84;
  const Scalar _tmp102 = _tmp101 * _tmp69;
  const Scalar _tmp103 = _tmp93 * _tmp96;
  const Scalar _tmp104 = fh1 * (-_tmp103 * _tmp94 + _tmp92 * _tmp97);
  const Scalar _tmp105 = _tmp104 * _tmp77;
  const Scalar _tmp106 = _tmp43 * _tmp51;
  const Scalar _tmp107 = _tmp43 * _tmp44;
  const Scalar _tmp108 = _tmp106 * _tmp57 - _tmp44 - _tmp55 * (_tmp106 * _tmp47 + _tmp107);
  const Scalar _tmp109 = _tmp106 * _tmp80 - _tmp108 * _tmp82 - _tmp78;
  const Scalar _tmp110 = _tmp108 + _tmp109 * _tmp85;
  const Scalar _tmp111 = -_tmp110 * _tmp88 - _tmp43;
  const Scalar _tmp112 = _tmp111 * _tmp90;
  const Scalar _tmp113 = _tmp103 * fh1;
  const Scalar _tmp114 = _tmp113 * _tmp77;
  const Scalar _tmp115 = _tmp30 * _tmp90;
  const Scalar _tmp116 = _tmp53 * _tmp55 + _tmp54;
  const Scalar _tmp117 = 0;
  const Scalar _tmp118 = _tmp117 * _tmp88;
  const Scalar _tmp119 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp120 = _tmp119 * _tmp77;
  const Scalar _tmp121 = std::exp(_tmp105 * (-_tmp100 * _tmp102 + _tmp101 * _tmp67) +
                                  _tmp114 * (_tmp110 * _tmp87 + _tmp112 * _tmp30 + Scalar(1.0)) +
                                  _tmp120 * (-_tmp115 * _tmp118 + _tmp117 * _tmp87) +
                                  _tmp99 * (_tmp30 * _tmp91 + _tmp86 * _tmp87));
  const Scalar _tmp122 = std::pow(_tmp33, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp123 = _tmp122 * _tmp31;
  const Scalar _tmp124 = _tmp123 * _tmp51;
  const Scalar _tmp125 = _tmp123 * _tmp44;
  const Scalar _tmp126 = _tmp122 * _tmp16 * _tmp30;
  const Scalar _tmp127 = _tmp126 * _tmp24;
  const Scalar _tmp128 = -_tmp125 * _tmp43 + _tmp127 + _tmp43 * _tmp45;
  const Scalar _tmp129 = _tmp123 * _tmp43 - _tmp126 - _tmp49;
  const Scalar _tmp130 = _tmp129 * _tmp68;
  const Scalar _tmp131 = std::pow(_tmp50, Scalar(-2));
  const Scalar _tmp132 = _tmp131 * _tmp47;
  const Scalar _tmp133 = -_tmp123 * _tmp24 + _tmp125 + _tmp35 - _tmp45;
  const Scalar _tmp134 = _tmp131 * _tmp57;
  const Scalar _tmp135 =
      _tmp130 * _tmp134 - _tmp133 * _tmp69 - _tmp55 * (-_tmp128 * _tmp69 + _tmp130 * _tmp132);
  const Scalar _tmp136 = std::pow(_tmp72, Scalar(-2));
  const Scalar _tmp137 = _tmp135 * _tmp136;
  const Scalar _tmp138 = _tmp137 * _tmp67;
  const Scalar _tmp139 = _tmp129 * _tmp131;
  const Scalar _tmp140 = _tmp100 * _tmp118;
  const Scalar _tmp141 = _tmp100 * _tmp69;
  const Scalar _tmp142 = _tmp117 * _tmp141;
  const Scalar _tmp143 = _tmp139 * _tmp89;
  const Scalar _tmp144 = _tmp131 * _tmp80;
  const Scalar _tmp145 = Scalar(1.0) * _tmp144;
  const Scalar _tmp146 = _tmp123 * _tmp15 + _tmp123 * _tmp78 - _tmp126 * _tmp29 - _tmp74 - _tmp79;
  const Scalar _tmp147 = _tmp137 * _tmp81;
  const Scalar _tmp148 = Scalar(1.0) * _tmp132 * _tmp55;
  const Scalar _tmp149 = Scalar(1.0) * _tmp134;
  const Scalar _tmp150 =
      _tmp128 * _tmp56 - _tmp129 * _tmp148 + _tmp129 * _tmp149 - _tmp133 * _tmp52;
  const Scalar _tmp151 = _tmp130 * _tmp144 - _tmp146 * _tmp69;
  const Scalar _tmp152 = _tmp151 * _tmp73;
  const Scalar _tmp153 = _tmp135 * _tmp84;
  const Scalar _tmp154 = std::pow(_tmp81, Scalar(-2));
  const Scalar _tmp155 = _tmp154 * _tmp72;
  const Scalar _tmp156 = _tmp151 * _tmp155;
  const Scalar _tmp157 = _tmp150 + _tmp153 * _tmp83 - _tmp156 * _tmp83 +
                         _tmp85 * (_tmp129 * _tmp145 - _tmp146 * _tmp52 + _tmp147 * _tmp58 -
                                   _tmp150 * _tmp82 - _tmp152 * _tmp58);
  const Scalar _tmp158 = _tmp137 * _tmp68;
  const Scalar _tmp159 = -_tmp157 * _tmp88 + _tmp158 * _tmp86;
  const Scalar _tmp160 = _tmp100 * _tmp101;
  const Scalar _tmp161 = _tmp130 * _tmp131;
  const Scalar _tmp162 = Scalar(1.0) * _tmp154;
  const Scalar _tmp163 = _tmp141 * _tmp162;
  const Scalar _tmp164 = _tmp162 * _tmp67;
  const Scalar _tmp165 = _tmp129 * _tmp43;
  const Scalar _tmp166 =
      _tmp106 * _tmp133 - _tmp134 * _tmp165 - _tmp55 * (_tmp106 * _tmp128 - _tmp132 * _tmp165);
  const Scalar _tmp167 = _tmp109 * _tmp153 - _tmp109 * _tmp156 + _tmp166 +
                         _tmp85 * (_tmp106 * _tmp146 + _tmp108 * _tmp147 - _tmp108 * _tmp152 -
                                   _tmp144 * _tmp165 - _tmp166 * _tmp82);
  const Scalar _tmp168 = _tmp100 * _tmp111;
  const Scalar _tmp169 = _tmp110 * _tmp158 - _tmp167 * _tmp88;
  const Scalar _tmp170 = _tmp51 * fh1;
  const Scalar _tmp171 = _tmp103 * _tmp170;
  const Scalar _tmp172 = _tmp170 * _tmp97;
  const Scalar _tmp173 = _tmp101 * _tmp104;
  const Scalar _tmp174 = _tmp117 * _tmp119;
  const Scalar _tmp175 = _tmp174 * _tmp88;
  const Scalar _tmp176 =
      std::exp(-_tmp111 * _tmp171 - _tmp172 * _tmp89 + _tmp173 * _tmp69 + _tmp175 * _tmp51);
  const Scalar _tmp177 = _tmp111 * _tmp113;
  const Scalar _tmp178 = _tmp137 * _tmp174;
  const Scalar _tmp179 = _tmp104 * _tmp162;
  const Scalar _tmp180 = _tmp151 * _tmp179;
  const Scalar _tmp181 = _tmp73 * fh1;
  const Scalar _tmp182 = _tmp103 * _tmp181;
  const Scalar _tmp183 = _tmp181 * _tmp97;
  const Scalar _tmp184 =
      std::exp(-_tmp110 * _tmp182 - _tmp173 - _tmp174 * _tmp73 - _tmp183 * _tmp86);
  const Scalar _tmp185 = _tmp110 * _tmp113;
  const Scalar _tmp186 = _tmp86 * _tmp98;
  const Scalar _tmp187 = _tmp126 * _tmp44 - _tmp127;
  const Scalar _tmp188 = _tmp122 * _tmp32;
  const Scalar _tmp189 = -_tmp107 * _tmp126 + _tmp188 * _tmp24 - _tmp35;
  const Scalar _tmp190 = _tmp126 * _tmp43 - _tmp188 + _tmp34;
  const Scalar _tmp191 = _tmp190 * _tmp68;
  const Scalar _tmp192 =
      _tmp134 * _tmp191 - _tmp187 * _tmp69 - _tmp55 * (_tmp132 * _tmp191 - _tmp189 * _tmp69);
  const Scalar _tmp193 = _tmp136 * _tmp192;
  const Scalar _tmp194 = _tmp193 * _tmp67;
  const Scalar _tmp195 = _tmp126 * _tmp51;
  const Scalar _tmp196 = _tmp131 * _tmp190;
  const Scalar _tmp197 = _tmp192 * _tmp84;
  const Scalar _tmp198 = _tmp126 * _tmp15 + _tmp126 * _tmp78 - _tmp188 * _tmp29 + _tmp29 * _tmp34;
  const Scalar _tmp199 = _tmp144 * _tmp191 - _tmp198 * _tmp69;
  const Scalar _tmp200 = _tmp155 * _tmp199;
  const Scalar _tmp201 =
      -_tmp148 * _tmp190 + _tmp149 * _tmp190 - _tmp187 * _tmp52 + _tmp189 * _tmp56;
  const Scalar _tmp202 = _tmp199 * _tmp73;
  const Scalar _tmp203 = _tmp193 * _tmp81;
  const Scalar _tmp204 = _tmp197 * _tmp83 - _tmp200 * _tmp83 + _tmp201 +
                         _tmp85 * (_tmp145 * _tmp190 - _tmp198 * _tmp52 - _tmp201 * _tmp82 -
                                   _tmp202 * _tmp58 + _tmp203 * _tmp58);
  const Scalar _tmp205 = _tmp196 * _tmp89;
  const Scalar _tmp206 = _tmp193 * _tmp68;
  const Scalar _tmp207 = -_tmp204 * _tmp88 + _tmp206 * _tmp86;
  const Scalar _tmp208 = _tmp131 * _tmp191;
  const Scalar _tmp209 = _tmp190 * _tmp43;
  const Scalar _tmp210 =
      _tmp106 * _tmp187 - _tmp134 * _tmp209 - _tmp55 * (_tmp106 * _tmp189 - _tmp132 * _tmp209);
  const Scalar _tmp211 = _tmp109 * _tmp197 - _tmp109 * _tmp200 + _tmp210 +
                         _tmp85 * (_tmp106 * _tmp198 - _tmp108 * _tmp202 + _tmp108 * _tmp203 -
                                   _tmp144 * _tmp209 - _tmp210 * _tmp82);
  const Scalar _tmp212 = _tmp110 * _tmp206 - _tmp211 * _tmp88;
  const Scalar _tmp213 = _tmp179 * _tmp199;
  const Scalar _tmp214 = _tmp174 * _tmp193;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp121 * (-_tmp105 * (-_tmp102 * _tmp123 + _tmp102 * _tmp34 + _tmp151 * _tmp163 -
                                       _tmp151 * _tmp164 + _tmp160 * _tmp161) -
                           _tmp114 * (-_tmp110 * _tmp138 + _tmp111 * _tmp124 - _tmp112 +
                                      _tmp115 * _tmp169 - _tmp139 * _tmp168 + _tmp167 * _tmp87) -
                           _tmp120 * (-_tmp117 * _tmp138 - _tmp118 * _tmp124 + _tmp118 * _tmp90 +
                                      _tmp137 * _tmp142 + _tmp139 * _tmp140) -
                           _tmp99 * (-_tmp100 * _tmp143 + _tmp115 * _tmp159 + _tmp124 * _tmp89 -
                                     _tmp138 * _tmp86 + _tmp157 * _tmp87 - _tmp91));
  _res(2, 0) =
      -_tmp176 * (_tmp139 * _tmp175 - _tmp139 * _tmp177 - _tmp143 * _tmp98 + _tmp159 * _tmp172 +
                  _tmp161 * _tmp173 + _tmp169 * _tmp171 + _tmp178 * _tmp69 + _tmp180 * _tmp69);
  _res(3, 0) = -_tmp184 * (-_tmp137 * _tmp185 - _tmp137 * _tmp186 + _tmp157 * _tmp183 +
                           _tmp167 * _tmp182 - _tmp178 - _tmp180);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp121 *
      (-_tmp105 * (-_tmp102 * _tmp126 + _tmp160 * _tmp208 + _tmp163 * _tmp199 - _tmp164 * _tmp199) -
       _tmp114 * (-_tmp110 * _tmp194 + _tmp111 * _tmp195 + _tmp115 * _tmp212 - _tmp168 * _tmp196 +
                  _tmp211 * _tmp87) -
       _tmp120 * (-_tmp117 * _tmp194 - _tmp118 * _tmp195 + _tmp140 * _tmp196 + _tmp142 * _tmp193) -
       _tmp99 * (-_tmp100 * _tmp205 + _tmp115 * _tmp207 - _tmp194 * _tmp86 + _tmp195 * _tmp89 +
                 _tmp204 * _tmp87));
  _res(2, 1) =
      -_tmp176 * (_tmp171 * _tmp212 + _tmp172 * _tmp207 + _tmp173 * _tmp208 + _tmp175 * _tmp196 -
                  _tmp177 * _tmp196 - _tmp205 * _tmp98 + _tmp213 * _tmp69 + _tmp214 * _tmp69);
  _res(3, 1) = -_tmp184 * (_tmp182 * _tmp211 + _tmp183 * _tmp204 - _tmp185 * _tmp193 -
                           _tmp186 * _tmp193 - _tmp213 - _tmp214);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym