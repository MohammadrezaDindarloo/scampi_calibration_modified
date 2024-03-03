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
 * Symbolic function: IK_residual_func_cost2_wrt_pb_Nl20
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPbNl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1214

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
  const Scalar _tmp8 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp1 * _tmp11;
  const Scalar _tmp13 = _tmp0 * _tmp4;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -_tmp18 + p_b(0, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp21 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp23 = _tmp0 * _tmp11;
  const Scalar _tmp24 = _tmp1 * _tmp4;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp22 - _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = -_tmp27 + p_b(2, 0) - position_vector(2, 0);
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp30 = -_tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp32 = _tmp23 - _tmp24;
  const Scalar _tmp33 = -Scalar(0.010999999999999999) * _tmp32;
  const Scalar _tmp34 = _tmp31 + _tmp33;
  const Scalar _tmp35 = _tmp30 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp37 = -_tmp36 + p_b(1, 0);
  const Scalar _tmp38 = std::pow(_tmp19, Scalar(2)) + std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 =
      std::pow(Scalar(std::pow(_tmp28, Scalar(2)) + _tmp38), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp16 + _tmp6;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 - p_c(0, 0);
  const Scalar _tmp43 = _tmp29 + _tmp34;
  const Scalar _tmp44 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp45 = _tmp44 - p_c(1, 0);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp42 * _tmp46;
  const Scalar _tmp48 = _tmp18 - p_b(0, 0);
  const Scalar _tmp49 = std::pow(_tmp48, Scalar(2));
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = _tmp36 - p_b(1, 0);
  const Scalar _tmp52 = _tmp50 * _tmp51;
  const Scalar _tmp53 = -_tmp20;
  const Scalar _tmp54 = _tmp26 + _tmp53;
  const Scalar _tmp55 = -_tmp10 + _tmp15;
  const Scalar _tmp56 = _tmp55 + _tmp7;
  const Scalar _tmp57 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp58 = _tmp57 - p_a(0, 0);
  const Scalar _tmp59 = std::pow(_tmp58, Scalar(2));
  const Scalar _tmp60 = -_tmp31 + _tmp33;
  const Scalar _tmp61 = _tmp30 + _tmp60;
  const Scalar _tmp62 = _tmp61 + position_vector(1, 0);
  const Scalar _tmp63 = _tmp62 - p_a(1, 0);
  const Scalar _tmp64 = _tmp59 + std::pow(_tmp63, Scalar(2));
  const Scalar _tmp65 = std::pow(_tmp64, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp58 * _tmp65;
  const Scalar _tmp67 = _tmp27 * _tmp66;
  const Scalar _tmp68 = -_tmp54 * _tmp66 + _tmp67;
  const Scalar _tmp69 = Scalar(1.0) / (_tmp48);
  const Scalar _tmp70 = _tmp51 * _tmp69;
  const Scalar _tmp71 = _tmp63 * _tmp65;
  const Scalar _tmp72 = _tmp66 * _tmp70 - _tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = _tmp68 * _tmp73;
  const Scalar _tmp75 = _tmp52 * _tmp74;
  const Scalar _tmp76 = _tmp47 * _tmp70;
  const Scalar _tmp77 = _tmp45 * _tmp46;
  const Scalar _tmp78 = _tmp76 - _tmp77;
  const Scalar _tmp79 = _tmp73 * _tmp78;
  const Scalar _tmp80 = _tmp52 * _tmp67;
  const Scalar _tmp81 = _tmp27 * _tmp69;
  const Scalar _tmp82 = _tmp51 * _tmp81;
  const Scalar _tmp83 = _tmp54 * _tmp71 - _tmp66 * _tmp82;
  const Scalar _tmp84 = _tmp73 * _tmp83;
  const Scalar _tmp85 = _tmp52 * _tmp84;
  const Scalar _tmp86 = std::pow(_tmp72, Scalar(-2));
  const Scalar _tmp87 = _tmp52 * _tmp86;
  const Scalar _tmp88 = _tmp66 * _tmp83;
  const Scalar _tmp89 = _tmp87 * _tmp88;
  const Scalar _tmp90 = _tmp27 * _tmp47;
  const Scalar _tmp91 = -_tmp47 * _tmp85 - _tmp52 * _tmp90 + _tmp78 * _tmp89 + _tmp79 * _tmp80;
  const Scalar _tmp92 = Scalar(1.0) * _tmp35;
  const Scalar _tmp93 = -_tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp61 + _tmp93);
  const Scalar _tmp95 = Scalar(1.0) * _tmp17;
  const Scalar _tmp96 = -_tmp56 + _tmp95;
  const Scalar _tmp97 = _tmp94 * _tmp96;
  const Scalar _tmp98 = _tmp66 * _tmp87;
  const Scalar _tmp99 = _tmp68 * _tmp98;
  const Scalar _tmp100 = -_tmp47 * _tmp75 + _tmp78 * _tmp99 - _tmp91 * _tmp97;
  const Scalar _tmp101 = std::pow(_tmp51, Scalar(2));
  const Scalar _tmp102 = _tmp101 + _tmp49;
  const Scalar _tmp103 = std::sqrt(_tmp102);
  const Scalar _tmp104 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp105 = _tmp104 * _tmp17;
  const Scalar _tmp106 = _tmp104 * _tmp35;
  const Scalar _tmp107 = _tmp105 * _tmp51 - _tmp106 * _tmp48;
  const Scalar _tmp108 = _tmp103 * _tmp107;
  const Scalar _tmp109 = _tmp108 * _tmp69;
  const Scalar _tmp110 = _tmp109 * _tmp66 - _tmp56 * _tmp71 + _tmp61 * _tmp66;
  const Scalar _tmp111 = _tmp109 * _tmp47 - _tmp110 * _tmp79 - _tmp40 * _tmp77 + _tmp43 * _tmp47;
  const Scalar _tmp112 = Scalar(1.0) / (_tmp111);
  const Scalar _tmp113 = _tmp70 * _tmp73;
  const Scalar _tmp114 = _tmp70 * _tmp84 + _tmp82;
  const Scalar _tmp115 = -_tmp114 * _tmp97 - _tmp27 + _tmp70 * _tmp74;
  const Scalar _tmp116 = _tmp22 + _tmp25;
  const Scalar _tmp117 = _tmp116 + _tmp20;
  const Scalar _tmp118 = _tmp117 * _tmp77 - _tmp47 * _tmp82 - _tmp79 * _tmp83;
  const Scalar _tmp119 = -_tmp117 * _tmp47 - _tmp118 * _tmp97 - _tmp74 * _tmp78 + _tmp90;
  const Scalar _tmp120 = Scalar(1.0) / (_tmp119);
  const Scalar _tmp121 = _tmp111 * _tmp120;
  const Scalar _tmp122 = -_tmp109 + _tmp110 * _tmp113 - _tmp115 * _tmp121;
  const Scalar _tmp123 = _tmp112 * _tmp122;
  const Scalar _tmp124 = _tmp100 * _tmp123;
  const Scalar _tmp125 = _tmp110 * _tmp52;
  const Scalar _tmp126 = _tmp125 * _tmp73;
  const Scalar _tmp127 = _tmp108 * _tmp50;
  const Scalar _tmp128 = _tmp101 / [&]() {
    const Scalar base = _tmp48;
    return base * base * base;
  }();
  const Scalar _tmp129 = _tmp128 * _tmp86;
  const Scalar _tmp130 = _tmp129 * _tmp66;
  const Scalar _tmp131 = std::pow(_tmp102, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp132 = _tmp131 * _tmp35;
  const Scalar _tmp133 = _tmp131 * _tmp17;
  const Scalar _tmp134 = _tmp48 * _tmp51;
  const Scalar _tmp135 = _tmp103 * _tmp69;
  const Scalar _tmp136 = _tmp135 * (_tmp106 - _tmp132 * _tmp49 + _tmp133 * _tmp134);
  const Scalar _tmp137 = std::pow(_tmp119, Scalar(-2));
  const Scalar _tmp138 = _tmp100 * _tmp137;
  const Scalar _tmp139 = _tmp111 * _tmp138;
  const Scalar _tmp140 = _tmp104 * _tmp107;
  const Scalar _tmp141 = _tmp127 * _tmp66 + _tmp136 * _tmp66 - _tmp140 * _tmp66;
  const Scalar _tmp142 = _tmp125 * _tmp66 * _tmp86;
  const Scalar _tmp143 = -_tmp126 * _tmp47 + _tmp127 * _tmp47 + _tmp136 * _tmp47 -
                         _tmp140 * _tmp47 - _tmp141 * _tmp79 + _tmp142 * _tmp78;
  const Scalar _tmp144 = _tmp120 * _tmp143;
  const Scalar _tmp145 = _tmp67 * _tmp73;
  const Scalar _tmp146 = -_tmp128 * _tmp145 - _tmp129 * _tmp88 + _tmp27 * _tmp52 + _tmp85;
  const Scalar _tmp147 = -_tmp130 * _tmp68 - _tmp146 * _tmp97 + _tmp75;
  const Scalar _tmp148 = _tmp112 * _tmp119;
  const Scalar _tmp149 =
      _tmp148 * (-_tmp110 * _tmp130 + _tmp113 * _tmp141 + _tmp115 * _tmp139 - _tmp115 * _tmp144 -
                 _tmp121 * _tmp147 + _tmp126 - _tmp127 - _tmp136 + _tmp140);
  const Scalar _tmp150 = std::pow(_tmp111, Scalar(-2));
  const Scalar _tmp151 = _tmp143 * _tmp150;
  const Scalar _tmp152 = _tmp119 * _tmp122;
  const Scalar _tmp153 = _tmp151 * _tmp152;
  const Scalar _tmp154 = _tmp124 + _tmp147 + _tmp149 - _tmp153;
  const Scalar _tmp155 = _tmp120 * _tmp47;
  const Scalar _tmp156 = _tmp122 * _tmp148;
  const Scalar _tmp157 = _tmp115 + _tmp156;
  const Scalar _tmp158 = _tmp120 * _tmp78;
  const Scalar _tmp159 = -_tmp157 * _tmp158 - _tmp70;
  const Scalar _tmp160 = _tmp59 / _tmp64;
  const Scalar _tmp161 = _tmp160 * _tmp87;
  const Scalar _tmp162 = _tmp138 * _tmp157;
  const Scalar _tmp163 = _tmp155 * _tmp157;
  const Scalar _tmp164 = -_tmp154 * _tmp158 + _tmp162 * _tmp78 - _tmp163 * _tmp52 - _tmp52;
  const Scalar _tmp165 = _tmp66 * _tmp73;
  const Scalar _tmp166 = _tmp55 + _tmp6;
  const Scalar _tmp167 = _tmp166 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp168 = _tmp29 + _tmp60;
  const Scalar _tmp169 = _tmp168 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp170 =
      std::pow(Scalar(std::pow(_tmp167, Scalar(2)) + std::pow(_tmp169, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp171 = _tmp167 * _tmp170;
  const Scalar _tmp172 = _tmp171 * fh1;
  const Scalar _tmp173 = _tmp135 * _tmp172;
  const Scalar _tmp174 = Scalar(1.0) * _tmp73;
  const Scalar _tmp175 = _tmp174 * _tmp66;
  const Scalar _tmp176 = _tmp151 * _tmp78;
  const Scalar _tmp177 = Scalar(1.0) * _tmp47;
  const Scalar _tmp178 = Scalar(1.0) * _tmp112;
  const Scalar _tmp179 = _tmp178 * _tmp78;
  const Scalar _tmp180 = _tmp112 * _tmp47;
  const Scalar _tmp181 = _tmp180 * _tmp52;
  const Scalar _tmp182 = _tmp169 * _tmp170;
  const Scalar _tmp183 = fh1 * (_tmp166 * _tmp182 - _tmp168 * _tmp171);
  const Scalar _tmp184 = _tmp135 * _tmp183;
  const Scalar _tmp185 = _tmp103 * _tmp50;
  const Scalar _tmp186 = _tmp174 * _tmp83;
  const Scalar _tmp187 = _tmp186 * _tmp97 - Scalar(1.0) * _tmp74;
  const Scalar _tmp188 = -_tmp110 * _tmp174 - _tmp121 * _tmp187;
  const Scalar _tmp189 = _tmp148 * _tmp188;
  const Scalar _tmp190 = _tmp187 + _tmp189;
  const Scalar _tmp191 = _tmp155 * _tmp190;
  const Scalar _tmp192 = -_tmp158 * _tmp190 + Scalar(1.0);
  const Scalar _tmp193 = _tmp182 * fh1;
  const Scalar _tmp194 = _tmp193 * (_tmp165 * _tmp192 + _tmp191);
  const Scalar _tmp195 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp196 = _tmp92 * _tmp97 + _tmp95;
  const Scalar _tmp197 = 0;
  const Scalar _tmp198 = _tmp66 * _tmp79;
  const Scalar _tmp199 = _tmp155 * _tmp197;
  const Scalar _tmp200 = _tmp195 * (-_tmp120 * _tmp197 * _tmp198 + _tmp199);
  const Scalar _tmp201 = _tmp104 * _tmp200;
  const Scalar _tmp202 = _tmp112 * _tmp78;
  const Scalar _tmp203 = _tmp183 * (-_tmp175 * _tmp202 + _tmp178 * _tmp47);
  const Scalar _tmp204 = _tmp104 * _tmp203;
  const Scalar _tmp205 = _tmp158 * _tmp197;
  const Scalar _tmp206 = _tmp138 * _tmp197;
  const Scalar _tmp207 = _tmp135 * _tmp195;
  const Scalar _tmp208 = _tmp104 * _tmp194;
  const Scalar _tmp209 = _tmp172 * (_tmp159 * _tmp165 + _tmp163 + Scalar(1.0));
  const Scalar _tmp210 = _tmp104 * _tmp209;
  const Scalar _tmp211 = _tmp112 * _tmp188;
  const Scalar _tmp212 = _tmp100 * _tmp211;
  const Scalar _tmp213 = _tmp174 * _tmp80;
  const Scalar _tmp214 = Scalar(1.0) * _tmp94;
  const Scalar _tmp215 = _tmp214 * _tmp96;
  const Scalar _tmp216 = -_tmp213 * _tmp97 - _tmp215 * _tmp89 + Scalar(1.0) * _tmp99;
  const Scalar _tmp217 = _tmp148 * (-_tmp121 * _tmp216 + _tmp139 * _tmp187 - _tmp141 * _tmp174 +
                                    Scalar(1.0) * _tmp142 - _tmp144 * _tmp187);
  const Scalar _tmp218 = _tmp119 * _tmp188;
  const Scalar _tmp219 = _tmp151 * _tmp218;
  const Scalar _tmp220 = _tmp212 + _tmp216 + _tmp217 - _tmp219;
  const Scalar _tmp221 = _tmp190 * _tmp78;
  const Scalar _tmp222 = _tmp138 * _tmp221 - _tmp158 * _tmp220 - _tmp191 * _tmp52;
  const Scalar _tmp223 = _tmp160 * _tmp192;
  const Scalar _tmp224 = _tmp190 * _tmp47;
  const Scalar _tmp225 = _tmp135 * _tmp193;
  const Scalar _tmp226 =
      -_tmp173 * (_tmp154 * _tmp155 - _tmp159 * _tmp161 - _tmp162 * _tmp47 + _tmp164 * _tmp165) -
      _tmp184 * (-_tmp151 * _tmp177 + _tmp161 * _tmp179 + _tmp175 * _tmp176 - _tmp175 * _tmp181) -
      _tmp185 * _tmp194 - _tmp185 * _tmp200 - _tmp185 * _tmp203 - _tmp185 * _tmp209 + _tmp201 +
      _tmp204 -
      _tmp207 *
          (_tmp161 * _tmp205 - _tmp165 * _tmp199 * _tmp52 + _tmp198 * _tmp206 - _tmp206 * _tmp47) +
      _tmp208 + _tmp210 -
      _tmp225 * (-_tmp138 * _tmp224 + _tmp155 * _tmp220 + _tmp165 * _tmp222 - _tmp223 * _tmp87);
  const Scalar _tmp227 =
      -_tmp135 * _tmp194 - _tmp135 * _tmp200 - _tmp135 * _tmp203 - _tmp135 * _tmp209;
  const Scalar _tmp228 = std::pow(_tmp227, Scalar(-2));
  const Scalar _tmp229 = _tmp43 + _tmp93;
  const Scalar _tmp230 = _tmp229 * _tmp97;
  const Scalar _tmp231 = Scalar(1.0) / (-_tmp230 - _tmp40 + _tmp95);
  const Scalar _tmp232 = Scalar(1.0) * _tmp231;
  const Scalar _tmp233 = _tmp118 * _tmp120;
  const Scalar _tmp234 = _tmp229 * _tmp231;
  const Scalar _tmp235 = -_tmp186 + _tmp189 * _tmp234 - _tmp190 * _tmp233;
  const Scalar _tmp236 = Scalar(1.0) * fh1;
  const Scalar _tmp237 = _tmp182 * _tmp236;
  const Scalar _tmp238 = _tmp229 * _tmp94;
  const Scalar _tmp239 = fh1 * (_tmp116 + _tmp53);
  const Scalar _tmp240 = Scalar(40.024799999999999) * _tmp14 + _tmp166 * fv1 + _tmp171 * _tmp239;
  const Scalar _tmp241 = _tmp114 + _tmp156 * _tmp234 - _tmp157 * _tmp233;
  const Scalar _tmp242 = _tmp171 * _tmp236;
  const Scalar _tmp243 = -_tmp168 * fv1 - _tmp182 * _tmp239 - Scalar(40.024799999999999) * _tmp32;
  const Scalar _tmp244 = _tmp232 * _tmp97;
  const Scalar _tmp245 = _tmp230 * _tmp232 + Scalar(1.0);
  const Scalar _tmp246 = _tmp196 * _tmp231;
  const Scalar _tmp247 = -_tmp197 * _tmp233 - _tmp229 * _tmp246 + _tmp93;
  const Scalar _tmp248 = _tmp148 * _tmp232;
  const Scalar _tmp249 = -_tmp118 * _tmp178 + _tmp229 * _tmp248;
  const Scalar _tmp250 = Scalar(1.0) * _tmp183;
  const Scalar _tmp251 =
      Scalar(1.0) * _tmp195 * (-_tmp196 * _tmp232 - _tmp214 * _tmp247 + Scalar(1.0)) +
      _tmp237 * (_tmp189 * _tmp232 - _tmp214 * _tmp235) +
      Scalar(1.0) * _tmp240 * (_tmp232 * _tmp238 - _tmp232) +
      _tmp242 * (_tmp156 * _tmp232 - _tmp214 * _tmp241) +
      Scalar(1.0) * _tmp243 * (-_tmp214 * _tmp245 + _tmp244) +
      _tmp250 * (-_tmp214 * _tmp249 + _tmp248);
  const Scalar _tmp252 = _tmp228 * _tmp251;
  const Scalar _tmp253 = Scalar(1.0) / (_tmp227);
  const Scalar _tmp254 = _tmp118 * _tmp190;
  const Scalar _tmp255 = _tmp120 * _tmp91;
  const Scalar _tmp256 = _tmp138 * _tmp254 - _tmp190 * _tmp255 + _tmp212 * _tmp234 + _tmp213 +
                         _tmp217 * _tmp234 - _tmp219 * _tmp234 - _tmp220 * _tmp233 +
                         Scalar(1.0) * _tmp89;
  const Scalar _tmp257 = _tmp118 * _tmp162 + _tmp124 * _tmp234 + _tmp146 + _tmp149 * _tmp234 -
                         _tmp153 * _tmp234 - _tmp154 * _tmp233 - _tmp157 * _tmp255;
  const Scalar _tmp258 = _tmp119 * _tmp232;
  const Scalar _tmp259 = _tmp151 * _tmp258;
  const Scalar _tmp260 = _tmp112 * _tmp232;
  const Scalar _tmp261 = _tmp100 * _tmp260;
  const Scalar _tmp262 = Scalar(1.0) * _tmp118;
  const Scalar _tmp263 =
      _tmp151 * _tmp262 - _tmp178 * _tmp91 - _tmp229 * _tmp259 + _tmp229 * _tmp261;
  const Scalar _tmp264 = _tmp118 * _tmp206 - _tmp197 * _tmp255;
  const Scalar _tmp265 = _tmp195 * _tmp214;
  const Scalar _tmp266 =
      std::pow(Scalar(_tmp228 * std::pow(_tmp251, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp267 = _tmp266 * (-_tmp226 * _tmp252 +
                                    _tmp253 * (_tmp237 * (_tmp212 * _tmp232 - _tmp214 * _tmp256 +
                                                          _tmp217 * _tmp232 - _tmp219 * _tmp232) +
                                               _tmp242 * (_tmp124 * _tmp232 + _tmp149 * _tmp232 -
                                                          _tmp153 * _tmp232 - _tmp214 * _tmp257) +
                                               _tmp250 * (-_tmp214 * _tmp263 - _tmp259 + _tmp261) -
                                               _tmp264 * _tmp265));
  const Scalar _tmp268 = std::asinh(_tmp251 * _tmp253);
  const Scalar _tmp269 = Scalar(1.0) * _tmp268;
  const Scalar _tmp270 = Scalar(1.0) * std::cosh(_tmp269);
  const Scalar _tmp271 = std::sqrt(_tmp38);
  const Scalar _tmp272 = Scalar(1.4083112389913199) * _tmp227;
  const Scalar _tmp273 = -_tmp268 * _tmp272 - _tmp271;
  const Scalar _tmp274 = Scalar(0.71007031138673404) * _tmp253;
  const Scalar _tmp275 = _tmp273 * _tmp274;
  const Scalar _tmp276 = std::cosh(_tmp275);
  const Scalar _tmp277 = Scalar(0.71007031138673404) * _tmp228 * _tmp273;
  const Scalar _tmp278 = Scalar(1.0) / (_tmp271);
  const Scalar _tmp279 = Scalar(1.4083112389913199) * _tmp268;
  const Scalar _tmp280 = -Scalar(1.4083112389913199) * std::sinh(_tmp269) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp275);
  const Scalar _tmp281 = _tmp174 * _tmp183;
  const Scalar _tmp282 = _tmp178 * _tmp183;
  const Scalar _tmp283 = _tmp78 * _tmp98;
  const Scalar _tmp284 = _tmp193 * _tmp73;
  const Scalar _tmp285 = _tmp195 * _tmp197;
  const Scalar _tmp286 = _tmp138 * _tmp285;
  const Scalar _tmp287 = _tmp120 * _tmp285;
  const Scalar _tmp288 = _tmp287 * _tmp47;
  const Scalar _tmp289 = _tmp192 * _tmp193;
  const Scalar _tmp290 = _tmp172 * _tmp73;
  const Scalar _tmp291 = -_tmp159 * _tmp172 * _tmp98 + _tmp164 * _tmp290 + _tmp176 * _tmp281 -
                         _tmp181 * _tmp281 + _tmp222 * _tmp284 + _tmp282 * _tmp283 +
                         _tmp283 * _tmp287 + _tmp286 * _tmp79 - _tmp288 * _tmp52 * _tmp73 -
                         _tmp289 * _tmp98;
  const Scalar _tmp292 = _tmp195 * _tmp94;
  const Scalar _tmp293 = _tmp183 * _tmp94;
  const Scalar _tmp294 = _tmp232 * _tmp240;
  const Scalar _tmp295 = _tmp172 * _tmp94;
  const Scalar _tmp296 = _tmp193 * _tmp94;
  const Scalar _tmp297 = _tmp235 * _tmp296 - _tmp238 * _tmp294 + _tmp241 * _tmp295 +
                         _tmp243 * _tmp245 * _tmp94 + _tmp247 * _tmp292 + _tmp249 * _tmp293;
  const Scalar _tmp298 =
      _tmp159 * _tmp290 + _tmp192 * _tmp284 - _tmp202 * _tmp281 - _tmp287 * _tmp79;
  const Scalar _tmp299 = Scalar(1.0) / (_tmp298);
  const Scalar _tmp300 = std::asinh(_tmp297 * _tmp299);
  const Scalar _tmp301 = Scalar(1.0) * _tmp300;
  const Scalar _tmp302 = Scalar(1.4083112389913199) * _tmp298;
  const Scalar _tmp303 =
      -_tmp300 * _tmp302 - std::sqrt(Scalar(std::pow(Scalar(-_tmp57 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp62 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp304 = Scalar(0.71007031138673404) * _tmp299;
  const Scalar _tmp305 = _tmp303 * _tmp304;
  const Scalar _tmp306 = -Scalar(1.4083112389913199) * std::sinh(_tmp301) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp305);
  const Scalar _tmp307 = std::pow(_tmp298, Scalar(-2));
  const Scalar _tmp308 =
      std::pow(Scalar(std::pow(_tmp297, Scalar(2)) * _tmp307 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp309 = _tmp297 * _tmp307;
  const Scalar _tmp310 =
      _tmp308 * (-_tmp291 * _tmp309 + _tmp299 * (_tmp256 * _tmp296 + _tmp257 * _tmp295 +
                                                 _tmp263 * _tmp293 + _tmp264 * _tmp292));
  const Scalar _tmp311 = Scalar(1.0) * std::cosh(_tmp301);
  const Scalar _tmp312 = Scalar(0.71007031138673404) * _tmp303 * _tmp307;
  const Scalar _tmp313 = Scalar(1.4083112389913199) * _tmp300;
  const Scalar _tmp314 = std::cosh(_tmp305);
  const Scalar _tmp315 = _tmp193 * _tmp231;
  const Scalar _tmp316 = _tmp172 * _tmp231;
  const Scalar _tmp317 = -_tmp156 * _tmp316 - _tmp183 * _tmp248 - _tmp189 * _tmp315 +
                         _tmp195 * _tmp246 - _tmp243 * _tmp244 + _tmp294;
  const Scalar _tmp318 = _tmp120 * fh1;
  const Scalar _tmp319 = _tmp182 * _tmp318;
  const Scalar _tmp320 = _tmp171 * _tmp318;
  const Scalar _tmp321 = _tmp157 * _tmp320 + _tmp190 * _tmp319 + _tmp282 + _tmp287;
  const Scalar _tmp322 = Scalar(1.0) / (_tmp321);
  const Scalar _tmp323 = std::asinh(_tmp317 * _tmp322);
  const Scalar _tmp324 = Scalar(1.0) * _tmp323;
  const Scalar _tmp325 = Scalar(1.4083112389913199) * _tmp321;
  const Scalar _tmp326 =
      -_tmp323 * _tmp325 - std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp44 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp327 = Scalar(0.71007031138673404) * _tmp322;
  const Scalar _tmp328 = _tmp326 * _tmp327;
  const Scalar _tmp329 = -std::sinh(_tmp324) - std::sinh(_tmp328);
  const Scalar _tmp330 = _tmp190 * _tmp193;
  const Scalar _tmp331 = -_tmp138 * _tmp330 - _tmp151 * _tmp250 + _tmp154 * _tmp320 -
                         _tmp162 * _tmp172 + _tmp220 * _tmp319 - _tmp286;
  const Scalar _tmp332 = Scalar(1.4083112389913199) * _tmp331;
  const Scalar _tmp333 = Scalar(1.0) * std::cosh(_tmp324);
  const Scalar _tmp334 = std::pow(_tmp321, Scalar(-2));
  const Scalar _tmp335 =
      std::pow(Scalar(std::pow(_tmp317, Scalar(2)) * _tmp334 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp336 = _tmp317 * _tmp334;
  const Scalar _tmp337 =
      _tmp335 *
      (_tmp322 * (-_tmp124 * _tmp316 - _tmp149 * _tmp316 + _tmp153 * _tmp316 + _tmp183 * _tmp259 -
                  _tmp183 * _tmp261 - _tmp212 * _tmp315 - _tmp217 * _tmp315 + _tmp219 * _tmp315) -
       _tmp331 * _tmp336);
  const Scalar _tmp338 = Scalar(0.71007031138673404) * _tmp326 * _tmp334;
  const Scalar _tmp339 = std::cosh(_tmp328);
  const Scalar _tmp340 = _tmp69 * _tmp73;
  const Scalar _tmp341 = _tmp69 * _tmp86;
  const Scalar _tmp342 = _tmp341 * _tmp66;
  const Scalar _tmp343 = _tmp342 * _tmp78;
  const Scalar _tmp344 = _tmp340 * _tmp83;
  const Scalar _tmp345 = -_tmp198 * _tmp81 - _tmp343 * _tmp83 + _tmp344 * _tmp47 + _tmp47 * _tmp81;
  const Scalar _tmp346 = _tmp69 * _tmp74;
  const Scalar _tmp347 = -_tmp343 * _tmp68 - _tmp345 * _tmp97 + _tmp346 * _tmp47;
  const Scalar _tmp348 = _tmp137 * _tmp347;
  const Scalar _tmp349 = _tmp197 * _tmp348;
  const Scalar _tmp350 = _tmp160 * _tmp341;
  const Scalar _tmp351 = _tmp135 * (_tmp101 * _tmp133 - _tmp105 - _tmp132 * _tmp134);
  const Scalar _tmp352 = _tmp140 * _tmp70;
  const Scalar _tmp353 = _tmp351 * _tmp66 - _tmp352 * _tmp66;
  const Scalar _tmp354 = _tmp110 * _tmp340;
  const Scalar _tmp355 = -_tmp110 * _tmp343 - _tmp140 * _tmp76 + _tmp351 * _tmp47 -
                         _tmp353 * _tmp79 + _tmp354 * _tmp47;
  const Scalar _tmp356 = _tmp150 * _tmp355;
  const Scalar _tmp357 = _tmp356 * _tmp78;
  const Scalar _tmp358 = _tmp180 * _tmp69;
  const Scalar _tmp359 = _tmp211 * _tmp347;
  const Scalar _tmp360 = Scalar(1.0) * _tmp342;
  const Scalar _tmp361 = _tmp175 * _tmp81;
  const Scalar _tmp362 = _tmp215 * _tmp342 * _tmp83 - _tmp360 * _tmp68 + _tmp361 * _tmp97;
  const Scalar _tmp363 = _tmp111 * _tmp348;
  const Scalar _tmp364 = _tmp120 * _tmp355;
  const Scalar _tmp365 = _tmp148 * (-_tmp110 * _tmp360 - _tmp121 * _tmp362 - _tmp174 * _tmp353 +
                                    _tmp187 * _tmp363 - _tmp187 * _tmp364);
  const Scalar _tmp366 = _tmp218 * _tmp356;
  const Scalar _tmp367 = _tmp359 + _tmp362 + _tmp365 - _tmp366;
  const Scalar _tmp368 = -_tmp158 * _tmp367 + _tmp191 * _tmp69 + _tmp221 * _tmp348;
  const Scalar _tmp369 = _tmp159 * _tmp341;
  const Scalar _tmp370 = _tmp152 * _tmp356;
  const Scalar _tmp371 = _tmp123 * _tmp347;
  const Scalar _tmp372 = _tmp145 * _tmp52 - _tmp344 - _tmp81 + _tmp89;
  const Scalar _tmp373 = -_tmp346 - _tmp372 * _tmp97 + _tmp99;
  const Scalar _tmp374 = _tmp148 * (_tmp113 * _tmp353 + _tmp115 * _tmp363 - _tmp115 * _tmp364 -
                                    _tmp121 * _tmp373 + _tmp142 - _tmp351 + _tmp352 - _tmp354);
  const Scalar _tmp375 = -_tmp370 + _tmp371 + _tmp373 + _tmp374;
  const Scalar _tmp376 = _tmp157 * _tmp348;
  const Scalar _tmp377 = -_tmp158 * _tmp375 + _tmp163 * _tmp69 + _tmp376 * _tmp78 + _tmp69;
  const Scalar _tmp378 =
      -_tmp173 * (_tmp155 * _tmp375 + _tmp160 * _tmp369 + _tmp165 * _tmp377 - _tmp376 * _tmp47) -
      _tmp184 * (_tmp175 * _tmp357 + _tmp175 * _tmp358 - _tmp177 * _tmp356 - _tmp179 * _tmp350) +
      _tmp201 * _tmp70 + _tmp204 * _tmp70 -
      _tmp207 *
          (_tmp198 * _tmp349 + _tmp199 * _tmp340 * _tmp66 - _tmp205 * _tmp350 - _tmp349 * _tmp47) +
      _tmp208 * _tmp70 + _tmp210 * _tmp70 -
      _tmp225 * (_tmp155 * _tmp367 + _tmp165 * _tmp368 + _tmp223 * _tmp341 - _tmp224 * _tmp348);
  const Scalar _tmp379 = _tmp120 * _tmp345;
  const Scalar _tmp380 = _tmp118 * _tmp348;
  const Scalar _tmp381 = -_tmp197 * _tmp379 + _tmp197 * _tmp380;
  const Scalar _tmp382 = -_tmp157 * _tmp379 + _tmp157 * _tmp380 - _tmp233 * _tmp375 -
                         _tmp234 * _tmp370 + _tmp234 * _tmp371 + _tmp234 * _tmp374 + _tmp372;
  const Scalar _tmp383 = -_tmp190 * _tmp379 - _tmp233 * _tmp367 + _tmp234 * _tmp359 +
                         _tmp234 * _tmp365 - _tmp234 * _tmp366 + _tmp254 * _tmp348 -
                         _tmp360 * _tmp83 - _tmp361;
  const Scalar _tmp384 = _tmp258 * _tmp356;
  const Scalar _tmp385 = _tmp260 * _tmp347;
  const Scalar _tmp386 =
      -_tmp178 * _tmp345 - _tmp229 * _tmp384 + _tmp229 * _tmp385 + _tmp262 * _tmp356;
  const Scalar _tmp387 = _tmp266 * (-_tmp252 * _tmp378 +
                                    _tmp253 * (_tmp237 * (-_tmp214 * _tmp383 + _tmp232 * _tmp359 +
                                                          _tmp232 * _tmp365 - _tmp232 * _tmp366) +
                                               _tmp242 * (-_tmp214 * _tmp382 - _tmp232 * _tmp370 +
                                                          _tmp232 * _tmp371 + _tmp232 * _tmp374) +
                                               _tmp250 * (-_tmp214 * _tmp386 - _tmp384 + _tmp385) -
                                               _tmp265 * _tmp381));
  const Scalar _tmp388 = _tmp285 * _tmp348;
  const Scalar _tmp389 = _tmp172 * _tmp369 * _tmp66 + _tmp281 * _tmp357 + _tmp281 * _tmp358 -
                         _tmp282 * _tmp343 + _tmp284 * _tmp368 - _tmp287 * _tmp343 +
                         _tmp288 * _tmp340 + _tmp289 * _tmp342 + _tmp290 * _tmp377 +
                         _tmp388 * _tmp79;
  const Scalar _tmp390 =
      _tmp308 *
      (_tmp299 * (_tmp292 * _tmp381 + _tmp293 * _tmp386 + _tmp295 * _tmp382 + _tmp296 * _tmp383) -
       _tmp309 * _tmp389);
  const Scalar _tmp391 = -_tmp172 * _tmp376 - _tmp250 * _tmp356 + _tmp319 * _tmp367 +
                         _tmp320 * _tmp375 - _tmp330 * _tmp348 - _tmp388;
  const Scalar _tmp392 =
      _tmp335 *
      (_tmp322 * (_tmp183 * _tmp384 - _tmp183 * _tmp385 - _tmp315 * _tmp359 - _tmp315 * _tmp365 +
                  _tmp315 * _tmp366 + _tmp316 * _tmp370 - _tmp316 * _tmp371 - _tmp316 * _tmp374) -
       _tmp336 * _tmp391);
  const Scalar _tmp393 = Scalar(1.4083112389913199) * _tmp391;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp19 * _tmp39 + _tmp226 * _tmp280 +
      _tmp272 * (-_tmp267 * _tmp270 -
                 _tmp276 * (-_tmp226 * _tmp277 +
                            _tmp274 * (-_tmp19 * _tmp278 - _tmp226 * _tmp279 - _tmp267 * _tmp272)));
  _res(2, 0) =
      _tmp291 * _tmp306 +
      _tmp302 *
          (-_tmp310 * _tmp311 -
           _tmp314 * (-_tmp291 * _tmp312 + _tmp304 * (-_tmp291 * _tmp313 - _tmp302 * _tmp310)));
  _res(3, 0) =
      _tmp325 *
          (-_tmp333 * _tmp337 -
           _tmp339 * (_tmp327 * (-_tmp323 * _tmp332 - _tmp325 * _tmp337) - _tmp331 * _tmp338)) +
      _tmp329 * _tmp332;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp272 * (-_tmp270 * _tmp387 -
                 _tmp276 * (_tmp274 * (-_tmp272 * _tmp387 - _tmp278 * _tmp37 - _tmp279 * _tmp378) -
                            _tmp277 * _tmp378)) +
      _tmp280 * _tmp378 - _tmp37 * _tmp39;
  _res(2, 1) =
      _tmp302 *
          (-_tmp311 * _tmp390 -
           _tmp314 * (_tmp304 * (-_tmp302 * _tmp390 - _tmp313 * _tmp389) - _tmp312 * _tmp389)) +
      _tmp306 * _tmp389;
  _res(3, 1) =
      _tmp325 *
          (-_tmp333 * _tmp392 -
           _tmp339 * (_tmp327 * (-_tmp323 * _tmp393 - _tmp325 * _tmp392) - _tmp338 * _tmp391)) +
      _tmp329 * _tmp393;
  _res(0, 2) = 0;
  _res(1, 2) = -_tmp28 * _tmp39;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
