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
 * Symbolic function: IK_residual_func_cost2_wrt_pa_Nl9
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPaNl9(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1045

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (333)
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
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp10 = _tmp1 * _tmp5;
  const Scalar _tmp11 = _tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_a(0, 0);
  const Scalar _tmp20 = std::pow(_tmp19, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp2 * _tmp4;
  const Scalar _tmp24 = _tmp0 * _tmp5;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp27 + Scalar(0.20999999999999999);
  const Scalar _tmp29 = _tmp26 - _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = _tmp31 - p_a(1, 0);
  const Scalar _tmp33 = std::pow(_tmp32, Scalar(2));
  const Scalar _tmp34 = _tmp20 + _tmp33;
  const Scalar _tmp35 = std::pow(_tmp34, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = _tmp12 + _tmp15;
  const Scalar _tmp37 = _tmp36 + _tmp7;
  const Scalar _tmp38 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp39 = _tmp38 - p_c(0, 0);
  const Scalar _tmp40 = _tmp26 + _tmp28;
  const Scalar _tmp41 = _tmp21 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 - p_c(1, 0);
  const Scalar _tmp44 =
      std::sqrt(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp43, Scalar(2))));
  const Scalar _tmp45 = Scalar(1.0) / (_tmp44);
  const Scalar _tmp46 = Scalar(1.0) / (_tmp39);
  const Scalar _tmp47 = _tmp44 * _tmp46;
  const Scalar _tmp48 = _tmp47 * (_tmp37 * _tmp43 * _tmp45 - _tmp39 * _tmp41 * _tmp45);
  const Scalar _tmp49 = _tmp35 * _tmp48;
  const Scalar _tmp50 = _tmp16 + _tmp7;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - p_d(0, 0);
  const Scalar _tmp53 = _tmp22 + _tmp40;
  const Scalar _tmp54 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp55 = _tmp54 - p_d(1, 0);
  const Scalar _tmp56 = std::pow(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp55, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp57 = _tmp52 * _tmp56;
  const Scalar _tmp58 = _tmp55 * _tmp56;
  const Scalar _tmp59 = _tmp48 * _tmp57 - _tmp50 * _tmp58 + _tmp53 * _tmp57;
  const Scalar _tmp60 = _tmp43 * _tmp46;
  const Scalar _tmp61 = Scalar(1.0) / (_tmp57 * _tmp60 - _tmp58);
  const Scalar _tmp62 = _tmp32 * _tmp35;
  const Scalar _tmp63 = _tmp35 * _tmp60;
  const Scalar _tmp64 = _tmp19 * _tmp63 - _tmp62;
  const Scalar _tmp65 = _tmp61 * _tmp64;
  const Scalar _tmp66 = _tmp30 * _tmp35;
  const Scalar _tmp67 = _tmp17 * _tmp35;
  const Scalar _tmp68 = _tmp19 * _tmp49 + _tmp19 * _tmp66 - _tmp32 * _tmp67 - _tmp59 * _tmp65;
  const Scalar _tmp69 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp70 = -_tmp69;
  const Scalar _tmp71 =
      -Scalar(0.010999999999999999) * _tmp14 - Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp72 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp73 = _tmp71 + _tmp72;
  const Scalar _tmp74 = _tmp70 + _tmp73;
  const Scalar _tmp75 = _tmp69 + _tmp73;
  const Scalar _tmp76 = _tmp57 * _tmp75;
  const Scalar _tmp77 = _tmp58 * _tmp74 - _tmp60 * _tmp76;
  const Scalar _tmp78 = _tmp35 * _tmp75;
  const Scalar _tmp79 = _tmp19 * _tmp78;
  const Scalar _tmp80 = _tmp71 - _tmp72;
  const Scalar _tmp81 = _tmp70 + _tmp80;
  const Scalar _tmp82 = -_tmp60 * _tmp79 + _tmp62 * _tmp81 - _tmp65 * _tmp77;
  const Scalar _tmp83 = Scalar(1.0) * _tmp41;
  const Scalar _tmp84 = -_tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp53 + _tmp84);
  const Scalar _tmp86 = Scalar(1.0) * _tmp37;
  const Scalar _tmp87 = -_tmp50 + _tmp86;
  const Scalar _tmp88 = _tmp85 * _tmp87;
  const Scalar _tmp89 = _tmp35 * _tmp81;
  const Scalar _tmp90 = -_tmp57 * _tmp74 + _tmp76;
  const Scalar _tmp91 = -_tmp19 * _tmp89 - _tmp65 * _tmp90 + _tmp79 - _tmp82 * _tmp88;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = Scalar(1.0) * _tmp85;
  const Scalar _tmp94 = Scalar(1.0) * _tmp61;
  const Scalar _tmp95 = _tmp61 * _tmp77 * _tmp87 * _tmp93 - _tmp90 * _tmp94;
  const Scalar _tmp96 = _tmp92 * _tmp95;
  const Scalar _tmp97 = -_tmp59 * _tmp94 - _tmp68 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp99 = _tmp91 * _tmp98;
  const Scalar _tmp100 = _tmp97 * _tmp99;
  const Scalar _tmp101 = _tmp100 + _tmp95;
  const Scalar _tmp102 = std::pow(_tmp34, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp103 = _tmp102 * _tmp20;
  const Scalar _tmp104 = _tmp103 * _tmp92;
  const Scalar _tmp105 = _tmp102 * _tmp19 * _tmp32;
  const Scalar _tmp106 = _tmp103 * _tmp60 - _tmp105 - _tmp63;
  const Scalar _tmp107 = _tmp106 * _tmp61;
  const Scalar _tmp108 = _tmp60 * _tmp75;
  const Scalar _tmp109 = _tmp105 * _tmp81;
  const Scalar _tmp110 = -_tmp103 * _tmp108 - _tmp107 * _tmp77 + _tmp109 + _tmp60 * _tmp78;
  const Scalar _tmp111 =
      _tmp103 * _tmp75 - _tmp103 * _tmp81 - _tmp107 * _tmp90 - _tmp110 * _tmp88 - _tmp78 + _tmp89;
  const Scalar _tmp112 = _tmp111 * _tmp98;
  const Scalar _tmp113 = _tmp112 * _tmp97;
  const Scalar _tmp114 =
      _tmp103 * _tmp30 + _tmp103 * _tmp48 - _tmp105 * _tmp17 - _tmp107 * _tmp59 - _tmp49 - _tmp66;
  const Scalar _tmp115 = std::pow(_tmp91, Scalar(-2));
  const Scalar _tmp116 = _tmp111 * _tmp115;
  const Scalar _tmp117 = _tmp68 * _tmp95;
  const Scalar _tmp118 = _tmp99 * (-_tmp114 * _tmp96 + _tmp116 * _tmp117);
  const Scalar _tmp119 = std::pow(_tmp68, Scalar(-2));
  const Scalar _tmp120 = _tmp114 * _tmp119;
  const Scalar _tmp121 = _tmp120 * _tmp91;
  const Scalar _tmp122 = _tmp121 * _tmp97;
  const Scalar _tmp123 = _tmp113 + _tmp118 - _tmp122;
  const Scalar _tmp124 = _tmp35 * _tmp92;
  const Scalar _tmp125 = _tmp124 * _tmp19;
  const Scalar _tmp126 = _tmp101 * _tmp124;
  const Scalar _tmp127 = _tmp19 * _tmp35;
  const Scalar _tmp128 = _tmp101 * _tmp116;
  const Scalar _tmp129 = _tmp106 * _tmp92;
  const Scalar _tmp130 = _tmp101 * _tmp64;
  const Scalar _tmp131 = _tmp64 * _tmp92;
  const Scalar _tmp132 = -_tmp101 * _tmp129 + _tmp116 * _tmp130 - _tmp123 * _tmp131;
  const Scalar _tmp133 = _tmp57 * _tmp61;
  const Scalar _tmp134 = _tmp36 + _tmp8;
  const Scalar _tmp135 = _tmp134 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp136 = _tmp21 + _tmp29;
  const Scalar _tmp137 = _tmp136 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp138 =
      std::pow(Scalar(std::pow(_tmp135, Scalar(2)) + std::pow(_tmp137, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp139 = _tmp137 * _tmp138;
  const Scalar _tmp140 = _tmp139 * fh1;
  const Scalar _tmp141 = _tmp140 * _tmp47;
  const Scalar _tmp142 = _tmp83 * _tmp88 + _tmp86;
  const Scalar _tmp143 = 0;
  const Scalar _tmp144 = _tmp143 * _tmp92;
  const Scalar _tmp145 = _tmp144 * _tmp35;
  const Scalar _tmp146 = _tmp116 * _tmp143;
  const Scalar _tmp147 = _tmp57 * _tmp65;
  const Scalar _tmp148 = _tmp144 * _tmp57;
  const Scalar _tmp149 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp150 = _tmp149 * _tmp47;
  const Scalar _tmp151 = _tmp60 * _tmp61;
  const Scalar _tmp152 = _tmp108 + _tmp151 * _tmp77;
  const Scalar _tmp153 = _tmp151 * _tmp90 - _tmp152 * _tmp88 - _tmp75;
  const Scalar _tmp154 = _tmp153 * _tmp92;
  const Scalar _tmp155 = _tmp151 * _tmp59 - _tmp154 * _tmp68 - _tmp48;
  const Scalar _tmp156 = _tmp155 * _tmp99;
  const Scalar _tmp157 = _tmp153 + _tmp156;
  const Scalar _tmp158 = _tmp124 * _tmp157;
  const Scalar _tmp159 = _tmp112 * _tmp155;
  const Scalar _tmp160 = _tmp153 * _tmp68;
  const Scalar _tmp161 = _tmp99 * (-_tmp114 * _tmp154 + _tmp116 * _tmp160);
  const Scalar _tmp162 = _tmp121 * _tmp155;
  const Scalar _tmp163 = _tmp159 + _tmp161 - _tmp162;
  const Scalar _tmp164 = _tmp116 * _tmp157;
  const Scalar _tmp165 = -_tmp129 * _tmp157 - _tmp131 * _tmp163 + _tmp164 * _tmp64;
  const Scalar _tmp166 = _tmp135 * _tmp138;
  const Scalar _tmp167 = _tmp166 * fh1;
  const Scalar _tmp168 = _tmp167 * _tmp47;
  const Scalar _tmp169 = Scalar(1.0) * _tmp127;
  const Scalar _tmp170 = Scalar(1.0) * _tmp98;
  const Scalar _tmp171 = _tmp170 * _tmp57;
  const Scalar _tmp172 = _tmp170 * _tmp35;
  const Scalar _tmp173 = Scalar(1.0) * _tmp147;
  const Scalar _tmp174 = fh1 * (_tmp134 * _tmp139 - _tmp136 * _tmp166);
  const Scalar _tmp175 = _tmp174 * _tmp47;
  const Scalar _tmp176 = -_tmp141 * (_tmp101 * _tmp104 + _tmp123 * _tmp125 - _tmp126 -
                                     _tmp127 * _tmp128 + _tmp132 * _tmp133) -
                         _tmp150 * (_tmp103 * _tmp144 - _tmp107 * _tmp148 - _tmp127 * _tmp146 -
                                    _tmp145 + _tmp146 * _tmp147) -
                         _tmp168 * (_tmp104 * _tmp157 + _tmp125 * _tmp163 - _tmp127 * _tmp164 +
                                    _tmp133 * _tmp165 - _tmp158) -
                         _tmp175 * (_tmp103 * _tmp170 - _tmp107 * _tmp171 - _tmp120 * _tmp169 +
                                    _tmp120 * _tmp173 - _tmp172);
  const Scalar _tmp177 = -_tmp101 * _tmp131 + Scalar(1.0);
  const Scalar _tmp178 = -_tmp131 * _tmp157 - _tmp60;
  const Scalar _tmp179 = -_tmp141 * (_tmp126 * _tmp19 + _tmp133 * _tmp177) -
                         _tmp150 * (_tmp145 * _tmp19 - _tmp148 * _tmp65) -
                         _tmp168 * (_tmp133 * _tmp178 + _tmp158 * _tmp19 + Scalar(1.0)) -
                         _tmp175 * (-_tmp171 * _tmp65 + _tmp172 * _tmp19);
  const Scalar _tmp180 = std::pow(_tmp179, Scalar(-2));
  const Scalar _tmp181 = _tmp30 + _tmp84;
  const Scalar _tmp182 = _tmp181 * _tmp88;
  const Scalar _tmp183 = Scalar(1.0) / (-_tmp17 - _tmp182 + _tmp86);
  const Scalar _tmp184 = _tmp142 * _tmp183;
  const Scalar _tmp185 = -_tmp144 * _tmp82 - _tmp181 * _tmp184 + _tmp84;
  const Scalar _tmp186 = Scalar(1.0) * _tmp183;
  const Scalar _tmp187 = _tmp181 * _tmp85;
  const Scalar _tmp188 = fh1 * (_tmp69 + _tmp80);
  const Scalar _tmp189 = Scalar(40.024799999999999) * _tmp11 + _tmp134 * fv1 + _tmp166 * _tmp188;
  const Scalar _tmp190 = _tmp82 * _tmp92;
  const Scalar _tmp191 = _tmp181 * _tmp183;
  const Scalar _tmp192 = _tmp152 + _tmp156 * _tmp191 - _tmp157 * _tmp190;
  const Scalar _tmp193 = Scalar(1.0) * _tmp167;
  const Scalar _tmp194 = _tmp186 * _tmp99;
  const Scalar _tmp195 = -_tmp170 * _tmp82 + _tmp181 * _tmp194;
  const Scalar _tmp196 = Scalar(1.0) * _tmp174;
  const Scalar _tmp197 = _tmp100 * _tmp191 - _tmp101 * _tmp190 - _tmp77 * _tmp94;
  const Scalar _tmp198 = Scalar(1.0) * _tmp140;
  const Scalar _tmp199 = -_tmp136 * fv1 - _tmp139 * _tmp188 - Scalar(40.024799999999999) * _tmp25;
  const Scalar _tmp200 = _tmp182 * _tmp186 + Scalar(1.0);
  const Scalar _tmp201 = _tmp186 * _tmp88;
  const Scalar _tmp202 =
      Scalar(1.0) * _tmp149 * (-_tmp142 * _tmp186 - _tmp185 * _tmp93 + Scalar(1.0)) +
      Scalar(1.0) * _tmp189 * (_tmp186 * _tmp187 - _tmp186) +
      _tmp193 * (_tmp156 * _tmp186 - _tmp192 * _tmp93) + _tmp196 * (_tmp194 - _tmp195 * _tmp93) +
      _tmp198 * (_tmp100 * _tmp186 - _tmp197 * _tmp93) +
      Scalar(1.0) * _tmp199 * (-_tmp200 * _tmp93 + _tmp201);
  const Scalar _tmp203 = _tmp180 * _tmp202;
  const Scalar _tmp204 = Scalar(1.0) / (_tmp179);
  const Scalar _tmp205 = _tmp110 * _tmp92;
  const Scalar _tmp206 = _tmp116 * _tmp82;
  const Scalar _tmp207 = -_tmp157 * _tmp205 + _tmp157 * _tmp206 + _tmp159 * _tmp191 +
                         _tmp161 * _tmp191 - _tmp162 * _tmp191 - _tmp163 * _tmp190;
  const Scalar _tmp208 = _tmp149 * _tmp85;
  const Scalar _tmp209 = _tmp208 * (-_tmp110 * _tmp144 + _tmp143 * _tmp206);
  const Scalar _tmp210 = -_tmp101 * _tmp205 + _tmp101 * _tmp206 + _tmp113 * _tmp191 +
                         _tmp118 * _tmp191 - _tmp122 * _tmp191 - _tmp123 * _tmp190;
  const Scalar _tmp211 = Scalar(1.0) * _tmp82;
  const Scalar _tmp212 = _tmp112 * _tmp186;
  const Scalar _tmp213 = _tmp121 * _tmp186;
  const Scalar _tmp214 =
      -_tmp110 * _tmp170 + _tmp120 * _tmp211 + _tmp181 * _tmp212 - _tmp181 * _tmp213;
  const Scalar _tmp215 =
      -_tmp176 * _tmp203 + _tmp204 * (_tmp193 * (_tmp159 * _tmp186 + _tmp161 * _tmp186 -
                                                 _tmp162 * _tmp186 - _tmp207 * _tmp93) +
                                      _tmp196 * (_tmp212 - _tmp213 - _tmp214 * _tmp93) +
                                      _tmp198 * (_tmp113 * _tmp186 + _tmp118 * _tmp186 -
                                                 _tmp122 * _tmp186 - _tmp210 * _tmp93) -
                                      Scalar(1.0) * _tmp209);
  const Scalar _tmp216 =
      std::pow(Scalar(_tmp180 * std::pow(_tmp202, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp217 = std::asinh(_tmp202 * _tmp204);
  const Scalar _tmp218 = Scalar(1.0) * _tmp217;
  const Scalar _tmp219 = Scalar(1.0) * _tmp216 * std::cosh(_tmp218);
  const Scalar _tmp220 = Scalar(1.4083112389913199) * _tmp179;
  const Scalar _tmp221 =
      -_tmp217 * _tmp220 - std::sqrt(Scalar(std::pow(Scalar(-_tmp38 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp42 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp222 = Scalar(0.71007031138673404) * _tmp204;
  const Scalar _tmp223 = _tmp221 * _tmp222;
  const Scalar _tmp224 = std::cosh(_tmp223);
  const Scalar _tmp225 = _tmp216 * _tmp220;
  const Scalar _tmp226 = Scalar(1.4083112389913199) * _tmp176;
  const Scalar _tmp227 = Scalar(0.71007031138673404) * _tmp180 * _tmp221;
  const Scalar _tmp228 = -std::sinh(_tmp218) - std::sinh(_tmp223);
  const Scalar _tmp229 = _tmp167 * _tmp85;
  const Scalar _tmp230 = _tmp186 * _tmp189;
  const Scalar _tmp231 = _tmp140 * _tmp85;
  const Scalar _tmp232 = _tmp174 * _tmp85;
  const Scalar _tmp233 = _tmp185 * _tmp208 - _tmp187 * _tmp230 + _tmp192 * _tmp229 +
                         _tmp195 * _tmp232 + _tmp197 * _tmp231 + _tmp199 * _tmp200 * _tmp85;
  const Scalar _tmp234 = _tmp144 * _tmp149;
  const Scalar _tmp235 = _tmp140 * _tmp61;
  const Scalar _tmp236 = _tmp170 * _tmp174;
  const Scalar _tmp237 = _tmp167 * _tmp61;
  const Scalar _tmp238 =
      _tmp177 * _tmp235 + _tmp178 * _tmp237 - _tmp234 * _tmp65 - _tmp236 * _tmp65;
  const Scalar _tmp239 = Scalar(1.0) / (_tmp238);
  const Scalar _tmp240 = std::asinh(_tmp233 * _tmp239);
  const Scalar _tmp241 = Scalar(1.4083112389913199) * _tmp238;
  const Scalar _tmp242 =
      -_tmp240 * _tmp241 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp54 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp243 = Scalar(0.71007031138673404) * _tmp239;
  const Scalar _tmp244 = _tmp242 * _tmp243;
  const Scalar _tmp245 = Scalar(1.0) * _tmp240;
  const Scalar _tmp246 = -std::sinh(_tmp244) - std::sinh(_tmp245);
  const Scalar _tmp247 = _tmp120 * _tmp196;
  const Scalar _tmp248 = _tmp146 * _tmp149;
  const Scalar _tmp249 = -_tmp107 * _tmp234 - _tmp107 * _tmp236 + _tmp132 * _tmp235 +
                         _tmp165 * _tmp237 + _tmp247 * _tmp65 + _tmp248 * _tmp65;
  const Scalar _tmp250 = Scalar(1.4083112389913199) * _tmp249;
  const Scalar _tmp251 = std::cosh(_tmp244);
  const Scalar _tmp252 = std::pow(_tmp238, Scalar(-2));
  const Scalar _tmp253 = Scalar(0.71007031138673404) * _tmp242 * _tmp252;
  const Scalar _tmp254 =
      std::pow(Scalar(std::pow(_tmp233, Scalar(2)) * _tmp252 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp255 = _tmp233 * _tmp252;
  const Scalar _tmp256 =
      _tmp254 * (_tmp239 * (_tmp207 * _tmp229 + _tmp209 + _tmp210 * _tmp231 + _tmp214 * _tmp232) -
                 _tmp249 * _tmp255);
  const Scalar _tmp257 = Scalar(1.0) * std::cosh(_tmp245);
  const Scalar _tmp258 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp259 = -_tmp81 + p_a(2, 0) - position_vector(2, 0);
  const Scalar _tmp260 = -_tmp31 + p_a(1, 0);
  const Scalar _tmp261 = std::pow(_tmp258, Scalar(2)) + std::pow(_tmp260, Scalar(2));
  const Scalar _tmp262 =
      std::pow(Scalar(std::pow(_tmp259, Scalar(2)) + _tmp261), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp263 = _tmp167 * _tmp183;
  const Scalar _tmp264 = _tmp140 * _tmp183;
  const Scalar _tmp265 = -_tmp100 * _tmp264 + _tmp149 * _tmp184 - _tmp156 * _tmp263 -
                         _tmp174 * _tmp194 - _tmp199 * _tmp201 + _tmp230;
  const Scalar _tmp266 = _tmp157 * _tmp92;
  const Scalar _tmp267 = _tmp101 * _tmp92;
  const Scalar _tmp268 = _tmp140 * _tmp267 + _tmp167 * _tmp266 + _tmp234 + _tmp236;
  const Scalar _tmp269 = Scalar(1.0) / (_tmp268);
  const Scalar _tmp270 = std::asinh(_tmp265 * _tmp269);
  const Scalar _tmp271 = Scalar(1.0) * _tmp270;
  const Scalar _tmp272 = std::sqrt(_tmp261);
  const Scalar _tmp273 = Scalar(1.4083112389913199) * _tmp268;
  const Scalar _tmp274 = -_tmp270 * _tmp273 - _tmp272;
  const Scalar _tmp275 = Scalar(0.71007031138673404) * _tmp269;
  const Scalar _tmp276 = _tmp274 * _tmp275;
  const Scalar _tmp277 = -std::sinh(_tmp271) - std::sinh(_tmp276);
  const Scalar _tmp278 = _tmp140 * _tmp92;
  const Scalar _tmp279 = _tmp167 * _tmp92;
  const Scalar _tmp280 = _tmp123 * _tmp278 - _tmp128 * _tmp140 + _tmp163 * _tmp279 -
                         _tmp164 * _tmp167 - _tmp247 - _tmp248;
  const Scalar _tmp281 = Scalar(1.4083112389913199) * _tmp280;
  const Scalar _tmp282 = std::pow(_tmp268, Scalar(-2));
  const Scalar _tmp283 = Scalar(0.71007031138673404) * _tmp274 * _tmp282;
  const Scalar _tmp284 = _tmp265 * _tmp282;
  const Scalar _tmp285 =
      _tmp269 * (-_tmp113 * _tmp264 - _tmp118 * _tmp264 + _tmp122 * _tmp264 - _tmp159 * _tmp263 -
                 _tmp161 * _tmp263 + _tmp162 * _tmp263 - _tmp174 * _tmp212 + _tmp174 * _tmp213) -
      _tmp280 * _tmp284;
  const Scalar _tmp286 =
      std::pow(Scalar(std::pow(_tmp265, Scalar(2)) * _tmp282 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp287 = _tmp273 * _tmp286;
  const Scalar _tmp288 = Scalar(1.0) / (_tmp272);
  const Scalar _tmp289 = std::cosh(_tmp276);
  const Scalar _tmp290 = Scalar(1.0) * _tmp286 * std::cosh(_tmp271);
  const Scalar _tmp291 = _tmp102 * _tmp33;
  const Scalar _tmp292 = _tmp105 * _tmp60 - _tmp291 + _tmp35;
  const Scalar _tmp293 = _tmp292 * _tmp61;
  const Scalar _tmp294 = -_tmp105 * _tmp108 + _tmp291 * _tmp81 - _tmp293 * _tmp77 - _tmp89;
  const Scalar _tmp295 = _tmp105 * _tmp75 - _tmp109 - _tmp293 * _tmp90 - _tmp294 * _tmp88;
  const Scalar _tmp296 = _tmp115 * _tmp295;
  const Scalar _tmp297 = _tmp101 * _tmp296;
  const Scalar _tmp298 = _tmp292 * _tmp92;
  const Scalar _tmp299 =
      _tmp105 * _tmp30 + _tmp105 * _tmp48 - _tmp17 * _tmp291 - _tmp293 * _tmp59 + _tmp67;
  const Scalar _tmp300 = _tmp99 * (_tmp117 * _tmp296 - _tmp299 * _tmp96);
  const Scalar _tmp301 = _tmp119 * _tmp299;
  const Scalar _tmp302 = _tmp301 * _tmp91;
  const Scalar _tmp303 = _tmp302 * _tmp97;
  const Scalar _tmp304 = _tmp295 * _tmp98;
  const Scalar _tmp305 = _tmp304 * _tmp97;
  const Scalar _tmp306 = _tmp300 - _tmp303 + _tmp305;
  const Scalar _tmp307 = -_tmp101 * _tmp298 + _tmp130 * _tmp296 - _tmp131 * _tmp306;
  const Scalar _tmp308 = _tmp155 * _tmp304;
  const Scalar _tmp309 = _tmp155 * _tmp302;
  const Scalar _tmp310 = _tmp99 * (-_tmp154 * _tmp299 + _tmp160 * _tmp296);
  const Scalar _tmp311 = _tmp308 - _tmp309 + _tmp310;
  const Scalar _tmp312 = _tmp157 * _tmp296;
  const Scalar _tmp313 = -_tmp131 * _tmp311 - _tmp157 * _tmp298 + _tmp312 * _tmp64;
  const Scalar _tmp314 = _tmp143 * _tmp296;
  const Scalar _tmp315 =
      -_tmp141 * (_tmp105 * _tmp267 + _tmp125 * _tmp306 - _tmp127 * _tmp297 + _tmp133 * _tmp307) -
      _tmp150 * (_tmp105 * _tmp144 - _tmp127 * _tmp314 + _tmp147 * _tmp314 - _tmp148 * _tmp293) -
      _tmp168 * (_tmp105 * _tmp266 + _tmp125 * _tmp311 - _tmp127 * _tmp312 + _tmp133 * _tmp313) -
      _tmp175 * (_tmp105 * _tmp170 - _tmp169 * _tmp301 - _tmp171 * _tmp293 + _tmp173 * _tmp301);
  const Scalar _tmp316 = Scalar(1.4083112389913199) * _tmp315;
  const Scalar _tmp317 = _tmp186 * _tmp302;
  const Scalar _tmp318 = _tmp186 * _tmp304;
  const Scalar _tmp319 =
      -_tmp170 * _tmp294 - _tmp181 * _tmp317 + _tmp181 * _tmp318 + _tmp211 * _tmp301;
  const Scalar _tmp320 = _tmp294 * _tmp92;
  const Scalar _tmp321 = -_tmp157 * _tmp320 - _tmp190 * _tmp311 + _tmp191 * _tmp308 -
                         _tmp191 * _tmp309 + _tmp191 * _tmp310 + _tmp312 * _tmp82;
  const Scalar _tmp322 = -_tmp101 * _tmp320 - _tmp190 * _tmp306 + _tmp191 * _tmp300 -
                         _tmp191 * _tmp303 + _tmp191 * _tmp305 + _tmp297 * _tmp82;
  const Scalar _tmp323 = _tmp208 * (-_tmp143 * _tmp320 + _tmp314 * _tmp82);
  const Scalar _tmp324 =
      -_tmp203 * _tmp315 + _tmp204 * (_tmp193 * (_tmp186 * _tmp308 - _tmp186 * _tmp309 +
                                                 _tmp186 * _tmp310 - _tmp321 * _tmp93) +
                                      _tmp196 * (-_tmp317 + _tmp318 - _tmp319 * _tmp93) +
                                      _tmp198 * (_tmp186 * _tmp300 - _tmp186 * _tmp303 +
                                                 _tmp186 * _tmp305 - _tmp322 * _tmp93) -
                                      Scalar(1.0) * _tmp323);
  const Scalar _tmp325 = _tmp149 * _tmp314;
  const Scalar _tmp326 = _tmp196 * _tmp301;
  const Scalar _tmp327 = -_tmp234 * _tmp293 + _tmp235 * _tmp307 - _tmp236 * _tmp293 +
                         _tmp237 * _tmp313 + _tmp325 * _tmp65 + _tmp326 * _tmp65;
  const Scalar _tmp328 = Scalar(1.4083112389913199) * _tmp327;
  const Scalar _tmp329 =
      _tmp254 * (_tmp239 * (_tmp229 * _tmp321 + _tmp231 * _tmp322 + _tmp232 * _tmp319 + _tmp323) -
                 _tmp255 * _tmp327);
  const Scalar _tmp330 = -_tmp140 * _tmp297 - _tmp167 * _tmp312 + _tmp278 * _tmp306 +
                         _tmp279 * _tmp311 - _tmp325 - _tmp326;
  const Scalar _tmp331 = Scalar(1.4083112389913199) * _tmp330;
  const Scalar _tmp332 =
      _tmp269 * (_tmp174 * _tmp317 - _tmp174 * _tmp318 - _tmp263 * _tmp308 + _tmp263 * _tmp309 -
                 _tmp263 * _tmp310 - _tmp264 * _tmp300 + _tmp264 * _tmp303 - _tmp264 * _tmp305) -
      _tmp284 * _tmp330;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp220 *
          (-_tmp215 * _tmp219 -
           _tmp224 * (-_tmp176 * _tmp227 + _tmp222 * (-_tmp215 * _tmp225 - _tmp217 * _tmp226))) +
      _tmp226 * _tmp228;
  _res(2, 0) =
      _tmp241 *
          (-_tmp251 * (_tmp243 * (-_tmp240 * _tmp250 - _tmp241 * _tmp256) - _tmp249 * _tmp253) -
           _tmp256 * _tmp257) +
      _tmp246 * _tmp250;
  _res(3, 0) =
      -_tmp258 * _tmp262 +
      _tmp273 * (-_tmp285 * _tmp290 -
                 _tmp289 * (_tmp275 * (-_tmp258 * _tmp288 - _tmp270 * _tmp281 - _tmp285 * _tmp287) -
                            _tmp280 * _tmp283)) +
      _tmp277 * _tmp281;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp220 *
          (-_tmp219 * _tmp324 -
           _tmp224 * (_tmp222 * (-_tmp217 * _tmp316 - _tmp225 * _tmp324) - _tmp227 * _tmp315)) +
      _tmp228 * _tmp316;
  _res(2, 1) =
      _tmp241 *
          (-_tmp251 * (_tmp243 * (-_tmp240 * _tmp328 - _tmp241 * _tmp329) - _tmp253 * _tmp327) -
           _tmp257 * _tmp329) +
      _tmp246 * _tmp328;
  _res(3, 1) =
      -_tmp260 * _tmp262 +
      _tmp273 *
          (-_tmp289 * (_tmp275 * (-_tmp260 * _tmp288 - _tmp270 * _tmp331 - _tmp287 * _tmp332) -
                       _tmp283 * _tmp330) -
           _tmp290 * _tmp332) +
      _tmp277 * _tmp331;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = -_tmp259 * _tmp262;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym