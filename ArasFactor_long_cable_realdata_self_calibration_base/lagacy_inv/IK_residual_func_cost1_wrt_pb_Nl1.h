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
 * Symbolic function: IK_residual_func_cost1_wrt_pb_Nl1
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPbNl1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1221

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (394)
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
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = 2 * _tmp3;
  const Scalar _tmp9 = _tmp1 * _tmp8;
  const Scalar _tmp10 = _tmp0 * _tmp4;
  const Scalar _tmp11 = _tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp14 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999);
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_b(0, 0);
  const Scalar _tmp20 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp25 = _tmp0 * _tmp8;
  const Scalar _tmp26 = _tmp1 * _tmp4;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = _tmp24 + _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = _tmp31 - p_b(1, 0);
  const Scalar _tmp33 = _tmp20 * _tmp32;
  const Scalar _tmp34 = _tmp16 + _tmp6;
  const Scalar _tmp35 = _tmp34 + position_vector(0, 0);
  const Scalar _tmp36 = _tmp35 - p_c(0, 0);
  const Scalar _tmp37 = _tmp22 + _tmp29;
  const Scalar _tmp38 = _tmp37 + position_vector(1, 0);
  const Scalar _tmp39 = _tmp38 - p_c(1, 0);
  const Scalar _tmp40 = std::pow(Scalar(std::pow(_tmp36, Scalar(2)) + std::pow(_tmp39, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp36 * _tmp40;
  const Scalar _tmp42 = _tmp39 * _tmp40;
  const Scalar _tmp43 = _tmp33 * _tmp41 - _tmp42;
  const Scalar _tmp44 = _tmp12 - _tmp15;
  const Scalar _tmp45 = _tmp44 + _tmp6;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 - p_d(0, 0);
  const Scalar _tmp48 = std::pow(_tmp47, Scalar(2));
  const Scalar _tmp49 = -_tmp24 + _tmp28;
  const Scalar _tmp50 = _tmp22 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 - p_d(1, 0);
  const Scalar _tmp53 = _tmp48 + std::pow(_tmp52, Scalar(2));
  const Scalar _tmp54 = std::pow(_tmp53, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp47 * _tmp54;
  const Scalar _tmp56 = _tmp52 * _tmp54;
  const Scalar _tmp57 = _tmp33 * _tmp55 - _tmp56;
  const Scalar _tmp58 = std::pow(_tmp57, Scalar(-2));
  const Scalar _tmp59 = std::pow(_tmp19, Scalar(2));
  const Scalar _tmp60 = Scalar(1.0) / (_tmp59);
  const Scalar _tmp61 = _tmp32 * _tmp60;
  const Scalar _tmp62 = _tmp58 * _tmp61;
  const Scalar _tmp63 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp64 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp65 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp66 = _tmp64 - _tmp65;
  const Scalar _tmp67 = _tmp63 + _tmp66;
  const Scalar _tmp68 = -_tmp63;
  const Scalar _tmp69 = _tmp64 + _tmp65;
  const Scalar _tmp70 = _tmp68 + _tmp69;
  const Scalar _tmp71 = _tmp55 * _tmp70;
  const Scalar _tmp72 = -_tmp55 * _tmp67 + _tmp71;
  const Scalar _tmp73 = _tmp55 * _tmp72;
  const Scalar _tmp74 = _tmp62 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp57);
  const Scalar _tmp76 = _tmp61 * _tmp75;
  const Scalar _tmp77 = _tmp72 * _tmp76;
  const Scalar _tmp78 = _tmp61 * _tmp70;
  const Scalar _tmp79 = _tmp43 * _tmp75;
  const Scalar _tmp80 = _tmp55 * _tmp79;
  const Scalar _tmp81 = _tmp33 * _tmp70;
  const Scalar _tmp82 = -_tmp55 * _tmp81 + _tmp56 * _tmp67;
  const Scalar _tmp83 = _tmp55 * _tmp82;
  const Scalar _tmp84 = _tmp62 * _tmp83;
  const Scalar _tmp85 = _tmp41 * _tmp70;
  const Scalar _tmp86 = _tmp76 * _tmp82;
  const Scalar _tmp87 = -_tmp41 * _tmp86 + _tmp43 * _tmp84 - _tmp61 * _tmp85 + _tmp78 * _tmp80;
  const Scalar _tmp88 = Scalar(1.0) * _tmp30;
  const Scalar _tmp89 = -_tmp88;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp50 + _tmp89);
  const Scalar _tmp91 = Scalar(1.0) * _tmp17;
  const Scalar _tmp92 = -_tmp45 + _tmp91;
  const Scalar _tmp93 = _tmp90 * _tmp92;
  const Scalar _tmp94 = -_tmp41 * _tmp77 + _tmp43 * _tmp74 - _tmp87 * _tmp93;
  const Scalar _tmp95 = _tmp63 + _tmp69;
  const Scalar _tmp96 = -_tmp33 * _tmp85 + _tmp42 * _tmp95 - _tmp79 * _tmp82;
  const Scalar _tmp97 = -_tmp41 * _tmp95 - _tmp72 * _tmp79 + _tmp85 - _tmp93 * _tmp96;
  const Scalar _tmp98 = std::pow(_tmp97, Scalar(-2));
  const Scalar _tmp99 = _tmp94 * _tmp98;
  const Scalar _tmp100 = _tmp88 * _tmp93 + _tmp91;
  const Scalar _tmp101 = 0;
  const Scalar _tmp102 = _tmp101 * _tmp41;
  const Scalar _tmp103 = _tmp48 / _tmp53;
  const Scalar _tmp104 = _tmp103 * _tmp62;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp106 = _tmp105 * _tmp43;
  const Scalar _tmp107 = _tmp101 * _tmp106;
  const Scalar _tmp108 = _tmp101 * _tmp80;
  const Scalar _tmp109 = _tmp55 * _tmp75;
  const Scalar _tmp110 = _tmp101 * _tmp105;
  const Scalar _tmp111 = _tmp110 * _tmp41;
  const Scalar _tmp112 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp113 = std::pow(_tmp32, Scalar(2));
  const Scalar _tmp114 = _tmp113 + _tmp59;
  const Scalar _tmp115 = std::sqrt(_tmp114);
  const Scalar _tmp116 = _tmp115 * _tmp20;
  const Scalar _tmp117 = _tmp112 * _tmp116;
  const Scalar _tmp118 = Scalar(1.0) / (_tmp115);
  const Scalar _tmp119 = _tmp118 * _tmp17;
  const Scalar _tmp120 = _tmp118 * _tmp30;
  const Scalar _tmp121 = _tmp119 * _tmp32 - _tmp120 * _tmp19;
  const Scalar _tmp122 = _tmp115 * _tmp121;
  const Scalar _tmp123 = _tmp122 * _tmp20;
  const Scalar _tmp124 = _tmp123 * _tmp55 - _tmp45 * _tmp56 + _tmp50 * _tmp55;
  const Scalar _tmp125 = Scalar(1.0) * _tmp75;
  const Scalar _tmp126 = Scalar(1.0) * _tmp90;
  const Scalar _tmp127 = _tmp126 * _tmp92;
  const Scalar _tmp128 = _tmp127 * _tmp82;
  const Scalar _tmp129 = -_tmp125 * _tmp72 + _tmp128 * _tmp75;
  const Scalar _tmp130 = _tmp123 * _tmp41 - _tmp124 * _tmp79 - _tmp34 * _tmp42 + _tmp37 * _tmp41;
  const Scalar _tmp131 = _tmp105 * _tmp130;
  const Scalar _tmp132 = -_tmp124 * _tmp125 - _tmp129 * _tmp131;
  const Scalar _tmp133 = Scalar(1.0) / (_tmp130);
  const Scalar _tmp134 = _tmp133 * _tmp97;
  const Scalar _tmp135 = _tmp132 * _tmp134;
  const Scalar _tmp136 = _tmp129 + _tmp135;
  const Scalar _tmp137 = -_tmp106 * _tmp136 + Scalar(1.0);
  const Scalar _tmp138 = _tmp105 * _tmp136;
  const Scalar _tmp139 = _tmp138 * _tmp41;
  const Scalar _tmp140 = _tmp44 + _tmp7;
  const Scalar _tmp141 = _tmp140 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp142 = _tmp23 + _tmp49;
  const Scalar _tmp143 = _tmp142 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp144 =
      std::pow(Scalar(std::pow(_tmp141, Scalar(2)) + std::pow(_tmp143, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp145 = _tmp143 * _tmp144;
  const Scalar _tmp146 = _tmp145 * fh1;
  const Scalar _tmp147 = _tmp146 * (_tmp109 * _tmp137 + _tmp139);
  const Scalar _tmp148 = _tmp118 * _tmp147;
  const Scalar _tmp149 = _tmp125 * _tmp55;
  const Scalar _tmp150 = _tmp133 * _tmp41;
  const Scalar _tmp151 = _tmp150 * _tmp61;
  const Scalar _tmp152 = _tmp118 * _tmp121;
  const Scalar _tmp153 = std::pow(_tmp114, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp154 = _tmp153 * _tmp30;
  const Scalar _tmp155 = _tmp153 * _tmp17;
  const Scalar _tmp156 = _tmp19 * _tmp32;
  const Scalar _tmp157 = _tmp116 * (_tmp120 - _tmp154 * _tmp59 + _tmp155 * _tmp156);
  const Scalar _tmp158 = _tmp122 * _tmp60;
  const Scalar _tmp159 = -_tmp152 * _tmp55 + _tmp157 * _tmp55 + _tmp158 * _tmp55;
  const Scalar _tmp160 = _tmp124 * _tmp76;
  const Scalar _tmp161 = _tmp124 * _tmp55;
  const Scalar _tmp162 = _tmp161 * _tmp62;
  const Scalar _tmp163 = -_tmp152 * _tmp41 + _tmp157 * _tmp41 + _tmp158 * _tmp41 -
                         _tmp159 * _tmp79 - _tmp160 * _tmp41 + _tmp162 * _tmp43;
  const Scalar _tmp164 = std::pow(_tmp130, Scalar(-2));
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = _tmp149 * _tmp43;
  const Scalar _tmp167 = Scalar(1.0) * _tmp41;
  const Scalar _tmp168 = Scalar(1.0) * _tmp133;
  const Scalar _tmp169 = _tmp141 * _tmp144;
  const Scalar _tmp170 = fh1 * (_tmp140 * _tmp145 - _tmp142 * _tmp169);
  const Scalar _tmp171 = _tmp116 * _tmp170;
  const Scalar _tmp172 = _tmp115 * _tmp60;
  const Scalar _tmp173 = _tmp33 * _tmp75;
  const Scalar _tmp174 = _tmp173 * _tmp82 + _tmp81;
  const Scalar _tmp175 = _tmp173 * _tmp72 - _tmp174 * _tmp93 - _tmp70;
  const Scalar _tmp176 = -_tmp123 + _tmp124 * _tmp173 - _tmp131 * _tmp175;
  const Scalar _tmp177 = _tmp134 * _tmp176;
  const Scalar _tmp178 = _tmp175 + _tmp177;
  const Scalar _tmp179 = _tmp105 * _tmp178;
  const Scalar _tmp180 = _tmp179 * _tmp41;
  const Scalar _tmp181 = -_tmp179 * _tmp43 - _tmp33;
  const Scalar _tmp182 = _tmp169 * fh1;
  const Scalar _tmp183 = _tmp182 * (_tmp109 * _tmp181 + _tmp180 + Scalar(1.0));
  const Scalar _tmp184 = _tmp133 * _tmp43;
  const Scalar _tmp185 = _tmp170 * (-_tmp149 * _tmp184 + _tmp168 * _tmp41);
  const Scalar _tmp186 = _tmp118 * _tmp185;
  const Scalar _tmp187 = _tmp136 * _tmp99;
  const Scalar _tmp188 = _tmp132 * _tmp133;
  const Scalar _tmp189 = _tmp188 * _tmp94;
  const Scalar _tmp190 = _tmp129 * _tmp130;
  const Scalar _tmp191 = _tmp105 * _tmp129;
  const Scalar _tmp192 = _tmp109 * _tmp78;
  const Scalar _tmp193 = _tmp55 * _tmp62;
  const Scalar _tmp194 = -_tmp127 * _tmp192 - _tmp128 * _tmp193 + Scalar(1.0) * _tmp74;
  const Scalar _tmp195 = _tmp134 * (-_tmp125 * _tmp159 - _tmp131 * _tmp194 + Scalar(1.0) * _tmp162 -
                                    _tmp163 * _tmp191 + _tmp190 * _tmp99);
  const Scalar _tmp196 = _tmp164 * _tmp97;
  const Scalar _tmp197 = _tmp132 * _tmp196;
  const Scalar _tmp198 = _tmp163 * _tmp197;
  const Scalar _tmp199 = _tmp189 + _tmp194 + _tmp195 - _tmp198;
  const Scalar _tmp200 = -_tmp106 * _tmp199 - _tmp139 * _tmp61 + _tmp187 * _tmp43;
  const Scalar _tmp201 = _tmp105 * _tmp41;
  const Scalar _tmp202 = _tmp116 * _tmp146;
  const Scalar _tmp203 = _tmp112 * (-_tmp107 * _tmp109 + _tmp111);
  const Scalar _tmp204 = _tmp133 * _tmp176;
  const Scalar _tmp205 = _tmp204 * _tmp94;
  const Scalar _tmp206 = _tmp176 * _tmp196;
  const Scalar _tmp207 = _tmp163 * _tmp206;
  const Scalar _tmp208 = _tmp113 / [&]() {
    const Scalar base = _tmp19;
    return base * base * base;
  }();
  const Scalar _tmp209 = _tmp208 * _tmp58;
  const Scalar _tmp210 = -_tmp208 * _tmp71 * _tmp75 - _tmp209 * _tmp83 + _tmp78 + _tmp86;
  const Scalar _tmp211 = -_tmp209 * _tmp73 - _tmp210 * _tmp93 + _tmp77;
  const Scalar _tmp212 = _tmp130 * _tmp175;
  const Scalar _tmp213 = _tmp105 * _tmp175;
  const Scalar _tmp214 =
      _tmp134 * (-_tmp131 * _tmp211 + _tmp152 - _tmp157 - _tmp158 + _tmp159 * _tmp173 + _tmp160 -
                 _tmp161 * _tmp209 - _tmp163 * _tmp213 + _tmp212 * _tmp99);
  const Scalar _tmp215 = _tmp205 - _tmp207 + _tmp211 + _tmp214;
  const Scalar _tmp216 = _tmp178 * _tmp43;
  const Scalar _tmp217 = -_tmp106 * _tmp215 - _tmp180 * _tmp61 + _tmp216 * _tmp99 - _tmp61;
  const Scalar _tmp218 = _tmp103 * _tmp181;
  const Scalar _tmp219 = _tmp178 * _tmp41;
  const Scalar _tmp220 = _tmp116 * _tmp182;
  const Scalar _tmp221 = _tmp118 * _tmp183;
  const Scalar _tmp222 = _tmp118 * _tmp203;
  const Scalar _tmp223 =
      -_tmp117 *
          (-_tmp102 * _tmp99 + _tmp104 * _tmp107 + _tmp108 * _tmp99 - _tmp109 * _tmp111 * _tmp61) -
      _tmp147 * _tmp172 + _tmp148 -
      _tmp171 *
          (_tmp104 * _tmp168 * _tmp43 - _tmp149 * _tmp151 + _tmp165 * _tmp166 - _tmp165 * _tmp167) -
      _tmp172 * _tmp183 - _tmp172 * _tmp185 - _tmp172 * _tmp203 + _tmp186 -
      _tmp202 * (-_tmp104 * _tmp137 + _tmp109 * _tmp200 - _tmp187 * _tmp41 + _tmp199 * _tmp201) -
      _tmp220 * (_tmp109 * _tmp217 + _tmp201 * _tmp215 - _tmp218 * _tmp62 - _tmp219 * _tmp99) +
      _tmp221 + _tmp222;
  const Scalar _tmp224 =
      -_tmp116 * _tmp147 - _tmp116 * _tmp183 - _tmp116 * _tmp185 - _tmp116 * _tmp203;
  const Scalar _tmp225 = Scalar(1.0) / (_tmp224);
  const Scalar _tmp226 = _tmp37 + _tmp89;
  const Scalar _tmp227 = _tmp226 * _tmp93;
  const Scalar _tmp228 = Scalar(1.0) / (-_tmp227 - _tmp34 + _tmp91);
  const Scalar _tmp229 = Scalar(1.0) * _tmp228;
  const Scalar _tmp230 = _tmp134 * _tmp229;
  const Scalar _tmp231 = -_tmp168 * _tmp96 + _tmp226 * _tmp230;
  const Scalar _tmp232 = Scalar(1.0) * _tmp170;
  const Scalar _tmp233 = fh1 * (_tmp66 + _tmp68);
  const Scalar _tmp234 = -_tmp142 * fv1 - _tmp145 * _tmp233 - Scalar(40.024799999999999) * _tmp27;
  const Scalar _tmp235 = _tmp227 * _tmp229 + Scalar(1.0);
  const Scalar _tmp236 = _tmp229 * _tmp93;
  const Scalar _tmp237 = Scalar(40.024799999999999) * _tmp11 + _tmp140 * fv1 + _tmp169 * _tmp233;
  const Scalar _tmp238 = _tmp226 * _tmp90;
  const Scalar _tmp239 = _tmp105 * _tmp96;
  const Scalar _tmp240 = _tmp226 * _tmp228;
  const Scalar _tmp241 = -_tmp125 * _tmp82 + _tmp135 * _tmp240 - _tmp136 * _tmp239;
  const Scalar _tmp242 = Scalar(1.0) * _tmp146;
  const Scalar _tmp243 = _tmp174 + _tmp177 * _tmp240 - _tmp179 * _tmp96;
  const Scalar _tmp244 = Scalar(1.0) * _tmp182;
  const Scalar _tmp245 = _tmp100 * _tmp228;
  const Scalar _tmp246 = -_tmp110 * _tmp96 - _tmp226 * _tmp245 + _tmp89;
  const Scalar _tmp247 =
      Scalar(1.0) * _tmp112 * (-_tmp100 * _tmp229 - _tmp126 * _tmp246 + Scalar(1.0)) +
      _tmp232 * (-_tmp126 * _tmp231 + _tmp230) +
      Scalar(1.0) * _tmp234 * (-_tmp126 * _tmp235 + _tmp236) +
      Scalar(1.0) * _tmp237 * (_tmp229 * _tmp238 - _tmp229) +
      _tmp242 * (-_tmp126 * _tmp241 + _tmp135 * _tmp229) +
      _tmp244 * (-_tmp126 * _tmp243 + _tmp177 * _tmp229);
  const Scalar _tmp248 = std::asinh(_tmp225 * _tmp247);
  const Scalar _tmp249 = Scalar(1.0) * _tmp248;
  const Scalar _tmp250 = Scalar(0.71007031138673404) * _tmp225;
  const Scalar _tmp251 = -_tmp31 + p_b(1, 0);
  const Scalar _tmp252 = -_tmp18 + p_b(0, 0);
  const Scalar _tmp253 =
      std::sqrt(Scalar(std::pow(_tmp251, Scalar(2)) + std::pow(_tmp252, Scalar(2))));
  const Scalar _tmp254 = Scalar(1.4083112389913199) * _tmp248;
  const Scalar _tmp255 = -_tmp224 * _tmp254 - _tmp253;
  const Scalar _tmp256 = _tmp250 * _tmp255;
  const Scalar _tmp257 = Scalar(1.4083112389913199) * _tmp250 * p_b(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp249) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp256);
  const Scalar _tmp258 = std::pow(_tmp224, Scalar(-2));
  const Scalar _tmp259 = _tmp247 * _tmp258;
  const Scalar _tmp260 = _tmp96 * _tmp99;
  const Scalar _tmp261 = _tmp178 * _tmp260 - _tmp179 * _tmp87 + _tmp205 * _tmp240 -
                         _tmp207 * _tmp240 + _tmp210 + _tmp214 * _tmp240 - _tmp215 * _tmp239;
  const Scalar _tmp262 = _tmp196 * _tmp229;
  const Scalar _tmp263 = _tmp163 * _tmp262;
  const Scalar _tmp264 = Scalar(1.0) * _tmp96;
  const Scalar _tmp265 = _tmp133 * _tmp229;
  const Scalar _tmp266 = _tmp265 * _tmp94;
  const Scalar _tmp267 =
      _tmp165 * _tmp264 - _tmp168 * _tmp87 - _tmp226 * _tmp263 + _tmp226 * _tmp266;
  const Scalar _tmp268 = _tmp101 * _tmp260 - _tmp110 * _tmp87;
  const Scalar _tmp269 = _tmp112 * _tmp126;
  const Scalar _tmp270 = -_tmp138 * _tmp87 + _tmp149 * _tmp78 + _tmp187 * _tmp96 +
                         _tmp189 * _tmp240 + _tmp195 * _tmp240 - _tmp198 * _tmp240 -
                         _tmp199 * _tmp239 + Scalar(1.0) * _tmp84;
  const Scalar _tmp271 =
      -_tmp223 * _tmp259 + _tmp225 * (_tmp232 * (-_tmp126 * _tmp267 - _tmp263 + _tmp266) +
                                      _tmp242 * (-_tmp126 * _tmp270 + _tmp189 * _tmp229 +
                                                 _tmp195 * _tmp229 - _tmp198 * _tmp229) +
                                      _tmp244 * (-_tmp126 * _tmp261 + _tmp205 * _tmp229 -
                                                 _tmp207 * _tmp229 + _tmp214 * _tmp229) -
                                      _tmp268 * _tmp269);
  const Scalar _tmp272 =
      std::pow(Scalar(std::pow(_tmp247, Scalar(2)) * _tmp258 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp273 = Scalar(1.0) * _tmp272 * std::sinh(_tmp249);
  const Scalar _tmp274 = std::sinh(_tmp256);
  const Scalar _tmp275 = Scalar(1.0) / (_tmp253);
  const Scalar _tmp276 = Scalar(1.4083112389913199) * _tmp224;
  const Scalar _tmp277 = _tmp272 * _tmp276;
  const Scalar _tmp278 = Scalar(0.71007031138673404) * _tmp258;
  const Scalar _tmp279 = _tmp223 * _tmp278;
  const Scalar _tmp280 = _tmp101 * _tmp112;
  const Scalar _tmp281 = _tmp106 * _tmp280;
  const Scalar _tmp282 = _tmp146 * _tmp75;
  const Scalar _tmp283 = _tmp182 * _tmp75;
  const Scalar _tmp284 = _tmp125 * _tmp170;
  const Scalar _tmp285 =
      _tmp137 * _tmp282 + _tmp181 * _tmp283 - _tmp184 * _tmp284 - _tmp281 * _tmp75;
  const Scalar _tmp286 = Scalar(1.4083112389913199) * _tmp285;
  const Scalar _tmp287 = std::pow(_tmp285, Scalar(-2));
  const Scalar _tmp288 = _tmp146 * _tmp90;
  const Scalar _tmp289 = _tmp182 * _tmp90;
  const Scalar _tmp290 = _tmp112 * _tmp90;
  const Scalar _tmp291 = _tmp170 * _tmp90;
  const Scalar _tmp292 = _tmp229 * _tmp237;
  const Scalar _tmp293 = _tmp231 * _tmp291 + _tmp234 * _tmp235 * _tmp90 - _tmp238 * _tmp292 +
                         _tmp241 * _tmp288 + _tmp243 * _tmp289 + _tmp246 * _tmp290;
  const Scalar _tmp294 =
      std::pow(Scalar(_tmp287 * std::pow(_tmp293, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp295 = _tmp168 * _tmp170;
  const Scalar _tmp296 = _tmp181 * _tmp182;
  const Scalar _tmp297 = _tmp110 * _tmp112;
  const Scalar _tmp298 = _tmp297 * _tmp41;
  const Scalar _tmp299 = _tmp284 * _tmp43;
  const Scalar _tmp300 = _tmp280 * _tmp99;
  const Scalar _tmp301 = _tmp146 * _tmp55;
  const Scalar _tmp302 = -_tmp137 * _tmp301 * _tmp62 - _tmp151 * _tmp284 + _tmp165 * _tmp299 +
                         _tmp193 * _tmp281 + _tmp193 * _tmp295 * _tmp43 - _tmp193 * _tmp296 +
                         _tmp200 * _tmp282 + _tmp217 * _tmp283 - _tmp298 * _tmp76 +
                         _tmp300 * _tmp79;
  const Scalar _tmp303 = _tmp287 * _tmp293;
  const Scalar _tmp304 = Scalar(1.0) / (_tmp285);
  const Scalar _tmp305 =
      _tmp294 * (-_tmp302 * _tmp303 + _tmp304 * (_tmp261 * _tmp289 + _tmp267 * _tmp291 +
                                                 _tmp268 * _tmp290 + _tmp270 * _tmp288));
  const Scalar _tmp306 = std::asinh(_tmp293 * _tmp304);
  const Scalar _tmp307 = Scalar(1.4083112389913199) * _tmp302;
  const Scalar _tmp308 = Scalar(0.71007031138673404) * _tmp304;
  const Scalar _tmp309 =
      -_tmp286 * _tmp306 - std::sqrt(Scalar(std::pow(Scalar(-_tmp46 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp51 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp310 = Scalar(0.71007031138673404) * _tmp287;
  const Scalar _tmp311 = _tmp302 * _tmp310;
  const Scalar _tmp312 = _tmp308 * _tmp309;
  const Scalar _tmp313 = std::sinh(_tmp312);
  const Scalar _tmp314 = Scalar(1.0) * _tmp306;
  const Scalar _tmp315 = Scalar(1.0) * std::sinh(_tmp314);
  const Scalar _tmp316 = _tmp308 * p_d(2, 0) - std::cosh(_tmp312) + std::cosh(_tmp314);
  const Scalar _tmp317 = _tmp105 * _tmp182;
  const Scalar _tmp318 = _tmp105 * _tmp146;
  const Scalar _tmp319 = _tmp178 * _tmp182;
  const Scalar _tmp320 = -_tmp146 * _tmp187 - _tmp165 * _tmp232 + _tmp199 * _tmp318 +
                         _tmp215 * _tmp317 - _tmp300 - _tmp319 * _tmp99;
  const Scalar _tmp321 = _tmp138 * _tmp146 + _tmp179 * _tmp182 + _tmp295 + _tmp297;
  const Scalar _tmp322 = Scalar(1.0) / (_tmp321);
  const Scalar _tmp323 = Scalar(0.71007031138673404) * _tmp322;
  const Scalar _tmp324 = _tmp182 * _tmp228;
  const Scalar _tmp325 = _tmp146 * _tmp228;
  const Scalar _tmp326 = _tmp112 * _tmp245 - _tmp135 * _tmp325 - _tmp170 * _tmp230 -
                         _tmp177 * _tmp324 - _tmp234 * _tmp236 + _tmp292;
  const Scalar _tmp327 = std::asinh(_tmp322 * _tmp326);
  const Scalar _tmp328 = Scalar(1.4083112389913199) * _tmp327;
  const Scalar _tmp329 =
      -_tmp321 * _tmp328 - std::sqrt(Scalar(std::pow(Scalar(-_tmp35 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp38 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp330 = _tmp323 * _tmp329;
  const Scalar _tmp331 = Scalar(1.0) * _tmp327;
  const Scalar _tmp332 = _tmp323 * p_c(2, 0) - std::cosh(_tmp330) + std::cosh(_tmp331);
  const Scalar _tmp333 = std::pow(_tmp321, Scalar(-2));
  const Scalar _tmp334 = Scalar(0.71007031138673404) * _tmp333;
  const Scalar _tmp335 = _tmp334 * p_c(2, 0);
  const Scalar _tmp336 = _tmp326 * _tmp333;
  const Scalar _tmp337 =
      std::pow(Scalar(std::pow(_tmp326, Scalar(2)) * _tmp333 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp338 =
      _tmp337 *
      (-_tmp320 * _tmp336 +
       _tmp322 * (_tmp170 * _tmp263 - _tmp170 * _tmp266 - _tmp189 * _tmp325 - _tmp195 * _tmp325 +
                  _tmp198 * _tmp325 - _tmp205 * _tmp324 + _tmp207 * _tmp324 - _tmp214 * _tmp324));
  const Scalar _tmp339 = Scalar(1.0) * std::sinh(_tmp331);
  const Scalar _tmp340 = std::sinh(_tmp330);
  const Scalar _tmp341 = _tmp329 * _tmp334;
  const Scalar _tmp342 = Scalar(1.4083112389913199) * _tmp321;
  const Scalar _tmp343 = _tmp20 * _tmp75;
  const Scalar _tmp344 = _tmp343 * _tmp72;
  const Scalar _tmp345 = _tmp20 * _tmp70;
  const Scalar _tmp346 = _tmp20 * _tmp58;
  const Scalar _tmp347 = _tmp346 * _tmp43;
  const Scalar _tmp348 = _tmp343 * _tmp82;
  const Scalar _tmp349 = _tmp345 * _tmp41 - _tmp345 * _tmp80 - _tmp347 * _tmp83 + _tmp348 * _tmp41;
  const Scalar _tmp350 = _tmp344 * _tmp41 - _tmp347 * _tmp73 - _tmp349 * _tmp93;
  const Scalar _tmp351 = _tmp350 * _tmp98;
  const Scalar _tmp352 = _tmp136 * _tmp351;
  const Scalar _tmp353 = _tmp188 * _tmp350;
  const Scalar _tmp354 = _tmp152 * _tmp33;
  const Scalar _tmp355 = _tmp124 * _tmp343;
  const Scalar _tmp356 = _tmp116 * (_tmp113 * _tmp155 - _tmp119 - _tmp154 * _tmp156);
  const Scalar _tmp357 = -_tmp354 * _tmp55 + _tmp356 * _tmp55;
  const Scalar _tmp358 = -_tmp161 * _tmp347 - _tmp354 * _tmp41 + _tmp355 * _tmp41 +
                         _tmp356 * _tmp41 - _tmp357 * _tmp79;
  const Scalar _tmp359 = _tmp197 * _tmp358;
  const Scalar _tmp360 = Scalar(1.0) * _tmp346;
  const Scalar _tmp361 = _tmp346 * _tmp55;
  const Scalar _tmp362 = _tmp109 * _tmp127 * _tmp345 + _tmp128 * _tmp361 - _tmp360 * _tmp73;
  const Scalar _tmp363 = _tmp134 * (-_tmp125 * _tmp357 - _tmp131 * _tmp362 - _tmp161 * _tmp360 +
                                    _tmp190 * _tmp351 - _tmp191 * _tmp358);
  const Scalar _tmp364 = _tmp353 - _tmp359 + _tmp362 + _tmp363;
  const Scalar _tmp365 = -_tmp106 * _tmp364 + _tmp139 * _tmp20 + _tmp352 * _tmp43;
  const Scalar _tmp366 = _tmp137 * _tmp346;
  const Scalar _tmp367 = _tmp164 * _tmp358;
  const Scalar _tmp368 = _tmp150 * _tmp20;
  const Scalar _tmp369 = _tmp204 * _tmp350;
  const Scalar _tmp370 = _tmp192 - _tmp345 - _tmp348 + _tmp84;
  const Scalar _tmp371 = -_tmp344 - _tmp370 * _tmp93 + _tmp74;
  const Scalar _tmp372 =
      _tmp134 * (-_tmp131 * _tmp371 + _tmp162 + _tmp173 * _tmp357 + _tmp212 * _tmp351 -
                 _tmp213 * _tmp358 + _tmp354 - _tmp355 - _tmp356);
  const Scalar _tmp373 = _tmp206 * _tmp358;
  const Scalar _tmp374 = _tmp369 + _tmp371 + _tmp372 - _tmp373;
  const Scalar _tmp375 = -_tmp106 * _tmp374 + _tmp180 * _tmp20 + _tmp20 + _tmp216 * _tmp351;
  const Scalar _tmp376 =
      -_tmp117 * (-_tmp102 * _tmp351 - _tmp103 * _tmp107 * _tmp346 + _tmp108 * _tmp351 +
                  _tmp111 * _tmp343 * _tmp55) +
      _tmp148 * _tmp33 -
      _tmp171 * (-_tmp103 * _tmp168 * _tmp347 + _tmp149 * _tmp368 + _tmp166 * _tmp367 -
                 _tmp167 * _tmp367) +
      _tmp186 * _tmp33 -
      _tmp202 * (_tmp103 * _tmp366 + _tmp109 * _tmp365 + _tmp201 * _tmp364 - _tmp352 * _tmp41) -
      _tmp220 * (_tmp109 * _tmp375 + _tmp201 * _tmp374 + _tmp218 * _tmp346 - _tmp219 * _tmp351) +
      _tmp221 * _tmp33 + _tmp222 * _tmp33;
  const Scalar _tmp377 = _tmp351 * _tmp96;
  const Scalar _tmp378 = _tmp178 * _tmp377 - _tmp179 * _tmp349 - _tmp239 * _tmp374 +
                         _tmp240 * _tmp369 + _tmp240 * _tmp372 - _tmp240 * _tmp373 + _tmp370;
  const Scalar _tmp379 = _tmp101 * _tmp377 - _tmp110 * _tmp349;
  const Scalar _tmp380 = _tmp265 * _tmp350;
  const Scalar _tmp381 = _tmp262 * _tmp358;
  const Scalar _tmp382 =
      -_tmp168 * _tmp349 + _tmp226 * _tmp380 - _tmp226 * _tmp381 + _tmp264 * _tmp367;
  const Scalar _tmp383 = _tmp136 * _tmp377 - _tmp138 * _tmp349 - _tmp149 * _tmp345 -
                         _tmp239 * _tmp364 + _tmp240 * _tmp353 - _tmp240 * _tmp359 +
                         _tmp240 * _tmp363 - _tmp360 * _tmp83;
  const Scalar _tmp384 = _tmp225 * (_tmp232 * (-_tmp126 * _tmp382 + _tmp380 - _tmp381) +
                                    _tmp242 * (-_tmp126 * _tmp383 + _tmp229 * _tmp353 -
                                               _tmp229 * _tmp359 + _tmp229 * _tmp363) +
                                    _tmp244 * (-_tmp126 * _tmp378 + _tmp229 * _tmp369 +
                                               _tmp229 * _tmp372 - _tmp229 * _tmp373) -
                                    _tmp269 * _tmp379) -
                         _tmp259 * _tmp376;
  const Scalar _tmp385 = _tmp278 * _tmp376;
  const Scalar _tmp386 = _tmp280 * _tmp351;
  const Scalar _tmp387 = -_tmp281 * _tmp361 + _tmp282 * _tmp365 + _tmp283 * _tmp375 +
                         _tmp284 * _tmp368 - _tmp295 * _tmp347 * _tmp55 + _tmp296 * _tmp361 +
                         _tmp298 * _tmp343 + _tmp299 * _tmp367 + _tmp301 * _tmp366 +
                         _tmp386 * _tmp79;
  const Scalar _tmp388 = Scalar(1.4083112389913199) * _tmp387;
  const Scalar _tmp389 =
      _tmp294 * (-_tmp303 * _tmp387 + _tmp304 * (_tmp288 * _tmp383 + _tmp289 * _tmp378 +
                                                 _tmp290 * _tmp379 + _tmp291 * _tmp382));
  const Scalar _tmp390 = _tmp310 * _tmp387;
  const Scalar _tmp391 = -_tmp146 * _tmp352 - _tmp232 * _tmp367 + _tmp317 * _tmp374 +
                         _tmp318 * _tmp364 - _tmp319 * _tmp351 - _tmp386;
  const Scalar _tmp392 = Scalar(1.4083112389913199) * _tmp391;
  const Scalar _tmp393 =
      _tmp337 *
      (_tmp322 * (-_tmp170 * _tmp380 + _tmp170 * _tmp381 - _tmp324 * _tmp369 - _tmp324 * _tmp372 +
                  _tmp324 * _tmp373 - _tmp325 * _tmp353 + _tmp325 * _tmp359 - _tmp325 * _tmp363) -
       _tmp336 * _tmp391);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp223 * _tmp257 -
      _tmp276 * (_tmp271 * _tmp273 -
                 _tmp274 * (_tmp250 * (-_tmp223 * _tmp254 - _tmp252 * _tmp275 - _tmp271 * _tmp277) -
                            _tmp255 * _tmp279) -
                 _tmp279 * p_b(2, 0));
  _res(2, 0) =
      -_tmp286 *
          (_tmp305 * _tmp315 - _tmp311 * p_d(2, 0) -
           _tmp313 * (_tmp308 * (-_tmp286 * _tmp305 - _tmp306 * _tmp307) - _tmp309 * _tmp311)) -
      _tmp307 * _tmp316;
  _res(3, 0) =
      -Scalar(1.4083112389913199) * _tmp320 * _tmp332 -
      _tmp342 *
          (-_tmp320 * _tmp335 + _tmp338 * _tmp339 -
           _tmp340 * (-_tmp320 * _tmp341 + _tmp323 * (-_tmp320 * _tmp328 - _tmp338 * _tmp342)));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp257 * _tmp376 -
      _tmp276 * (_tmp273 * _tmp384 -
                 _tmp274 * (_tmp250 * (-_tmp251 * _tmp275 - _tmp254 * _tmp376 - _tmp277 * _tmp384) -
                            _tmp255 * _tmp385) -
                 _tmp385 * p_b(2, 0));
  _res(2, 1) =
      -_tmp286 *
          (-_tmp313 * (_tmp308 * (-_tmp286 * _tmp389 - _tmp306 * _tmp388) - _tmp309 * _tmp390) +
           _tmp315 * _tmp389 - _tmp390 * p_d(2, 0)) -
      _tmp316 * _tmp388;
  _res(3, 1) =
      -_tmp332 * _tmp392 -
      _tmp342 *
          (-_tmp335 * _tmp391 + _tmp339 * _tmp393 -
           _tmp340 * (_tmp323 * (-_tmp327 * _tmp392 - _tmp342 * _tmp393) - _tmp341 * _tmp391));
  _res(0, 2) = 0;
  _res(1, 2) = Scalar(-1.0);
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
