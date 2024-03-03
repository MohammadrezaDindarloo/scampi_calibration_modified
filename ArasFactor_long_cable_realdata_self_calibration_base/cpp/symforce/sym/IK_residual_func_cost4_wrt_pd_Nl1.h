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
 * Symbolic function: IK_residual_func_cost4_wrt_pd_Nl1
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPdNl1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1140

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (353)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp4 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp10 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp12 = _tmp2 * _tmp4;
  const Scalar _tmp13 = _tmp0 * _tmp6;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp22 = _tmp2 * _tmp5;
  const Scalar _tmp23 = _tmp21 + _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(0, 0);
  const Scalar _tmp29 = _tmp24 + _tmp25;
  const Scalar _tmp30 = _tmp20 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = _tmp31 - p_c(0, 0);
  const Scalar _tmp33 = _tmp11 + _tmp15;
  const Scalar _tmp34 = _tmp33 + _tmp8;
  const Scalar _tmp35 = _tmp34 + position_vector(1, 0);
  const Scalar _tmp36 = _tmp35 - p_c(1, 0);
  const Scalar _tmp37 = std::pow(Scalar(std::pow(_tmp32, Scalar(2)) + std::pow(_tmp36, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = _tmp32 * _tmp37;
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp40 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp41 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp42 = _tmp40 + _tmp41;
  const Scalar _tmp43 = _tmp39 + _tmp42;
  const Scalar _tmp44 = -_tmp20;
  const Scalar _tmp45 = _tmp29 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 - p_d(0, 0);
  const Scalar _tmp48 = _tmp40 - _tmp41;
  const Scalar _tmp49 = _tmp39 + _tmp48;
  const Scalar _tmp50 = std::pow(_tmp47, Scalar(2));
  const Scalar _tmp51 = -_tmp8;
  const Scalar _tmp52 = _tmp33 + _tmp51;
  const Scalar _tmp53 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp54 = _tmp53 - p_d(1, 0);
  const Scalar _tmp55 = std::pow(_tmp54, Scalar(2));
  const Scalar _tmp56 = _tmp50 + _tmp55;
  const Scalar _tmp57 = std::pow(_tmp56, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp49 * _tmp57;
  const Scalar _tmp59 = -_tmp39;
  const Scalar _tmp60 = _tmp42 + _tmp59;
  const Scalar _tmp61 = _tmp57 * _tmp60;
  const Scalar _tmp62 = _tmp47 * _tmp61;
  const Scalar _tmp63 = -_tmp47 * _tmp58 + _tmp62;
  const Scalar _tmp64 = _tmp28 - p_b(0, 0);
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = _tmp18 - p_b(1, 0);
  const Scalar _tmp67 = _tmp65 * _tmp66;
  const Scalar _tmp68 = _tmp57 * _tmp67;
  const Scalar _tmp69 = _tmp47 * _tmp68 - _tmp54 * _tmp57;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp36 * _tmp37;
  const Scalar _tmp72 = _tmp38 * _tmp67 - _tmp71;
  const Scalar _tmp73 = _tmp70 * _tmp72;
  const Scalar _tmp74 = _tmp54 * _tmp58 - _tmp62 * _tmp67;
  const Scalar _tmp75 = _tmp38 * _tmp60;
  const Scalar _tmp76 = _tmp43 * _tmp71 - _tmp67 * _tmp75 - _tmp73 * _tmp74;
  const Scalar _tmp77 = Scalar(1.0) * _tmp17;
  const Scalar _tmp78 = -_tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp52 + _tmp78);
  const Scalar _tmp80 = Scalar(1.0) * _tmp27;
  const Scalar _tmp81 = -_tmp45 + _tmp80;
  const Scalar _tmp82 = _tmp79 * _tmp81;
  const Scalar _tmp83 = -_tmp38 * _tmp43 - _tmp63 * _tmp73 + _tmp75 - _tmp76 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 =
      std::sqrt(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp66, Scalar(2))));
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = _tmp65 * _tmp85;
  const Scalar _tmp88 = _tmp87 * (-_tmp17 * _tmp64 * _tmp86 + _tmp27 * _tmp66 * _tmp86);
  const Scalar _tmp89 = _tmp45 * _tmp57;
  const Scalar _tmp90 = _tmp52 * _tmp57;
  const Scalar _tmp91 = _tmp57 * _tmp88;
  const Scalar _tmp92 = _tmp47 * _tmp90 + _tmp47 * _tmp91 - _tmp54 * _tmp89;
  const Scalar _tmp93 = -_tmp30 * _tmp71 + _tmp34 * _tmp38 + _tmp38 * _tmp88 - _tmp73 * _tmp92;
  const Scalar _tmp94 = _tmp60 * _tmp67;
  const Scalar _tmp95 = _tmp67 * _tmp70;
  const Scalar _tmp96 = _tmp74 * _tmp95 + _tmp94;
  const Scalar _tmp97 = -_tmp60 + _tmp63 * _tmp95 - _tmp82 * _tmp96;
  const Scalar _tmp98 = _tmp84 * _tmp97;
  const Scalar _tmp99 = -_tmp88 + _tmp92 * _tmp95 - _tmp93 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp101 = _tmp100 * _tmp83;
  const Scalar _tmp102 = _tmp101 * _tmp99;
  const Scalar _tmp103 = _tmp102 + _tmp97;
  const Scalar _tmp104 = _tmp103 * _tmp84;
  const Scalar _tmp105 = -_tmp104 * _tmp72 - _tmp67;
  const Scalar _tmp106 = _tmp57 * _tmp70;
  const Scalar _tmp107 = _tmp105 * _tmp106;
  const Scalar _tmp108 = _tmp26 + _tmp44;
  const Scalar _tmp109 = _tmp108 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp110 = _tmp16 + _tmp51;
  const Scalar _tmp111 = _tmp110 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp112 =
      std::pow(Scalar(std::pow(_tmp109, Scalar(2)) + std::pow(_tmp111, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp113 = _tmp109 * _tmp112;
  const Scalar _tmp114 = _tmp113 * fh1;
  const Scalar _tmp115 = _tmp114 * _tmp87;
  const Scalar _tmp116 = Scalar(1.0) * _tmp100;
  const Scalar _tmp117 = Scalar(1.0) * _tmp70;
  const Scalar _tmp118 = _tmp117 * _tmp72;
  const Scalar _tmp119 = _tmp100 * _tmp118;
  const Scalar _tmp120 = _tmp119 * _tmp57;
  const Scalar _tmp121 = _tmp111 * _tmp112;
  const Scalar _tmp122 = fh1 * (_tmp108 * _tmp121 - _tmp110 * _tmp113);
  const Scalar _tmp123 = _tmp122 * _tmp87;
  const Scalar _tmp124 = Scalar(1.0) * _tmp79;
  const Scalar _tmp125 = _tmp124 * _tmp81;
  const Scalar _tmp126 = _tmp125 * _tmp70;
  const Scalar _tmp127 = -_tmp117 * _tmp63 + _tmp126 * _tmp74;
  const Scalar _tmp128 = _tmp84 * _tmp93;
  const Scalar _tmp129 = -_tmp117 * _tmp92 - _tmp127 * _tmp128;
  const Scalar _tmp130 = _tmp101 * _tmp129;
  const Scalar _tmp131 = _tmp127 + _tmp130;
  const Scalar _tmp132 = _tmp131 * _tmp84;
  const Scalar _tmp133 = -_tmp132 * _tmp72 + Scalar(1.0);
  const Scalar _tmp134 = _tmp106 * _tmp133;
  const Scalar _tmp135 = _tmp121 * fh1;
  const Scalar _tmp136 = _tmp135 * _tmp87;
  const Scalar _tmp137 = _tmp47 * _tmp57;
  const Scalar _tmp138 = _tmp77 * _tmp82 + _tmp80;
  const Scalar _tmp139 = 0;
  const Scalar _tmp140 = _tmp139 * _tmp84;
  const Scalar _tmp141 = _tmp140 * _tmp73;
  const Scalar _tmp142 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp143 = _tmp142 * _tmp87;
  const Scalar _tmp144 = -_tmp115 * (_tmp104 * _tmp38 + _tmp107 * _tmp47 + Scalar(1.0)) -
                         _tmp123 * (_tmp116 * _tmp38 - _tmp120 * _tmp47) -
                         _tmp136 * (_tmp132 * _tmp38 + _tmp134 * _tmp47) -
                         _tmp143 * (-_tmp137 * _tmp141 + _tmp140 * _tmp38);
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = _tmp34 + _tmp78;
  const Scalar _tmp147 = _tmp146 * _tmp82;
  const Scalar _tmp148 = Scalar(1.0) / (-_tmp147 - _tmp30 + _tmp80);
  const Scalar _tmp149 = Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = _tmp101 * _tmp149;
  const Scalar _tmp151 = -_tmp116 * _tmp76 + _tmp146 * _tmp150;
  const Scalar _tmp152 = Scalar(1.0) * _tmp122;
  const Scalar _tmp153 = fh1 * (_tmp48 + _tmp59);
  const Scalar _tmp154 = -_tmp110 * fv1 - _tmp121 * _tmp153 - Scalar(40.024799999999999) * _tmp14;
  const Scalar _tmp155 = _tmp147 * _tmp149 + Scalar(1.0);
  const Scalar _tmp156 = _tmp149 * _tmp82;
  const Scalar _tmp157 = _tmp108 * fv1 + _tmp113 * _tmp153 + Scalar(40.024799999999999) * _tmp23;
  const Scalar _tmp158 = _tmp146 * _tmp149;
  const Scalar _tmp159 = _tmp146 * _tmp148;
  const Scalar _tmp160 = -_tmp117 * _tmp74 + _tmp130 * _tmp159 - _tmp132 * _tmp76;
  const Scalar _tmp161 = Scalar(1.0) * _tmp135;
  const Scalar _tmp162 = _tmp102 * _tmp159 - _tmp104 * _tmp76 + _tmp96;
  const Scalar _tmp163 = Scalar(1.0) * _tmp114;
  const Scalar _tmp164 = _tmp138 * _tmp148;
  const Scalar _tmp165 = _tmp76 * _tmp84;
  const Scalar _tmp166 = -_tmp139 * _tmp165 - _tmp146 * _tmp164 + _tmp78;
  const Scalar _tmp167 =
      Scalar(1.0) * _tmp142 * (-_tmp124 * _tmp166 - _tmp138 * _tmp149 + Scalar(1.0)) +
      _tmp152 * (-_tmp124 * _tmp151 + _tmp150) +
      Scalar(1.0) * _tmp154 * (-_tmp124 * _tmp155 + _tmp156) +
      Scalar(1.0) * _tmp157 * (-_tmp149 + _tmp158 * _tmp79) +
      _tmp161 * (-_tmp124 * _tmp160 + _tmp130 * _tmp149) +
      _tmp163 * (_tmp102 * _tmp149 - _tmp124 * _tmp162);
  const Scalar _tmp168 = std::asinh(_tmp145 * _tmp167);
  const Scalar _tmp169 = Scalar(1.4083112389913199) * _tmp144;
  const Scalar _tmp170 =
      -_tmp168 * _tmp169 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp28 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp171 = Scalar(0.71007031138673404) * _tmp145;
  const Scalar _tmp172 = _tmp170 * _tmp171;
  const Scalar _tmp173 = std::cosh(_tmp172);
  const Scalar _tmp174 = std::pow(_tmp56, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp175 = _tmp174 * _tmp50;
  const Scalar _tmp176 = _tmp174 * _tmp47 * _tmp54;
  const Scalar _tmp177 = _tmp175 * _tmp52 + _tmp175 * _tmp88 - _tmp176 * _tmp45 - _tmp90 - _tmp91;
  const Scalar _tmp178 = std::pow(_tmp69, Scalar(-2));
  const Scalar _tmp179 = _tmp178 * (_tmp175 * _tmp67 - _tmp176 - _tmp68);
  const Scalar _tmp180 = _tmp179 * _tmp92;
  const Scalar _tmp181 = -_tmp177 * _tmp73 + _tmp180 * _tmp72;
  const Scalar _tmp182 = std::pow(_tmp93, Scalar(-2));
  const Scalar _tmp183 = _tmp181 * _tmp182;
  const Scalar _tmp184 = _tmp118 * _tmp137;
  const Scalar _tmp185 = _tmp137 * _tmp179;
  const Scalar _tmp186 = Scalar(1.0) * _tmp38;
  const Scalar _tmp187 = _tmp175 * _tmp60;
  const Scalar _tmp188 = -_tmp175 * _tmp49 + _tmp187 + _tmp58 - _tmp61;
  const Scalar _tmp189 = _tmp176 * _tmp49;
  const Scalar _tmp190 = -_tmp187 * _tmp67 + _tmp189 + _tmp61 * _tmp67;
  const Scalar _tmp191 = _tmp179 * _tmp74;
  const Scalar _tmp192 = -_tmp190 * _tmp73 + _tmp191 * _tmp72;
  const Scalar _tmp193 = _tmp63 * _tmp72;
  const Scalar _tmp194 = _tmp179 * _tmp193 - _tmp188 * _tmp73 - _tmp192 * _tmp82;
  const Scalar _tmp195 = std::pow(_tmp83, Scalar(-2));
  const Scalar _tmp196 = _tmp194 * _tmp195;
  const Scalar _tmp197 = _tmp103 * _tmp196;
  const Scalar _tmp198 = _tmp182 * _tmp83;
  const Scalar _tmp199 = _tmp181 * _tmp198;
  const Scalar _tmp200 = _tmp199 * _tmp99;
  const Scalar _tmp201 = _tmp100 * _tmp194;
  const Scalar _tmp202 = _tmp201 * _tmp99;
  const Scalar _tmp203 = _tmp196 * _tmp93;
  const Scalar _tmp204 = _tmp179 * _tmp63;
  const Scalar _tmp205 = _tmp190 * _tmp95 - _tmp191 * _tmp67;
  const Scalar _tmp206 = _tmp188 * _tmp95 - _tmp204 * _tmp67 - _tmp205 * _tmp82;
  const Scalar _tmp207 = _tmp101 * (-_tmp128 * _tmp206 + _tmp177 * _tmp95 - _tmp180 * _tmp67 -
                                    _tmp181 * _tmp98 + _tmp203 * _tmp97);
  const Scalar _tmp208 = -_tmp200 + _tmp202 + _tmp206 + _tmp207;
  const Scalar _tmp209 = _tmp72 * _tmp84;
  const Scalar _tmp210 = _tmp197 * _tmp72 - _tmp208 * _tmp209;
  const Scalar _tmp211 = _tmp106 * _tmp47;
  const Scalar _tmp212 = _tmp38 * _tmp84;
  const Scalar _tmp213 = _tmp175 * _tmp70;
  const Scalar _tmp214 = _tmp129 * _tmp199;
  const Scalar _tmp215 = _tmp127 * _tmp84;
  const Scalar _tmp216 =
      -_tmp117 * _tmp188 - _tmp125 * _tmp191 + _tmp126 * _tmp190 + Scalar(1.0) * _tmp204;
  const Scalar _tmp217 = _tmp101 * (-_tmp117 * _tmp177 + _tmp127 * _tmp203 - _tmp128 * _tmp216 +
                                    Scalar(1.0) * _tmp180 - _tmp181 * _tmp215);
  const Scalar _tmp218 = _tmp129 * _tmp201;
  const Scalar _tmp219 = _tmp84 * (-_tmp214 + _tmp216 + _tmp217 + _tmp218);
  const Scalar _tmp220 = _tmp131 * _tmp38;
  const Scalar _tmp221 = _tmp131 * _tmp72;
  const Scalar _tmp222 = _tmp196 * _tmp221 - _tmp219 * _tmp72;
  const Scalar _tmp223 = _tmp137 * _tmp139;
  const Scalar _tmp224 = _tmp223 * _tmp73;
  const Scalar _tmp225 = _tmp139 * _tmp38;
  const Scalar _tmp226 = -_tmp115 * (-_tmp105 * _tmp185 + _tmp105 * _tmp213 - _tmp107 -
                                     _tmp197 * _tmp38 + _tmp208 * _tmp212 + _tmp210 * _tmp211) -
                         _tmp123 * (_tmp116 * _tmp185 * _tmp72 - _tmp119 * _tmp175 + _tmp120 +
                                    _tmp183 * _tmp184 - _tmp183 * _tmp186) -
                         _tmp136 * (-_tmp133 * _tmp185 + _tmp133 * _tmp213 - _tmp134 -
                                    _tmp196 * _tmp220 + _tmp211 * _tmp222 + _tmp219 * _tmp38) -
                         _tmp143 * (_tmp139 * _tmp185 * _tmp209 - _tmp141 * _tmp175 +
                                    _tmp141 * _tmp57 + _tmp196 * _tmp224 - _tmp196 * _tmp225);
  const Scalar _tmp227 = Scalar(1.4083112389913199) * _tmp168;
  const Scalar _tmp228 = std::pow(_tmp144, Scalar(-2));
  const Scalar _tmp229 =
      std::pow(Scalar(std::pow(_tmp167, Scalar(2)) * _tmp228 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp230 = -_tmp104 * _tmp192 - _tmp159 * _tmp200 + _tmp159 * _tmp202 +
                         _tmp159 * _tmp207 - _tmp165 * _tmp208 + _tmp197 * _tmp76 + _tmp205;
  const Scalar _tmp231 = _tmp131 * _tmp76;
  const Scalar _tmp232 = -_tmp117 * _tmp190 - _tmp132 * _tmp192 - _tmp159 * _tmp214 +
                         _tmp159 * _tmp217 + _tmp159 * _tmp218 + Scalar(1.0) * _tmp191 +
                         _tmp196 * _tmp231 - _tmp219 * _tmp76;
  const Scalar _tmp233 = _tmp139 * _tmp76;
  const Scalar _tmp234 = -_tmp140 * _tmp192 + _tmp196 * _tmp233;
  const Scalar _tmp235 = _tmp124 * _tmp142;
  const Scalar _tmp236 = _tmp149 * _tmp201;
  const Scalar _tmp237 = Scalar(1.0) * _tmp76;
  const Scalar _tmp238 =
      -_tmp116 * _tmp192 + _tmp146 * _tmp236 - _tmp158 * _tmp199 + _tmp183 * _tmp237;
  const Scalar _tmp239 = _tmp149 * _tmp199;
  const Scalar _tmp240 = _tmp167 * _tmp228;
  const Scalar _tmp241 = _tmp229 * (_tmp145 * (_tmp152 * (-_tmp124 * _tmp238 + _tmp236 - _tmp239) +
                                               _tmp161 * (-_tmp124 * _tmp232 - _tmp149 * _tmp214 +
                                                          _tmp149 * _tmp217 + _tmp149 * _tmp218) +
                                               _tmp163 * (-_tmp124 * _tmp230 - _tmp149 * _tmp200 +
                                                          _tmp149 * _tmp202 + _tmp149 * _tmp207) -
                                               _tmp234 * _tmp235) -
                                    _tmp226 * _tmp240);
  const Scalar _tmp242 = Scalar(0.71007031138673404) * _tmp170 * _tmp228;
  const Scalar _tmp243 = Scalar(1.0) * _tmp168;
  const Scalar _tmp244 = Scalar(1.0) * std::cosh(_tmp243);
  const Scalar _tmp245 = -Scalar(1.4083112389913199) * std::sinh(_tmp172) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp243);
  const Scalar _tmp246 = _tmp140 * _tmp142;
  const Scalar _tmp247 = _tmp135 * _tmp70;
  const Scalar _tmp248 = _tmp114 * _tmp70;
  const Scalar _tmp249 =
      _tmp105 * _tmp248 - _tmp119 * _tmp122 + _tmp133 * _tmp247 - _tmp246 * _tmp73;
  const Scalar _tmp250 = Scalar(1.0) / (_tmp249);
  const Scalar _tmp251 = _tmp135 * _tmp79;
  const Scalar _tmp252 = _tmp114 * _tmp79;
  const Scalar _tmp253 = _tmp142 * _tmp79;
  const Scalar _tmp254 = _tmp122 * _tmp79;
  const Scalar _tmp255 = _tmp149 * _tmp157;
  const Scalar _tmp256 = -_tmp146 * _tmp255 * _tmp79 + _tmp151 * _tmp254 +
                         _tmp154 * _tmp155 * _tmp79 + _tmp160 * _tmp251 + _tmp162 * _tmp252 +
                         _tmp166 * _tmp253;
  const Scalar _tmp257 = std::asinh(_tmp250 * _tmp256);
  const Scalar _tmp258 = Scalar(1.4083112389913199) * _tmp249;
  const Scalar _tmp259 = -_tmp53 + p_d(1, 0);
  const Scalar _tmp260 = -_tmp46 + p_d(0, 0);
  const Scalar _tmp261 =
      std::sqrt(Scalar(std::pow(_tmp259, Scalar(2)) + std::pow(_tmp260, Scalar(2))));
  const Scalar _tmp262 = -_tmp257 * _tmp258 - _tmp261;
  const Scalar _tmp263 = Scalar(0.71007031138673404) * _tmp250;
  const Scalar _tmp264 = _tmp262 * _tmp263;
  const Scalar _tmp265 = std::cosh(_tmp264);
  const Scalar _tmp266 = _tmp139 * _tmp142;
  const Scalar _tmp267 = _tmp196 * _tmp266;
  const Scalar _tmp268 = _tmp118 * _tmp122;
  const Scalar _tmp269 = _tmp116 * _tmp122;
  const Scalar _tmp270 = _tmp209 * _tmp266;
  const Scalar _tmp271 = -_tmp105 * _tmp114 * _tmp179 - _tmp133 * _tmp135 * _tmp179 +
                         _tmp179 * _tmp269 * _tmp72 + _tmp179 * _tmp270 + _tmp183 * _tmp268 +
                         _tmp210 * _tmp248 + _tmp222 * _tmp247 + _tmp267 * _tmp73;
  const Scalar _tmp272 = Scalar(1.4083112389913199) * _tmp271;
  const Scalar _tmp273 = Scalar(1.0) / (_tmp261);
  const Scalar _tmp274 = std::pow(_tmp249, Scalar(-2));
  const Scalar _tmp275 =
      std::pow(Scalar(std::pow(_tmp256, Scalar(2)) * _tmp274 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp276 = _tmp256 * _tmp274;
  const Scalar _tmp277 =
      _tmp275 *
      (_tmp250 * (_tmp230 * _tmp252 + _tmp232 * _tmp251 + _tmp234 * _tmp253 + _tmp238 * _tmp254) -
       _tmp271 * _tmp276);
  const Scalar _tmp278 = Scalar(0.71007031138673404) * _tmp262 * _tmp274;
  const Scalar _tmp279 = Scalar(1.0) * _tmp257;
  const Scalar _tmp280 = Scalar(1.0) * std::cosh(_tmp279);
  const Scalar _tmp281 = -std::sinh(_tmp264) - std::sinh(_tmp279);
  const Scalar _tmp282 = _tmp104 * _tmp114 + _tmp132 * _tmp135 + _tmp246 + _tmp269;
  const Scalar _tmp283 = Scalar(1.0) / (_tmp282);
  const Scalar _tmp284 = _tmp114 * _tmp148;
  const Scalar _tmp285 = _tmp135 * _tmp148;
  const Scalar _tmp286 = -_tmp102 * _tmp284 - _tmp122 * _tmp150 - _tmp130 * _tmp285 +
                         _tmp142 * _tmp164 - _tmp154 * _tmp156 + _tmp255;
  const Scalar _tmp287 = std::asinh(_tmp283 * _tmp286);
  const Scalar _tmp288 = Scalar(1.4083112389913199) * _tmp282;
  const Scalar _tmp289 =
      -_tmp287 * _tmp288 - std::sqrt(Scalar(std::pow(Scalar(-_tmp31 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp35 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp290 = Scalar(0.71007031138673404) * _tmp283;
  const Scalar _tmp291 = _tmp289 * _tmp290;
  const Scalar _tmp292 = Scalar(1.0) * _tmp287;
  const Scalar _tmp293 = -std::sinh(_tmp291) - std::sinh(_tmp292);
  const Scalar _tmp294 = _tmp114 * _tmp84;
  const Scalar _tmp295 = _tmp131 * _tmp135;
  const Scalar _tmp296 = -_tmp114 * _tmp197 + _tmp135 * _tmp219 - _tmp152 * _tmp183 -
                         _tmp196 * _tmp295 + _tmp208 * _tmp294 - _tmp267;
  const Scalar _tmp297 = Scalar(1.4083112389913199) * _tmp296;
  const Scalar _tmp298 = std::pow(_tmp282, Scalar(-2));
  const Scalar _tmp299 =
      std::pow(Scalar(std::pow(_tmp286, Scalar(2)) * _tmp298 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp300 = _tmp286 * _tmp298;
  const Scalar _tmp301 =
      _tmp299 *
      (_tmp283 * (-_tmp122 * _tmp236 + _tmp122 * _tmp239 + _tmp200 * _tmp284 - _tmp202 * _tmp284 -
                  _tmp207 * _tmp284 + _tmp214 * _tmp285 - _tmp217 * _tmp285 - _tmp218 * _tmp285) -
       _tmp296 * _tmp300);
  const Scalar _tmp302 = Scalar(1.0) * std::cosh(_tmp292);
  const Scalar _tmp303 = std::cosh(_tmp291);
  const Scalar _tmp304 = Scalar(0.71007031138673404) * _tmp289 * _tmp298;
  const Scalar _tmp305 = _tmp174 * _tmp55;
  const Scalar _tmp306 = _tmp178 * (_tmp176 * _tmp67 - _tmp305 + _tmp57);
  const Scalar _tmp307 = _tmp306 * _tmp72;
  const Scalar _tmp308 = _tmp176 * _tmp52 + _tmp176 * _tmp88 - _tmp305 * _tmp45 + _tmp89;
  const Scalar _tmp309 = _tmp307 * _tmp92 - _tmp308 * _tmp73;
  const Scalar _tmp310 = _tmp182 * _tmp309;
  const Scalar _tmp311 = _tmp176 * _tmp60 - _tmp189;
  const Scalar _tmp312 = -_tmp176 * _tmp94 + _tmp305 * _tmp49 - _tmp58;
  const Scalar _tmp313 = _tmp307 * _tmp74 - _tmp312 * _tmp73;
  const Scalar _tmp314 = _tmp193 * _tmp306 - _tmp311 * _tmp73 - _tmp313 * _tmp82;
  const Scalar _tmp315 = _tmp195 * _tmp314;
  const Scalar _tmp316 = _tmp103 * _tmp315;
  const Scalar _tmp317 = _tmp306 * _tmp67;
  const Scalar _tmp318 = _tmp312 * _tmp95 - _tmp317 * _tmp74;
  const Scalar _tmp319 = _tmp311 * _tmp95 - _tmp317 * _tmp63 - _tmp318 * _tmp82;
  const Scalar _tmp320 = _tmp315 * _tmp93;
  const Scalar _tmp321 = _tmp101 * (-_tmp128 * _tmp319 + _tmp308 * _tmp95 - _tmp309 * _tmp98 -
                                    _tmp317 * _tmp92 + _tmp320 * _tmp97);
  const Scalar _tmp322 = _tmp100 * _tmp314;
  const Scalar _tmp323 = _tmp322 * _tmp99;
  const Scalar _tmp324 = _tmp198 * _tmp309;
  const Scalar _tmp325 = _tmp324 * _tmp99;
  const Scalar _tmp326 = _tmp319 + _tmp321 + _tmp323 - _tmp325;
  const Scalar _tmp327 = _tmp176 * _tmp70;
  const Scalar _tmp328 = -_tmp209 * _tmp326 + _tmp316 * _tmp72;
  const Scalar _tmp329 = _tmp105 * _tmp306;
  const Scalar _tmp330 = _tmp129 * _tmp322;
  const Scalar _tmp331 = Scalar(1.0) * _tmp306;
  const Scalar _tmp332 =
      -_tmp117 * _tmp311 - _tmp125 * _tmp306 * _tmp74 + _tmp126 * _tmp312 + _tmp331 * _tmp63;
  const Scalar _tmp333 = _tmp101 * (-_tmp117 * _tmp308 + _tmp127 * _tmp320 - _tmp128 * _tmp332 -
                                    _tmp215 * _tmp309 + _tmp331 * _tmp92);
  const Scalar _tmp334 = _tmp129 * _tmp324;
  const Scalar _tmp335 = _tmp330 + _tmp332 + _tmp333 - _tmp334;
  const Scalar _tmp336 = -_tmp209 * _tmp335 + _tmp221 * _tmp315;
  const Scalar _tmp337 = _tmp133 * _tmp306;
  const Scalar _tmp338 = -_tmp115 * (_tmp105 * _tmp327 - _tmp137 * _tmp329 + _tmp211 * _tmp328 +
                                     _tmp212 * _tmp326 - _tmp316 * _tmp38) -
                         _tmp123 * (_tmp116 * _tmp137 * _tmp307 - _tmp119 * _tmp176 +
                                    _tmp184 * _tmp310 - _tmp186 * _tmp310) -
                         _tmp136 * (_tmp133 * _tmp327 - _tmp137 * _tmp337 + _tmp211 * _tmp336 +
                                    _tmp212 * _tmp335 - _tmp220 * _tmp315) -
                         _tmp143 * (-_tmp141 * _tmp176 + _tmp209 * _tmp223 * _tmp306 +
                                    _tmp224 * _tmp315 - _tmp225 * _tmp315);
  const Scalar _tmp339 = -_tmp117 * _tmp312 - _tmp132 * _tmp313 + _tmp159 * _tmp330 +
                         _tmp159 * _tmp333 - _tmp159 * _tmp334 - _tmp165 * _tmp335 +
                         _tmp231 * _tmp315 + _tmp331 * _tmp74;
  const Scalar _tmp340 = -_tmp140 * _tmp313 + _tmp233 * _tmp315;
  const Scalar _tmp341 = -_tmp104 * _tmp313 + _tmp159 * _tmp321 + _tmp159 * _tmp323 -
                         _tmp159 * _tmp325 - _tmp165 * _tmp326 + _tmp316 * _tmp76 + _tmp318;
  const Scalar _tmp342 = _tmp149 * _tmp322;
  const Scalar _tmp343 =
      -_tmp116 * _tmp313 + _tmp158 * _tmp322 - _tmp158 * _tmp324 + _tmp237 * _tmp310;
  const Scalar _tmp344 = _tmp149 * _tmp324;
  const Scalar _tmp345 = _tmp229 * (_tmp145 * (_tmp152 * (-_tmp124 * _tmp343 + _tmp342 - _tmp344) +
                                               _tmp161 * (-_tmp124 * _tmp339 + _tmp149 * _tmp330 +
                                                          _tmp149 * _tmp333 - _tmp149 * _tmp334) +
                                               _tmp163 * (-_tmp124 * _tmp341 + _tmp149 * _tmp321 +
                                                          _tmp149 * _tmp323 - _tmp149 * _tmp325) -
                                               _tmp235 * _tmp340) -
                                    _tmp240 * _tmp338);
  const Scalar _tmp346 = _tmp266 * _tmp315;
  const Scalar _tmp347 = -_tmp114 * _tmp329 - _tmp135 * _tmp337 + _tmp247 * _tmp336 +
                         _tmp248 * _tmp328 + _tmp268 * _tmp310 + _tmp269 * _tmp307 +
                         _tmp270 * _tmp306 + _tmp346 * _tmp73;
  const Scalar _tmp348 = Scalar(1.4083112389913199) * _tmp347;
  const Scalar _tmp349 =
      _tmp275 *
      (_tmp250 * (_tmp251 * _tmp339 + _tmp252 * _tmp341 + _tmp253 * _tmp340 + _tmp254 * _tmp343) -
       _tmp276 * _tmp347);
  const Scalar _tmp350 = -_tmp114 * _tmp316 + _tmp135 * _tmp335 * _tmp84 - _tmp152 * _tmp310 +
                         _tmp294 * _tmp326 - _tmp295 * _tmp315 - _tmp346;
  const Scalar _tmp351 = Scalar(1.4083112389913199) * _tmp350;
  const Scalar _tmp352 =
      _tmp299 *
      (_tmp283 * (-_tmp122 * _tmp342 + _tmp122 * _tmp344 - _tmp284 * _tmp321 - _tmp284 * _tmp323 +
                  _tmp284 * _tmp325 - _tmp285 * _tmp330 - _tmp285 * _tmp333 + _tmp285 * _tmp334) -
       _tmp300 * _tmp350);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp169 *
          (-_tmp173 * (_tmp171 * (-_tmp169 * _tmp241 - _tmp226 * _tmp227) - _tmp226 * _tmp242) -
           _tmp241 * _tmp244) +
      _tmp226 * _tmp245;
  _res(2, 0) =
      _tmp258 *
          (-_tmp265 * (_tmp263 * (-_tmp257 * _tmp272 - _tmp258 * _tmp277 - _tmp260 * _tmp273) -
                       _tmp271 * _tmp278) -
           _tmp277 * _tmp280) +
      _tmp272 * _tmp281;
  _res(3, 0) =
      _tmp288 *
          (-_tmp301 * _tmp302 -
           _tmp303 * (_tmp290 * (-_tmp287 * _tmp297 - _tmp288 * _tmp301) - _tmp296 * _tmp304)) +
      _tmp293 * _tmp297;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp169 *
          (-_tmp173 * (_tmp171 * (-_tmp169 * _tmp345 - _tmp227 * _tmp338) - _tmp242 * _tmp338) -
           _tmp244 * _tmp345) +
      _tmp245 * _tmp338;
  _res(2, 1) =
      _tmp258 *
          (-_tmp265 * (_tmp263 * (-_tmp257 * _tmp348 - _tmp258 * _tmp349 - _tmp259 * _tmp273) -
                       _tmp278 * _tmp347) -
           _tmp280 * _tmp349) +
      _tmp281 * _tmp348;
  _res(3, 1) =
      _tmp288 *
          (-_tmp302 * _tmp352 -
           _tmp303 * (_tmp290 * (-_tmp287 * _tmp351 - _tmp288 * _tmp352) - _tmp304 * _tmp350)) +
      _tmp293 * _tmp351;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym