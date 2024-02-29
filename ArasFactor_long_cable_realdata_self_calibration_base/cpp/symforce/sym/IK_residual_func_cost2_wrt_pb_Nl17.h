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
 * Symbolic function: IK_residual_func_cost2_wrt_pb_Nl17
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPbNl17(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1154

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (363)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp0 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp2;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp0 * _tmp8;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_d(0, 0);
  const Scalar _tmp20 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp0 * _tmp12;
  const Scalar _tmp24 = _tmp6 * _tmp8;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp27 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp29 = _tmp26 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = _tmp31 - p_d(1, 0);
  const Scalar _tmp33 = _tmp20 * _tmp32;
  const Scalar _tmp34 = _tmp11 - _tmp15;
  const Scalar _tmp35 = _tmp34 + _tmp4;
  const Scalar _tmp36 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp37 = _tmp36 - p_b(0, 0);
  const Scalar _tmp38 = std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 = _tmp26 - _tmp28;
  const Scalar _tmp40 = _tmp21 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp41 - p_b(1, 0);
  const Scalar _tmp43 = std::pow(_tmp42, Scalar(2));
  const Scalar _tmp44 = _tmp38 + _tmp43;
  const Scalar _tmp45 = std::pow(_tmp44, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp46 = _tmp38 * _tmp45;
  const Scalar _tmp47 = std::pow(_tmp44, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp33 * _tmp47;
  const Scalar _tmp49 = _tmp37 * _tmp42 * _tmp45;
  const Scalar _tmp50 = _tmp33 * _tmp46 - _tmp48 - _tmp49;
  const Scalar _tmp51 = _tmp34 + _tmp5;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 - p_a(0, 0);
  const Scalar _tmp54 = _tmp22 + _tmp39;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_a(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = _tmp56 * _tmp57;
  const Scalar _tmp60 = _tmp33 * _tmp58 - _tmp59;
  const Scalar _tmp61 = _tmp42 * _tmp47;
  const Scalar _tmp62 = _tmp37 * _tmp48 - _tmp61;
  const Scalar _tmp63 = std::pow(_tmp62, Scalar(-2));
  const Scalar _tmp64 = _tmp60 * _tmp63;
  const Scalar _tmp65 = _tmp50 * _tmp64;
  const Scalar _tmp66 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp32, Scalar(2))));
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 = _tmp20 * _tmp66;
  const Scalar _tmp69 = _tmp68 * (_tmp17 * _tmp32 * _tmp67 - _tmp19 * _tmp30 * _tmp67);
  const Scalar _tmp70 = _tmp40 * _tmp47;
  const Scalar _tmp71 = _tmp47 * _tmp69;
  const Scalar _tmp72 = -_tmp35 * _tmp61 + _tmp37 * _tmp70 + _tmp37 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp74 = _tmp60 * _tmp73;
  const Scalar _tmp75 = -_tmp51 * _tmp59 + _tmp54 * _tmp58 + _tmp58 * _tmp69 - _tmp72 * _tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp77 = Scalar(1.0) * _tmp76;
  const Scalar _tmp78 = _tmp37 * _tmp47;
  const Scalar _tmp79 = _tmp77 * _tmp78;
  const Scalar _tmp80 = Scalar(1.0) * _tmp73;
  const Scalar _tmp81 = _tmp60 * _tmp80;
  const Scalar _tmp82 = _tmp76 * _tmp81;
  const Scalar _tmp83 = -_tmp35 * _tmp49 + _tmp40 * _tmp46 + _tmp46 * _tmp69 - _tmp70 - _tmp71;
  const Scalar _tmp84 = _tmp65 * _tmp72 - _tmp74 * _tmp83;
  const Scalar _tmp85 = std::pow(_tmp75, Scalar(-2));
  const Scalar _tmp86 = Scalar(1.0) * _tmp85;
  const Scalar _tmp87 = _tmp58 * _tmp86;
  const Scalar _tmp88 = _tmp81 * _tmp85;
  const Scalar _tmp89 = _tmp84 * _tmp88;
  const Scalar _tmp90 = _tmp21 + _tmp29;
  const Scalar _tmp91 = _tmp16 + _tmp4;
  const Scalar _tmp92 = _tmp91 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp93 = _tmp90 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp94 = std::pow(Scalar(std::pow(_tmp92, Scalar(2)) + std::pow(_tmp93, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp95 = _tmp92 * _tmp94;
  const Scalar _tmp96 = _tmp93 * _tmp94;
  const Scalar _tmp97 = fh1 * (-_tmp90 * _tmp95 + _tmp91 * _tmp96);
  const Scalar _tmp98 = _tmp68 * _tmp97;
  const Scalar _tmp99 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp100 = -_tmp99;
  const Scalar _tmp101 =
      -Scalar(0.010999999999999999) * _tmp27 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp102 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp103 = _tmp101 - _tmp102;
  const Scalar _tmp104 = _tmp100 + _tmp103;
  const Scalar _tmp105 = _tmp101 + _tmp102;
  const Scalar _tmp106 = _tmp100 + _tmp105;
  const Scalar _tmp107 = _tmp103 + _tmp99;
  const Scalar _tmp108 = _tmp107 * _tmp47;
  const Scalar _tmp109 = _tmp108 * _tmp37;
  const Scalar _tmp110 = _tmp106 * _tmp61 - _tmp109 * _tmp33;
  const Scalar _tmp111 = _tmp107 * _tmp58;
  const Scalar _tmp112 = _tmp104 * _tmp59 - _tmp110 * _tmp74 - _tmp111 * _tmp33;
  const Scalar _tmp113 = Scalar(1.0) * _tmp17;
  const Scalar _tmp114 = Scalar(1.0) * _tmp30;
  const Scalar _tmp115 = -_tmp114;
  const Scalar _tmp116 = Scalar(1.0) / (_tmp115 + _tmp40);
  const Scalar _tmp117 = _tmp116 * (_tmp113 - _tmp35);
  const Scalar _tmp118 = _tmp106 * _tmp47;
  const Scalar _tmp119 = _tmp109 - _tmp118 * _tmp37;
  const Scalar _tmp120 = -_tmp104 * _tmp58 + _tmp111 - _tmp112 * _tmp117 - _tmp119 * _tmp74;
  const Scalar _tmp121 = _tmp33 * _tmp73;
  const Scalar _tmp122 = Scalar(1.0) / (_tmp120);
  const Scalar _tmp123 = _tmp107 * _tmp33;
  const Scalar _tmp124 = _tmp110 * _tmp121 + _tmp123;
  const Scalar _tmp125 = -_tmp107 - _tmp117 * _tmp124 + _tmp119 * _tmp121;
  const Scalar _tmp126 = _tmp122 * _tmp125;
  const Scalar _tmp127 = _tmp121 * _tmp72 - _tmp126 * _tmp75 - _tmp69;
  const Scalar _tmp128 = _tmp127 * _tmp76;
  const Scalar _tmp129 = _tmp120 * _tmp128;
  const Scalar _tmp130 = _tmp125 + _tmp129;
  const Scalar _tmp131 = _tmp122 * _tmp60;
  const Scalar _tmp132 = -_tmp130 * _tmp131 - _tmp33;
  const Scalar _tmp133 = _tmp46 * _tmp73;
  const Scalar _tmp134 = _tmp107 * _tmp46;
  const Scalar _tmp135 = -_tmp106 * _tmp46 - _tmp108 + _tmp118 + _tmp134;
  const Scalar _tmp136 = _tmp106 * _tmp49;
  const Scalar _tmp137 = _tmp108 * _tmp33 - _tmp134 * _tmp33 + _tmp136;
  const Scalar _tmp138 = _tmp110 * _tmp50;
  const Scalar _tmp139 = -_tmp137 * _tmp74 + _tmp138 * _tmp64;
  const Scalar _tmp140 = -_tmp117 * _tmp139 + _tmp119 * _tmp65 - _tmp135 * _tmp74;
  const Scalar _tmp141 = _tmp128 * _tmp140;
  const Scalar _tmp142 = _tmp125 * _tmp75;
  const Scalar _tmp143 = std::pow(_tmp120, Scalar(-2));
  const Scalar _tmp144 = _tmp140 * _tmp143;
  const Scalar _tmp145 = _tmp33 * _tmp63;
  const Scalar _tmp146 = _tmp121 * _tmp137 - _tmp138 * _tmp145;
  const Scalar _tmp147 = _tmp145 * _tmp50;
  const Scalar _tmp148 = -_tmp117 * _tmp146 - _tmp119 * _tmp147 + _tmp121 * _tmp135;
  const Scalar _tmp149 = _tmp122 * _tmp75;
  const Scalar _tmp150 = _tmp120 * _tmp76;
  const Scalar _tmp151 = _tmp150 * (_tmp121 * _tmp83 - _tmp126 * _tmp84 + _tmp142 * _tmp144 -
                                    _tmp147 * _tmp72 - _tmp148 * _tmp149);
  const Scalar _tmp152 = _tmp120 * _tmp85;
  const Scalar _tmp153 = _tmp152 * _tmp84;
  const Scalar _tmp154 = _tmp127 * _tmp153;
  const Scalar _tmp155 = _tmp141 + _tmp148 + _tmp151 - _tmp154;
  const Scalar _tmp156 = _tmp130 * _tmp144;
  const Scalar _tmp157 = -_tmp131 * _tmp155 + _tmp156 * _tmp60;
  const Scalar _tmp158 = _tmp47 * _tmp73;
  const Scalar _tmp159 = _tmp158 * _tmp37;
  const Scalar _tmp160 = _tmp50 * _tmp63;
  const Scalar _tmp161 = _tmp160 * _tmp78;
  const Scalar _tmp162 = _tmp132 * _tmp158;
  const Scalar _tmp163 = _tmp122 * _tmp58;
  const Scalar _tmp164 = _tmp95 * fh1;
  const Scalar _tmp165 = _tmp164 * _tmp68;
  const Scalar _tmp166 = _tmp110 * _tmp80;
  const Scalar _tmp167 = _tmp117 * _tmp166 - _tmp119 * _tmp80;
  const Scalar _tmp168 = -_tmp149 * _tmp167 - _tmp72 * _tmp80;
  const Scalar _tmp169 = _tmp168 * _tmp76;
  const Scalar _tmp170 = _tmp120 * _tmp169;
  const Scalar _tmp171 = _tmp167 + _tmp170;
  const Scalar _tmp172 = _tmp144 * _tmp171;
  const Scalar _tmp173 = _tmp140 * _tmp169;
  const Scalar _tmp174 = _tmp153 * _tmp168;
  const Scalar _tmp175 = Scalar(1.0) * _tmp63;
  const Scalar _tmp176 = _tmp138 * _tmp175;
  const Scalar _tmp177 = _tmp137 * _tmp80;
  const Scalar _tmp178 = _tmp175 * _tmp50;
  const Scalar _tmp179 =
      -_tmp117 * _tmp176 + _tmp117 * _tmp177 + _tmp119 * _tmp178 - _tmp135 * _tmp80;
  const Scalar _tmp180 = _tmp167 * _tmp75;
  const Scalar _tmp181 = _tmp122 * _tmp167;
  const Scalar _tmp182 = _tmp150 * (_tmp144 * _tmp180 - _tmp149 * _tmp179 + _tmp178 * _tmp72 -
                                    _tmp181 * _tmp84 - _tmp80 * _tmp83);
  const Scalar _tmp183 = _tmp173 - _tmp174 + _tmp179 + _tmp182;
  const Scalar _tmp184 = -_tmp131 * _tmp183 + _tmp172 * _tmp60;
  const Scalar _tmp185 = _tmp122 * _tmp171;
  const Scalar _tmp186 = -_tmp185 * _tmp60 + Scalar(1.0);
  const Scalar _tmp187 = _tmp158 * _tmp186;
  const Scalar _tmp188 = _tmp96 * fh1;
  const Scalar _tmp189 = _tmp188 * _tmp68;
  const Scalar _tmp190 = _tmp113 + _tmp114 * _tmp117;
  const Scalar _tmp191 = 0;
  const Scalar _tmp192 = _tmp122 * _tmp191;
  const Scalar _tmp193 = _tmp192 * _tmp74;
  const Scalar _tmp194 = _tmp193 * _tmp47;
  const Scalar _tmp195 = _tmp144 * _tmp191;
  const Scalar _tmp196 = _tmp74 * _tmp78;
  const Scalar _tmp197 = _tmp192 * _tmp78;
  const Scalar _tmp198 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp199 = _tmp198 * _tmp68;
  const Scalar _tmp200 = -_tmp165 * (_tmp132 * _tmp133 - _tmp132 * _tmp161 + _tmp155 * _tmp163 -
                                     _tmp156 * _tmp58 + _tmp157 * _tmp159 - _tmp162) -
                         _tmp189 * (_tmp133 * _tmp186 + _tmp159 * _tmp184 - _tmp161 * _tmp186 +
                                    _tmp163 * _tmp183 - _tmp172 * _tmp58 - _tmp187) -
                         _tmp199 * (-_tmp193 * _tmp46 + _tmp194 + _tmp195 * _tmp196 -
                                    _tmp195 * _tmp58 + _tmp197 * _tmp65) -
                         _tmp98 * (-_tmp46 * _tmp82 + _tmp47 * _tmp82 + _tmp65 * _tmp79 +
                                   _tmp78 * _tmp89 - _tmp84 * _tmp87);
  const Scalar _tmp201 = _tmp122 * _tmp130;
  const Scalar _tmp202 = -_tmp165 * (_tmp162 * _tmp37 + _tmp201 * _tmp58 + Scalar(1.0)) -
                         _tmp189 * (_tmp185 * _tmp58 + _tmp187 * _tmp37) -
                         _tmp199 * (_tmp192 * _tmp58 - _tmp194 * _tmp37) -
                         _tmp98 * (_tmp58 * _tmp77 - _tmp78 * _tmp82);
  const Scalar _tmp203 = Scalar(1.0) / (_tmp202);
  const Scalar _tmp204 = _tmp115 + _tmp54;
  const Scalar _tmp205 = _tmp117 * _tmp204;
  const Scalar _tmp206 = Scalar(1.0) / (_tmp113 - _tmp205 - _tmp51);
  const Scalar _tmp207 = Scalar(1.0) * _tmp206;
  const Scalar _tmp208 = _tmp204 * _tmp206;
  const Scalar _tmp209 = -_tmp112 * _tmp185 - _tmp166 + _tmp170 * _tmp208;
  const Scalar _tmp210 = Scalar(1.0) * _tmp116;
  const Scalar _tmp211 = Scalar(1.0) * _tmp188;
  const Scalar _tmp212 = _tmp150 * _tmp207;
  const Scalar _tmp213 = -_tmp112 * _tmp77 + _tmp204 * _tmp212;
  const Scalar _tmp214 = Scalar(1.0) * _tmp97;
  const Scalar _tmp215 = _tmp190 * _tmp206;
  const Scalar _tmp216 = -_tmp112 * _tmp192 + _tmp115 - _tmp204 * _tmp215;
  const Scalar _tmp217 = _tmp112 * _tmp122;
  const Scalar _tmp218 = _tmp124 + _tmp129 * _tmp208 - _tmp130 * _tmp217;
  const Scalar _tmp219 = Scalar(1.0) * _tmp164;
  const Scalar _tmp220 = fh1 * (_tmp105 + _tmp99);
  const Scalar _tmp221 = -_tmp220 * _tmp96 - Scalar(40.024799999999999) * _tmp25 - _tmp90 * fv1;
  const Scalar _tmp222 = _tmp205 * _tmp207 + Scalar(1.0);
  const Scalar _tmp223 = _tmp117 * _tmp207;
  const Scalar _tmp224 = Scalar(40.024799999999999) * _tmp10 + _tmp220 * _tmp95 + _tmp91 * fv1;
  const Scalar _tmp225 = _tmp116 * _tmp204;
  const Scalar _tmp226 =
      Scalar(1.0) * _tmp198 * (-_tmp190 * _tmp207 - _tmp210 * _tmp216 + Scalar(1.0)) +
      _tmp211 * (_tmp170 * _tmp207 - _tmp209 * _tmp210) + _tmp214 * (-_tmp210 * _tmp213 + _tmp212) +
      _tmp219 * (_tmp129 * _tmp207 - _tmp210 * _tmp218) +
      Scalar(1.0) * _tmp221 * (-_tmp210 * _tmp222 + _tmp223) +
      Scalar(1.0) * _tmp224 * (_tmp207 * _tmp225 - _tmp207);
  const Scalar _tmp227 = std::asinh(_tmp203 * _tmp226);
  const Scalar _tmp228 = Scalar(1.4083112389913199) * _tmp227;
  const Scalar _tmp229 =
      -_tmp202 * _tmp228 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp31 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp230 = Scalar(0.71007031138673404) * _tmp203;
  const Scalar _tmp231 = _tmp229 * _tmp230;
  const Scalar _tmp232 = Scalar(1.0) * _tmp227;
  const Scalar _tmp233 = -std::sinh(_tmp231) - std::sinh(_tmp232);
  const Scalar _tmp234 = Scalar(1.4083112389913199) * _tmp202;
  const Scalar _tmp235 = std::pow(_tmp202, Scalar(-2));
  const Scalar _tmp236 =
      std::pow(Scalar(std::pow(_tmp226, Scalar(2)) * _tmp235 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp237 = _tmp207 * _tmp76;
  const Scalar _tmp238 = _tmp140 * _tmp237;
  const Scalar _tmp239 = _tmp153 * _tmp207;
  const Scalar _tmp240 = _tmp112 * _tmp86;
  const Scalar _tmp241 =
      -_tmp139 * _tmp77 + _tmp204 * _tmp238 - _tmp204 * _tmp239 + _tmp240 * _tmp84;
  const Scalar _tmp242 = _tmp112 * _tmp195 - _tmp139 * _tmp192;
  const Scalar _tmp243 = _tmp198 * _tmp210;
  const Scalar _tmp244 = _tmp112 * _tmp172 - _tmp139 * _tmp185 + _tmp173 * _tmp208 -
                         _tmp174 * _tmp208 + _tmp176 - _tmp177 + _tmp182 * _tmp208 -
                         _tmp183 * _tmp217;
  const Scalar _tmp245 = _tmp112 * _tmp156 - _tmp139 * _tmp201 + _tmp141 * _tmp208 + _tmp146 +
                         _tmp151 * _tmp208 - _tmp154 * _tmp208 - _tmp155 * _tmp217;
  const Scalar _tmp246 = _tmp226 * _tmp235;
  const Scalar _tmp247 = _tmp236 * (-_tmp200 * _tmp246 +
                                    _tmp203 * (_tmp211 * (_tmp173 * _tmp207 - _tmp174 * _tmp207 +
                                                          _tmp182 * _tmp207 - _tmp210 * _tmp244) +
                                               _tmp214 * (-_tmp210 * _tmp241 + _tmp238 - _tmp239) +
                                               _tmp219 * (_tmp141 * _tmp207 + _tmp151 * _tmp207 -
                                                          _tmp154 * _tmp207 - _tmp210 * _tmp245) -
                                               _tmp242 * _tmp243));
  const Scalar _tmp248 = Scalar(0.71007031138673404) * _tmp229 * _tmp235;
  const Scalar _tmp249 = std::cosh(_tmp231);
  const Scalar _tmp250 = Scalar(1.0) * std::cosh(_tmp232);
  const Scalar _tmp251 = -_tmp36 + p_b(0, 0);
  const Scalar _tmp252 = -_tmp106 + p_b(2, 0) - position_vector(2, 0);
  const Scalar _tmp253 = -_tmp41 + p_b(1, 0);
  const Scalar _tmp254 = std::pow(_tmp251, Scalar(2)) + std::pow(_tmp253, Scalar(2));
  const Scalar _tmp255 =
      std::pow(Scalar(std::pow(_tmp252, Scalar(2)) + _tmp254), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp256 = std::sqrt(_tmp254);
  const Scalar _tmp257 = _tmp116 * _tmp164;
  const Scalar _tmp258 = _tmp116 * _tmp188;
  const Scalar _tmp259 = _tmp116 * _tmp198;
  const Scalar _tmp260 = _tmp116 * _tmp97;
  const Scalar _tmp261 = _tmp207 * _tmp224;
  const Scalar _tmp262 = _tmp116 * _tmp221 * _tmp222 + _tmp209 * _tmp258 + _tmp213 * _tmp260 +
                         _tmp216 * _tmp259 + _tmp218 * _tmp257 - _tmp225 * _tmp261;
  const Scalar _tmp263 = _tmp132 * _tmp73;
  const Scalar _tmp264 = _tmp192 * _tmp198;
  const Scalar _tmp265 = _tmp188 * _tmp73;
  const Scalar _tmp266 = _tmp164 * _tmp263 + _tmp186 * _tmp265 - _tmp264 * _tmp74 - _tmp82 * _tmp97;
  const Scalar _tmp267 = Scalar(1.0) / (_tmp266);
  const Scalar _tmp268 = std::asinh(_tmp262 * _tmp267);
  const Scalar _tmp269 = Scalar(1.4083112389913199) * _tmp266;
  const Scalar _tmp270 = -_tmp256 - _tmp268 * _tmp269;
  const Scalar _tmp271 = Scalar(0.71007031138673404) * _tmp267;
  const Scalar _tmp272 = _tmp270 * _tmp271;
  const Scalar _tmp273 = std::cosh(_tmp272);
  const Scalar _tmp274 = _tmp191 * _tmp198;
  const Scalar _tmp275 = _tmp144 * _tmp274;
  const Scalar _tmp276 = _tmp164 * _tmp73;
  const Scalar _tmp277 = _tmp77 * _tmp97;
  const Scalar _tmp278 = -_tmp132 * _tmp160 * _tmp164 + _tmp157 * _tmp276 -
                         _tmp160 * _tmp186 * _tmp188 + _tmp184 * _tmp265 + _tmp264 * _tmp65 +
                         _tmp275 * _tmp74 + _tmp277 * _tmp65 + _tmp89 * _tmp97;
  const Scalar _tmp279 = std::pow(_tmp266, Scalar(-2));
  const Scalar _tmp280 = _tmp262 * _tmp279;
  const Scalar _tmp281 =
      std::pow(Scalar(std::pow(_tmp262, Scalar(2)) * _tmp279 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp282 =
      _tmp281 *
      (_tmp267 * (_tmp241 * _tmp260 + _tmp242 * _tmp259 + _tmp244 * _tmp258 + _tmp245 * _tmp257) -
       _tmp278 * _tmp280);
  const Scalar _tmp283 = Scalar(1.0) / (_tmp256);
  const Scalar _tmp284 = Scalar(1.4083112389913199) * _tmp268;
  const Scalar _tmp285 = Scalar(0.71007031138673404) * _tmp270 * _tmp279;
  const Scalar _tmp286 = Scalar(1.0) * _tmp268;
  const Scalar _tmp287 = Scalar(1.0) * std::cosh(_tmp286);
  const Scalar _tmp288 = -Scalar(1.4083112389913199) * std::sinh(_tmp272) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp286);
  const Scalar _tmp289 = _tmp122 * _tmp164;
  const Scalar _tmp290 = _tmp214 * _tmp85;
  const Scalar _tmp291 = _tmp122 * _tmp188;
  const Scalar _tmp292 = _tmp155 * _tmp289 - _tmp156 * _tmp164 - _tmp172 * _tmp188 +
                         _tmp183 * _tmp291 - _tmp275 - _tmp290 * _tmp84;
  const Scalar _tmp293 = _tmp164 * _tmp201 + _tmp185 * _tmp188 + _tmp264 + _tmp277;
  const Scalar _tmp294 = Scalar(1.0) / (_tmp293);
  const Scalar _tmp295 = _tmp164 * _tmp206;
  const Scalar _tmp296 = _tmp188 * _tmp206;
  const Scalar _tmp297 = -_tmp129 * _tmp295 - _tmp170 * _tmp296 + _tmp198 * _tmp215 -
                         _tmp212 * _tmp97 - _tmp221 * _tmp223 + _tmp261;
  const Scalar _tmp298 = std::asinh(_tmp294 * _tmp297);
  const Scalar _tmp299 = Scalar(1.0) * _tmp298;
  const Scalar _tmp300 = Scalar(1.4083112389913199) * _tmp298;
  const Scalar _tmp301 =
      -_tmp293 * _tmp300 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp302 = Scalar(0.71007031138673404) * _tmp294;
  const Scalar _tmp303 = _tmp301 * _tmp302;
  const Scalar _tmp304 = -Scalar(1.4083112389913199) * std::sinh(_tmp299) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp303);
  const Scalar _tmp305 = Scalar(1.4083112389913199) * _tmp293;
  const Scalar _tmp306 = std::pow(_tmp293, Scalar(-2));
  const Scalar _tmp307 =
      std::pow(Scalar(std::pow(_tmp297, Scalar(2)) * _tmp306 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp308 = _tmp297 * _tmp306;
  const Scalar _tmp309 =
      _tmp307 *
      (-_tmp292 * _tmp308 +
       _tmp294 * (-_tmp141 * _tmp295 - _tmp151 * _tmp295 + _tmp154 * _tmp295 - _tmp173 * _tmp296 +
                  _tmp174 * _tmp296 - _tmp182 * _tmp296 - _tmp238 * _tmp97 + _tmp239 * _tmp97));
  const Scalar _tmp310 = Scalar(0.71007031138673404) * _tmp301 * _tmp306;
  const Scalar _tmp311 = std::cosh(_tmp303);
  const Scalar _tmp312 = Scalar(1.0) * std::cosh(_tmp299);
  const Scalar _tmp313 = _tmp43 * _tmp45;
  const Scalar _tmp314 = _tmp106 * _tmp313 - _tmp118 - _tmp123 * _tmp49;
  const Scalar _tmp315 = -_tmp313 + _tmp33 * _tmp49 + _tmp47;
  const Scalar _tmp316 = _tmp315 * _tmp64;
  const Scalar _tmp317 = _tmp110 * _tmp316 - _tmp314 * _tmp74;
  const Scalar _tmp318 = _tmp107 * _tmp49 - _tmp136;
  const Scalar _tmp319 = -_tmp117 * _tmp317 + _tmp119 * _tmp316 - _tmp318 * _tmp74;
  const Scalar _tmp320 = _tmp143 * _tmp319;
  const Scalar _tmp321 = _tmp320 * _tmp58;
  const Scalar _tmp322 = _tmp315 * _tmp72;
  const Scalar _tmp323 = -_tmp313 * _tmp35 + _tmp35 * _tmp47 + _tmp40 * _tmp49 + _tmp49 * _tmp69;
  const Scalar _tmp324 = _tmp322 * _tmp64 - _tmp323 * _tmp74;
  const Scalar _tmp325 = _tmp152 * _tmp324;
  const Scalar _tmp326 = _tmp168 * _tmp325;
  const Scalar _tmp327 = _tmp175 * _tmp315;
  const Scalar _tmp328 = _tmp110 * _tmp327;
  const Scalar _tmp329 = _tmp314 * _tmp80;
  const Scalar _tmp330 =
      -_tmp117 * _tmp328 + _tmp117 * _tmp329 + _tmp119 * _tmp327 - _tmp318 * _tmp80;
  const Scalar _tmp331 = _tmp150 * (-_tmp149 * _tmp330 + _tmp175 * _tmp322 + _tmp180 * _tmp320 -
                                    _tmp181 * _tmp324 - _tmp323 * _tmp80);
  const Scalar _tmp332 = _tmp169 * _tmp319;
  const Scalar _tmp333 = -_tmp326 + _tmp330 + _tmp331 + _tmp332;
  const Scalar _tmp334 = _tmp320 * _tmp60;
  const Scalar _tmp335 = -_tmp131 * _tmp333 + _tmp171 * _tmp334;
  const Scalar _tmp336 = _tmp315 * _tmp63;
  const Scalar _tmp337 = _tmp186 * _tmp336;
  const Scalar _tmp338 = _tmp127 * _tmp325;
  const Scalar _tmp339 = _tmp128 * _tmp319;
  const Scalar _tmp340 = _tmp145 * _tmp315;
  const Scalar _tmp341 = -_tmp110 * _tmp340 + _tmp121 * _tmp314;
  const Scalar _tmp342 = -_tmp117 * _tmp341 - _tmp119 * _tmp340 + _tmp121 * _tmp318;
  const Scalar _tmp343 = _tmp150 * (_tmp121 * _tmp323 - _tmp126 * _tmp324 + _tmp142 * _tmp320 -
                                    _tmp145 * _tmp322 - _tmp149 * _tmp342);
  const Scalar _tmp344 = -_tmp338 + _tmp339 + _tmp342 + _tmp343;
  const Scalar _tmp345 = _tmp132 * _tmp336;
  const Scalar _tmp346 = _tmp130 * _tmp334 - _tmp131 * _tmp344;
  const Scalar _tmp347 = _tmp324 * _tmp88;
  const Scalar _tmp348 =
      -_tmp165 * (-_tmp130 * _tmp321 + _tmp159 * _tmp346 + _tmp163 * _tmp344 + _tmp263 * _tmp49 -
                  _tmp345 * _tmp78) -
      _tmp189 * (_tmp159 * _tmp335 + _tmp163 * _tmp333 - _tmp171 * _tmp321 +
                 _tmp186 * _tmp49 * _tmp73 - _tmp337 * _tmp78) -
      _tmp199 *
          (_tmp191 * _tmp196 * _tmp320 - _tmp191 * _tmp321 - _tmp193 * _tmp49 + _tmp197 * _tmp316) -
      _tmp98 * (_tmp316 * _tmp79 - _tmp324 * _tmp87 + _tmp347 * _tmp78 - _tmp49 * _tmp82);
  const Scalar _tmp349 = Scalar(1.4083112389913199) * _tmp348;
  const Scalar _tmp350 = _tmp112 * _tmp320;
  const Scalar _tmp351 = _tmp191 * _tmp350 - _tmp192 * _tmp317;
  const Scalar _tmp352 = _tmp130 * _tmp350 - _tmp201 * _tmp317 - _tmp208 * _tmp338 +
                         _tmp208 * _tmp339 + _tmp208 * _tmp343 - _tmp217 * _tmp344 + _tmp341;
  const Scalar _tmp353 = _tmp171 * _tmp350 - _tmp185 * _tmp317 - _tmp208 * _tmp326 +
                         _tmp208 * _tmp331 + _tmp208 * _tmp332 - _tmp217 * _tmp333 + _tmp328 -
                         _tmp329;
  const Scalar _tmp354 = _tmp207 * _tmp325;
  const Scalar _tmp355 = _tmp237 * _tmp319;
  const Scalar _tmp356 =
      -_tmp204 * _tmp354 + _tmp204 * _tmp355 + _tmp240 * _tmp324 - _tmp317 * _tmp77;
  const Scalar _tmp357 = _tmp236 * (_tmp203 * (_tmp211 * (-_tmp207 * _tmp326 + _tmp207 * _tmp331 +
                                                          _tmp207 * _tmp332 - _tmp210 * _tmp353) +
                                               _tmp214 * (-_tmp210 * _tmp356 - _tmp354 + _tmp355) +
                                               _tmp219 * (-_tmp207 * _tmp338 + _tmp207 * _tmp339 +
                                                          _tmp207 * _tmp343 - _tmp210 * _tmp352) -
                                               _tmp243 * _tmp351) -
                                    _tmp246 * _tmp348);
  const Scalar _tmp358 = _tmp274 * _tmp320;
  const Scalar _tmp359 = -_tmp164 * _tmp345 - _tmp188 * _tmp337 + _tmp264 * _tmp316 +
                         _tmp265 * _tmp335 + _tmp276 * _tmp346 + _tmp277 * _tmp316 +
                         _tmp347 * _tmp97 + _tmp358 * _tmp74;
  const Scalar _tmp360 =
      _tmp281 *
      (_tmp267 * (_tmp257 * _tmp352 + _tmp258 * _tmp353 + _tmp259 * _tmp351 + _tmp260 * _tmp356) -
       _tmp280 * _tmp359);
  const Scalar _tmp361 = -_tmp130 * _tmp164 * _tmp320 - _tmp171 * _tmp188 * _tmp320 +
                         _tmp289 * _tmp344 - _tmp290 * _tmp324 + _tmp291 * _tmp333 - _tmp358;
  const Scalar _tmp362 =
      _tmp307 *
      (_tmp294 * (_tmp295 * _tmp338 - _tmp295 * _tmp339 - _tmp295 * _tmp343 + _tmp296 * _tmp326 -
                  _tmp296 * _tmp331 - _tmp296 * _tmp332 + _tmp354 * _tmp97 - _tmp355 * _tmp97) -
       _tmp308 * _tmp361);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      Scalar(1.4083112389913199) * _tmp200 * _tmp233 +
      _tmp234 *
          (-_tmp247 * _tmp250 -
           _tmp249 * (-_tmp200 * _tmp248 + _tmp230 * (-_tmp200 * _tmp228 - _tmp234 * _tmp247)));
  _res(2, 0) =
      -_tmp251 * _tmp255 +
      _tmp269 *
          (-_tmp273 * (_tmp271 * (-_tmp251 * _tmp283 - _tmp269 * _tmp282 - _tmp278 * _tmp284) -
                       _tmp278 * _tmp285) -
           _tmp282 * _tmp287) +
      _tmp278 * _tmp288;
  _res(3, 0) =
      _tmp292 * _tmp304 +
      _tmp305 *
          (-_tmp309 * _tmp312 -
           _tmp311 * (-_tmp292 * _tmp310 + _tmp302 * (-_tmp292 * _tmp300 - _tmp305 * _tmp309)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp233 * _tmp349 +
      _tmp234 *
          (-_tmp249 * (_tmp230 * (-_tmp227 * _tmp349 - _tmp234 * _tmp357) - _tmp248 * _tmp348) -
           _tmp250 * _tmp357);
  _res(2, 1) =
      -_tmp253 * _tmp255 +
      _tmp269 *
          (-_tmp273 * (_tmp271 * (-_tmp253 * _tmp283 - _tmp269 * _tmp360 - _tmp284 * _tmp359) -
                       _tmp285 * _tmp359) -
           _tmp287 * _tmp360) +
      _tmp288 * _tmp359;
  _res(3, 1) =
      _tmp304 * _tmp361 +
      _tmp305 *
          (-_tmp311 * (_tmp302 * (-_tmp300 * _tmp361 - _tmp305 * _tmp362) - _tmp310 * _tmp361) -
           _tmp312 * _tmp362);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = -_tmp252 * _tmp255;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
