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
 * Symbolic function: IK_residual_func_cost2_wrt_pc_Nl5
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPcNl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1157

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (363)
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
  const Scalar _tmp19 = _tmp18 - p_d(0, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp23 = _tmp12 * _tmp2;
  const Scalar _tmp24 = _tmp6 * _tmp8;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -_tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = _tmp29 - p_d(1, 0);
  const Scalar _tmp31 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp30, Scalar(2))));
  const Scalar _tmp32 = Scalar(1.0) / (_tmp31);
  const Scalar _tmp33 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp34 = _tmp31 * _tmp33;
  const Scalar _tmp35 = _tmp34 * (_tmp17 * _tmp30 * _tmp32 - _tmp19 * _tmp28 * _tmp32);
  const Scalar _tmp36 = _tmp16 + _tmp4;
  const Scalar _tmp37 = _tmp36 + position_vector(0, 0);
  const Scalar _tmp38 = _tmp37 - p_c(0, 0);
  const Scalar _tmp39 = std::pow(_tmp38, Scalar(2));
  const Scalar _tmp40 = _tmp22 + _tmp26;
  const Scalar _tmp41 = _tmp21 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 - p_c(1, 0);
  const Scalar _tmp44 = std::pow(_tmp43, Scalar(2));
  const Scalar _tmp45 = _tmp39 + _tmp44;
  const Scalar _tmp46 = std::pow(_tmp45, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp35 * _tmp46;
  const Scalar _tmp48 = _tmp41 * _tmp46;
  const Scalar _tmp49 = _tmp43 * _tmp46;
  const Scalar _tmp50 = -_tmp36 * _tmp49 + _tmp38 * _tmp47 + _tmp38 * _tmp48;
  const Scalar _tmp51 = _tmp30 * _tmp33;
  const Scalar _tmp52 = _tmp46 * _tmp51;
  const Scalar _tmp53 = _tmp38 * _tmp52 - _tmp49;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp55 = _tmp51 * _tmp54;
  const Scalar _tmp56 = _tmp11 - _tmp15;
  const Scalar _tmp57 = _tmp4 + _tmp56;
  const Scalar _tmp58 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp59 = _tmp58 - p_b(0, 0);
  const Scalar _tmp60 = -_tmp21;
  const Scalar _tmp61 = _tmp40 + _tmp60;
  const Scalar _tmp62 = _tmp61 + position_vector(1, 0);
  const Scalar _tmp63 = _tmp62 - p_b(1, 0);
  const Scalar _tmp64 = std::pow(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp63, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = _tmp59 * _tmp64;
  const Scalar _tmp67 = _tmp51 * _tmp66 - _tmp65;
  const Scalar _tmp68 = _tmp54 * _tmp67;
  const Scalar _tmp69 = _tmp35 * _tmp66 - _tmp50 * _tmp68 - _tmp57 * _tmp65 + _tmp61 * _tmp66;
  const Scalar _tmp70 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp71 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp72 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp73 = _tmp71 - _tmp72;
  const Scalar _tmp74 = _tmp70 + _tmp73;
  const Scalar _tmp75 = -_tmp70;
  const Scalar _tmp76 = _tmp71 + _tmp72;
  const Scalar _tmp77 = _tmp75 + _tmp76;
  const Scalar _tmp78 = _tmp51 * _tmp74;
  const Scalar _tmp79 = _tmp46 * _tmp74;
  const Scalar _tmp80 = _tmp38 * _tmp79;
  const Scalar _tmp81 = _tmp70 + _tmp76;
  const Scalar _tmp82 = _tmp46 * _tmp81;
  const Scalar _tmp83 = _tmp43 * _tmp82 - _tmp51 * _tmp80;
  const Scalar _tmp84 = _tmp54 * _tmp83;
  const Scalar _tmp85 = _tmp65 * _tmp77 - _tmp66 * _tmp78 - _tmp67 * _tmp84;
  const Scalar _tmp86 = Scalar(1.0) * _tmp28;
  const Scalar _tmp87 = -_tmp86;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp41 + _tmp87);
  const Scalar _tmp89 = Scalar(1.0) * _tmp17;
  const Scalar _tmp90 = _tmp88 * (-_tmp36 + _tmp89);
  const Scalar _tmp91 = -_tmp38 * _tmp82 + _tmp80;
  const Scalar _tmp92 = _tmp66 * _tmp74 - _tmp66 * _tmp77 - _tmp68 * _tmp91 - _tmp85 * _tmp90;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp51 * _tmp84 + _tmp78;
  const Scalar _tmp95 = _tmp55 * _tmp91 - _tmp74 - _tmp90 * _tmp94;
  const Scalar _tmp96 = _tmp93 * _tmp95;
  const Scalar _tmp97 = -_tmp35 + _tmp50 * _tmp55 - _tmp69 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp99 = _tmp92 * _tmp98;
  const Scalar _tmp100 = _tmp97 * _tmp99;
  const Scalar _tmp101 = _tmp100 + _tmp95;
  const Scalar _tmp102 = _tmp67 * _tmp93;
  const Scalar _tmp103 = -_tmp101 * _tmp102 - _tmp51;
  const Scalar _tmp104 = _tmp38 * _tmp46;
  const Scalar _tmp105 = std::pow(_tmp45, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp106 = _tmp105 * _tmp38 * _tmp43;
  const Scalar _tmp107 = _tmp105 * _tmp39;
  const Scalar _tmp108 = -_tmp106 + _tmp107 * _tmp51 - _tmp52;
  const Scalar _tmp109 = std::pow(_tmp53, Scalar(-2));
  const Scalar _tmp110 = _tmp108 * _tmp109;
  const Scalar _tmp111 = _tmp104 * _tmp110;
  const Scalar _tmp112 = std::pow(_tmp92, Scalar(-2));
  const Scalar _tmp113 = _tmp101 * _tmp112;
  const Scalar _tmp114 = _tmp107 * _tmp74;
  const Scalar _tmp115 = -_tmp107 * _tmp81 + _tmp114 - _tmp79 + _tmp82;
  const Scalar _tmp116 = _tmp109 * _tmp67;
  const Scalar _tmp117 = _tmp108 * _tmp116;
  const Scalar _tmp118 = _tmp106 * _tmp81;
  const Scalar _tmp119 = -_tmp114 * _tmp51 + _tmp118 + _tmp51 * _tmp79;
  const Scalar _tmp120 = _tmp117 * _tmp83 - _tmp119 * _tmp68;
  const Scalar _tmp121 = -_tmp115 * _tmp68 + _tmp117 * _tmp91 - _tmp120 * _tmp90;
  const Scalar _tmp122 = _tmp121 * _tmp66;
  const Scalar _tmp123 = _tmp97 * _tmp98;
  const Scalar _tmp124 = _tmp121 * _tmp123;
  const Scalar _tmp125 = -_tmp106 * _tmp36 + _tmp107 * _tmp35 + _tmp107 * _tmp41 - _tmp47 - _tmp48;
  const Scalar _tmp126 = _tmp117 * _tmp50 - _tmp125 * _tmp68;
  const Scalar _tmp127 = std::pow(_tmp69, Scalar(-2));
  const Scalar _tmp128 = _tmp126 * _tmp127;
  const Scalar _tmp129 = _tmp92 * _tmp97;
  const Scalar _tmp130 = _tmp128 * _tmp129;
  const Scalar _tmp131 = _tmp112 * _tmp69;
  const Scalar _tmp132 = _tmp131 * _tmp95;
  const Scalar _tmp133 = _tmp51 * _tmp83;
  const Scalar _tmp134 = -_tmp110 * _tmp133 + _tmp119 * _tmp55;
  const Scalar _tmp135 = _tmp51 * _tmp91;
  const Scalar _tmp136 = -_tmp110 * _tmp135 + _tmp115 * _tmp55 - _tmp134 * _tmp90;
  const Scalar _tmp137 = _tmp69 * _tmp93;
  const Scalar _tmp138 = _tmp99 * (-_tmp110 * _tmp50 * _tmp51 + _tmp121 * _tmp132 +
                                   _tmp125 * _tmp55 - _tmp126 * _tmp96 - _tmp136 * _tmp137);
  const Scalar _tmp139 = _tmp124 - _tmp130 + _tmp136 + _tmp138;
  const Scalar _tmp140 = _tmp66 * _tmp93;
  const Scalar _tmp141 = _tmp107 * _tmp54;
  const Scalar _tmp142 = _tmp121 * _tmp67;
  const Scalar _tmp143 = -_tmp102 * _tmp139 + _tmp113 * _tmp142;
  const Scalar _tmp144 = _tmp46 * _tmp54;
  const Scalar _tmp145 = _tmp144 * _tmp38;
  const Scalar _tmp146 = _tmp103 * _tmp144;
  const Scalar _tmp147 = _tmp5 + _tmp56;
  const Scalar _tmp148 = _tmp147 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp149 = _tmp27 + _tmp60;
  const Scalar _tmp150 = _tmp149 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp151 =
      std::pow(Scalar(std::pow(_tmp148, Scalar(2)) + std::pow(_tmp150, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp152 = _tmp148 * _tmp151;
  const Scalar _tmp153 = _tmp152 * fh1;
  const Scalar _tmp154 = _tmp153 * _tmp34;
  const Scalar _tmp155 = _tmp86 * _tmp90 + _tmp89;
  const Scalar _tmp156 = 0;
  const Scalar _tmp157 = _tmp102 * _tmp156;
  const Scalar _tmp158 = _tmp112 * _tmp156;
  const Scalar _tmp159 = _tmp145 * _tmp158;
  const Scalar _tmp160 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp161 = _tmp160 * _tmp34;
  const Scalar _tmp162 = Scalar(1.0) * _tmp54;
  const Scalar _tmp163 = _tmp162 * _tmp67;
  const Scalar _tmp164 = _tmp104 * _tmp163;
  const Scalar _tmp165 = Scalar(1.0) * _tmp66;
  const Scalar _tmp166 = Scalar(1.0) * _tmp98;
  const Scalar _tmp167 = _tmp104 * _tmp166;
  const Scalar _tmp168 = _tmp163 * _tmp98;
  const Scalar _tmp169 = _tmp150 * _tmp151;
  const Scalar _tmp170 = fh1 * (_tmp147 * _tmp169 - _tmp149 * _tmp152);
  const Scalar _tmp171 = _tmp170 * _tmp34;
  const Scalar _tmp172 = Scalar(1.0) * _tmp84;
  const Scalar _tmp173 = -_tmp162 * _tmp91 + _tmp172 * _tmp90;
  const Scalar _tmp174 = _tmp173 * _tmp93;
  const Scalar _tmp175 = -_tmp162 * _tmp50 - _tmp174 * _tmp69;
  const Scalar _tmp176 = _tmp175 * _tmp98;
  const Scalar _tmp177 = _tmp176 * _tmp92;
  const Scalar _tmp178 = _tmp173 + _tmp177;
  const Scalar _tmp179 = _tmp112 * _tmp178;
  const Scalar _tmp180 = _tmp121 * _tmp176;
  const Scalar _tmp181 = _tmp175 * _tmp92;
  const Scalar _tmp182 = _tmp128 * _tmp181;
  const Scalar _tmp183 = Scalar(1.0) * _tmp109;
  const Scalar _tmp184 = _tmp108 * _tmp183;
  const Scalar _tmp185 = _tmp184 * _tmp83;
  const Scalar _tmp186 = _tmp119 * _tmp162;
  const Scalar _tmp187 =
      -_tmp115 * _tmp162 + _tmp184 * _tmp91 - _tmp185 * _tmp90 + _tmp186 * _tmp90;
  const Scalar _tmp188 = _tmp131 * _tmp173;
  const Scalar _tmp189 = _tmp99 * (_tmp121 * _tmp188 - _tmp125 * _tmp162 - _tmp126 * _tmp174 -
                                   _tmp137 * _tmp187 + _tmp184 * _tmp50);
  const Scalar _tmp190 = _tmp180 - _tmp182 + _tmp187 + _tmp189;
  const Scalar _tmp191 = -_tmp102 * _tmp190 + _tmp142 * _tmp179;
  const Scalar _tmp192 = -_tmp102 * _tmp178 + Scalar(1.0);
  const Scalar _tmp193 = _tmp144 * _tmp192;
  const Scalar _tmp194 = _tmp169 * fh1;
  const Scalar _tmp195 = _tmp194 * _tmp34;
  const Scalar _tmp196 = -_tmp154 * (-_tmp103 * _tmp111 + _tmp103 * _tmp141 - _tmp113 * _tmp122 +
                                     _tmp139 * _tmp140 + _tmp143 * _tmp145 - _tmp146) -
                         _tmp161 * (_tmp111 * _tmp157 - _tmp122 * _tmp158 - _tmp141 * _tmp157 +
                                    _tmp142 * _tmp159 + _tmp144 * _tmp157) -
                         _tmp171 * (-_tmp107 * _tmp168 + _tmp117 * _tmp167 + _tmp128 * _tmp164 -
                                    _tmp128 * _tmp165 + _tmp168 * _tmp46) -
                         _tmp195 * (-_tmp111 * _tmp192 - _tmp122 * _tmp179 + _tmp140 * _tmp190 +
                                    _tmp141 * _tmp192 + _tmp145 * _tmp191 - _tmp193);
  const Scalar _tmp197 = _tmp156 * _tmp93;
  const Scalar _tmp198 = -_tmp154 * (_tmp101 * _tmp140 + _tmp146 * _tmp38 + Scalar(1.0)) -
                         _tmp161 * (-_tmp145 * _tmp157 + _tmp197 * _tmp66) -
                         _tmp171 * (-_tmp104 * _tmp168 + _tmp166 * _tmp66) -
                         _tmp195 * (_tmp140 * _tmp178 + _tmp193 * _tmp38);
  const Scalar _tmp199 = fh1 * (_tmp73 + _tmp75);
  const Scalar _tmp200 = Scalar(40.024799999999999) * _tmp10 + _tmp147 * fv1 + _tmp152 * _tmp199;
  const Scalar _tmp201 = _tmp61 + _tmp87;
  const Scalar _tmp202 = _tmp201 * _tmp90;
  const Scalar _tmp203 = Scalar(1.0) / (-_tmp202 - _tmp57 + _tmp89);
  const Scalar _tmp204 = Scalar(1.0) * _tmp203;
  const Scalar _tmp205 = _tmp201 * _tmp204;
  const Scalar _tmp206 = -_tmp149 * fv1 - _tmp169 * _tmp199 - Scalar(40.024799999999999) * _tmp25;
  const Scalar _tmp207 = _tmp88 * (_tmp202 * _tmp204 + Scalar(1.0));
  const Scalar _tmp208 = _tmp204 * _tmp90;
  const Scalar _tmp209 = _tmp155 * _tmp203;
  const Scalar _tmp210 = -_tmp197 * _tmp85 - _tmp201 * _tmp209 + _tmp87;
  const Scalar _tmp211 = Scalar(1.0) * _tmp88;
  const Scalar _tmp212 = _tmp201 * _tmp203;
  const Scalar _tmp213 = _tmp85 * _tmp93;
  const Scalar _tmp214 = _tmp100 * _tmp212 - _tmp101 * _tmp213 + _tmp94;
  const Scalar _tmp215 = Scalar(1.0) * _tmp153;
  const Scalar _tmp216 = -_tmp166 * _tmp85 + _tmp205 * _tmp99;
  const Scalar _tmp217 = _tmp204 * _tmp99;
  const Scalar _tmp218 = Scalar(1.0) * _tmp170;
  const Scalar _tmp219 = -_tmp172 + _tmp177 * _tmp212 - _tmp178 * _tmp213;
  const Scalar _tmp220 = Scalar(1.0) * _tmp194;
  const Scalar _tmp221 =
      Scalar(1.0) * _tmp160 * (-_tmp155 * _tmp204 - _tmp210 * _tmp211 + Scalar(1.0)) +
      Scalar(1.0) * _tmp200 * (-_tmp204 + _tmp205 * _tmp88) +
      Scalar(1.0) * _tmp206 * (-Scalar(1.0) * _tmp207 + _tmp208) +
      _tmp215 * (_tmp100 * _tmp204 - _tmp211 * _tmp214) + _tmp218 * (-_tmp211 * _tmp216 + _tmp217) +
      _tmp220 * (_tmp177 * _tmp204 - _tmp211 * _tmp219);
  const Scalar _tmp222 = Scalar(1.0) / (_tmp198);
  const Scalar _tmp223 = std::asinh(_tmp221 * _tmp222);
  const Scalar _tmp224 = Scalar(1.4083112389913199) * _tmp223;
  const Scalar _tmp225 =
      -_tmp198 * _tmp224 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp29 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp226 = Scalar(0.71007031138673404) * _tmp222;
  const Scalar _tmp227 = _tmp225 * _tmp226;
  const Scalar _tmp228 = Scalar(1.0) * _tmp223;
  const Scalar _tmp229 = -Scalar(1.4083112389913199) * std::sinh(_tmp227) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp228);
  const Scalar _tmp230 = std::pow(_tmp198, Scalar(-2));
  const Scalar _tmp231 = _tmp221 * _tmp230;
  const Scalar _tmp232 = _tmp204 * _tmp92;
  const Scalar _tmp233 = _tmp128 * _tmp232;
  const Scalar _tmp234 = Scalar(1.0) * _tmp85;
  const Scalar _tmp235 = _tmp205 * _tmp98;
  const Scalar _tmp236 = _tmp205 * _tmp92;
  const Scalar _tmp237 =
      -_tmp120 * _tmp166 + _tmp121 * _tmp235 + _tmp128 * _tmp234 - _tmp128 * _tmp236;
  const Scalar _tmp238 = _tmp204 * _tmp98;
  const Scalar _tmp239 = _tmp121 * _tmp238;
  const Scalar _tmp240 = _tmp120 * _tmp93;
  const Scalar _tmp241 = _tmp121 * _tmp85;
  const Scalar _tmp242 = -_tmp101 * _tmp240 + _tmp113 * _tmp241 + _tmp124 * _tmp212 -
                         _tmp130 * _tmp212 + _tmp134 + _tmp138 * _tmp212 - _tmp139 * _tmp213;
  const Scalar _tmp243 = _tmp160 * _tmp88;
  const Scalar _tmp244 = _tmp243 * (-_tmp120 * _tmp197 + _tmp158 * _tmp241);
  const Scalar _tmp245 = -_tmp178 * _tmp240 + _tmp179 * _tmp241 + _tmp180 * _tmp212 -
                         _tmp182 * _tmp212 + _tmp185 - _tmp186 + _tmp189 * _tmp212 -
                         _tmp190 * _tmp213;
  const Scalar _tmp246 =
      -_tmp196 * _tmp231 + _tmp222 * (_tmp215 * (_tmp124 * _tmp204 - _tmp130 * _tmp204 +
                                                 _tmp138 * _tmp204 - _tmp211 * _tmp242) +
                                      _tmp218 * (-_tmp211 * _tmp237 - _tmp233 + _tmp239) +
                                      _tmp220 * (_tmp180 * _tmp204 - _tmp182 * _tmp204 +
                                                 _tmp189 * _tmp204 - _tmp211 * _tmp245) -
                                      Scalar(1.0) * _tmp244);
  const Scalar _tmp247 =
      std::pow(Scalar(std::pow(_tmp221, Scalar(2)) * _tmp230 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp248 = Scalar(1.0) * _tmp247 * std::cosh(_tmp228);
  const Scalar _tmp249 = std::cosh(_tmp227);
  const Scalar _tmp250 = Scalar(1.4083112389913199) * _tmp198;
  const Scalar _tmp251 = _tmp247 * _tmp250;
  const Scalar _tmp252 = Scalar(0.71007031138673404) * _tmp225 * _tmp230;
  const Scalar _tmp253 = _tmp163 * _tmp170;
  const Scalar _tmp254 = _tmp153 * _tmp54;
  const Scalar _tmp255 = _tmp157 * _tmp160;
  const Scalar _tmp256 = _tmp158 * _tmp160;
  const Scalar _tmp257 = _tmp121 * _tmp256;
  const Scalar _tmp258 = _tmp166 * _tmp170;
  const Scalar _tmp259 = _tmp194 * _tmp54;
  const Scalar _tmp260 = -_tmp103 * _tmp110 * _tmp153 - _tmp110 * _tmp192 * _tmp194 +
                         _tmp110 * _tmp255 + _tmp117 * _tmp258 + _tmp128 * _tmp253 +
                         _tmp143 * _tmp254 + _tmp191 * _tmp259 + _tmp257 * _tmp68;
  const Scalar _tmp261 = _tmp153 * _tmp88;
  const Scalar _tmp262 = _tmp200 * _tmp204;
  const Scalar _tmp263 = _tmp194 * _tmp88;
  const Scalar _tmp264 = _tmp170 * _tmp88;
  const Scalar _tmp265 = -_tmp201 * _tmp262 * _tmp88 + _tmp206 * _tmp207 + _tmp210 * _tmp243 +
                         _tmp214 * _tmp261 + _tmp216 * _tmp264 + _tmp219 * _tmp263;
  const Scalar _tmp266 =
      _tmp103 * _tmp254 - _tmp168 * _tmp170 + _tmp192 * _tmp259 - _tmp255 * _tmp54;
  const Scalar _tmp267 = Scalar(1.0) / (_tmp266);
  const Scalar _tmp268 = std::asinh(_tmp265 * _tmp267);
  const Scalar _tmp269 = Scalar(1.0) * _tmp268;
  const Scalar _tmp270 = -_tmp42 + p_c(1, 0);
  const Scalar _tmp271 = -_tmp37 + p_c(0, 0);
  const Scalar _tmp272 = std::pow(_tmp270, Scalar(2)) + std::pow(_tmp271, Scalar(2));
  const Scalar _tmp273 = std::sqrt(_tmp272);
  const Scalar _tmp274 = Scalar(1.4083112389913199) * _tmp266;
  const Scalar _tmp275 = -_tmp268 * _tmp274 - _tmp273;
  const Scalar _tmp276 = Scalar(0.71007031138673404) * _tmp267;
  const Scalar _tmp277 = _tmp275 * _tmp276;
  const Scalar _tmp278 = -Scalar(1.4083112389913199) * std::sinh(_tmp269) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp277);
  const Scalar _tmp279 = -_tmp81 + p_c(2, 0) - position_vector(2, 0);
  const Scalar _tmp280 =
      std::pow(Scalar(_tmp272 + std::pow(_tmp279, Scalar(2))), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp281 = std::cosh(_tmp277);
  const Scalar _tmp282 = Scalar(1.4083112389913199) * _tmp268;
  const Scalar _tmp283 = std::pow(_tmp266, Scalar(-2));
  const Scalar _tmp284 =
      std::pow(Scalar(std::pow(_tmp265, Scalar(2)) * _tmp283 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp285 = _tmp265 * _tmp283;
  const Scalar _tmp286 =
      _tmp284 * (-_tmp260 * _tmp285 +
                 _tmp267 * (_tmp237 * _tmp264 + _tmp242 * _tmp261 + _tmp244 + _tmp245 * _tmp263));
  const Scalar _tmp287 = Scalar(1.0) / (_tmp273);
  const Scalar _tmp288 = Scalar(0.71007031138673404) * _tmp275 * _tmp283;
  const Scalar _tmp289 = Scalar(1.0) * std::cosh(_tmp269);
  const Scalar _tmp290 = _tmp194 * _tmp93;
  const Scalar _tmp291 = _tmp179 * _tmp194;
  const Scalar _tmp292 = _tmp113 * _tmp153;
  const Scalar _tmp293 = _tmp153 * _tmp93;
  const Scalar _tmp294 = -_tmp121 * _tmp291 - _tmp121 * _tmp292 - _tmp128 * _tmp218 +
                         _tmp139 * _tmp293 + _tmp190 * _tmp290 - _tmp257;
  const Scalar _tmp295 = _tmp101 * _tmp293 + _tmp160 * _tmp197 + _tmp178 * _tmp290 + _tmp258;
  const Scalar _tmp296 = Scalar(1.0) / (_tmp295);
  const Scalar _tmp297 = _tmp153 * _tmp203;
  const Scalar _tmp298 = _tmp194 * _tmp203;
  const Scalar _tmp299 = -_tmp100 * _tmp297 + _tmp160 * _tmp209 - _tmp170 * _tmp217 -
                         _tmp177 * _tmp298 - _tmp206 * _tmp208 + _tmp262;
  const Scalar _tmp300 = std::asinh(_tmp296 * _tmp299);
  const Scalar _tmp301 = Scalar(1.0) * _tmp300;
  const Scalar _tmp302 = Scalar(1.4083112389913199) * _tmp300;
  const Scalar _tmp303 =
      -_tmp295 * _tmp302 - std::sqrt(Scalar(std::pow(Scalar(-_tmp58 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp62 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp304 = Scalar(0.71007031138673404) * _tmp296;
  const Scalar _tmp305 = _tmp303 * _tmp304;
  const Scalar _tmp306 = -Scalar(1.4083112389913199) * std::sinh(_tmp301) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp305);
  const Scalar _tmp307 = Scalar(1.0) * std::cosh(_tmp301);
  const Scalar _tmp308 = std::pow(_tmp295, Scalar(-2));
  const Scalar _tmp309 =
      std::pow(Scalar(std::pow(_tmp299, Scalar(2)) * _tmp308 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp310 = _tmp299 * _tmp308;
  const Scalar _tmp311 =
      _tmp309 *
      (-_tmp294 * _tmp310 +
       _tmp296 * (-_tmp124 * _tmp297 + _tmp130 * _tmp297 - _tmp138 * _tmp297 + _tmp170 * _tmp233 -
                  _tmp170 * _tmp239 - _tmp180 * _tmp298 + _tmp182 * _tmp298 - _tmp189 * _tmp298));
  const Scalar _tmp312 = std::cosh(_tmp305);
  const Scalar _tmp313 = Scalar(0.71007031138673404) * _tmp303 * _tmp308;
  const Scalar _tmp314 = Scalar(1.4083112389913199) * _tmp295;
  const Scalar _tmp315 = _tmp106 * _tmp54;
  const Scalar _tmp316 = _tmp106 * _tmp74 - _tmp118;
  const Scalar _tmp317 = _tmp105 * _tmp44;
  const Scalar _tmp318 = _tmp106 * _tmp51 - _tmp317 + _tmp46;
  const Scalar _tmp319 = _tmp116 * _tmp318;
  const Scalar _tmp320 = -_tmp106 * _tmp78 + _tmp317 * _tmp81 - _tmp82;
  const Scalar _tmp321 = _tmp319 * _tmp83 - _tmp320 * _tmp68;
  const Scalar _tmp322 = -_tmp316 * _tmp68 + _tmp319 * _tmp91 - _tmp321 * _tmp90;
  const Scalar _tmp323 = _tmp176 * _tmp322;
  const Scalar _tmp324 = _tmp106 * _tmp35 + _tmp106 * _tmp41 - _tmp317 * _tmp36 + _tmp36 * _tmp46;
  const Scalar _tmp325 = _tmp318 * _tmp50;
  const Scalar _tmp326 = _tmp116 * _tmp325 - _tmp324 * _tmp68;
  const Scalar _tmp327 = _tmp127 * _tmp326;
  const Scalar _tmp328 = _tmp181 * _tmp327;
  const Scalar _tmp329 = _tmp183 * _tmp318;
  const Scalar _tmp330 = _tmp162 * _tmp320;
  const Scalar _tmp331 = _tmp329 * _tmp83;
  const Scalar _tmp332 =
      -_tmp162 * _tmp316 + _tmp329 * _tmp91 + _tmp330 * _tmp90 - _tmp331 * _tmp90;
  const Scalar _tmp333 = _tmp99 * (-_tmp137 * _tmp332 - _tmp162 * _tmp324 - _tmp174 * _tmp326 +
                                   _tmp183 * _tmp325 + _tmp188 * _tmp322);
  const Scalar _tmp334 = _tmp323 - _tmp328 + _tmp332 + _tmp333;
  const Scalar _tmp335 = _tmp322 * _tmp66;
  const Scalar _tmp336 = _tmp109 * _tmp318;
  const Scalar _tmp337 = _tmp192 * _tmp336;
  const Scalar _tmp338 = _tmp322 * _tmp67;
  const Scalar _tmp339 = -_tmp102 * _tmp334 + _tmp179 * _tmp338;
  const Scalar _tmp340 = -_tmp133 * _tmp336 + _tmp320 * _tmp55;
  const Scalar _tmp341 = -_tmp135 * _tmp336 + _tmp316 * _tmp55 - _tmp340 * _tmp90;
  const Scalar _tmp342 = _tmp99 * (-_tmp109 * _tmp325 * _tmp51 + _tmp132 * _tmp322 -
                                   _tmp137 * _tmp341 + _tmp324 * _tmp55 - _tmp326 * _tmp96);
  const Scalar _tmp343 = _tmp129 * _tmp327;
  const Scalar _tmp344 = _tmp123 * _tmp322;
  const Scalar _tmp345 = _tmp341 + _tmp342 - _tmp343 + _tmp344;
  const Scalar _tmp346 = _tmp103 * _tmp336;
  const Scalar _tmp347 = -_tmp102 * _tmp345 + _tmp113 * _tmp338;
  const Scalar _tmp348 =
      -_tmp154 * (_tmp103 * _tmp315 - _tmp104 * _tmp346 - _tmp113 * _tmp335 + _tmp140 * _tmp345 +
                  _tmp145 * _tmp347) -
      _tmp161 * (_tmp104 * _tmp157 * _tmp336 - _tmp157 * _tmp315 - _tmp158 * _tmp335 +
                 _tmp159 * _tmp338) -
      _tmp171 * (-_tmp106 * _tmp168 + _tmp164 * _tmp327 - _tmp165 * _tmp327 + _tmp167 * _tmp319) -
      _tmp195 * (-_tmp104 * _tmp337 + _tmp140 * _tmp334 + _tmp145 * _tmp339 - _tmp179 * _tmp335 +
                 _tmp192 * _tmp315);
  const Scalar _tmp349 = _tmp238 * _tmp322;
  const Scalar _tmp350 =
      -_tmp166 * _tmp321 + _tmp234 * _tmp327 + _tmp235 * _tmp322 - _tmp236 * _tmp327;
  const Scalar _tmp351 = _tmp232 * _tmp327;
  const Scalar _tmp352 = _tmp322 * _tmp85;
  const Scalar _tmp353 = _tmp243 * (_tmp158 * _tmp352 - _tmp197 * _tmp321);
  const Scalar _tmp354 = _tmp321 * _tmp93;
  const Scalar _tmp355 = -_tmp178 * _tmp354 + _tmp179 * _tmp352 + _tmp212 * _tmp323 -
                         _tmp212 * _tmp328 + _tmp212 * _tmp333 - _tmp213 * _tmp334 - _tmp330 +
                         _tmp331;
  const Scalar _tmp356 = -_tmp101 * _tmp354 + _tmp113 * _tmp352 + _tmp212 * _tmp342 -
                         _tmp212 * _tmp343 + _tmp212 * _tmp344 - _tmp213 * _tmp345 + _tmp340;
  const Scalar _tmp357 = _tmp222 * (_tmp215 * (_tmp204 * _tmp342 - _tmp204 * _tmp343 +
                                               _tmp204 * _tmp344 - _tmp211 * _tmp356) +
                                    _tmp218 * (-_tmp211 * _tmp350 + _tmp349 - _tmp351) +
                                    _tmp220 * (_tmp204 * _tmp323 - _tmp204 * _tmp328 +
                                               _tmp204 * _tmp333 - _tmp211 * _tmp355) -
                                    Scalar(1.0) * _tmp353) -
                         _tmp231 * _tmp348;
  const Scalar _tmp358 = _tmp256 * _tmp322;
  const Scalar _tmp359 = -_tmp153 * _tmp346 - _tmp194 * _tmp337 + _tmp253 * _tmp327 +
                         _tmp254 * _tmp347 + _tmp255 * _tmp336 + _tmp258 * _tmp319 +
                         _tmp259 * _tmp339 + _tmp358 * _tmp68;
  const Scalar _tmp360 =
      _tmp284 * (_tmp267 * (_tmp261 * _tmp356 + _tmp263 * _tmp355 + _tmp264 * _tmp350 + _tmp353) -
                 _tmp285 * _tmp359);
  const Scalar _tmp361 = -_tmp218 * _tmp327 + _tmp290 * _tmp334 - _tmp291 * _tmp322 -
                         _tmp292 * _tmp322 + _tmp293 * _tmp345 - _tmp358;
  const Scalar _tmp362 =
      _tmp309 *
      (_tmp296 * (-_tmp170 * _tmp349 + _tmp170 * _tmp351 - _tmp297 * _tmp342 + _tmp297 * _tmp343 -
                  _tmp297 * _tmp344 - _tmp298 * _tmp323 + _tmp298 * _tmp328 - _tmp298 * _tmp333) -
       _tmp310 * _tmp361);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp196 * _tmp229 +
      _tmp250 *
          (-_tmp246 * _tmp248 -
           _tmp249 * (-_tmp196 * _tmp252 + _tmp226 * (-_tmp196 * _tmp224 - _tmp246 * _tmp251)));
  _res(2, 0) =
      _tmp260 * _tmp278 - _tmp271 * _tmp280 +
      _tmp274 *
          (-_tmp281 * (-_tmp260 * _tmp288 +
                       _tmp276 * (-_tmp260 * _tmp282 - _tmp271 * _tmp287 - _tmp274 * _tmp286)) -
           _tmp286 * _tmp289);
  _res(3, 0) =
      _tmp294 * _tmp306 +
      _tmp314 *
          (-_tmp307 * _tmp311 -
           _tmp312 * (-_tmp294 * _tmp313 + _tmp304 * (-_tmp294 * _tmp302 - _tmp311 * _tmp314)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp229 * _tmp348 + _tmp250 * (-_tmp248 * _tmp357 -
                                     _tmp249 * (_tmp226 * (-_tmp224 * _tmp348 - _tmp251 * _tmp357) -
                                                _tmp252 * _tmp348));
  _res(2, 1) =
      -_tmp270 * _tmp280 +
      _tmp274 *
          (-_tmp281 * (_tmp276 * (-_tmp270 * _tmp287 - _tmp274 * _tmp360 - _tmp282 * _tmp359) -
                       _tmp288 * _tmp359) -
           _tmp289 * _tmp360) +
      _tmp278 * _tmp359;
  _res(3, 1) =
      _tmp306 * _tmp361 + _tmp314 * (-_tmp307 * _tmp362 -
                                     _tmp312 * (_tmp304 * (-_tmp302 * _tmp361 - _tmp314 * _tmp362) -
                                                _tmp313 * _tmp361));
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = -_tmp279 * _tmp280;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
