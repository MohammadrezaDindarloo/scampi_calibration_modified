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
 * Symbolic function: IK_residual_func_cost4_wrt_pc_Nl22
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPcNl22(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1204

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (387)
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
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = _tmp17 - p_c(0, 0);
  const Scalar _tmp19 = Scalar(1.0) / (_tmp18);
  const Scalar _tmp20 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp21 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp23 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp24 = _tmp5 * _tmp8;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = _tmp22 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(1, 0);
  const Scalar _tmp31 = _tmp30 - p_c(1, 0);
  const Scalar _tmp32 = std::pow(_tmp31, Scalar(2));
  const Scalar _tmp33 = _tmp20 + _tmp32;
  const Scalar _tmp34 = std::sqrt(_tmp33);
  const Scalar _tmp35 = _tmp19 * _tmp34;
  const Scalar _tmp36 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp37 = -_tmp22;
  const Scalar _tmp38 = _tmp26 - _tmp27;
  const Scalar _tmp39 = _tmp37 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = _tmp40 - p_a(1, 0);
  const Scalar _tmp42 = -_tmp4;
  const Scalar _tmp43 = _tmp11 - _tmp14;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 - p_a(0, 0);
  const Scalar _tmp47 = std::pow(_tmp46, Scalar(2));
  const Scalar _tmp48 = std::pow(_tmp41, Scalar(2)) + _tmp47;
  const Scalar _tmp49 = std::pow(_tmp48, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp50 = _tmp41 * _tmp49;
  const Scalar _tmp51 = _tmp19 * _tmp31;
  const Scalar _tmp52 = _tmp46 * _tmp49;
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 = -_tmp50 + _tmp53;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp54);
  const Scalar _tmp56 = _tmp52 * _tmp55;
  const Scalar _tmp57 = Scalar(1.0) * _tmp29;
  const Scalar _tmp58 = -_tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp39 + _tmp58);
  const Scalar _tmp60 = Scalar(1.0) * _tmp16;
  const Scalar _tmp61 = -_tmp44 + _tmp60;
  const Scalar _tmp62 = _tmp59 * _tmp61;
  const Scalar _tmp63 = _tmp57 * _tmp62 + _tmp60;
  const Scalar _tmp64 = 0;
  const Scalar _tmp65 = _tmp4 + _tmp43;
  const Scalar _tmp66 = _tmp65 + position_vector(0, 0);
  const Scalar _tmp67 = _tmp66 - p_b(0, 0);
  const Scalar _tmp68 = _tmp28 + _tmp37;
  const Scalar _tmp69 = _tmp68 + position_vector(1, 0);
  const Scalar _tmp70 = _tmp69 - p_b(1, 0);
  const Scalar _tmp71 = std::pow(Scalar(std::pow(_tmp67, Scalar(2)) + std::pow(_tmp70, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp72 = _tmp70 * _tmp71;
  const Scalar _tmp73 = _tmp67 * _tmp71;
  const Scalar _tmp74 = _tmp51 * _tmp73 - _tmp72;
  const Scalar _tmp75 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp76 = -_tmp75;
  const Scalar _tmp77 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp21 + Scalar(-0.010999999999999999);
  const Scalar _tmp78 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp79 = _tmp77 + _tmp78;
  const Scalar _tmp80 = _tmp76 + _tmp79;
  const Scalar _tmp81 = _tmp77 - _tmp78;
  const Scalar _tmp82 = _tmp76 + _tmp81;
  const Scalar _tmp83 = _tmp75 + _tmp79;
  const Scalar _tmp84 = _tmp52 * _tmp83;
  const Scalar _tmp85 = -_tmp52 * _tmp82 + _tmp84;
  const Scalar _tmp86 = _tmp55 * _tmp74;
  const Scalar _tmp87 = _tmp19 * _tmp83;
  const Scalar _tmp88 = _tmp31 * _tmp87;
  const Scalar _tmp89 = _tmp50 * _tmp82 - _tmp52 * _tmp88;
  const Scalar _tmp90 = _tmp72 * _tmp80 - _tmp73 * _tmp88 - _tmp86 * _tmp89;
  const Scalar _tmp91 = -_tmp62 * _tmp90 - _tmp73 * _tmp80 + _tmp73 * _tmp83 - _tmp85 * _tmp86;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp74 * _tmp92;
  const Scalar _tmp94 = _tmp64 * _tmp93;
  const Scalar _tmp95 = _tmp64 * _tmp92;
  const Scalar _tmp96 = _tmp73 * _tmp95;
  const Scalar _tmp97 = _tmp36 * (-_tmp56 * _tmp94 + _tmp96);
  const Scalar _tmp98 = Scalar(1.0) / (_tmp34);
  const Scalar _tmp99 = _tmp29 * _tmp98;
  const Scalar _tmp100 = _tmp16 * _tmp98;
  const Scalar _tmp101 = _tmp100 * _tmp31 - _tmp18 * _tmp99;
  const Scalar _tmp102 = _tmp101 * _tmp35;
  const Scalar _tmp103 = _tmp102 * _tmp52 + _tmp39 * _tmp52 - _tmp44 * _tmp50;
  const Scalar _tmp104 = Scalar(1.0) * _tmp55;
  const Scalar _tmp105 = Scalar(1.0) * _tmp59;
  const Scalar _tmp106 = _tmp105 * _tmp61;
  const Scalar _tmp107 = _tmp106 * _tmp89;
  const Scalar _tmp108 = -_tmp104 * _tmp85 + _tmp107 * _tmp55;
  const Scalar _tmp109 = _tmp103 * _tmp55;
  const Scalar _tmp110 = _tmp102 * _tmp73 - _tmp109 * _tmp74 - _tmp65 * _tmp72 + _tmp68 * _tmp73;
  const Scalar _tmp111 = _tmp110 * _tmp92;
  const Scalar _tmp112 = -_tmp103 * _tmp104 - _tmp108 * _tmp111;
  const Scalar _tmp113 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp114 = _tmp112 * _tmp113;
  const Scalar _tmp115 = _tmp114 * _tmp91;
  const Scalar _tmp116 = _tmp108 + _tmp115;
  const Scalar _tmp117 = _tmp73 * _tmp92;
  const Scalar _tmp118 = _tmp116 * _tmp117;
  const Scalar _tmp119 = -_tmp116 * _tmp93 + Scalar(1.0);
  const Scalar _tmp120 = _tmp15 + _tmp42;
  const Scalar _tmp121 = _tmp120 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp122 = _tmp22 + _tmp38;
  const Scalar _tmp123 = _tmp122 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp124 =
      std::pow(Scalar(std::pow(_tmp121, Scalar(2)) + std::pow(_tmp123, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp125 = _tmp123 * _tmp124;
  const Scalar _tmp126 = _tmp125 * fh1;
  const Scalar _tmp127 = _tmp126 * (_tmp118 + _tmp119 * _tmp56);
  const Scalar _tmp128 = _tmp104 * _tmp52;
  const Scalar _tmp129 = _tmp113 * _tmp74;
  const Scalar _tmp130 = Scalar(1.0) * _tmp113;
  const Scalar _tmp131 = _tmp121 * _tmp124;
  const Scalar _tmp132 = fh1 * (_tmp120 * _tmp125 - _tmp122 * _tmp131);
  const Scalar _tmp133 = _tmp132 * (-_tmp128 * _tmp129 + _tmp130 * _tmp73);
  const Scalar _tmp134 = _tmp51 * _tmp55;
  const Scalar _tmp135 = _tmp134 * _tmp89 + _tmp88;
  const Scalar _tmp136 = _tmp134 * _tmp85 - _tmp135 * _tmp62 - _tmp83;
  const Scalar _tmp137 = _tmp136 * _tmp92;
  const Scalar _tmp138 = -_tmp102 + _tmp109 * _tmp51 - _tmp110 * _tmp137;
  const Scalar _tmp139 = _tmp113 * _tmp91;
  const Scalar _tmp140 = _tmp138 * _tmp139;
  const Scalar _tmp141 = _tmp136 + _tmp140;
  const Scalar _tmp142 = _tmp117 * _tmp141;
  const Scalar _tmp143 = -_tmp141 * _tmp93 - _tmp51;
  const Scalar _tmp144 = _tmp131 * fh1;
  const Scalar _tmp145 = _tmp144 * (_tmp142 + _tmp143 * _tmp56 + Scalar(1.0));
  const Scalar _tmp146 = -_tmp127 * _tmp35 - _tmp133 * _tmp35 - _tmp145 * _tmp35 - _tmp35 * _tmp97;
  const Scalar _tmp147 = Scalar(1.0) / (_tmp146);
  const Scalar _tmp148 = _tmp58 + _tmp68;
  const Scalar _tmp149 = _tmp148 * _tmp62;
  const Scalar _tmp150 = Scalar(1.0) / (-_tmp149 + _tmp60 - _tmp65);
  const Scalar _tmp151 = Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = _tmp148 * _tmp150;
  const Scalar _tmp153 = _tmp90 * _tmp92;
  const Scalar _tmp154 = -_tmp104 * _tmp89 + _tmp115 * _tmp152 - _tmp116 * _tmp153;
  const Scalar _tmp155 = Scalar(1.0) * _tmp126;
  const Scalar _tmp156 = fh1 * (_tmp75 + _tmp81);
  const Scalar _tmp157 = -_tmp122 * fv1 - _tmp125 * _tmp156 - Scalar(40.024799999999999) * _tmp25;
  const Scalar _tmp158 = _tmp149 * _tmp151 + Scalar(1.0);
  const Scalar _tmp159 = _tmp151 * _tmp62;
  const Scalar _tmp160 = _tmp135 + _tmp140 * _tmp152 - _tmp141 * _tmp153;
  const Scalar _tmp161 = Scalar(1.0) * _tmp144;
  const Scalar _tmp162 = _tmp139 * _tmp151;
  const Scalar _tmp163 = -_tmp130 * _tmp90 + _tmp148 * _tmp162;
  const Scalar _tmp164 = Scalar(1.0) * _tmp132;
  const Scalar _tmp165 = _tmp150 * _tmp63;
  const Scalar _tmp166 = -_tmp148 * _tmp165 - _tmp153 * _tmp64 + _tmp58;
  const Scalar _tmp167 = _tmp148 * _tmp59;
  const Scalar _tmp168 = Scalar(40.024799999999999) * _tmp10 + _tmp120 * fv1 + _tmp131 * _tmp156;
  const Scalar _tmp169 =
      _tmp155 * (-_tmp105 * _tmp154 + _tmp115 * _tmp151) +
      Scalar(1.0) * _tmp157 * (-_tmp105 * _tmp158 + _tmp159) +
      _tmp161 * (-_tmp105 * _tmp160 + _tmp140 * _tmp151) +
      _tmp164 * (-_tmp105 * _tmp163 + _tmp162) +
      Scalar(1.0) * _tmp168 * (_tmp151 * _tmp167 - _tmp151) +
      Scalar(1.0) * _tmp36 * (-_tmp105 * _tmp166 - _tmp151 * _tmp63 + Scalar(1.0));
  const Scalar _tmp170 = std::asinh(_tmp147 * _tmp169);
  const Scalar _tmp171 = Scalar(1.0) * _tmp170;
  const Scalar _tmp172 = Scalar(1.0) * std::cosh(_tmp171);
  const Scalar _tmp173 = std::pow(_tmp146, Scalar(-2));
  const Scalar _tmp174 =
      std::pow(Scalar(std::pow(_tmp169, Scalar(2)) * _tmp173 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp175 = std::pow(_tmp54, Scalar(-2));
  const Scalar _tmp176 = Scalar(1.0) / (_tmp20);
  const Scalar _tmp177 = _tmp176 * _tmp31;
  const Scalar _tmp178 = _tmp175 * _tmp177;
  const Scalar _tmp179 = _tmp52 * _tmp85;
  const Scalar _tmp180 = _tmp178 * _tmp179;
  const Scalar _tmp181 = _tmp52 * _tmp89;
  const Scalar _tmp182 = _tmp178 * _tmp181;
  const Scalar _tmp183 = _tmp177 * _tmp83;
  const Scalar _tmp184 = _tmp52 * _tmp86;
  const Scalar _tmp185 = _tmp177 * _tmp55;
  const Scalar _tmp186 = _tmp185 * _tmp89;
  const Scalar _tmp187 = _tmp182 * _tmp74 + _tmp183 * _tmp184 - _tmp183 * _tmp73 - _tmp186 * _tmp73;
  const Scalar _tmp188 = _tmp185 * _tmp85;
  const Scalar _tmp189 = _tmp180 * _tmp74 - _tmp187 * _tmp62 - _tmp188 * _tmp73;
  const Scalar _tmp190 = _tmp113 * _tmp151;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = _tmp109 * _tmp177;
  const Scalar _tmp193 = std::pow(_tmp33, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp194 = _tmp193 * _tmp29;
  const Scalar _tmp195 = _tmp16 * _tmp193;
  const Scalar _tmp196 = _tmp18 * _tmp31;
  const Scalar _tmp197 = _tmp35 * (-_tmp194 * _tmp20 + _tmp195 * _tmp196 + _tmp99);
  const Scalar _tmp198 = _tmp176 * _tmp34;
  const Scalar _tmp199 = _tmp101 * _tmp198;
  const Scalar _tmp200 = _tmp103 * _tmp52;
  const Scalar _tmp201 = _tmp178 * _tmp200;
  const Scalar _tmp202 = _tmp101 * _tmp98;
  const Scalar _tmp203 = _tmp197 * _tmp52 + _tmp199 * _tmp52 - _tmp202 * _tmp52;
  const Scalar _tmp204 = _tmp202 * _tmp73;
  const Scalar _tmp205 = -_tmp192 * _tmp73 + _tmp197 * _tmp73 + _tmp199 * _tmp73 +
                         _tmp201 * _tmp74 - _tmp203 * _tmp86 - _tmp204;
  const Scalar _tmp206 = std::pow(_tmp110, Scalar(-2));
  const Scalar _tmp207 = _tmp205 * _tmp206;
  const Scalar _tmp208 = _tmp151 * _tmp91;
  const Scalar _tmp209 = _tmp207 * _tmp208;
  const Scalar _tmp210 = Scalar(1.0) * _tmp90;
  const Scalar _tmp211 =
      -_tmp130 * _tmp187 + _tmp148 * _tmp191 - _tmp148 * _tmp209 + _tmp207 * _tmp210;
  const Scalar _tmp212 = std::pow(_tmp91, Scalar(-2));
  const Scalar _tmp213 = _tmp189 * _tmp212;
  const Scalar _tmp214 = _tmp213 * _tmp90;
  const Scalar _tmp215 = _tmp187 * _tmp92;
  const Scalar _tmp216 = _tmp214 * _tmp64 - _tmp215 * _tmp64;
  const Scalar _tmp217 = _tmp105 * _tmp36;
  const Scalar _tmp218 = _tmp113 * _tmp138;
  const Scalar _tmp219 = _tmp189 * _tmp218;
  const Scalar _tmp220 = _tmp32 / [&]() {
    const Scalar base = _tmp18;
    return base * base * base;
  }();
  const Scalar _tmp221 = _tmp175 * _tmp220;
  const Scalar _tmp222 = -_tmp181 * _tmp221 + _tmp183 + _tmp186 - _tmp220 * _tmp55 * _tmp84;
  const Scalar _tmp223 = -_tmp179 * _tmp221 + _tmp188 - _tmp222 * _tmp62;
  const Scalar _tmp224 = _tmp110 * _tmp213;
  const Scalar _tmp225 =
      _tmp139 * (-_tmp111 * _tmp223 + _tmp134 * _tmp203 + _tmp136 * _tmp224 - _tmp137 * _tmp205 +
                 _tmp192 - _tmp197 - _tmp199 - _tmp200 * _tmp221 + _tmp202);
  const Scalar _tmp226 = _tmp138 * _tmp91;
  const Scalar _tmp227 = _tmp207 * _tmp226;
  const Scalar _tmp228 = _tmp219 + _tmp223 + _tmp225 - _tmp227;
  const Scalar _tmp229 = _tmp141 * _tmp214 - _tmp141 * _tmp215 + _tmp152 * _tmp219 +
                         _tmp152 * _tmp225 - _tmp152 * _tmp227 - _tmp153 * _tmp228 + _tmp222;
  const Scalar _tmp230 = _tmp116 * _tmp90;
  const Scalar _tmp231 = _tmp112 * _tmp91;
  const Scalar _tmp232 = _tmp207 * _tmp231;
  const Scalar _tmp233 = _tmp114 * _tmp189;
  const Scalar _tmp234 = _tmp183 * _tmp56;
  const Scalar _tmp235 = _tmp178 * _tmp52;
  const Scalar _tmp236 = -_tmp106 * _tmp234 - _tmp107 * _tmp235 + Scalar(1.0) * _tmp180;
  const Scalar _tmp237 = _tmp108 * _tmp92;
  const Scalar _tmp238 = _tmp139 * (-_tmp104 * _tmp203 + _tmp108 * _tmp224 - _tmp111 * _tmp236 +
                                    Scalar(1.0) * _tmp201 - _tmp205 * _tmp237);
  const Scalar _tmp239 = -_tmp232 + _tmp233 + _tmp236 + _tmp238;
  const Scalar _tmp240 = -_tmp116 * _tmp215 + _tmp128 * _tmp183 - _tmp152 * _tmp232 +
                         _tmp152 * _tmp233 + _tmp152 * _tmp238 - _tmp153 * _tmp239 +
                         Scalar(1.0) * _tmp182 + _tmp213 * _tmp230;
  const Scalar _tmp241 = _tmp127 * _tmp98;
  const Scalar _tmp242 = _tmp47 / _tmp48;
  const Scalar _tmp243 = _tmp178 * _tmp242;
  const Scalar _tmp244 = _tmp184 * _tmp64;
  const Scalar _tmp245 = _tmp213 * _tmp73;
  const Scalar _tmp246 = _tmp35 * _tmp36;
  const Scalar _tmp247 = _tmp113 * _tmp73;
  const Scalar _tmp248 = _tmp177 * _tmp247;
  const Scalar _tmp249 = _tmp207 * _tmp74;
  const Scalar _tmp250 = Scalar(1.0) * _tmp73;
  const Scalar _tmp251 = _tmp132 * _tmp35;
  const Scalar _tmp252 = _tmp145 * _tmp98;
  const Scalar _tmp253 = _tmp213 * _tmp74;
  const Scalar _tmp254 = _tmp116 * _tmp253 - _tmp118 * _tmp177 - _tmp239 * _tmp93;
  const Scalar _tmp255 = _tmp126 * _tmp35;
  const Scalar _tmp256 = _tmp143 * _tmp242;
  const Scalar _tmp257 = _tmp141 * _tmp253 - _tmp142 * _tmp177 - _tmp177 - _tmp228 * _tmp93;
  const Scalar _tmp258 = _tmp144 * _tmp35;
  const Scalar _tmp259 = _tmp133 * _tmp98;
  const Scalar _tmp260 = _tmp97 * _tmp98;
  const Scalar _tmp261 =
      -_tmp127 * _tmp198 - _tmp133 * _tmp198 - _tmp145 * _tmp198 - _tmp198 * _tmp97 + _tmp241 -
      _tmp246 *
          (-_tmp177 * _tmp56 * _tmp96 + _tmp213 * _tmp244 + _tmp243 * _tmp94 - _tmp245 * _tmp64) -
      _tmp251 * (-_tmp128 * _tmp248 + _tmp128 * _tmp249 + _tmp130 * _tmp243 * _tmp74 -
                 _tmp207 * _tmp250) +
      _tmp252 -
      _tmp255 * (-_tmp116 * _tmp245 + _tmp117 * _tmp239 - _tmp119 * _tmp243 + _tmp254 * _tmp56) -
      _tmp258 * (_tmp117 * _tmp228 - _tmp141 * _tmp245 - _tmp178 * _tmp256 + _tmp257 * _tmp56) +
      _tmp259 + _tmp260;
  const Scalar _tmp262 = _tmp169 * _tmp173;
  const Scalar _tmp263 = _tmp174 * (_tmp147 * (_tmp155 * (-_tmp105 * _tmp240 - _tmp151 * _tmp232 +
                                                          _tmp151 * _tmp233 + _tmp151 * _tmp238) +
                                               _tmp161 * (-_tmp105 * _tmp229 + _tmp151 * _tmp219 +
                                                          _tmp151 * _tmp225 - _tmp151 * _tmp227) +
                                               _tmp164 * (-_tmp105 * _tmp211 + _tmp191 - _tmp209) -
                                               _tmp216 * _tmp217) -
                                    _tmp261 * _tmp262);
  const Scalar _tmp264 = Scalar(1.4083112389913199) * _tmp146;
  const Scalar _tmp265 = -_tmp30 + p_c(1, 0);
  const Scalar _tmp266 = -_tmp17 + p_c(0, 0);
  const Scalar _tmp267 =
      std::sqrt(Scalar(std::pow(_tmp265, Scalar(2)) + std::pow(_tmp266, Scalar(2))));
  const Scalar _tmp268 = -_tmp170 * _tmp264 - _tmp267;
  const Scalar _tmp269 = Scalar(0.71007031138673404) * _tmp147;
  const Scalar _tmp270 = _tmp268 * _tmp269;
  const Scalar _tmp271 = std::cosh(_tmp270);
  const Scalar _tmp272 = Scalar(1.0) / (_tmp267);
  const Scalar _tmp273 = Scalar(1.4083112389913199) * _tmp170;
  const Scalar _tmp274 = Scalar(0.71007031138673404) * _tmp173 * _tmp268;
  const Scalar _tmp275 = -Scalar(1.4083112389913199) * std::sinh(_tmp171) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp270);
  const Scalar _tmp276 = _tmp126 * _tmp59;
  const Scalar _tmp277 = _tmp144 * _tmp59;
  const Scalar _tmp278 = _tmp36 * _tmp59;
  const Scalar _tmp279 = _tmp132 * _tmp59;
  const Scalar _tmp280 = _tmp151 * _tmp168;
  const Scalar _tmp281 = _tmp154 * _tmp276 + _tmp157 * _tmp158 * _tmp59 + _tmp160 * _tmp277 +
                         _tmp163 * _tmp279 + _tmp166 * _tmp278 - _tmp167 * _tmp280;
  const Scalar _tmp282 = _tmp144 * _tmp55;
  const Scalar _tmp283 = _tmp104 * _tmp132;
  const Scalar _tmp284 = _tmp126 * _tmp55;
  const Scalar _tmp285 = _tmp36 * _tmp64;
  const Scalar _tmp286 = _tmp285 * _tmp93;
  const Scalar _tmp287 =
      _tmp119 * _tmp284 - _tmp129 * _tmp283 + _tmp143 * _tmp282 - _tmp286 * _tmp55;
  const Scalar _tmp288 = Scalar(1.0) / (_tmp287);
  const Scalar _tmp289 = std::asinh(_tmp281 * _tmp288);
  const Scalar _tmp290 = Scalar(1.0) * _tmp289;
  const Scalar _tmp291 = Scalar(1.0) * std::cosh(_tmp290);
  const Scalar _tmp292 = std::pow(_tmp287, Scalar(-2));
  const Scalar _tmp293 =
      std::pow(Scalar(std::pow(_tmp281, Scalar(2)) * _tmp292 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp294 = _tmp130 * _tmp132;
  const Scalar _tmp295 = _tmp143 * _tmp144;
  const Scalar _tmp296 = _tmp36 * _tmp95;
  const Scalar _tmp297 = _tmp296 * _tmp73;
  const Scalar _tmp298 = _tmp126 * _tmp52;
  const Scalar _tmp299 = _tmp213 * _tmp285;
  const Scalar _tmp300 = -_tmp119 * _tmp178 * _tmp298 - _tmp185 * _tmp297 + _tmp235 * _tmp286 +
                         _tmp235 * _tmp294 * _tmp74 - _tmp235 * _tmp295 - _tmp248 * _tmp283 +
                         _tmp249 * _tmp283 + _tmp254 * _tmp284 + _tmp257 * _tmp282 +
                         _tmp299 * _tmp86;
  const Scalar _tmp301 = _tmp281 * _tmp292;
  const Scalar _tmp302 =
      _tmp293 *
      (_tmp288 * (_tmp211 * _tmp279 + _tmp216 * _tmp278 + _tmp229 * _tmp277 + _tmp240 * _tmp276) -
       _tmp300 * _tmp301);
  const Scalar _tmp303 = Scalar(1.4083112389913199) * _tmp287;
  const Scalar _tmp304 = Scalar(1.4083112389913199) * _tmp289;
  const Scalar _tmp305 = Scalar(0.71007031138673404) * _tmp288;
  const Scalar _tmp306 =
      -_tmp289 * _tmp303 - std::sqrt(Scalar(std::pow(Scalar(-_tmp40 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp45 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp307 = Scalar(0.71007031138673404) * _tmp292 * _tmp306;
  const Scalar _tmp308 = _tmp305 * _tmp306;
  const Scalar _tmp309 = std::cosh(_tmp308);
  const Scalar _tmp310 = -Scalar(1.4083112389913199) * std::sinh(_tmp290) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp308);
  const Scalar _tmp311 = _tmp144 * _tmp92;
  const Scalar _tmp312 = _tmp116 * _tmp126;
  const Scalar _tmp313 = _tmp126 * _tmp92;
  const Scalar _tmp314 = _tmp141 * _tmp144;
  const Scalar _tmp315 = -_tmp164 * _tmp207 - _tmp213 * _tmp312 - _tmp213 * _tmp314 +
                         _tmp228 * _tmp311 + _tmp239 * _tmp313 - _tmp299;
  const Scalar _tmp316 = _tmp116 * _tmp313 + _tmp141 * _tmp311 + _tmp294 + _tmp296;
  const Scalar _tmp317 = Scalar(1.0) / (_tmp316);
  const Scalar _tmp318 = _tmp126 * _tmp150;
  const Scalar _tmp319 = _tmp144 * _tmp150;
  const Scalar _tmp320 = -_tmp115 * _tmp318 - _tmp132 * _tmp162 - _tmp140 * _tmp319 -
                         _tmp157 * _tmp159 + _tmp165 * _tmp36 + _tmp280;
  const Scalar _tmp321 = std::asinh(_tmp317 * _tmp320);
  const Scalar _tmp322 = Scalar(1.4083112389913199) * _tmp321;
  const Scalar _tmp323 = std::pow(_tmp316, Scalar(-2));
  const Scalar _tmp324 = _tmp320 * _tmp323;
  const Scalar _tmp325 =
      -_tmp315 * _tmp324 +
      _tmp317 * (-_tmp132 * _tmp191 + _tmp132 * _tmp209 - _tmp219 * _tmp319 - _tmp225 * _tmp319 +
                 _tmp227 * _tmp319 + _tmp232 * _tmp318 - _tmp233 * _tmp318 - _tmp238 * _tmp318);
  const Scalar _tmp326 =
      std::pow(Scalar(std::pow(_tmp320, Scalar(2)) * _tmp323 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp327 = Scalar(1.4083112389913199) * _tmp316;
  const Scalar _tmp328 = _tmp326 * _tmp327;
  const Scalar _tmp329 = Scalar(0.71007031138673404) * _tmp317;
  const Scalar _tmp330 =
      -_tmp321 * _tmp327 - std::sqrt(Scalar(std::pow(Scalar(-_tmp66 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp69 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp331 = Scalar(0.71007031138673404) * _tmp323 * _tmp330;
  const Scalar _tmp332 = _tmp329 * _tmp330;
  const Scalar _tmp333 = std::cosh(_tmp332);
  const Scalar _tmp334 = Scalar(1.0) * _tmp321;
  const Scalar _tmp335 = Scalar(1.0) * _tmp326 * std::cosh(_tmp334);
  const Scalar _tmp336 = -Scalar(1.4083112389913199) * std::sinh(_tmp332) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp334);
  const Scalar _tmp337 = _tmp175 * _tmp19;
  const Scalar _tmp338 = _tmp19 * _tmp55;
  const Scalar _tmp339 = _tmp338 * _tmp89;
  const Scalar _tmp340 = _tmp337 * _tmp74;
  const Scalar _tmp341 = -_tmp181 * _tmp340 - _tmp184 * _tmp87 + _tmp339 * _tmp73 + _tmp73 * _tmp87;
  const Scalar _tmp342 = _tmp179 * _tmp337;
  const Scalar _tmp343 = _tmp338 * _tmp85;
  const Scalar _tmp344 = -_tmp341 * _tmp62 - _tmp342 * _tmp74 + _tmp343 * _tmp73;
  const Scalar _tmp345 = _tmp212 * _tmp344;
  const Scalar _tmp346 = _tmp345 * _tmp73;
  const Scalar _tmp347 = _tmp35 * (-_tmp100 - _tmp194 * _tmp196 + _tmp195 * _tmp32);
  const Scalar _tmp348 = -_tmp202 * _tmp53 + _tmp347 * _tmp52;
  const Scalar _tmp349 = _tmp109 * _tmp19;
  const Scalar _tmp350 = -_tmp200 * _tmp340 - _tmp204 * _tmp51 + _tmp347 * _tmp73 -
                         _tmp348 * _tmp86 + _tmp349 * _tmp73;
  const Scalar _tmp351 = _tmp206 * _tmp350;
  const Scalar _tmp352 = _tmp351 * _tmp74;
  const Scalar _tmp353 = _tmp19 * _tmp247;
  const Scalar _tmp354 = _tmp226 * _tmp351;
  const Scalar _tmp355 = _tmp218 * _tmp344;
  const Scalar _tmp356 = _tmp182 + _tmp234 - _tmp339 - _tmp87;
  const Scalar _tmp357 = _tmp180 - _tmp343 - _tmp356 * _tmp62;
  const Scalar _tmp358 = _tmp110 * _tmp345;
  const Scalar _tmp359 =
      _tmp139 * (-_tmp111 * _tmp357 + _tmp134 * _tmp348 + _tmp136 * _tmp358 - _tmp137 * _tmp350 +
                 _tmp201 + _tmp202 * _tmp51 - _tmp347 - _tmp349);
  const Scalar _tmp360 = -_tmp354 + _tmp355 + _tmp357 + _tmp359;
  const Scalar _tmp361 = _tmp345 * _tmp74;
  const Scalar _tmp362 = _tmp141 * _tmp361 + _tmp142 * _tmp19 + _tmp19 - _tmp360 * _tmp93;
  const Scalar _tmp363 = Scalar(1.0) * _tmp337;
  const Scalar _tmp364 = _tmp337 * _tmp52;
  const Scalar _tmp365 = _tmp106 * _tmp56 * _tmp87 + _tmp107 * _tmp364 - Scalar(1.0) * _tmp342;
  const Scalar _tmp366 = _tmp139 * (-_tmp104 * _tmp348 + _tmp108 * _tmp358 - _tmp111 * _tmp365 -
                                    _tmp200 * _tmp363 - _tmp237 * _tmp350);
  const Scalar _tmp367 = _tmp114 * _tmp344;
  const Scalar _tmp368 = _tmp231 * _tmp351;
  const Scalar _tmp369 = _tmp365 + _tmp366 + _tmp367 - _tmp368;
  const Scalar _tmp370 = _tmp119 * _tmp337;
  const Scalar _tmp371 = _tmp116 * _tmp361 + _tmp118 * _tmp19 - _tmp369 * _tmp93;
  const Scalar _tmp372 =
      _tmp241 * _tmp51 -
      _tmp246 * (-_tmp242 * _tmp337 * _tmp94 + _tmp244 * _tmp345 + _tmp338 * _tmp52 * _tmp96 -
                 _tmp346 * _tmp64) -
      _tmp251 * (_tmp128 * _tmp352 + _tmp128 * _tmp353 - _tmp130 * _tmp242 * _tmp340 -
                 _tmp250 * _tmp351) +
      _tmp252 * _tmp51 -
      _tmp255 * (-_tmp116 * _tmp346 + _tmp117 * _tmp369 + _tmp242 * _tmp370 + _tmp371 * _tmp56) -
      _tmp258 * (_tmp117 * _tmp360 - _tmp141 * _tmp346 + _tmp256 * _tmp337 + _tmp362 * _tmp56) +
      _tmp259 * _tmp51 + _tmp260 * _tmp51;
  const Scalar _tmp373 = _tmp345 * _tmp90;
  const Scalar _tmp374 = -_tmp341 * _tmp95 + _tmp373 * _tmp64;
  const Scalar _tmp375 = _tmp208 * _tmp351;
  const Scalar _tmp376 = _tmp190 * _tmp344;
  const Scalar _tmp377 =
      -_tmp130 * _tmp341 - _tmp148 * _tmp375 + _tmp148 * _tmp376 + _tmp210 * _tmp351;
  const Scalar _tmp378 = _tmp341 * _tmp92;
  const Scalar _tmp379 = -_tmp116 * _tmp378 - _tmp128 * _tmp87 + _tmp152 * _tmp366 +
                         _tmp152 * _tmp367 - _tmp152 * _tmp368 - _tmp153 * _tmp369 -
                         _tmp181 * _tmp363 + _tmp230 * _tmp345;
  const Scalar _tmp380 = _tmp141 * _tmp373 - _tmp141 * _tmp378 - _tmp152 * _tmp354 +
                         _tmp152 * _tmp355 + _tmp152 * _tmp359 - _tmp153 * _tmp360 + _tmp356;
  const Scalar _tmp381 = _tmp174 * (_tmp147 * (_tmp155 * (-_tmp105 * _tmp379 + _tmp151 * _tmp366 +
                                                          _tmp151 * _tmp367 - _tmp151 * _tmp368) +
                                               _tmp161 * (-_tmp105 * _tmp380 - _tmp151 * _tmp354 +
                                                          _tmp151 * _tmp355 + _tmp151 * _tmp359) +
                                               _tmp164 * (-_tmp105 * _tmp377 - _tmp375 + _tmp376) -
                                               _tmp217 * _tmp374) -
                                    _tmp262 * _tmp372);
  const Scalar _tmp382 = _tmp285 * _tmp345;
  const Scalar _tmp383 = _tmp282 * _tmp362 + _tmp283 * _tmp352 + _tmp283 * _tmp353 +
                         _tmp284 * _tmp371 - _tmp286 * _tmp364 - _tmp294 * _tmp340 * _tmp52 +
                         _tmp295 * _tmp364 + _tmp297 * _tmp338 + _tmp298 * _tmp370 +
                         _tmp382 * _tmp86;
  const Scalar _tmp384 =
      _tmp293 *
      (_tmp288 * (_tmp276 * _tmp379 + _tmp277 * _tmp380 + _tmp278 * _tmp374 + _tmp279 * _tmp377) -
       _tmp301 * _tmp383);
  const Scalar _tmp385 = -_tmp164 * _tmp351 + _tmp311 * _tmp360 - _tmp312 * _tmp345 +
                         _tmp313 * _tmp369 - _tmp314 * _tmp345 - _tmp382;
  const Scalar _tmp386 =
      _tmp317 * (_tmp132 * _tmp375 - _tmp132 * _tmp376 - _tmp318 * _tmp366 - _tmp318 * _tmp367 +
                 _tmp318 * _tmp368 + _tmp319 * _tmp354 - _tmp319 * _tmp355 - _tmp319 * _tmp359) -
      _tmp324 * _tmp385;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp261 * _tmp275 +
      _tmp264 * (-_tmp172 * _tmp263 -
                 _tmp271 * (-_tmp261 * _tmp274 + _tmp269 * (-_tmp261 * _tmp273 - _tmp263 * _tmp264 -
                                                            _tmp266 * _tmp272)));
  _res(2, 0) =
      _tmp300 * _tmp310 +
      _tmp303 *
          (-_tmp291 * _tmp302 -
           _tmp309 * (-_tmp300 * _tmp307 + _tmp305 * (-_tmp300 * _tmp304 - _tmp302 * _tmp303)));
  _res(3, 0) =
      _tmp315 * _tmp336 +
      _tmp327 *
          (-_tmp325 * _tmp335 -
           _tmp333 * (-_tmp315 * _tmp331 + _tmp329 * (-_tmp315 * _tmp322 - _tmp325 * _tmp328)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp264 * (-_tmp172 * _tmp381 -
                 _tmp271 * (_tmp269 * (-_tmp264 * _tmp381 - _tmp265 * _tmp272 - _tmp273 * _tmp372) -
                            _tmp274 * _tmp372)) +
      _tmp275 * _tmp372;
  _res(2, 1) =
      _tmp303 *
          (-_tmp291 * _tmp384 -
           _tmp309 * (_tmp305 * (-_tmp303 * _tmp384 - _tmp304 * _tmp383) - _tmp307 * _tmp383)) +
      _tmp310 * _tmp383;
  _res(3, 1) =
      _tmp327 *
          (-_tmp333 * (_tmp329 * (-_tmp322 * _tmp385 - _tmp328 * _tmp386) - _tmp331 * _tmp385) -
           _tmp335 * _tmp386) +
      _tmp336 * _tmp385;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
