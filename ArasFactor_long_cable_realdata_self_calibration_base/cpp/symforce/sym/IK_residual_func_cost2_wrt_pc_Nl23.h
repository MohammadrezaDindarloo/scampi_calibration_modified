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
 * Symbolic function: IK_residual_func_cost2_wrt_pc_Nl23
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPcNl23(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1204

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (390)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = 2 * _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0;
  const Scalar _tmp12 = _tmp11 * _tmp4;
  const Scalar _tmp13 = _tmp2 * _tmp5;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -_tmp18 + p_c(0, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp21 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp23 = _tmp2 * _tmp4;
  const Scalar _tmp24 = _tmp11 * _tmp5;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp22 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = -_tmp27 + p_c(2, 0) - position_vector(2, 0);
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp30 = _tmp23 - _tmp24;
  const Scalar _tmp31 = -Scalar(0.010999999999999999) * _tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp33 = _tmp31 + _tmp32;
  const Scalar _tmp34 = _tmp29 + _tmp33;
  const Scalar _tmp35 = _tmp34 + position_vector(1, 0);
  const Scalar _tmp36 = -_tmp35 + p_c(1, 0);
  const Scalar _tmp37 = std::pow(_tmp19, Scalar(2)) + std::pow(_tmp36, Scalar(2));
  const Scalar _tmp38 =
      std::pow(Scalar(std::pow(_tmp28, Scalar(2)) + _tmp37), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(1.0) * _tmp34;
  const Scalar _tmp40 = -_tmp39;
  const Scalar _tmp41 = -_tmp29;
  const Scalar _tmp42 = _tmp31 - _tmp32;
  const Scalar _tmp43 = _tmp41 + _tmp42;
  const Scalar _tmp44 = _tmp40 + _tmp43;
  const Scalar _tmp45 = _tmp33 + _tmp41;
  const Scalar _tmp46 = Scalar(1.0) / (_tmp40 + _tmp45);
  const Scalar _tmp47 = -_tmp7;
  const Scalar _tmp48 = _tmp16 + _tmp47;
  const Scalar _tmp49 = Scalar(1.0) * _tmp17;
  const Scalar _tmp50 = -_tmp48 + _tmp49;
  const Scalar _tmp51 = _tmp46 * _tmp50;
  const Scalar _tmp52 = _tmp44 * _tmp51;
  const Scalar _tmp53 = -_tmp10 + _tmp15;
  const Scalar _tmp54 = _tmp47 + _tmp53;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp49 - _tmp52 - _tmp54);
  const Scalar _tmp56 = _tmp39 * _tmp51 + _tmp49;
  const Scalar _tmp57 = _tmp55 * _tmp56;
  const Scalar _tmp58 = 0;
  const Scalar _tmp59 = -_tmp20;
  const Scalar _tmp60 = _tmp22 - _tmp25;
  const Scalar _tmp61 = _tmp59 + _tmp60;
  const Scalar _tmp62 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp63 = _tmp62 - p_a(0, 0);
  const Scalar _tmp64 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp65 = _tmp64 - p_a(1, 0);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp63 * _tmp66;
  const Scalar _tmp68 = _tmp20 + _tmp60;
  const Scalar _tmp69 = _tmp48 + position_vector(0, 0);
  const Scalar _tmp70 = _tmp69 - p_b(0, 0);
  const Scalar _tmp71 = std::pow(_tmp70, Scalar(2));
  const Scalar _tmp72 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp73 = _tmp72 - p_b(1, 0);
  const Scalar _tmp74 = _tmp71 + std::pow(_tmp73, Scalar(2));
  const Scalar _tmp75 = std::pow(_tmp74, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp73 * _tmp75;
  const Scalar _tmp77 = _tmp18 - p_c(0, 0);
  const Scalar _tmp78 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp79 = _tmp35 - p_c(1, 0);
  const Scalar _tmp80 = _tmp78 * _tmp79;
  const Scalar _tmp81 = _tmp27 * _tmp80;
  const Scalar _tmp82 = _tmp70 * _tmp75;
  const Scalar _tmp83 = _tmp68 * _tmp76 - _tmp81 * _tmp82;
  const Scalar _tmp84 = -_tmp76 + _tmp80 * _tmp82;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp84);
  const Scalar _tmp86 = _tmp65 * _tmp66;
  const Scalar _tmp87 = _tmp67 * _tmp80;
  const Scalar _tmp88 = -_tmp86 + _tmp87;
  const Scalar _tmp89 = _tmp85 * _tmp88;
  const Scalar _tmp90 = _tmp61 * _tmp86 - _tmp67 * _tmp81 - _tmp83 * _tmp89;
  const Scalar _tmp91 = _tmp27 * _tmp82;
  const Scalar _tmp92 = -_tmp68 * _tmp82 + _tmp91;
  const Scalar _tmp93 = _tmp27 * _tmp67 - _tmp51 * _tmp90 - _tmp61 * _tmp67 - _tmp89 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp90 * _tmp94;
  const Scalar _tmp96 = _tmp40 - _tmp44 * _tmp57 - _tmp58 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) * _tmp46;
  const Scalar _tmp98 = Scalar(1.0) * _tmp55;
  const Scalar _tmp99 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp100 = _tmp44 * _tmp46;
  const Scalar _tmp101 = _tmp53 + _tmp7;
  const Scalar _tmp102 = _tmp101 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp103 = _tmp29 + _tmp42;
  const Scalar _tmp104 = _tmp103 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp102, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp102 * _tmp105;
  const Scalar _tmp107 = fh1 * (_tmp26 + _tmp59);
  const Scalar _tmp108 = _tmp101 * fv1 + _tmp106 * _tmp107 + Scalar(40.024799999999999) * _tmp14;
  const Scalar _tmp109 = _tmp80 * _tmp85;
  const Scalar _tmp110 = _tmp109 * _tmp83 + _tmp81;
  const Scalar _tmp111 = _tmp109 * _tmp92 - _tmp110 * _tmp51 - _tmp27;
  const Scalar _tmp112 = std::pow(_tmp77, Scalar(2));
  const Scalar _tmp113 = std::pow(_tmp79, Scalar(2));
  const Scalar _tmp114 = _tmp112 + _tmp113;
  const Scalar _tmp115 = std::sqrt(_tmp114);
  const Scalar _tmp116 = Scalar(1.0) / (_tmp115);
  const Scalar _tmp117 = _tmp116 * _tmp34;
  const Scalar _tmp118 = _tmp116 * _tmp17;
  const Scalar _tmp119 = -_tmp117 * _tmp77 + _tmp118 * _tmp79;
  const Scalar _tmp120 = _tmp115 * _tmp78;
  const Scalar _tmp121 = _tmp119 * _tmp120;
  const Scalar _tmp122 = _tmp121 * _tmp82 + _tmp45 * _tmp82 - _tmp48 * _tmp76;
  const Scalar _tmp123 = _tmp121 * _tmp67 - _tmp122 * _tmp89 + _tmp43 * _tmp67 - _tmp54 * _tmp86;
  const Scalar _tmp124 = _tmp123 * _tmp94;
  const Scalar _tmp125 = _tmp109 * _tmp122 - _tmp111 * _tmp124 - _tmp121;
  const Scalar _tmp126 = Scalar(1.0) / (_tmp123);
  const Scalar _tmp127 = _tmp126 * _tmp93;
  const Scalar _tmp128 = _tmp125 * _tmp127;
  const Scalar _tmp129 = _tmp111 + _tmp128;
  const Scalar _tmp130 = _tmp44 * _tmp55;
  const Scalar _tmp131 = _tmp110 + _tmp128 * _tmp130 - _tmp129 * _tmp95;
  const Scalar _tmp132 = _tmp106 * fh1;
  const Scalar _tmp133 = Scalar(1.0) * _tmp132;
  const Scalar _tmp134 = Scalar(1.0) * _tmp85;
  const Scalar _tmp135 = _tmp50 * _tmp97;
  const Scalar _tmp136 = _tmp135 * _tmp83;
  const Scalar _tmp137 = -_tmp134 * _tmp92 + _tmp136 * _tmp85;
  const Scalar _tmp138 = -_tmp122 * _tmp134 - _tmp124 * _tmp137;
  const Scalar _tmp139 = _tmp127 * _tmp138;
  const Scalar _tmp140 = _tmp137 + _tmp139;
  const Scalar _tmp141 = _tmp130 * _tmp139 - _tmp134 * _tmp83 - _tmp140 * _tmp95;
  const Scalar _tmp142 = _tmp104 * _tmp105;
  const Scalar _tmp143 = _tmp142 * fh1;
  const Scalar _tmp144 = Scalar(1.0) * _tmp143;
  const Scalar _tmp145 = -_tmp103 * fv1 - _tmp107 * _tmp142 - Scalar(40.024799999999999) * _tmp30;
  const Scalar _tmp146 = _tmp52 * _tmp98 + Scalar(1.0);
  const Scalar _tmp147 = _tmp51 * _tmp98;
  const Scalar _tmp148 = Scalar(1.0) * _tmp126;
  const Scalar _tmp149 = _tmp127 * _tmp98;
  const Scalar _tmp150 = -_tmp148 * _tmp90 + _tmp149 * _tmp44;
  const Scalar _tmp151 = fh1 * (_tmp101 * _tmp142 - _tmp103 * _tmp106);
  const Scalar _tmp152 = Scalar(1.0) * _tmp151;
  const Scalar _tmp153 = Scalar(1.0) * _tmp108 * (_tmp100 * _tmp98 - _tmp98) +
                         _tmp133 * (_tmp128 * _tmp98 - _tmp131 * _tmp97) +
                         _tmp144 * (_tmp139 * _tmp98 - _tmp141 * _tmp97) +
                         Scalar(1.0) * _tmp145 * (-_tmp146 * _tmp97 + _tmp147) +
                         _tmp152 * (_tmp149 - _tmp150 * _tmp97) +
                         Scalar(1.0) * _tmp99 * (-_tmp56 * _tmp98 - _tmp96 * _tmp97 + Scalar(1.0));
  const Scalar _tmp154 = _tmp58 * _tmp94;
  const Scalar _tmp155 = _tmp82 * _tmp89;
  const Scalar _tmp156 = _tmp154 * _tmp67;
  const Scalar _tmp157 = _tmp99 * (-_tmp154 * _tmp155 + _tmp156);
  const Scalar _tmp158 = _tmp88 * _tmp94;
  const Scalar _tmp159 = -_tmp140 * _tmp158 + Scalar(1.0);
  const Scalar _tmp160 = _tmp82 * _tmp85;
  const Scalar _tmp161 = _tmp140 * _tmp94;
  const Scalar _tmp162 = _tmp161 * _tmp67;
  const Scalar _tmp163 = _tmp143 * (_tmp159 * _tmp160 + _tmp162);
  const Scalar _tmp164 = _tmp151 * (-_tmp148 * _tmp155 + _tmp148 * _tmp67);
  const Scalar _tmp165 = -_tmp129 * _tmp158 - _tmp80;
  const Scalar _tmp166 = _tmp129 * _tmp94;
  const Scalar _tmp167 = _tmp166 * _tmp67;
  const Scalar _tmp168 = _tmp132 * (_tmp160 * _tmp165 + _tmp167 + Scalar(1.0));
  const Scalar _tmp169 =
      -_tmp120 * _tmp157 - _tmp120 * _tmp163 - _tmp120 * _tmp164 - _tmp120 * _tmp168;
  const Scalar _tmp170 = Scalar(1.0) / (_tmp169);
  const Scalar _tmp171 = std::asinh(_tmp153 * _tmp170);
  const Scalar _tmp172 = Scalar(1.0) * _tmp171;
  const Scalar _tmp173 = Scalar(1.4083112389913199) * _tmp169;
  const Scalar _tmp174 = std::sqrt(_tmp37);
  const Scalar _tmp175 = -_tmp171 * _tmp173 - _tmp174;
  const Scalar _tmp176 = Scalar(0.71007031138673404) * _tmp170;
  const Scalar _tmp177 = _tmp175 * _tmp176;
  const Scalar _tmp178 = -std::sinh(_tmp172) - std::sinh(_tmp177);
  const Scalar _tmp179 = _tmp116 * _tmp168;
  const Scalar _tmp180 = Scalar(1.0) / (_tmp112);
  const Scalar _tmp181 = _tmp115 * _tmp180;
  const Scalar _tmp182 = _tmp116 * _tmp157;
  const Scalar _tmp183 = std::pow(_tmp84, Scalar(-2));
  const Scalar _tmp184 = _tmp180 * _tmp79;
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = _tmp122 * _tmp82;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = std::pow(_tmp114, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp189 = _tmp188 * _tmp34;
  const Scalar _tmp190 = _tmp17 * _tmp188;
  const Scalar _tmp191 = _tmp77 * _tmp79;
  const Scalar _tmp192 = _tmp120 * (-_tmp112 * _tmp189 + _tmp117 + _tmp190 * _tmp191);
  const Scalar _tmp193 = _tmp119 * _tmp181;
  const Scalar _tmp194 = _tmp116 * _tmp119;
  const Scalar _tmp195 = _tmp85 * (_tmp192 * _tmp82 + _tmp193 * _tmp82 - _tmp194 * _tmp82);
  const Scalar _tmp196 = _tmp184 * _tmp85;
  const Scalar _tmp197 = _tmp122 * _tmp196;
  const Scalar _tmp198 = _tmp187 * _tmp88 + _tmp192 * _tmp67 + _tmp193 * _tmp67 - _tmp194 * _tmp67 -
                         _tmp195 * _tmp88 - _tmp197 * _tmp67;
  const Scalar _tmp199 = std::pow(_tmp123, Scalar(-2));
  const Scalar _tmp200 = _tmp198 * _tmp199;
  const Scalar _tmp201 = _tmp138 * _tmp93;
  const Scalar _tmp202 = _tmp200 * _tmp201;
  const Scalar _tmp203 = _tmp137 * _tmp94;
  const Scalar _tmp204 = _tmp123 * _tmp137;
  const Scalar _tmp205 = _tmp196 * _tmp92;
  const Scalar _tmp206 = _tmp82 * _tmp92;
  const Scalar _tmp207 = _tmp185 * _tmp206;
  const Scalar _tmp208 = _tmp82 * _tmp83;
  const Scalar _tmp209 = _tmp185 * _tmp208;
  const Scalar _tmp210 = _tmp184 * _tmp27;
  const Scalar _tmp211 = _tmp196 * _tmp83;
  const Scalar _tmp212 = _tmp155 * _tmp210 + _tmp209 * _tmp88 - _tmp210 * _tmp67 - _tmp211 * _tmp67;
  const Scalar _tmp213 = -_tmp205 * _tmp67 + _tmp207 * _tmp88 - _tmp212 * _tmp51;
  const Scalar _tmp214 = std::pow(_tmp93, Scalar(-2));
  const Scalar _tmp215 = _tmp213 * _tmp214;
  const Scalar _tmp216 = _tmp185 * _tmp82;
  const Scalar _tmp217 = _tmp160 * _tmp210;
  const Scalar _tmp218 = -_tmp135 * _tmp217 - _tmp136 * _tmp216 + Scalar(1.0) * _tmp207;
  const Scalar _tmp219 = _tmp127 * (-_tmp124 * _tmp218 + Scalar(1.0) * _tmp187 -
                                    Scalar(1.0) * _tmp195 - _tmp198 * _tmp203 + _tmp204 * _tmp215);
  const Scalar _tmp220 = _tmp126 * _tmp213;
  const Scalar _tmp221 = _tmp138 * _tmp220;
  const Scalar _tmp222 = -_tmp202 + _tmp218 + _tmp219 + _tmp221;
  const Scalar _tmp223 = _tmp67 * _tmp94;
  const Scalar _tmp224 = _tmp71 / _tmp74;
  const Scalar _tmp225 = _tmp159 * _tmp224;
  const Scalar _tmp226 = _tmp140 * _tmp88;
  const Scalar _tmp227 = -_tmp158 * _tmp222 - _tmp162 * _tmp184 + _tmp215 * _tmp226;
  const Scalar _tmp228 = _tmp215 * _tmp67;
  const Scalar _tmp229 = _tmp120 * _tmp143;
  const Scalar _tmp230 = _tmp116 * _tmp164;
  const Scalar _tmp231 = Scalar(1.0) * _tmp155;
  const Scalar _tmp232 = Scalar(1.0) * _tmp67;
  const Scalar _tmp233 = _tmp185 * _tmp224;
  const Scalar _tmp234 = _tmp233 * _tmp88;
  const Scalar _tmp235 = _tmp134 * _tmp82;
  const Scalar _tmp236 = _tmp126 * _tmp67;
  const Scalar _tmp237 = _tmp184 * _tmp236;
  const Scalar _tmp238 = _tmp120 * _tmp151;
  const Scalar _tmp239 = _tmp125 * _tmp220;
  const Scalar _tmp240 = _tmp111 * _tmp123;
  const Scalar _tmp241 = _tmp111 * _tmp94;
  const Scalar _tmp242 = _tmp113 / [&]() {
    const Scalar base = _tmp77;
    return base * base * base;
  }();
  const Scalar _tmp243 = _tmp183 * _tmp242;
  const Scalar _tmp244 = -_tmp208 * _tmp243 + _tmp210 + _tmp211 - _tmp242 * _tmp85 * _tmp91;
  const Scalar _tmp245 = _tmp205 - _tmp206 * _tmp243 - _tmp244 * _tmp51;
  const Scalar _tmp246 =
      _tmp127 * (-_tmp124 * _tmp245 - _tmp186 * _tmp243 - _tmp192 - _tmp193 + _tmp194 +
                 _tmp195 * _tmp80 + _tmp197 - _tmp198 * _tmp241 + _tmp215 * _tmp240);
  const Scalar _tmp247 = _tmp125 * _tmp93;
  const Scalar _tmp248 = _tmp200 * _tmp247;
  const Scalar _tmp249 = _tmp239 + _tmp245 + _tmp246 - _tmp248;
  const Scalar _tmp250 = _tmp129 * _tmp88;
  const Scalar _tmp251 = -_tmp158 * _tmp249 - _tmp167 * _tmp184 - _tmp184 + _tmp215 * _tmp250;
  const Scalar _tmp252 = _tmp120 * _tmp132;
  const Scalar _tmp253 = _tmp155 * _tmp58;
  const Scalar _tmp254 = _tmp120 * _tmp99;
  const Scalar _tmp255 = _tmp116 * _tmp163;
  const Scalar _tmp256 =
      -_tmp157 * _tmp181 - _tmp163 * _tmp181 - _tmp164 * _tmp181 - _tmp168 * _tmp181 + _tmp179 +
      _tmp182 -
      _tmp229 * (-_tmp140 * _tmp228 + _tmp160 * _tmp227 - _tmp185 * _tmp225 + _tmp222 * _tmp223) +
      _tmp230 -
      _tmp238 * (_tmp148 * _tmp234 + _tmp200 * _tmp231 - _tmp200 * _tmp232 - _tmp235 * _tmp237) -
      _tmp252 * (-_tmp129 * _tmp228 + _tmp160 * _tmp251 - _tmp165 * _tmp233 + _tmp223 * _tmp249) -
      _tmp254 *
          (_tmp154 * _tmp234 - _tmp156 * _tmp160 * _tmp184 + _tmp215 * _tmp253 - _tmp228 * _tmp58) +
      _tmp255;
  const Scalar _tmp257 = Scalar(1.4083112389913199) * _tmp256;
  const Scalar _tmp258 = Scalar(1.0) * std::cosh(_tmp172);
  const Scalar _tmp259 = std::pow(_tmp169, Scalar(-2));
  const Scalar _tmp260 =
      std::pow(Scalar(std::pow(_tmp153, Scalar(2)) * _tmp259 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp261 = _tmp153 * _tmp259;
  const Scalar _tmp262 = _tmp215 * _tmp90;
  const Scalar _tmp263 = -_tmp130 * _tmp202 + _tmp130 * _tmp219 + _tmp130 * _tmp221 +
                         _tmp140 * _tmp262 - _tmp161 * _tmp212 + Scalar(1.0) * _tmp209 +
                         _tmp210 * _tmp235 - _tmp222 * _tmp95;
  const Scalar _tmp264 = _tmp129 * _tmp262 + _tmp130 * _tmp239 + _tmp130 * _tmp246 -
                         _tmp130 * _tmp248 - _tmp166 * _tmp212 + _tmp244 - _tmp249 * _tmp95;
  const Scalar _tmp265 = -_tmp154 * _tmp212 + _tmp262 * _tmp58;
  const Scalar _tmp266 = _tmp97 * _tmp99;
  const Scalar _tmp267 = _tmp93 * _tmp98;
  const Scalar _tmp268 = _tmp200 * _tmp267;
  const Scalar _tmp269 = Scalar(1.0) * _tmp90;
  const Scalar _tmp270 = _tmp220 * _tmp98;
  const Scalar _tmp271 =
      -_tmp148 * _tmp212 + _tmp200 * _tmp269 - _tmp268 * _tmp44 + _tmp270 * _tmp44;
  const Scalar _tmp272 =
      _tmp260 *
      (_tmp170 *
           (_tmp133 * (_tmp239 * _tmp98 + _tmp246 * _tmp98 - _tmp248 * _tmp98 - _tmp264 * _tmp97) +
            _tmp144 * (-_tmp202 * _tmp98 + _tmp219 * _tmp98 + _tmp221 * _tmp98 - _tmp263 * _tmp97) +
            _tmp152 * (-_tmp268 + _tmp270 - _tmp271 * _tmp97) - _tmp265 * _tmp266) -
       _tmp256 * _tmp261);
  const Scalar _tmp273 = Scalar(0.71007031138673404) * _tmp175 * _tmp259;
  const Scalar _tmp274 = Scalar(1.0) / (_tmp174);
  const Scalar _tmp275 = std::cosh(_tmp177);
  const Scalar _tmp276 = _tmp134 * _tmp151;
  const Scalar _tmp277 = _tmp154 * _tmp99;
  const Scalar _tmp278 = _tmp216 * _tmp88;
  const Scalar _tmp279 = _tmp152 * _tmp200;
  const Scalar _tmp280 = _tmp132 * _tmp85;
  const Scalar _tmp281 = _tmp143 * _tmp85;
  const Scalar _tmp282 = _tmp148 * _tmp151;
  const Scalar _tmp283 = _tmp143 * _tmp159;
  const Scalar _tmp284 = _tmp132 * _tmp82;
  const Scalar _tmp285 = _tmp277 * _tmp67;
  const Scalar _tmp286 = _tmp58 * _tmp99;
  const Scalar _tmp287 = _tmp215 * _tmp286;
  const Scalar _tmp288 = -_tmp165 * _tmp185 * _tmp284 - _tmp196 * _tmp285 - _tmp216 * _tmp283 +
                         _tmp227 * _tmp281 - _tmp237 * _tmp276 + _tmp251 * _tmp280 +
                         _tmp277 * _tmp278 + _tmp278 * _tmp282 + _tmp279 * _tmp89 +
                         _tmp287 * _tmp89;
  const Scalar _tmp289 = _tmp46 * _tmp99;
  const Scalar _tmp290 = _tmp143 * _tmp46;
  const Scalar _tmp291 = _tmp151 * _tmp46;
  const Scalar _tmp292 = _tmp132 * _tmp46;
  const Scalar _tmp293 = _tmp108 * _tmp98;
  const Scalar _tmp294 = -_tmp100 * _tmp293 + _tmp131 * _tmp292 + _tmp141 * _tmp290 +
                         _tmp145 * _tmp146 * _tmp46 + _tmp150 * _tmp291 + _tmp289 * _tmp96;
  const Scalar _tmp295 =
      _tmp159 * _tmp281 + _tmp165 * _tmp280 - _tmp277 * _tmp89 - _tmp282 * _tmp89;
  const Scalar _tmp296 = Scalar(1.0) / (_tmp295);
  const Scalar _tmp297 = std::asinh(_tmp294 * _tmp296);
  const Scalar _tmp298 = Scalar(1.0) * _tmp297;
  const Scalar _tmp299 = Scalar(1.4083112389913199) * _tmp295;
  const Scalar _tmp300 =
      -_tmp297 * _tmp299 - std::sqrt(Scalar(std::pow(Scalar(-_tmp69 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp72 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp301 = Scalar(0.71007031138673404) * _tmp296;
  const Scalar _tmp302 = _tmp300 * _tmp301;
  const Scalar _tmp303 = -Scalar(1.4083112389913199) * std::sinh(_tmp298) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp302);
  const Scalar _tmp304 = Scalar(1.4083112389913199) * _tmp297;
  const Scalar _tmp305 = std::pow(_tmp295, Scalar(-2));
  const Scalar _tmp306 =
      std::pow(Scalar(std::pow(_tmp294, Scalar(2)) * _tmp305 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp307 = _tmp294 * _tmp305;
  const Scalar _tmp308 =
      _tmp306 * (-_tmp288 * _tmp307 + _tmp296 * (_tmp263 * _tmp290 + _tmp264 * _tmp292 +
                                                 _tmp265 * _tmp289 + _tmp271 * _tmp291));
  const Scalar _tmp309 = Scalar(0.71007031138673404) * _tmp300 * _tmp305;
  const Scalar _tmp310 = std::cosh(_tmp302);
  const Scalar _tmp311 = Scalar(1.0) * std::cosh(_tmp298);
  const Scalar _tmp312 = _tmp132 * _tmp55;
  const Scalar _tmp313 = _tmp143 * _tmp55;
  const Scalar _tmp314 = -_tmp128 * _tmp312 - _tmp139 * _tmp313 - _tmp145 * _tmp147 -
                         _tmp149 * _tmp151 + _tmp293 + _tmp57 * _tmp99;
  const Scalar _tmp315 = _tmp132 * _tmp166 + _tmp143 * _tmp161 + _tmp277 + _tmp282;
  const Scalar _tmp316 = Scalar(1.0) / (_tmp315);
  const Scalar _tmp317 = std::asinh(_tmp314 * _tmp316);
  const Scalar _tmp318 = Scalar(1.0) * _tmp317;
  const Scalar _tmp319 = Scalar(1.0) * std::cosh(_tmp318);
  const Scalar _tmp320 = std::pow(_tmp315, Scalar(-2));
  const Scalar _tmp321 =
      std::pow(Scalar(std::pow(_tmp314, Scalar(2)) * _tmp320 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp322 = _tmp129 * _tmp132;
  const Scalar _tmp323 = _tmp132 * _tmp94;
  const Scalar _tmp324 = _tmp140 * _tmp143;
  const Scalar _tmp325 = _tmp143 * _tmp94;
  const Scalar _tmp326 = -_tmp215 * _tmp322 - _tmp215 * _tmp324 + _tmp222 * _tmp325 +
                         _tmp249 * _tmp323 - _tmp279 - _tmp287;
  const Scalar _tmp327 = _tmp314 * _tmp320;
  const Scalar _tmp328 =
      _tmp321 *
      (_tmp316 * (_tmp151 * _tmp268 - _tmp151 * _tmp270 + _tmp202 * _tmp313 - _tmp219 * _tmp313 -
                  _tmp221 * _tmp313 - _tmp239 * _tmp312 - _tmp246 * _tmp312 + _tmp248 * _tmp312) -
       _tmp326 * _tmp327);
  const Scalar _tmp329 = Scalar(1.4083112389913199) * _tmp315;
  const Scalar _tmp330 =
      -_tmp317 * _tmp329 - std::sqrt(Scalar(std::pow(Scalar(-_tmp62 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp64 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp331 = Scalar(0.71007031138673404) * _tmp316;
  const Scalar _tmp332 = _tmp330 * _tmp331;
  const Scalar _tmp333 = std::cosh(_tmp332);
  const Scalar _tmp334 = Scalar(0.71007031138673404) * _tmp320 * _tmp330;
  const Scalar _tmp335 = Scalar(1.4083112389913199) * _tmp317;
  const Scalar _tmp336 = -Scalar(1.4083112389913199) * std::sinh(_tmp318) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp332);
  const Scalar _tmp337 = _tmp183 * _tmp78;
  const Scalar _tmp338 = _tmp337 * _tmp88;
  const Scalar _tmp339 = _tmp27 * _tmp78;
  const Scalar _tmp340 = _tmp78 * _tmp85;
  const Scalar _tmp341 = _tmp340 * _tmp83;
  const Scalar _tmp342 = _tmp339 * _tmp82;
  const Scalar _tmp343 =
      -_tmp208 * _tmp338 + _tmp339 * _tmp67 + _tmp341 * _tmp67 - _tmp342 * _tmp89;
  const Scalar _tmp344 = _tmp340 * _tmp92;
  const Scalar _tmp345 = -_tmp206 * _tmp338 - _tmp343 * _tmp51 + _tmp344 * _tmp67;
  const Scalar _tmp346 = _tmp126 * _tmp345;
  const Scalar _tmp347 = _tmp346 * _tmp98;
  const Scalar _tmp348 = _tmp194 * _tmp80;
  const Scalar _tmp349 = _tmp120 * (_tmp113 * _tmp190 - _tmp118 - _tmp189 * _tmp191);
  const Scalar _tmp350 = -_tmp348 * _tmp82 + _tmp349 * _tmp82;
  const Scalar _tmp351 = _tmp122 * _tmp340;
  const Scalar _tmp352 = -_tmp186 * _tmp338 - _tmp194 * _tmp87 + _tmp349 * _tmp67 -
                         _tmp350 * _tmp89 + _tmp351 * _tmp67;
  const Scalar _tmp353 = _tmp199 * _tmp352;
  const Scalar _tmp354 = _tmp267 * _tmp353;
  const Scalar _tmp355 =
      -_tmp148 * _tmp343 + _tmp269 * _tmp353 + _tmp347 * _tmp44 - _tmp354 * _tmp44;
  const Scalar _tmp356 = _tmp214 * _tmp345;
  const Scalar _tmp357 = _tmp356 * _tmp90;
  const Scalar _tmp358 = -_tmp154 * _tmp343 + _tmp357 * _tmp58;
  const Scalar _tmp359 = _tmp125 * _tmp346;
  const Scalar _tmp360 = _tmp209 + _tmp217 - _tmp339 - _tmp341;
  const Scalar _tmp361 = _tmp207 - _tmp344 - _tmp360 * _tmp51;
  const Scalar _tmp362 =
      _tmp127 * (_tmp109 * _tmp350 - _tmp124 * _tmp361 + _tmp187 + _tmp240 * _tmp356 -
                 _tmp241 * _tmp352 + _tmp348 - _tmp349 - _tmp351);
  const Scalar _tmp363 = _tmp247 * _tmp353;
  const Scalar _tmp364 = _tmp359 + _tmp361 + _tmp362 - _tmp363;
  const Scalar _tmp365 = _tmp129 * _tmp357 + _tmp130 * _tmp359 + _tmp130 * _tmp362 -
                         _tmp130 * _tmp363 - _tmp166 * _tmp343 + _tmp360 - _tmp364 * _tmp95;
  const Scalar _tmp366 = _tmp337 * _tmp82;
  const Scalar _tmp367 = Scalar(1.0) * _tmp337;
  const Scalar _tmp368 = _tmp135 * _tmp160 * _tmp339 + _tmp136 * _tmp366 - _tmp206 * _tmp367;
  const Scalar _tmp369 = _tmp127 * (-_tmp124 * _tmp368 - _tmp134 * _tmp350 - _tmp186 * _tmp367 -
                                    _tmp203 * _tmp352 + _tmp204 * _tmp356);
  const Scalar _tmp370 = _tmp138 * _tmp346;
  const Scalar _tmp371 = _tmp201 * _tmp353;
  const Scalar _tmp372 = _tmp368 + _tmp369 + _tmp370 - _tmp371;
  const Scalar _tmp373 = _tmp130 * _tmp369 + _tmp130 * _tmp370 - _tmp130 * _tmp371 -
                         _tmp134 * _tmp342 + _tmp140 * _tmp357 - _tmp161 * _tmp343 -
                         _tmp208 * _tmp367 - _tmp372 * _tmp95;
  const Scalar _tmp374 = _tmp236 * _tmp78;
  const Scalar _tmp375 = _tmp224 * _tmp338;
  const Scalar _tmp376 = _tmp356 * _tmp67;
  const Scalar _tmp377 = -_tmp158 * _tmp372 + _tmp162 * _tmp78 + _tmp226 * _tmp356;
  const Scalar _tmp378 = _tmp165 * _tmp337;
  const Scalar _tmp379 = -_tmp158 * _tmp364 + _tmp167 * _tmp78 + _tmp250 * _tmp356 + _tmp78;
  const Scalar _tmp380 =
      _tmp179 * _tmp80 + _tmp182 * _tmp80 -
      _tmp229 * (-_tmp140 * _tmp376 + _tmp160 * _tmp377 + _tmp223 * _tmp372 + _tmp225 * _tmp337) +
      _tmp230 * _tmp80 -
      _tmp238 * (-_tmp148 * _tmp375 + _tmp231 * _tmp353 - _tmp232 * _tmp353 + _tmp235 * _tmp374) -
      _tmp252 * (-_tmp129 * _tmp376 + _tmp160 * _tmp379 + _tmp223 * _tmp364 + _tmp224 * _tmp378) -
      _tmp254 *
          (-_tmp154 * _tmp375 + _tmp156 * _tmp340 * _tmp82 + _tmp253 * _tmp356 - _tmp376 * _tmp58) +
      _tmp255 * _tmp80;
  const Scalar _tmp381 =
      _tmp260 *
      (_tmp170 *
           (_tmp133 * (_tmp359 * _tmp98 + _tmp362 * _tmp98 - _tmp363 * _tmp98 - _tmp365 * _tmp97) +
            _tmp144 * (_tmp369 * _tmp98 + _tmp370 * _tmp98 - _tmp371 * _tmp98 - _tmp373 * _tmp97) +
            _tmp152 * (_tmp347 - _tmp354 - _tmp355 * _tmp97) - _tmp266 * _tmp358) -
       _tmp261 * _tmp380);
  const Scalar _tmp382 = Scalar(1.4083112389913199) * _tmp380;
  const Scalar _tmp383 = _tmp286 * _tmp356;
  const Scalar _tmp384 = _tmp338 * _tmp82;
  const Scalar _tmp385 = _tmp152 * _tmp353;
  const Scalar _tmp386 = _tmp276 * _tmp374 - _tmp277 * _tmp384 + _tmp280 * _tmp379 +
                         _tmp281 * _tmp377 - _tmp282 * _tmp384 + _tmp283 * _tmp366 +
                         _tmp284 * _tmp378 + _tmp285 * _tmp340 + _tmp383 * _tmp89 +
                         _tmp385 * _tmp89;
  const Scalar _tmp387 =
      _tmp306 *
      (_tmp296 * (_tmp289 * _tmp358 + _tmp290 * _tmp373 + _tmp291 * _tmp355 + _tmp292 * _tmp365) -
       _tmp307 * _tmp386);
  const Scalar _tmp388 = -_tmp322 * _tmp356 + _tmp323 * _tmp364 - _tmp324 * _tmp356 +
                         _tmp325 * _tmp372 - _tmp383 - _tmp385;
  const Scalar _tmp389 =
      _tmp321 *
      (_tmp316 * (-_tmp151 * _tmp347 + _tmp151 * _tmp354 - _tmp312 * _tmp359 - _tmp312 * _tmp362 +
                  _tmp312 * _tmp363 - _tmp313 * _tmp369 - _tmp313 * _tmp370 + _tmp313 * _tmp371) -
       _tmp327 * _tmp388);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp173 * (-_tmp258 * _tmp272 -
                 _tmp275 * (_tmp176 * (-_tmp171 * _tmp257 - _tmp173 * _tmp272 - _tmp19 * _tmp274) -
                            _tmp256 * _tmp273)) +
      _tmp178 * _tmp257 - _tmp19 * _tmp38;
  _res(2, 0) =
      _tmp288 * _tmp303 +
      _tmp299 *
          (-_tmp308 * _tmp311 -
           _tmp310 * (-_tmp288 * _tmp309 + _tmp301 * (-_tmp288 * _tmp304 - _tmp299 * _tmp308)));
  _res(3, 0) =
      _tmp326 * _tmp336 +
      _tmp329 *
          (-_tmp319 * _tmp328 -
           _tmp333 * (-_tmp326 * _tmp334 + _tmp331 * (-_tmp326 * _tmp335 - _tmp328 * _tmp329)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp173 * (-_tmp258 * _tmp381 -
                 _tmp275 * (_tmp176 * (-_tmp171 * _tmp382 - _tmp173 * _tmp381 - _tmp274 * _tmp36) -
                            _tmp273 * _tmp380)) +
      _tmp178 * _tmp382 - _tmp36 * _tmp38;
  _res(2, 1) =
      _tmp299 *
          (-_tmp310 * (_tmp301 * (-_tmp299 * _tmp387 - _tmp304 * _tmp386) - _tmp309 * _tmp386) -
           _tmp311 * _tmp387) +
      _tmp303 * _tmp386;
  _res(3, 1) =
      _tmp329 *
          (-_tmp319 * _tmp389 -
           _tmp333 * (_tmp331 * (-_tmp329 * _tmp389 - _tmp335 * _tmp388) - _tmp334 * _tmp388)) +
      _tmp336 * _tmp388;
  _res(0, 2) = 0;
  _res(1, 2) = -_tmp28 * _tmp38;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
