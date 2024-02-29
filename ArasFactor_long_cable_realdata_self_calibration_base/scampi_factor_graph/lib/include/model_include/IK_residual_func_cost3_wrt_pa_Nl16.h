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
 * Symbolic function: IK_residual_func_cost3_wrt_pa_Nl16
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPaNl16(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 659

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (214)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp12 = _tmp1 * _tmp5;
  const Scalar _tmp13 =
      -Scalar(0.010999999999999999) * _tmp11 - Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = -_tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = Scalar(1.0) * _tmp15;
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp18 = -_tmp17;
  const Scalar _tmp19 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp21 = _tmp2 * _tmp4;
  const Scalar _tmp22 = _tmp0 * _tmp5;
  const Scalar _tmp23 =
      -Scalar(0.010999999999999999) * _tmp21 + Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = _tmp20 + _tmp23;
  const Scalar _tmp25 = _tmp18 + _tmp24;
  const Scalar _tmp26 = Scalar(1.0) * _tmp25;
  const Scalar _tmp27 = -_tmp20 + _tmp23;
  const Scalar _tmp28 = _tmp18 + _tmp27;
  const Scalar _tmp29 = -_tmp7;
  const Scalar _tmp30 = _tmp14 + _tmp29;
  const Scalar _tmp31 = (_tmp16 - _tmp30) / (-_tmp26 + _tmp28);
  const Scalar _tmp32 = _tmp16 + _tmp26 * _tmp31;
  const Scalar _tmp33 = 0;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp35 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp37 = _tmp35 - _tmp36;
  const Scalar _tmp38 = _tmp34 + _tmp37;
  const Scalar _tmp39 = _tmp10 + _tmp13;
  const Scalar _tmp40 = _tmp29 + _tmp39;
  const Scalar _tmp41 = _tmp40 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp42 = _tmp17 + _tmp27;
  const Scalar _tmp43 = _tmp42 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp44 = std::pow(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp43, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp45 = _tmp41 * _tmp44;
  const Scalar _tmp46 = -_tmp34;
  const Scalar _tmp47 = _tmp35 + _tmp36 + _tmp46;
  const Scalar _tmp48 = _tmp43 * _tmp44;
  const Scalar _tmp49 = _tmp15 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = _tmp25 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp52 = _tmp50 * _tmp51;
  const Scalar _tmp53 = _tmp38 * _tmp52;
  const Scalar _tmp54 = _tmp30 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp55 = std::pow(_tmp54, Scalar(2));
  const Scalar _tmp56 = _tmp28 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp57 = std::pow(_tmp56, Scalar(2));
  const Scalar _tmp58 = _tmp55 + _tmp57;
  const Scalar _tmp59 = std::pow(_tmp58, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp38 * _tmp59;
  const Scalar _tmp61 = _tmp54 * _tmp60;
  const Scalar _tmp62 = _tmp37 + _tmp46;
  const Scalar _tmp63 = _tmp56 * _tmp59;
  const Scalar _tmp64 = -_tmp52 * _tmp61 + _tmp62 * _tmp63;
  const Scalar _tmp65 = _tmp45 * _tmp52 - _tmp48;
  const Scalar _tmp66 = _tmp52 * _tmp59;
  const Scalar _tmp67 = _tmp54 * _tmp66 - _tmp63;
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp65 * _tmp68;
  const Scalar _tmp70 = _tmp59 * _tmp62;
  const Scalar _tmp71 = -_tmp54 * _tmp70 + _tmp61;
  const Scalar _tmp72 = -_tmp31 * (-_tmp45 * _tmp53 + _tmp47 * _tmp48 - _tmp64 * _tmp69) +
                        _tmp38 * _tmp45 - _tmp45 * _tmp47 - _tmp69 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = _tmp45 * _tmp73;
  const Scalar _tmp75 = _tmp54 * _tmp59;
  const Scalar _tmp76 = _tmp33 * _tmp73;
  const Scalar _tmp77 = _tmp69 * _tmp76;
  const Scalar _tmp78 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp79 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp80 = _tmp50 * _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp79);
  const Scalar _tmp83 = _tmp80 * (_tmp15 * _tmp51 * _tmp82 - _tmp25 * _tmp49 * _tmp82);
  const Scalar _tmp84 = _tmp59 * _tmp83;
  const Scalar _tmp85 = _tmp28 * _tmp59;
  const Scalar _tmp86 = _tmp30 * _tmp59;
  const Scalar _tmp87 = _tmp54 * _tmp84 + _tmp54 * _tmp85 - _tmp56 * _tmp86;
  const Scalar _tmp88 = -_tmp40 * _tmp48 + _tmp42 * _tmp45 + _tmp45 * _tmp83 - _tmp69 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = Scalar(1.0) * _tmp89;
  const Scalar _tmp91 = _tmp69 * _tmp90;
  const Scalar _tmp92 = _tmp17 + _tmp24;
  const Scalar _tmp93 = _tmp39 + _tmp7;
  const Scalar _tmp94 = _tmp93 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp95 = _tmp92 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp96 = std::pow(Scalar(std::pow(_tmp94, Scalar(2)) + std::pow(_tmp95, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp97 = _tmp94 * _tmp96;
  const Scalar _tmp98 = _tmp95 * _tmp96;
  const Scalar _tmp99 = fh1 * (-_tmp92 * _tmp97 + _tmp93 * _tmp98);
  const Scalar _tmp100 = _tmp80 * _tmp99;
  const Scalar _tmp101 = _tmp52 * _tmp68;
  const Scalar _tmp102 = _tmp101 * _tmp71 - _tmp31 * (_tmp101 * _tmp64 + _tmp53) - _tmp38;
  const Scalar _tmp103 = _tmp102 * _tmp73;
  const Scalar _tmp104 = _tmp101 * _tmp87 - _tmp103 * _tmp88 - _tmp83;
  const Scalar _tmp105 = _tmp72 * _tmp89;
  const Scalar _tmp106 = _tmp102 + _tmp104 * _tmp105;
  const Scalar _tmp107 = _tmp65 * _tmp73;
  const Scalar _tmp108 = -_tmp106 * _tmp107 - _tmp52;
  const Scalar _tmp109 = _tmp59 * _tmp68;
  const Scalar _tmp110 = _tmp108 * _tmp109;
  const Scalar _tmp111 = _tmp97 * fh1;
  const Scalar _tmp112 = _tmp111 * _tmp80;
  const Scalar _tmp113 = Scalar(1.0) * _tmp68;
  const Scalar _tmp114 = _tmp113 * _tmp31;
  const Scalar _tmp115 = -_tmp113 * _tmp71 + _tmp114 * _tmp64;
  const Scalar _tmp116 = _tmp73 * _tmp88;
  const Scalar _tmp117 = -_tmp113 * _tmp87 - _tmp115 * _tmp116;
  const Scalar _tmp118 = _tmp105 * _tmp117 + _tmp115;
  const Scalar _tmp119 = -_tmp107 * _tmp118 + Scalar(1.0);
  const Scalar _tmp120 = _tmp109 * _tmp119;
  const Scalar _tmp121 = _tmp98 * fh1;
  const Scalar _tmp122 = _tmp121 * _tmp80;
  const Scalar _tmp123 = std::exp(_tmp100 * (_tmp45 * _tmp90 - _tmp75 * _tmp91) +
                                  _tmp112 * (_tmp106 * _tmp74 + _tmp110 * _tmp54 + Scalar(1.0)) +
                                  _tmp122 * (_tmp118 * _tmp74 + _tmp120 * _tmp54) +
                                  _tmp81 * (_tmp33 * _tmp74 - _tmp75 * _tmp77));
  const Scalar _tmp124 = std::pow(_tmp67, Scalar(-2));
  const Scalar _tmp125 = std::pow(_tmp58, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp126 = _tmp125 * _tmp55;
  const Scalar _tmp127 = _tmp125 * _tmp54 * _tmp56;
  const Scalar _tmp128 = _tmp124 * (_tmp126 * _tmp52 - _tmp127 - _tmp66);
  const Scalar _tmp129 = _tmp65 * _tmp71;
  const Scalar _tmp130 = _tmp64 * _tmp65;
  const Scalar _tmp131 = _tmp126 * _tmp38;
  const Scalar _tmp132 = _tmp127 * _tmp62;
  const Scalar _tmp133 = -_tmp131 * _tmp52 + _tmp132 + _tmp52 * _tmp60;
  const Scalar _tmp134 = -_tmp126 * _tmp62 + _tmp131 - _tmp60 + _tmp70;
  const Scalar _tmp135 =
      _tmp128 * _tmp129 - _tmp134 * _tmp69 - _tmp31 * (_tmp128 * _tmp130 - _tmp133 * _tmp69);
  const Scalar _tmp136 = std::pow(_tmp72, Scalar(-2));
  const Scalar _tmp137 = _tmp135 * _tmp136;
  const Scalar _tmp138 = _tmp137 * _tmp45;
  const Scalar _tmp139 = _tmp69 * _tmp75;
  const Scalar _tmp140 = _tmp139 * _tmp33;
  const Scalar _tmp141 = _tmp59 * _tmp69;
  const Scalar _tmp142 = _tmp107 * _tmp33 * _tmp75;
  const Scalar _tmp143 = _tmp137 * _tmp65;
  const Scalar _tmp144 = _tmp65 * _tmp87;
  const Scalar _tmp145 = _tmp126 * _tmp28 + _tmp126 * _tmp83 - _tmp127 * _tmp30 - _tmp84 - _tmp85;
  const Scalar _tmp146 = _tmp128 * _tmp144 - _tmp145 * _tmp69;
  const Scalar _tmp147 = std::pow(_tmp88, Scalar(-2));
  const Scalar _tmp148 = _tmp147 * _tmp72;
  const Scalar _tmp149 = _tmp104 * _tmp148;
  const Scalar _tmp150 = _tmp104 * _tmp89;
  const Scalar _tmp151 = _tmp128 * _tmp52;
  const Scalar _tmp152 =
      _tmp101 * _tmp134 - _tmp151 * _tmp71 - _tmp31 * (_tmp101 * _tmp133 - _tmp151 * _tmp64);
  const Scalar _tmp153 = _tmp102 * _tmp88;
  const Scalar _tmp154 = _tmp52 * _tmp87;
  const Scalar _tmp155 = _tmp105 * (_tmp101 * _tmp145 - _tmp103 * _tmp146 - _tmp116 * _tmp152 -
                                    _tmp128 * _tmp154 + _tmp137 * _tmp153) +
                         _tmp135 * _tmp150 - _tmp146 * _tmp149 + _tmp152;
  const Scalar _tmp156 = _tmp106 * _tmp143 - _tmp107 * _tmp155;
  const Scalar _tmp157 = _tmp109 * _tmp54;
  const Scalar _tmp158 = _tmp108 * _tmp128;
  const Scalar _tmp159 = _tmp126 * _tmp68;
  const Scalar _tmp160 = _tmp117 * _tmp89;
  const Scalar _tmp161 = _tmp117 * _tmp148;
  const Scalar _tmp162 = Scalar(1.0) * _tmp128;
  const Scalar _tmp163 = _tmp115 * _tmp73;
  const Scalar _tmp164 = _tmp115 * _tmp88;
  const Scalar _tmp165 = _tmp31 * _tmp64;
  const Scalar _tmp166 =
      -_tmp113 * _tmp134 + _tmp114 * _tmp133 - _tmp162 * _tmp165 + _tmp162 * _tmp71;
  const Scalar _tmp167 = _tmp105 * (-_tmp113 * _tmp145 - _tmp116 * _tmp166 + _tmp137 * _tmp164 -
                                    _tmp146 * _tmp163 + _tmp162 * _tmp87) +
                         _tmp135 * _tmp160 - _tmp146 * _tmp161 + _tmp166;
  const Scalar _tmp168 = -_tmp107 * _tmp167 + _tmp118 * _tmp143;
  const Scalar _tmp169 = _tmp119 * _tmp75;
  const Scalar _tmp170 = Scalar(1.0) * _tmp147;
  const Scalar _tmp171 = _tmp139 * _tmp170;
  const Scalar _tmp172 = _tmp170 * _tmp45;
  const Scalar _tmp173 = _tmp65 * _tmp89;
  const Scalar _tmp174 = _tmp173 * _tmp75;
  const Scalar _tmp175 = _tmp119 * _tmp68;
  const Scalar _tmp176 = _tmp111 * _tmp68;
  const Scalar _tmp177 = _tmp33 * _tmp78;
  const Scalar _tmp178 = _tmp177 * _tmp73;
  const Scalar _tmp179 = _tmp90 * _tmp99;
  const Scalar _tmp180 =
      std::exp(-_tmp108 * _tmp176 - _tmp121 * _tmp175 + _tmp178 * _tmp69 + _tmp179 * _tmp69);
  const Scalar _tmp181 = _tmp107 * _tmp177;
  const Scalar _tmp182 = _tmp121 * _tmp68;
  const Scalar _tmp183 = _tmp173 * _tmp99;
  const Scalar _tmp184 = _tmp137 * _tmp177;
  const Scalar _tmp185 = _tmp119 * _tmp121;
  const Scalar _tmp186 = _tmp170 * _tmp99;
  const Scalar _tmp187 = _tmp146 * _tmp186;
  const Scalar _tmp188 = _tmp111 * _tmp73;
  const Scalar _tmp189 = _tmp121 * _tmp73;
  const Scalar _tmp190 = std::exp(-_tmp106 * _tmp188 - _tmp118 * _tmp189 - _tmp178 - _tmp179);
  const Scalar _tmp191 = _tmp106 * _tmp111;
  const Scalar _tmp192 = _tmp118 * _tmp121;
  const Scalar _tmp193 = _tmp125 * _tmp57;
  const Scalar _tmp194 = _tmp124 * (_tmp127 * _tmp52 - _tmp193 + _tmp59);
  const Scalar _tmp195 = _tmp127 * _tmp28 + _tmp127 * _tmp83 - _tmp193 * _tmp30 + _tmp86;
  const Scalar _tmp196 = _tmp144 * _tmp194 - _tmp195 * _tmp69;
  const Scalar _tmp197 = Scalar(1.0) * _tmp194;
  const Scalar _tmp198 = -_tmp127 * _tmp53 + _tmp193 * _tmp62 - _tmp70;
  const Scalar _tmp199 = _tmp127 * _tmp38 - _tmp132;
  const Scalar _tmp200 =
      _tmp129 * _tmp194 - _tmp199 * _tmp69 - _tmp31 * (_tmp130 * _tmp194 - _tmp198 * _tmp69);
  const Scalar _tmp201 = _tmp136 * _tmp200;
  const Scalar _tmp202 = _tmp201 * _tmp45;
  const Scalar _tmp203 =
      -_tmp113 * _tmp199 + _tmp114 * _tmp198 - _tmp165 * _tmp197 + _tmp197 * _tmp71;
  const Scalar _tmp204 = _tmp105 * (-_tmp113 * _tmp195 - _tmp116 * _tmp203 - _tmp163 * _tmp196 +
                                    _tmp164 * _tmp201 + _tmp197 * _tmp87) +
                         _tmp160 * _tmp200 - _tmp161 * _tmp196 + _tmp203;
  const Scalar _tmp205 = _tmp201 * _tmp65;
  const Scalar _tmp206 = -_tmp107 * _tmp204 + _tmp118 * _tmp205;
  const Scalar _tmp207 = _tmp108 * _tmp194;
  const Scalar _tmp208 = _tmp194 * _tmp52;
  const Scalar _tmp209 =
      _tmp101 * _tmp199 - _tmp208 * _tmp71 - _tmp31 * (_tmp101 * _tmp198 - _tmp208 * _tmp64);
  const Scalar _tmp210 = _tmp105 * (_tmp101 * _tmp195 - _tmp103 * _tmp196 - _tmp116 * _tmp209 +
                                    _tmp153 * _tmp201 - _tmp154 * _tmp194) -
                         _tmp149 * _tmp196 + _tmp150 * _tmp200 + _tmp209;
  const Scalar _tmp211 = _tmp106 * _tmp205 - _tmp107 * _tmp210;
  const Scalar _tmp212 = _tmp186 * _tmp196;
  const Scalar _tmp213 = _tmp177 * _tmp201;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp123 * (-_tmp100 * (-_tmp126 * _tmp91 + _tmp141 * _tmp90 + _tmp146 * _tmp171 -
                                       _tmp146 * _tmp172 + _tmp162 * _tmp174) -
                           _tmp112 * (-_tmp106 * _tmp138 + _tmp108 * _tmp159 - _tmp110 +
                                      _tmp155 * _tmp74 + _tmp156 * _tmp157 - _tmp158 * _tmp75) -
                           _tmp122 * (-_tmp118 * _tmp138 + _tmp119 * _tmp159 - _tmp120 -
                                      _tmp128 * _tmp169 + _tmp157 * _tmp168 + _tmp167 * _tmp74) -
                           _tmp81 * (-_tmp126 * _tmp77 + _tmp128 * _tmp142 + _tmp137 * _tmp140 -
                                     _tmp138 * _tmp33 + _tmp141 * _tmp76));
  _res(2, 0) =
      -_tmp180 * (-_tmp111 * _tmp158 + _tmp128 * _tmp181 - _tmp128 * _tmp185 + _tmp156 * _tmp176 +
                  _tmp162 * _tmp183 + _tmp168 * _tmp182 + _tmp184 * _tmp69 + _tmp187 * _tmp69);
  _res(3, 0) = -_tmp190 * (-_tmp137 * _tmp191 - _tmp137 * _tmp192 + _tmp155 * _tmp188 +
                           _tmp167 * _tmp189 - _tmp184 - _tmp187);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp123 *
      (-_tmp100 * (-_tmp127 * _tmp91 + _tmp171 * _tmp196 - _tmp172 * _tmp196 + _tmp174 * _tmp197) -
       _tmp112 * (-_tmp106 * _tmp202 + _tmp108 * _tmp127 * _tmp68 + _tmp157 * _tmp211 -
                  _tmp207 * _tmp75 + _tmp210 * _tmp74) -
       _tmp122 * (-_tmp118 * _tmp202 + _tmp127 * _tmp175 + _tmp157 * _tmp206 - _tmp169 * _tmp194 +
                  _tmp204 * _tmp74) -
       _tmp81 * (-_tmp127 * _tmp77 + _tmp140 * _tmp201 + _tmp142 * _tmp194 - _tmp202 * _tmp33));
  _res(2, 1) =
      -_tmp180 * (-_tmp111 * _tmp207 + _tmp176 * _tmp211 + _tmp181 * _tmp194 + _tmp182 * _tmp206 +
                  _tmp183 * _tmp197 - _tmp185 * _tmp194 + _tmp212 * _tmp69 + _tmp213 * _tmp69);
  _res(3, 1) = -_tmp190 * (_tmp188 * _tmp210 + _tmp189 * _tmp204 - _tmp191 * _tmp201 -
                           _tmp192 * _tmp201 - _tmp212 - _tmp213);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
