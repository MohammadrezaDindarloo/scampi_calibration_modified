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
 * Symbolic function: IK_residual_func_cost2_wrt_pc_Nl4
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPcNl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1051

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (322)
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
  const Scalar _tmp19 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp23 = _tmp5 * _tmp8;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = _tmp28 - p_c(1, 0);
  const Scalar _tmp30 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp31 = std::pow(_tmp29, Scalar(2));
  const Scalar _tmp32 = _tmp30 + _tmp31;
  const Scalar _tmp33 = std::pow(_tmp32, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp34 = _tmp18 * _tmp29 * _tmp33;
  const Scalar _tmp35 = -_tmp4;
  const Scalar _tmp36 = _tmp15 + _tmp35;
  const Scalar _tmp37 = _tmp36 + position_vector(0, 0);
  const Scalar _tmp38 = _tmp37 - p_d(0, 0);
  const Scalar _tmp39 = Scalar(1.0) / (_tmp38);
  const Scalar _tmp40 = -_tmp21 + _tmp25;
  const Scalar _tmp41 = _tmp20 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 - p_d(1, 0);
  const Scalar _tmp44 = _tmp39 * _tmp43;
  const Scalar _tmp45 = _tmp30 * _tmp33;
  const Scalar _tmp46 = std::pow(_tmp32, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp44 * _tmp46;
  const Scalar _tmp48 = -_tmp34 + _tmp44 * _tmp45 - _tmp47;
  const Scalar _tmp49 = _tmp29 * _tmp46;
  const Scalar _tmp50 = _tmp18 * _tmp47 - _tmp49;
  const Scalar _tmp51 = _tmp11 - _tmp14;
  const Scalar _tmp52 = _tmp4 + _tmp51;
  const Scalar _tmp53 = _tmp52 + position_vector(0, 0);
  const Scalar _tmp54 = _tmp53 - p_b(0, 0);
  const Scalar _tmp55 = -_tmp20;
  const Scalar _tmp56 = _tmp26 + _tmp55;
  const Scalar _tmp57 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 - p_b(1, 0);
  const Scalar _tmp59 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp58, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp54 * _tmp59;
  const Scalar _tmp61 = _tmp58 * _tmp59;
  const Scalar _tmp62 = Scalar(1.0) / (_tmp44 * _tmp60 - _tmp61);
  const Scalar _tmp63 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp64 = -_tmp63;
  const Scalar _tmp65 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp19 + Scalar(-0.010999999999999999);
  const Scalar _tmp66 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp67 = _tmp65 + _tmp66;
  const Scalar _tmp68 = _tmp64 + _tmp67;
  const Scalar _tmp69 = _tmp65 - _tmp66;
  const Scalar _tmp70 = _tmp63 + _tmp69;
  const Scalar _tmp71 = _tmp44 * _tmp70;
  const Scalar _tmp72 = _tmp62 * (-_tmp60 * _tmp71 + _tmp61 * _tmp68);
  const Scalar _tmp73 = _tmp46 * _tmp70;
  const Scalar _tmp74 = _tmp18 * _tmp73;
  const Scalar _tmp75 = _tmp63 + _tmp67;
  const Scalar _tmp76 = -_tmp44 * _tmp74 + _tmp49 * _tmp75 - _tmp50 * _tmp72;
  const Scalar _tmp77 = Scalar(1.0) * _tmp41;
  const Scalar _tmp78 = -_tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp56 + _tmp78);
  const Scalar _tmp80 = Scalar(1.0) * _tmp36;
  const Scalar _tmp81 = -_tmp52 + _tmp80;
  const Scalar _tmp82 = _tmp79 * _tmp81;
  const Scalar _tmp83 = _tmp46 * _tmp75;
  const Scalar _tmp84 = _tmp62 * (-_tmp60 * _tmp68 + _tmp60 * _tmp70);
  const Scalar _tmp85 = -_tmp18 * _tmp83 - _tmp50 * _tmp84 + _tmp74 - _tmp76 * _tmp82;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = _tmp77 * _tmp82 + _tmp80;
  const Scalar _tmp88 = 0;
  const Scalar _tmp89 = _tmp86 * _tmp88;
  const Scalar _tmp90 = _tmp60 * _tmp62;
  const Scalar _tmp91 = _tmp89 * _tmp90;
  const Scalar _tmp92 = _tmp18 * _tmp46;
  const Scalar _tmp93 = _tmp34 * _tmp75;
  const Scalar _tmp94 = _tmp45 * _tmp70;
  const Scalar _tmp95 = _tmp44 * _tmp73 - _tmp44 * _tmp94 - _tmp48 * _tmp72 + _tmp93;
  const Scalar _tmp96 =
      -_tmp45 * _tmp75 - _tmp48 * _tmp84 - _tmp73 - _tmp82 * _tmp95 + _tmp83 + _tmp94;
  const Scalar _tmp97 = std::pow(_tmp85, Scalar(-2));
  const Scalar _tmp98 = _tmp88 * _tmp97;
  const Scalar _tmp99 = _tmp96 * _tmp98;
  const Scalar _tmp100 = _tmp50 * _tmp96;
  const Scalar _tmp101 = _tmp100 * _tmp98;
  const Scalar _tmp102 = _tmp46 * _tmp89;
  const Scalar _tmp103 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp104 =
      std::sqrt(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp43, Scalar(2))));
  const Scalar _tmp105 = _tmp104 * _tmp39;
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp108 = _tmp105 * (_tmp107 * _tmp36 * _tmp43 - _tmp107 * _tmp38 * _tmp41);
  const Scalar _tmp109 = _tmp27 * _tmp46;
  const Scalar _tmp110 = _tmp62 * (_tmp108 * _tmp60 - _tmp52 * _tmp61 + _tmp56 * _tmp60);
  const Scalar _tmp111 = _tmp108 * _tmp92 + _tmp109 * _tmp18 - _tmp110 * _tmp50 - _tmp16 * _tmp49;
  const Scalar _tmp112 = Scalar(1.0) * _tmp79;
  const Scalar _tmp113 = _tmp112 * _tmp72 * _tmp81 - Scalar(1.0) * _tmp84;
  const Scalar _tmp114 = _tmp113 * _tmp86;
  const Scalar _tmp115 = -Scalar(1.0) * _tmp110 - _tmp111 * _tmp114;
  const Scalar _tmp116 = Scalar(1.0) / (_tmp111);
  const Scalar _tmp117 = _tmp116 * _tmp96;
  const Scalar _tmp118 = _tmp115 * _tmp117;
  const Scalar _tmp119 = _tmp108 * _tmp45 - _tmp108 * _tmp46 - _tmp109 - _tmp110 * _tmp48 -
                         _tmp16 * _tmp34 + _tmp27 * _tmp45;
  const Scalar _tmp120 = std::pow(_tmp111, Scalar(-2));
  const Scalar _tmp121 = _tmp119 * _tmp120;
  const Scalar _tmp122 = _tmp121 * _tmp85;
  const Scalar _tmp123 = _tmp115 * _tmp122;
  const Scalar _tmp124 = _tmp96 * _tmp97;
  const Scalar _tmp125 = _tmp111 * _tmp113;
  const Scalar _tmp126 = _tmp116 * _tmp85;
  const Scalar _tmp127 = _tmp126 * (-_tmp114 * _tmp119 + _tmp124 * _tmp125);
  const Scalar _tmp128 = _tmp118 - _tmp123 + _tmp127;
  const Scalar _tmp129 = _tmp86 * _tmp92;
  const Scalar _tmp130 = _tmp115 * _tmp126;
  const Scalar _tmp131 = _tmp113 + _tmp130;
  const Scalar _tmp132 = _tmp131 * _tmp97;
  const Scalar _tmp133 = _tmp92 * _tmp96;
  const Scalar _tmp134 = _tmp50 * _tmp86;
  const Scalar _tmp135 = _tmp131 * _tmp86;
  const Scalar _tmp136 = _tmp100 * _tmp132 - _tmp128 * _tmp134 - _tmp135 * _tmp48;
  const Scalar _tmp137 = _tmp135 * _tmp46;
  const Scalar _tmp138 = _tmp35 + _tmp51;
  const Scalar _tmp139 = _tmp138 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp140 = _tmp40 + _tmp55;
  const Scalar _tmp141 = _tmp140 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp142 =
      std::pow(Scalar(std::pow(_tmp139, Scalar(2)) + std::pow(_tmp141, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp143 = _tmp141 * _tmp142;
  const Scalar _tmp144 = _tmp143 * fh1;
  const Scalar _tmp145 = _tmp105 * _tmp144;
  const Scalar _tmp146 = Scalar(1.0) * _tmp116;
  const Scalar _tmp147 = _tmp146 * _tmp46;
  const Scalar _tmp148 = _tmp146 * _tmp90;
  const Scalar _tmp149 = Scalar(1.0) * _tmp92;
  const Scalar _tmp150 = _tmp50 * _tmp90;
  const Scalar _tmp151 = Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = _tmp139 * _tmp142;
  const Scalar _tmp153 = fh1 * (_tmp138 * _tmp143 - _tmp140 * _tmp152);
  const Scalar _tmp154 = _tmp105 * _tmp153;
  const Scalar _tmp155 = _tmp44 * _tmp72 + _tmp71;
  const Scalar _tmp156 = -_tmp155 * _tmp82 + _tmp44 * _tmp84 - _tmp70;
  const Scalar _tmp157 = _tmp156 * _tmp86;
  const Scalar _tmp158 = -_tmp108 + _tmp110 * _tmp44 - _tmp111 * _tmp157;
  const Scalar _tmp159 = _tmp126 * _tmp158;
  const Scalar _tmp160 = _tmp156 + _tmp159;
  const Scalar _tmp161 = _tmp160 * _tmp86;
  const Scalar _tmp162 = _tmp160 * _tmp97;
  const Scalar _tmp163 = _tmp111 * _tmp156;
  const Scalar _tmp164 = _tmp126 * (-_tmp119 * _tmp157 + _tmp124 * _tmp163);
  const Scalar _tmp165 = _tmp122 * _tmp158;
  const Scalar _tmp166 = _tmp117 * _tmp158;
  const Scalar _tmp167 = _tmp164 - _tmp165 + _tmp166;
  const Scalar _tmp168 = _tmp100 * _tmp162 - _tmp134 * _tmp167 - _tmp161 * _tmp48;
  const Scalar _tmp169 = _tmp161 * _tmp46;
  const Scalar _tmp170 = _tmp152 * fh1;
  const Scalar _tmp171 = _tmp105 * _tmp170;
  const Scalar _tmp172 =
      -_tmp106 *
          (_tmp101 * _tmp90 - _tmp102 + _tmp45 * _tmp89 - _tmp48 * _tmp91 - _tmp92 * _tmp99) -
      _tmp145 *
          (_tmp128 * _tmp129 - _tmp132 * _tmp133 + _tmp135 * _tmp45 + _tmp136 * _tmp90 - _tmp137) -
      _tmp154 *
          (-_tmp121 * _tmp149 + _tmp121 * _tmp151 + _tmp146 * _tmp45 - _tmp147 - _tmp148 * _tmp48) -
      _tmp171 *
          (_tmp129 * _tmp167 - _tmp133 * _tmp162 + _tmp161 * _tmp45 + _tmp168 * _tmp90 - _tmp169);
  const Scalar _tmp173 = -_tmp135 * _tmp50 + Scalar(1.0);
  const Scalar _tmp174 = -_tmp161 * _tmp50 - _tmp44;
  const Scalar _tmp175 = -_tmp106 * (_tmp102 * _tmp18 - _tmp50 * _tmp91) -
                         _tmp145 * (_tmp137 * _tmp18 + _tmp173 * _tmp90) -
                         _tmp154 * (_tmp147 * _tmp18 - _tmp148 * _tmp50) -
                         _tmp171 * (_tmp169 * _tmp18 + _tmp174 * _tmp90 + Scalar(1.0));
  const Scalar _tmp176 = std::pow(_tmp175, Scalar(-2));
  const Scalar _tmp177 = fh1 * (_tmp64 + _tmp69);
  const Scalar _tmp178 = -_tmp140 * fv1 - _tmp143 * _tmp177 - Scalar(40.024799999999999) * _tmp24;
  const Scalar _tmp179 = _tmp27 + _tmp78;
  const Scalar _tmp180 = _tmp179 * _tmp82;
  const Scalar _tmp181 = Scalar(1.0) / (-_tmp16 - _tmp180 + _tmp80);
  const Scalar _tmp182 = Scalar(1.0) * _tmp181;
  const Scalar _tmp183 = _tmp180 * _tmp182 + Scalar(1.0);
  const Scalar _tmp184 = _tmp76 * _tmp86;
  const Scalar _tmp185 = _tmp179 * _tmp181;
  const Scalar _tmp186 = _tmp130 * _tmp185 - _tmp131 * _tmp184 - Scalar(1.0) * _tmp72;
  const Scalar _tmp187 = Scalar(1.0) * _tmp144;
  const Scalar _tmp188 = Scalar(40.024799999999999) * _tmp10 + _tmp138 * fv1 + _tmp152 * _tmp177;
  const Scalar _tmp189 = _tmp179 * _tmp79;
  const Scalar _tmp190 = _tmp155 + _tmp159 * _tmp185 - _tmp160 * _tmp184;
  const Scalar _tmp191 = Scalar(1.0) * _tmp170;
  const Scalar _tmp192 = _tmp126 * _tmp182;
  const Scalar _tmp193 = -_tmp146 * _tmp76 + _tmp179 * _tmp192;
  const Scalar _tmp194 = Scalar(1.0) * _tmp153;
  const Scalar _tmp195 = _tmp181 * _tmp87;
  const Scalar _tmp196 = -_tmp179 * _tmp195 - _tmp184 * _tmp88 + _tmp78;
  const Scalar _tmp197 =
      Scalar(1.0) * _tmp103 * (-_tmp112 * _tmp196 - _tmp182 * _tmp87 + Scalar(1.0)) +
      Scalar(1.0) * _tmp178 * (-_tmp112 * _tmp183 + _tmp182 * _tmp82) +
      _tmp187 * (-_tmp112 * _tmp186 + _tmp130 * _tmp182) +
      Scalar(1.0) * _tmp188 * (_tmp182 * _tmp189 - _tmp182) +
      _tmp191 * (-_tmp112 * _tmp190 + _tmp159 * _tmp182) + _tmp194 * (-_tmp112 * _tmp193 + _tmp192);
  const Scalar _tmp198 = Scalar(1.0) / (_tmp175);
  const Scalar _tmp199 = std::asinh(_tmp197 * _tmp198);
  const Scalar _tmp200 = Scalar(1.4083112389913199) * _tmp199;
  const Scalar _tmp201 =
      -_tmp175 * _tmp200 - std::sqrt(Scalar(std::pow(Scalar(-_tmp37 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp42 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp202 = Scalar(0.71007031138673404) * _tmp176 * _tmp201;
  const Scalar _tmp203 = Scalar(1.4083112389913199) * _tmp175;
  const Scalar _tmp204 =
      std::pow(Scalar(_tmp176 * std::pow(_tmp197, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp205 = _tmp76 * _tmp96;
  const Scalar _tmp206 = _tmp118 * _tmp185 - _tmp123 * _tmp185 + _tmp127 * _tmp185 -
                         _tmp128 * _tmp184 + _tmp132 * _tmp205 - _tmp135 * _tmp95;
  const Scalar _tmp207 = -_tmp161 * _tmp95 + _tmp162 * _tmp205 + _tmp164 * _tmp185 -
                         _tmp165 * _tmp185 + _tmp166 * _tmp185 - _tmp167 * _tmp184;
  const Scalar _tmp208 = _tmp205 * _tmp98 - _tmp89 * _tmp95;
  const Scalar _tmp209 = _tmp103 * _tmp112;
  const Scalar _tmp210 = Scalar(1.0) * _tmp76;
  const Scalar _tmp211 = _tmp122 * _tmp182;
  const Scalar _tmp212 = _tmp117 * _tmp182;
  const Scalar _tmp213 =
      _tmp121 * _tmp210 - _tmp146 * _tmp95 - _tmp179 * _tmp211 + _tmp179 * _tmp212;
  const Scalar _tmp214 = _tmp176 * _tmp197;
  const Scalar _tmp215 = _tmp204 * (-_tmp172 * _tmp214 +
                                    _tmp198 * (_tmp187 * (-_tmp112 * _tmp206 + _tmp118 * _tmp182 -
                                                          _tmp123 * _tmp182 + _tmp127 * _tmp182) +
                                               _tmp191 * (-_tmp112 * _tmp207 + _tmp164 * _tmp182 -
                                                          _tmp165 * _tmp182 + _tmp166 * _tmp182) +
                                               _tmp194 * (-_tmp112 * _tmp213 - _tmp211 + _tmp212) -
                                               _tmp208 * _tmp209));
  const Scalar _tmp216 = Scalar(0.71007031138673404) * _tmp198;
  const Scalar _tmp217 = _tmp201 * _tmp216;
  const Scalar _tmp218 = std::cosh(_tmp217);
  const Scalar _tmp219 = Scalar(1.0) * _tmp199;
  const Scalar _tmp220 = Scalar(1.0) * std::cosh(_tmp219);
  const Scalar _tmp221 = -Scalar(1.4083112389913199) * std::sinh(_tmp217) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp219);
  const Scalar _tmp222 = _tmp144 * _tmp62;
  const Scalar _tmp223 = _tmp121 * _tmp194;
  const Scalar _tmp224 = _tmp50 * _tmp62;
  const Scalar _tmp225 = _tmp103 * _tmp89;
  const Scalar _tmp226 = _tmp225 * _tmp62;
  const Scalar _tmp227 = _tmp170 * _tmp62;
  const Scalar _tmp228 = _tmp146 * _tmp153;
  const Scalar _tmp229 = _tmp228 * _tmp62;
  const Scalar _tmp230 = _tmp101 * _tmp103 * _tmp62 + _tmp136 * _tmp222 + _tmp168 * _tmp227 +
                         _tmp223 * _tmp224 - _tmp226 * _tmp48 - _tmp229 * _tmp48;
  const Scalar _tmp231 =
      _tmp173 * _tmp222 + _tmp174 * _tmp227 - _tmp226 * _tmp50 - _tmp229 * _tmp50;
  const Scalar _tmp232 = Scalar(1.0) / (_tmp231);
  const Scalar _tmp233 = _tmp103 * _tmp79;
  const Scalar _tmp234 = _tmp144 * _tmp79;
  const Scalar _tmp235 = _tmp178 * _tmp79;
  const Scalar _tmp236 = _tmp170 * _tmp79;
  const Scalar _tmp237 = _tmp153 * _tmp79;
  const Scalar _tmp238 = _tmp182 * _tmp188;
  const Scalar _tmp239 = _tmp183 * _tmp235 + _tmp186 * _tmp234 - _tmp189 * _tmp238 +
                         _tmp190 * _tmp236 + _tmp193 * _tmp237 + _tmp196 * _tmp233;
  const Scalar _tmp240 = std::asinh(_tmp232 * _tmp239);
  const Scalar _tmp241 = Scalar(1.4083112389913199) * _tmp240;
  const Scalar _tmp242 =
      -_tmp231 * _tmp241 - std::sqrt(Scalar(std::pow(Scalar(-_tmp53 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp57 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp243 = Scalar(0.71007031138673404) * _tmp232;
  const Scalar _tmp244 = _tmp242 * _tmp243;
  const Scalar _tmp245 = Scalar(1.0) * _tmp240;
  const Scalar _tmp246 = -Scalar(1.4083112389913199) * std::sinh(_tmp244) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp245);
  const Scalar _tmp247 = std::cosh(_tmp244);
  const Scalar _tmp248 = std::pow(_tmp231, Scalar(-2));
  const Scalar _tmp249 = _tmp239 * _tmp248;
  const Scalar _tmp250 = -_tmp230 * _tmp249 + _tmp232 * (_tmp206 * _tmp234 + _tmp207 * _tmp236 +
                                                         _tmp208 * _tmp233 + _tmp213 * _tmp237);
  const Scalar _tmp251 =
      std::pow(Scalar(std::pow(_tmp239, Scalar(2)) * _tmp248 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp252 = Scalar(1.4083112389913199) * _tmp231;
  const Scalar _tmp253 = _tmp251 * _tmp252;
  const Scalar _tmp254 = Scalar(0.71007031138673404) * _tmp242 * _tmp248;
  const Scalar _tmp255 = Scalar(1.0) * _tmp251 * std::cosh(_tmp245);
  const Scalar _tmp256 = _tmp170 * _tmp86;
  const Scalar _tmp257 = -_tmp103 * _tmp99 + _tmp128 * _tmp144 * _tmp86 -
                         _tmp132 * _tmp144 * _tmp96 - _tmp162 * _tmp170 * _tmp96 +
                         _tmp167 * _tmp256 - _tmp223;
  const Scalar _tmp258 = _tmp135 * _tmp144 + _tmp161 * _tmp170 + _tmp225 + _tmp228;
  const Scalar _tmp259 = std::pow(_tmp258, Scalar(-2));
  const Scalar _tmp260 = _tmp144 * _tmp181;
  const Scalar _tmp261 = _tmp170 * _tmp181;
  const Scalar _tmp262 = _tmp103 * _tmp195 - _tmp130 * _tmp260 - _tmp153 * _tmp192 -
                         _tmp159 * _tmp261 - _tmp182 * _tmp235 * _tmp81 + _tmp238;
  const Scalar _tmp263 = _tmp259 * _tmp262;
  const Scalar _tmp264 = Scalar(1.0) / (_tmp258);
  const Scalar _tmp265 =
      std::pow(Scalar(_tmp259 * std::pow(_tmp262, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp266 =
      _tmp265 *
      (-_tmp257 * _tmp263 +
       _tmp264 * (-_tmp118 * _tmp260 + _tmp123 * _tmp260 - _tmp127 * _tmp260 + _tmp153 * _tmp211 -
                  _tmp153 * _tmp212 - _tmp164 * _tmp261 + _tmp165 * _tmp261 - _tmp166 * _tmp261));
  const Scalar _tmp267 = std::asinh(_tmp262 * _tmp264);
  const Scalar _tmp268 = Scalar(1.0) * _tmp267;
  const Scalar _tmp269 = Scalar(1.0) * std::cosh(_tmp268);
  const Scalar _tmp270 = Scalar(1.4083112389913199) * _tmp267;
  const Scalar _tmp271 = -_tmp28 + p_c(1, 0);
  const Scalar _tmp272 = -_tmp17 + p_c(0, 0);
  const Scalar _tmp273 = std::pow(_tmp271, Scalar(2)) + std::pow(_tmp272, Scalar(2));
  const Scalar _tmp274 = std::sqrt(_tmp273);
  const Scalar _tmp275 = -_tmp258 * _tmp270 - _tmp274;
  const Scalar _tmp276 = Scalar(0.71007031138673404) * _tmp264;
  const Scalar _tmp277 = _tmp275 * _tmp276;
  const Scalar _tmp278 = std::cosh(_tmp277);
  const Scalar _tmp279 = Scalar(0.71007031138673404) * _tmp259 * _tmp275;
  const Scalar _tmp280 = Scalar(1.4083112389913199) * _tmp258;
  const Scalar _tmp281 = Scalar(1.0) / (_tmp274);
  const Scalar _tmp282 = -_tmp75 + p_c(2, 0) - position_vector(2, 0);
  const Scalar _tmp283 =
      std::pow(Scalar(_tmp273 + std::pow(_tmp282, Scalar(2))), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp284 = -Scalar(1.4083112389913199) * std::sinh(_tmp268) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp277);
  const Scalar _tmp285 = _tmp31 * _tmp33;
  const Scalar _tmp286 = -_tmp285 + _tmp34 * _tmp44 + _tmp46;
  const Scalar _tmp287 =
      _tmp108 * _tmp34 - _tmp110 * _tmp286 - _tmp16 * _tmp285 + _tmp16 * _tmp46 + _tmp27 * _tmp34;
  const Scalar _tmp288 = _tmp120 * _tmp287;
  const Scalar _tmp289 = _tmp285 * _tmp75 - _tmp286 * _tmp72 - _tmp34 * _tmp71 - _tmp83;
  const Scalar _tmp290 = -_tmp286 * _tmp84 - _tmp289 * _tmp82 + _tmp34 * _tmp70 - _tmp93;
  const Scalar _tmp291 = _tmp290 * _tmp97;
  const Scalar _tmp292 = _tmp126 * (-_tmp114 * _tmp287 + _tmp125 * _tmp291);
  const Scalar _tmp293 = _tmp116 * _tmp290;
  const Scalar _tmp294 = _tmp115 * _tmp293;
  const Scalar _tmp295 = _tmp288 * _tmp85;
  const Scalar _tmp296 = _tmp115 * _tmp295;
  const Scalar _tmp297 = _tmp292 + _tmp294 - _tmp296;
  const Scalar _tmp298 = _tmp297 * _tmp86;
  const Scalar _tmp299 = _tmp132 * _tmp290;
  const Scalar _tmp300 = -_tmp134 * _tmp297 - _tmp135 * _tmp286 + _tmp299 * _tmp50;
  const Scalar _tmp301 = _tmp160 * _tmp291;
  const Scalar _tmp302 = _tmp126 * (-_tmp157 * _tmp287 + _tmp163 * _tmp291);
  const Scalar _tmp303 = _tmp158 * _tmp293;
  const Scalar _tmp304 = _tmp158 * _tmp295;
  const Scalar _tmp305 = _tmp302 + _tmp303 - _tmp304;
  const Scalar _tmp306 = -_tmp134 * _tmp305 - _tmp161 * _tmp286 + _tmp301 * _tmp50;
  const Scalar _tmp307 = _tmp290 * _tmp98;
  const Scalar _tmp308 =
      -_tmp106 * (_tmp150 * _tmp307 - _tmp286 * _tmp91 - _tmp307 * _tmp92 + _tmp34 * _tmp89) -
      _tmp145 * (_tmp135 * _tmp34 + _tmp298 * _tmp92 - _tmp299 * _tmp92 + _tmp300 * _tmp90) -
      _tmp154 * (_tmp146 * _tmp34 - _tmp148 * _tmp286 - _tmp149 * _tmp288 + _tmp151 * _tmp288) -
      _tmp171 * (_tmp129 * _tmp305 + _tmp161 * _tmp34 - _tmp301 * _tmp92 + _tmp306 * _tmp90);
  const Scalar _tmp309 = -_tmp289 * _tmp89 + _tmp307 * _tmp76;
  const Scalar _tmp310 = _tmp182 * _tmp295;
  const Scalar _tmp311 = _tmp182 * _tmp293;
  const Scalar _tmp312 =
      -_tmp146 * _tmp289 - _tmp179 * _tmp310 + _tmp179 * _tmp311 + _tmp210 * _tmp288;
  const Scalar _tmp313 = -_tmp135 * _tmp289 - _tmp184 * _tmp297 + _tmp185 * _tmp292 +
                         _tmp185 * _tmp294 - _tmp185 * _tmp296 + _tmp299 * _tmp76;
  const Scalar _tmp314 = -_tmp161 * _tmp289 - _tmp184 * _tmp305 + _tmp185 * _tmp302 +
                         _tmp185 * _tmp303 - _tmp185 * _tmp304 + _tmp301 * _tmp76;
  const Scalar _tmp315 = _tmp204 * (_tmp198 * (_tmp187 * (-_tmp112 * _tmp313 + _tmp182 * _tmp292 +
                                                          _tmp182 * _tmp294 - _tmp182 * _tmp296) +
                                               _tmp191 * (-_tmp112 * _tmp314 + _tmp182 * _tmp302 +
                                                          _tmp182 * _tmp303 - _tmp182 * _tmp304) +
                                               _tmp194 * (-_tmp112 * _tmp312 - _tmp310 + _tmp311) -
                                               _tmp209 * _tmp309) -
                                    _tmp214 * _tmp308);
  const Scalar _tmp316 = _tmp103 * _tmp307;
  const Scalar _tmp317 = _tmp194 * _tmp288;
  const Scalar _tmp318 = _tmp222 * _tmp300 + _tmp224 * _tmp316 + _tmp224 * _tmp317 -
                         _tmp226 * _tmp286 + _tmp227 * _tmp306 - _tmp229 * _tmp286;
  const Scalar _tmp319 =
      _tmp232 * (_tmp233 * _tmp309 + _tmp234 * _tmp313 + _tmp236 * _tmp314 + _tmp237 * _tmp312) -
      _tmp249 * _tmp318;
  const Scalar _tmp320 = _tmp144 * _tmp298 - _tmp144 * _tmp299 - _tmp170 * _tmp301 +
                         _tmp256 * _tmp305 - _tmp316 - _tmp317;
  const Scalar _tmp321 =
      _tmp265 *
      (-_tmp263 * _tmp320 +
       _tmp264 * (_tmp153 * _tmp310 - _tmp153 * _tmp311 - _tmp260 * _tmp292 - _tmp260 * _tmp294 +
                  _tmp260 * _tmp296 - _tmp261 * _tmp302 - _tmp261 * _tmp303 + _tmp261 * _tmp304));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp172 * _tmp221 +
      _tmp203 *
          (-_tmp215 * _tmp220 -
           _tmp218 * (-_tmp172 * _tmp202 + _tmp216 * (-_tmp172 * _tmp200 - _tmp203 * _tmp215)));
  _res(2, 0) =
      _tmp230 * _tmp246 +
      _tmp252 *
          (-_tmp247 * (-_tmp230 * _tmp254 + _tmp243 * (-_tmp230 * _tmp241 - _tmp250 * _tmp253)) -
           _tmp250 * _tmp255);
  _res(3, 0) =
      _tmp257 * _tmp284 - _tmp272 * _tmp283 +
      _tmp280 * (-_tmp266 * _tmp269 -
                 _tmp278 * (-_tmp257 * _tmp279 + _tmp276 * (-_tmp257 * _tmp270 - _tmp266 * _tmp280 -
                                                            _tmp272 * _tmp281)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp203 *
          (-_tmp218 * (-_tmp202 * _tmp308 + _tmp216 * (-_tmp200 * _tmp308 - _tmp203 * _tmp315)) -
           _tmp220 * _tmp315) +
      _tmp221 * _tmp308;
  _res(2, 1) =
      _tmp246 * _tmp318 +
      _tmp252 *
          (-_tmp247 * (_tmp243 * (-_tmp241 * _tmp318 - _tmp253 * _tmp319) - _tmp254 * _tmp318) -
           _tmp255 * _tmp319);
  _res(3, 1) =
      -_tmp271 * _tmp283 +
      _tmp280 * (-_tmp269 * _tmp321 -
                 _tmp278 * (_tmp276 * (-_tmp270 * _tmp320 - _tmp271 * _tmp281 - _tmp280 * _tmp321) -
                            _tmp279 * _tmp320)) +
      _tmp284 * _tmp320;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = -_tmp282 * _tmp283;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
