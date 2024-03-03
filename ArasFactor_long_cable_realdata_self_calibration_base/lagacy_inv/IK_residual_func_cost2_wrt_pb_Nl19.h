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
 * Symbolic function: IK_residual_func_cost2_wrt_pb_Nl19
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPbNl19(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1052

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (333)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp2 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = _tmp0 * _tmp6;
  const Scalar _tmp13 = _tmp2 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = _tmp17 - p_b(0, 0);
  const Scalar _tmp19 = -_tmp4;
  const Scalar _tmp20 = _tmp15 + _tmp19;
  const Scalar _tmp21 = _tmp20 + position_vector(0, 0);
  const Scalar _tmp22 = _tmp21 - p_a(0, 0);
  const Scalar _tmp23 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp27 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp28 = _tmp5 * _tmp8;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = -_tmp26 + _tmp30;
  const Scalar _tmp32 = _tmp25 + _tmp31;
  const Scalar _tmp33 = _tmp32 + position_vector(1, 0);
  const Scalar _tmp34 = _tmp33 - p_a(1, 0);
  const Scalar _tmp35 =
      std::sqrt(Scalar(std::pow(_tmp22, Scalar(2)) + std::pow(_tmp34, Scalar(2))));
  const Scalar _tmp36 = Scalar(1.0) / (_tmp35);
  const Scalar _tmp37 = Scalar(1.0) / (_tmp22);
  const Scalar _tmp38 = _tmp35 * _tmp37;
  const Scalar _tmp39 = _tmp38 * (_tmp20 * _tmp34 * _tmp36 - _tmp22 * _tmp32 * _tmp36);
  const Scalar _tmp40 = _tmp34 * _tmp37;
  const Scalar _tmp41 = _tmp26 + _tmp30;
  const Scalar _tmp42 = _tmp24 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp44 = _tmp43 - p_c(1, 0);
  const Scalar _tmp45 = _tmp11 + _tmp14;
  const Scalar _tmp46 = _tmp4 + _tmp45;
  const Scalar _tmp47 = _tmp46 + position_vector(0, 0);
  const Scalar _tmp48 = _tmp47 - p_c(0, 0);
  const Scalar _tmp49 = std::pow(Scalar(std::pow(_tmp44, Scalar(2)) + std::pow(_tmp48, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp50 = _tmp44 * _tmp49;
  const Scalar _tmp51 = _tmp48 * _tmp49;
  const Scalar _tmp52 = Scalar(1.0) / (_tmp40 * _tmp51 - _tmp50);
  const Scalar _tmp53 = _tmp52 * (_tmp39 * _tmp51 + _tmp42 * _tmp51 - _tmp46 * _tmp50);
  const Scalar _tmp54 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp55 = _tmp25 + _tmp41;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 - p_b(1, 0);
  const Scalar _tmp58 = std::pow(_tmp57, Scalar(2));
  const Scalar _tmp59 = _tmp54 + _tmp58;
  const Scalar _tmp60 = std::pow(_tmp59, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp57 * _tmp60;
  const Scalar _tmp62 = _tmp55 * _tmp60;
  const Scalar _tmp63 = _tmp40 * _tmp60;
  const Scalar _tmp64 = _tmp18 * _tmp63 - _tmp61;
  const Scalar _tmp65 = _tmp39 * _tmp60;
  const Scalar _tmp66 = -_tmp16 * _tmp61 + _tmp18 * _tmp62 + _tmp18 * _tmp65 - _tmp53 * _tmp64;
  const Scalar _tmp67 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp68 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp23 + Scalar(-0.010999999999999999);
  const Scalar _tmp69 = Scalar(0.20999999999999999) * _tmp27 + Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp70 = _tmp68 - _tmp69;
  const Scalar _tmp71 = _tmp67 + _tmp70;
  const Scalar _tmp72 = _tmp60 * _tmp71;
  const Scalar _tmp73 = _tmp68 + _tmp69;
  const Scalar _tmp74 = _tmp67 + _tmp73;
  const Scalar _tmp75 = -_tmp67;
  const Scalar _tmp76 = _tmp70 + _tmp75;
  const Scalar _tmp77 = _tmp51 * _tmp76;
  const Scalar _tmp78 = _tmp52 * (-_tmp40 * _tmp77 + _tmp50 * _tmp74);
  const Scalar _tmp79 = _tmp60 * _tmp76;
  const Scalar _tmp80 = _tmp18 * _tmp79;
  const Scalar _tmp81 = -_tmp40 * _tmp80 + _tmp57 * _tmp72 - _tmp64 * _tmp78;
  const Scalar _tmp82 = Scalar(1.0) * _tmp32;
  const Scalar _tmp83 = -_tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp42 + _tmp83);
  const Scalar _tmp85 = Scalar(1.0) * _tmp20;
  const Scalar _tmp86 = -_tmp46 + _tmp85;
  const Scalar _tmp87 = _tmp84 * _tmp86;
  const Scalar _tmp88 = _tmp52 * (-_tmp51 * _tmp74 + _tmp77);
  const Scalar _tmp89 = -_tmp18 * _tmp72 - _tmp64 * _tmp88 + _tmp80 - _tmp81 * _tmp87;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp40 * _tmp76;
  const Scalar _tmp92 = _tmp40 * _tmp78 + _tmp91;
  const Scalar _tmp93 = _tmp40 * _tmp88 - _tmp76 - _tmp87 * _tmp92;
  const Scalar _tmp94 = _tmp90 * _tmp93;
  const Scalar _tmp95 = -_tmp39 + _tmp40 * _tmp53 - _tmp66 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp97 = _tmp89 * _tmp96;
  const Scalar _tmp98 = _tmp95 * _tmp97;
  const Scalar _tmp99 = _tmp93 + _tmp98;
  const Scalar _tmp100 = _tmp60 * _tmp90;
  const Scalar _tmp101 = _tmp100 * _tmp99;
  const Scalar _tmp102 = _tmp64 * _tmp90;
  const Scalar _tmp103 = -_tmp102 * _tmp99 - _tmp40;
  const Scalar _tmp104 = _tmp51 * _tmp52;
  const Scalar _tmp105 = _tmp19 + _tmp45;
  const Scalar _tmp106 = _tmp105 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp107 = _tmp24 + _tmp31;
  const Scalar _tmp108 = _tmp107 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp106 * _tmp109;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = _tmp111 * _tmp38;
  const Scalar _tmp113 = _tmp82 * _tmp87 + _tmp85;
  const Scalar _tmp114 = 0;
  const Scalar _tmp115 = _tmp102 * _tmp114;
  const Scalar _tmp116 = _tmp100 * _tmp114;
  const Scalar _tmp117 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp118 = _tmp117 * _tmp38;
  const Scalar _tmp119 = Scalar(1.0) * _tmp96;
  const Scalar _tmp120 = _tmp104 * _tmp119;
  const Scalar _tmp121 = _tmp119 * _tmp60;
  const Scalar _tmp122 = _tmp108 * _tmp109;
  const Scalar _tmp123 = fh1 * (_tmp105 * _tmp122 - _tmp107 * _tmp110);
  const Scalar _tmp124 = _tmp123 * _tmp38;
  const Scalar _tmp125 = Scalar(1.0) * _tmp84;
  const Scalar _tmp126 = _tmp125 * _tmp78 * _tmp86 - Scalar(1.0) * _tmp88;
  const Scalar _tmp127 = _tmp126 * _tmp90;
  const Scalar _tmp128 = -_tmp127 * _tmp66 - Scalar(1.0) * _tmp53;
  const Scalar _tmp129 = _tmp128 * _tmp97;
  const Scalar _tmp130 = _tmp126 + _tmp129;
  const Scalar _tmp131 = -_tmp102 * _tmp130 + Scalar(1.0);
  const Scalar _tmp132 = _tmp100 * _tmp130;
  const Scalar _tmp133 = _tmp122 * fh1;
  const Scalar _tmp134 = _tmp133 * _tmp38;
  const Scalar _tmp135 = -_tmp112 * (_tmp101 * _tmp18 + _tmp103 * _tmp104 + Scalar(1.0)) -
                         _tmp118 * (-_tmp104 * _tmp115 + _tmp116 * _tmp18) -
                         _tmp124 * (-_tmp120 * _tmp64 + _tmp121 * _tmp18) -
                         _tmp134 * (_tmp104 * _tmp131 + _tmp132 * _tmp18);
  const Scalar _tmp136 = Scalar(1.0) / (_tmp135);
  const Scalar _tmp137 = fh1 * (_tmp73 + _tmp75);
  const Scalar _tmp138 = -_tmp107 * fv1 - _tmp122 * _tmp137 - Scalar(40.024799999999999) * _tmp29;
  const Scalar _tmp139 = _tmp55 + _tmp83;
  const Scalar _tmp140 = _tmp139 * _tmp87;
  const Scalar _tmp141 = Scalar(1.0) / (-_tmp140 - _tmp16 + _tmp85);
  const Scalar _tmp142 = Scalar(1.0) * _tmp141;
  const Scalar _tmp143 = _tmp140 * _tmp142 + Scalar(1.0);
  const Scalar _tmp144 = _tmp142 * _tmp97;
  const Scalar _tmp145 = _tmp139 * _tmp142;
  const Scalar _tmp146 = -_tmp119 * _tmp81 + _tmp145 * _tmp97;
  const Scalar _tmp147 = Scalar(1.0) * _tmp123;
  const Scalar _tmp148 = _tmp139 * _tmp141;
  const Scalar _tmp149 = _tmp81 * _tmp90;
  const Scalar _tmp150 = _tmp129 * _tmp148 - _tmp130 * _tmp149 - Scalar(1.0) * _tmp78;
  const Scalar _tmp151 = Scalar(1.0) * _tmp133;
  const Scalar _tmp152 = _tmp148 * _tmp98 - _tmp149 * _tmp99 + _tmp92;
  const Scalar _tmp153 = Scalar(1.0) * _tmp111;
  const Scalar _tmp154 = Scalar(40.024799999999999) * _tmp10 + _tmp105 * fv1 + _tmp110 * _tmp137;
  const Scalar _tmp155 = _tmp113 * _tmp141;
  const Scalar _tmp156 = -_tmp114 * _tmp149 - _tmp139 * _tmp155 + _tmp83;
  const Scalar _tmp157 =
      Scalar(1.0) * _tmp117 * (-_tmp113 * _tmp142 - _tmp125 * _tmp156 + Scalar(1.0)) +
      Scalar(1.0) * _tmp138 * (-_tmp125 * _tmp143 + _tmp142 * _tmp87) +
      _tmp147 * (-_tmp125 * _tmp146 + _tmp144) +
      _tmp151 * (-_tmp125 * _tmp150 + _tmp129 * _tmp142) +
      _tmp153 * (-_tmp125 * _tmp152 + _tmp142 * _tmp98) +
      Scalar(1.0) * _tmp154 * (-_tmp142 + _tmp145 * _tmp84);
  const Scalar _tmp158 = std::asinh(_tmp136 * _tmp157);
  const Scalar _tmp159 = Scalar(1.4083112389913199) * _tmp135;
  const Scalar _tmp160 =
      -_tmp158 * _tmp159 - std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp33 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp161 = Scalar(0.71007031138673404) * _tmp136;
  const Scalar _tmp162 = _tmp160 * _tmp161;
  const Scalar _tmp163 = Scalar(1.0) * _tmp158;
  const Scalar _tmp164 = -std::sinh(_tmp162) - std::sinh(_tmp163);
  const Scalar _tmp165 = std::pow(_tmp59, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp166 = _tmp165 * _tmp54;
  const Scalar _tmp167 = _tmp165 * _tmp18 * _tmp57;
  const Scalar _tmp168 = _tmp166 * _tmp40 - _tmp167 - _tmp63;
  const Scalar _tmp169 = _tmp166 * _tmp76;
  const Scalar _tmp170 = _tmp167 * _tmp71;
  const Scalar _tmp171 = -_tmp168 * _tmp78 - _tmp169 * _tmp40 + _tmp170 + _tmp40 * _tmp79;
  const Scalar _tmp172 =
      -_tmp166 * _tmp71 - _tmp168 * _tmp88 + _tmp169 - _tmp171 * _tmp87 + _tmp72 - _tmp79;
  const Scalar _tmp173 = std::pow(_tmp89, Scalar(-2));
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = _tmp174 * _tmp99;
  const Scalar _tmp176 = _tmp95 * _tmp96;
  const Scalar _tmp177 = _tmp172 * _tmp176;
  const Scalar _tmp178 = _tmp66 * _tmp93;
  const Scalar _tmp179 =
      -_tmp16 * _tmp167 + _tmp166 * _tmp39 + _tmp166 * _tmp55 - _tmp168 * _tmp53 - _tmp62 - _tmp65;
  const Scalar _tmp180 = _tmp97 * (_tmp174 * _tmp178 - _tmp179 * _tmp94);
  const Scalar _tmp181 = _tmp89 * _tmp95;
  const Scalar _tmp182 = std::pow(_tmp66, Scalar(-2));
  const Scalar _tmp183 = _tmp179 * _tmp182;
  const Scalar _tmp184 = _tmp181 * _tmp183;
  const Scalar _tmp185 = _tmp177 + _tmp180 - _tmp184;
  const Scalar _tmp186 = _tmp90 * _tmp99;
  const Scalar _tmp187 = -_tmp102 * _tmp185 - _tmp168 * _tmp186 + _tmp175 * _tmp64;
  const Scalar _tmp188 = _tmp100 * _tmp18;
  const Scalar _tmp189 = _tmp18 * _tmp60;
  const Scalar _tmp190 = _tmp128 * _tmp96;
  const Scalar _tmp191 = _tmp172 * _tmp190;
  const Scalar _tmp192 = _tmp128 * _tmp89;
  const Scalar _tmp193 = _tmp183 * _tmp192;
  const Scalar _tmp194 = _tmp126 * _tmp66;
  const Scalar _tmp195 = _tmp97 * (-_tmp127 * _tmp179 + _tmp174 * _tmp194);
  const Scalar _tmp196 = _tmp191 - _tmp193 + _tmp195;
  const Scalar _tmp197 = _tmp130 * _tmp174;
  const Scalar _tmp198 = _tmp130 * _tmp90;
  const Scalar _tmp199 = -_tmp102 * _tmp196 - _tmp168 * _tmp198 + _tmp197 * _tmp64;
  const Scalar _tmp200 = _tmp104 * _tmp64;
  const Scalar _tmp201 = Scalar(1.0) * _tmp200;
  const Scalar _tmp202 = _tmp104 * _tmp168;
  const Scalar _tmp203 = Scalar(1.0) * _tmp189;
  const Scalar _tmp204 = _tmp114 * _tmp174;
  const Scalar _tmp205 = _tmp114 * _tmp90;
  const Scalar _tmp206 = -_tmp112 * (-_tmp101 + _tmp104 * _tmp187 + _tmp166 * _tmp186 -
                                     _tmp175 * _tmp189 + _tmp185 * _tmp188) -
                         _tmp118 * (-_tmp116 + _tmp166 * _tmp205 - _tmp189 * _tmp204 +
                                    _tmp200 * _tmp204 - _tmp202 * _tmp205) -
                         _tmp124 * (_tmp119 * _tmp166 - _tmp119 * _tmp202 - _tmp121 +
                                    _tmp183 * _tmp201 - _tmp183 * _tmp203) -
                         _tmp134 * (_tmp104 * _tmp199 - _tmp132 + _tmp166 * _tmp198 +
                                    _tmp188 * _tmp196 - _tmp189 * _tmp197);
  const Scalar _tmp207 = Scalar(1.4083112389913199) * _tmp206;
  const Scalar _tmp208 = _tmp171 * _tmp90;
  const Scalar _tmp209 = -_tmp130 * _tmp208 + _tmp148 * _tmp191 - _tmp148 * _tmp193 +
                         _tmp148 * _tmp195 - _tmp149 * _tmp196 + _tmp197 * _tmp81;
  const Scalar _tmp210 = _tmp148 * _tmp177 + _tmp148 * _tmp180 - _tmp148 * _tmp184 -
                         _tmp149 * _tmp185 + _tmp175 * _tmp81 - _tmp208 * _tmp99;
  const Scalar _tmp211 = _tmp142 * _tmp89;
  const Scalar _tmp212 = _tmp183 * _tmp211;
  const Scalar _tmp213 = Scalar(1.0) * _tmp81;
  const Scalar _tmp214 = _tmp145 * _tmp96;
  const Scalar _tmp215 = _tmp145 * _tmp89;
  const Scalar _tmp216 =
      -_tmp119 * _tmp171 + _tmp172 * _tmp214 + _tmp183 * _tmp213 - _tmp183 * _tmp215;
  const Scalar _tmp217 = _tmp142 * _tmp96;
  const Scalar _tmp218 = _tmp172 * _tmp217;
  const Scalar _tmp219 = -_tmp114 * _tmp208 + _tmp204 * _tmp81;
  const Scalar _tmp220 = _tmp117 * _tmp125;
  const Scalar _tmp221 = std::pow(_tmp135, Scalar(-2));
  const Scalar _tmp222 = _tmp157 * _tmp221;
  const Scalar _tmp223 = _tmp136 * (_tmp147 * (-_tmp125 * _tmp216 - _tmp212 + _tmp218) +
                                    _tmp151 * (-_tmp125 * _tmp209 + _tmp142 * _tmp191 -
                                               _tmp142 * _tmp193 + _tmp142 * _tmp195) +
                                    _tmp153 * (-_tmp125 * _tmp210 + _tmp142 * _tmp177 +
                                               _tmp142 * _tmp180 - _tmp142 * _tmp184) -
                                    _tmp219 * _tmp220) -
                         _tmp206 * _tmp222;
  const Scalar _tmp224 =
      std::pow(Scalar(std::pow(_tmp157, Scalar(2)) * _tmp221 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp225 = Scalar(1.0) * _tmp224 * std::cosh(_tmp163);
  const Scalar _tmp226 = std::cosh(_tmp162);
  const Scalar _tmp227 = _tmp159 * _tmp224;
  const Scalar _tmp228 = Scalar(0.71007031138673404) * _tmp160 * _tmp221;
  const Scalar _tmp229 = _tmp123 * _tmp84;
  const Scalar _tmp230 = _tmp111 * _tmp84;
  const Scalar _tmp231 = _tmp133 * _tmp84;
  const Scalar _tmp232 = _tmp117 * _tmp84;
  const Scalar _tmp233 = _tmp133 * _tmp52;
  const Scalar _tmp234 = _tmp119 * _tmp123;
  const Scalar _tmp235 = _tmp234 * _tmp52;
  const Scalar _tmp236 = _tmp111 * _tmp52;
  const Scalar _tmp237 = _tmp117 * _tmp52;
  const Scalar _tmp238 =
      _tmp103 * _tmp236 - _tmp115 * _tmp237 + _tmp131 * _tmp233 - _tmp235 * _tmp64;
  const Scalar _tmp239 = Scalar(1.0) / (_tmp238);
  const Scalar _tmp240 = _tmp117 * _tmp204;
  const Scalar _tmp241 = _tmp52 * _tmp64;
  const Scalar _tmp242 = _tmp117 * _tmp205;
  const Scalar _tmp243 = _tmp242 * _tmp52;
  const Scalar _tmp244 = _tmp147 * _tmp183;
  const Scalar _tmp245 = -_tmp168 * _tmp235 - _tmp168 * _tmp243 + _tmp187 * _tmp236 +
                         _tmp199 * _tmp233 + _tmp240 * _tmp241 + _tmp241 * _tmp244;
  const Scalar _tmp246 = _tmp138 * _tmp84;
  const Scalar _tmp247 = _tmp142 * _tmp154;
  const Scalar _tmp248 = -_tmp139 * _tmp247 * _tmp84 + _tmp143 * _tmp246 + _tmp146 * _tmp229 +
                         _tmp150 * _tmp231 + _tmp152 * _tmp230 + _tmp156 * _tmp232;
  const Scalar _tmp249 = std::pow(_tmp238, Scalar(-2));
  const Scalar _tmp250 = _tmp248 * _tmp249;
  const Scalar _tmp251 =
      std::pow(Scalar(std::pow(_tmp248, Scalar(2)) * _tmp249 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp252 =
      _tmp251 *
      (_tmp239 * (_tmp209 * _tmp231 + _tmp210 * _tmp230 + _tmp216 * _tmp229 + _tmp219 * _tmp232) -
       _tmp245 * _tmp250);
  const Scalar _tmp253 = std::asinh(_tmp239 * _tmp248);
  const Scalar _tmp254 = Scalar(1.0) * _tmp253;
  const Scalar _tmp255 = Scalar(1.0) * std::cosh(_tmp254);
  const Scalar _tmp256 = Scalar(1.4083112389913199) * _tmp238;
  const Scalar _tmp257 =
      -_tmp253 * _tmp256 - std::sqrt(Scalar(std::pow(Scalar(-_tmp43 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp47 + p_c(0, 0)), Scalar(2))));
  const Scalar _tmp258 = Scalar(0.71007031138673404) * _tmp239;
  const Scalar _tmp259 = _tmp257 * _tmp258;
  const Scalar _tmp260 = std::cosh(_tmp259);
  const Scalar _tmp261 = Scalar(0.71007031138673404) * _tmp249 * _tmp257;
  const Scalar _tmp262 = Scalar(1.4083112389913199) * _tmp245;
  const Scalar _tmp263 = -std::sinh(_tmp254) - std::sinh(_tmp259);
  const Scalar _tmp264 = -_tmp17 + p_b(0, 0);
  const Scalar _tmp265 = -_tmp71 + p_b(2, 0) - position_vector(2, 0);
  const Scalar _tmp266 = -_tmp56 + p_b(1, 0);
  const Scalar _tmp267 = std::pow(_tmp264, Scalar(2)) + std::pow(_tmp266, Scalar(2));
  const Scalar _tmp268 =
      std::pow(Scalar(std::pow(_tmp265, Scalar(2)) + _tmp267), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp269 = _tmp111 * _tmp186 + _tmp133 * _tmp198 + _tmp234 + _tmp242;
  const Scalar _tmp270 = Scalar(1.0) / (_tmp269);
  const Scalar _tmp271 = _tmp111 * _tmp141;
  const Scalar _tmp272 = _tmp133 * _tmp141;
  const Scalar _tmp273 = _tmp117 * _tmp155 - _tmp123 * _tmp144 - _tmp129 * _tmp272 -
                         _tmp142 * _tmp246 * _tmp86 + _tmp247 - _tmp271 * _tmp98;
  const Scalar _tmp274 = std::asinh(_tmp270 * _tmp273);
  const Scalar _tmp275 = Scalar(1.0) * _tmp274;
  const Scalar _tmp276 = Scalar(1.4083112389913199) * _tmp269;
  const Scalar _tmp277 = std::sqrt(_tmp267);
  const Scalar _tmp278 = -_tmp274 * _tmp276 - _tmp277;
  const Scalar _tmp279 = Scalar(0.71007031138673404) * _tmp270;
  const Scalar _tmp280 = _tmp278 * _tmp279;
  const Scalar _tmp281 = -std::sinh(_tmp275) - std::sinh(_tmp280);
  const Scalar _tmp282 = _tmp133 * _tmp90;
  const Scalar _tmp283 = _tmp111 * _tmp90;
  const Scalar _tmp284 = -_tmp111 * _tmp175 - _tmp133 * _tmp197 + _tmp185 * _tmp283 +
                         _tmp196 * _tmp282 - _tmp240 - _tmp244;
  const Scalar _tmp285 = Scalar(1.4083112389913199) * _tmp284;
  const Scalar _tmp286 = Scalar(1.0) * std::cosh(_tmp275);
  const Scalar _tmp287 = std::pow(_tmp269, Scalar(-2));
  const Scalar _tmp288 =
      std::pow(Scalar(std::pow(_tmp273, Scalar(2)) * _tmp287 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp289 = _tmp273 * _tmp287;
  const Scalar _tmp290 =
      _tmp288 *
      (_tmp270 * (_tmp123 * _tmp212 - _tmp123 * _tmp218 - _tmp177 * _tmp271 - _tmp180 * _tmp271 +
                  _tmp184 * _tmp271 - _tmp191 * _tmp272 + _tmp193 * _tmp272 - _tmp195 * _tmp272) -
       _tmp284 * _tmp289);
  const Scalar _tmp291 = Scalar(0.71007031138673404) * _tmp278 * _tmp287;
  const Scalar _tmp292 = Scalar(1.0) / (_tmp277);
  const Scalar _tmp293 = std::cosh(_tmp280);
  const Scalar _tmp294 = _tmp165 * _tmp58;
  const Scalar _tmp295 = _tmp167 * _tmp40 - _tmp294 + _tmp60;
  const Scalar _tmp296 = -_tmp167 * _tmp91 + _tmp294 * _tmp71 - _tmp295 * _tmp78 - _tmp72;
  const Scalar _tmp297 = _tmp167 * _tmp76 - _tmp170 - _tmp295 * _tmp88 - _tmp296 * _tmp87;
  const Scalar _tmp298 = _tmp173 * _tmp297;
  const Scalar _tmp299 = _tmp298 * _tmp64;
  const Scalar _tmp300 = _tmp114 * _tmp299;
  const Scalar _tmp301 = _tmp114 * _tmp298;
  const Scalar _tmp302 = _tmp176 * _tmp297;
  const Scalar _tmp303 =
      -_tmp16 * _tmp294 + _tmp16 * _tmp60 + _tmp167 * _tmp39 + _tmp167 * _tmp55 - _tmp295 * _tmp53;
  const Scalar _tmp304 = _tmp182 * _tmp303;
  const Scalar _tmp305 = _tmp181 * _tmp304;
  const Scalar _tmp306 = _tmp97 * (_tmp178 * _tmp298 - _tmp303 * _tmp94);
  const Scalar _tmp307 = _tmp302 - _tmp305 + _tmp306;
  const Scalar _tmp308 = -_tmp102 * _tmp307 - _tmp186 * _tmp295 + _tmp299 * _tmp99;
  const Scalar _tmp309 = _tmp298 * _tmp99;
  const Scalar _tmp310 = _tmp97 * (-_tmp127 * _tmp303 + _tmp194 * _tmp298);
  const Scalar _tmp311 = _tmp190 * _tmp297;
  const Scalar _tmp312 = _tmp192 * _tmp304;
  const Scalar _tmp313 = _tmp310 + _tmp311 - _tmp312;
  const Scalar _tmp314 = -_tmp102 * _tmp313 + _tmp130 * _tmp299 - _tmp198 * _tmp295;
  const Scalar _tmp315 = _tmp130 * _tmp298;
  const Scalar _tmp316 =
      -_tmp112 * (_tmp104 * _tmp308 + _tmp167 * _tmp186 + _tmp188 * _tmp307 - _tmp189 * _tmp309) -
      _tmp118 * (-_tmp104 * _tmp205 * _tmp295 + _tmp104 * _tmp300 + _tmp167 * _tmp205 -
                 _tmp189 * _tmp301) -
      _tmp124 * (_tmp119 * _tmp167 - _tmp120 * _tmp295 + _tmp201 * _tmp304 - _tmp203 * _tmp304) -
      _tmp134 * (_tmp104 * _tmp314 + _tmp167 * _tmp198 + _tmp188 * _tmp313 - _tmp189 * _tmp315);
  const Scalar _tmp317 = Scalar(1.4083112389913199) * _tmp316;
  const Scalar _tmp318 = _tmp217 * _tmp297;
  const Scalar _tmp319 =
      -_tmp119 * _tmp296 + _tmp213 * _tmp304 + _tmp214 * _tmp297 - _tmp215 * _tmp304;
  const Scalar _tmp320 = _tmp211 * _tmp304;
  const Scalar _tmp321 = _tmp298 * _tmp81;
  const Scalar _tmp322 = _tmp130 * _tmp321 + _tmp148 * _tmp310 + _tmp148 * _tmp311 -
                         _tmp148 * _tmp312 - _tmp149 * _tmp313 - _tmp198 * _tmp296;
  const Scalar _tmp323 = _tmp148 * _tmp302 - _tmp148 * _tmp305 + _tmp148 * _tmp306 -
                         _tmp149 * _tmp307 - _tmp186 * _tmp296 + _tmp321 * _tmp99;
  const Scalar _tmp324 = _tmp114 * _tmp321 - _tmp205 * _tmp296;
  const Scalar _tmp325 = _tmp136 * (_tmp147 * (-_tmp125 * _tmp319 + _tmp318 - _tmp320) +
                                    _tmp151 * (-_tmp125 * _tmp322 + _tmp142 * _tmp310 +
                                               _tmp142 * _tmp311 - _tmp142 * _tmp312) +
                                    _tmp153 * (-_tmp125 * _tmp323 + _tmp142 * _tmp302 -
                                               _tmp142 * _tmp305 + _tmp142 * _tmp306) -
                                    _tmp220 * _tmp324) -
                         _tmp222 * _tmp316;
  const Scalar _tmp326 = _tmp147 * _tmp304;
  const Scalar _tmp327 = _tmp233 * _tmp314 - _tmp235 * _tmp295 + _tmp236 * _tmp308 +
                         _tmp237 * _tmp300 + _tmp241 * _tmp326 - _tmp243 * _tmp295;
  const Scalar _tmp328 = Scalar(1.4083112389913199) * _tmp327;
  const Scalar _tmp329 =
      _tmp251 *
      (_tmp239 * (_tmp229 * _tmp319 + _tmp230 * _tmp323 + _tmp231 * _tmp322 + _tmp232 * _tmp324) -
       _tmp250 * _tmp327);
  const Scalar _tmp330 = -_tmp111 * _tmp309 - _tmp117 * _tmp301 - _tmp133 * _tmp315 +
                         _tmp282 * _tmp313 + _tmp283 * _tmp307 - _tmp326;
  const Scalar _tmp331 = Scalar(1.4083112389913199) * _tmp330;
  const Scalar _tmp332 =
      _tmp288 *
      (_tmp270 * (-_tmp123 * _tmp318 + _tmp123 * _tmp320 - _tmp271 * _tmp302 + _tmp271 * _tmp305 -
                  _tmp271 * _tmp306 - _tmp272 * _tmp310 - _tmp272 * _tmp311 + _tmp272 * _tmp312) -
       _tmp289 * _tmp330);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp159 *
          (-_tmp223 * _tmp225 -
           _tmp226 * (_tmp161 * (-_tmp158 * _tmp207 - _tmp223 * _tmp227) - _tmp206 * _tmp228)) +
      _tmp164 * _tmp207;
  _res(2, 0) =
      _tmp256 *
          (-_tmp252 * _tmp255 -
           _tmp260 * (-_tmp245 * _tmp261 + _tmp258 * (-_tmp252 * _tmp256 - _tmp253 * _tmp262))) +
      _tmp262 * _tmp263;
  _res(3, 0) =
      -_tmp264 * _tmp268 +
      _tmp276 * (-_tmp286 * _tmp290 -
                 _tmp293 * (_tmp279 * (-_tmp264 * _tmp292 - _tmp274 * _tmp285 - _tmp276 * _tmp290) -
                            _tmp284 * _tmp291)) +
      _tmp281 * _tmp285;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp159 *
          (-_tmp225 * _tmp325 -
           _tmp226 * (_tmp161 * (-_tmp158 * _tmp317 - _tmp227 * _tmp325) - _tmp228 * _tmp316)) +
      _tmp164 * _tmp317;
  _res(2, 1) =
      _tmp256 *
          (-_tmp255 * _tmp329 -
           _tmp260 * (_tmp258 * (-_tmp253 * _tmp328 - _tmp256 * _tmp329) - _tmp261 * _tmp327)) +
      _tmp263 * _tmp328;
  _res(3, 1) =
      -_tmp266 * _tmp268 +
      _tmp276 * (-_tmp286 * _tmp332 -
                 _tmp293 * (_tmp279 * (-_tmp266 * _tmp292 - _tmp274 * _tmp331 - _tmp276 * _tmp332) -
                            _tmp291 * _tmp330)) +
      _tmp281 * _tmp331;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = -_tmp265 * _tmp268;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym