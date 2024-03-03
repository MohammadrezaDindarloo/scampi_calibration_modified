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
 * Symbolic function: IK_residual_func_cost4_wrt_pd_Nl4
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPdNl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1202

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (396)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = _tmp3 - _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = -_tmp10;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp13 = _tmp2 * _tmp4;
  const Scalar _tmp14 = _tmp0 * _tmp5;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp11 + _tmp16;
  const Scalar _tmp18 = _tmp17 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp23 = _tmp1 * _tmp5;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp30 = std::pow(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp29, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp18 * _tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp33 = -_tmp32;
  const Scalar _tmp34 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = fh1 * (_tmp33 + _tmp36);
  const Scalar _tmp38 = -_tmp17 * fv1 - _tmp31 * _tmp37 - Scalar(40.024799999999999) * _tmp7;
  const Scalar _tmp39 = _tmp25 + _tmp26;
  const Scalar _tmp40 = _tmp21 + _tmp39;
  const Scalar _tmp41 = Scalar(1.0) * _tmp40;
  const Scalar _tmp42 = _tmp10 + _tmp16;
  const Scalar _tmp43 = Scalar(1.0) * _tmp42;
  const Scalar _tmp44 = -_tmp43;
  const Scalar _tmp45 = _tmp12 + _tmp15;
  const Scalar _tmp46 = _tmp10 + _tmp45;
  const Scalar _tmp47 = _tmp44 + _tmp46;
  const Scalar _tmp48 = _tmp20 + _tmp27;
  const Scalar _tmp49 = _tmp11 + _tmp45;
  const Scalar _tmp50 = Scalar(1.0) / (_tmp44 + _tmp49);
  const Scalar _tmp51 = _tmp50 * (_tmp41 - _tmp48);
  const Scalar _tmp52 = _tmp47 * _tmp51;
  const Scalar _tmp53 = _tmp20 + _tmp39;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp41 - _tmp52 - _tmp53);
  const Scalar _tmp55 = Scalar(1.0) * _tmp54;
  const Scalar _tmp56 = _tmp52 * _tmp55 + Scalar(1.0);
  const Scalar _tmp57 = Scalar(1.0) * _tmp50;
  const Scalar _tmp58 = _tmp51 * _tmp55;
  const Scalar _tmp59 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp60 = _tmp59 - p_d(0, 0);
  const Scalar _tmp61 = Scalar(1.0) / (_tmp60);
  const Scalar _tmp62 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp63 = _tmp62 - p_d(1, 0);
  const Scalar _tmp64 = _tmp61 * _tmp63;
  const Scalar _tmp65 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 - p_c(0, 0);
  const Scalar _tmp67 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp68 = _tmp67 - p_c(1, 0);
  const Scalar _tmp69 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp68, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp70 = _tmp66 * _tmp69;
  const Scalar _tmp71 = _tmp64 * _tmp70;
  const Scalar _tmp72 = _tmp68 * _tmp69;
  const Scalar _tmp73 = _tmp71 - _tmp72;
  const Scalar _tmp74 = _tmp34 + _tmp35;
  const Scalar _tmp75 = _tmp33 + _tmp74;
  const Scalar _tmp76 = _tmp48 + position_vector(0, 0);
  const Scalar _tmp77 = _tmp76 - p_b(0, 0);
  const Scalar _tmp78 = std::pow(_tmp77, Scalar(2));
  const Scalar _tmp79 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 - p_b(1, 0);
  const Scalar _tmp81 = _tmp78 + std::pow(_tmp80, Scalar(2));
  const Scalar _tmp82 = std::pow(_tmp81, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp80 * _tmp82;
  const Scalar _tmp84 = _tmp32 + _tmp36;
  const Scalar _tmp85 = _tmp61 * _tmp84;
  const Scalar _tmp86 = _tmp63 * _tmp85;
  const Scalar _tmp87 = _tmp77 * _tmp82;
  const Scalar _tmp88 = _tmp75 * _tmp83 - _tmp86 * _tmp87;
  const Scalar _tmp89 = _tmp64 * _tmp87;
  const Scalar _tmp90 = -_tmp83 + _tmp89;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = _tmp88 * _tmp91;
  const Scalar _tmp93 = _tmp32 + _tmp74;
  const Scalar _tmp94 = -_tmp70 * _tmp86 + _tmp72 * _tmp93 - _tmp73 * _tmp92;
  const Scalar _tmp95 = _tmp84 * _tmp87;
  const Scalar _tmp96 = -_tmp75 * _tmp87 + _tmp95;
  const Scalar _tmp97 = _tmp73 * _tmp91;
  const Scalar _tmp98 = -_tmp51 * _tmp94 + _tmp70 * _tmp84 - _tmp70 * _tmp93 - _tmp96 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) * _tmp92;
  const Scalar _tmp100 = Scalar(1.0) * _tmp91;
  const Scalar _tmp101 = -_tmp100 * _tmp96 + _tmp51 * _tmp99;
  const Scalar _tmp102 = std::pow(_tmp60, Scalar(2));
  const Scalar _tmp103 = std::pow(_tmp63, Scalar(2));
  const Scalar _tmp104 = _tmp102 + _tmp103;
  const Scalar _tmp105 = std::sqrt(_tmp104);
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = _tmp106 * _tmp40;
  const Scalar _tmp108 = _tmp106 * _tmp42;
  const Scalar _tmp109 = _tmp107 * _tmp63 - _tmp108 * _tmp60;
  const Scalar _tmp110 = _tmp105 * _tmp109;
  const Scalar _tmp111 = _tmp110 * _tmp61;
  const Scalar _tmp112 = _tmp111 * _tmp87 - _tmp48 * _tmp83 + _tmp49 * _tmp87;
  const Scalar _tmp113 = _tmp111 * _tmp70 - _tmp112 * _tmp97 + _tmp46 * _tmp70 - _tmp53 * _tmp72;
  const Scalar _tmp114 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp115 = _tmp113 * _tmp114;
  const Scalar _tmp116 = -_tmp100 * _tmp112 - _tmp101 * _tmp115;
  const Scalar _tmp117 = Scalar(1.0) / (_tmp113);
  const Scalar _tmp118 = _tmp116 * _tmp117;
  const Scalar _tmp119 = _tmp118 * _tmp98;
  const Scalar _tmp120 = _tmp101 + _tmp119;
  const Scalar _tmp121 = _tmp114 * _tmp94;
  const Scalar _tmp122 = _tmp47 * _tmp54;
  const Scalar _tmp123 = _tmp119 * _tmp122 - _tmp120 * _tmp121 - _tmp99;
  const Scalar _tmp124 = _tmp31 * fh1;
  const Scalar _tmp125 = Scalar(1.0) * _tmp124;
  const Scalar _tmp126 = _tmp29 * _tmp30;
  const Scalar _tmp127 = _tmp126 * _tmp37 + Scalar(40.024799999999999) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp128 = _tmp47 * _tmp55;
  const Scalar _tmp129 = _tmp64 * _tmp91;
  const Scalar _tmp130 = _tmp91 * _tmp96;
  const Scalar _tmp131 = _tmp64 * _tmp92 + _tmp86;
  const Scalar _tmp132 = _tmp130 * _tmp64 - _tmp131 * _tmp51 - _tmp84;
  const Scalar _tmp133 = -_tmp111 + _tmp112 * _tmp129 - _tmp115 * _tmp132;
  const Scalar _tmp134 = _tmp117 * _tmp98;
  const Scalar _tmp135 = _tmp133 * _tmp134;
  const Scalar _tmp136 = _tmp132 + _tmp135;
  const Scalar _tmp137 = -_tmp121 * _tmp136 + _tmp122 * _tmp135 + _tmp131;
  const Scalar _tmp138 = _tmp126 * fh1;
  const Scalar _tmp139 = Scalar(1.0) * _tmp138;
  const Scalar _tmp140 = _tmp134 * _tmp55;
  const Scalar _tmp141 = Scalar(1.0) * _tmp117;
  const Scalar _tmp142 = _tmp128 * _tmp134 - _tmp141 * _tmp94;
  const Scalar _tmp143 = fh1 * (-_tmp126 * _tmp17 + _tmp28 * _tmp31);
  const Scalar _tmp144 = Scalar(1.0) * _tmp143;
  const Scalar _tmp145 = _tmp41 + _tmp43 * _tmp51;
  const Scalar _tmp146 = 0;
  const Scalar _tmp147 = _tmp145 * _tmp54;
  const Scalar _tmp148 = -_tmp121 * _tmp146 - _tmp147 * _tmp47 + _tmp44;
  const Scalar _tmp149 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp150 = Scalar(1.0) * _tmp149;
  const Scalar _tmp151 = _tmp125 * (_tmp119 * _tmp55 - _tmp123 * _tmp57) +
                         Scalar(1.0) * _tmp127 * (_tmp128 * _tmp50 - _tmp55) +
                         _tmp139 * (_tmp135 * _tmp55 - _tmp137 * _tmp57) +
                         _tmp144 * (_tmp140 - _tmp142 * _tmp57) +
                         _tmp150 * (-_tmp145 * _tmp55 - _tmp148 * _tmp57 + Scalar(1.0)) +
                         Scalar(1.0) * _tmp38 * (-_tmp56 * _tmp57 + _tmp58);
  const Scalar _tmp152 = _tmp105 * _tmp61;
  const Scalar _tmp153 = _tmp87 * _tmp91;
  const Scalar _tmp154 = _tmp114 * _tmp73;
  const Scalar _tmp155 = _tmp146 * _tmp154;
  const Scalar _tmp156 = _tmp114 * _tmp146;
  const Scalar _tmp157 = _tmp156 * _tmp70;
  const Scalar _tmp158 = _tmp149 * (-_tmp153 * _tmp155 + _tmp157);
  const Scalar _tmp159 = -_tmp120 * _tmp154 + Scalar(1.0);
  const Scalar _tmp160 = _tmp114 * _tmp70;
  const Scalar _tmp161 = _tmp120 * _tmp160;
  const Scalar _tmp162 = _tmp124 * (_tmp153 * _tmp159 + _tmp161);
  const Scalar _tmp163 = _tmp136 * _tmp160;
  const Scalar _tmp164 = -_tmp136 * _tmp154 - _tmp64;
  const Scalar _tmp165 = _tmp138 * (_tmp153 * _tmp164 + _tmp163 + Scalar(1.0));
  const Scalar _tmp166 = _tmp100 * _tmp73;
  const Scalar _tmp167 = _tmp117 * _tmp166;
  const Scalar _tmp168 = _tmp143 * (_tmp141 * _tmp70 - _tmp167 * _tmp87);
  const Scalar _tmp169 =
      -_tmp152 * _tmp158 - _tmp152 * _tmp162 - _tmp152 * _tmp165 - _tmp152 * _tmp168;
  const Scalar _tmp170 = Scalar(1.0) / (_tmp169);
  const Scalar _tmp171 = std::asinh(_tmp151 * _tmp170);
  const Scalar _tmp172 = Scalar(1.0) * _tmp171;
  const Scalar _tmp173 = Scalar(1.0) * std::cosh(_tmp172);
  const Scalar _tmp174 = std::pow(_tmp169, Scalar(-2));
  const Scalar _tmp175 =
      std::pow(Scalar(std::pow(_tmp151, Scalar(2)) * _tmp174 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp176 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp177 = _tmp176 * _tmp63;
  const Scalar _tmp178 = _tmp130 * _tmp177;
  const Scalar _tmp179 = _tmp177 * _tmp92;
  const Scalar _tmp180 = std::pow(_tmp90, Scalar(-2));
  const Scalar _tmp181 = _tmp180 * _tmp87;
  const Scalar _tmp182 = _tmp177 * _tmp181;
  const Scalar _tmp183 = _tmp182 * _tmp88;
  const Scalar _tmp184 = _tmp177 * _tmp84;
  const Scalar _tmp185 = _tmp87 * _tmp97;
  const Scalar _tmp186 =
      -_tmp179 * _tmp70 + _tmp183 * _tmp73 + _tmp184 * _tmp185 - _tmp184 * _tmp70;
  const Scalar _tmp187 = _tmp181 * _tmp96;
  const Scalar _tmp188 = _tmp177 * _tmp187;
  const Scalar _tmp189 = -_tmp178 * _tmp70 - _tmp186 * _tmp51 + _tmp188 * _tmp73;
  const Scalar _tmp190 = _tmp117 * _tmp128;
  const Scalar _tmp191 = _tmp106 * _tmp109;
  const Scalar _tmp192 = _tmp112 * _tmp177;
  const Scalar _tmp193 = _tmp192 * _tmp91;
  const Scalar _tmp194 = _tmp181 * _tmp192;
  const Scalar _tmp195 = _tmp110 * _tmp176;
  const Scalar _tmp196 = std::pow(_tmp104, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp197 = _tmp196 * _tmp42;
  const Scalar _tmp198 = _tmp196 * _tmp40;
  const Scalar _tmp199 = _tmp60 * _tmp63;
  const Scalar _tmp200 = _tmp152 * (-_tmp102 * _tmp197 + _tmp108 + _tmp198 * _tmp199);
  const Scalar _tmp201 = -_tmp191 * _tmp87 + _tmp195 * _tmp87 + _tmp200 * _tmp87;
  const Scalar _tmp202 = -_tmp191 * _tmp70 - _tmp193 * _tmp70 + _tmp194 * _tmp73 +
                         _tmp195 * _tmp70 + _tmp200 * _tmp70 - _tmp201 * _tmp97;
  const Scalar _tmp203 = std::pow(_tmp113, Scalar(-2));
  const Scalar _tmp204 = _tmp202 * _tmp203;
  const Scalar _tmp205 = _tmp204 * _tmp98;
  const Scalar _tmp206 = Scalar(1.0) * _tmp94;
  const Scalar _tmp207 =
      -_tmp128 * _tmp205 - _tmp141 * _tmp186 + _tmp189 * _tmp190 + _tmp204 * _tmp206;
  const Scalar _tmp208 = _tmp205 * _tmp55;
  const Scalar _tmp209 = _tmp117 * _tmp55;
  const Scalar _tmp210 = _tmp189 * _tmp209;
  const Scalar _tmp211 = _tmp114 * _tmp186;
  const Scalar _tmp212 = std::pow(_tmp98, Scalar(-2));
  const Scalar _tmp213 = _tmp189 * _tmp212;
  const Scalar _tmp214 = _tmp146 * _tmp213;
  const Scalar _tmp215 = -_tmp146 * _tmp211 + _tmp214 * _tmp94;
  const Scalar _tmp216 = _tmp150 * _tmp50;
  const Scalar _tmp217 = _tmp103 / [&]() {
    const Scalar base = _tmp60;
    return base * base * base;
  }();
  const Scalar _tmp218 = _tmp181 * _tmp217;
  const Scalar _tmp219 = _tmp114 * _tmp202;
  const Scalar _tmp220 = _tmp179 + _tmp184 - _tmp217 * _tmp91 * _tmp95 - _tmp218 * _tmp88;
  const Scalar _tmp221 = _tmp178 - _tmp187 * _tmp217 - _tmp220 * _tmp51;
  const Scalar _tmp222 = _tmp113 * _tmp213;
  const Scalar _tmp223 =
      _tmp134 * (-_tmp112 * _tmp218 - _tmp115 * _tmp221 + _tmp129 * _tmp201 - _tmp132 * _tmp219 +
                 _tmp132 * _tmp222 + _tmp191 + _tmp193 - _tmp195 - _tmp200);
  const Scalar _tmp224 = _tmp133 * _tmp205;
  const Scalar _tmp225 = _tmp117 * _tmp133;
  const Scalar _tmp226 = _tmp189 * _tmp225;
  const Scalar _tmp227 = _tmp221 + _tmp223 - _tmp224 + _tmp226;
  const Scalar _tmp228 = _tmp136 * _tmp212;
  const Scalar _tmp229 = _tmp189 * _tmp228;
  const Scalar _tmp230 = -_tmp121 * _tmp227 + _tmp122 * _tmp223 - _tmp122 * _tmp224 +
                         _tmp122 * _tmp226 - _tmp136 * _tmp211 + _tmp220 + _tmp229 * _tmp94;
  const Scalar _tmp231 = _tmp116 * _tmp205;
  const Scalar _tmp232 = _tmp120 * _tmp213;
  const Scalar _tmp233 = _tmp118 * _tmp189;
  const Scalar _tmp234 = _tmp100 * _tmp87;
  const Scalar _tmp235 = _tmp184 * _tmp234;
  const Scalar _tmp236 = Scalar(1.0) * _tmp183;
  const Scalar _tmp237 = Scalar(1.0) * _tmp188 - _tmp235 * _tmp51 - _tmp236 * _tmp51;
  const Scalar _tmp238 = _tmp134 * (-_tmp100 * _tmp201 - _tmp101 * _tmp219 + _tmp101 * _tmp222 -
                                    _tmp115 * _tmp237 + Scalar(1.0) * _tmp194);
  const Scalar _tmp239 = -_tmp231 + _tmp233 + _tmp237 + _tmp238;
  const Scalar _tmp240 = -_tmp120 * _tmp211 - _tmp121 * _tmp239 - _tmp122 * _tmp231 +
                         _tmp122 * _tmp233 + _tmp122 * _tmp238 + _tmp232 * _tmp94 + _tmp235 +
                         _tmp236;
  const Scalar _tmp241 = _tmp105 * _tmp176;
  const Scalar _tmp242 = _tmp106 * _tmp168;
  const Scalar _tmp243 = _tmp120 * _tmp73;
  const Scalar _tmp244 = -_tmp154 * _tmp239 - _tmp161 * _tmp177 + _tmp213 * _tmp243;
  const Scalar _tmp245 = _tmp78 / _tmp81;
  const Scalar _tmp246 = _tmp177 * _tmp180;
  const Scalar _tmp247 = _tmp245 * _tmp246;
  const Scalar _tmp248 = _tmp124 * _tmp152;
  const Scalar _tmp249 = _tmp106 * _tmp162;
  const Scalar _tmp250 = _tmp166 * _tmp87;
  const Scalar _tmp251 = Scalar(1.0) * _tmp70;
  const Scalar _tmp252 = _tmp141 * _tmp73;
  const Scalar _tmp253 = _tmp117 * _tmp70;
  const Scalar _tmp254 = _tmp177 * _tmp253;
  const Scalar _tmp255 = _tmp143 * _tmp152;
  const Scalar _tmp256 = _tmp106 * _tmp165;
  const Scalar _tmp257 = _tmp228 * _tmp73;
  const Scalar _tmp258 = -_tmp154 * _tmp227 - _tmp163 * _tmp177 - _tmp177 + _tmp189 * _tmp257;
  const Scalar _tmp259 = _tmp164 * _tmp245;
  const Scalar _tmp260 = _tmp138 * _tmp152;
  const Scalar _tmp261 = _tmp106 * _tmp158;
  const Scalar _tmp262 = _tmp149 * _tmp152;
  const Scalar _tmp263 =
      -_tmp158 * _tmp241 - _tmp162 * _tmp241 - _tmp165 * _tmp241 - _tmp168 * _tmp241 + _tmp242 -
      _tmp248 * (_tmp153 * _tmp244 - _tmp159 * _tmp247 + _tmp160 * _tmp239 - _tmp232 * _tmp70) +
      _tmp249 -
      _tmp255 * (_tmp204 * _tmp250 - _tmp204 * _tmp251 - _tmp234 * _tmp254 + _tmp247 * _tmp252) +
      _tmp256 -
      _tmp260 * (_tmp153 * _tmp258 + _tmp160 * _tmp227 - _tmp229 * _tmp70 - _tmp246 * _tmp259) +
      _tmp261 -
      _tmp262 *
          (-_tmp153 * _tmp157 * _tmp177 + _tmp155 * _tmp247 + _tmp185 * _tmp214 - _tmp214 * _tmp70);
  const Scalar _tmp264 = _tmp151 * _tmp174;
  const Scalar _tmp265 =
      _tmp175 *
      (_tmp170 *
           (_tmp125 * (-_tmp231 * _tmp55 + _tmp233 * _tmp55 + _tmp238 * _tmp55 - _tmp240 * _tmp57) +
            _tmp139 * (_tmp223 * _tmp55 - _tmp224 * _tmp55 + _tmp226 * _tmp55 - _tmp230 * _tmp57) +
            _tmp144 * (-_tmp207 * _tmp57 - _tmp208 + _tmp210) - _tmp215 * _tmp216) -
       _tmp263 * _tmp264);
  const Scalar _tmp266 = -_tmp62 + p_d(1, 0);
  const Scalar _tmp267 = -_tmp59 + p_d(0, 0);
  const Scalar _tmp268 =
      std::sqrt(Scalar(std::pow(_tmp266, Scalar(2)) + std::pow(_tmp267, Scalar(2))));
  const Scalar _tmp269 = Scalar(1.4083112389913199) * _tmp169;
  const Scalar _tmp270 = -_tmp171 * _tmp269 - _tmp268;
  const Scalar _tmp271 = Scalar(0.71007031138673404) * _tmp174 * _tmp270;
  const Scalar _tmp272 = Scalar(1.4083112389913199) * _tmp263;
  const Scalar _tmp273 = Scalar(1.0) / (_tmp268);
  const Scalar _tmp274 = Scalar(0.71007031138673404) * _tmp170;
  const Scalar _tmp275 = _tmp270 * _tmp274;
  const Scalar _tmp276 = std::cosh(_tmp275);
  const Scalar _tmp277 = -std::sinh(_tmp172) - std::sinh(_tmp275);
  const Scalar _tmp278 = _tmp149 * _tmp155;
  const Scalar _tmp279 = _tmp138 * _tmp91;
  const Scalar _tmp280 = _tmp124 * _tmp91;
  const Scalar _tmp281 =
      -_tmp143 * _tmp167 + _tmp159 * _tmp280 + _tmp164 * _tmp279 - _tmp278 * _tmp91;
  const Scalar _tmp282 = Scalar(1.0) / (_tmp281);
  const Scalar _tmp283 = _tmp149 * _tmp50;
  const Scalar _tmp284 = _tmp124 * _tmp50;
  const Scalar _tmp285 = _tmp138 * _tmp50;
  const Scalar _tmp286 = _tmp143 * _tmp50;
  const Scalar _tmp287 = _tmp127 * _tmp55;
  const Scalar _tmp288 = _tmp123 * _tmp284 + _tmp137 * _tmp285 + _tmp142 * _tmp286 +
                         _tmp148 * _tmp283 - _tmp287 * _tmp47 * _tmp50 + _tmp38 * _tmp50 * _tmp56;
  const Scalar _tmp289 = std::asinh(_tmp282 * _tmp288);
  const Scalar _tmp290 = Scalar(1.4083112389913199) * _tmp289;
  const Scalar _tmp291 =
      -_tmp281 * _tmp290 - std::sqrt(Scalar(std::pow(Scalar(-_tmp76 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp79 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp292 = Scalar(0.71007031138673404) * _tmp282;
  const Scalar _tmp293 = _tmp291 * _tmp292;
  const Scalar _tmp294 = Scalar(1.0) * _tmp289;
  const Scalar _tmp295 = -std::sinh(_tmp293) - std::sinh(_tmp294);
  const Scalar _tmp296 = _tmp143 * _tmp166;
  const Scalar _tmp297 = _tmp149 * _tmp214;
  const Scalar _tmp298 = _tmp141 * _tmp143;
  const Scalar _tmp299 = _tmp298 * _tmp73;
  const Scalar _tmp300 = _tmp138 * _tmp164;
  const Scalar _tmp301 = _tmp149 * _tmp156;
  const Scalar _tmp302 = _tmp301 * _tmp70;
  const Scalar _tmp303 = _tmp100 * _tmp143;
  const Scalar _tmp304 = -_tmp124 * _tmp159 * _tmp182 - _tmp177 * _tmp302 * _tmp91 +
                         _tmp182 * _tmp278 + _tmp182 * _tmp299 - _tmp182 * _tmp300 +
                         _tmp204 * _tmp296 + _tmp244 * _tmp280 - _tmp254 * _tmp303 +
                         _tmp258 * _tmp279 + _tmp297 * _tmp97;
  const Scalar _tmp305 = std::pow(_tmp281, Scalar(-2));
  const Scalar _tmp306 =
      std::pow(Scalar(std::pow(_tmp288, Scalar(2)) * _tmp305 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp307 = _tmp288 * _tmp305;
  const Scalar _tmp308 =
      _tmp306 *
      (_tmp282 * (_tmp207 * _tmp286 + _tmp215 * _tmp283 + _tmp230 * _tmp285 + _tmp240 * _tmp284) -
       _tmp304 * _tmp307);
  const Scalar _tmp309 = Scalar(1.0) * std::cosh(_tmp294);
  const Scalar _tmp310 = std::cosh(_tmp293);
  const Scalar _tmp311 = Scalar(0.71007031138673404) * _tmp291 * _tmp305;
  const Scalar _tmp312 = Scalar(1.4083112389913199) * _tmp281;
  const Scalar _tmp313 = _tmp114 * _tmp138;
  const Scalar _tmp314 = _tmp114 * _tmp124;
  const Scalar _tmp315 = _tmp120 * _tmp314 + _tmp136 * _tmp313 + _tmp298 + _tmp301;
  const Scalar _tmp316 = Scalar(1.0) / (_tmp315);
  const Scalar _tmp317 = _tmp124 * _tmp54;
  const Scalar _tmp318 = _tmp138 * _tmp54;
  const Scalar _tmp319 = -_tmp119 * _tmp317 - _tmp135 * _tmp318 - _tmp140 * _tmp143 +
                         _tmp147 * _tmp149 + _tmp287 - _tmp38 * _tmp58;
  const Scalar _tmp320 = std::asinh(_tmp316 * _tmp319);
  const Scalar _tmp321 = Scalar(1.0) * _tmp320;
  const Scalar _tmp322 = Scalar(1.4083112389913199) * _tmp315;
  const Scalar _tmp323 =
      -_tmp320 * _tmp322 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp67 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp324 = Scalar(0.71007031138673404) * _tmp316;
  const Scalar _tmp325 = _tmp323 * _tmp324;
  const Scalar _tmp326 = -std::sinh(_tmp321) - std::sinh(_tmp325);
  const Scalar _tmp327 = -_tmp124 * _tmp232 - _tmp138 * _tmp229 - _tmp144 * _tmp204 +
                         _tmp227 * _tmp313 + _tmp239 * _tmp314 - _tmp297;
  const Scalar _tmp328 = Scalar(1.4083112389913199) * _tmp327;
  const Scalar _tmp329 = std::cosh(_tmp325);
  const Scalar _tmp330 = std::pow(_tmp315, Scalar(-2));
  const Scalar _tmp331 = Scalar(0.71007031138673404) * _tmp323 * _tmp330;
  const Scalar _tmp332 = _tmp319 * _tmp330;
  const Scalar _tmp333 =
      std::pow(Scalar(std::pow(_tmp319, Scalar(2)) * _tmp330 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp334 =
      _tmp333 *
      (_tmp316 * (_tmp143 * _tmp208 - _tmp143 * _tmp210 - _tmp223 * _tmp318 + _tmp224 * _tmp318 -
                  _tmp226 * _tmp318 + _tmp231 * _tmp317 - _tmp233 * _tmp317 - _tmp238 * _tmp317) -
       _tmp327 * _tmp332);
  const Scalar _tmp335 = Scalar(1.0) * std::cosh(_tmp321);
  const Scalar _tmp336 = _tmp61 * _tmp91;
  const Scalar _tmp337 = _tmp180 * _tmp61;
  const Scalar _tmp338 = _tmp245 * _tmp337;
  const Scalar _tmp339 = _tmp337 * _tmp87;
  const Scalar _tmp340 = _tmp339 * _tmp96;
  const Scalar _tmp341 = _tmp336 * _tmp96;
  const Scalar _tmp342 = _tmp339 * _tmp88;
  const Scalar _tmp343 = _tmp85 * _tmp87;
  const Scalar _tmp344 = _tmp61 * _tmp92;
  const Scalar _tmp345 = -_tmp342 * _tmp73 - _tmp343 * _tmp97 + _tmp344 * _tmp70 + _tmp70 * _tmp85;
  const Scalar _tmp346 = -_tmp340 * _tmp73 + _tmp341 * _tmp70 - _tmp345 * _tmp51;
  const Scalar _tmp347 = _tmp212 * _tmp346;
  const Scalar _tmp348 = _tmp146 * _tmp347;
  const Scalar _tmp349 = _tmp112 * _tmp336;
  const Scalar _tmp350 = _tmp152 * (_tmp103 * _tmp198 - _tmp107 - _tmp197 * _tmp199);
  const Scalar _tmp351 = -_tmp191 * _tmp89 + _tmp350 * _tmp87;
  const Scalar _tmp352 = _tmp112 * _tmp339;
  const Scalar _tmp353 =
      -_tmp191 * _tmp71 + _tmp349 * _tmp70 + _tmp350 * _tmp70 - _tmp351 * _tmp97 - _tmp352 * _tmp73;
  const Scalar _tmp354 = _tmp203 * _tmp353;
  const Scalar _tmp355 = _tmp253 * _tmp61;
  const Scalar _tmp356 = _tmp225 * _tmp346;
  const Scalar _tmp357 = _tmp114 * _tmp353;
  const Scalar _tmp358 = _tmp113 * _tmp347;
  const Scalar _tmp359 = _tmp153 * _tmp184 + _tmp183 - _tmp344 - _tmp85;
  const Scalar _tmp360 = _tmp188 - _tmp341 - _tmp359 * _tmp51;
  const Scalar _tmp361 =
      _tmp134 * (-_tmp115 * _tmp360 + _tmp129 * _tmp351 - _tmp132 * _tmp357 + _tmp132 * _tmp358 +
                 _tmp191 * _tmp64 + _tmp194 - _tmp349 - _tmp350);
  const Scalar _tmp362 = _tmp354 * _tmp98;
  const Scalar _tmp363 = _tmp133 * _tmp362;
  const Scalar _tmp364 = _tmp356 + _tmp360 + _tmp361 - _tmp363;
  const Scalar _tmp365 = -_tmp154 * _tmp364 + _tmp163 * _tmp61 + _tmp257 * _tmp346 + _tmp61;
  const Scalar _tmp366 = _tmp228 * _tmp346;
  const Scalar _tmp367 = _tmp100 * _tmp343;
  const Scalar _tmp368 = Scalar(1.0) * _tmp342;
  const Scalar _tmp369 = -Scalar(1.0) * _tmp340 + _tmp367 * _tmp51 + _tmp368 * _tmp51;
  const Scalar _tmp370 = _tmp134 * (-_tmp100 * _tmp351 - _tmp101 * _tmp357 + _tmp101 * _tmp358 -
                                    _tmp115 * _tmp369 - Scalar(1.0) * _tmp352);
  const Scalar _tmp371 = _tmp118 * _tmp346;
  const Scalar _tmp372 = _tmp116 * _tmp362;
  const Scalar _tmp373 = _tmp369 + _tmp370 + _tmp371 - _tmp372;
  const Scalar _tmp374 = _tmp120 * _tmp347;
  const Scalar _tmp375 = -_tmp154 * _tmp373 + _tmp161 * _tmp61 + _tmp243 * _tmp347;
  const Scalar _tmp376 = _tmp159 * _tmp337;
  const Scalar _tmp377 =
      _tmp242 * _tmp64 -
      _tmp248 * (_tmp153 * _tmp375 + _tmp160 * _tmp373 + _tmp245 * _tmp376 - _tmp374 * _tmp70) +
      _tmp249 * _tmp64 -
      _tmp255 * (_tmp234 * _tmp355 + _tmp250 * _tmp354 - _tmp251 * _tmp354 - _tmp252 * _tmp338) +
      _tmp256 * _tmp64 -
      _tmp260 * (_tmp153 * _tmp365 + _tmp160 * _tmp364 + _tmp259 * _tmp337 - _tmp366 * _tmp70) +
      _tmp261 * _tmp64 -
      _tmp262 *
          (-_tmp155 * _tmp338 + _tmp157 * _tmp336 * _tmp87 + _tmp185 * _tmp348 - _tmp348 * _tmp70);
  const Scalar _tmp378 = _tmp114 * _tmp345;
  const Scalar _tmp379 = _tmp346 * _tmp94;
  const Scalar _tmp380 = -_tmp121 * _tmp364 + _tmp122 * _tmp356 + _tmp122 * _tmp361 -
                         _tmp122 * _tmp363 - _tmp136 * _tmp378 + _tmp228 * _tmp379 + _tmp359;
  const Scalar _tmp381 = _tmp212 * _tmp379;
  const Scalar _tmp382 = -_tmp120 * _tmp378 + _tmp120 * _tmp381 - _tmp121 * _tmp373 +
                         _tmp122 * _tmp370 + _tmp122 * _tmp371 - _tmp122 * _tmp372 - _tmp367 -
                         _tmp368;
  const Scalar _tmp383 =
      -_tmp128 * _tmp362 - _tmp141 * _tmp345 + _tmp190 * _tmp346 + _tmp206 * _tmp354;
  const Scalar _tmp384 = _tmp362 * _tmp55;
  const Scalar _tmp385 = _tmp209 * _tmp346;
  const Scalar _tmp386 = -_tmp146 * _tmp378 + _tmp146 * _tmp381;
  const Scalar _tmp387 =
      _tmp175 *
      (_tmp170 *
           (_tmp125 * (_tmp370 * _tmp55 + _tmp371 * _tmp55 - _tmp372 * _tmp55 - _tmp382 * _tmp57) +
            _tmp139 * (_tmp356 * _tmp55 + _tmp361 * _tmp55 - _tmp363 * _tmp55 - _tmp380 * _tmp57) +
            _tmp144 * (-_tmp383 * _tmp57 - _tmp384 + _tmp385) - _tmp216 * _tmp386) -
       _tmp264 * _tmp377);
  const Scalar _tmp388 = Scalar(1.4083112389913199) * _tmp377;
  const Scalar _tmp389 = _tmp149 * _tmp348;
  const Scalar _tmp390 = _tmp124 * _tmp376 * _tmp87 - _tmp278 * _tmp339 + _tmp279 * _tmp365 +
                         _tmp280 * _tmp375 + _tmp296 * _tmp354 - _tmp299 * _tmp339 +
                         _tmp300 * _tmp339 + _tmp302 * _tmp336 + _tmp303 * _tmp355 +
                         _tmp389 * _tmp97;
  const Scalar _tmp391 = Scalar(1.4083112389913199) * _tmp390;
  const Scalar _tmp392 =
      _tmp306 *
      (_tmp282 * (_tmp283 * _tmp386 + _tmp284 * _tmp382 + _tmp285 * _tmp380 + _tmp286 * _tmp383) -
       _tmp307 * _tmp390);
  const Scalar _tmp393 = -_tmp124 * _tmp374 - _tmp138 * _tmp366 - _tmp144 * _tmp354 +
                         _tmp313 * _tmp364 + _tmp314 * _tmp373 - _tmp389;
  const Scalar _tmp394 = Scalar(1.4083112389913199) * _tmp393;
  const Scalar _tmp395 =
      _tmp333 *
      (_tmp316 * (_tmp143 * _tmp384 - _tmp143 * _tmp385 - _tmp317 * _tmp370 - _tmp317 * _tmp371 +
                  _tmp317 * _tmp372 - _tmp318 * _tmp356 - _tmp318 * _tmp361 + _tmp318 * _tmp363) -
       _tmp332 * _tmp393);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp269 * (-_tmp173 * _tmp265 -
                 _tmp276 * (-_tmp263 * _tmp271 + _tmp274 * (-_tmp171 * _tmp272 - _tmp265 * _tmp269 -
                                                            _tmp267 * _tmp273))) +
      _tmp272 * _tmp277;
  _res(2, 0) =
      Scalar(1.4083112389913199) * _tmp295 * _tmp304 +
      _tmp312 *
          (-_tmp308 * _tmp309 -
           _tmp310 * (_tmp292 * (-_tmp290 * _tmp304 - _tmp308 * _tmp312) - _tmp304 * _tmp311));
  _res(3, 0) =
      _tmp322 *
          (-_tmp329 * (_tmp324 * (-_tmp320 * _tmp328 - _tmp322 * _tmp334) - _tmp327 * _tmp331) -
           _tmp334 * _tmp335) +
      _tmp326 * _tmp328;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp269 * (-_tmp173 * _tmp387 -
                 _tmp276 * (-_tmp271 * _tmp377 + _tmp274 * (-_tmp171 * _tmp388 - _tmp266 * _tmp273 -
                                                            _tmp269 * _tmp387))) +
      _tmp277 * _tmp388;
  _res(2, 1) =
      _tmp295 * _tmp391 + _tmp312 * (-_tmp309 * _tmp392 -
                                     _tmp310 * (_tmp292 * (-_tmp289 * _tmp391 - _tmp312 * _tmp392) -
                                                _tmp311 * _tmp390));
  _res(3, 1) =
      _tmp322 *
          (-_tmp329 * (_tmp324 * (-_tmp320 * _tmp394 - _tmp322 * _tmp395) - _tmp331 * _tmp393) -
           _tmp335 * _tmp395) +
      _tmp326 * _tmp394;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
