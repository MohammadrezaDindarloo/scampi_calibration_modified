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
 * Symbolic function: IK_residual_func_cost4_wrt_pb_Nl20
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPbNl20(
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

  // Intermediate terms (395)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp2;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp0 * _tmp5;
  const Scalar _tmp13 = _tmp2 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = _tmp17 - p_c(0, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp21 = _tmp0 * _tmp6;
  const Scalar _tmp22 = _tmp5 * _tmp8;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = _tmp28 - p_c(1, 0);
  const Scalar _tmp30 = std::pow(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp29, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp18 * _tmp30;
  const Scalar _tmp32 = _tmp11 - _tmp14;
  const Scalar _tmp33 = _tmp32 + _tmp4;
  const Scalar _tmp34 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp35 = _tmp34 - p_b(0, 0);
  const Scalar _tmp36 = std::pow(_tmp35, Scalar(2));
  const Scalar _tmp37 = Scalar(1.0) / (_tmp36);
  const Scalar _tmp38 = -_tmp20;
  const Scalar _tmp39 = _tmp26 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = _tmp40 - p_b(1, 0);
  const Scalar _tmp42 = _tmp37 * _tmp41;
  const Scalar _tmp43 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp44 = -_tmp43;
  const Scalar _tmp45 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp19 + Scalar(-0.010999999999999999);
  const Scalar _tmp46 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp47 = _tmp45 - _tmp46;
  const Scalar _tmp48 = _tmp44 + _tmp47;
  const Scalar _tmp49 = -_tmp4;
  const Scalar _tmp50 = _tmp32 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - p_a(0, 0);
  const Scalar _tmp53 = std::pow(_tmp52, Scalar(2));
  const Scalar _tmp54 = _tmp24 - _tmp25;
  const Scalar _tmp55 = _tmp38 + _tmp54;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 - p_a(1, 0);
  const Scalar _tmp58 = _tmp53 + std::pow(_tmp57, Scalar(2));
  const Scalar _tmp59 = std::pow(_tmp58, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp52 * _tmp59;
  const Scalar _tmp61 = _tmp43 + _tmp47;
  const Scalar _tmp62 = _tmp60 * _tmp61;
  const Scalar _tmp63 = -_tmp48 * _tmp60 + _tmp62;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp35);
  const Scalar _tmp65 = _tmp41 * _tmp64;
  const Scalar _tmp66 = _tmp57 * _tmp59;
  const Scalar _tmp67 = _tmp60 * _tmp65 - _tmp66;
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp63 * _tmp68;
  const Scalar _tmp70 = _tmp42 * _tmp69;
  const Scalar _tmp71 = _tmp29 * _tmp30;
  const Scalar _tmp72 = _tmp31 * _tmp65 - _tmp71;
  const Scalar _tmp73 = _tmp68 * _tmp72;
  const Scalar _tmp74 = _tmp42 * _tmp62;
  const Scalar _tmp75 = _tmp61 * _tmp64;
  const Scalar _tmp76 = _tmp41 * _tmp75;
  const Scalar _tmp77 = _tmp48 * _tmp66 - _tmp60 * _tmp76;
  const Scalar _tmp78 = _tmp42 * _tmp68;
  const Scalar _tmp79 = _tmp77 * _tmp78;
  const Scalar _tmp80 = std::pow(_tmp67, Scalar(-2));
  const Scalar _tmp81 = _tmp42 * _tmp80;
  const Scalar _tmp82 = _tmp60 * _tmp77;
  const Scalar _tmp83 = _tmp81 * _tmp82;
  const Scalar _tmp84 = _tmp31 * _tmp61;
  const Scalar _tmp85 = -_tmp31 * _tmp79 - _tmp42 * _tmp84 + _tmp72 * _tmp83 + _tmp73 * _tmp74;
  const Scalar _tmp86 = Scalar(1.0) * _tmp39;
  const Scalar _tmp87 = -_tmp86;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp55 + _tmp87);
  const Scalar _tmp89 = Scalar(1.0) * _tmp33;
  const Scalar _tmp90 = -_tmp50 + _tmp89;
  const Scalar _tmp91 = _tmp88 * _tmp90;
  const Scalar _tmp92 = _tmp60 * _tmp63;
  const Scalar _tmp93 = _tmp81 * _tmp92;
  const Scalar _tmp94 = -_tmp31 * _tmp70 + _tmp72 * _tmp93 - _tmp85 * _tmp91;
  const Scalar _tmp95 = std::pow(_tmp41, Scalar(2));
  const Scalar _tmp96 = _tmp36 + _tmp95;
  const Scalar _tmp97 = std::sqrt(_tmp96);
  const Scalar _tmp98 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp99 = _tmp33 * _tmp98;
  const Scalar _tmp100 = _tmp39 * _tmp98;
  const Scalar _tmp101 = -_tmp100 * _tmp35 + _tmp41 * _tmp99;
  const Scalar _tmp102 = _tmp101 * _tmp97;
  const Scalar _tmp103 = _tmp102 * _tmp64;
  const Scalar _tmp104 = _tmp103 * _tmp60 - _tmp50 * _tmp66 + _tmp55 * _tmp60;
  const Scalar _tmp105 = _tmp103 * _tmp31 - _tmp104 * _tmp73 - _tmp16 * _tmp71 + _tmp27 * _tmp31;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = _tmp65 * _tmp68;
  const Scalar _tmp108 = _tmp107 * _tmp77 + _tmp76;
  const Scalar _tmp109 = -_tmp108 * _tmp91 - _tmp61 + _tmp65 * _tmp69;
  const Scalar _tmp110 = _tmp45 + _tmp46;
  const Scalar _tmp111 = _tmp110 + _tmp43;
  const Scalar _tmp112 = _tmp111 * _tmp71 - _tmp31 * _tmp76 - _tmp73 * _tmp77;
  const Scalar _tmp113 = -_tmp111 * _tmp31 - _tmp112 * _tmp91 - _tmp69 * _tmp72 + _tmp84;
  const Scalar _tmp114 = Scalar(1.0) / (_tmp113);
  const Scalar _tmp115 = _tmp105 * _tmp114;
  const Scalar _tmp116 = -_tmp103 + _tmp104 * _tmp107 - _tmp109 * _tmp115;
  const Scalar _tmp117 = _tmp106 * _tmp116;
  const Scalar _tmp118 = _tmp117 * _tmp94;
  const Scalar _tmp119 = _tmp104 * _tmp78;
  const Scalar _tmp120 = _tmp102 * _tmp37;
  const Scalar _tmp121 = _tmp95 / [&]() {
    const Scalar base = _tmp35;
    return base * base * base;
  }();
  const Scalar _tmp122 = _tmp121 * _tmp80;
  const Scalar _tmp123 = _tmp104 * _tmp60;
  const Scalar _tmp124 = std::pow(_tmp96, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp125 = _tmp124 * _tmp39;
  const Scalar _tmp126 = _tmp124 * _tmp33;
  const Scalar _tmp127 = _tmp35 * _tmp41;
  const Scalar _tmp128 = _tmp64 * _tmp97;
  const Scalar _tmp129 = _tmp128 * (_tmp100 - _tmp125 * _tmp36 + _tmp126 * _tmp127);
  const Scalar _tmp130 = std::pow(_tmp113, Scalar(-2));
  const Scalar _tmp131 = _tmp130 * _tmp94;
  const Scalar _tmp132 = _tmp105 * _tmp131;
  const Scalar _tmp133 = _tmp101 * _tmp98;
  const Scalar _tmp134 = _tmp133 * _tmp60;
  const Scalar _tmp135 = _tmp120 * _tmp60 + _tmp129 * _tmp60 - _tmp134;
  const Scalar _tmp136 = _tmp123 * _tmp81;
  const Scalar _tmp137 = _tmp133 * _tmp31;
  const Scalar _tmp138 = -_tmp119 * _tmp31 + _tmp120 * _tmp31 + _tmp129 * _tmp31 -
                         _tmp135 * _tmp73 + _tmp136 * _tmp72 - _tmp137;
  const Scalar _tmp139 = _tmp114 * _tmp138;
  const Scalar _tmp140 = -_tmp121 * _tmp62 * _tmp68 - _tmp122 * _tmp82 + _tmp42 * _tmp61 + _tmp79;
  const Scalar _tmp141 = -_tmp122 * _tmp92 - _tmp140 * _tmp91 + _tmp70;
  const Scalar _tmp142 = _tmp106 * _tmp113;
  const Scalar _tmp143 =
      _tmp142 * (_tmp107 * _tmp135 + _tmp109 * _tmp132 - _tmp109 * _tmp139 - _tmp115 * _tmp141 +
                 _tmp119 - _tmp120 - _tmp122 * _tmp123 - _tmp129 + _tmp133);
  const Scalar _tmp144 = std::pow(_tmp105, Scalar(-2));
  const Scalar _tmp145 = _tmp113 * _tmp144;
  const Scalar _tmp146 = _tmp138 * _tmp145;
  const Scalar _tmp147 = _tmp116 * _tmp146;
  const Scalar _tmp148 = _tmp118 + _tmp141 + _tmp143 - _tmp147;
  const Scalar _tmp149 = _tmp114 * _tmp31;
  const Scalar _tmp150 = _tmp116 * _tmp142;
  const Scalar _tmp151 = _tmp109 + _tmp150;
  const Scalar _tmp152 = _tmp114 * _tmp72;
  const Scalar _tmp153 = -_tmp151 * _tmp152 - _tmp65;
  const Scalar _tmp154 = _tmp53 / _tmp58;
  const Scalar _tmp155 = _tmp154 * _tmp81;
  const Scalar _tmp156 = _tmp131 * _tmp72;
  const Scalar _tmp157 = _tmp149 * _tmp151;
  const Scalar _tmp158 = -_tmp148 * _tmp152 + _tmp151 * _tmp156 - _tmp157 * _tmp42 - _tmp42;
  const Scalar _tmp159 = _tmp60 * _tmp68;
  const Scalar _tmp160 = _tmp131 * _tmp31;
  const Scalar _tmp161 = _tmp15 + _tmp49;
  const Scalar _tmp162 = _tmp161 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp163 = _tmp20 + _tmp54;
  const Scalar _tmp164 = _tmp163 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp165 =
      std::pow(Scalar(std::pow(_tmp162, Scalar(2)) + std::pow(_tmp164, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp166 = _tmp162 * _tmp165;
  const Scalar _tmp167 = _tmp166 * fh1;
  const Scalar _tmp168 = _tmp128 * _tmp167;
  const Scalar _tmp169 = Scalar(1.0) * _tmp68;
  const Scalar _tmp170 = _tmp169 * _tmp72;
  const Scalar _tmp171 = _tmp144 * _tmp170;
  const Scalar _tmp172 = _tmp138 * _tmp171;
  const Scalar _tmp173 = Scalar(1.0) * _tmp144;
  const Scalar _tmp174 = _tmp173 * _tmp31;
  const Scalar _tmp175 = Scalar(1.0) * _tmp106;
  const Scalar _tmp176 = _tmp175 * _tmp72;
  const Scalar _tmp177 = _tmp169 * _tmp60;
  const Scalar _tmp178 = _tmp106 * _tmp31;
  const Scalar _tmp179 = _tmp178 * _tmp42;
  const Scalar _tmp180 = _tmp164 * _tmp165;
  const Scalar _tmp181 = fh1 * (_tmp161 * _tmp180 - _tmp163 * _tmp166);
  const Scalar _tmp182 = _tmp128 * _tmp181;
  const Scalar _tmp183 = _tmp37 * _tmp97;
  const Scalar _tmp184 = Scalar(1.0) * _tmp88;
  const Scalar _tmp185 = _tmp184 * _tmp90;
  const Scalar _tmp186 = _tmp185 * _tmp77;
  const Scalar _tmp187 = _tmp186 * _tmp68 - Scalar(1.0) * _tmp69;
  const Scalar _tmp188 = -_tmp104 * _tmp169 - _tmp115 * _tmp187;
  const Scalar _tmp189 = _tmp142 * _tmp188;
  const Scalar _tmp190 = _tmp187 + _tmp189;
  const Scalar _tmp191 = _tmp149 * _tmp190;
  const Scalar _tmp192 = -_tmp152 * _tmp190 + Scalar(1.0);
  const Scalar _tmp193 = _tmp180 * fh1;
  const Scalar _tmp194 = _tmp193 * (_tmp159 * _tmp192 + _tmp191);
  const Scalar _tmp195 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp196 = _tmp86 * _tmp91 + _tmp89;
  const Scalar _tmp197 = 0;
  const Scalar _tmp198 = _tmp60 * _tmp73;
  const Scalar _tmp199 = _tmp197 * _tmp198;
  const Scalar _tmp200 = _tmp149 * _tmp197;
  const Scalar _tmp201 = _tmp195 * (-_tmp114 * _tmp199 + _tmp200);
  const Scalar _tmp202 = _tmp201 * _tmp98;
  const Scalar _tmp203 = _tmp106 * _tmp170;
  const Scalar _tmp204 = _tmp181 * (_tmp175 * _tmp31 - _tmp203 * _tmp60);
  const Scalar _tmp205 = _tmp204 * _tmp98;
  const Scalar _tmp206 = _tmp152 * _tmp197;
  const Scalar _tmp207 = _tmp128 * _tmp195;
  const Scalar _tmp208 = _tmp194 * _tmp98;
  const Scalar _tmp209 = _tmp167 * (_tmp153 * _tmp159 + _tmp157 + Scalar(1.0));
  const Scalar _tmp210 = _tmp209 * _tmp98;
  const Scalar _tmp211 = _tmp106 * _tmp188;
  const Scalar _tmp212 = _tmp211 * _tmp94;
  const Scalar _tmp213 = _tmp62 * _tmp78;
  const Scalar _tmp214 = _tmp60 * _tmp81;
  const Scalar _tmp215 = -_tmp185 * _tmp213 - _tmp186 * _tmp214 + Scalar(1.0) * _tmp93;
  const Scalar _tmp216 = _tmp142 * (-_tmp115 * _tmp215 + _tmp132 * _tmp187 - _tmp135 * _tmp169 +
                                    Scalar(1.0) * _tmp136 - _tmp139 * _tmp187);
  const Scalar _tmp217 = _tmp146 * _tmp188;
  const Scalar _tmp218 = _tmp212 + _tmp215 + _tmp216 - _tmp217;
  const Scalar _tmp219 = -_tmp152 * _tmp218 + _tmp156 * _tmp190 - _tmp191 * _tmp42;
  const Scalar _tmp220 = _tmp154 * _tmp192;
  const Scalar _tmp221 = _tmp128 * _tmp193;
  const Scalar _tmp222 =
      -_tmp168 * (_tmp148 * _tmp149 - _tmp151 * _tmp160 - _tmp153 * _tmp155 + _tmp158 * _tmp159) -
      _tmp182 * (-_tmp138 * _tmp174 + _tmp155 * _tmp176 + _tmp172 * _tmp60 - _tmp177 * _tmp179) -
      _tmp183 * _tmp194 - _tmp183 * _tmp201 - _tmp183 * _tmp204 - _tmp183 * _tmp209 + _tmp202 +
      _tmp205 -
      _tmp207 *
          (_tmp131 * _tmp199 + _tmp155 * _tmp206 - _tmp159 * _tmp200 * _tmp42 - _tmp160 * _tmp197) +
      _tmp208 + _tmp210 -
      _tmp221 * (_tmp149 * _tmp218 + _tmp159 * _tmp219 - _tmp160 * _tmp190 - _tmp220 * _tmp81);
  const Scalar _tmp223 =
      -_tmp128 * _tmp194 - _tmp128 * _tmp201 - _tmp128 * _tmp204 - _tmp128 * _tmp209;
  const Scalar _tmp224 = std::pow(_tmp223, Scalar(-2));
  const Scalar _tmp225 = _tmp27 + _tmp87;
  const Scalar _tmp226 = _tmp225 * _tmp91;
  const Scalar _tmp227 = Scalar(1.0) / (-_tmp16 - _tmp226 + _tmp89);
  const Scalar _tmp228 = Scalar(1.0) * _tmp227;
  const Scalar _tmp229 = _tmp112 * _tmp114;
  const Scalar _tmp230 = _tmp225 * _tmp227;
  const Scalar _tmp231 = -_tmp169 * _tmp77 + _tmp189 * _tmp230 - _tmp190 * _tmp229;
  const Scalar _tmp232 = Scalar(1.0) * _tmp193;
  const Scalar _tmp233 = _tmp225 * _tmp228;
  const Scalar _tmp234 = fh1 * (_tmp110 + _tmp44);
  const Scalar _tmp235 = Scalar(40.024799999999999) * _tmp10 + _tmp161 * fv1 + _tmp166 * _tmp234;
  const Scalar _tmp236 = _tmp108 + _tmp150 * _tmp230 - _tmp151 * _tmp229;
  const Scalar _tmp237 = Scalar(1.0) * _tmp167;
  const Scalar _tmp238 = -_tmp163 * fv1 - _tmp180 * _tmp234 - Scalar(40.024799999999999) * _tmp23;
  const Scalar _tmp239 = _tmp228 * _tmp91;
  const Scalar _tmp240 = _tmp226 * _tmp228 + Scalar(1.0);
  const Scalar _tmp241 = _tmp196 * _tmp227;
  const Scalar _tmp242 = -_tmp197 * _tmp229 - _tmp225 * _tmp241 + _tmp87;
  const Scalar _tmp243 = _tmp142 * _tmp228;
  const Scalar _tmp244 = -_tmp112 * _tmp175 + _tmp142 * _tmp233;
  const Scalar _tmp245 = Scalar(1.0) * _tmp181;
  const Scalar _tmp246 =
      Scalar(1.0) * _tmp195 * (-_tmp184 * _tmp242 - _tmp196 * _tmp228 + Scalar(1.0)) +
      _tmp232 * (-_tmp184 * _tmp231 + _tmp189 * _tmp228) +
      Scalar(1.0) * _tmp235 * (-_tmp228 + _tmp233 * _tmp88) +
      _tmp237 * (_tmp150 * _tmp228 - _tmp184 * _tmp236) +
      Scalar(1.0) * _tmp238 * (-_tmp184 * _tmp240 + _tmp239) +
      _tmp245 * (-_tmp184 * _tmp244 + _tmp243);
  const Scalar _tmp247 = _tmp224 * _tmp246;
  const Scalar _tmp248 = Scalar(1.0) / (_tmp223);
  const Scalar _tmp249 = _tmp112 * _tmp190;
  const Scalar _tmp250 = _tmp114 * _tmp85;
  const Scalar _tmp251 = _tmp131 * _tmp249 + _tmp169 * _tmp74 - _tmp190 * _tmp250 +
                         _tmp212 * _tmp230 + _tmp216 * _tmp230 - _tmp217 * _tmp230 -
                         _tmp218 * _tmp229 + Scalar(1.0) * _tmp83;
  const Scalar _tmp252 = _tmp112 * _tmp151;
  const Scalar _tmp253 = _tmp118 * _tmp230 + _tmp131 * _tmp252 + _tmp140 + _tmp143 * _tmp230 -
                         _tmp147 * _tmp230 - _tmp148 * _tmp229 - _tmp151 * _tmp250;
  const Scalar _tmp254 = _tmp146 * _tmp228;
  const Scalar _tmp255 = _tmp106 * _tmp228;
  const Scalar _tmp256 = _tmp255 * _tmp94;
  const Scalar _tmp257 = _tmp112 * _tmp173;
  const Scalar _tmp258 =
      _tmp138 * _tmp257 - _tmp146 * _tmp233 - _tmp175 * _tmp85 + _tmp225 * _tmp256;
  const Scalar _tmp259 = _tmp112 * _tmp197;
  const Scalar _tmp260 = _tmp131 * _tmp259 - _tmp197 * _tmp250;
  const Scalar _tmp261 = _tmp184 * _tmp195;
  const Scalar _tmp262 =
      std::pow(Scalar(_tmp224 * std::pow(_tmp246, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp263 = _tmp262 * (-_tmp222 * _tmp247 +
                                    _tmp248 * (_tmp232 * (-_tmp184 * _tmp251 + _tmp212 * _tmp228 +
                                                          _tmp216 * _tmp228 - _tmp217 * _tmp228) +
                                               _tmp237 * (_tmp118 * _tmp228 + _tmp143 * _tmp228 -
                                                          _tmp147 * _tmp228 - _tmp184 * _tmp253) +
                                               _tmp245 * (-_tmp184 * _tmp258 - _tmp254 + _tmp256) -
                                               _tmp260 * _tmp261));
  const Scalar _tmp264 = std::asinh(_tmp246 * _tmp248);
  const Scalar _tmp265 = Scalar(1.0) * _tmp264;
  const Scalar _tmp266 = Scalar(1.0) * std::cosh(_tmp265);
  const Scalar _tmp267 = -_tmp40 + p_b(1, 0);
  const Scalar _tmp268 = -_tmp34 + p_b(0, 0);
  const Scalar _tmp269 =
      std::sqrt(Scalar(std::pow(_tmp267, Scalar(2)) + std::pow(_tmp268, Scalar(2))));
  const Scalar _tmp270 = Scalar(1.4083112389913199) * _tmp223;
  const Scalar _tmp271 = -_tmp264 * _tmp270 - _tmp269;
  const Scalar _tmp272 = Scalar(0.71007031138673404) * _tmp248;
  const Scalar _tmp273 = _tmp271 * _tmp272;
  const Scalar _tmp274 = std::cosh(_tmp273);
  const Scalar _tmp275 = Scalar(0.71007031138673404) * _tmp224 * _tmp271;
  const Scalar _tmp276 = Scalar(1.0) / (_tmp269);
  const Scalar _tmp277 = Scalar(1.4083112389913199) * _tmp222;
  const Scalar _tmp278 = -std::sinh(_tmp265) - std::sinh(_tmp273);
  const Scalar _tmp279 = _tmp175 * _tmp181;
  const Scalar _tmp280 = _tmp214 * _tmp72;
  const Scalar _tmp281 = _tmp193 * _tmp68;
  const Scalar _tmp282 = _tmp167 * _tmp60;
  const Scalar _tmp283 = _tmp195 * _tmp197;
  const Scalar _tmp284 = _tmp131 * _tmp283;
  const Scalar _tmp285 = _tmp169 * _tmp181;
  const Scalar _tmp286 = _tmp114 * _tmp283;
  const Scalar _tmp287 = _tmp286 * _tmp31;
  const Scalar _tmp288 = _tmp192 * _tmp193;
  const Scalar _tmp289 = _tmp167 * _tmp68;
  const Scalar _tmp290 = -_tmp153 * _tmp282 * _tmp81 + _tmp158 * _tmp289 + _tmp172 * _tmp181 -
                         _tmp179 * _tmp285 - _tmp214 * _tmp288 + _tmp219 * _tmp281 +
                         _tmp279 * _tmp280 + _tmp280 * _tmp286 + _tmp284 * _tmp73 -
                         _tmp287 * _tmp78;
  const Scalar _tmp291 = _tmp195 * _tmp88;
  const Scalar _tmp292 = _tmp181 * _tmp88;
  const Scalar _tmp293 = _tmp228 * _tmp235;
  const Scalar _tmp294 = _tmp167 * _tmp88;
  const Scalar _tmp295 = _tmp193 * _tmp88;
  const Scalar _tmp296 = -_tmp225 * _tmp293 * _tmp88 + _tmp231 * _tmp295 + _tmp236 * _tmp294 +
                         _tmp238 * _tmp240 * _tmp88 + _tmp242 * _tmp291 + _tmp244 * _tmp292;
  const Scalar _tmp297 =
      _tmp153 * _tmp289 - _tmp181 * _tmp203 + _tmp192 * _tmp281 - _tmp286 * _tmp73;
  const Scalar _tmp298 = Scalar(1.0) / (_tmp297);
  const Scalar _tmp299 = std::asinh(_tmp296 * _tmp298);
  const Scalar _tmp300 = Scalar(1.0) * _tmp299;
  const Scalar _tmp301 = Scalar(1.4083112389913199) * _tmp297;
  const Scalar _tmp302 =
      -_tmp299 * _tmp301 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp56 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp303 = Scalar(0.71007031138673404) * _tmp298;
  const Scalar _tmp304 = _tmp302 * _tmp303;
  const Scalar _tmp305 = -Scalar(1.4083112389913199) * std::sinh(_tmp300) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp304);
  const Scalar _tmp306 = std::pow(_tmp297, Scalar(-2));
  const Scalar _tmp307 = _tmp296 * _tmp306;
  const Scalar _tmp308 = -_tmp290 * _tmp307 + _tmp298 * (_tmp251 * _tmp295 + _tmp253 * _tmp294 +
                                                         _tmp258 * _tmp292 + _tmp260 * _tmp291);
  const Scalar _tmp309 =
      std::pow(Scalar(std::pow(_tmp296, Scalar(2)) * _tmp306 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp310 = Scalar(1.0) * _tmp309 * std::cosh(_tmp300);
  const Scalar _tmp311 = Scalar(0.71007031138673404) * _tmp302 * _tmp306;
  const Scalar _tmp312 = _tmp301 * _tmp309;
  const Scalar _tmp313 = Scalar(1.4083112389913199) * _tmp299;
  const Scalar _tmp314 = std::cosh(_tmp304);
  const Scalar _tmp315 = _tmp193 * _tmp227;
  const Scalar _tmp316 = _tmp167 * _tmp227;
  const Scalar _tmp317 = -_tmp150 * _tmp316 - _tmp181 * _tmp243 - _tmp189 * _tmp315 +
                         _tmp195 * _tmp241 - _tmp238 * _tmp239 + _tmp293;
  const Scalar _tmp318 = _tmp114 * _tmp193;
  const Scalar _tmp319 = _tmp114 * _tmp167;
  const Scalar _tmp320 = _tmp151 * _tmp319 + _tmp190 * _tmp318 + _tmp279 + _tmp286;
  const Scalar _tmp321 = Scalar(1.0) / (_tmp320);
  const Scalar _tmp322 = std::asinh(_tmp317 * _tmp321);
  const Scalar _tmp323 = Scalar(1.0) * _tmp322;
  const Scalar _tmp324 = Scalar(1.4083112389913199) * _tmp320;
  const Scalar _tmp325 =
      -_tmp322 * _tmp324 - std::sqrt(Scalar(std::pow(Scalar(-_tmp17 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp28 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp326 = Scalar(0.71007031138673404) * _tmp321;
  const Scalar _tmp327 = _tmp325 * _tmp326;
  const Scalar _tmp328 = -std::sinh(_tmp323) - std::sinh(_tmp327);
  const Scalar _tmp329 = _tmp190 * _tmp193;
  const Scalar _tmp330 = _tmp151 * _tmp167;
  const Scalar _tmp331 = _tmp144 * _tmp245;
  const Scalar _tmp332 = -_tmp131 * _tmp329 - _tmp131 * _tmp330 - _tmp138 * _tmp331 +
                         _tmp148 * _tmp319 + _tmp218 * _tmp318 - _tmp284;
  const Scalar _tmp333 = Scalar(1.4083112389913199) * _tmp332;
  const Scalar _tmp334 = Scalar(1.0) * std::cosh(_tmp323);
  const Scalar _tmp335 = std::pow(_tmp320, Scalar(-2));
  const Scalar _tmp336 =
      std::pow(Scalar(std::pow(_tmp317, Scalar(2)) * _tmp335 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp337 = _tmp317 * _tmp335;
  const Scalar _tmp338 =
      _tmp336 *
      (_tmp321 * (-_tmp118 * _tmp316 - _tmp143 * _tmp316 + _tmp147 * _tmp316 + _tmp181 * _tmp254 -
                  _tmp181 * _tmp256 - _tmp212 * _tmp315 - _tmp216 * _tmp315 + _tmp217 * _tmp315) -
       _tmp332 * _tmp337);
  const Scalar _tmp339 = Scalar(0.71007031138673404) * _tmp325 * _tmp335;
  const Scalar _tmp340 = std::cosh(_tmp327);
  const Scalar _tmp341 = _tmp64 * _tmp68;
  const Scalar _tmp342 = _tmp64 * _tmp80;
  const Scalar _tmp343 = _tmp342 * _tmp60;
  const Scalar _tmp344 = _tmp343 * _tmp63;
  const Scalar _tmp345 = _tmp341 * _tmp77;
  const Scalar _tmp346 = _tmp343 * _tmp77;
  const Scalar _tmp347 = -_tmp198 * _tmp75 + _tmp31 * _tmp345 + _tmp31 * _tmp75 - _tmp346 * _tmp72;
  const Scalar _tmp348 = _tmp64 * _tmp69;
  const Scalar _tmp349 = _tmp31 * _tmp348 - _tmp344 * _tmp72 - _tmp347 * _tmp91;
  const Scalar _tmp350 = _tmp130 * _tmp349;
  const Scalar _tmp351 = _tmp154 * _tmp342;
  const Scalar _tmp352 = _tmp31 * _tmp350;
  const Scalar _tmp353 = _tmp128 * (-_tmp125 * _tmp127 + _tmp126 * _tmp95 - _tmp99);
  const Scalar _tmp354 = -_tmp134 * _tmp65 + _tmp353 * _tmp60;
  const Scalar _tmp355 = _tmp104 * _tmp341;
  const Scalar _tmp356 = _tmp104 * _tmp343;
  const Scalar _tmp357 =
      -_tmp137 * _tmp65 + _tmp31 * _tmp353 + _tmp31 * _tmp355 - _tmp354 * _tmp73 - _tmp356 * _tmp72;
  const Scalar _tmp358 = _tmp171 * _tmp357;
  const Scalar _tmp359 = _tmp178 * _tmp64;
  const Scalar _tmp360 = _tmp211 * _tmp349;
  const Scalar _tmp361 = _tmp159 * _tmp185 * _tmp75 + _tmp186 * _tmp343 - Scalar(1.0) * _tmp344;
  const Scalar _tmp362 = _tmp105 * _tmp350;
  const Scalar _tmp363 = _tmp114 * _tmp357;
  const Scalar _tmp364 = _tmp142 * (-_tmp115 * _tmp361 - _tmp169 * _tmp354 + _tmp187 * _tmp362 -
                                    _tmp187 * _tmp363 - Scalar(1.0) * _tmp356);
  const Scalar _tmp365 = _tmp145 * _tmp357;
  const Scalar _tmp366 = _tmp188 * _tmp365;
  const Scalar _tmp367 = _tmp360 + _tmp361 + _tmp364 - _tmp366;
  const Scalar _tmp368 = _tmp350 * _tmp72;
  const Scalar _tmp369 = -_tmp152 * _tmp367 + _tmp190 * _tmp368 + _tmp191 * _tmp64;
  const Scalar _tmp370 = _tmp153 * _tmp342;
  const Scalar _tmp371 = _tmp116 * _tmp365;
  const Scalar _tmp372 = _tmp117 * _tmp349;
  const Scalar _tmp373 = _tmp213 - _tmp345 - _tmp75 + _tmp83;
  const Scalar _tmp374 = -_tmp348 - _tmp373 * _tmp91 + _tmp93;
  const Scalar _tmp375 =
      _tmp142 * (_tmp107 * _tmp354 + _tmp109 * _tmp362 - _tmp109 * _tmp363 - _tmp115 * _tmp374 +
                 _tmp133 * _tmp65 + _tmp136 - _tmp353 - _tmp355);
  const Scalar _tmp376 = -_tmp371 + _tmp372 + _tmp374 + _tmp375;
  const Scalar _tmp377 = _tmp151 * _tmp368 - _tmp152 * _tmp376 + _tmp157 * _tmp64 + _tmp64;
  const Scalar _tmp378 =
      -_tmp168 * (_tmp149 * _tmp376 - _tmp151 * _tmp352 + _tmp154 * _tmp370 + _tmp159 * _tmp377) -
      _tmp182 * (-_tmp174 * _tmp357 - _tmp176 * _tmp351 + _tmp177 * _tmp359 + _tmp358 * _tmp60) +
      _tmp202 * _tmp65 + _tmp205 * _tmp65 -
      _tmp207 * (-_tmp197 * _tmp352 + _tmp199 * _tmp350 + _tmp200 * _tmp341 * _tmp60 -
                 _tmp206 * _tmp351) +
      _tmp208 * _tmp65 + _tmp210 * _tmp65 -
      _tmp221 * (_tmp149 * _tmp367 + _tmp159 * _tmp369 - _tmp190 * _tmp352 + _tmp220 * _tmp342);
  const Scalar _tmp379 = Scalar(1.4083112389913199) * _tmp378;
  const Scalar _tmp380 = _tmp114 * _tmp347;
  const Scalar _tmp381 = -_tmp197 * _tmp380 + _tmp259 * _tmp350;
  const Scalar _tmp382 = -_tmp151 * _tmp380 - _tmp229 * _tmp376 - _tmp230 * _tmp371 +
                         _tmp230 * _tmp372 + _tmp230 * _tmp375 + _tmp252 * _tmp350 + _tmp373;
  const Scalar _tmp383 = -_tmp177 * _tmp75 - _tmp190 * _tmp380 - _tmp229 * _tmp367 +
                         _tmp230 * _tmp360 + _tmp230 * _tmp364 - _tmp230 * _tmp366 +
                         _tmp249 * _tmp350 - Scalar(1.0) * _tmp346;
  const Scalar _tmp384 = _tmp228 * _tmp365;
  const Scalar _tmp385 = _tmp255 * _tmp349;
  const Scalar _tmp386 =
      -_tmp175 * _tmp347 + _tmp225 * _tmp385 - _tmp233 * _tmp365 + _tmp257 * _tmp357;
  const Scalar _tmp387 = _tmp262 * (-_tmp247 * _tmp378 +
                                    _tmp248 * (_tmp232 * (-_tmp184 * _tmp383 + _tmp228 * _tmp360 +
                                                          _tmp228 * _tmp364 - _tmp228 * _tmp366) +
                                               _tmp237 * (-_tmp184 * _tmp382 - _tmp228 * _tmp371 +
                                                          _tmp228 * _tmp372 + _tmp228 * _tmp375) +
                                               _tmp245 * (-_tmp184 * _tmp386 - _tmp384 + _tmp385) -
                                               _tmp261 * _tmp381));
  const Scalar _tmp388 = _tmp343 * _tmp72;
  const Scalar _tmp389 = _tmp283 * _tmp350;
  const Scalar _tmp390 = _tmp181 * _tmp358 - _tmp279 * _tmp388 + _tmp281 * _tmp369 +
                         _tmp282 * _tmp370 + _tmp285 * _tmp359 - _tmp286 * _tmp388 +
                         _tmp287 * _tmp341 + _tmp288 * _tmp343 + _tmp289 * _tmp377 +
                         _tmp389 * _tmp73;
  const Scalar _tmp391 =
      _tmp298 * (_tmp291 * _tmp381 + _tmp292 * _tmp386 + _tmp294 * _tmp382 + _tmp295 * _tmp383) -
      _tmp307 * _tmp390;
  const Scalar _tmp392 = _tmp318 * _tmp367 + _tmp319 * _tmp376 - _tmp329 * _tmp350 -
                         _tmp330 * _tmp350 - _tmp331 * _tmp357 - _tmp389;
  const Scalar _tmp393 =
      _tmp336 *
      (_tmp321 * (_tmp181 * _tmp384 - _tmp181 * _tmp385 - _tmp315 * _tmp360 - _tmp315 * _tmp364 +
                  _tmp315 * _tmp366 + _tmp316 * _tmp371 - _tmp316 * _tmp372 - _tmp316 * _tmp375) -
       _tmp337 * _tmp392);
  const Scalar _tmp394 = Scalar(1.4083112389913199) * _tmp392;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp270 * (-_tmp263 * _tmp266 -
                 _tmp274 * (-_tmp222 * _tmp275 + _tmp272 * (-_tmp263 * _tmp270 - _tmp264 * _tmp277 -
                                                            _tmp268 * _tmp276))) +
      _tmp277 * _tmp278;
  _res(2, 0) =
      _tmp290 * _tmp305 +
      _tmp301 *
          (-_tmp308 * _tmp310 -
           _tmp314 * (-_tmp290 * _tmp311 + _tmp303 * (-_tmp290 * _tmp313 - _tmp308 * _tmp312)));
  _res(3, 0) =
      _tmp324 *
          (-_tmp334 * _tmp338 -
           _tmp340 * (_tmp326 * (-_tmp322 * _tmp333 - _tmp324 * _tmp338) - _tmp332 * _tmp339)) +
      _tmp328 * _tmp333;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp270 * (-_tmp266 * _tmp387 -
                 _tmp274 * (_tmp272 * (-_tmp264 * _tmp379 - _tmp267 * _tmp276 - _tmp270 * _tmp387) -
                            _tmp275 * _tmp378)) +
      _tmp278 * _tmp379;
  _res(2, 1) =
      _tmp301 *
          (-_tmp310 * _tmp391 -
           _tmp314 * (_tmp303 * (-_tmp312 * _tmp391 - _tmp313 * _tmp390) - _tmp311 * _tmp390)) +
      _tmp305 * _tmp390;
  _res(3, 1) =
      _tmp324 *
          (-_tmp334 * _tmp393 -
           _tmp340 * (_tmp326 * (-_tmp322 * _tmp394 - _tmp324 * _tmp393) - _tmp339 * _tmp392)) +
      _tmp328 * _tmp394;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
