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
 * Symbolic function: IK_residual_func_cost2_wrt_pd_Nl11
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPdNl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1208

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
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp2 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp0 * _tmp9;
  const Scalar _tmp11 = _tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = _tmp0 * _tmp7;
  const Scalar _tmp14 = _tmp2 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -_tmp18 + p_d(0, 0);
  const Scalar _tmp20 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp24 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp25 = _tmp6 * _tmp9;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp23 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = -_tmp28 + p_d(2, 0) - position_vector(2, 0);
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp32 = _tmp24 - _tmp25;
  const Scalar _tmp33 = -Scalar(0.010999999999999999) * _tmp32;
  const Scalar _tmp34 = -_tmp31 + _tmp33;
  const Scalar _tmp35 = _tmp30 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp37 = -_tmp36 + p_d(1, 0);
  const Scalar _tmp38 = std::pow(_tmp19, Scalar(2)) + std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 =
      std::pow(Scalar(std::pow(_tmp29, Scalar(2)) + _tmp38), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp18 - p_d(0, 0);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = std::pow(_tmp40, Scalar(2));
  const Scalar _tmp43 = _tmp36 - p_d(1, 0);
  const Scalar _tmp44 = std::pow(_tmp43, Scalar(2));
  const Scalar _tmp45 = _tmp42 + _tmp44;
  const Scalar _tmp46 = std::sqrt(_tmp45);
  const Scalar _tmp47 = _tmp41 * _tmp46;
  const Scalar _tmp48 = _tmp41 * _tmp43;
  const Scalar _tmp49 = _tmp12 - _tmp15;
  const Scalar _tmp50 = _tmp49 + _tmp5;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - p_a(0, 0);
  const Scalar _tmp53 = -_tmp30;
  const Scalar _tmp54 = _tmp34 + _tmp53;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_a(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp52 * _tmp57;
  const Scalar _tmp59 = _tmp48 * _tmp58;
  const Scalar _tmp60 = _tmp56 * _tmp57;
  const Scalar _tmp61 = _tmp59 - _tmp60;
  const Scalar _tmp62 = _tmp23 - _tmp26;
  const Scalar _tmp63 = _tmp21 + _tmp62;
  const Scalar _tmp64 = _tmp16 + _tmp4;
  const Scalar _tmp65 = _tmp64 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 - p_c(0, 0);
  const Scalar _tmp67 = std::pow(_tmp66, Scalar(2));
  const Scalar _tmp68 = _tmp31 + _tmp33;
  const Scalar _tmp69 = _tmp30 + _tmp68;
  const Scalar _tmp70 = _tmp69 + position_vector(1, 0);
  const Scalar _tmp71 = _tmp70 - p_c(1, 0);
  const Scalar _tmp72 = _tmp67 + std::pow(_tmp71, Scalar(2));
  const Scalar _tmp73 = std::pow(_tmp72, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp74 = _tmp66 * _tmp73;
  const Scalar _tmp75 = _tmp48 * _tmp74;
  const Scalar _tmp76 = _tmp71 * _tmp73;
  const Scalar _tmp77 = _tmp75 - _tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp79 = _tmp28 * _tmp74;
  const Scalar _tmp80 = _tmp20 + _tmp27;
  const Scalar _tmp81 = -_tmp48 * _tmp79 + _tmp76 * _tmp80;
  const Scalar _tmp82 = _tmp78 * _tmp81;
  const Scalar _tmp83 = _tmp28 * _tmp58;
  const Scalar _tmp84 = -_tmp48 * _tmp83 + _tmp60 * _tmp63 - _tmp61 * _tmp82;
  const Scalar _tmp85 = Scalar(1.0) * _tmp35;
  const Scalar _tmp86 = -_tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp69 + _tmp86);
  const Scalar _tmp88 = Scalar(1.0) * _tmp17;
  const Scalar _tmp89 = -_tmp64 + _tmp88;
  const Scalar _tmp90 = _tmp87 * _tmp89;
  const Scalar _tmp91 = -_tmp74 * _tmp80 + _tmp79;
  const Scalar _tmp92 = _tmp61 * _tmp78;
  const Scalar _tmp93 = -_tmp58 * _tmp63 + _tmp83 - _tmp84 * _tmp90 - _tmp91 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp96 = _tmp17 * _tmp95;
  const Scalar _tmp97 = _tmp35 * _tmp95;
  const Scalar _tmp98 = -_tmp40 * _tmp97 + _tmp43 * _tmp96;
  const Scalar _tmp99 = _tmp47 * _tmp98;
  const Scalar _tmp100 = -_tmp64 * _tmp76 + _tmp69 * _tmp74 + _tmp74 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp78;
  const Scalar _tmp102 = -_tmp100 * _tmp92 - _tmp50 * _tmp60 + _tmp54 * _tmp58 + _tmp58 * _tmp99;
  const Scalar _tmp103 = Scalar(1.0) * _tmp78;
  const Scalar _tmp104 = Scalar(1.0) * _tmp82;
  const Scalar _tmp105 = -_tmp103 * _tmp91 + _tmp104 * _tmp90;
  const Scalar _tmp106 = _tmp105 * _tmp94;
  const Scalar _tmp107 = -Scalar(1.0) * _tmp101 - _tmp102 * _tmp106;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp109 = _tmp108 * _tmp93;
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp105 + _tmp110;
  const Scalar _tmp112 = _tmp111 * _tmp94;
  const Scalar _tmp113 = -_tmp112 * _tmp61 + Scalar(1.0);
  const Scalar _tmp114 = _tmp74 * _tmp78;
  const Scalar _tmp115 = _tmp112 * _tmp58;
  const Scalar _tmp116 = _tmp4 + _tmp49;
  const Scalar _tmp117 = _tmp116 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp118 = _tmp53 + _tmp68;
  const Scalar _tmp119 = _tmp118 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp120 =
      std::pow(Scalar(std::pow(_tmp117, Scalar(2)) + std::pow(_tmp119, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp121 = _tmp119 * _tmp120;
  const Scalar _tmp122 = _tmp121 * fh1;
  const Scalar _tmp123 = _tmp122 * (_tmp113 * _tmp114 + _tmp115);
  const Scalar _tmp124 = _tmp78 * _tmp91;
  const Scalar _tmp125 = _tmp28 * _tmp48 + _tmp48 * _tmp82;
  const Scalar _tmp126 = _tmp124 * _tmp48 - _tmp125 * _tmp90 - _tmp28;
  const Scalar _tmp127 = _tmp102 * _tmp94;
  const Scalar _tmp128 = _tmp101 * _tmp48 - _tmp126 * _tmp127 - _tmp99;
  const Scalar _tmp129 = _tmp109 * _tmp128;
  const Scalar _tmp130 = _tmp126 + _tmp129;
  const Scalar _tmp131 = _tmp130 * _tmp94;
  const Scalar _tmp132 = _tmp131 * _tmp58;
  const Scalar _tmp133 = -_tmp131 * _tmp61 - _tmp48;
  const Scalar _tmp134 = _tmp117 * _tmp120;
  const Scalar _tmp135 = _tmp134 * fh1;
  const Scalar _tmp136 = _tmp135 * (_tmp114 * _tmp133 + _tmp132 + Scalar(1.0));
  const Scalar _tmp137 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp138 = _tmp85 * _tmp90 + _tmp88;
  const Scalar _tmp139 = 0;
  const Scalar _tmp140 = _tmp139 * _tmp94;
  const Scalar _tmp141 = _tmp74 * _tmp92;
  const Scalar _tmp142 = _tmp140 * _tmp58;
  const Scalar _tmp143 = _tmp137 * (-_tmp140 * _tmp141 + _tmp142);
  const Scalar _tmp144 = Scalar(1.0) * _tmp108;
  const Scalar _tmp145 = fh1 * (_tmp116 * _tmp121 - _tmp118 * _tmp134);
  const Scalar _tmp146 = _tmp145 * (-_tmp141 * _tmp144 + _tmp144 * _tmp58);
  const Scalar _tmp147 = -_tmp123 * _tmp47 - _tmp136 * _tmp47 - _tmp143 * _tmp47 - _tmp146 * _tmp47;
  const Scalar _tmp148 = _tmp54 + _tmp86;
  const Scalar _tmp149 = _tmp148 * _tmp90;
  const Scalar _tmp150 = Scalar(1.0) / (-_tmp149 - _tmp50 + _tmp88);
  const Scalar _tmp151 = Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = _tmp148 * _tmp87;
  const Scalar _tmp153 = fh1 * (_tmp20 + _tmp62);
  const Scalar _tmp154 = Scalar(40.024799999999999) * _tmp11 + _tmp116 * fv1 + _tmp134 * _tmp153;
  const Scalar _tmp155 = _tmp148 * _tmp150;
  const Scalar _tmp156 = _tmp84 * _tmp94;
  const Scalar _tmp157 = _tmp125 + _tmp129 * _tmp155 - _tmp130 * _tmp156;
  const Scalar _tmp158 = Scalar(1.0) * _tmp87;
  const Scalar _tmp159 = Scalar(1.0) * _tmp135;
  const Scalar _tmp160 = _tmp138 * _tmp150;
  const Scalar _tmp161 = -_tmp139 * _tmp156 - _tmp148 * _tmp160 + _tmp86;
  const Scalar _tmp162 = -_tmp104 + _tmp110 * _tmp155 - _tmp111 * _tmp156;
  const Scalar _tmp163 = Scalar(1.0) * _tmp122;
  const Scalar _tmp164 = -_tmp118 * fv1 - _tmp121 * _tmp153 - Scalar(40.024799999999999) * _tmp32;
  const Scalar _tmp165 = _tmp151 * _tmp90;
  const Scalar _tmp166 = _tmp87 * (_tmp149 * _tmp151 + Scalar(1.0));
  const Scalar _tmp167 = _tmp109 * _tmp151;
  const Scalar _tmp168 = -_tmp144 * _tmp84 + _tmp148 * _tmp167;
  const Scalar _tmp169 = Scalar(1.0) * _tmp145;
  const Scalar _tmp170 =
      Scalar(1.0) * _tmp137 * (-_tmp138 * _tmp151 - _tmp158 * _tmp161 + Scalar(1.0)) +
      Scalar(1.0) * _tmp154 * (_tmp151 * _tmp152 - _tmp151) +
      _tmp159 * (_tmp129 * _tmp151 - _tmp157 * _tmp158) +
      _tmp163 * (_tmp110 * _tmp151 - _tmp158 * _tmp162) +
      Scalar(1.0) * _tmp164 * (_tmp165 - Scalar(1.0) * _tmp166) +
      _tmp169 * (-_tmp158 * _tmp168 + _tmp167);
  const Scalar _tmp171 = Scalar(1.0) / (_tmp147);
  const Scalar _tmp172 = std::asinh(_tmp170 * _tmp171);
  const Scalar _tmp173 = Scalar(1.4083112389913199) * _tmp172;
  const Scalar _tmp174 = std::sqrt(_tmp38);
  const Scalar _tmp175 = -_tmp147 * _tmp173 - _tmp174;
  const Scalar _tmp176 = Scalar(0.71007031138673404) * _tmp171;
  const Scalar _tmp177 = _tmp175 * _tmp176;
  const Scalar _tmp178 = Scalar(1.0) * _tmp172;
  const Scalar _tmp179 = -std::sinh(_tmp177) - std::sinh(_tmp178);
  const Scalar _tmp180 = Scalar(1.0) / (_tmp42);
  const Scalar _tmp181 = _tmp180 * _tmp46;
  const Scalar _tmp182 = _tmp123 * _tmp95;
  const Scalar _tmp183 = _tmp146 * _tmp95;
  const Scalar _tmp184 = _tmp95 * _tmp98;
  const Scalar _tmp185 = _tmp181 * _tmp98;
  const Scalar _tmp186 = std::pow(_tmp45, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp187 = _tmp186 * _tmp35;
  const Scalar _tmp188 = _tmp17 * _tmp186;
  const Scalar _tmp189 = _tmp40 * _tmp43;
  const Scalar _tmp190 = _tmp47 * (-_tmp187 * _tmp42 + _tmp188 * _tmp189 + _tmp97);
  const Scalar _tmp191 = -_tmp184 * _tmp74 + _tmp185 * _tmp74 + _tmp190 * _tmp74;
  const Scalar _tmp192 = std::pow(_tmp77, Scalar(-2));
  const Scalar _tmp193 = _tmp180 * _tmp43;
  const Scalar _tmp194 = _tmp192 * _tmp193;
  const Scalar _tmp195 = _tmp100 * _tmp74;
  const Scalar _tmp196 = _tmp194 * _tmp195;
  const Scalar _tmp197 = _tmp101 * _tmp193;
  const Scalar _tmp198 = -_tmp184 * _tmp58 + _tmp185 * _tmp58 + _tmp190 * _tmp58 -
                         _tmp191 * _tmp92 + _tmp196 * _tmp61 - _tmp197 * _tmp58;
  const Scalar _tmp199 = std::pow(_tmp102, Scalar(-2));
  const Scalar _tmp200 = _tmp198 * _tmp199;
  const Scalar _tmp201 = Scalar(1.0) * _tmp141;
  const Scalar _tmp202 = _tmp193 * _tmp58;
  const Scalar _tmp203 = _tmp103 * _tmp108;
  const Scalar _tmp204 = _tmp202 * _tmp203;
  const Scalar _tmp205 = _tmp67 / _tmp72;
  const Scalar _tmp206 = _tmp194 * _tmp205;
  const Scalar _tmp207 = _tmp144 * _tmp61;
  const Scalar _tmp208 = Scalar(1.0) * _tmp58;
  const Scalar _tmp209 = _tmp145 * _tmp47;
  const Scalar _tmp210 = _tmp143 * _tmp95;
  const Scalar _tmp211 = _tmp74 * _tmp81;
  const Scalar _tmp212 = _tmp194 * _tmp211;
  const Scalar _tmp213 = _tmp193 * _tmp79;
  const Scalar _tmp214 = _tmp193 * _tmp82;
  const Scalar _tmp215 = -_tmp193 * _tmp83 + _tmp212 * _tmp61 + _tmp213 * _tmp92 - _tmp214 * _tmp58;
  const Scalar _tmp216 = _tmp124 * _tmp193;
  const Scalar _tmp217 = _tmp74 * _tmp91;
  const Scalar _tmp218 = _tmp194 * _tmp217;
  const Scalar _tmp219 = -_tmp215 * _tmp90 - _tmp216 * _tmp58 + _tmp218 * _tmp61;
  const Scalar _tmp220 = std::pow(_tmp93, Scalar(-2));
  const Scalar _tmp221 = _tmp219 * _tmp220;
  const Scalar _tmp222 = _tmp111 * _tmp221;
  const Scalar _tmp223 = _tmp107 * _tmp108;
  const Scalar _tmp224 = _tmp219 * _tmp223;
  const Scalar _tmp225 = _tmp102 * _tmp105;
  const Scalar _tmp226 = _tmp158 * _tmp89;
  const Scalar _tmp227 = _tmp78 * _tmp79;
  const Scalar _tmp228 = _tmp193 * _tmp227;
  const Scalar _tmp229 = -_tmp212 * _tmp226 + Scalar(1.0) * _tmp218 - _tmp226 * _tmp228;
  const Scalar _tmp230 = _tmp109 * (-_tmp103 * _tmp191 - _tmp106 * _tmp198 - _tmp127 * _tmp229 +
                                    Scalar(1.0) * _tmp196 + _tmp221 * _tmp225);
  const Scalar _tmp231 = _tmp200 * _tmp93;
  const Scalar _tmp232 = _tmp107 * _tmp231;
  const Scalar _tmp233 = _tmp224 + _tmp229 + _tmp230 - _tmp232;
  const Scalar _tmp234 = _tmp61 * _tmp94;
  const Scalar _tmp235 = -_tmp115 * _tmp193 + _tmp222 * _tmp61 - _tmp233 * _tmp234;
  const Scalar _tmp236 = _tmp58 * _tmp94;
  const Scalar _tmp237 = _tmp122 * _tmp47;
  const Scalar _tmp238 = _tmp136 * _tmp95;
  const Scalar _tmp239 = _tmp139 * _tmp141;
  const Scalar _tmp240 = _tmp139 * _tmp58;
  const Scalar _tmp241 = _tmp140 * _tmp61;
  const Scalar _tmp242 = _tmp114 * _tmp142;
  const Scalar _tmp243 = _tmp137 * _tmp47;
  const Scalar _tmp244 = _tmp133 * _tmp205;
  const Scalar _tmp245 = _tmp48 * _tmp78;
  const Scalar _tmp246 = _tmp126 * _tmp94;
  const Scalar _tmp247 = _tmp44 / [&]() {
    const Scalar base = _tmp40;
    return base * base * base;
  }();
  const Scalar _tmp248 = _tmp192 * _tmp247;
  const Scalar _tmp249 = _tmp193 * _tmp28 - _tmp211 * _tmp248 + _tmp214 - _tmp227 * _tmp247;
  const Scalar _tmp250 = _tmp216 - _tmp217 * _tmp248 - _tmp249 * _tmp90;
  const Scalar _tmp251 = _tmp102 * _tmp126;
  const Scalar _tmp252 =
      _tmp109 * (-_tmp127 * _tmp250 + _tmp184 - _tmp185 - _tmp190 + _tmp191 * _tmp245 -
                 _tmp195 * _tmp248 + _tmp197 - _tmp198 * _tmp246 + _tmp221 * _tmp251);
  const Scalar _tmp253 = _tmp108 * _tmp128;
  const Scalar _tmp254 = _tmp219 * _tmp253;
  const Scalar _tmp255 = _tmp128 * _tmp231;
  const Scalar _tmp256 = _tmp250 + _tmp252 + _tmp254 - _tmp255;
  const Scalar _tmp257 = _tmp130 * _tmp61;
  const Scalar _tmp258 = -_tmp132 * _tmp193 - _tmp193 + _tmp221 * _tmp257 - _tmp234 * _tmp256;
  const Scalar _tmp259 = _tmp130 * _tmp58;
  const Scalar _tmp260 = _tmp135 * _tmp47;
  const Scalar _tmp261 =
      -_tmp123 * _tmp181 - _tmp136 * _tmp181 - _tmp143 * _tmp181 - _tmp146 * _tmp181 + _tmp182 +
      _tmp183 -
      _tmp209 * (_tmp200 * _tmp201 - _tmp200 * _tmp208 - _tmp204 * _tmp74 + _tmp206 * _tmp207) +
      _tmp210 -
      _tmp237 * (-_tmp113 * _tmp206 + _tmp114 * _tmp235 - _tmp222 * _tmp58 + _tmp233 * _tmp236) +
      _tmp238 -
      _tmp243 * (-_tmp193 * _tmp242 + _tmp206 * _tmp241 + _tmp221 * _tmp239 - _tmp221 * _tmp240) -
      _tmp260 * (_tmp114 * _tmp258 - _tmp194 * _tmp244 - _tmp221 * _tmp259 + _tmp236 * _tmp256);
  const Scalar _tmp262 = Scalar(1.4083112389913199) * _tmp261;
  const Scalar _tmp263 = std::cosh(_tmp177);
  const Scalar _tmp264 = std::pow(_tmp147, Scalar(-2));
  const Scalar _tmp265 = Scalar(0.71007031138673404) * _tmp175 * _tmp264;
  const Scalar _tmp266 = Scalar(1.0) / (_tmp174);
  const Scalar _tmp267 = Scalar(1.4083112389913199) * _tmp147;
  const Scalar _tmp268 =
      std::pow(Scalar(std::pow(_tmp170, Scalar(2)) * _tmp264 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp269 = _tmp170 * _tmp264;
  const Scalar _tmp270 = _tmp221 * _tmp84;
  const Scalar _tmp271 = _tmp130 * _tmp270 - _tmp131 * _tmp215 + _tmp155 * _tmp252 +
                         _tmp155 * _tmp254 - _tmp155 * _tmp255 - _tmp156 * _tmp256 + _tmp249;
  const Scalar _tmp272 = _tmp103 * _tmp213 + _tmp111 * _tmp270 - _tmp112 * _tmp215 +
                         _tmp155 * _tmp224 + _tmp155 * _tmp230 - _tmp155 * _tmp232 -
                         _tmp156 * _tmp233 + Scalar(1.0) * _tmp212;
  const Scalar _tmp273 = _tmp139 * _tmp270 - _tmp140 * _tmp215;
  const Scalar _tmp274 = _tmp137 * _tmp158;
  const Scalar _tmp275 = _tmp151 * _tmp231;
  const Scalar _tmp276 = Scalar(1.0) * _tmp84;
  const Scalar _tmp277 = _tmp108 * _tmp151;
  const Scalar _tmp278 = _tmp219 * _tmp277;
  const Scalar _tmp279 =
      -_tmp144 * _tmp215 - _tmp148 * _tmp275 + _tmp148 * _tmp278 + _tmp200 * _tmp276;
  const Scalar _tmp280 = _tmp268 * (_tmp171 * (_tmp159 * (_tmp151 * _tmp252 + _tmp151 * _tmp254 -
                                                          _tmp151 * _tmp255 - _tmp158 * _tmp271) +
                                               _tmp163 * (_tmp151 * _tmp224 + _tmp151 * _tmp230 -
                                                          _tmp151 * _tmp232 - _tmp158 * _tmp272) +
                                               _tmp169 * (-_tmp158 * _tmp279 - _tmp275 + _tmp278) -
                                               _tmp273 * _tmp274) -
                                    _tmp261 * _tmp269);
  const Scalar _tmp281 = Scalar(1.0) * std::cosh(_tmp178);
  const Scalar _tmp282 = _tmp144 * _tmp145;
  const Scalar _tmp283 = _tmp135 * _tmp78;
  const Scalar _tmp284 = _tmp122 * _tmp78;
  const Scalar _tmp285 = _tmp137 * _tmp140;
  const Scalar _tmp286 =
      _tmp113 * _tmp284 + _tmp133 * _tmp283 - _tmp282 * _tmp92 - _tmp285 * _tmp92;
  const Scalar _tmp287 = _tmp151 * _tmp154;
  const Scalar _tmp288 = _tmp145 * _tmp87;
  const Scalar _tmp289 = _tmp137 * _tmp87;
  const Scalar _tmp290 = _tmp122 * _tmp87;
  const Scalar _tmp291 = _tmp135 * _tmp87;
  const Scalar _tmp292 = -_tmp152 * _tmp287 + _tmp157 * _tmp291 + _tmp161 * _tmp289 +
                         _tmp162 * _tmp290 + _tmp164 * _tmp166 + _tmp168 * _tmp288;
  const Scalar _tmp293 = Scalar(1.0) / (_tmp286);
  const Scalar _tmp294 = std::asinh(_tmp292 * _tmp293);
  const Scalar _tmp295 = Scalar(1.4083112389913199) * _tmp294;
  const Scalar _tmp296 =
      -_tmp286 * _tmp295 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp70 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp297 = Scalar(0.71007031138673404) * _tmp293;
  const Scalar _tmp298 = _tmp296 * _tmp297;
  const Scalar _tmp299 = Scalar(1.0) * _tmp294;
  const Scalar _tmp300 = -std::sinh(_tmp298) - std::sinh(_tmp299);
  const Scalar _tmp301 = _tmp169 * _tmp200;
  const Scalar _tmp302 = _tmp137 * _tmp139;
  const Scalar _tmp303 = _tmp221 * _tmp302;
  const Scalar _tmp304 = _tmp194 * _tmp74;
  const Scalar _tmp305 = _tmp304 * _tmp61;
  const Scalar _tmp306 = _tmp133 * _tmp135;
  const Scalar _tmp307 = _tmp122 * _tmp74;
  const Scalar _tmp308 = _tmp285 * _tmp78;
  const Scalar _tmp309 = -_tmp113 * _tmp194 * _tmp307 - _tmp145 * _tmp204 - _tmp202 * _tmp308 +
                         _tmp235 * _tmp284 + _tmp258 * _tmp283 + _tmp282 * _tmp305 +
                         _tmp285 * _tmp305 + _tmp301 * _tmp92 + _tmp303 * _tmp92 -
                         _tmp304 * _tmp306;
  const Scalar _tmp310 = std::cosh(_tmp298);
  const Scalar _tmp311 = Scalar(1.4083112389913199) * _tmp286;
  const Scalar _tmp312 = std::pow(_tmp286, Scalar(-2));
  const Scalar _tmp313 =
      std::pow(Scalar(std::pow(_tmp292, Scalar(2)) * _tmp312 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp314 = _tmp292 * _tmp312;
  const Scalar _tmp315 =
      _tmp313 *
      (_tmp293 * (_tmp271 * _tmp291 + _tmp272 * _tmp290 + _tmp273 * _tmp289 + _tmp279 * _tmp288) -
       _tmp309 * _tmp314);
  const Scalar _tmp316 = Scalar(0.71007031138673404) * _tmp296 * _tmp312;
  const Scalar _tmp317 = Scalar(1.0) * std::cosh(_tmp299);
  const Scalar _tmp318 = _tmp122 * _tmp150;
  const Scalar _tmp319 = _tmp135 * _tmp150;
  const Scalar _tmp320 = -_tmp110 * _tmp318 - _tmp129 * _tmp319 + _tmp137 * _tmp160 -
                         _tmp145 * _tmp167 - _tmp164 * _tmp165 + _tmp287;
  const Scalar _tmp321 = _tmp112 * _tmp122 + _tmp131 * _tmp135 + _tmp282 + _tmp285;
  const Scalar _tmp322 = std::pow(_tmp321, Scalar(-2));
  const Scalar _tmp323 =
      std::pow(Scalar(std::pow(_tmp320, Scalar(2)) * _tmp322 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp324 = Scalar(1.0) / (_tmp321);
  const Scalar _tmp325 = _tmp130 * _tmp135;
  const Scalar _tmp326 = _tmp122 * _tmp94;
  const Scalar _tmp327 = _tmp135 * _tmp94;
  const Scalar _tmp328 = -_tmp122 * _tmp222 - _tmp221 * _tmp325 + _tmp233 * _tmp326 +
                         _tmp256 * _tmp327 - _tmp301 - _tmp303;
  const Scalar _tmp329 = _tmp320 * _tmp322;
  const Scalar _tmp330 =
      _tmp323 *
      (_tmp324 * (_tmp145 * _tmp275 - _tmp145 * _tmp278 - _tmp224 * _tmp318 - _tmp230 * _tmp318 +
                  _tmp232 * _tmp318 - _tmp252 * _tmp319 - _tmp254 * _tmp319 + _tmp255 * _tmp319) -
       _tmp328 * _tmp329);
  const Scalar _tmp331 = std::asinh(_tmp320 * _tmp324);
  const Scalar _tmp332 = Scalar(1.0) * _tmp331;
  const Scalar _tmp333 = Scalar(1.0) * std::cosh(_tmp332);
  const Scalar _tmp334 = Scalar(1.4083112389913199) * _tmp321;
  const Scalar _tmp335 =
      -_tmp331 * _tmp334 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp336 = Scalar(0.71007031138673404) * _tmp324;
  const Scalar _tmp337 = _tmp335 * _tmp336;
  const Scalar _tmp338 = std::cosh(_tmp337);
  const Scalar _tmp339 = Scalar(1.4083112389913199) * _tmp328;
  const Scalar _tmp340 = Scalar(0.71007031138673404) * _tmp322 * _tmp335;
  const Scalar _tmp341 = -std::sinh(_tmp332) - std::sinh(_tmp337);
  const Scalar _tmp342 = _tmp192 * _tmp41;
  const Scalar _tmp343 = _tmp342 * _tmp74;
  const Scalar _tmp344 = _tmp343 * _tmp61;
  const Scalar _tmp345 = _tmp101 * _tmp41;
  const Scalar _tmp346 = _tmp47 * (-_tmp187 * _tmp189 + _tmp188 * _tmp44 - _tmp96);
  const Scalar _tmp347 = -_tmp184 * _tmp75 + _tmp346 * _tmp74;
  const Scalar _tmp348 = -_tmp100 * _tmp344 - _tmp184 * _tmp59 + _tmp345 * _tmp58 +
                         _tmp346 * _tmp58 - _tmp347 * _tmp92;
  const Scalar _tmp349 = _tmp199 * _tmp348;
  const Scalar _tmp350 = _tmp349 * _tmp93;
  const Scalar _tmp351 = _tmp107 * _tmp350;
  const Scalar _tmp352 = _tmp343 * _tmp91;
  const Scalar _tmp353 = _tmp28 * _tmp41;
  const Scalar _tmp354 =
      _tmp114 * _tmp226 * _tmp353 + _tmp226 * _tmp343 * _tmp81 - Scalar(1.0) * _tmp352;
  const Scalar _tmp355 = _tmp41 * _tmp82;
  const Scalar _tmp356 = _tmp353 * _tmp74;
  const Scalar _tmp357 = -_tmp344 * _tmp81 + _tmp353 * _tmp58 + _tmp355 * _tmp58 - _tmp356 * _tmp92;
  const Scalar _tmp358 = _tmp124 * _tmp41;
  const Scalar _tmp359 = -_tmp352 * _tmp61 - _tmp357 * _tmp90 + _tmp358 * _tmp58;
  const Scalar _tmp360 = _tmp220 * _tmp359;
  const Scalar _tmp361 = Scalar(1.0) * _tmp343;
  const Scalar _tmp362 = _tmp109 * (-_tmp100 * _tmp361 - _tmp103 * _tmp347 - _tmp106 * _tmp348 -
                                    _tmp127 * _tmp354 + _tmp225 * _tmp360);
  const Scalar _tmp363 = _tmp223 * _tmp359;
  const Scalar _tmp364 = -_tmp351 + _tmp354 + _tmp362 + _tmp363;
  const Scalar _tmp365 = _tmp111 * _tmp360;
  const Scalar _tmp366 = _tmp115 * _tmp41 - _tmp234 * _tmp364 + _tmp365 * _tmp61;
  const Scalar _tmp367 = _tmp113 * _tmp342;
  const Scalar _tmp368 = _tmp205 * _tmp342;
  const Scalar _tmp369 = _tmp41 * _tmp58;
  const Scalar _tmp370 = _tmp203 * _tmp369;
  const Scalar _tmp371 = _tmp253 * _tmp359;
  const Scalar _tmp372 = _tmp128 * _tmp350;
  const Scalar _tmp373 = _tmp212 + _tmp228 - _tmp353 - _tmp355;
  const Scalar _tmp374 = _tmp218 - _tmp358 - _tmp373 * _tmp90;
  const Scalar _tmp375 =
      _tmp109 * (-_tmp127 * _tmp374 + _tmp184 * _tmp48 + _tmp196 + _tmp245 * _tmp347 -
                 _tmp246 * _tmp348 + _tmp251 * _tmp360 - _tmp345 - _tmp346);
  const Scalar _tmp376 = _tmp371 - _tmp372 + _tmp374 + _tmp375;
  const Scalar _tmp377 = _tmp132 * _tmp41 - _tmp234 * _tmp376 + _tmp257 * _tmp360 + _tmp41;
  const Scalar _tmp378 =
      _tmp182 * _tmp48 + _tmp183 * _tmp48 -
      _tmp209 * (_tmp201 * _tmp349 - _tmp207 * _tmp368 - _tmp208 * _tmp349 + _tmp370 * _tmp74) +
      _tmp210 * _tmp48 -
      _tmp237 * (_tmp114 * _tmp366 + _tmp205 * _tmp367 + _tmp236 * _tmp364 - _tmp365 * _tmp58) +
      _tmp238 * _tmp48 -
      _tmp243 * (_tmp239 * _tmp360 - _tmp240 * _tmp360 - _tmp241 * _tmp368 + _tmp242 * _tmp41) -
      _tmp260 * (_tmp114 * _tmp377 + _tmp236 * _tmp376 + _tmp244 * _tmp342 - _tmp259 * _tmp360);
  const Scalar _tmp379 = _tmp360 * _tmp84;
  const Scalar _tmp380 = _tmp139 * _tmp379 - _tmp140 * _tmp357;
  const Scalar _tmp381 = _tmp130 * _tmp379 - _tmp131 * _tmp357 + _tmp155 * _tmp371 -
                         _tmp155 * _tmp372 + _tmp155 * _tmp375 - _tmp156 * _tmp376 + _tmp373;
  const Scalar _tmp382 = _tmp151 * _tmp350;
  const Scalar _tmp383 = _tmp277 * _tmp359;
  const Scalar _tmp384 =
      -_tmp144 * _tmp357 - _tmp148 * _tmp382 + _tmp148 * _tmp383 + _tmp276 * _tmp349;
  const Scalar _tmp385 = -_tmp103 * _tmp356 - _tmp112 * _tmp357 - _tmp155 * _tmp351 +
                         _tmp155 * _tmp362 + _tmp155 * _tmp363 - _tmp156 * _tmp364 -
                         _tmp361 * _tmp81 + _tmp365 * _tmp84;
  const Scalar _tmp386 = _tmp268 * (_tmp171 * (_tmp159 * (_tmp151 * _tmp371 - _tmp151 * _tmp372 +
                                                          _tmp151 * _tmp375 - _tmp158 * _tmp381) +
                                               _tmp163 * (-_tmp151 * _tmp351 + _tmp151 * _tmp362 +
                                                          _tmp151 * _tmp363 - _tmp158 * _tmp385) +
                                               _tmp169 * (-_tmp158 * _tmp384 - _tmp382 + _tmp383) -
                                               _tmp274 * _tmp380) -
                                    _tmp269 * _tmp378);
  const Scalar _tmp387 = _tmp302 * _tmp360;
  const Scalar _tmp388 = _tmp169 * _tmp349;
  const Scalar _tmp389 = _tmp145 * _tmp370 - _tmp282 * _tmp344 + _tmp283 * _tmp377 +
                         _tmp284 * _tmp366 - _tmp285 * _tmp344 + _tmp306 * _tmp343 +
                         _tmp307 * _tmp367 + _tmp308 * _tmp369 + _tmp387 * _tmp92 +
                         _tmp388 * _tmp92;
  const Scalar _tmp390 = Scalar(1.4083112389913199) * _tmp389;
  const Scalar _tmp391 =
      _tmp313 *
      (_tmp293 * (_tmp288 * _tmp384 + _tmp289 * _tmp380 + _tmp290 * _tmp385 + _tmp291 * _tmp381) -
       _tmp314 * _tmp389);
  const Scalar _tmp392 = -_tmp122 * _tmp365 - _tmp325 * _tmp360 + _tmp326 * _tmp364 +
                         _tmp327 * _tmp376 - _tmp387 - _tmp388;
  const Scalar _tmp393 = Scalar(1.4083112389913199) * _tmp392;
  const Scalar _tmp394 =
      _tmp323 *
      (_tmp324 * (_tmp145 * _tmp382 - _tmp145 * _tmp383 + _tmp318 * _tmp351 - _tmp318 * _tmp362 -
                  _tmp318 * _tmp363 - _tmp319 * _tmp371 + _tmp319 * _tmp372 - _tmp319 * _tmp375) -
       _tmp329 * _tmp392);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp179 * _tmp262 - _tmp19 * _tmp39 +
      _tmp267 * (-_tmp263 * (_tmp176 * (-_tmp172 * _tmp262 - _tmp19 * _tmp266 - _tmp267 * _tmp280) -
                             _tmp261 * _tmp265) -
                 _tmp280 * _tmp281);
  _res(2, 0) =
      Scalar(1.4083112389913199) * _tmp300 * _tmp309 +
      _tmp311 *
          (-_tmp310 * (_tmp297 * (-_tmp295 * _tmp309 - _tmp311 * _tmp315) - _tmp309 * _tmp316) -
           _tmp315 * _tmp317);
  _res(3, 0) =
      _tmp334 *
          (-_tmp330 * _tmp333 -
           _tmp338 * (-_tmp328 * _tmp340 + _tmp336 * (-_tmp330 * _tmp334 - _tmp331 * _tmp339))) +
      _tmp339 * _tmp341;
  _res(0, 1) = 0;
  _res(1, 1) =
      Scalar(1.4083112389913199) * _tmp179 * _tmp378 +
      _tmp267 * (-_tmp263 * (_tmp176 * (-_tmp173 * _tmp378 - _tmp266 * _tmp37 - _tmp267 * _tmp386) -
                             _tmp265 * _tmp378) -
                 _tmp281 * _tmp386) -
      _tmp37 * _tmp39;
  _res(2, 1) =
      _tmp300 * _tmp390 +
      _tmp311 *
          (-_tmp310 * (_tmp297 * (-_tmp294 * _tmp390 - _tmp311 * _tmp391) - _tmp316 * _tmp389) -
           _tmp317 * _tmp391);
  _res(3, 1) =
      _tmp334 *
          (-_tmp333 * _tmp394 -
           _tmp338 * (_tmp336 * (-_tmp331 * _tmp393 - _tmp334 * _tmp394) - _tmp340 * _tmp392)) +
      _tmp341 * _tmp393;
  _res(0, 2) = 0;
  _res(1, 2) = -_tmp29 * _tmp39;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym