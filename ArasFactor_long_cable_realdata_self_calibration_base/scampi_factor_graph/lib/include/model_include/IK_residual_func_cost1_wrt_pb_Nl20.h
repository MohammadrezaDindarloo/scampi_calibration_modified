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
 * Symbolic function: IK_residual_func_cost1_wrt_pb_Nl20
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPbNl20(
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

  // Intermediate terms (391)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp2 * _tmp5;
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = _tmp6 + _tmp8;
  const Scalar _tmp10 = -Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0;
  const Scalar _tmp12 = _tmp11 * _tmp5;
  const Scalar _tmp13 = _tmp2 * _tmp7;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = _tmp17 - p_c(0, 0);
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp22 = _tmp11 * _tmp2;
  const Scalar _tmp23 = _tmp5 * _tmp7;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = _tmp28 - p_c(1, 0);
  const Scalar _tmp30 = std::pow(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp29, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp18 * _tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp33 = -_tmp32;
  const Scalar _tmp34 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = _tmp33 + _tmp36;
  const Scalar _tmp38 = -_tmp4;
  const Scalar _tmp39 = _tmp10 - _tmp14;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 - p_a(0, 0);
  const Scalar _tmp43 = std::pow(_tmp42, Scalar(2));
  const Scalar _tmp44 = -_tmp20;
  const Scalar _tmp45 = -_tmp21 + _tmp25;
  const Scalar _tmp46 = _tmp44 + _tmp45;
  const Scalar _tmp47 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp48 = _tmp47 - p_a(1, 0);
  const Scalar _tmp49 = _tmp43 + std::pow(_tmp48, Scalar(2));
  const Scalar _tmp50 = std::pow(_tmp49, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp42 * _tmp50;
  const Scalar _tmp52 = _tmp32 + _tmp36;
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 = -_tmp37 * _tmp51 + _tmp53;
  const Scalar _tmp55 = _tmp39 + _tmp4;
  const Scalar _tmp56 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 - p_b(0, 0);
  const Scalar _tmp58 = Scalar(1.0) / (_tmp57);
  const Scalar _tmp59 = _tmp26 + _tmp44;
  const Scalar _tmp60 = _tmp59 + position_vector(1, 0);
  const Scalar _tmp61 = _tmp60 - p_b(1, 0);
  const Scalar _tmp62 = _tmp58 * _tmp61;
  const Scalar _tmp63 = _tmp48 * _tmp50;
  const Scalar _tmp64 = _tmp51 * _tmp62 - _tmp63;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = std::pow(_tmp57, Scalar(2));
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 = _tmp61 * _tmp67;
  const Scalar _tmp69 = _tmp65 * _tmp68;
  const Scalar _tmp70 = _tmp54 * _tmp69;
  const Scalar _tmp71 = _tmp31 * _tmp62;
  const Scalar _tmp72 = _tmp29 * _tmp30;
  const Scalar _tmp73 = _tmp71 - _tmp72;
  const Scalar _tmp74 = _tmp65 * _tmp73;
  const Scalar _tmp75 = _tmp53 * _tmp68;
  const Scalar _tmp76 = _tmp37 * _tmp63 - _tmp53 * _tmp62;
  const Scalar _tmp77 = _tmp69 * _tmp76;
  const Scalar _tmp78 = std::pow(_tmp64, Scalar(-2));
  const Scalar _tmp79 = _tmp51 * _tmp78;
  const Scalar _tmp80 = _tmp76 * _tmp79;
  const Scalar _tmp81 = _tmp68 * _tmp80;
  const Scalar _tmp82 = _tmp31 * _tmp52;
  const Scalar _tmp83 = -_tmp31 * _tmp77 - _tmp68 * _tmp82 + _tmp73 * _tmp81 + _tmp74 * _tmp75;
  const Scalar _tmp84 = Scalar(1.0) * _tmp59;
  const Scalar _tmp85 = -_tmp84;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp46 + _tmp85);
  const Scalar _tmp87 = Scalar(1.0) * _tmp55;
  const Scalar _tmp88 = _tmp86 * (-_tmp40 + _tmp87);
  const Scalar _tmp89 = _tmp54 * _tmp79;
  const Scalar _tmp90 = _tmp68 * _tmp89;
  const Scalar _tmp91 = -_tmp31 * _tmp70 + _tmp73 * _tmp90 - _tmp83 * _tmp88;
  const Scalar _tmp92 = std::pow(_tmp61, Scalar(2));
  const Scalar _tmp93 = _tmp66 + _tmp92;
  const Scalar _tmp94 = std::sqrt(_tmp93);
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp55 * _tmp95;
  const Scalar _tmp97 = _tmp59 * _tmp95;
  const Scalar _tmp98 = -_tmp57 * _tmp97 + _tmp61 * _tmp96;
  const Scalar _tmp99 = _tmp94 * _tmp98;
  const Scalar _tmp100 = _tmp58 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp51 - _tmp40 * _tmp63 + _tmp46 * _tmp51;
  const Scalar _tmp102 = _tmp62 * _tmp65;
  const Scalar _tmp103 = _tmp102 * _tmp76 + _tmp52 * _tmp62;
  const Scalar _tmp104 = _tmp102 * _tmp54 - _tmp103 * _tmp88 - _tmp52;
  const Scalar _tmp105 = _tmp34 + _tmp35;
  const Scalar _tmp106 = _tmp105 + _tmp32;
  const Scalar _tmp107 = _tmp106 * _tmp72 - _tmp62 * _tmp82 - _tmp74 * _tmp76;
  const Scalar _tmp108 = -_tmp106 * _tmp31 - _tmp107 * _tmp88 - _tmp54 * _tmp74 + _tmp82;
  const Scalar _tmp109 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp110 = _tmp100 * _tmp31 - _tmp101 * _tmp74 - _tmp16 * _tmp72 + _tmp27 * _tmp31;
  const Scalar _tmp111 = _tmp109 * _tmp110;
  const Scalar _tmp112 = -_tmp100 + _tmp101 * _tmp102 - _tmp104 * _tmp111;
  const Scalar _tmp113 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp114 = _tmp112 * _tmp113;
  const Scalar _tmp115 = _tmp114 * _tmp91;
  const Scalar _tmp116 = _tmp101 * _tmp69;
  const Scalar _tmp117 = _tmp67 * _tmp99;
  const Scalar _tmp118 = _tmp92 / [&]() {
    const Scalar base = _tmp57;
    return base * base * base;
  }();
  const Scalar _tmp119 = _tmp101 * _tmp79;
  const Scalar _tmp120 = std::pow(_tmp93, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp121 = _tmp120 * _tmp59;
  const Scalar _tmp122 = _tmp120 * _tmp55;
  const Scalar _tmp123 = _tmp57 * _tmp61;
  const Scalar _tmp124 = _tmp58 * _tmp94;
  const Scalar _tmp125 = _tmp124 * (-_tmp121 * _tmp66 + _tmp122 * _tmp123 + _tmp97);
  const Scalar _tmp126 = std::pow(_tmp108, Scalar(-2));
  const Scalar _tmp127 = _tmp126 * _tmp91;
  const Scalar _tmp128 = _tmp104 * _tmp110;
  const Scalar _tmp129 = _tmp95 * _tmp98;
  const Scalar _tmp130 = _tmp117 * _tmp51 + _tmp125 * _tmp51 - _tmp129 * _tmp51;
  const Scalar _tmp131 = _tmp119 * _tmp68;
  const Scalar _tmp132 = -_tmp116 * _tmp31 + _tmp117 * _tmp31 + _tmp125 * _tmp31 -
                         _tmp129 * _tmp31 - _tmp130 * _tmp74 + _tmp131 * _tmp73;
  const Scalar _tmp133 = _tmp109 * _tmp132;
  const Scalar _tmp134 = -_tmp118 * _tmp53 * _tmp65 - _tmp118 * _tmp80 + _tmp52 * _tmp68 + _tmp77;
  const Scalar _tmp135 = -_tmp118 * _tmp89 - _tmp134 * _tmp88 + _tmp70;
  const Scalar _tmp136 = _tmp108 * _tmp113;
  const Scalar _tmp137 =
      _tmp136 * (_tmp102 * _tmp130 - _tmp104 * _tmp133 - _tmp111 * _tmp135 + _tmp116 - _tmp117 -
                 _tmp118 * _tmp119 - _tmp125 + _tmp127 * _tmp128 + _tmp129);
  const Scalar _tmp138 = std::pow(_tmp110, Scalar(-2));
  const Scalar _tmp139 = _tmp132 * _tmp138;
  const Scalar _tmp140 = _tmp108 * _tmp139;
  const Scalar _tmp141 = _tmp112 * _tmp140;
  const Scalar _tmp142 = _tmp115 + _tmp135 + _tmp137 - _tmp141;
  const Scalar _tmp143 = _tmp109 * _tmp31;
  const Scalar _tmp144 = _tmp108 * _tmp114;
  const Scalar _tmp145 = _tmp104 + _tmp144;
  const Scalar _tmp146 = _tmp109 * _tmp73;
  const Scalar _tmp147 = -_tmp145 * _tmp146 - _tmp62;
  const Scalar _tmp148 = _tmp43 / _tmp49;
  const Scalar _tmp149 = _tmp68 * _tmp78;
  const Scalar _tmp150 = _tmp148 * _tmp149;
  const Scalar _tmp151 = _tmp127 * _tmp145;
  const Scalar _tmp152 = _tmp143 * _tmp145;
  const Scalar _tmp153 = -_tmp142 * _tmp146 + _tmp151 * _tmp73 - _tmp152 * _tmp68 - _tmp68;
  const Scalar _tmp154 = _tmp51 * _tmp65;
  const Scalar _tmp155 = _tmp15 + _tmp38;
  const Scalar _tmp156 = _tmp155 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp157 = _tmp20 + _tmp45;
  const Scalar _tmp158 = _tmp157 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp159 =
      std::pow(Scalar(std::pow(_tmp156, Scalar(2)) + std::pow(_tmp158, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp160 = _tmp156 * _tmp159;
  const Scalar _tmp161 = _tmp160 * fh1;
  const Scalar _tmp162 = _tmp124 * _tmp161;
  const Scalar _tmp163 = _tmp51 * _tmp74;
  const Scalar _tmp164 = Scalar(1.0) * _tmp163;
  const Scalar _tmp165 = Scalar(1.0) * _tmp31;
  const Scalar _tmp166 = Scalar(1.0) * _tmp113;
  const Scalar _tmp167 = _tmp166 * _tmp73;
  const Scalar _tmp168 = Scalar(1.0) * _tmp65;
  const Scalar _tmp169 = _tmp168 * _tmp51;
  const Scalar _tmp170 = _tmp113 * _tmp31 * _tmp68;
  const Scalar _tmp171 = _tmp158 * _tmp159;
  const Scalar _tmp172 = fh1 * (_tmp155 * _tmp171 - _tmp157 * _tmp160);
  const Scalar _tmp173 = _tmp124 * _tmp172;
  const Scalar _tmp174 = _tmp67 * _tmp94;
  const Scalar _tmp175 = _tmp168 * _tmp76;
  const Scalar _tmp176 = -_tmp168 * _tmp54 + _tmp175 * _tmp88;
  const Scalar _tmp177 = -_tmp101 * _tmp168 - _tmp111 * _tmp176;
  const Scalar _tmp178 = _tmp113 * _tmp177;
  const Scalar _tmp179 = _tmp108 * _tmp178;
  const Scalar _tmp180 = _tmp176 + _tmp179;
  const Scalar _tmp181 = _tmp143 * _tmp180;
  const Scalar _tmp182 = -_tmp146 * _tmp180 + Scalar(1.0);
  const Scalar _tmp183 = _tmp171 * fh1;
  const Scalar _tmp184 = _tmp183 * (_tmp154 * _tmp182 + _tmp181);
  const Scalar _tmp185 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp186 = _tmp84 * _tmp88 + _tmp87;
  const Scalar _tmp187 = 0;
  const Scalar _tmp188 = _tmp109 * _tmp187;
  const Scalar _tmp189 = _tmp188 * _tmp31;
  const Scalar _tmp190 = _tmp185 * (-_tmp163 * _tmp188 + _tmp189);
  const Scalar _tmp191 = _tmp190 * _tmp95;
  const Scalar _tmp192 = _tmp166 * _tmp31;
  const Scalar _tmp193 = _tmp172 * (-_tmp163 * _tmp166 + _tmp192);
  const Scalar _tmp194 = _tmp193 * _tmp95;
  const Scalar _tmp195 = _tmp146 * _tmp187;
  const Scalar _tmp196 = _tmp163 * _tmp187;
  const Scalar _tmp197 = _tmp187 * _tmp31;
  const Scalar _tmp198 = _tmp124 * _tmp185;
  const Scalar _tmp199 = _tmp184 * _tmp95;
  const Scalar _tmp200 = _tmp161 * (_tmp147 * _tmp154 + _tmp152 + Scalar(1.0));
  const Scalar _tmp201 = _tmp200 * _tmp95;
  const Scalar _tmp202 = _tmp178 * _tmp91;
  const Scalar _tmp203 = _tmp110 * _tmp176;
  const Scalar _tmp204 = _tmp168 * _tmp75;
  const Scalar _tmp205 = Scalar(1.0) * _tmp76;
  const Scalar _tmp206 = _tmp68 * _tmp79;
  const Scalar _tmp207 = _tmp205 * _tmp206;
  const Scalar _tmp208 = -_tmp204 * _tmp88 - _tmp207 * _tmp88 + Scalar(1.0) * _tmp90;
  const Scalar _tmp209 = _tmp136 * (-_tmp111 * _tmp208 + _tmp127 * _tmp203 - _tmp130 * _tmp168 +
                                    Scalar(1.0) * _tmp131 - _tmp133 * _tmp176);
  const Scalar _tmp210 = _tmp140 * _tmp177;
  const Scalar _tmp211 = _tmp202 + _tmp208 + _tmp209 - _tmp210;
  const Scalar _tmp212 = _tmp180 * _tmp73;
  const Scalar _tmp213 = _tmp127 * _tmp212 - _tmp146 * _tmp211 - _tmp181 * _tmp68;
  const Scalar _tmp214 = _tmp148 * _tmp182;
  const Scalar _tmp215 = _tmp180 * _tmp31;
  const Scalar _tmp216 = _tmp124 * _tmp183;
  const Scalar _tmp217 =
      -_tmp162 * (_tmp142 * _tmp143 - _tmp147 * _tmp150 - _tmp151 * _tmp31 + _tmp153 * _tmp154) -
      _tmp173 * (_tmp139 * _tmp164 - _tmp139 * _tmp165 + _tmp150 * _tmp167 - _tmp169 * _tmp170) -
      _tmp174 * _tmp184 - _tmp174 * _tmp190 - _tmp174 * _tmp193 - _tmp174 * _tmp200 + _tmp191 +
      _tmp194 -
      _tmp198 *
          (_tmp127 * _tmp196 - _tmp127 * _tmp197 + _tmp150 * _tmp195 - _tmp154 * _tmp189 * _tmp68) +
      _tmp199 + _tmp201 -
      _tmp216 * (-_tmp127 * _tmp215 + _tmp143 * _tmp211 - _tmp149 * _tmp214 + _tmp154 * _tmp213);
  const Scalar _tmp218 =
      -_tmp124 * _tmp184 - _tmp124 * _tmp190 - _tmp124 * _tmp193 - _tmp124 * _tmp200;
  const Scalar _tmp219 = Scalar(1.0) / (_tmp218);
  const Scalar _tmp220 = Scalar(0.71007031138673404) * _tmp219;
  const Scalar _tmp221 = -_tmp60 + p_b(1, 0);
  const Scalar _tmp222 = -_tmp56 + p_b(0, 0);
  const Scalar _tmp223 =
      std::sqrt(Scalar(std::pow(_tmp221, Scalar(2)) + std::pow(_tmp222, Scalar(2))));
  const Scalar _tmp224 = _tmp27 + _tmp85;
  const Scalar _tmp225 = _tmp224 * _tmp88;
  const Scalar _tmp226 = Scalar(1.0) / (-_tmp16 - _tmp225 + _tmp87);
  const Scalar _tmp227 = Scalar(1.0) * _tmp226;
  const Scalar _tmp228 = _tmp107 * _tmp109;
  const Scalar _tmp229 = _tmp224 * _tmp226;
  const Scalar _tmp230 = -_tmp175 + _tmp179 * _tmp229 - _tmp180 * _tmp228;
  const Scalar _tmp231 = Scalar(1.0) * _tmp86;
  const Scalar _tmp232 = Scalar(1.0) * _tmp183;
  const Scalar _tmp233 = _tmp224 * _tmp86;
  const Scalar _tmp234 = fh1 * (_tmp105 + _tmp33);
  const Scalar _tmp235 = _tmp155 * fv1 + _tmp160 * _tmp234 + Scalar(40.024799999999999) * _tmp9;
  const Scalar _tmp236 = _tmp103 + _tmp144 * _tmp229 - _tmp145 * _tmp228;
  const Scalar _tmp237 = Scalar(1.0) * _tmp161;
  const Scalar _tmp238 = -_tmp157 * fv1 - _tmp171 * _tmp234 - Scalar(40.024799999999999) * _tmp24;
  const Scalar _tmp239 = _tmp227 * _tmp88;
  const Scalar _tmp240 = _tmp225 * _tmp227 + Scalar(1.0);
  const Scalar _tmp241 = _tmp186 * _tmp226;
  const Scalar _tmp242 = -_tmp187 * _tmp228 - _tmp224 * _tmp241 + _tmp85;
  const Scalar _tmp243 = _tmp136 * _tmp227;
  const Scalar _tmp244 = -_tmp107 * _tmp166 + _tmp224 * _tmp243;
  const Scalar _tmp245 = Scalar(1.0) * _tmp172;
  const Scalar _tmp246 =
      Scalar(1.0) * _tmp185 * (-_tmp186 * _tmp227 - _tmp231 * _tmp242 + Scalar(1.0)) +
      _tmp232 * (_tmp179 * _tmp227 - _tmp230 * _tmp231) +
      Scalar(1.0) * _tmp235 * (_tmp227 * _tmp233 - _tmp227) +
      _tmp237 * (_tmp144 * _tmp227 - _tmp231 * _tmp236) +
      Scalar(1.0) * _tmp238 * (-_tmp231 * _tmp240 + _tmp239) +
      _tmp245 * (-_tmp231 * _tmp244 + _tmp243);
  const Scalar _tmp247 = std::asinh(_tmp219 * _tmp246);
  const Scalar _tmp248 = Scalar(1.4083112389913199) * _tmp218;
  const Scalar _tmp249 = -_tmp223 - _tmp247 * _tmp248;
  const Scalar _tmp250 = _tmp220 * _tmp249;
  const Scalar _tmp251 = Scalar(1.0) * _tmp247;
  const Scalar _tmp252 = Scalar(1.4083112389913199) * _tmp220 * p_b(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp250) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp251);
  const Scalar _tmp253 = std::pow(_tmp218, Scalar(-2));
  const Scalar _tmp254 = Scalar(0.71007031138673404) * _tmp253;
  const Scalar _tmp255 = _tmp254 * p_b(2, 0);
  const Scalar _tmp256 = Scalar(1.0) * std::sinh(_tmp251);
  const Scalar _tmp257 =
      std::pow(Scalar(std::pow(_tmp246, Scalar(2)) * _tmp253 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp258 = _tmp246 * _tmp253;
  const Scalar _tmp259 = _tmp107 * _tmp180;
  const Scalar _tmp260 = _tmp109 * _tmp83;
  const Scalar _tmp261 = _tmp127 * _tmp259 - _tmp180 * _tmp260 + _tmp202 * _tmp229 + _tmp204 +
                         _tmp207 + _tmp209 * _tmp229 - _tmp210 * _tmp229 - _tmp211 * _tmp228;
  const Scalar _tmp262 = _tmp107 * _tmp151 + _tmp115 * _tmp229 + _tmp134 + _tmp137 * _tmp229 -
                         _tmp141 * _tmp229 - _tmp142 * _tmp228 - _tmp145 * _tmp260;
  const Scalar _tmp263 = _tmp140 * _tmp227;
  const Scalar _tmp264 = _tmp113 * _tmp227;
  const Scalar _tmp265 = _tmp264 * _tmp91;
  const Scalar _tmp266 = Scalar(1.0) * _tmp107;
  const Scalar _tmp267 =
      _tmp139 * _tmp266 - _tmp166 * _tmp83 - _tmp224 * _tmp263 + _tmp224 * _tmp265;
  const Scalar _tmp268 = _tmp107 * _tmp187;
  const Scalar _tmp269 = _tmp127 * _tmp268 - _tmp187 * _tmp260;
  const Scalar _tmp270 = _tmp185 * _tmp231;
  const Scalar _tmp271 = _tmp257 * (-_tmp217 * _tmp258 +
                                    _tmp219 * (_tmp232 * (_tmp202 * _tmp227 + _tmp209 * _tmp227 -
                                                          _tmp210 * _tmp227 - _tmp231 * _tmp261) +
                                               _tmp237 * (_tmp115 * _tmp227 + _tmp137 * _tmp227 -
                                                          _tmp141 * _tmp227 - _tmp231 * _tmp262) +
                                               _tmp245 * (-_tmp231 * _tmp267 - _tmp263 + _tmp265) -
                                               _tmp269 * _tmp270));
  const Scalar _tmp272 = std::sinh(_tmp250);
  const Scalar _tmp273 = _tmp249 * _tmp254;
  const Scalar _tmp274 = Scalar(1.0) / (_tmp223);
  const Scalar _tmp275 = Scalar(1.4083112389913199) * _tmp247;
  const Scalar _tmp276 = _tmp139 * _tmp245;
  const Scalar _tmp277 = _tmp166 * _tmp172;
  const Scalar _tmp278 = _tmp183 * _tmp65;
  const Scalar _tmp279 = _tmp185 * _tmp187;
  const Scalar _tmp280 = _tmp127 * _tmp279;
  const Scalar _tmp281 = _tmp185 * _tmp188;
  const Scalar _tmp282 = _tmp281 * _tmp31;
  const Scalar _tmp283 = _tmp146 * _tmp279;
  const Scalar _tmp284 = _tmp182 * _tmp183;
  const Scalar _tmp285 = _tmp161 * _tmp65;
  const Scalar _tmp286 = -_tmp147 * _tmp161 * _tmp206 + _tmp153 * _tmp285 -
                         _tmp168 * _tmp170 * _tmp172 + _tmp206 * _tmp277 * _tmp73 +
                         _tmp206 * _tmp283 - _tmp206 * _tmp284 + _tmp213 * _tmp278 +
                         _tmp276 * _tmp74 + _tmp280 * _tmp74 - _tmp282 * _tmp69;
  const Scalar _tmp287 = _tmp185 * _tmp86;
  const Scalar _tmp288 = _tmp172 * _tmp86;
  const Scalar _tmp289 = _tmp227 * _tmp235;
  const Scalar _tmp290 = _tmp161 * _tmp86;
  const Scalar _tmp291 = _tmp183 * _tmp86;
  const Scalar _tmp292 = _tmp230 * _tmp291 - _tmp233 * _tmp289 + _tmp236 * _tmp290 +
                         _tmp238 * _tmp240 * _tmp86 + _tmp242 * _tmp287 + _tmp244 * _tmp288;
  const Scalar _tmp293 =
      _tmp147 * _tmp285 + _tmp182 * _tmp278 - _tmp277 * _tmp74 - _tmp281 * _tmp74;
  const Scalar _tmp294 = Scalar(1.0) / (_tmp293);
  const Scalar _tmp295 = std::asinh(_tmp292 * _tmp294);
  const Scalar _tmp296 = Scalar(1.0) * _tmp295;
  const Scalar _tmp297 = Scalar(0.71007031138673404) * _tmp294;
  const Scalar _tmp298 = Scalar(1.4083112389913199) * _tmp295;
  const Scalar _tmp299 =
      -_tmp293 * _tmp298 - std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp47 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp300 = _tmp297 * _tmp299;
  const Scalar _tmp301 = Scalar(1.4083112389913199) * _tmp297 * p_a(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp296) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp300);
  const Scalar _tmp302 = Scalar(1.0) * std::sinh(_tmp296);
  const Scalar _tmp303 = std::pow(_tmp293, Scalar(-2));
  const Scalar _tmp304 =
      std::pow(Scalar(std::pow(_tmp292, Scalar(2)) * _tmp303 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp305 = _tmp292 * _tmp303;
  const Scalar _tmp306 =
      _tmp304 * (-_tmp286 * _tmp305 + _tmp294 * (_tmp261 * _tmp291 + _tmp262 * _tmp290 +
                                                 _tmp267 * _tmp288 + _tmp269 * _tmp287));
  const Scalar _tmp307 = Scalar(0.71007031138673404) * _tmp303;
  const Scalar _tmp308 = _tmp299 * _tmp307;
  const Scalar _tmp309 = Scalar(1.4083112389913199) * _tmp293;
  const Scalar _tmp310 = std::sinh(_tmp300);
  const Scalar _tmp311 = _tmp307 * p_a(2, 0);
  const Scalar _tmp312 = _tmp109 * _tmp161;
  const Scalar _tmp313 = _tmp180 * _tmp183;
  const Scalar _tmp314 = _tmp109 * _tmp183;
  const Scalar _tmp315 = -_tmp127 * _tmp313 + _tmp142 * _tmp312 - _tmp151 * _tmp161 +
                         _tmp211 * _tmp314 - _tmp276 - _tmp280;
  const Scalar _tmp316 = _tmp183 * _tmp226;
  const Scalar _tmp317 = _tmp161 * _tmp226;
  const Scalar _tmp318 = -_tmp144 * _tmp317 - _tmp172 * _tmp243 - _tmp179 * _tmp316 +
                         _tmp185 * _tmp241 - _tmp238 * _tmp239 + _tmp289;
  const Scalar _tmp319 = _tmp145 * _tmp312 + _tmp180 * _tmp314 + _tmp277 + _tmp281;
  const Scalar _tmp320 = Scalar(1.0) / (_tmp319);
  const Scalar _tmp321 = std::asinh(_tmp318 * _tmp320);
  const Scalar _tmp322 = Scalar(1.0) * _tmp321;
  const Scalar _tmp323 = Scalar(0.71007031138673404) * _tmp320;
  const Scalar _tmp324 = Scalar(1.4083112389913199) * _tmp321;
  const Scalar _tmp325 =
      -_tmp319 * _tmp324 - std::sqrt(Scalar(std::pow(Scalar(-_tmp17 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp28 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp326 = _tmp323 * _tmp325;
  const Scalar _tmp327 = Scalar(1.4083112389913199) * _tmp323 * p_c(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp322) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp326);
  const Scalar _tmp328 = std::pow(_tmp319, Scalar(-2));
  const Scalar _tmp329 = _tmp318 * _tmp328;
  const Scalar _tmp330 =
      std::pow(Scalar(std::pow(_tmp318, Scalar(2)) * _tmp328 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp331 =
      _tmp330 *
      (-_tmp315 * _tmp329 +
       _tmp320 * (-_tmp115 * _tmp317 - _tmp137 * _tmp317 + _tmp141 * _tmp317 + _tmp172 * _tmp263 -
                  _tmp172 * _tmp265 - _tmp202 * _tmp316 - _tmp209 * _tmp316 + _tmp210 * _tmp316));
  const Scalar _tmp332 = Scalar(1.0) * std::sinh(_tmp322);
  const Scalar _tmp333 = Scalar(0.71007031138673404) * _tmp328;
  const Scalar _tmp334 = _tmp333 * p_c(2, 0);
  const Scalar _tmp335 = _tmp325 * _tmp333;
  const Scalar _tmp336 = Scalar(1.4083112389913199) * _tmp319;
  const Scalar _tmp337 = std::sinh(_tmp326);
  const Scalar _tmp338 = _tmp58 * _tmp65;
  const Scalar _tmp339 = _tmp338 * _tmp51;
  const Scalar _tmp340 = _tmp58 * _tmp78;
  const Scalar _tmp341 = _tmp340 * _tmp51;
  const Scalar _tmp342 = _tmp341 * _tmp73;
  const Scalar _tmp343 = _tmp52 * _tmp58;
  const Scalar _tmp344 = _tmp338 * _tmp76;
  const Scalar _tmp345 =
      -_tmp163 * _tmp343 + _tmp31 * _tmp343 + _tmp31 * _tmp344 - _tmp342 * _tmp76;
  const Scalar _tmp346 = _tmp338 * _tmp54;
  const Scalar _tmp347 = _tmp31 * _tmp346 - _tmp342 * _tmp54 - _tmp345 * _tmp88;
  const Scalar _tmp348 = _tmp126 * _tmp347;
  const Scalar _tmp349 = _tmp148 * _tmp340;
  const Scalar _tmp350 = _tmp124 * (-_tmp121 * _tmp123 + _tmp122 * _tmp92 - _tmp96);
  const Scalar _tmp351 = _tmp129 * _tmp62;
  const Scalar _tmp352 = _tmp350 * _tmp51 - _tmp351 * _tmp51;
  const Scalar _tmp353 = _tmp101 * _tmp338;
  const Scalar _tmp354 = -_tmp101 * _tmp342 - _tmp129 * _tmp71 + _tmp31 * _tmp350 +
                         _tmp31 * _tmp353 - _tmp352 * _tmp74;
  const Scalar _tmp355 = _tmp138 * _tmp354;
  const Scalar _tmp356 = _tmp178 * _tmp347;
  const Scalar _tmp357 = _tmp205 * _tmp341;
  const Scalar _tmp358 = Scalar(1.0) * _tmp341;
  const Scalar _tmp359 = _tmp169 * _tmp343;
  const Scalar _tmp360 = _tmp357 * _tmp88 - _tmp358 * _tmp54 + _tmp359 * _tmp88;
  const Scalar _tmp361 = _tmp109 * _tmp354;
  const Scalar _tmp362 = _tmp136 * (-_tmp101 * _tmp358 - _tmp111 * _tmp360 - _tmp168 * _tmp352 -
                                    _tmp176 * _tmp361 + _tmp203 * _tmp348);
  const Scalar _tmp363 = _tmp108 * _tmp355;
  const Scalar _tmp364 = _tmp177 * _tmp363;
  const Scalar _tmp365 = _tmp356 + _tmp360 + _tmp362 - _tmp364;
  const Scalar _tmp366 = -_tmp146 * _tmp365 + _tmp181 * _tmp58 + _tmp212 * _tmp348;
  const Scalar _tmp367 = _tmp147 * _tmp340;
  const Scalar _tmp368 = _tmp112 * _tmp363;
  const Scalar _tmp369 = _tmp114 * _tmp347;
  const Scalar _tmp370 = -_tmp343 - _tmp344 + _tmp53 * _tmp69 + _tmp81;
  const Scalar _tmp371 = -_tmp346 - _tmp370 * _tmp88 + _tmp90;
  const Scalar _tmp372 = _tmp136 * (_tmp102 * _tmp352 - _tmp104 * _tmp361 - _tmp111 * _tmp371 +
                                    _tmp128 * _tmp348 + _tmp131 - _tmp350 + _tmp351 - _tmp353);
  const Scalar _tmp373 = -_tmp368 + _tmp369 + _tmp371 + _tmp372;
  const Scalar _tmp374 = _tmp145 * _tmp348;
  const Scalar _tmp375 = -_tmp146 * _tmp373 + _tmp152 * _tmp58 + _tmp374 * _tmp73 + _tmp58;
  const Scalar _tmp376 =
      -_tmp162 * (_tmp143 * _tmp373 + _tmp148 * _tmp367 + _tmp154 * _tmp375 - _tmp31 * _tmp374) -
      _tmp173 * (_tmp164 * _tmp355 - _tmp165 * _tmp355 - _tmp167 * _tmp349 + _tmp192 * _tmp339) +
      _tmp191 * _tmp62 + _tmp194 * _tmp62 -
      _tmp198 * (_tmp189 * _tmp339 - _tmp195 * _tmp349 + _tmp196 * _tmp348 - _tmp197 * _tmp348) +
      _tmp199 * _tmp62 + _tmp201 * _tmp62 -
      _tmp216 * (_tmp143 * _tmp365 + _tmp154 * _tmp366 + _tmp214 * _tmp340 - _tmp215 * _tmp348);
  const Scalar _tmp377 = _tmp109 * _tmp345;
  const Scalar _tmp378 = -_tmp187 * _tmp377 + _tmp268 * _tmp348;
  const Scalar _tmp379 = _tmp107 * _tmp374 - _tmp145 * _tmp377 - _tmp228 * _tmp373 -
                         _tmp229 * _tmp368 + _tmp229 * _tmp369 + _tmp229 * _tmp372 + _tmp370;
  const Scalar _tmp380 = -_tmp180 * _tmp377 - _tmp228 * _tmp365 + _tmp229 * _tmp356 +
                         _tmp229 * _tmp362 - _tmp229 * _tmp364 + _tmp259 * _tmp348 - _tmp357 -
                         _tmp359;
  const Scalar _tmp381 = _tmp227 * _tmp363;
  const Scalar _tmp382 = _tmp264 * _tmp347;
  const Scalar _tmp383 =
      -_tmp166 * _tmp345 - _tmp224 * _tmp381 + _tmp224 * _tmp382 + _tmp266 * _tmp355;
  const Scalar _tmp384 = _tmp257 * (_tmp219 * (_tmp232 * (_tmp227 * _tmp356 + _tmp227 * _tmp362 -
                                                          _tmp227 * _tmp364 - _tmp231 * _tmp380) +
                                               _tmp237 * (-_tmp227 * _tmp368 + _tmp227 * _tmp369 +
                                                          _tmp227 * _tmp372 - _tmp231 * _tmp379) +
                                               _tmp245 * (-_tmp231 * _tmp383 - _tmp381 + _tmp382) -
                                               _tmp270 * _tmp378) -
                                    _tmp258 * _tmp376);
  const Scalar _tmp385 = _tmp245 * _tmp355;
  const Scalar _tmp386 = _tmp279 * _tmp348;
  const Scalar _tmp387 = _tmp161 * _tmp367 * _tmp51 + _tmp172 * _tmp192 * _tmp338 -
                         _tmp277 * _tmp342 + _tmp278 * _tmp366 + _tmp282 * _tmp338 -
                         _tmp283 * _tmp341 + _tmp284 * _tmp341 + _tmp285 * _tmp375 +
                         _tmp385 * _tmp74 + _tmp386 * _tmp74;
  const Scalar _tmp388 =
      _tmp304 *
      (_tmp294 * (_tmp287 * _tmp378 + _tmp288 * _tmp383 + _tmp290 * _tmp379 + _tmp291 * _tmp380) -
       _tmp305 * _tmp387);
  const Scalar _tmp389 = -_tmp161 * _tmp374 + _tmp312 * _tmp373 - _tmp313 * _tmp348 +
                         _tmp314 * _tmp365 - _tmp385 - _tmp386;
  const Scalar _tmp390 =
      _tmp330 *
      (_tmp320 * (_tmp172 * _tmp381 - _tmp172 * _tmp382 - _tmp316 * _tmp356 - _tmp316 * _tmp362 +
                  _tmp316 * _tmp364 + _tmp317 * _tmp368 - _tmp317 * _tmp369 - _tmp317 * _tmp372) -
       _tmp329 * _tmp389);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp217 * _tmp252 -
      _tmp248 * (-_tmp217 * _tmp255 + _tmp256 * _tmp271 -
                 _tmp272 * (-_tmp217 * _tmp273 + _tmp220 * (-_tmp217 * _tmp275 - _tmp222 * _tmp274 -
                                                            _tmp248 * _tmp271)));
  _res(2, 0) =
      -_tmp286 * _tmp301 -
      _tmp309 *
          (-_tmp286 * _tmp311 + _tmp302 * _tmp306 -
           _tmp310 * (-_tmp286 * _tmp308 + _tmp297 * (-_tmp286 * _tmp298 - _tmp306 * _tmp309)));
  _res(3, 0) =
      -_tmp315 * _tmp327 -
      _tmp336 *
          (-_tmp315 * _tmp334 + _tmp331 * _tmp332 -
           _tmp337 * (-_tmp315 * _tmp335 + _tmp323 * (-_tmp315 * _tmp324 - _tmp331 * _tmp336)));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp248 *
          (-_tmp255 * _tmp376 + _tmp256 * _tmp384 -
           _tmp272 * (_tmp220 * (-_tmp221 * _tmp274 - _tmp248 * _tmp384 - _tmp275 * _tmp376) -
                      _tmp273 * _tmp376)) -
      _tmp252 * _tmp376;
  _res(2, 1) =
      -_tmp301 * _tmp387 -
      _tmp309 *
          (_tmp302 * _tmp388 -
           _tmp310 * (_tmp297 * (-_tmp298 * _tmp387 - _tmp309 * _tmp388) - _tmp308 * _tmp387) -
           _tmp311 * _tmp387);
  _res(3, 1) =
      -_tmp327 * _tmp389 -
      _tmp336 *
          (_tmp332 * _tmp390 - _tmp334 * _tmp389 -
           _tmp337 * (_tmp323 * (-_tmp324 * _tmp389 - _tmp336 * _tmp390) - _tmp335 * _tmp389));
  _res(0, 2) = 0;
  _res(1, 2) = Scalar(-1.0);
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym