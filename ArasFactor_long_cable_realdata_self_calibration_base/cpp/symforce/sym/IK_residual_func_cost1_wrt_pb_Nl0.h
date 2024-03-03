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
 * Symbolic function: IK_residual_func_cost1_wrt_pb_Nl0
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPbNl0(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1217

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (396)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp4 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp11 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp13 = _tmp2 * _tmp4;
  const Scalar _tmp14 = _tmp0 * _tmp6;
  const Scalar _tmp15 = _tmp13 + _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp12 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp9;
  const Scalar _tmp19 = Scalar(1.0) * _tmp18;
  const Scalar _tmp20 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp10 +
                        Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999);
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp24 = _tmp2 * _tmp5;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = _tmp22 + _tmp28;
  const Scalar _tmp30 = Scalar(1.0) * _tmp29;
  const Scalar _tmp31 = -_tmp30;
  const Scalar _tmp32 = _tmp21 + _tmp28;
  const Scalar _tmp33 = Scalar(1.0) / (_tmp31 + _tmp32);
  const Scalar _tmp34 = _tmp17 + _tmp8;
  const Scalar _tmp35 = _tmp19 - _tmp34;
  const Scalar _tmp36 = _tmp33 * _tmp35;
  const Scalar _tmp37 = _tmp19 + _tmp30 * _tmp36;
  const Scalar _tmp38 = 0;
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp40 = -_tmp39;
  const Scalar _tmp41 =
      -Scalar(0.010999999999999999) * _tmp11 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp43 = _tmp41 + _tmp42;
  const Scalar _tmp44 = _tmp40 + _tmp43;
  const Scalar _tmp45 = -_tmp12 + _tmp16;
  const Scalar _tmp46 = _tmp45 + _tmp8;
  const Scalar _tmp47 = _tmp46 + position_vector(0, 0);
  const Scalar _tmp48 = _tmp47 - p_d(0, 0);
  const Scalar _tmp49 = _tmp26 - _tmp27;
  const Scalar _tmp50 = _tmp21 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 - p_d(1, 0);
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp48 * _tmp53;
  const Scalar _tmp55 = _tmp41 - _tmp42;
  const Scalar _tmp56 = _tmp39 + _tmp55;
  const Scalar _tmp57 = _tmp52 * _tmp53;
  const Scalar _tmp58 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp59 = _tmp58 - p_b(0, 0);
  const Scalar _tmp60 = Scalar(1.0) / (_tmp59);
  const Scalar _tmp61 = _tmp29 + position_vector(1, 0);
  const Scalar _tmp62 = _tmp61 - p_b(1, 0);
  const Scalar _tmp63 = _tmp60 * _tmp62;
  const Scalar _tmp64 = _tmp34 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 - p_c(0, 0);
  const Scalar _tmp66 = std::pow(_tmp65, Scalar(2));
  const Scalar _tmp67 = _tmp32 + position_vector(1, 0);
  const Scalar _tmp68 = _tmp67 - p_c(1, 0);
  const Scalar _tmp69 = _tmp66 + std::pow(_tmp68, Scalar(2));
  const Scalar _tmp70 = std::pow(_tmp69, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp71 = _tmp65 * _tmp70;
  const Scalar _tmp72 = _tmp56 * _tmp71;
  const Scalar _tmp73 = _tmp39 + _tmp43;
  const Scalar _tmp74 = _tmp68 * _tmp70;
  const Scalar _tmp75 = -_tmp63 * _tmp72 + _tmp73 * _tmp74;
  const Scalar _tmp76 = _tmp54 * _tmp63 - _tmp57;
  const Scalar _tmp77 = _tmp63 * _tmp71;
  const Scalar _tmp78 = -_tmp74 + _tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp78);
  const Scalar _tmp80 = _tmp76 * _tmp79;
  const Scalar _tmp81 = _tmp56 * _tmp63;
  const Scalar _tmp82 = _tmp44 * _tmp57 - _tmp54 * _tmp81 - _tmp75 * _tmp80;
  const Scalar _tmp83 = -_tmp71 * _tmp73 + _tmp72;
  const Scalar _tmp84 = -_tmp36 * _tmp82 - _tmp44 * _tmp54 + _tmp54 * _tmp56 - _tmp80 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp84);
  const Scalar _tmp86 = _tmp38 * _tmp85;
  const Scalar _tmp87 = _tmp54 * _tmp86;
  const Scalar _tmp88 = std::pow(_tmp59, Scalar(2));
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = _tmp62 * _tmp89;
  const Scalar _tmp91 = _tmp71 * _tmp79;
  const Scalar _tmp92 = _tmp90 * _tmp91;
  const Scalar _tmp93 = std::pow(_tmp78, Scalar(-2));
  const Scalar _tmp94 = _tmp90 * _tmp93;
  const Scalar _tmp95 = _tmp71 * _tmp83;
  const Scalar _tmp96 = _tmp94 * _tmp95;
  const Scalar _tmp97 = _tmp56 * _tmp90;
  const Scalar _tmp98 = _tmp71 * _tmp75;
  const Scalar _tmp99 = _tmp94 * _tmp98;
  const Scalar _tmp100 = _tmp79 * _tmp90;
  const Scalar _tmp101 = _tmp100 * _tmp75;
  const Scalar _tmp102 = _tmp72 * _tmp90;
  const Scalar _tmp103 = -_tmp101 * _tmp54 + _tmp102 * _tmp80 - _tmp54 * _tmp97 + _tmp76 * _tmp99;
  const Scalar _tmp104 = _tmp100 * _tmp83;
  const Scalar _tmp105 = -_tmp103 * _tmp36 - _tmp104 * _tmp54 + _tmp76 * _tmp96;
  const Scalar _tmp106 = std::pow(_tmp84, Scalar(-2));
  const Scalar _tmp107 = _tmp105 * _tmp106;
  const Scalar _tmp108 = _tmp107 * _tmp54;
  const Scalar _tmp109 = _tmp66 / _tmp69;
  const Scalar _tmp110 = _tmp109 * _tmp94;
  const Scalar _tmp111 = _tmp76 * _tmp86;
  const Scalar _tmp112 = _tmp71 * _tmp80;
  const Scalar _tmp113 = _tmp112 * _tmp38;
  const Scalar _tmp114 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp115 = std::pow(_tmp62, Scalar(2));
  const Scalar _tmp116 = _tmp115 + _tmp88;
  const Scalar _tmp117 = std::sqrt(_tmp116);
  const Scalar _tmp118 = _tmp117 * _tmp60;
  const Scalar _tmp119 = _tmp114 * _tmp118;
  const Scalar _tmp120 = Scalar(1.0) / (_tmp117);
  const Scalar _tmp121 = _tmp120 * _tmp18;
  const Scalar _tmp122 = _tmp120 * _tmp29;
  const Scalar _tmp123 = _tmp121 * _tmp62 - _tmp122 * _tmp59;
  const Scalar _tmp124 = _tmp117 * _tmp123;
  const Scalar _tmp125 = _tmp124 * _tmp60;
  const Scalar _tmp126 = _tmp125 * _tmp71 + _tmp32 * _tmp71 - _tmp34 * _tmp74;
  const Scalar _tmp127 = _tmp125 * _tmp54 - _tmp126 * _tmp80 - _tmp46 * _tmp57 + _tmp50 * _tmp54;
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = Scalar(1.0) * _tmp128;
  const Scalar _tmp130 = _tmp129 * _tmp54;
  const Scalar _tmp131 = _tmp22 + _tmp49;
  const Scalar _tmp132 = _tmp45 + _tmp9;
  const Scalar _tmp133 = _tmp132 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp134 = _tmp131 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp135 =
      std::pow(Scalar(std::pow(_tmp133, Scalar(2)) + std::pow(_tmp134, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp136 = _tmp133 * _tmp135;
  const Scalar _tmp137 = _tmp134 * _tmp135;
  const Scalar _tmp138 = fh1 * (-_tmp131 * _tmp136 + _tmp132 * _tmp137);
  const Scalar _tmp139 = _tmp138 * (-_tmp112 * _tmp129 + _tmp130);
  const Scalar _tmp140 = _tmp120 * _tmp139;
  const Scalar _tmp141 = _tmp117 * _tmp89;
  const Scalar _tmp142 = _tmp63 * _tmp79;
  const Scalar _tmp143 = _tmp142 * _tmp75 + _tmp81;
  const Scalar _tmp144 = _tmp142 * _tmp83 - _tmp143 * _tmp36 - _tmp56;
  const Scalar _tmp145 = _tmp127 * _tmp85;
  const Scalar _tmp146 = -_tmp125 + _tmp126 * _tmp142 - _tmp144 * _tmp145;
  const Scalar _tmp147 = _tmp128 * _tmp84;
  const Scalar _tmp148 = _tmp146 * _tmp147;
  const Scalar _tmp149 = _tmp144 + _tmp148;
  const Scalar _tmp150 = _tmp76 * _tmp85;
  const Scalar _tmp151 = -_tmp149 * _tmp150 - _tmp63;
  const Scalar _tmp152 = _tmp54 * _tmp85;
  const Scalar _tmp153 = _tmp149 * _tmp152;
  const Scalar _tmp154 = _tmp136 * fh1;
  const Scalar _tmp155 = _tmp154 * (_tmp151 * _tmp91 + _tmp153 + Scalar(1.0));
  const Scalar _tmp156 = _tmp120 * _tmp155;
  const Scalar _tmp157 = _tmp115 / [&]() {
    const Scalar base = _tmp59;
    return base * base * base;
  }();
  const Scalar _tmp158 = _tmp157 * _tmp93;
  const Scalar _tmp159 = _tmp101 - _tmp157 * _tmp72 * _tmp79 - _tmp158 * _tmp98 + _tmp97;
  const Scalar _tmp160 = _tmp104 - _tmp158 * _tmp95 - _tmp159 * _tmp36;
  const Scalar _tmp161 = _tmp124 * _tmp89;
  const Scalar _tmp162 = _tmp120 * _tmp123;
  const Scalar _tmp163 = std::pow(_tmp116, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp164 = _tmp163 * _tmp29;
  const Scalar _tmp165 = _tmp163 * _tmp18;
  const Scalar _tmp166 = _tmp59 * _tmp62;
  const Scalar _tmp167 = _tmp118 * (_tmp122 - _tmp164 * _tmp88 + _tmp165 * _tmp166);
  const Scalar _tmp168 = _tmp161 * _tmp71 - _tmp162 * _tmp71 + _tmp167 * _tmp71;
  const Scalar _tmp169 = _tmp126 * _tmp71;
  const Scalar _tmp170 = _tmp169 * _tmp94;
  const Scalar _tmp171 = _tmp100 * _tmp126;
  const Scalar _tmp172 = _tmp161 * _tmp54 - _tmp162 * _tmp54 + _tmp167 * _tmp54 - _tmp168 * _tmp80 +
                         _tmp170 * _tmp76 - _tmp171 * _tmp54;
  const Scalar _tmp173 = _tmp172 * _tmp85;
  const Scalar _tmp174 = _tmp107 * _tmp127;
  const Scalar _tmp175 =
      _tmp147 * (_tmp142 * _tmp168 - _tmp144 * _tmp173 + _tmp144 * _tmp174 - _tmp145 * _tmp160 -
                 _tmp158 * _tmp169 - _tmp161 + _tmp162 - _tmp167 + _tmp171);
  const Scalar _tmp176 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp177 = _tmp176 * _tmp84;
  const Scalar _tmp178 = _tmp172 * _tmp177;
  const Scalar _tmp179 = _tmp146 * _tmp178;
  const Scalar _tmp180 = _tmp128 * _tmp146;
  const Scalar _tmp181 = _tmp105 * _tmp180;
  const Scalar _tmp182 = _tmp160 + _tmp175 - _tmp179 + _tmp181;
  const Scalar _tmp183 = _tmp109 * _tmp151;
  const Scalar _tmp184 = _tmp149 * _tmp76;
  const Scalar _tmp185 = _tmp107 * _tmp184 - _tmp150 * _tmp182 - _tmp153 * _tmp90 - _tmp90;
  const Scalar _tmp186 = _tmp118 * _tmp154;
  const Scalar _tmp187 = Scalar(1.0) * _tmp79;
  const Scalar _tmp188 = Scalar(1.0) * _tmp33;
  const Scalar _tmp189 = _tmp188 * _tmp35;
  const Scalar _tmp190 = _tmp189 * _tmp75;
  const Scalar _tmp191 = -_tmp187 * _tmp83 + _tmp190 * _tmp79;
  const Scalar _tmp192 = -_tmp126 * _tmp187 - _tmp145 * _tmp191;
  const Scalar _tmp193 = _tmp128 * _tmp192;
  const Scalar _tmp194 = _tmp193 * _tmp84;
  const Scalar _tmp195 = _tmp191 + _tmp194;
  const Scalar _tmp196 = _tmp152 * _tmp195;
  const Scalar _tmp197 = -_tmp150 * _tmp195 + Scalar(1.0);
  const Scalar _tmp198 = _tmp137 * fh1;
  const Scalar _tmp199 = _tmp198 * (_tmp196 + _tmp197 * _tmp91);
  const Scalar _tmp200 = _tmp120 * _tmp199;
  const Scalar _tmp201 = _tmp129 * _tmp76;
  const Scalar _tmp202 = _tmp176 * _tmp187 * _tmp76;
  const Scalar _tmp203 = _tmp172 * _tmp202;
  const Scalar _tmp204 = Scalar(1.0) * _tmp176;
  const Scalar _tmp205 = _tmp204 * _tmp54;
  const Scalar _tmp206 = _tmp118 * _tmp138;
  const Scalar _tmp207 = _tmp114 * (-_tmp112 * _tmp86 + _tmp87);
  const Scalar _tmp208 = _tmp195 * _tmp76;
  const Scalar _tmp209 = _tmp178 * _tmp192;
  const Scalar _tmp210 = _tmp100 * _tmp72;
  const Scalar _tmp211 = _tmp71 * _tmp94;
  const Scalar _tmp212 = -_tmp189 * _tmp210 - _tmp190 * _tmp211 + Scalar(1.0) * _tmp96;
  const Scalar _tmp213 = _tmp147 * (-_tmp145 * _tmp212 - _tmp168 * _tmp187 + Scalar(1.0) * _tmp170 -
                                    _tmp173 * _tmp191 + _tmp174 * _tmp191);
  const Scalar _tmp214 = _tmp105 * _tmp193;
  const Scalar _tmp215 = -_tmp209 + _tmp212 + _tmp213 + _tmp214;
  const Scalar _tmp216 = _tmp107 * _tmp208 - _tmp150 * _tmp215 - _tmp196 * _tmp90;
  const Scalar _tmp217 = _tmp118 * _tmp198;
  const Scalar _tmp218 = _tmp120 * _tmp207;
  const Scalar _tmp219 =
      -_tmp119 * (_tmp107 * _tmp113 - _tmp108 * _tmp38 + _tmp110 * _tmp111 - _tmp87 * _tmp92) -
      _tmp139 * _tmp141 + _tmp140 - _tmp141 * _tmp155 - _tmp141 * _tmp199 - _tmp141 * _tmp207 +
      _tmp156 -
      _tmp186 * (-_tmp108 * _tmp149 + _tmp152 * _tmp182 - _tmp183 * _tmp94 + _tmp185 * _tmp91) +
      _tmp200 -
      _tmp206 * (_tmp110 * _tmp201 - _tmp130 * _tmp92 - _tmp172 * _tmp205 + _tmp203 * _tmp71) -
      _tmp217 * (-_tmp108 * _tmp195 - _tmp110 * _tmp197 + _tmp152 * _tmp215 + _tmp216 * _tmp91) +
      _tmp218;
  const Scalar _tmp220 =
      -_tmp118 * _tmp139 - _tmp118 * _tmp155 - _tmp118 * _tmp199 - _tmp118 * _tmp207;
  const Scalar _tmp221 = Scalar(1.0) / (_tmp220);
  const Scalar _tmp222 = fh1 * (_tmp40 + _tmp55);
  const Scalar _tmp223 = _tmp132 * fv1 + _tmp136 * _tmp222 + Scalar(40.024799999999999) * _tmp15;
  const Scalar _tmp224 = _tmp31 + _tmp50;
  const Scalar _tmp225 = _tmp224 * _tmp36;
  const Scalar _tmp226 = Scalar(1.0) / (_tmp19 - _tmp225 - _tmp46);
  const Scalar _tmp227 = Scalar(1.0) * _tmp226;
  const Scalar _tmp228 = _tmp224 * _tmp227;
  const Scalar _tmp229 = _tmp226 * _tmp37;
  const Scalar _tmp230 = -_tmp224 * _tmp229 + _tmp31 - _tmp82 * _tmp86;
  const Scalar _tmp231 = -_tmp131 * fv1 - _tmp137 * _tmp222 - Scalar(40.024799999999999) * _tmp25;
  const Scalar _tmp232 = _tmp225 * _tmp227 + Scalar(1.0);
  const Scalar _tmp233 = _tmp227 * _tmp36;
  const Scalar _tmp234 = -_tmp129 * _tmp82 + _tmp147 * _tmp228;
  const Scalar _tmp235 = _tmp147 * _tmp227;
  const Scalar _tmp236 = Scalar(1.0) * _tmp138;
  const Scalar _tmp237 = _tmp224 * _tmp226;
  const Scalar _tmp238 = _tmp82 * _tmp85;
  const Scalar _tmp239 = -_tmp187 * _tmp75 + _tmp194 * _tmp237 - _tmp195 * _tmp238;
  const Scalar _tmp240 = Scalar(1.0) * _tmp198;
  const Scalar _tmp241 = _tmp143 + _tmp148 * _tmp237 - _tmp149 * _tmp238;
  const Scalar _tmp242 = Scalar(1.0) * _tmp154;
  const Scalar _tmp243 =
      Scalar(1.0) * _tmp114 * (-_tmp188 * _tmp230 - _tmp227 * _tmp37 + Scalar(1.0)) +
      Scalar(1.0) * _tmp223 * (-_tmp227 + _tmp228 * _tmp33) +
      Scalar(1.0) * _tmp231 * (-_tmp188 * _tmp232 + _tmp233) +
      _tmp236 * (-_tmp188 * _tmp234 + _tmp235) +
      _tmp240 * (-_tmp188 * _tmp239 + _tmp194 * _tmp227) +
      _tmp242 * (_tmp148 * _tmp227 - _tmp188 * _tmp241);
  const Scalar _tmp244 = std::asinh(_tmp221 * _tmp243);
  const Scalar _tmp245 = Scalar(1.0) * _tmp244;
  const Scalar _tmp246 = -_tmp61 + p_b(1, 0);
  const Scalar _tmp247 = -_tmp58 + p_b(0, 0);
  const Scalar _tmp248 =
      std::sqrt(Scalar(std::pow(_tmp246, Scalar(2)) + std::pow(_tmp247, Scalar(2))));
  const Scalar _tmp249 = Scalar(1.4083112389913199) * _tmp220;
  const Scalar _tmp250 = -_tmp244 * _tmp249 - _tmp248;
  const Scalar _tmp251 = Scalar(0.71007031138673404) * _tmp221;
  const Scalar _tmp252 = _tmp250 * _tmp251;
  const Scalar _tmp253 = Scalar(1.4083112389913199) * _tmp251 * p_b(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp245) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp252);
  const Scalar _tmp254 = std::sinh(_tmp252);
  const Scalar _tmp255 = Scalar(1.0) / (_tmp248);
  const Scalar _tmp256 = std::pow(_tmp220, Scalar(-2));
  const Scalar _tmp257 = _tmp243 * _tmp256;
  const Scalar _tmp258 = _tmp38 * _tmp82;
  const Scalar _tmp259 = -_tmp103 * _tmp86 + _tmp107 * _tmp258;
  const Scalar _tmp260 = _tmp114 * _tmp188;
  const Scalar _tmp261 = _tmp178 * _tmp227;
  const Scalar _tmp262 = _tmp128 * _tmp227;
  const Scalar _tmp263 = _tmp105 * _tmp262;
  const Scalar _tmp264 = _tmp204 * _tmp82;
  const Scalar _tmp265 =
      -_tmp103 * _tmp129 + _tmp172 * _tmp264 - _tmp178 * _tmp228 + _tmp224 * _tmp263;
  const Scalar _tmp266 = _tmp103 * _tmp85;
  const Scalar _tmp267 = _tmp149 * _tmp82;
  const Scalar _tmp268 = _tmp107 * _tmp267 - _tmp149 * _tmp266 + _tmp159 + _tmp175 * _tmp237 -
                         _tmp179 * _tmp237 + _tmp181 * _tmp237 - _tmp182 * _tmp238;
  const Scalar _tmp269 = _tmp195 * _tmp82;
  const Scalar _tmp270 = _tmp102 * _tmp187 + _tmp107 * _tmp269 - _tmp195 * _tmp266 -
                         _tmp209 * _tmp237 + _tmp213 * _tmp237 + _tmp214 * _tmp237 -
                         _tmp215 * _tmp238 + Scalar(1.0) * _tmp99;
  const Scalar _tmp271 =
      -_tmp219 * _tmp257 + _tmp221 * (_tmp236 * (-_tmp188 * _tmp265 - _tmp261 + _tmp263) +
                                      _tmp240 * (-_tmp188 * _tmp270 - _tmp209 * _tmp227 +
                                                 _tmp213 * _tmp227 + _tmp214 * _tmp227) +
                                      _tmp242 * (_tmp175 * _tmp227 - _tmp179 * _tmp227 +
                                                 _tmp181 * _tmp227 - _tmp188 * _tmp268) -
                                      _tmp259 * _tmp260);
  const Scalar _tmp272 =
      std::pow(Scalar(std::pow(_tmp243, Scalar(2)) * _tmp256 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp273 = _tmp249 * _tmp272;
  const Scalar _tmp274 = Scalar(1.4083112389913199) * _tmp244;
  const Scalar _tmp275 = Scalar(0.71007031138673404) * _tmp256;
  const Scalar _tmp276 = _tmp250 * _tmp275;
  const Scalar _tmp277 = _tmp275 * p_b(2, 0);
  const Scalar _tmp278 = Scalar(1.0) * _tmp272 * std::sinh(_tmp245);
  const Scalar _tmp279 = _tmp198 * _tmp79;
  const Scalar _tmp280 = _tmp114 * _tmp86;
  const Scalar _tmp281 = _tmp154 * _tmp79;
  const Scalar _tmp282 = _tmp129 * _tmp138;
  const Scalar _tmp283 =
      _tmp151 * _tmp281 + _tmp197 * _tmp279 - _tmp280 * _tmp80 - _tmp282 * _tmp80;
  const Scalar _tmp284 = Scalar(1.0) / (_tmp283);
  const Scalar _tmp285 = _tmp114 * _tmp33;
  const Scalar _tmp286 = _tmp154 * _tmp33;
  const Scalar _tmp287 = _tmp198 * _tmp33;
  const Scalar _tmp288 = _tmp223 * _tmp227;
  const Scalar _tmp289 = _tmp138 * _tmp33;
  const Scalar _tmp290 = -_tmp224 * _tmp288 * _tmp33 + _tmp230 * _tmp285 +
                         _tmp231 * _tmp232 * _tmp33 + _tmp234 * _tmp289 + _tmp239 * _tmp287 +
                         _tmp241 * _tmp286;
  const Scalar _tmp291 = std::asinh(_tmp284 * _tmp290);
  const Scalar _tmp292 = Scalar(1.4083112389913199) * _tmp283;
  const Scalar _tmp293 =
      -_tmp291 * _tmp292 - std::sqrt(Scalar(std::pow(Scalar(-_tmp64 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp67 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp294 = _tmp211 * _tmp76;
  const Scalar _tmp295 = _tmp280 * _tmp54;
  const Scalar _tmp296 = _tmp114 * _tmp38;
  const Scalar _tmp297 = _tmp107 * _tmp296;
  const Scalar _tmp298 = _tmp198 * _tmp71;
  const Scalar _tmp299 = _tmp151 * _tmp154;
  const Scalar _tmp300 = -_tmp100 * _tmp130 * _tmp138 - _tmp100 * _tmp295 + _tmp138 * _tmp203 +
                         _tmp185 * _tmp281 - _tmp197 * _tmp298 * _tmp94 - _tmp211 * _tmp299 +
                         _tmp216 * _tmp279 + _tmp280 * _tmp294 + _tmp282 * _tmp294 +
                         _tmp297 * _tmp80;
  const Scalar _tmp301 = std::pow(_tmp283, Scalar(-2));
  const Scalar _tmp302 = Scalar(0.71007031138673404) * _tmp301;
  const Scalar _tmp303 = _tmp300 * _tmp302;
  const Scalar _tmp304 = Scalar(1.4083112389913199) * _tmp291;
  const Scalar _tmp305 = _tmp290 * _tmp301;
  const Scalar _tmp306 =
      std::pow(Scalar(std::pow(_tmp290, Scalar(2)) * _tmp301 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp307 =
      _tmp306 *
      (_tmp284 * (_tmp259 * _tmp285 + _tmp265 * _tmp289 + _tmp268 * _tmp286 + _tmp270 * _tmp287) -
       _tmp300 * _tmp305);
  const Scalar _tmp308 = Scalar(0.71007031138673404) * _tmp284;
  const Scalar _tmp309 = _tmp293 * _tmp308;
  const Scalar _tmp310 = std::sinh(_tmp309);
  const Scalar _tmp311 = Scalar(1.0) * _tmp291;
  const Scalar _tmp312 = Scalar(1.0) * std::sinh(_tmp311);
  const Scalar _tmp313 = Scalar(1.4083112389913199) * _tmp308 * p_c(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp309) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp311);
  const Scalar _tmp314 = _tmp154 * _tmp85;
  const Scalar _tmp315 = _tmp198 * _tmp85;
  const Scalar _tmp316 = _tmp149 * _tmp314 + _tmp195 * _tmp315 + _tmp280 + _tmp282;
  const Scalar _tmp317 = Scalar(1.0) / (_tmp316);
  const Scalar _tmp318 = _tmp198 * _tmp226;
  const Scalar _tmp319 = _tmp154 * _tmp226;
  const Scalar _tmp320 = _tmp114 * _tmp229 - _tmp138 * _tmp235 - _tmp148 * _tmp319 -
                         _tmp194 * _tmp318 - _tmp231 * _tmp233 + _tmp288;
  const Scalar _tmp321 = std::asinh(_tmp317 * _tmp320);
  const Scalar _tmp322 = Scalar(1.0) * _tmp321;
  const Scalar _tmp323 = Scalar(1.4083112389913199) * _tmp316;
  const Scalar _tmp324 =
      -_tmp321 * _tmp323 - std::sqrt(Scalar(std::pow(Scalar(-_tmp47 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp51 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp325 = Scalar(0.71007031138673404) * _tmp317;
  const Scalar _tmp326 = _tmp324 * _tmp325;
  const Scalar _tmp327 = _tmp325 * p_d(2, 0) + std::cosh(_tmp322) - std::cosh(_tmp326);
  const Scalar _tmp328 = _tmp195 * _tmp198;
  const Scalar _tmp329 = _tmp149 * _tmp154;
  const Scalar _tmp330 = _tmp138 * _tmp204;
  const Scalar _tmp331 = -_tmp107 * _tmp328 - _tmp107 * _tmp329 - _tmp172 * _tmp330 +
                         _tmp182 * _tmp314 + _tmp215 * _tmp315 - _tmp297;
  const Scalar _tmp332 = Scalar(1.4083112389913199) * _tmp331;
  const Scalar _tmp333 = std::pow(_tmp316, Scalar(-2));
  const Scalar _tmp334 =
      std::pow(Scalar(std::pow(_tmp320, Scalar(2)) * _tmp333 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp335 = _tmp320 * _tmp333;
  const Scalar _tmp336 =
      _tmp334 *
      (_tmp317 * (_tmp138 * _tmp261 - _tmp138 * _tmp263 - _tmp175 * _tmp319 + _tmp179 * _tmp319 -
                  _tmp181 * _tmp319 + _tmp209 * _tmp318 - _tmp213 * _tmp318 - _tmp214 * _tmp318) -
       _tmp331 * _tmp335);
  const Scalar _tmp337 = Scalar(1.0) * std::sinh(_tmp322);
  const Scalar _tmp338 = std::sinh(_tmp326);
  const Scalar _tmp339 = Scalar(0.71007031138673404) * _tmp333;
  const Scalar _tmp340 = _tmp324 * _tmp339;
  const Scalar _tmp341 = _tmp339 * p_d(2, 0);
  const Scalar _tmp342 = _tmp118 * (_tmp115 * _tmp165 - _tmp121 - _tmp164 * _tmp166);
  const Scalar _tmp343 = -_tmp162 * _tmp77 + _tmp342 * _tmp71;
  const Scalar _tmp344 = _tmp60 * _tmp93;
  const Scalar _tmp345 = _tmp344 * _tmp71;
  const Scalar _tmp346 = _tmp345 * _tmp76;
  const Scalar _tmp347 = _tmp60 * _tmp79;
  const Scalar _tmp348 = _tmp126 * _tmp347;
  const Scalar _tmp349 = _tmp162 * _tmp63;
  const Scalar _tmp350 = -_tmp126 * _tmp346 + _tmp342 * _tmp54 - _tmp343 * _tmp80 +
                         _tmp348 * _tmp54 - _tmp349 * _tmp54;
  const Scalar _tmp351 = _tmp350 * _tmp85;
  const Scalar _tmp352 = _tmp347 * _tmp83;
  const Scalar _tmp353 = _tmp56 * _tmp60;
  const Scalar _tmp354 = _tmp353 * _tmp71;
  const Scalar _tmp355 = _tmp347 * _tmp75;
  const Scalar _tmp356 = -_tmp346 * _tmp75 + _tmp353 * _tmp54 - _tmp354 * _tmp80 + _tmp355 * _tmp54;
  const Scalar _tmp357 = -_tmp346 * _tmp83 + _tmp352 * _tmp54 - _tmp356 * _tmp36;
  const Scalar _tmp358 = _tmp106 * _tmp357;
  const Scalar _tmp359 = _tmp127 * _tmp358;
  const Scalar _tmp360 = Scalar(1.0) * _tmp345;
  const Scalar _tmp361 = _tmp189 * _tmp353 * _tmp91 + _tmp190 * _tmp345 - _tmp360 * _tmp83;
  const Scalar _tmp362 = _tmp147 * (-_tmp126 * _tmp360 - _tmp145 * _tmp361 - _tmp187 * _tmp343 -
                                    _tmp191 * _tmp351 + _tmp191 * _tmp359);
  const Scalar _tmp363 = _tmp177 * _tmp350;
  const Scalar _tmp364 = _tmp192 * _tmp363;
  const Scalar _tmp365 = _tmp193 * _tmp357;
  const Scalar _tmp366 = _tmp361 + _tmp362 - _tmp364 + _tmp365;
  const Scalar _tmp367 = _tmp197 * _tmp344;
  const Scalar _tmp368 = -_tmp150 * _tmp366 + _tmp196 * _tmp60 + _tmp208 * _tmp358;
  const Scalar _tmp369 = _tmp358 * _tmp54;
  const Scalar _tmp370 = _tmp202 * _tmp350;
  const Scalar _tmp371 = _tmp109 * _tmp344;
  const Scalar _tmp372 = _tmp130 * _tmp347;
  const Scalar _tmp373 = _tmp210 - _tmp353 - _tmp355 + _tmp99;
  const Scalar _tmp374 = -_tmp352 - _tmp36 * _tmp373 + _tmp96;
  const Scalar _tmp375 = _tmp147 * (_tmp142 * _tmp343 - _tmp144 * _tmp351 + _tmp144 * _tmp359 -
                                    _tmp145 * _tmp374 + _tmp170 - _tmp342 - _tmp348 + _tmp349);
  const Scalar _tmp376 = _tmp180 * _tmp357;
  const Scalar _tmp377 = _tmp146 * _tmp363;
  const Scalar _tmp378 = _tmp374 + _tmp375 + _tmp376 - _tmp377;
  const Scalar _tmp379 = -_tmp150 * _tmp378 + _tmp153 * _tmp60 + _tmp184 * _tmp358 + _tmp60;
  const Scalar _tmp380 =
      -_tmp119 *
          (-_tmp111 * _tmp371 + _tmp113 * _tmp358 + _tmp347 * _tmp71 * _tmp87 - _tmp369 * _tmp38) +
      _tmp140 * _tmp63 + _tmp156 * _tmp63 -
      _tmp186 * (-_tmp149 * _tmp369 + _tmp152 * _tmp378 + _tmp183 * _tmp344 + _tmp379 * _tmp91) +
      _tmp200 * _tmp63 -
      _tmp206 * (-_tmp201 * _tmp371 - _tmp205 * _tmp350 + _tmp370 * _tmp71 + _tmp372 * _tmp71) -
      _tmp217 * (_tmp109 * _tmp367 + _tmp152 * _tmp366 - _tmp195 * _tmp369 + _tmp368 * _tmp91) +
      _tmp218 * _tmp63;
  const Scalar _tmp381 = _tmp262 * _tmp357;
  const Scalar _tmp382 =
      -_tmp129 * _tmp356 + _tmp224 * _tmp381 - _tmp228 * _tmp363 + _tmp264 * _tmp350;
  const Scalar _tmp383 = _tmp227 * _tmp363;
  const Scalar _tmp384 = _tmp356 * _tmp85;
  const Scalar _tmp385 = -_tmp149 * _tmp384 + _tmp237 * _tmp375 + _tmp237 * _tmp376 -
                         _tmp237 * _tmp377 - _tmp238 * _tmp378 + _tmp267 * _tmp358 + _tmp373;
  const Scalar _tmp386 = _tmp258 * _tmp358 - _tmp356 * _tmp86;
  const Scalar _tmp387 = -_tmp187 * _tmp354 - _tmp195 * _tmp384 + _tmp237 * _tmp362 -
                         _tmp237 * _tmp364 + _tmp237 * _tmp365 - _tmp238 * _tmp366 +
                         _tmp269 * _tmp358 - _tmp360 * _tmp75;
  const Scalar _tmp388 = _tmp221 * (_tmp236 * (-_tmp188 * _tmp382 + _tmp381 - _tmp383) +
                                    _tmp240 * (-_tmp188 * _tmp387 + _tmp227 * _tmp362 -
                                               _tmp227 * _tmp364 + _tmp227 * _tmp365) +
                                    _tmp242 * (-_tmp188 * _tmp385 + _tmp227 * _tmp375 +
                                               _tmp227 * _tmp376 - _tmp227 * _tmp377) -
                                    _tmp260 * _tmp386) -
                         _tmp257 * _tmp380;
  const Scalar _tmp389 = _tmp296 * _tmp358;
  const Scalar _tmp390 = _tmp138 * _tmp370 + _tmp138 * _tmp372 + _tmp279 * _tmp368 -
                         _tmp280 * _tmp346 + _tmp281 * _tmp379 - _tmp282 * _tmp346 +
                         _tmp295 * _tmp347 + _tmp298 * _tmp367 + _tmp299 * _tmp345 +
                         _tmp389 * _tmp80;
  const Scalar _tmp391 =
      _tmp306 *
      (_tmp284 * (_tmp285 * _tmp386 + _tmp286 * _tmp385 + _tmp287 * _tmp387 + _tmp289 * _tmp382) -
       _tmp305 * _tmp390);
  const Scalar _tmp392 = _tmp302 * _tmp390;
  const Scalar _tmp393 = _tmp314 * _tmp378 + _tmp315 * _tmp366 - _tmp328 * _tmp358 -
                         _tmp329 * _tmp358 - _tmp330 * _tmp350 - _tmp389;
  const Scalar _tmp394 = Scalar(1.4083112389913199) * _tmp393;
  const Scalar _tmp395 =
      _tmp334 *
      (_tmp317 * (-_tmp138 * _tmp381 + _tmp138 * _tmp383 - _tmp318 * _tmp362 + _tmp318 * _tmp364 -
                  _tmp318 * _tmp365 - _tmp319 * _tmp375 - _tmp319 * _tmp376 + _tmp319 * _tmp377) -
       _tmp335 * _tmp393);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp219 * _tmp253 -
      _tmp249 * (-_tmp219 * _tmp277 -
                 _tmp254 * (-_tmp219 * _tmp276 + _tmp251 * (-_tmp219 * _tmp274 - _tmp247 * _tmp255 -
                                                            _tmp271 * _tmp273)) +
                 _tmp271 * _tmp278);
  _res(2, 0) =
      -_tmp292 *
          (-_tmp303 * p_c(2, 0) + _tmp307 * _tmp312 -
           _tmp310 * (-_tmp293 * _tmp303 + _tmp308 * (-_tmp292 * _tmp307 - _tmp300 * _tmp304))) -
      _tmp300 * _tmp313;
  _res(3, 0) =
      -_tmp323 *
          (-_tmp331 * _tmp341 + _tmp336 * _tmp337 -
           _tmp338 * (_tmp325 * (-_tmp321 * _tmp332 - _tmp323 * _tmp336) - _tmp331 * _tmp340)) -
      _tmp327 * _tmp332;
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp249 *
          (-_tmp254 * (_tmp251 * (-_tmp246 * _tmp255 - _tmp273 * _tmp388 - _tmp274 * _tmp380) -
                       _tmp276 * _tmp380) -
           _tmp277 * _tmp380 + _tmp278 * _tmp388) -
      _tmp253 * _tmp380;
  _res(2, 1) =
      -_tmp292 *
          (-_tmp310 * (-_tmp293 * _tmp392 + _tmp308 * (-_tmp292 * _tmp391 - _tmp304 * _tmp390)) +
           _tmp312 * _tmp391 - _tmp392 * p_c(2, 0)) -
      _tmp313 * _tmp390;
  _res(3, 1) =
      -_tmp323 *
          (_tmp337 * _tmp395 -
           _tmp338 * (_tmp325 * (-_tmp321 * _tmp394 - _tmp323 * _tmp395) - _tmp340 * _tmp393) -
           _tmp341 * _tmp393) -
      _tmp327 * _tmp394;
  _res(0, 2) = 0;
  _res(1, 2) = Scalar(-1.0);
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
