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
 * Symbolic function: IK_residual_func_cost2_wrt_pc_Nl18
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPcNl18(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1053

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (331)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp10 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp12 = _tmp2 * _tmp4;
  const Scalar _tmp13 = _tmp0 * _tmp5;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = Scalar(1.0) * _tmp17;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = _tmp11 + _tmp15;
  const Scalar _tmp21 = _tmp20 + _tmp7;
  const Scalar _tmp22 = _tmp19 + _tmp21;
  const Scalar _tmp23 = _tmp16 + _tmp7;
  const Scalar _tmp24 = Scalar(1.0) / (_tmp19 + _tmp23);
  const Scalar _tmp25 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp27 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp28 = _tmp1 * _tmp5;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp32 = _tmp30 - _tmp31;
  const Scalar _tmp33 = _tmp26 + _tmp32;
  const Scalar _tmp34 = -_tmp26;
  const Scalar _tmp35 = _tmp32 + _tmp34;
  const Scalar _tmp36 = Scalar(1.0) * _tmp35;
  const Scalar _tmp37 = _tmp24 * (-_tmp33 + _tmp36);
  const Scalar _tmp38 = _tmp22 * _tmp37;
  const Scalar _tmp39 = _tmp30 + _tmp31;
  const Scalar _tmp40 = _tmp26 + _tmp39;
  const Scalar _tmp41 = Scalar(1.0) / (_tmp36 - _tmp38 - _tmp40);
  const Scalar _tmp42 = Scalar(1.0) * _tmp41;
  const Scalar _tmp43 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp44 = _tmp43 - p_c(1, 0);
  const Scalar _tmp45 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 - p_c(0, 0);
  const Scalar _tmp47 = std::pow(_tmp46, Scalar(2));
  const Scalar _tmp48 = std::pow(_tmp44, Scalar(2));
  const Scalar _tmp49 = _tmp47 + _tmp48;
  const Scalar _tmp50 = std::pow(_tmp49, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp44 * _tmp50;
  const Scalar _tmp52 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 - p_a(0, 0);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp55 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_a(1, 0);
  const Scalar _tmp57 = _tmp54 * _tmp56;
  const Scalar _tmp58 = _tmp50 * _tmp57;
  const Scalar _tmp59 = _tmp46 * _tmp58 - _tmp51;
  const Scalar _tmp60 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 - p_b(0, 0);
  const Scalar _tmp62 = _tmp23 + position_vector(1, 0);
  const Scalar _tmp63 = _tmp62 - p_b(1, 0);
  const Scalar _tmp64 = std::pow(Scalar(std::pow(_tmp61, Scalar(2)) + std::pow(_tmp63, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = _tmp61 * _tmp64;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp57 * _tmp66 - _tmp65);
  const Scalar _tmp68 = Scalar(0.20999999999999999) * _tmp27 - Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp69 = -Scalar(0.010999999999999999) * _tmp25 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp70 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp71 = _tmp69 - _tmp70;
  const Scalar _tmp72 = _tmp68 + _tmp71;
  const Scalar _tmp73 = -_tmp68;
  const Scalar _tmp74 = _tmp71 + _tmp73;
  const Scalar _tmp75 = _tmp66 * _tmp74;
  const Scalar _tmp76 = -_tmp66 * _tmp72 + _tmp75;
  const Scalar _tmp77 = _tmp67 * _tmp76;
  const Scalar _tmp78 = _tmp50 * _tmp74;
  const Scalar _tmp79 = _tmp46 * _tmp78;
  const Scalar _tmp80 = _tmp69 + _tmp70;
  const Scalar _tmp81 = _tmp68 + _tmp80;
  const Scalar _tmp82 = _tmp50 * _tmp81;
  const Scalar _tmp83 = -_tmp57 * _tmp75 + _tmp65 * _tmp72;
  const Scalar _tmp84 = _tmp67 * _tmp83;
  const Scalar _tmp85 = _tmp51 * _tmp81 - _tmp57 * _tmp79 - _tmp59 * _tmp84;
  const Scalar _tmp86 = -_tmp37 * _tmp85 - _tmp46 * _tmp82 - _tmp59 * _tmp77 + _tmp79;
  const Scalar _tmp87 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))));
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 = _tmp54 * _tmp87;
  const Scalar _tmp90 = _tmp89 * (-_tmp17 * _tmp53 * _tmp88 + _tmp35 * _tmp56 * _tmp88);
  const Scalar _tmp91 = _tmp23 * _tmp66 - _tmp33 * _tmp65 + _tmp66 * _tmp90;
  const Scalar _tmp92 = _tmp67 * _tmp91;
  const Scalar _tmp93 = _tmp21 * _tmp50;
  const Scalar _tmp94 = _tmp50 * _tmp90;
  const Scalar _tmp95 = -_tmp40 * _tmp51 + _tmp46 * _tmp93 + _tmp46 * _tmp94 - _tmp59 * _tmp92;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp98 = _tmp57 * _tmp74;
  const Scalar _tmp99 = _tmp57 * _tmp84 + _tmp98;
  const Scalar _tmp100 = -_tmp37 * _tmp99 + _tmp57 * _tmp77 - _tmp74;
  const Scalar _tmp101 = _tmp100 * _tmp97;
  const Scalar _tmp102 = -_tmp101 * _tmp95 + _tmp57 * _tmp92 - _tmp90;
  const Scalar _tmp103 = _tmp102 * _tmp96;
  const Scalar _tmp104 = _tmp103 * _tmp86;
  const Scalar _tmp105 = _tmp100 + _tmp104;
  const Scalar _tmp106 = _tmp85 * _tmp97;
  const Scalar _tmp107 = _tmp22 * _tmp41;
  const Scalar _tmp108 = _tmp104 * _tmp107 - _tmp105 * _tmp106 + _tmp99;
  const Scalar _tmp109 = Scalar(1.0) * _tmp24;
  const Scalar _tmp110 = _tmp34 + _tmp39;
  const Scalar _tmp111 = _tmp110 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp112 = _tmp20 + _tmp8;
  const Scalar _tmp113 = _tmp112 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp114 =
      std::pow(Scalar(std::pow(_tmp111, Scalar(2)) + std::pow(_tmp113, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp115 = _tmp111 * _tmp114;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = Scalar(1.0) * _tmp116;
  const Scalar _tmp118 = _tmp22 * _tmp24;
  const Scalar _tmp119 = fh1 * (_tmp73 + _tmp80);
  const Scalar _tmp120 = _tmp110 * fv1 + _tmp115 * _tmp119 + Scalar(40.024799999999999) * _tmp29;
  const Scalar _tmp121 = _tmp18 * _tmp37 + _tmp36;
  const Scalar _tmp122 = 0;
  const Scalar _tmp123 = _tmp121 * _tmp41;
  const Scalar _tmp124 = -_tmp106 * _tmp122 - _tmp123 * _tmp22 + _tmp19;
  const Scalar _tmp125 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp126 = _tmp86 * _tmp96;
  const Scalar _tmp127 = _tmp126 * _tmp42;
  const Scalar _tmp128 = Scalar(1.0) * _tmp96;
  const Scalar _tmp129 = _tmp127 * _tmp22 - _tmp128 * _tmp85;
  const Scalar _tmp130 = _tmp113 * _tmp114;
  const Scalar _tmp131 = fh1 * (_tmp110 * _tmp130 - _tmp112 * _tmp115);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = -_tmp112 * fv1 - _tmp119 * _tmp130 - Scalar(40.024799999999999) * _tmp14;
  const Scalar _tmp134 = _tmp38 * _tmp42 + Scalar(1.0);
  const Scalar _tmp135 = _tmp37 * _tmp42;
  const Scalar _tmp136 = Scalar(1.0) * _tmp67;
  const Scalar _tmp137 = _tmp136 * _tmp83;
  const Scalar _tmp138 = -_tmp136 * _tmp76 + _tmp137 * _tmp37;
  const Scalar _tmp139 = _tmp138 * _tmp97;
  const Scalar _tmp140 = -_tmp136 * _tmp91 - _tmp139 * _tmp95;
  const Scalar _tmp141 = _tmp140 * _tmp96;
  const Scalar _tmp142 = _tmp141 * _tmp86;
  const Scalar _tmp143 = _tmp138 + _tmp142;
  const Scalar _tmp144 = _tmp143 * _tmp97;
  const Scalar _tmp145 = _tmp107 * _tmp142 - _tmp137 - _tmp144 * _tmp85;
  const Scalar _tmp146 = _tmp130 * fh1;
  const Scalar _tmp147 = Scalar(1.0) * _tmp146;
  const Scalar _tmp148 =
      _tmp117 * (_tmp104 * _tmp42 - _tmp108 * _tmp109) +
      Scalar(1.0) * _tmp120 * (_tmp118 * _tmp42 - _tmp42) +
      Scalar(1.0) * _tmp125 * (-_tmp109 * _tmp124 - _tmp121 * _tmp42 + Scalar(1.0)) +
      _tmp132 * (-_tmp109 * _tmp129 + _tmp127) +
      Scalar(1.0) * _tmp133 * (-_tmp109 * _tmp134 + _tmp135) +
      _tmp147 * (-_tmp109 * _tmp145 + _tmp142 * _tmp42);
  const Scalar _tmp149 = _tmp50 * _tmp97;
  const Scalar _tmp150 = _tmp143 * _tmp149;
  const Scalar _tmp151 = -_tmp144 * _tmp59 + Scalar(1.0);
  const Scalar _tmp152 = _tmp66 * _tmp67;
  const Scalar _tmp153 = _tmp146 * _tmp89;
  const Scalar _tmp154 = _tmp136 * _tmp96;
  const Scalar _tmp155 = _tmp154 * _tmp66;
  const Scalar _tmp156 = _tmp128 * _tmp50;
  const Scalar _tmp157 = _tmp131 * _tmp89;
  const Scalar _tmp158 = _tmp105 * _tmp97;
  const Scalar _tmp159 = -_tmp158 * _tmp59 - _tmp57;
  const Scalar _tmp160 = _tmp105 * _tmp149;
  const Scalar _tmp161 = _tmp116 * _tmp89;
  const Scalar _tmp162 = _tmp122 * _tmp97;
  const Scalar _tmp163 = _tmp152 * _tmp162;
  const Scalar _tmp164 = _tmp122 * _tmp149;
  const Scalar _tmp165 = _tmp125 * _tmp89;
  const Scalar _tmp166 = -_tmp153 * (_tmp150 * _tmp46 + _tmp151 * _tmp152) -
                         _tmp157 * (-_tmp155 * _tmp59 + _tmp156 * _tmp46) -
                         _tmp161 * (_tmp152 * _tmp159 + _tmp160 * _tmp46 + Scalar(1.0)) -
                         _tmp165 * (-_tmp163 * _tmp59 + _tmp164 * _tmp46);
  const Scalar _tmp167 = Scalar(1.0) / (_tmp166);
  const Scalar _tmp168 = std::asinh(_tmp148 * _tmp167);
  const Scalar _tmp169 = Scalar(1.0) * _tmp168;
  const Scalar _tmp170 = Scalar(1.4083112389913199) * _tmp166;
  const Scalar _tmp171 =
      -_tmp168 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.71007031138673404) * _tmp167;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = -std::sinh(_tmp169) - std::sinh(_tmp173);
  const Scalar _tmp175 = std::pow(_tmp49, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp176 = _tmp175 * _tmp44 * _tmp46;
  const Scalar _tmp177 = _tmp175 * _tmp47;
  const Scalar _tmp178 = -_tmp176 + _tmp177 * _tmp57 - _tmp58;
  const Scalar _tmp179 = _tmp178 * _tmp67;
  const Scalar _tmp180 = _tmp177 * _tmp74;
  const Scalar _tmp181 = _tmp176 * _tmp81;
  const Scalar _tmp182 = -_tmp179 * _tmp83 - _tmp180 * _tmp57 + _tmp181 + _tmp57 * _tmp78;
  const Scalar _tmp183 =
      -_tmp177 * _tmp81 - _tmp179 * _tmp76 + _tmp180 - _tmp182 * _tmp37 - _tmp78 + _tmp82;
  const Scalar _tmp184 = std::pow(_tmp86, Scalar(-2));
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = _tmp46 * _tmp50;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = _tmp100 * _tmp95;
  const Scalar _tmp189 =
      -_tmp176 * _tmp40 + _tmp177 * _tmp21 + _tmp177 * _tmp90 - _tmp179 * _tmp91 - _tmp93 - _tmp94;
  const Scalar _tmp190 = _tmp126 * (-_tmp101 * _tmp189 + _tmp185 * _tmp188);
  const Scalar _tmp191 = _tmp103 * _tmp183;
  const Scalar _tmp192 = std::pow(_tmp95, Scalar(-2));
  const Scalar _tmp193 = _tmp189 * _tmp192;
  const Scalar _tmp194 = _tmp102 * _tmp86;
  const Scalar _tmp195 = _tmp193 * _tmp194;
  const Scalar _tmp196 = _tmp190 + _tmp191 - _tmp195;
  const Scalar _tmp197 = _tmp149 * _tmp46;
  const Scalar _tmp198 = _tmp185 * _tmp59;
  const Scalar _tmp199 = _tmp59 * _tmp97;
  const Scalar _tmp200 = _tmp105 * _tmp198 - _tmp158 * _tmp178 - _tmp196 * _tmp199;
  const Scalar _tmp201 = _tmp141 * _tmp183;
  const Scalar _tmp202 = _tmp138 * _tmp95;
  const Scalar _tmp203 = _tmp126 * (-_tmp139 * _tmp189 + _tmp185 * _tmp202);
  const Scalar _tmp204 = _tmp140 * _tmp86;
  const Scalar _tmp205 = _tmp193 * _tmp204;
  const Scalar _tmp206 = _tmp201 + _tmp203 - _tmp205;
  const Scalar _tmp207 = _tmp143 * _tmp198 - _tmp144 * _tmp178 - _tmp199 * _tmp206;
  const Scalar _tmp208 = Scalar(1.0) * _tmp186;
  const Scalar _tmp209 = _tmp136 * _tmp59;
  const Scalar _tmp210 = _tmp193 * _tmp209;
  const Scalar _tmp211 = -_tmp153 * (-_tmp143 * _tmp187 + _tmp144 * _tmp177 - _tmp150 +
                                     _tmp152 * _tmp207 + _tmp197 * _tmp206) -
                         _tmp157 * (_tmp128 * _tmp177 - _tmp155 * _tmp178 - _tmp156 -
                                    _tmp193 * _tmp208 + _tmp210 * _tmp66) -
                         _tmp161 * (-_tmp105 * _tmp187 + _tmp152 * _tmp200 + _tmp158 * _tmp177 -
                                    _tmp160 + _tmp196 * _tmp197) -
                         _tmp165 * (_tmp122 * _tmp152 * _tmp198 - _tmp122 * _tmp187 +
                                    _tmp162 * _tmp177 - _tmp162 * _tmp179 * _tmp66 - _tmp164);
  const Scalar _tmp212 = Scalar(1.4083112389913199) * _tmp211;
  const Scalar _tmp213 = _tmp42 * _tmp86;
  const Scalar _tmp214 = _tmp193 * _tmp213;
  const Scalar _tmp215 = _tmp42 * _tmp96;
  const Scalar _tmp216 = _tmp183 * _tmp215;
  const Scalar _tmp217 = Scalar(1.0) * _tmp85;
  const Scalar _tmp218 =
      -_tmp128 * _tmp182 + _tmp193 * _tmp217 - _tmp214 * _tmp22 + _tmp216 * _tmp22;
  const Scalar _tmp219 = _tmp185 * _tmp85;
  const Scalar _tmp220 = -_tmp106 * _tmp206 + _tmp107 * _tmp201 + _tmp107 * _tmp203 -
                         _tmp107 * _tmp205 + _tmp143 * _tmp219 - _tmp144 * _tmp182;
  const Scalar _tmp221 = _tmp182 * _tmp97;
  const Scalar _tmp222 = _tmp105 * _tmp219 - _tmp105 * _tmp221 - _tmp106 * _tmp196 +
                         _tmp107 * _tmp190 + _tmp107 * _tmp191 - _tmp107 * _tmp195;
  const Scalar _tmp223 = _tmp122 * _tmp219 - _tmp122 * _tmp221;
  const Scalar _tmp224 = _tmp109 * _tmp125;
  const Scalar _tmp225 = std::pow(_tmp166, Scalar(-2));
  const Scalar _tmp226 = _tmp148 * _tmp225;
  const Scalar _tmp227 =
      _tmp167 *
          (_tmp117 * (-_tmp109 * _tmp222 + _tmp190 * _tmp42 + _tmp191 * _tmp42 - _tmp195 * _tmp42) +
           _tmp132 * (-_tmp109 * _tmp218 - _tmp214 + _tmp216) +
           _tmp147 * (-_tmp109 * _tmp220 + _tmp201 * _tmp42 + _tmp203 * _tmp42 - _tmp205 * _tmp42) -
           _tmp223 * _tmp224) -
      _tmp211 * _tmp226;
  const Scalar _tmp228 =
      std::pow(Scalar(std::pow(_tmp148, Scalar(2)) * _tmp225 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp229 = _tmp170 * _tmp228;
  const Scalar _tmp230 = Scalar(0.71007031138673404) * _tmp171 * _tmp225;
  const Scalar _tmp231 = std::cosh(_tmp173);
  const Scalar _tmp232 = Scalar(1.0) * _tmp228 * std::cosh(_tmp169);
  const Scalar _tmp233 = _tmp116 * _tmp67;
  const Scalar _tmp234 = _tmp146 * _tmp67;
  const Scalar _tmp235 = _tmp131 * _tmp154;
  const Scalar _tmp236 = _tmp125 * _tmp162;
  const Scalar _tmp237 = _tmp236 * _tmp67;
  const Scalar _tmp238 =
      _tmp151 * _tmp234 + _tmp159 * _tmp233 - _tmp235 * _tmp59 - _tmp237 * _tmp59;
  const Scalar _tmp239 = Scalar(1.0) / (_tmp238);
  const Scalar _tmp240 = _tmp125 * _tmp24;
  const Scalar _tmp241 = _tmp116 * _tmp24;
  const Scalar _tmp242 = _tmp131 * _tmp24;
  const Scalar _tmp243 = _tmp146 * _tmp24;
  const Scalar _tmp244 = _tmp120 * _tmp42;
  const Scalar _tmp245 = _tmp108 * _tmp241 - _tmp118 * _tmp244 + _tmp124 * _tmp240 +
                         _tmp129 * _tmp242 + _tmp133 * _tmp134 * _tmp24 + _tmp145 * _tmp243;
  const Scalar _tmp246 = std::asinh(_tmp239 * _tmp245);
  const Scalar _tmp247 = Scalar(1.4083112389913199) * _tmp246;
  const Scalar _tmp248 =
      -_tmp238 * _tmp247 - std::sqrt(Scalar(std::pow(Scalar(-_tmp60 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp62 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp249 = Scalar(0.71007031138673404) * _tmp239;
  const Scalar _tmp250 = _tmp248 * _tmp249;
  const Scalar _tmp251 = std::cosh(_tmp250);
  const Scalar _tmp252 = _tmp122 * _tmp125;
  const Scalar _tmp253 = _tmp185 * _tmp252;
  const Scalar _tmp254 = _tmp59 * _tmp67;
  const Scalar _tmp255 = _tmp131 * _tmp210 - _tmp178 * _tmp235 - _tmp179 * _tmp236 +
                         _tmp200 * _tmp233 + _tmp207 * _tmp234 + _tmp253 * _tmp254;
  const Scalar _tmp256 = std::pow(_tmp238, Scalar(-2));
  const Scalar _tmp257 = Scalar(0.71007031138673404) * _tmp248 * _tmp256;
  const Scalar _tmp258 = _tmp245 * _tmp256;
  const Scalar _tmp259 =
      _tmp239 * (_tmp218 * _tmp242 + _tmp220 * _tmp243 + _tmp222 * _tmp241 + _tmp223 * _tmp240) -
      _tmp255 * _tmp258;
  const Scalar _tmp260 =
      std::pow(Scalar(std::pow(_tmp245, Scalar(2)) * _tmp256 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp261 = Scalar(1.4083112389913199) * _tmp238;
  const Scalar _tmp262 = _tmp260 * _tmp261;
  const Scalar _tmp263 = Scalar(1.0) * _tmp246;
  const Scalar _tmp264 = Scalar(1.0) * _tmp260 * std::cosh(_tmp263);
  const Scalar _tmp265 = -Scalar(1.4083112389913199) * std::sinh(_tmp250) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp263);
  const Scalar _tmp266 = _tmp116 * _tmp97;
  const Scalar _tmp267 = _tmp146 * _tmp97;
  const Scalar _tmp268 = -_tmp105 * _tmp116 * _tmp185 - _tmp132 * _tmp193 -
                         _tmp143 * _tmp146 * _tmp185 + _tmp196 * _tmp266 + _tmp206 * _tmp267 -
                         _tmp253;
  const Scalar _tmp269 = _tmp116 * _tmp41;
  const Scalar _tmp270 = _tmp146 * _tmp41;
  const Scalar _tmp271 = -_tmp104 * _tmp269 + _tmp123 * _tmp125 - _tmp127 * _tmp131 -
                         _tmp133 * _tmp135 - _tmp142 * _tmp270 + _tmp244;
  const Scalar _tmp272 = _tmp116 * _tmp158 + _tmp128 * _tmp131 + _tmp144 * _tmp146 + _tmp236;
  const Scalar _tmp273 = Scalar(1.0) / (_tmp272);
  const Scalar _tmp274 = std::asinh(_tmp271 * _tmp273);
  const Scalar _tmp275 = Scalar(1.0) * _tmp274;
  const Scalar _tmp276 = Scalar(1.4083112389913199) * _tmp272;
  const Scalar _tmp277 = -_tmp43 + p_c(1, 0);
  const Scalar _tmp278 = -_tmp45 + p_c(0, 0);
  const Scalar _tmp279 = std::pow(_tmp277, Scalar(2)) + std::pow(_tmp278, Scalar(2));
  const Scalar _tmp280 = std::sqrt(_tmp279);
  const Scalar _tmp281 = -_tmp274 * _tmp276 - _tmp280;
  const Scalar _tmp282 = Scalar(0.71007031138673404) * _tmp273;
  const Scalar _tmp283 = _tmp281 * _tmp282;
  const Scalar _tmp284 = -Scalar(1.4083112389913199) * std::sinh(_tmp275) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp283);
  const Scalar _tmp285 = std::pow(_tmp272, Scalar(-2));
  const Scalar _tmp286 = _tmp271 * _tmp285;
  const Scalar _tmp287 =
      std::pow(Scalar(std::pow(_tmp271, Scalar(2)) * _tmp285 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp288 =
      _tmp287 *
      (-_tmp268 * _tmp286 +
       _tmp273 * (_tmp131 * _tmp214 - _tmp131 * _tmp216 - _tmp190 * _tmp269 - _tmp191 * _tmp269 +
                  _tmp195 * _tmp269 - _tmp201 * _tmp270 - _tmp203 * _tmp270 + _tmp205 * _tmp270));
  const Scalar _tmp289 = Scalar(1.0) * std::cosh(_tmp275);
  const Scalar _tmp290 = Scalar(1.4083112389913199) * _tmp274;
  const Scalar _tmp291 = Scalar(1.0) / (_tmp280);
  const Scalar _tmp292 = Scalar(0.71007031138673404) * _tmp281 * _tmp285;
  const Scalar _tmp293 = std::cosh(_tmp283);
  const Scalar _tmp294 = -_tmp81 + p_c(2, 0) - position_vector(2, 0);
  const Scalar _tmp295 =
      std::pow(Scalar(_tmp279 + std::pow(_tmp294, Scalar(2))), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp296 = _tmp175 * _tmp48;
  const Scalar _tmp297 = _tmp176 * _tmp57 - _tmp296 + _tmp50;
  const Scalar _tmp298 = -_tmp176 * _tmp98 + _tmp296 * _tmp81 - _tmp297 * _tmp84 - _tmp82;
  const Scalar _tmp299 = _tmp176 * _tmp74 - _tmp181 - _tmp297 * _tmp77 - _tmp298 * _tmp37;
  const Scalar _tmp300 = _tmp184 * _tmp299;
  const Scalar _tmp301 = _tmp122 * _tmp300;
  const Scalar _tmp302 =
      _tmp176 * _tmp21 + _tmp176 * _tmp90 - _tmp296 * _tmp40 - _tmp297 * _tmp92 + _tmp40 * _tmp50;
  const Scalar _tmp303 = _tmp192 * _tmp302;
  const Scalar _tmp304 = _tmp209 * _tmp303;
  const Scalar _tmp305 = _tmp105 * _tmp300;
  const Scalar _tmp306 = _tmp194 * _tmp303;
  const Scalar _tmp307 = _tmp103 * _tmp299;
  const Scalar _tmp308 = _tmp126 * (-_tmp101 * _tmp302 + _tmp188 * _tmp300);
  const Scalar _tmp309 = -_tmp306 + _tmp307 + _tmp308;
  const Scalar _tmp310 = -_tmp158 * _tmp297 - _tmp199 * _tmp309 + _tmp305 * _tmp59;
  const Scalar _tmp311 = _tmp143 * _tmp300;
  const Scalar _tmp312 = _tmp126 * (-_tmp139 * _tmp302 + _tmp202 * _tmp300);
  const Scalar _tmp313 = _tmp204 * _tmp303;
  const Scalar _tmp314 = _tmp141 * _tmp299;
  const Scalar _tmp315 = _tmp312 - _tmp313 + _tmp314;
  const Scalar _tmp316 = -_tmp144 * _tmp297 - _tmp199 * _tmp315 + _tmp311 * _tmp59;
  const Scalar _tmp317 =
      -_tmp153 * (_tmp144 * _tmp176 + _tmp152 * _tmp316 - _tmp186 * _tmp311 + _tmp197 * _tmp315) -
      _tmp157 * (_tmp128 * _tmp176 - _tmp155 * _tmp297 - _tmp208 * _tmp303 + _tmp304 * _tmp66) -
      _tmp161 * (_tmp152 * _tmp310 + _tmp158 * _tmp176 - _tmp186 * _tmp305 + _tmp197 * _tmp309) -
      _tmp165 *
          (_tmp152 * _tmp301 * _tmp59 + _tmp162 * _tmp176 - _tmp163 * _tmp297 - _tmp186 * _tmp301);
  const Scalar _tmp318 = Scalar(1.4083112389913199) * _tmp317;
  const Scalar _tmp319 = -_tmp106 * _tmp309 - _tmp107 * _tmp306 + _tmp107 * _tmp307 +
                         _tmp107 * _tmp308 - _tmp158 * _tmp298 + _tmp305 * _tmp85;
  const Scalar _tmp320 = -_tmp162 * _tmp298 + _tmp301 * _tmp85;
  const Scalar _tmp321 = -_tmp106 * _tmp315 + _tmp107 * _tmp312 - _tmp107 * _tmp313 +
                         _tmp107 * _tmp314 - _tmp144 * _tmp298 + _tmp311 * _tmp85;
  const Scalar _tmp322 = _tmp213 * _tmp303;
  const Scalar _tmp323 = _tmp215 * _tmp299;
  const Scalar _tmp324 =
      -_tmp128 * _tmp298 + _tmp217 * _tmp303 - _tmp22 * _tmp322 + _tmp22 * _tmp323;
  const Scalar _tmp325 =
      _tmp167 *
          (_tmp117 * (-_tmp109 * _tmp319 - _tmp306 * _tmp42 + _tmp307 * _tmp42 + _tmp308 * _tmp42) +
           _tmp132 * (-_tmp109 * _tmp324 - _tmp322 + _tmp323) +
           _tmp147 * (-_tmp109 * _tmp321 + _tmp312 * _tmp42 - _tmp313 * _tmp42 + _tmp314 * _tmp42) -
           _tmp224 * _tmp320) -
      _tmp226 * _tmp317;
  const Scalar _tmp326 = _tmp252 * _tmp300;
  const Scalar _tmp327 = _tmp131 * _tmp304 + _tmp233 * _tmp310 + _tmp234 * _tmp316 -
                         _tmp235 * _tmp297 - _tmp237 * _tmp297 + _tmp254 * _tmp326;
  const Scalar _tmp328 =
      _tmp239 * (_tmp240 * _tmp320 + _tmp241 * _tmp319 + _tmp242 * _tmp324 + _tmp243 * _tmp321) -
      _tmp258 * _tmp327;
  const Scalar _tmp329 = -_tmp116 * _tmp305 - _tmp132 * _tmp303 - _tmp146 * _tmp311 +
                         _tmp266 * _tmp309 + _tmp267 * _tmp315 - _tmp326;
  const Scalar _tmp330 =
      _tmp287 *
      (_tmp273 * (_tmp131 * _tmp322 - _tmp131 * _tmp323 + _tmp269 * _tmp306 - _tmp269 * _tmp307 -
                  _tmp269 * _tmp308 - _tmp270 * _tmp312 + _tmp270 * _tmp313 - _tmp270 * _tmp314) -
       _tmp286 * _tmp329);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp170 *
          (-_tmp227 * _tmp232 -
           _tmp231 * (_tmp172 * (-_tmp168 * _tmp212 - _tmp227 * _tmp229) - _tmp211 * _tmp230)) +
      _tmp174 * _tmp212;
  _res(2, 0) =
      _tmp255 * _tmp265 +
      _tmp261 *
          (-_tmp251 * (_tmp249 * (-_tmp247 * _tmp255 - _tmp259 * _tmp262) - _tmp255 * _tmp257) -
           _tmp259 * _tmp264);
  _res(3, 0) =
      _tmp268 * _tmp284 +
      _tmp276 * (-_tmp288 * _tmp289 -
                 _tmp293 * (-_tmp268 * _tmp292 + _tmp282 * (-_tmp268 * _tmp290 - _tmp276 * _tmp288 -
                                                            _tmp278 * _tmp291))) -
      _tmp278 * _tmp295;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp170 *
          (-_tmp231 * (_tmp172 * (-_tmp168 * _tmp318 - _tmp229 * _tmp325) - _tmp230 * _tmp317) -
           _tmp232 * _tmp325) +
      _tmp174 * _tmp318;
  _res(2, 1) =
      _tmp261 *
          (-_tmp251 * (_tmp249 * (-_tmp247 * _tmp327 - _tmp262 * _tmp328) - _tmp257 * _tmp327) -
           _tmp264 * _tmp328) +
      _tmp265 * _tmp327;
  _res(3, 1) =
      _tmp276 * (-_tmp289 * _tmp330 -
                 _tmp293 * (_tmp282 * (-_tmp276 * _tmp330 - _tmp277 * _tmp291 - _tmp290 * _tmp329) -
                            _tmp292 * _tmp329)) -
      _tmp277 * _tmp295 + _tmp284 * _tmp329;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = -_tmp294 * _tmp295;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
