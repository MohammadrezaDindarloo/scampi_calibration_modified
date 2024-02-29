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
 * Symbolic function: IK_residual_func_cost1_wrt_pc_Nl0
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPcNl0(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1166

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (369)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp0;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp2 * _tmp5;
  const Scalar _tmp13 = _tmp0 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = _tmp17 - p_c(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp23 = _tmp2 * _tmp6;
  const Scalar _tmp24 = _tmp5 * _tmp8;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp22 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = -_tmp4;
  const Scalar _tmp29 = _tmp15 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(0, 0);
  const Scalar _tmp31 = _tmp30 - p_d(0, 0);
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp33 = -_tmp32;
  const Scalar _tmp34 = _tmp23 - _tmp24;
  const Scalar _tmp35 = -Scalar(0.010999999999999999) * _tmp34;
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp21 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp37 = _tmp35 + _tmp36;
  const Scalar _tmp38 = _tmp33 + _tmp37;
  const Scalar _tmp39 = _tmp38 + position_vector(1, 0);
  const Scalar _tmp40 = _tmp39 - p_d(1, 0);
  const Scalar _tmp41 = std::pow(Scalar(std::pow(_tmp31, Scalar(2)) + std::pow(_tmp40, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp31 * _tmp41;
  const Scalar _tmp43 = _tmp22 - _tmp25;
  const Scalar _tmp44 = _tmp19 + _tmp43;
  const Scalar _tmp45 = _tmp40 * _tmp41;
  const Scalar _tmp46 = _tmp11 - _tmp14;
  const Scalar _tmp47 = _tmp4 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 - p_b(0, 0);
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = _tmp35 - _tmp36;
  const Scalar _tmp52 = _tmp32 + _tmp51;
  const Scalar _tmp53 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp54 = _tmp53 - p_b(1, 0);
  const Scalar _tmp55 = _tmp50 * _tmp54;
  const Scalar _tmp56 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp57 = _tmp32 + _tmp37;
  const Scalar _tmp58 = _tmp57 + position_vector(1, 0);
  const Scalar _tmp59 = _tmp58 - p_c(1, 0);
  const Scalar _tmp60 = std::pow(_tmp59, Scalar(2));
  const Scalar _tmp61 = _tmp56 + _tmp60;
  const Scalar _tmp62 = std::pow(_tmp61, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp63 = _tmp44 * _tmp62;
  const Scalar _tmp64 = _tmp18 * _tmp63;
  const Scalar _tmp65 = _tmp19 + _tmp26;
  const Scalar _tmp66 = _tmp62 * _tmp65;
  const Scalar _tmp67 = -_tmp55 * _tmp64 + _tmp59 * _tmp66;
  const Scalar _tmp68 = _tmp55 * _tmp62;
  const Scalar _tmp69 = _tmp18 * _tmp68 - _tmp59 * _tmp62;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp42 * _tmp55 - _tmp45;
  const Scalar _tmp72 = _tmp70 * _tmp71;
  const Scalar _tmp73 = _tmp44 * _tmp55;
  const Scalar _tmp74 = _tmp27 * _tmp45 - _tmp42 * _tmp73 - _tmp67 * _tmp72;
  const Scalar _tmp75 = Scalar(1.0) * _tmp52;
  const Scalar _tmp76 = -_tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp57 + _tmp76);
  const Scalar _tmp78 = Scalar(1.0) * _tmp47;
  const Scalar _tmp79 = -_tmp16 + _tmp78;
  const Scalar _tmp80 = _tmp77 * _tmp79;
  const Scalar _tmp81 = -_tmp18 * _tmp66 + _tmp64;
  const Scalar _tmp82 = -_tmp27 * _tmp42 + _tmp42 * _tmp44 - _tmp72 * _tmp81 - _tmp74 * _tmp80;
  const Scalar _tmp83 = _tmp57 * _tmp62;
  const Scalar _tmp84 = _tmp16 * _tmp62;
  const Scalar _tmp85 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp54, Scalar(2))));
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = _tmp50 * _tmp85;
  const Scalar _tmp88 = _tmp87 * (_tmp47 * _tmp54 * _tmp86 - _tmp49 * _tmp52 * _tmp86);
  const Scalar _tmp89 = _tmp62 * _tmp88;
  const Scalar _tmp90 = _tmp18 * _tmp83 + _tmp18 * _tmp89 - _tmp59 * _tmp84;
  const Scalar _tmp91 = -_tmp29 * _tmp45 + _tmp38 * _tmp42 + _tmp42 * _tmp88 - _tmp72 * _tmp90;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp55 * _tmp70;
  const Scalar _tmp94 = _tmp67 * _tmp93 + _tmp73;
  const Scalar _tmp95 = -_tmp44 - _tmp80 * _tmp94 + _tmp81 * _tmp93;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp97 = _tmp91 * _tmp96;
  const Scalar _tmp98 = -_tmp88 + _tmp90 * _tmp93 - _tmp95 * _tmp97;
  const Scalar _tmp99 = _tmp92 * _tmp98;
  const Scalar _tmp100 = _tmp82 * _tmp99;
  const Scalar _tmp101 = _tmp100 + _tmp95;
  const Scalar _tmp102 = _tmp71 * _tmp96;
  const Scalar _tmp103 = -_tmp101 * _tmp102 - _tmp55;
  const Scalar _tmp104 = _tmp62 * _tmp70;
  const Scalar _tmp105 = _tmp103 * _tmp104;
  const Scalar _tmp106 = _tmp101 * _tmp96;
  const Scalar _tmp107 = _tmp28 + _tmp46;
  const Scalar _tmp108 = _tmp107 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp109 = _tmp33 + _tmp51;
  const Scalar _tmp110 = _tmp109 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp108, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp108 * _tmp111;
  const Scalar _tmp113 = _tmp112 * fh1;
  const Scalar _tmp114 = _tmp113 * _tmp87;
  const Scalar _tmp115 = _tmp75 * _tmp80 + _tmp78;
  const Scalar _tmp116 = 0;
  const Scalar _tmp117 = _tmp116 * _tmp96;
  const Scalar _tmp118 = _tmp104 * _tmp18;
  const Scalar _tmp119 = _tmp117 * _tmp71;
  const Scalar _tmp120 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp121 = _tmp120 * _tmp87;
  const Scalar _tmp122 = Scalar(1.0) * _tmp70;
  const Scalar _tmp123 = Scalar(1.0) * _tmp77;
  const Scalar _tmp124 = _tmp123 * _tmp79;
  const Scalar _tmp125 = _tmp124 * _tmp70;
  const Scalar _tmp126 = -_tmp122 * _tmp81 + _tmp125 * _tmp67;
  const Scalar _tmp127 = -_tmp122 * _tmp90 - _tmp126 * _tmp97;
  const Scalar _tmp128 = _tmp82 * _tmp92;
  const Scalar _tmp129 = _tmp127 * _tmp128;
  const Scalar _tmp130 = _tmp126 + _tmp129;
  const Scalar _tmp131 = _tmp130 * _tmp96;
  const Scalar _tmp132 = -_tmp102 * _tmp130 + Scalar(1.0);
  const Scalar _tmp133 = _tmp104 * _tmp132;
  const Scalar _tmp134 = _tmp110 * _tmp111;
  const Scalar _tmp135 = _tmp134 * fh1;
  const Scalar _tmp136 = _tmp135 * _tmp87;
  const Scalar _tmp137 = Scalar(1.0) * _tmp92;
  const Scalar _tmp138 = _tmp18 * _tmp62;
  const Scalar _tmp139 = _tmp122 * _tmp71;
  const Scalar _tmp140 = _tmp139 * _tmp92;
  const Scalar _tmp141 = fh1 * (_tmp107 * _tmp134 - _tmp109 * _tmp112);
  const Scalar _tmp142 = _tmp141 * _tmp87;
  const Scalar _tmp143 = -_tmp114 * (_tmp105 * _tmp18 + _tmp106 * _tmp42 + Scalar(1.0)) -
                         _tmp121 * (_tmp117 * _tmp42 - _tmp118 * _tmp119) -
                         _tmp136 * (_tmp131 * _tmp42 + _tmp133 * _tmp18) -
                         _tmp142 * (_tmp137 * _tmp42 - _tmp138 * _tmp140);
  const Scalar _tmp144 = Scalar(1.0) / (_tmp143);
  const Scalar _tmp145 = fh1 * (_tmp20 + _tmp43);
  const Scalar _tmp146 = Scalar(40.024799999999999) * _tmp10 + _tmp107 * fv1 + _tmp112 * _tmp145;
  const Scalar _tmp147 = _tmp38 + _tmp76;
  const Scalar _tmp148 = _tmp147 * _tmp80;
  const Scalar _tmp149 = Scalar(1.0) / (-_tmp148 - _tmp29 + _tmp78);
  const Scalar _tmp150 = Scalar(1.0) * _tmp149;
  const Scalar _tmp151 = _tmp147 * _tmp150;
  const Scalar _tmp152 = _tmp115 * _tmp149;
  const Scalar _tmp153 = -_tmp117 * _tmp74 - _tmp147 * _tmp152 + _tmp76;
  const Scalar _tmp154 = -_tmp109 * fv1 - _tmp134 * _tmp145 - Scalar(40.024799999999999) * _tmp34;
  const Scalar _tmp155 = _tmp148 * _tmp150 + Scalar(1.0);
  const Scalar _tmp156 = _tmp150 * _tmp80;
  const Scalar _tmp157 = _tmp128 * _tmp151 - _tmp137 * _tmp74;
  const Scalar _tmp158 = _tmp128 * _tmp150;
  const Scalar _tmp159 = Scalar(1.0) * _tmp141;
  const Scalar _tmp160 = _tmp147 * _tmp149;
  const Scalar _tmp161 = _tmp74 * _tmp96;
  const Scalar _tmp162 = -_tmp122 * _tmp67 + _tmp129 * _tmp160 - _tmp130 * _tmp161;
  const Scalar _tmp163 = Scalar(1.0) * fh1;
  const Scalar _tmp164 = _tmp134 * _tmp163;
  const Scalar _tmp165 = _tmp100 * _tmp160 - _tmp106 * _tmp74 + _tmp94;
  const Scalar _tmp166 = _tmp112 * _tmp163;
  const Scalar _tmp167 =
      Scalar(1.0) * _tmp120 * (-_tmp115 * _tmp150 - _tmp123 * _tmp153 + Scalar(1.0)) +
      Scalar(1.0) * _tmp146 * (-_tmp150 + _tmp151 * _tmp77) +
      Scalar(1.0) * _tmp154 * (-_tmp123 * _tmp155 + _tmp156) +
      _tmp159 * (-_tmp123 * _tmp157 + _tmp158) +
      _tmp164 * (-_tmp123 * _tmp162 + _tmp129 * _tmp150) +
      _tmp166 * (_tmp100 * _tmp150 - _tmp123 * _tmp165);
  const Scalar _tmp168 = std::asinh(_tmp144 * _tmp167);
  const Scalar _tmp169 = Scalar(1.0) * _tmp168;
  const Scalar _tmp170 = Scalar(1.4083112389913199) * _tmp143;
  const Scalar _tmp171 =
      -_tmp168 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp48 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp53 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.71007031138673404) * _tmp144;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = _tmp172 * p_b(2, 0) + std::cosh(_tmp169) - std::cosh(_tmp173);
  const Scalar _tmp175 = std::pow(_tmp61, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp176 = _tmp175 * _tmp56;
  const Scalar _tmp177 = _tmp175 * _tmp18 * _tmp59;
  const Scalar _tmp178 = -_tmp16 * _tmp177 + _tmp176 * _tmp57 + _tmp176 * _tmp88 - _tmp83 - _tmp89;
  const Scalar _tmp179 = _tmp176 * _tmp55 - _tmp177 - _tmp68;
  const Scalar _tmp180 = std::pow(_tmp69, Scalar(-2));
  const Scalar _tmp181 = _tmp180 * _tmp71;
  const Scalar _tmp182 = _tmp179 * _tmp181;
  const Scalar _tmp183 = -_tmp178 * _tmp72 + _tmp182 * _tmp90;
  const Scalar _tmp184 = std::pow(_tmp91, Scalar(-2));
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = Scalar(1.0) * _tmp42;
  const Scalar _tmp187 = _tmp139 * _tmp185;
  const Scalar _tmp188 = _tmp138 * _tmp182;
  const Scalar _tmp189 = _tmp179 * _tmp180;
  const Scalar _tmp190 = _tmp132 * _tmp189;
  const Scalar _tmp191 = _tmp176 * _tmp44;
  const Scalar _tmp192 = -_tmp176 * _tmp65 + _tmp191 - _tmp63 + _tmp66;
  const Scalar _tmp193 = _tmp177 * _tmp65;
  const Scalar _tmp194 = -_tmp191 * _tmp55 + _tmp193 + _tmp55 * _tmp63;
  const Scalar _tmp195 = _tmp182 * _tmp67 - _tmp194 * _tmp72;
  const Scalar _tmp196 = _tmp182 * _tmp81 - _tmp192 * _tmp72 - _tmp195 * _tmp80;
  const Scalar _tmp197 = std::pow(_tmp82, Scalar(-2));
  const Scalar _tmp198 = _tmp196 * _tmp197;
  const Scalar _tmp199 = _tmp130 * _tmp198;
  const Scalar _tmp200 = _tmp127 * _tmp92;
  const Scalar _tmp201 = _tmp196 * _tmp200;
  const Scalar _tmp202 = Scalar(1.0) * _tmp180;
  const Scalar _tmp203 = _tmp179 * _tmp202;
  const Scalar _tmp204 = _tmp126 * _tmp91;
  const Scalar _tmp205 =
      -_tmp122 * _tmp192 - _tmp124 * _tmp189 * _tmp67 + _tmp125 * _tmp194 + _tmp203 * _tmp81;
  const Scalar _tmp206 = _tmp183 * _tmp96;
  const Scalar _tmp207 = _tmp128 * (-_tmp122 * _tmp178 - _tmp126 * _tmp206 + _tmp198 * _tmp204 +
                                    _tmp203 * _tmp90 - _tmp205 * _tmp97);
  const Scalar _tmp208 = _tmp185 * _tmp82;
  const Scalar _tmp209 = _tmp127 * _tmp208;
  const Scalar _tmp210 = _tmp201 + _tmp205 + _tmp207 - _tmp209;
  const Scalar _tmp211 = -_tmp102 * _tmp210 + _tmp199 * _tmp71;
  const Scalar _tmp212 = _tmp176 * _tmp70;
  const Scalar _tmp213 = _tmp42 * _tmp96;
  const Scalar _tmp214 = _tmp116 * _tmp118;
  const Scalar _tmp215 = _tmp116 * _tmp42;
  const Scalar _tmp216 = _tmp117 * _tmp72;
  const Scalar _tmp217 = _tmp101 * _tmp196;
  const Scalar _tmp218 = _tmp197 * _tmp217;
  const Scalar _tmp219 = _tmp91 * _tmp95;
  const Scalar _tmp220 = _tmp189 * _tmp55;
  const Scalar _tmp221 = _tmp194 * _tmp93 - _tmp220 * _tmp67;
  const Scalar _tmp222 = _tmp192 * _tmp93 - _tmp220 * _tmp81 - _tmp221 * _tmp80;
  const Scalar _tmp223 = _tmp128 * (_tmp178 * _tmp93 + _tmp198 * _tmp219 - _tmp206 * _tmp95 -
                                    _tmp220 * _tmp90 - _tmp222 * _tmp97);
  const Scalar _tmp224 = _tmp196 * _tmp99;
  const Scalar _tmp225 = _tmp208 * _tmp98;
  const Scalar _tmp226 = _tmp222 + _tmp223 + _tmp224 - _tmp225;
  const Scalar _tmp227 = -_tmp102 * _tmp226 + _tmp218 * _tmp71;
  const Scalar _tmp228 = _tmp103 * _tmp138;
  const Scalar _tmp229 = -_tmp114 * (_tmp103 * _tmp212 - _tmp105 + _tmp118 * _tmp227 -
                                     _tmp189 * _tmp228 + _tmp213 * _tmp226 - _tmp218 * _tmp42) -
                         _tmp121 * (_tmp104 * _tmp119 + _tmp117 * _tmp188 - _tmp176 * _tmp216 +
                                    _tmp198 * _tmp214 * _tmp71 - _tmp198 * _tmp215) -
                         _tmp136 * (_tmp118 * _tmp211 + _tmp132 * _tmp212 - _tmp133 -
                                    _tmp138 * _tmp190 - _tmp199 * _tmp42 + _tmp210 * _tmp213) -
                         _tmp142 * (_tmp137 * _tmp188 + _tmp138 * _tmp187 - _tmp140 * _tmp176 +
                                    _tmp140 * _tmp62 - _tmp185 * _tmp186);
  const Scalar _tmp230 = Scalar(1.4083112389913199) * _tmp229;
  const Scalar _tmp231 = _tmp197 * _tmp74;
  const Scalar _tmp232 = _tmp196 * _tmp231;
  const Scalar _tmp233 = _tmp116 * _tmp232 - _tmp117 * _tmp195;
  const Scalar _tmp234 = _tmp120 * _tmp123;
  const Scalar _tmp235 = -_tmp122 * _tmp194 + _tmp130 * _tmp232 - _tmp131 * _tmp195 +
                         _tmp160 * _tmp201 + _tmp160 * _tmp207 - _tmp160 * _tmp209 -
                         _tmp161 * _tmp210 + _tmp203 * _tmp67;
  const Scalar _tmp236 = _tmp150 * _tmp92;
  const Scalar _tmp237 = _tmp196 * _tmp236;
  const Scalar _tmp238 = _tmp151 * _tmp92;
  const Scalar _tmp239 = Scalar(1.0) * _tmp74;
  const Scalar _tmp240 =
      -_tmp137 * _tmp195 - _tmp151 * _tmp208 + _tmp185 * _tmp239 + _tmp196 * _tmp238;
  const Scalar _tmp241 = _tmp150 * _tmp208;
  const Scalar _tmp242 = -_tmp106 * _tmp195 + _tmp160 * _tmp223 + _tmp160 * _tmp224 -
                         _tmp160 * _tmp225 - _tmp161 * _tmp226 + _tmp217 * _tmp231 + _tmp221;
  const Scalar _tmp243 = std::pow(_tmp143, Scalar(-2));
  const Scalar _tmp244 = _tmp167 * _tmp243;
  const Scalar _tmp245 = _tmp144 * (_tmp159 * (-_tmp123 * _tmp240 + _tmp237 - _tmp241) +
                                    _tmp164 * (-_tmp123 * _tmp235 + _tmp150 * _tmp201 +
                                               _tmp150 * _tmp207 - _tmp150 * _tmp209) +
                                    _tmp166 * (-_tmp123 * _tmp242 + _tmp150 * _tmp223 +
                                               _tmp150 * _tmp224 - _tmp150 * _tmp225) -
                                    _tmp233 * _tmp234) -
                         _tmp229 * _tmp244;
  const Scalar _tmp246 =
      std::pow(Scalar(std::pow(_tmp167, Scalar(2)) * _tmp243 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp247 = Scalar(1.0) * _tmp246 * std::sinh(_tmp169);
  const Scalar _tmp248 = std::sinh(_tmp173);
  const Scalar _tmp249 = Scalar(0.71007031138673404) * _tmp243;
  const Scalar _tmp250 = _tmp229 * _tmp249;
  const Scalar _tmp251 = _tmp170 * _tmp246;
  const Scalar _tmp252 = -_tmp58 + p_c(1, 0);
  const Scalar _tmp253 = -_tmp17 + p_c(0, 0);
  const Scalar _tmp254 =
      std::sqrt(Scalar(std::pow(_tmp252, Scalar(2)) + std::pow(_tmp253, Scalar(2))));
  const Scalar _tmp255 = _tmp135 * _tmp70;
  const Scalar _tmp256 = _tmp117 * _tmp120;
  const Scalar _tmp257 = _tmp113 * _tmp70;
  const Scalar _tmp258 =
      _tmp103 * _tmp257 + _tmp132 * _tmp255 - _tmp140 * _tmp141 - _tmp256 * _tmp72;
  const Scalar _tmp259 = Scalar(1.0) / (_tmp258);
  const Scalar _tmp260 = _tmp120 * _tmp77;
  const Scalar _tmp261 = _tmp113 * _tmp77;
  const Scalar _tmp262 = _tmp135 * _tmp77;
  const Scalar _tmp263 = _tmp146 * _tmp150;
  const Scalar _tmp264 = _tmp141 * _tmp77;
  const Scalar _tmp265 = -_tmp147 * _tmp263 * _tmp77 + _tmp153 * _tmp260 +
                         _tmp154 * _tmp155 * _tmp77 + _tmp157 * _tmp264 + _tmp162 * _tmp262 +
                         _tmp165 * _tmp261;
  const Scalar _tmp266 = std::asinh(_tmp259 * _tmp265);
  const Scalar _tmp267 = Scalar(1.4083112389913199) * _tmp258;
  const Scalar _tmp268 = -_tmp254 - _tmp266 * _tmp267;
  const Scalar _tmp269 = Scalar(0.71007031138673404) * _tmp259;
  const Scalar _tmp270 = _tmp268 * _tmp269;
  const Scalar _tmp271 = Scalar(1.0) * _tmp266;
  const Scalar _tmp272 = _tmp269 * p_c(2, 0) - std::cosh(_tmp270) + std::cosh(_tmp271);
  const Scalar _tmp273 = _tmp116 * _tmp120;
  const Scalar _tmp274 = _tmp198 * _tmp273;
  const Scalar _tmp275 = _tmp137 * _tmp141;
  const Scalar _tmp276 = _tmp103 * _tmp113;
  const Scalar _tmp277 = -_tmp135 * _tmp190 + _tmp141 * _tmp187 + _tmp182 * _tmp256 +
                         _tmp182 * _tmp275 - _tmp189 * _tmp276 + _tmp211 * _tmp255 +
                         _tmp227 * _tmp257 + _tmp274 * _tmp72;
  const Scalar _tmp278 = Scalar(1.4083112389913199) * _tmp277;
  const Scalar _tmp279 = std::pow(_tmp258, Scalar(-2));
  const Scalar _tmp280 = _tmp265 * _tmp279;
  const Scalar _tmp281 =
      _tmp259 * (_tmp233 * _tmp260 + _tmp235 * _tmp262 + _tmp240 * _tmp264 + _tmp242 * _tmp261) -
      _tmp277 * _tmp280;
  const Scalar _tmp282 =
      std::pow(Scalar(std::pow(_tmp265, Scalar(2)) * _tmp279 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp283 = Scalar(1.0) * _tmp282 * std::sinh(_tmp271);
  const Scalar _tmp284 = std::sinh(_tmp270);
  const Scalar _tmp285 = _tmp267 * _tmp282;
  const Scalar _tmp286 = Scalar(1.0) / (_tmp254);
  const Scalar _tmp287 = Scalar(0.71007031138673404) * _tmp279;
  const Scalar _tmp288 = _tmp277 * _tmp287;
  const Scalar _tmp289 = _tmp113 * _tmp96;
  const Scalar _tmp290 = _tmp135 * _tmp96;
  const Scalar _tmp291 = -_tmp113 * _tmp218 - _tmp135 * _tmp199 - _tmp159 * _tmp185 +
                         _tmp210 * _tmp290 + _tmp226 * _tmp289 - _tmp274;
  const Scalar _tmp292 = _tmp106 * _tmp113 + _tmp131 * _tmp135 + _tmp256 + _tmp275;
  const Scalar _tmp293 = Scalar(1.0) / (_tmp292);
  const Scalar _tmp294 = _tmp135 * _tmp149;
  const Scalar _tmp295 = _tmp113 * _tmp149;
  const Scalar _tmp296 = -_tmp100 * _tmp295 + _tmp120 * _tmp152 - _tmp129 * _tmp294 -
                         _tmp141 * _tmp158 - _tmp154 * _tmp156 + _tmp263;
  const Scalar _tmp297 = std::asinh(_tmp293 * _tmp296);
  const Scalar _tmp298 = Scalar(1.0) * _tmp297;
  const Scalar _tmp299 = Scalar(1.4083112389913199) * _tmp297;
  const Scalar _tmp300 =
      -_tmp292 * _tmp299 - std::sqrt(Scalar(std::pow(Scalar(-_tmp30 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp39 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp301 = Scalar(0.71007031138673404) * _tmp293;
  const Scalar _tmp302 = _tmp300 * _tmp301;
  const Scalar _tmp303 = Scalar(1.4083112389913199) * _tmp301 * p_d(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp298) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp302);
  const Scalar _tmp304 = std::pow(_tmp292, Scalar(-2));
  const Scalar _tmp305 = _tmp296 * _tmp304;
  const Scalar _tmp306 =
      std::pow(Scalar(std::pow(_tmp296, Scalar(2)) * _tmp304 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp307 =
      _tmp306 *
      (-_tmp291 * _tmp305 +
       _tmp293 * (-_tmp141 * _tmp237 + _tmp141 * _tmp241 - _tmp201 * _tmp294 - _tmp207 * _tmp294 +
                  _tmp209 * _tmp294 - _tmp223 * _tmp295 - _tmp224 * _tmp295 + _tmp225 * _tmp295));
  const Scalar _tmp308 = Scalar(1.0) * std::sinh(_tmp298);
  const Scalar _tmp309 = Scalar(0.71007031138673404) * _tmp304;
  const Scalar _tmp310 = _tmp309 * p_d(2, 0);
  const Scalar _tmp311 = std::sinh(_tmp302);
  const Scalar _tmp312 = _tmp300 * _tmp309;
  const Scalar _tmp313 = Scalar(1.4083112389913199) * _tmp292;
  const Scalar _tmp314 = _tmp175 * _tmp60;
  const Scalar _tmp315 = _tmp177 * _tmp55 - _tmp314 + _tmp62;
  const Scalar _tmp316 = _tmp181 * _tmp315;
  const Scalar _tmp317 = _tmp138 * _tmp316;
  const Scalar _tmp318 = _tmp177 * _tmp44 - _tmp193;
  const Scalar _tmp319 = _tmp315 * _tmp67;
  const Scalar _tmp320 = -_tmp177 * _tmp73 + _tmp314 * _tmp65 - _tmp66;
  const Scalar _tmp321 = _tmp181 * _tmp319 - _tmp320 * _tmp72;
  const Scalar _tmp322 = _tmp315 * _tmp81;
  const Scalar _tmp323 = _tmp181 * _tmp322 - _tmp318 * _tmp72 - _tmp321 * _tmp80;
  const Scalar _tmp324 = _tmp197 * _tmp323;
  const Scalar _tmp325 = _tmp324 * _tmp71;
  const Scalar _tmp326 = _tmp180 * _tmp315;
  const Scalar _tmp327 = _tmp177 * _tmp70;
  const Scalar _tmp328 = _tmp323 * _tmp99;
  const Scalar _tmp329 = _tmp180 * _tmp55;
  const Scalar _tmp330 = -_tmp319 * _tmp329 + _tmp320 * _tmp93;
  const Scalar _tmp331 = _tmp318 * _tmp93 - _tmp322 * _tmp329 - _tmp330 * _tmp80;
  const Scalar _tmp332 = -_tmp16 * _tmp314 + _tmp177 * _tmp57 + _tmp177 * _tmp88 + _tmp84;
  const Scalar _tmp333 = _tmp315 * _tmp90;
  const Scalar _tmp334 = _tmp181 * _tmp333 - _tmp332 * _tmp72;
  const Scalar _tmp335 = _tmp334 * _tmp96;
  const Scalar _tmp336 = _tmp128 * (_tmp219 * _tmp324 - _tmp329 * _tmp333 - _tmp331 * _tmp97 +
                                    _tmp332 * _tmp93 - _tmp335 * _tmp95);
  const Scalar _tmp337 = _tmp184 * _tmp334;
  const Scalar _tmp338 = _tmp337 * _tmp82;
  const Scalar _tmp339 = _tmp338 * _tmp98;
  const Scalar _tmp340 = _tmp328 + _tmp331 + _tmp336 - _tmp339;
  const Scalar _tmp341 = _tmp101 * _tmp325 - _tmp102 * _tmp340;
  const Scalar _tmp342 = _tmp324 * _tmp42;
  const Scalar _tmp343 =
      -_tmp122 * _tmp318 - _tmp124 * _tmp180 * _tmp319 + _tmp125 * _tmp320 + _tmp202 * _tmp322;
  const Scalar _tmp344 = _tmp128 * (-_tmp122 * _tmp332 - _tmp126 * _tmp335 + _tmp202 * _tmp333 +
                                    _tmp204 * _tmp324 - _tmp343 * _tmp97);
  const Scalar _tmp345 = _tmp200 * _tmp323;
  const Scalar _tmp346 = _tmp127 * _tmp338;
  const Scalar _tmp347 = _tmp343 + _tmp344 + _tmp345 - _tmp346;
  const Scalar _tmp348 = -_tmp102 * _tmp347 + _tmp130 * _tmp325;
  const Scalar _tmp349 = _tmp132 * _tmp326;
  const Scalar _tmp350 = _tmp139 * _tmp337;
  const Scalar _tmp351 =
      -_tmp114 * (-_tmp101 * _tmp342 + _tmp103 * _tmp327 + _tmp118 * _tmp341 + _tmp213 * _tmp340 -
                  _tmp228 * _tmp326) -
      _tmp121 * (_tmp117 * _tmp317 - _tmp177 * _tmp216 + _tmp214 * _tmp325 - _tmp215 * _tmp324) -
      _tmp136 * (_tmp118 * _tmp348 - _tmp130 * _tmp342 + _tmp132 * _tmp327 - _tmp138 * _tmp349 +
                 _tmp213 * _tmp347) -
      _tmp142 * (_tmp137 * _tmp317 + _tmp138 * _tmp350 - _tmp140 * _tmp177 - _tmp186 * _tmp337);
  const Scalar _tmp352 = Scalar(1.4083112389913199) * _tmp351;
  const Scalar _tmp353 = _tmp249 * _tmp351;
  const Scalar _tmp354 = _tmp231 * _tmp323;
  const Scalar _tmp355 = -_tmp122 * _tmp320 + _tmp130 * _tmp354 - _tmp131 * _tmp321 +
                         _tmp160 * _tmp344 + _tmp160 * _tmp345 - _tmp160 * _tmp346 -
                         _tmp161 * _tmp347 + _tmp202 * _tmp319;
  const Scalar _tmp356 = _tmp116 * _tmp354 - _tmp117 * _tmp321;
  const Scalar _tmp357 = _tmp101 * _tmp354 - _tmp106 * _tmp321 + _tmp160 * _tmp328 +
                         _tmp160 * _tmp336 - _tmp160 * _tmp339 - _tmp161 * _tmp340 + _tmp330;
  const Scalar _tmp358 = _tmp236 * _tmp323;
  const Scalar _tmp359 =
      -_tmp137 * _tmp321 - _tmp151 * _tmp338 + _tmp238 * _tmp323 + _tmp239 * _tmp337;
  const Scalar _tmp360 = _tmp150 * _tmp338;
  const Scalar _tmp361 = _tmp144 * (_tmp159 * (-_tmp123 * _tmp359 + _tmp358 - _tmp360) +
                                    _tmp164 * (-_tmp123 * _tmp355 + _tmp150 * _tmp344 +
                                               _tmp150 * _tmp345 - _tmp150 * _tmp346) +
                                    _tmp166 * (-_tmp123 * _tmp357 + _tmp150 * _tmp328 +
                                               _tmp150 * _tmp336 - _tmp150 * _tmp339) -
                                    _tmp234 * _tmp356) -
                         _tmp244 * _tmp351;
  const Scalar _tmp362 = _tmp273 * _tmp324;
  const Scalar _tmp363 = -_tmp135 * _tmp349 + _tmp141 * _tmp350 + _tmp255 * _tmp348 +
                         _tmp256 * _tmp316 + _tmp257 * _tmp341 + _tmp275 * _tmp316 -
                         _tmp276 * _tmp326 + _tmp362 * _tmp72;
  const Scalar _tmp364 = Scalar(1.4083112389913199) * _tmp363;
  const Scalar _tmp365 = _tmp287 * _tmp363;
  const Scalar _tmp366 =
      _tmp259 * (_tmp260 * _tmp356 + _tmp261 * _tmp357 + _tmp262 * _tmp355 + _tmp264 * _tmp359) -
      _tmp280 * _tmp363;
  const Scalar _tmp367 = -_tmp101 * _tmp113 * _tmp324 - _tmp130 * _tmp135 * _tmp324 -
                         _tmp159 * _tmp337 + _tmp289 * _tmp340 + _tmp290 * _tmp347 - _tmp362;
  const Scalar _tmp368 =
      _tmp306 *
      (_tmp293 * (-_tmp141 * _tmp358 + _tmp141 * _tmp360 - _tmp294 * _tmp344 - _tmp294 * _tmp345 +
                  _tmp294 * _tmp346 - _tmp295 * _tmp328 - _tmp295 * _tmp336 + _tmp295 * _tmp339) -
       _tmp305 * _tmp367);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp170 *
          (_tmp245 * _tmp247 -
           _tmp248 * (-_tmp171 * _tmp250 + _tmp172 * (-_tmp168 * _tmp230 - _tmp245 * _tmp251)) -
           _tmp250 * p_b(2, 0)) -
      _tmp174 * _tmp230;
  _res(2, 0) =
      -_tmp267 *
          (_tmp281 * _tmp283 -
           _tmp284 * (-_tmp268 * _tmp288 +
                      _tmp269 * (-_tmp253 * _tmp286 - _tmp266 * _tmp278 - _tmp281 * _tmp285)) -
           _tmp288 * p_c(2, 0)) -
      _tmp272 * _tmp278;
  _res(3, 0) =
      -_tmp291 * _tmp303 -
      _tmp313 *
          (-_tmp291 * _tmp310 + _tmp307 * _tmp308 -
           _tmp311 * (-_tmp291 * _tmp312 + _tmp301 * (-_tmp291 * _tmp299 - _tmp307 * _tmp313)));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp170 *
          (_tmp247 * _tmp361 -
           _tmp248 * (-_tmp171 * _tmp353 + _tmp172 * (-_tmp168 * _tmp352 - _tmp251 * _tmp361)) -
           _tmp353 * p_b(2, 0)) -
      _tmp174 * _tmp352;
  _res(2, 1) =
      -_tmp267 *
          (_tmp283 * _tmp366 -
           _tmp284 * (-_tmp268 * _tmp365 +
                      _tmp269 * (-_tmp252 * _tmp286 - _tmp266 * _tmp364 - _tmp285 * _tmp366)) -
           _tmp365 * p_c(2, 0)) -
      _tmp272 * _tmp364;
  _res(3, 1) =
      -_tmp303 * _tmp367 -
      _tmp313 *
          (_tmp308 * _tmp368 - _tmp310 * _tmp367 -
           _tmp311 * (_tmp301 * (-_tmp299 * _tmp367 - _tmp313 * _tmp368) - _tmp312 * _tmp367));
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = Scalar(-1.0);
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
