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
 * Symbolic function: IK_residual_func_cost4_wrt_pa_Nl7
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPaNl7(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1194

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (386)
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
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_a(0, 0);
  const Scalar _tmp20 = std::pow(_tmp19, Scalar(2));
  const Scalar _tmp21 = Scalar(1.0) / (_tmp20);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp25 = _tmp6 * _tmp9;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp28 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp30 = _tmp27 - _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(1, 0);
  const Scalar _tmp33 = _tmp32 - p_a(1, 0);
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 = _tmp20 + _tmp34;
  const Scalar _tmp36 = std::sqrt(_tmp35);
  const Scalar _tmp37 = _tmp21 * _tmp36;
  const Scalar _tmp38 = Scalar(1.0) * _tmp31;
  const Scalar _tmp39 = -_tmp38;
  const Scalar _tmp40 = _tmp27 + _tmp29;
  const Scalar _tmp41 = _tmp23 + _tmp40;
  const Scalar _tmp42 = Scalar(1.0) / (_tmp39 + _tmp41);
  const Scalar _tmp43 = _tmp12 + _tmp15;
  const Scalar _tmp44 = _tmp43 + _tmp5;
  const Scalar _tmp45 = Scalar(1.0) * _tmp17;
  const Scalar _tmp46 = _tmp42 * (-_tmp44 + _tmp45);
  const Scalar _tmp47 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp48 = -_tmp47;
  const Scalar _tmp49 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp28 + Scalar(-0.010999999999999999);
  const Scalar _tmp50 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp51 = _tmp49 + _tmp50;
  const Scalar _tmp52 = _tmp48 + _tmp51;
  const Scalar _tmp53 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp54 = _tmp53 - p_d(0, 0);
  const Scalar _tmp55 = std::pow(_tmp54, Scalar(2));
  const Scalar _tmp56 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 - p_d(1, 0);
  const Scalar _tmp58 = _tmp55 + std::pow(_tmp57, Scalar(2));
  const Scalar _tmp59 = std::pow(_tmp58, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp57 * _tmp59;
  const Scalar _tmp61 = _tmp54 * _tmp59;
  const Scalar _tmp62 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp63 = _tmp49 - _tmp50;
  const Scalar _tmp64 = _tmp48 + _tmp63;
  const Scalar _tmp65 = _tmp62 * _tmp64;
  const Scalar _tmp66 = _tmp33 * _tmp65;
  const Scalar _tmp67 = _tmp52 * _tmp60 - _tmp61 * _tmp66;
  const Scalar _tmp68 = _tmp33 * _tmp62;
  const Scalar _tmp69 = -_tmp60 + _tmp61 * _tmp68;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = Scalar(1.0) * _tmp70;
  const Scalar _tmp72 = _tmp67 * _tmp71;
  const Scalar _tmp73 = _tmp61 * _tmp64;
  const Scalar _tmp74 = -_tmp52 * _tmp61 + _tmp73;
  const Scalar _tmp75 = _tmp46 * _tmp72 - _tmp71 * _tmp74;
  const Scalar _tmp76 = _tmp4 + _tmp43;
  const Scalar _tmp77 = _tmp76 + position_vector(0, 0);
  const Scalar _tmp78 = _tmp77 - p_c(0, 0);
  const Scalar _tmp79 = _tmp22 + _tmp40;
  const Scalar _tmp80 = _tmp79 + position_vector(1, 0);
  const Scalar _tmp81 = _tmp80 - p_c(1, 0);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp78 * _tmp82;
  const Scalar _tmp84 = _tmp64 * _tmp83;
  const Scalar _tmp85 = _tmp47 + _tmp51;
  const Scalar _tmp86 = _tmp81 * _tmp82;
  const Scalar _tmp87 = _tmp68 * _tmp83;
  const Scalar _tmp88 = -_tmp86 + _tmp87;
  const Scalar _tmp89 = _tmp70 * _tmp88;
  const Scalar _tmp90 = -_tmp66 * _tmp83 - _tmp67 * _tmp89 + _tmp85 * _tmp86;
  const Scalar _tmp91 = -_tmp46 * _tmp90 - _tmp74 * _tmp89 - _tmp83 * _tmp85 + _tmp84;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = Scalar(1.0) / (_tmp36);
  const Scalar _tmp94 = _tmp31 * _tmp93;
  const Scalar _tmp95 = _tmp17 * _tmp93;
  const Scalar _tmp96 = -_tmp19 * _tmp94 + _tmp33 * _tmp95;
  const Scalar _tmp97 = _tmp36 * _tmp62;
  const Scalar _tmp98 = _tmp96 * _tmp97;
  const Scalar _tmp99 = _tmp41 * _tmp61 - _tmp44 * _tmp60 + _tmp61 * _tmp98;
  const Scalar _tmp100 = -_tmp76 * _tmp86 + _tmp79 * _tmp83 + _tmp83 * _tmp98 - _tmp89 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp92;
  const Scalar _tmp102 = -_tmp101 * _tmp75 - _tmp71 * _tmp99;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp104 = _tmp103 * _tmp91;
  const Scalar _tmp105 = _tmp102 * _tmp104;
  const Scalar _tmp106 = _tmp105 + _tmp75;
  const Scalar _tmp107 = _tmp88 * _tmp92;
  const Scalar _tmp108 = -_tmp106 * _tmp107 + Scalar(1.0);
  const Scalar _tmp109 = _tmp61 * _tmp70;
  const Scalar _tmp110 = _tmp83 * _tmp92;
  const Scalar _tmp111 = _tmp106 * _tmp110;
  const Scalar _tmp112 = _tmp16 + _tmp4;
  const Scalar _tmp113 = _tmp112 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp114 = _tmp22 + _tmp30;
  const Scalar _tmp115 = _tmp114 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp116 =
      std::pow(Scalar(std::pow(_tmp113, Scalar(2)) + std::pow(_tmp115, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp117 = _tmp115 * _tmp116;
  const Scalar _tmp118 = _tmp117 * fh1;
  const Scalar _tmp119 = _tmp118 * (_tmp108 * _tmp109 + _tmp111);
  const Scalar _tmp120 = _tmp93 * _tmp96;
  const Scalar _tmp121 = std::pow(_tmp35, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp122 = _tmp121 * _tmp31;
  const Scalar _tmp123 = _tmp121 * _tmp17;
  const Scalar _tmp124 = _tmp19 * _tmp33;
  const Scalar _tmp125 = _tmp97 * (-_tmp122 * _tmp20 + _tmp123 * _tmp124 + _tmp94);
  const Scalar _tmp126 = _tmp37 * _tmp96;
  const Scalar _tmp127 = _tmp120 * _tmp61;
  const Scalar _tmp128 = _tmp125 * _tmp61 + _tmp126 * _tmp61 - _tmp127;
  const Scalar _tmp129 = _tmp21 * _tmp33;
  const Scalar _tmp130 = _tmp70 * _tmp99;
  const Scalar _tmp131 = _tmp129 * _tmp130;
  const Scalar _tmp132 = _tmp61 * _tmp99;
  const Scalar _tmp133 = std::pow(_tmp69, Scalar(-2));
  const Scalar _tmp134 = _tmp129 * _tmp133;
  const Scalar _tmp135 = _tmp132 * _tmp134;
  const Scalar _tmp136 = -_tmp120 * _tmp83 + _tmp125 * _tmp83 + _tmp126 * _tmp83 -
                         _tmp128 * _tmp89 - _tmp131 * _tmp83 + _tmp135 * _tmp88;
  const Scalar _tmp137 = std::pow(_tmp100, Scalar(-2));
  const Scalar _tmp138 = _tmp136 * _tmp137;
  const Scalar _tmp139 = Scalar(1.0) * _tmp83;
  const Scalar _tmp140 = Scalar(1.0) * _tmp103;
  const Scalar _tmp141 = _tmp140 * _tmp83;
  const Scalar _tmp142 = _tmp109 * _tmp129;
  const Scalar _tmp143 = _tmp55 / _tmp58;
  const Scalar _tmp144 = _tmp134 * _tmp143;
  const Scalar _tmp145 = _tmp61 * _tmp89;
  const Scalar _tmp146 = Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp113 * _tmp116;
  const Scalar _tmp148 = fh1 * (_tmp112 * _tmp117 - _tmp114 * _tmp147);
  const Scalar _tmp149 = _tmp148 * _tmp97;
  const Scalar _tmp150 = _tmp119 * _tmp93;
  const Scalar _tmp151 = _tmp68 * _tmp70;
  const Scalar _tmp152 = _tmp151 * _tmp67 + _tmp66;
  const Scalar _tmp153 = _tmp151 * _tmp74 - _tmp152 * _tmp46 - _tmp64;
  const Scalar _tmp154 = -_tmp101 * _tmp153 + _tmp130 * _tmp68 - _tmp98;
  const Scalar _tmp155 = _tmp104 * _tmp154;
  const Scalar _tmp156 = _tmp153 + _tmp155;
  const Scalar _tmp157 = _tmp110 * _tmp156;
  const Scalar _tmp158 = _tmp129 * _tmp70;
  const Scalar _tmp159 = _tmp158 * _tmp74;
  const Scalar _tmp160 = _tmp61 * _tmp74;
  const Scalar _tmp161 = _tmp134 * _tmp160;
  const Scalar _tmp162 = _tmp129 * _tmp73;
  const Scalar _tmp163 = _tmp61 * _tmp67;
  const Scalar _tmp164 = _tmp134 * _tmp163;
  const Scalar _tmp165 = _tmp158 * _tmp67;
  const Scalar _tmp166 = -_tmp129 * _tmp84 + _tmp162 * _tmp89 + _tmp164 * _tmp88 - _tmp165 * _tmp83;
  const Scalar _tmp167 = -_tmp159 * _tmp83 + _tmp161 * _tmp88 - _tmp166 * _tmp46;
  const Scalar _tmp168 = std::pow(_tmp91, Scalar(-2));
  const Scalar _tmp169 = _tmp167 * _tmp168;
  const Scalar _tmp170 = _tmp156 * _tmp88;
  const Scalar _tmp171 = _tmp154 * _tmp91;
  const Scalar _tmp172 = _tmp138 * _tmp171;
  const Scalar _tmp173 = _tmp103 * _tmp167;
  const Scalar _tmp174 = _tmp154 * _tmp173;
  const Scalar _tmp175 = _tmp34 / [&]() {
    const Scalar base = _tmp19;
    return base * base * base;
  }();
  const Scalar _tmp176 = _tmp133 * _tmp175;
  const Scalar _tmp177 = _tmp100 * _tmp169;
  const Scalar _tmp178 = _tmp129 * _tmp64 - _tmp163 * _tmp176 + _tmp165 - _tmp175 * _tmp70 * _tmp73;
  const Scalar _tmp179 = _tmp159 - _tmp160 * _tmp176 - _tmp178 * _tmp46;
  const Scalar _tmp180 = _tmp153 * _tmp92;
  const Scalar _tmp181 =
      _tmp104 * (-_tmp101 * _tmp179 + _tmp120 - _tmp125 - _tmp126 + _tmp128 * _tmp151 + _tmp131 -
                 _tmp132 * _tmp176 - _tmp136 * _tmp180 + _tmp153 * _tmp177);
  const Scalar _tmp182 = -_tmp172 + _tmp174 + _tmp179 + _tmp181;
  const Scalar _tmp183 = -_tmp107 * _tmp182 - _tmp129 * _tmp157 - _tmp129 + _tmp169 * _tmp170;
  const Scalar _tmp184 = _tmp169 * _tmp83;
  const Scalar _tmp185 = -_tmp107 * _tmp156 - _tmp68;
  const Scalar _tmp186 = _tmp147 * fh1;
  const Scalar _tmp187 = _tmp186 * _tmp97;
  const Scalar _tmp188 = _tmp148 * (-_tmp140 * _tmp145 + _tmp141);
  const Scalar _tmp189 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp190 = _tmp38 * _tmp46 + _tmp45;
  const Scalar _tmp191 = 0;
  const Scalar _tmp192 = _tmp107 * _tmp191;
  const Scalar _tmp193 = _tmp110 * _tmp191;
  const Scalar _tmp194 = _tmp189 * (-_tmp109 * _tmp192 + _tmp193);
  const Scalar _tmp195 = _tmp194 * _tmp93;
  const Scalar _tmp196 = _tmp186 * (_tmp109 * _tmp185 + _tmp157 + Scalar(1.0));
  const Scalar _tmp197 = _tmp145 * _tmp191;
  const Scalar _tmp198 = _tmp189 * _tmp97;
  const Scalar _tmp199 = _tmp108 * _tmp143;
  const Scalar _tmp200 = _tmp162 * _tmp71;
  const Scalar _tmp201 = Scalar(1.0) * _tmp164;
  const Scalar _tmp202 = Scalar(1.0) * _tmp161 - _tmp200 * _tmp46 - _tmp201 * _tmp46;
  const Scalar _tmp203 = _tmp75 * _tmp92;
  const Scalar _tmp204 = _tmp104 * (-_tmp101 * _tmp202 - _tmp128 * _tmp71 + Scalar(1.0) * _tmp135 -
                                    _tmp136 * _tmp203 + _tmp177 * _tmp75);
  const Scalar _tmp205 = _tmp102 * _tmp91;
  const Scalar _tmp206 = _tmp138 * _tmp205;
  const Scalar _tmp207 = _tmp102 * _tmp173;
  const Scalar _tmp208 = _tmp202 + _tmp204 - _tmp206 + _tmp207;
  const Scalar _tmp209 = _tmp106 * _tmp88;
  const Scalar _tmp210 = -_tmp107 * _tmp208 - _tmp111 * _tmp129 + _tmp169 * _tmp209;
  const Scalar _tmp211 = _tmp118 * _tmp97;
  const Scalar _tmp212 = _tmp188 * _tmp93;
  const Scalar _tmp213 = _tmp196 * _tmp93;
  const Scalar _tmp214 =
      -_tmp119 * _tmp37 -
      _tmp149 * (-_tmp138 * _tmp139 + _tmp138 * _tmp146 + _tmp140 * _tmp144 * _tmp88 -
                 _tmp141 * _tmp142) +
      _tmp150 -
      _tmp187 * (_tmp109 * _tmp183 + _tmp110 * _tmp182 - _tmp144 * _tmp185 - _tmp156 * _tmp184) -
      _tmp188 * _tmp37 - _tmp194 * _tmp37 + _tmp195 - _tmp196 * _tmp37 -
      _tmp198 * (-_tmp142 * _tmp193 + _tmp144 * _tmp192 + _tmp169 * _tmp197 - _tmp184 * _tmp191) -
      _tmp211 * (-_tmp106 * _tmp184 + _tmp109 * _tmp210 + _tmp110 * _tmp208 - _tmp134 * _tmp199) +
      _tmp212 + _tmp213;
  const Scalar _tmp215 = -_tmp119 * _tmp97 - _tmp188 * _tmp97 - _tmp194 * _tmp97 - _tmp196 * _tmp97;
  const Scalar _tmp216 = Scalar(1.0) / (_tmp215);
  const Scalar _tmp217 = _tmp39 + _tmp79;
  const Scalar _tmp218 = _tmp217 * _tmp46;
  const Scalar _tmp219 = Scalar(1.0) / (-_tmp218 + _tmp45 - _tmp76);
  const Scalar _tmp220 = Scalar(1.0) * _tmp219;
  const Scalar _tmp221 = _tmp217 * _tmp219;
  const Scalar _tmp222 = _tmp90 * _tmp92;
  const Scalar _tmp223 = _tmp105 * _tmp221 - _tmp106 * _tmp222 - _tmp72;
  const Scalar _tmp224 = Scalar(1.0) * _tmp42;
  const Scalar _tmp225 = Scalar(1.0) * _tmp118;
  const Scalar _tmp226 = _tmp217 * _tmp42;
  const Scalar _tmp227 = fh1 * (_tmp47 + _tmp63);
  const Scalar _tmp228 = Scalar(40.024799999999999) * _tmp11 + _tmp112 * fv1 + _tmp147 * _tmp227;
  const Scalar _tmp229 = _tmp104 * _tmp220;
  const Scalar _tmp230 = -_tmp140 * _tmp90 + _tmp217 * _tmp229;
  const Scalar _tmp231 = Scalar(1.0) * _tmp148;
  const Scalar _tmp232 = _tmp190 * _tmp219;
  const Scalar _tmp233 = -_tmp191 * _tmp222 - _tmp217 * _tmp232 + _tmp39;
  const Scalar _tmp234 = -_tmp114 * fv1 - _tmp117 * _tmp227 - Scalar(40.024799999999999) * _tmp26;
  const Scalar _tmp235 = _tmp218 * _tmp220 + Scalar(1.0);
  const Scalar _tmp236 = _tmp220 * _tmp46;
  const Scalar _tmp237 = _tmp152 + _tmp155 * _tmp221 - _tmp156 * _tmp222;
  const Scalar _tmp238 = Scalar(1.0) * _tmp186;
  const Scalar _tmp239 =
      Scalar(1.0) * _tmp189 * (-_tmp190 * _tmp220 - _tmp224 * _tmp233 + Scalar(1.0)) +
      _tmp225 * (_tmp105 * _tmp220 - _tmp223 * _tmp224) +
      Scalar(1.0) * _tmp228 * (_tmp220 * _tmp226 - _tmp220) +
      _tmp231 * (-_tmp224 * _tmp230 + _tmp229) +
      Scalar(1.0) * _tmp234 * (-_tmp224 * _tmp235 + _tmp236) +
      _tmp238 * (_tmp155 * _tmp220 - _tmp224 * _tmp237);
  const Scalar _tmp240 = std::asinh(_tmp216 * _tmp239);
  const Scalar _tmp241 = Scalar(1.0) * _tmp240;
  const Scalar _tmp242 = Scalar(1.4083112389913199) * _tmp240;
  const Scalar _tmp243 = -_tmp32 + p_a(1, 0);
  const Scalar _tmp244 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp245 =
      std::sqrt(Scalar(std::pow(_tmp243, Scalar(2)) + std::pow(_tmp244, Scalar(2))));
  const Scalar _tmp246 = -_tmp215 * _tmp242 - _tmp245;
  const Scalar _tmp247 = Scalar(0.71007031138673404) * _tmp216;
  const Scalar _tmp248 = _tmp246 * _tmp247;
  const Scalar _tmp249 = -Scalar(1.4083112389913199) * std::sinh(_tmp241) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp248);
  const Scalar _tmp250 = std::pow(_tmp215, Scalar(-2));
  const Scalar _tmp251 = _tmp239 * _tmp250;
  const Scalar _tmp252 = _tmp166 * _tmp92;
  const Scalar _tmp253 = _tmp168 * _tmp90;
  const Scalar _tmp254 = _tmp167 * _tmp253;
  const Scalar _tmp255 = -_tmp156 * _tmp252 + _tmp156 * _tmp254 - _tmp172 * _tmp221 +
                         _tmp174 * _tmp221 + _tmp178 + _tmp181 * _tmp221 - _tmp182 * _tmp222;
  const Scalar _tmp256 = -_tmp106 * _tmp252 + _tmp106 * _tmp254 + _tmp200 + _tmp201 +
                         _tmp204 * _tmp221 - _tmp206 * _tmp221 + _tmp207 * _tmp221 -
                         _tmp208 * _tmp222;
  const Scalar _tmp257 = -_tmp191 * _tmp252 + _tmp191 * _tmp254;
  const Scalar _tmp258 = _tmp189 * _tmp224;
  const Scalar _tmp259 = _tmp220 * _tmp91;
  const Scalar _tmp260 = _tmp138 * _tmp259;
  const Scalar _tmp261 = Scalar(1.0) * _tmp90;
  const Scalar _tmp262 = _tmp173 * _tmp220;
  const Scalar _tmp263 =
      _tmp138 * _tmp261 - _tmp140 * _tmp166 - _tmp217 * _tmp260 + _tmp217 * _tmp262;
  const Scalar _tmp264 =
      -_tmp214 * _tmp251 + _tmp216 * (_tmp225 * (_tmp204 * _tmp220 - _tmp206 * _tmp220 +
                                                 _tmp207 * _tmp220 - _tmp224 * _tmp256) +
                                      _tmp231 * (-_tmp224 * _tmp263 - _tmp260 + _tmp262) +
                                      _tmp238 * (-_tmp172 * _tmp220 + _tmp174 * _tmp220 +
                                                 _tmp181 * _tmp220 - _tmp224 * _tmp255) -
                                      _tmp257 * _tmp258);
  const Scalar _tmp265 =
      std::pow(Scalar(std::pow(_tmp239, Scalar(2)) * _tmp250 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp266 = Scalar(1.4083112389913199) * _tmp215;
  const Scalar _tmp267 = _tmp265 * _tmp266;
  const Scalar _tmp268 = Scalar(1.0) / (_tmp245);
  const Scalar _tmp269 = Scalar(0.71007031138673404) * _tmp246 * _tmp250;
  const Scalar _tmp270 = std::cosh(_tmp248);
  const Scalar _tmp271 = Scalar(1.0) * _tmp265 * std::cosh(_tmp241);
  const Scalar _tmp272 = _tmp189 * _tmp191;
  const Scalar _tmp273 = _tmp107 * _tmp272;
  const Scalar _tmp274 = _tmp140 * _tmp148;
  const Scalar _tmp275 = _tmp186 * _tmp70;
  const Scalar _tmp276 = _tmp118 * _tmp70;
  const Scalar _tmp277 =
      _tmp108 * _tmp276 + _tmp185 * _tmp275 - _tmp273 * _tmp70 - _tmp274 * _tmp89;
  const Scalar _tmp278 = Scalar(1.0) / (_tmp277);
  const Scalar _tmp279 = _tmp220 * _tmp228;
  const Scalar _tmp280 = _tmp148 * _tmp42;
  const Scalar _tmp281 = _tmp186 * _tmp42;
  const Scalar _tmp282 = _tmp189 * _tmp42;
  const Scalar _tmp283 = _tmp118 * _tmp42;
  const Scalar _tmp284 = _tmp223 * _tmp283 - _tmp226 * _tmp279 + _tmp230 * _tmp280 +
                         _tmp233 * _tmp282 + _tmp234 * _tmp235 * _tmp42 + _tmp237 * _tmp281;
  const Scalar _tmp285 = std::asinh(_tmp278 * _tmp284);
  const Scalar _tmp286 = Scalar(1.4083112389913199) * _tmp285;
  const Scalar _tmp287 =
      -_tmp277 * _tmp286 - std::sqrt(Scalar(std::pow(Scalar(-_tmp53 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp56 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp288 = Scalar(0.71007031138673404) * _tmp278;
  const Scalar _tmp289 = _tmp287 * _tmp288;
  const Scalar _tmp290 = std::cosh(_tmp289);
  const Scalar _tmp291 = _tmp108 * _tmp118;
  const Scalar _tmp292 = _tmp134 * _tmp61;
  const Scalar _tmp293 = _tmp138 * _tmp231;
  const Scalar _tmp294 = _tmp272 * _tmp92;
  const Scalar _tmp295 = _tmp158 * _tmp83;
  const Scalar _tmp296 = _tmp186 * _tmp61;
  const Scalar _tmp297 = _tmp169 * _tmp272;
  const Scalar _tmp298 = -_tmp134 * _tmp185 * _tmp296 + _tmp183 * _tmp275 + _tmp210 * _tmp276 +
                         _tmp273 * _tmp292 + _tmp274 * _tmp292 * _tmp88 - _tmp274 * _tmp295 -
                         _tmp291 * _tmp292 + _tmp293 * _tmp89 - _tmp294 * _tmp295 +
                         _tmp297 * _tmp89;
  const Scalar _tmp299 = std::pow(_tmp277, Scalar(-2));
  const Scalar _tmp300 = Scalar(0.71007031138673404) * _tmp287 * _tmp299;
  const Scalar _tmp301 = _tmp284 * _tmp299;
  const Scalar _tmp302 =
      _tmp278 * (_tmp255 * _tmp281 + _tmp256 * _tmp283 + _tmp257 * _tmp282 + _tmp263 * _tmp280) -
      _tmp298 * _tmp301;
  const Scalar _tmp303 =
      std::pow(Scalar(std::pow(_tmp284, Scalar(2)) * _tmp299 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp304 = Scalar(1.4083112389913199) * _tmp277;
  const Scalar _tmp305 = _tmp303 * _tmp304;
  const Scalar _tmp306 = Scalar(1.0) * _tmp285;
  const Scalar _tmp307 = Scalar(1.0) * _tmp303 * std::cosh(_tmp306);
  const Scalar _tmp308 = -Scalar(1.4083112389913199) * std::sinh(_tmp289) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp306);
  const Scalar _tmp309 = _tmp106 * _tmp118;
  const Scalar _tmp310 = _tmp118 * _tmp92;
  const Scalar _tmp311 = _tmp186 * _tmp92;
  const Scalar _tmp312 = _tmp156 * _tmp186;
  const Scalar _tmp313 = -_tmp169 * _tmp309 - _tmp169 * _tmp312 + _tmp182 * _tmp311 +
                         _tmp208 * _tmp310 - _tmp293 - _tmp297;
  const Scalar _tmp314 = _tmp106 * _tmp310 + _tmp156 * _tmp311 + _tmp274 + _tmp294;
  const Scalar _tmp315 = Scalar(1.0) / (_tmp314);
  const Scalar _tmp316 = _tmp186 * _tmp219;
  const Scalar _tmp317 = _tmp118 * _tmp219;
  const Scalar _tmp318 = -_tmp105 * _tmp317 - _tmp148 * _tmp229 - _tmp155 * _tmp316 +
                         _tmp189 * _tmp232 - _tmp234 * _tmp236 + _tmp279;
  const Scalar _tmp319 = std::asinh(_tmp315 * _tmp318);
  const Scalar _tmp320 = Scalar(1.4083112389913199) * _tmp314;
  const Scalar _tmp321 =
      -_tmp319 * _tmp320 - std::sqrt(Scalar(std::pow(Scalar(-_tmp77 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp80 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp322 = Scalar(0.71007031138673404) * _tmp315;
  const Scalar _tmp323 = _tmp321 * _tmp322;
  const Scalar _tmp324 = Scalar(1.0) * _tmp319;
  const Scalar _tmp325 = -Scalar(1.4083112389913199) * std::sinh(_tmp323) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp324);
  const Scalar _tmp326 = std::pow(_tmp314, Scalar(-2));
  const Scalar _tmp327 = _tmp318 * _tmp326;
  const Scalar _tmp328 =
      std::pow(Scalar(std::pow(_tmp318, Scalar(2)) * _tmp326 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp329 =
      _tmp328 *
      (-_tmp313 * _tmp327 +
       _tmp315 * (_tmp148 * _tmp260 - _tmp148 * _tmp262 + _tmp172 * _tmp316 - _tmp174 * _tmp316 -
                  _tmp181 * _tmp316 - _tmp204 * _tmp317 + _tmp206 * _tmp317 - _tmp207 * _tmp317));
  const Scalar _tmp330 = Scalar(1.0) * std::cosh(_tmp324);
  const Scalar _tmp331 = Scalar(1.4083112389913199) * _tmp319;
  const Scalar _tmp332 = Scalar(0.71007031138673404) * _tmp321 * _tmp326;
  const Scalar _tmp333 = std::cosh(_tmp323);
  const Scalar _tmp334 = _tmp133 * _tmp62;
  const Scalar _tmp335 = _tmp334 * _tmp88;
  const Scalar _tmp336 = _tmp62 * _tmp70;
  const Scalar _tmp337 = _tmp336 * _tmp74;
  const Scalar _tmp338 = _tmp336 * _tmp67;
  const Scalar _tmp339 = -_tmp145 * _tmp65 - _tmp163 * _tmp335 + _tmp338 * _tmp83 + _tmp65 * _tmp83;
  const Scalar _tmp340 = -_tmp160 * _tmp335 + _tmp337 * _tmp83 - _tmp339 * _tmp46;
  const Scalar _tmp341 = _tmp103 * _tmp340;
  const Scalar _tmp342 = _tmp102 * _tmp341;
  const Scalar _tmp343 = _tmp97 * (-_tmp122 * _tmp124 + _tmp123 * _tmp34 - _tmp95);
  const Scalar _tmp344 = -_tmp127 * _tmp68 + _tmp343 * _tmp61;
  const Scalar _tmp345 = _tmp336 * _tmp99;
  const Scalar _tmp346 = -_tmp120 * _tmp87 - _tmp132 * _tmp335 + _tmp343 * _tmp83 -
                         _tmp344 * _tmp89 + _tmp345 * _tmp83;
  const Scalar _tmp347 = _tmp137 * _tmp346;
  const Scalar _tmp348 = _tmp205 * _tmp347;
  const Scalar _tmp349 = Scalar(1.0) * _tmp334;
  const Scalar _tmp350 = _tmp163 * _tmp349;
  const Scalar _tmp351 = _tmp61 * _tmp65 * _tmp71;
  const Scalar _tmp352 = -_tmp160 * _tmp349 + _tmp350 * _tmp46 + _tmp351 * _tmp46;
  const Scalar _tmp353 = _tmp168 * _tmp340;
  const Scalar _tmp354 = _tmp100 * _tmp353;
  const Scalar _tmp355 = _tmp104 * (-_tmp101 * _tmp352 - _tmp132 * _tmp349 - _tmp203 * _tmp346 -
                                    _tmp344 * _tmp71 + _tmp354 * _tmp75);
  const Scalar _tmp356 = _tmp342 - _tmp348 + _tmp352 + _tmp355;
  const Scalar _tmp357 = _tmp253 * _tmp340;
  const Scalar _tmp358 = _tmp339 * _tmp92;
  const Scalar _tmp359 = _tmp106 * _tmp357 - _tmp106 * _tmp358 + _tmp221 * _tmp342 -
                         _tmp221 * _tmp348 + _tmp221 * _tmp355 - _tmp222 * _tmp356 - _tmp350 -
                         _tmp351;
  const Scalar _tmp360 = _tmp191 * _tmp357 - _tmp191 * _tmp358;
  const Scalar _tmp361 = _tmp259 * _tmp347;
  const Scalar _tmp362 = _tmp220 * _tmp341;
  const Scalar _tmp363 =
      -_tmp140 * _tmp339 - _tmp217 * _tmp361 + _tmp217 * _tmp362 + _tmp261 * _tmp347;
  const Scalar _tmp364 = _tmp171 * _tmp347;
  const Scalar _tmp365 = _tmp158 * _tmp73 + _tmp164 - _tmp338 - _tmp65;
  const Scalar _tmp366 = _tmp161 - _tmp337 - _tmp365 * _tmp46;
  const Scalar _tmp367 =
      _tmp104 * (-_tmp101 * _tmp366 + _tmp120 * _tmp68 + _tmp135 + _tmp151 * _tmp344 +
                 _tmp153 * _tmp354 - _tmp180 * _tmp346 - _tmp343 - _tmp345);
  const Scalar _tmp368 = _tmp154 * _tmp341;
  const Scalar _tmp369 = -_tmp364 + _tmp366 + _tmp367 + _tmp368;
  const Scalar _tmp370 = _tmp156 * _tmp357 - _tmp156 * _tmp358 - _tmp221 * _tmp364 +
                         _tmp221 * _tmp367 + _tmp221 * _tmp368 - _tmp222 * _tmp369 + _tmp365;
  const Scalar _tmp371 = _tmp336 * _tmp61;
  const Scalar _tmp372 = _tmp353 * _tmp83;
  const Scalar _tmp373 = -_tmp107 * _tmp356 + _tmp111 * _tmp62 + _tmp209 * _tmp353;
  const Scalar _tmp374 = _tmp185 * _tmp334;
  const Scalar _tmp375 = -_tmp107 * _tmp369 + _tmp157 * _tmp62 + _tmp170 * _tmp353 + _tmp62;
  const Scalar _tmp376 =
      -_tmp149 * (-_tmp139 * _tmp347 - _tmp140 * _tmp143 * _tmp335 + _tmp141 * _tmp371 +
                  _tmp146 * _tmp347) +
      _tmp150 * _tmp68 -
      _tmp187 * (_tmp109 * _tmp375 + _tmp110 * _tmp369 + _tmp143 * _tmp374 - _tmp156 * _tmp372) +
      _tmp195 * _tmp68 -
      _tmp198 * (-_tmp143 * _tmp192 * _tmp334 - _tmp191 * _tmp372 + _tmp193 * _tmp371 +
                 _tmp197 * _tmp353) -
      _tmp211 * (-_tmp106 * _tmp372 + _tmp109 * _tmp373 + _tmp110 * _tmp356 + _tmp199 * _tmp334) +
      _tmp212 * _tmp68 + _tmp213 * _tmp68;
  const Scalar _tmp377 = _tmp216 * (_tmp225 * (_tmp220 * _tmp342 - _tmp220 * _tmp348 +
                                               _tmp220 * _tmp355 - _tmp224 * _tmp359) +
                                    _tmp231 * (-_tmp224 * _tmp363 - _tmp361 + _tmp362) +
                                    _tmp238 * (-_tmp220 * _tmp364 + _tmp220 * _tmp367 +
                                               _tmp220 * _tmp368 - _tmp224 * _tmp370) -
                                    _tmp258 * _tmp360) -
                         _tmp251 * _tmp376;
  const Scalar _tmp378 = _tmp272 * _tmp353;
  const Scalar _tmp379 = _tmp334 * _tmp61;
  const Scalar _tmp380 = _tmp336 * _tmp83;
  const Scalar _tmp381 = _tmp231 * _tmp347;
  const Scalar _tmp382 = -_tmp273 * _tmp379 - _tmp274 * _tmp335 * _tmp61 + _tmp274 * _tmp380 +
                         _tmp275 * _tmp375 + _tmp276 * _tmp373 + _tmp291 * _tmp379 +
                         _tmp294 * _tmp380 + _tmp296 * _tmp374 + _tmp378 * _tmp89 +
                         _tmp381 * _tmp89;
  const Scalar _tmp383 =
      _tmp278 * (_tmp280 * _tmp363 + _tmp281 * _tmp370 + _tmp282 * _tmp360 + _tmp283 * _tmp359) -
      _tmp301 * _tmp382;
  const Scalar _tmp384 = -_tmp309 * _tmp353 + _tmp310 * _tmp356 + _tmp311 * _tmp369 -
                         _tmp312 * _tmp353 - _tmp378 - _tmp381;
  const Scalar _tmp385 =
      _tmp328 *
      (_tmp315 * (_tmp148 * _tmp361 - _tmp148 * _tmp362 + _tmp316 * _tmp364 - _tmp316 * _tmp367 -
                  _tmp316 * _tmp368 - _tmp317 * _tmp342 + _tmp317 * _tmp348 - _tmp317 * _tmp355) -
       _tmp327 * _tmp384);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp214 * _tmp249 +
      _tmp266 * (-_tmp264 * _tmp271 -
                 _tmp270 * (-_tmp214 * _tmp269 + _tmp247 * (-_tmp214 * _tmp242 - _tmp244 * _tmp268 -
                                                            _tmp264 * _tmp267)));
  _res(2, 0) =
      _tmp298 * _tmp308 +
      _tmp304 *
          (-_tmp290 * (_tmp288 * (-_tmp286 * _tmp298 - _tmp302 * _tmp305) - _tmp298 * _tmp300) -
           _tmp302 * _tmp307);
  _res(3, 0) =
      _tmp313 * _tmp325 +
      _tmp320 *
          (-_tmp329 * _tmp330 -
           _tmp333 * (-_tmp313 * _tmp332 + _tmp322 * (-_tmp313 * _tmp331 - _tmp320 * _tmp329)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp249 * _tmp376 +
      _tmp266 *
          (-_tmp270 * (_tmp247 * (-_tmp242 * _tmp376 - _tmp243 * _tmp268 - _tmp267 * _tmp377) -
                       _tmp269 * _tmp376) -
           _tmp271 * _tmp377);
  _res(2, 1) =
      _tmp304 *
          (-_tmp290 * (_tmp288 * (-_tmp286 * _tmp382 - _tmp305 * _tmp383) - _tmp300 * _tmp382) -
           _tmp307 * _tmp383) +
      _tmp308 * _tmp382;
  _res(3, 1) =
      _tmp320 *
          (-_tmp330 * _tmp385 -
           _tmp333 * (_tmp322 * (-_tmp320 * _tmp385 - _tmp331 * _tmp384) - _tmp332 * _tmp384)) +
      _tmp325 * _tmp384;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
