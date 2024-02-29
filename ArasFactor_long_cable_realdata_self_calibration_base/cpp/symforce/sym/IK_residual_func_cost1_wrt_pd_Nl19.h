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
 * Symbolic function: IK_residual_func_cost1_wrt_pd_Nl19
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPdNl19(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 771

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (267)
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
  const Scalar _tmp7 = 2 * _tmp2 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp0;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp2 * _tmp8;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -_tmp18 + p_d(0, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp22 = _tmp12 * _tmp2;
  const Scalar _tmp23 = _tmp6 * _tmp8;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = -_tmp29 + p_d(1, 0);
  const Scalar _tmp31 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp30, Scalar(2))));
  const Scalar _tmp32 = Scalar(1.0) / (fh1);
  const Scalar _tmp33 =
      Scalar(1.0) *
      std::sinh(Scalar(0.71007031138673404) * _tmp32 *
                (-_tmp31 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp32 * fv1))) /
      _tmp31;
  const Scalar _tmp34 = _tmp18 - p_d(0, 0);
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp36 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp38 = _tmp36 - _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = _tmp11 - _tmp15;
  const Scalar _tmp41 = _tmp4 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp43 = _tmp42 - p_b(0, 0);
  const Scalar _tmp44 = -_tmp21;
  const Scalar _tmp45 = _tmp25 + _tmp26;
  const Scalar _tmp46 = _tmp44 + _tmp45;
  const Scalar _tmp47 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp48 = _tmp47 - p_b(1, 0);
  const Scalar _tmp49 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp48, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp50 = _tmp43 * _tmp49;
  const Scalar _tmp51 = _tmp48 * _tmp49;
  const Scalar _tmp52 = _tmp36 + _tmp37;
  const Scalar _tmp53 = _tmp35 + _tmp52;
  const Scalar _tmp54 = _tmp21 + _tmp45;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_c(1, 0);
  const Scalar _tmp57 = _tmp16 + _tmp4;
  const Scalar _tmp58 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp59 = _tmp58 - p_c(0, 0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp40 + _tmp5;
  const Scalar _tmp63 = _tmp62 + position_vector(0, 0);
  const Scalar _tmp64 = _tmp63 - p_a(0, 0);
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = _tmp27 + _tmp44;
  const Scalar _tmp67 = _tmp66 + position_vector(1, 0);
  const Scalar _tmp68 = _tmp67 - p_a(1, 0);
  const Scalar _tmp69 = _tmp65 * _tmp68;
  const Scalar _tmp70 = -_tmp35;
  const Scalar _tmp71 = _tmp38 + _tmp70;
  const Scalar _tmp72 = _tmp59 * _tmp60;
  const Scalar _tmp73 = _tmp71 * _tmp72;
  const Scalar _tmp74 = _tmp53 * _tmp61 - _tmp69 * _tmp73;
  const Scalar _tmp75 = _tmp50 * _tmp69 - _tmp51;
  const Scalar _tmp76 = Scalar(1.0) / (-_tmp61 + _tmp69 * _tmp72);
  const Scalar _tmp77 = _tmp75 * _tmp76;
  const Scalar _tmp78 = _tmp50 * _tmp71;
  const Scalar _tmp79 = _tmp39 * _tmp51 - _tmp69 * _tmp78 - _tmp74 * _tmp77;
  const Scalar _tmp80 = Scalar(1.0) * _tmp66;
  const Scalar _tmp81 = -_tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp54 + _tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp62;
  const Scalar _tmp84 = -_tmp57 + _tmp83;
  const Scalar _tmp85 = _tmp82 * _tmp84;
  const Scalar _tmp86 = -_tmp53 * _tmp72 + _tmp73;
  const Scalar _tmp87 = -_tmp39 * _tmp50 - _tmp77 * _tmp86 + _tmp78 - _tmp79 * _tmp85;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 =
      std::sqrt(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp68, Scalar(2))));
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp65 * _tmp89;
  const Scalar _tmp92 = _tmp91 * (_tmp62 * _tmp68 * _tmp90 - _tmp64 * _tmp66 * _tmp90);
  const Scalar _tmp93 = _tmp54 * _tmp72 - _tmp57 * _tmp61 + _tmp72 * _tmp92;
  const Scalar _tmp94 = _tmp69 * _tmp76;
  const Scalar _tmp95 = _tmp69 * _tmp71 + _tmp74 * _tmp94;
  const Scalar _tmp96 = -_tmp71 - _tmp85 * _tmp95 + _tmp86 * _tmp94;
  const Scalar _tmp97 = -_tmp41 * _tmp51 + _tmp46 * _tmp50 + _tmp50 * _tmp92 - _tmp77 * _tmp93;
  const Scalar _tmp98 = _tmp88 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp100 = _tmp87 * _tmp99;
  const Scalar _tmp101 = _tmp100 * (-_tmp92 + _tmp93 * _tmp94 - _tmp96 * _tmp98);
  const Scalar _tmp102 = _tmp88 * (_tmp101 + _tmp96);
  const Scalar _tmp103 = _tmp76 * (-_tmp102 * _tmp75 - _tmp69);
  const Scalar _tmp104 = _tmp102 * _tmp50 + _tmp103 * _tmp72 + Scalar(1.0);
  const Scalar _tmp105 = std::pow(_tmp34, Scalar(2));
  const Scalar _tmp106 = _tmp29 - p_d(1, 0);
  const Scalar _tmp107 = std::pow(_tmp106, Scalar(2));
  const Scalar _tmp108 = _tmp105 + _tmp107;
  const Scalar _tmp109 = std::pow(_tmp108, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = _tmp110 * _tmp91;
  const Scalar _tmp112 = _tmp104 * _tmp111;
  const Scalar _tmp113 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp114 = _tmp80 * _tmp85 + _tmp83;
  const Scalar _tmp115 = 0;
  const Scalar _tmp116 = _tmp72 * _tmp77;
  const Scalar _tmp117 = _tmp109 * _tmp17;
  const Scalar _tmp118 = _tmp109 * _tmp28;
  const Scalar _tmp119 = fh1 * (_tmp106 * _tmp117 - _tmp118 * _tmp34);
  const Scalar _tmp120 = Scalar(1.0) * _tmp99;
  const Scalar _tmp121 = _tmp91 * (-_tmp116 * _tmp120 + _tmp120 * _tmp50);
  const Scalar _tmp122 = Scalar(1.0) * _tmp76;
  const Scalar _tmp123 = Scalar(1.0) * _tmp82;
  const Scalar _tmp124 = -_tmp122 * _tmp86 + _tmp123 * _tmp74 * _tmp76 * _tmp84;
  const Scalar _tmp125 = _tmp100 * (-_tmp122 * _tmp93 - _tmp124 * _tmp98);
  const Scalar _tmp126 = _tmp88 * (_tmp124 + _tmp125);
  const Scalar _tmp127 = _tmp76 * (-_tmp126 * _tmp75 + Scalar(1.0));
  const Scalar _tmp128 = _tmp126 * _tmp50 + _tmp127 * _tmp72;
  const Scalar _tmp129 = _tmp111 * _tmp128;
  const Scalar _tmp130 = -_tmp106 * _tmp129 - _tmp112 * _tmp34 -
                         _tmp113 * _tmp91 * (-_tmp115 * _tmp116 + _tmp115 * _tmp50) -
                         _tmp119 * _tmp121;
  const Scalar _tmp131 = Scalar(1.0) / (_tmp130);
  const Scalar _tmp132 = _tmp52 + _tmp70;
  const Scalar _tmp133 = _tmp110 * _tmp132;
  const Scalar _tmp134 = -_tmp106 * _tmp133 - Scalar(40.024799999999999) * _tmp24 - _tmp28 * fv1;
  const Scalar _tmp135 = _tmp46 + _tmp81;
  const Scalar _tmp136 = _tmp135 * _tmp85;
  const Scalar _tmp137 = Scalar(1.0) / (-_tmp136 - _tmp41 + _tmp83);
  const Scalar _tmp138 = Scalar(1.0) * _tmp137;
  const Scalar _tmp139 = _tmp82 * (_tmp136 * _tmp138 + Scalar(1.0));
  const Scalar _tmp140 = _tmp138 * _tmp85;
  const Scalar _tmp141 = -Scalar(1.0) * _tmp139 + Scalar(1.0) * _tmp140;
  const Scalar _tmp142 = _tmp100 * _tmp138;
  const Scalar _tmp143 = -_tmp120 * _tmp79 + _tmp135 * _tmp142;
  const Scalar _tmp144 = -Scalar(1.0) * _tmp123 * _tmp143 + Scalar(1.0) * _tmp142;
  const Scalar _tmp145 = _tmp135 * _tmp137;
  const Scalar _tmp146 = -_tmp122 * _tmp74 + _tmp125 * _tmp145 - _tmp126 * _tmp79;
  const Scalar _tmp147 = -_tmp123 * _tmp146 + _tmp125 * _tmp138;
  const Scalar _tmp148 = Scalar(1.0) * _tmp110;
  const Scalar _tmp149 = _tmp147 * _tmp148;
  const Scalar _tmp150 = _tmp101 * _tmp145 - _tmp102 * _tmp79 + _tmp95;
  const Scalar _tmp151 = _tmp101 * _tmp138 - _tmp123 * _tmp150;
  const Scalar _tmp152 = _tmp148 * _tmp151;
  const Scalar _tmp153 = Scalar(40.024799999999999) * _tmp10 + _tmp133 * _tmp34 + _tmp17 * fv1;
  const Scalar _tmp154 = _tmp135 * _tmp82;
  const Scalar _tmp155 = _tmp138 * _tmp154;
  const Scalar _tmp156 = -Scalar(1.0) * _tmp138 + Scalar(1.0) * _tmp155;
  const Scalar _tmp157 = _tmp114 * _tmp137;
  const Scalar _tmp158 = -_tmp115 * _tmp79 - _tmp135 * _tmp157 + _tmp81;
  const Scalar _tmp159 =
      _tmp106 * _tmp149 +
      Scalar(1.0) * _tmp113 * (-_tmp114 * _tmp138 - _tmp123 * _tmp158 + Scalar(1.0)) +
      _tmp119 * _tmp144 + _tmp134 * _tmp141 + _tmp152 * _tmp34 + _tmp153 * _tmp156;
  const Scalar _tmp160 = std::asinh(_tmp131 * _tmp159);
  const Scalar _tmp161 = Scalar(1.4083112389913199) * _tmp130;
  const Scalar _tmp162 =
      -_tmp160 * _tmp161 - std::sqrt(Scalar(std::pow(Scalar(-_tmp63 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp67 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp163 = Scalar(0.71007031138673404) * _tmp131;
  const Scalar _tmp164 = _tmp162 * _tmp163;
  const Scalar _tmp165 = Scalar(1.0) * _tmp160;
  const Scalar _tmp166 = _tmp163 * p_a(2, 0) - std::cosh(_tmp164) + std::cosh(_tmp165);
  const Scalar _tmp167 = std::pow(_tmp108, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp168 = _tmp167 * fh1;
  const Scalar _tmp169 = _tmp105 * _tmp168;
  const Scalar _tmp170 = _tmp104 * _tmp91;
  const Scalar _tmp171 = _tmp106 * _tmp34;
  const Scalar _tmp172 = _tmp168 * _tmp171;
  const Scalar _tmp173 = _tmp128 * _tmp91;
  const Scalar _tmp174 = _tmp167 * _tmp28;
  const Scalar _tmp175 = _tmp167 * _tmp17;
  const Scalar _tmp176 = fh1 * (-_tmp105 * _tmp174 + _tmp118 + _tmp171 * _tmp175);
  const Scalar _tmp177 = _tmp112 - _tmp121 * _tmp176 - _tmp169 * _tmp170 - _tmp172 * _tmp173;
  const Scalar _tmp178 = Scalar(1.4083112389913199) * _tmp177;
  const Scalar _tmp179 = std::pow(_tmp130, Scalar(-2));
  const Scalar _tmp180 = Scalar(0.71007031138673404) * _tmp179;
  const Scalar _tmp181 = _tmp180 * p_a(2, 0);
  const Scalar _tmp182 = std::sinh(_tmp164);
  const Scalar _tmp183 = Scalar(1.0) * _tmp151;
  const Scalar _tmp184 = Scalar(1.0) * _tmp147;
  const Scalar _tmp185 = _tmp132 * _tmp168;
  const Scalar _tmp186 = _tmp171 * _tmp185;
  const Scalar _tmp187 = _tmp105 * _tmp185 - _tmp133;
  const Scalar _tmp188 = _tmp159 * _tmp179;
  const Scalar _tmp189 = _tmp131 * (-_tmp141 * _tmp186 + _tmp144 * _tmp176 - _tmp152 +
                                    _tmp156 * _tmp187 + _tmp169 * _tmp183 + _tmp172 * _tmp184) -
                         _tmp177 * _tmp188;
  const Scalar _tmp190 =
      std::pow(Scalar(std::pow(_tmp159, Scalar(2)) * _tmp179 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp191 = _tmp161 * _tmp190;
  const Scalar _tmp192 = _tmp162 * _tmp180;
  const Scalar _tmp193 = Scalar(1.0) * _tmp190 * std::sinh(_tmp165);
  const Scalar _tmp194 = _tmp110 * _tmp127;
  const Scalar _tmp195 = _tmp119 * _tmp120;
  const Scalar _tmp196 = _tmp103 * _tmp110;
  const Scalar _tmp197 = _tmp113 * _tmp115;
  const Scalar _tmp198 = _tmp106 * _tmp194 - _tmp195 * _tmp77 + _tmp196 * _tmp34 - _tmp197 * _tmp77;
  const Scalar _tmp199 = Scalar(1.0) / (_tmp198);
  const Scalar _tmp200 = _tmp143 * _tmp82;
  const Scalar _tmp201 = _tmp110 * _tmp82;
  const Scalar _tmp202 = _tmp146 * _tmp201;
  const Scalar _tmp203 = _tmp138 * _tmp153;
  const Scalar _tmp204 = _tmp150 * _tmp201;
  const Scalar _tmp205 = _tmp106 * _tmp202 + _tmp113 * _tmp158 * _tmp82 + _tmp119 * _tmp200 +
                         _tmp134 * _tmp139 - _tmp154 * _tmp203 + _tmp204 * _tmp34;
  const Scalar _tmp206 = std::asinh(_tmp199 * _tmp205);
  const Scalar _tmp207 = Scalar(1.4083112389913199) * _tmp206;
  const Scalar _tmp208 =
      -_tmp198 * _tmp207 - std::sqrt(Scalar(std::pow(Scalar(-_tmp55 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp58 + p_c(0, 0)), Scalar(2))));
  const Scalar _tmp209 = Scalar(0.71007031138673404) * _tmp199;
  const Scalar _tmp210 = _tmp208 * _tmp209;
  const Scalar _tmp211 = std::sinh(_tmp210);
  const Scalar _tmp212 = _tmp120 * _tmp176;
  const Scalar _tmp213 = _tmp103 * _tmp169 + _tmp127 * _tmp172 - _tmp196 - _tmp212 * _tmp77;
  const Scalar _tmp214 = Scalar(1.4083112389913199) * _tmp198;
  const Scalar _tmp215 = std::pow(_tmp198, Scalar(-2));
  const Scalar _tmp216 =
      std::pow(Scalar(std::pow(_tmp205, Scalar(2)) * _tmp215 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp217 = _tmp205 * _tmp215;
  const Scalar _tmp218 = _tmp138 * _tmp187;
  const Scalar _tmp219 = _tmp146 * _tmp82;
  const Scalar _tmp220 = _tmp150 * _tmp82;
  const Scalar _tmp221 =
      _tmp216 * (_tmp199 * (-_tmp139 * _tmp186 - _tmp154 * _tmp218 + _tmp169 * _tmp220 +
                            _tmp172 * _tmp219 + _tmp176 * _tmp200 - _tmp204) -
                 _tmp213 * _tmp217);
  const Scalar _tmp222 = Scalar(0.71007031138673404) * _tmp215;
  const Scalar _tmp223 = _tmp213 * _tmp222;
  const Scalar _tmp224 = Scalar(1.0) * _tmp206;
  const Scalar _tmp225 = Scalar(1.0) * std::sinh(_tmp224);
  const Scalar _tmp226 = Scalar(1.4083112389913199) * _tmp209 * p_c(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp210) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp224);
  const Scalar _tmp227 = _tmp102 * _tmp110;
  const Scalar _tmp228 = _tmp102 * _tmp169 + _tmp126 * _tmp172 + _tmp212 - _tmp227;
  const Scalar _tmp229 = _tmp110 * _tmp126;
  const Scalar _tmp230 = _tmp106 * _tmp229 + _tmp195 + _tmp197 + _tmp227 * _tmp34;
  const Scalar _tmp231 = std::pow(_tmp230, Scalar(-2));
  const Scalar _tmp232 = Scalar(0.71007031138673404) * _tmp231;
  const Scalar _tmp233 = _tmp228 * _tmp232;
  const Scalar _tmp234 = Scalar(1.0) / (_tmp230);
  const Scalar _tmp235 = _tmp110 * _tmp137;
  const Scalar _tmp236 = _tmp101 * _tmp235;
  const Scalar _tmp237 = _tmp125 * _tmp235;
  const Scalar _tmp238 = -_tmp106 * _tmp237 + _tmp113 * _tmp157 - _tmp119 * _tmp142 -
                         _tmp134 * _tmp140 + _tmp203 - _tmp236 * _tmp34;
  const Scalar _tmp239 = std::asinh(_tmp234 * _tmp238);
  const Scalar _tmp240 = Scalar(1.0) * _tmp239;
  const Scalar _tmp241 = Scalar(1.0) * std::sinh(_tmp240);
  const Scalar _tmp242 =
      std::pow(Scalar(_tmp231 * std::pow(_tmp238, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp243 = _tmp231 * _tmp238;
  const Scalar _tmp244 = _tmp101 * _tmp137;
  const Scalar _tmp245 = _tmp125 * _tmp137;
  const Scalar _tmp246 =
      _tmp242 *
      (-_tmp228 * _tmp243 + _tmp234 * (_tmp140 * _tmp186 - _tmp142 * _tmp176 - _tmp169 * _tmp244 -
                                       _tmp172 * _tmp245 + _tmp218 + _tmp236));
  const Scalar _tmp247 = Scalar(1.4083112389913199) * _tmp239;
  const Scalar _tmp248 =
      -_tmp230 * _tmp247 - std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp47 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp249 = Scalar(1.4083112389913199) * _tmp230;
  const Scalar _tmp250 = Scalar(0.71007031138673404) * _tmp234;
  const Scalar _tmp251 = _tmp248 * _tmp250;
  const Scalar _tmp252 = std::sinh(_tmp251);
  const Scalar _tmp253 = Scalar(1.4083112389913199) * _tmp250 * p_b(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp240) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp251);
  const Scalar _tmp254 = fh1 * (_tmp107 * _tmp175 - _tmp117 - _tmp171 * _tmp174);
  const Scalar _tmp255 = _tmp107 * _tmp168;
  const Scalar _tmp256 = -_tmp121 * _tmp254 + _tmp129 - _tmp170 * _tmp172 - _tmp173 * _tmp255;
  const Scalar _tmp257 = Scalar(1.4083112389913199) * _tmp256;
  const Scalar _tmp258 = -_tmp107 * _tmp185 + _tmp133;
  const Scalar _tmp259 = _tmp131 * (_tmp141 * _tmp258 + _tmp144 * _tmp254 - _tmp149 +
                                    _tmp156 * _tmp186 + _tmp172 * _tmp183 + _tmp184 * _tmp255) -
                         _tmp188 * _tmp256;
  const Scalar _tmp260 = _tmp120 * _tmp254;
  const Scalar _tmp261 = _tmp103 * _tmp172 + _tmp127 * _tmp255 - _tmp194 - _tmp260 * _tmp77;
  const Scalar _tmp262 = _tmp222 * _tmp261;
  const Scalar _tmp263 =
      _tmp216 * (_tmp199 * (_tmp139 * _tmp258 - _tmp155 * _tmp186 + _tmp172 * _tmp220 +
                            _tmp200 * _tmp254 - _tmp202 + _tmp219 * _tmp255) -
                 _tmp217 * _tmp261);
  const Scalar _tmp264 = _tmp102 * _tmp172 + _tmp126 * _tmp255 - _tmp229 + _tmp260;
  const Scalar _tmp265 = _tmp232 * _tmp264;
  const Scalar _tmp266 =
      _tmp242 * (_tmp234 * (_tmp138 * _tmp186 - _tmp140 * _tmp258 - _tmp142 * _tmp254 -
                            _tmp172 * _tmp244 + _tmp237 - _tmp245 * _tmp255) -
                 _tmp243 * _tmp264);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = -_tmp19 * _tmp33;
  _res(1, 0) =
      -_tmp161 *
          (-_tmp177 * _tmp181 -
           _tmp182 * (_tmp163 * (-_tmp160 * _tmp178 - _tmp189 * _tmp191) - _tmp177 * _tmp192) +
           _tmp189 * _tmp193) -
      _tmp166 * _tmp178;
  _res(2, 0) =
      -_tmp213 * _tmp226 -
      _tmp214 *
          (-_tmp211 * (-_tmp208 * _tmp223 + _tmp209 * (-_tmp207 * _tmp213 - _tmp214 * _tmp221)) +
           _tmp221 * _tmp225 - _tmp223 * p_c(2, 0));
  _res(3, 0) =
      -_tmp228 * _tmp253 -
      _tmp249 *
          (-_tmp233 * p_b(2, 0) + _tmp241 * _tmp246 -
           _tmp252 * (-_tmp233 * _tmp248 + _tmp250 * (-_tmp228 * _tmp247 - _tmp246 * _tmp249)));
  _res(0, 1) = -_tmp30 * _tmp33;
  _res(1, 1) =
      -_tmp161 *
          (-_tmp181 * _tmp256 -
           _tmp182 * (_tmp163 * (-_tmp160 * _tmp257 - _tmp191 * _tmp259) - _tmp192 * _tmp256) +
           _tmp193 * _tmp259) -
      _tmp166 * _tmp257;
  _res(2, 1) =
      -_tmp214 *
          (-_tmp211 * (-_tmp208 * _tmp262 + _tmp209 * (-_tmp207 * _tmp261 - _tmp214 * _tmp263)) +
           _tmp225 * _tmp263 - _tmp262 * p_c(2, 0)) -
      _tmp226 * _tmp261;
  _res(3, 1) =
      -_tmp249 *
          (_tmp241 * _tmp266 -
           _tmp252 * (-_tmp248 * _tmp265 + _tmp250 * (-_tmp247 * _tmp264 - _tmp249 * _tmp266)) -
           _tmp265 * p_b(2, 0)) -
      _tmp253 * _tmp264;
  _res(0, 2) = Scalar(-1.0);
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
