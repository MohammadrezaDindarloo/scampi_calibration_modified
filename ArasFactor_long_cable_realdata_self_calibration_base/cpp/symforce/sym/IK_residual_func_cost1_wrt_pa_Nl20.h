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
 * Symbolic function: IK_residual_func_cost1_wrt_pa_Nl20
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPaNl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1159

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (366)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp2;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp0 * _tmp5;
  const Scalar _tmp13 = _tmp2 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = _tmp17 - p_c(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp20 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp22 = _tmp0 * _tmp6;
  const Scalar _tmp23 = _tmp5 * _tmp8;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = _tmp28 - p_c(1, 0);
  const Scalar _tmp30 = std::pow(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp29, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp18 * _tmp30;
  const Scalar _tmp32 = _tmp11 - _tmp14;
  const Scalar _tmp33 = _tmp32 + _tmp4;
  const Scalar _tmp34 = Scalar(1.0) * _tmp33;
  const Scalar _tmp35 = -_tmp21 + _tmp25;
  const Scalar _tmp36 = _tmp19 + _tmp35;
  const Scalar _tmp37 = Scalar(1.0) * _tmp36;
  const Scalar _tmp38 = -_tmp37;
  const Scalar _tmp39 = -_tmp19;
  const Scalar _tmp40 = _tmp35 + _tmp39;
  const Scalar _tmp41 = Scalar(1.0) / (_tmp38 + _tmp40);
  const Scalar _tmp42 = -_tmp4;
  const Scalar _tmp43 = _tmp32 + _tmp42;
  const Scalar _tmp44 = _tmp41 * (_tmp34 - _tmp43);
  const Scalar _tmp45 = _tmp34 + _tmp37 * _tmp44;
  const Scalar _tmp46 = 0;
  const Scalar _tmp47 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp48 = _tmp47 - p_b(0, 0);
  const Scalar _tmp49 = Scalar(1.0) / (_tmp48);
  const Scalar _tmp50 = _tmp36 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_b(1, 0);
  const Scalar _tmp52 = _tmp49 * _tmp51;
  const Scalar _tmp53 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp54 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp55 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp56 = _tmp54 - _tmp55;
  const Scalar _tmp57 = _tmp53 + _tmp56;
  const Scalar _tmp58 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp59 = _tmp58 - p_a(0, 0);
  const Scalar _tmp60 = std::pow(_tmp59, Scalar(2));
  const Scalar _tmp61 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp62 = _tmp61 - p_a(1, 0);
  const Scalar _tmp63 = std::pow(_tmp62, Scalar(2));
  const Scalar _tmp64 = _tmp60 + _tmp63;
  const Scalar _tmp65 = std::pow(_tmp64, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp66 = _tmp60 * _tmp65;
  const Scalar _tmp67 = _tmp57 * _tmp66;
  const Scalar _tmp68 = std::pow(_tmp64, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp69 = _tmp57 * _tmp68;
  const Scalar _tmp70 = -_tmp53;
  const Scalar _tmp71 = _tmp56 + _tmp70;
  const Scalar _tmp72 = _tmp59 * _tmp62 * _tmp65;
  const Scalar _tmp73 = _tmp71 * _tmp72;
  const Scalar _tmp74 = -_tmp52 * _tmp67 + _tmp52 * _tmp69 + _tmp73;
  const Scalar _tmp75 = _tmp52 * _tmp68;
  const Scalar _tmp76 = _tmp59 * _tmp75 - _tmp62 * _tmp68;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp76);
  const Scalar _tmp78 = _tmp29 * _tmp30;
  const Scalar _tmp79 = _tmp31 * _tmp52 - _tmp78;
  const Scalar _tmp80 = _tmp77 * _tmp79;
  const Scalar _tmp81 = _tmp59 * _tmp69;
  const Scalar _tmp82 = _tmp68 * _tmp71;
  const Scalar _tmp83 = -_tmp52 * _tmp81 + _tmp62 * _tmp82;
  const Scalar _tmp84 = std::pow(_tmp76, Scalar(-2));
  const Scalar _tmp85 = _tmp84 * (_tmp52 * _tmp66 - _tmp72 - _tmp75);
  const Scalar _tmp86 = _tmp79 * _tmp85;
  const Scalar _tmp87 = -_tmp74 * _tmp80 + _tmp83 * _tmp86;
  const Scalar _tmp88 = -_tmp66 * _tmp71 + _tmp67 - _tmp69 + _tmp82;
  const Scalar _tmp89 = -_tmp59 * _tmp82 + _tmp81;
  const Scalar _tmp90 = _tmp79 * _tmp89;
  const Scalar _tmp91 = -_tmp44 * _tmp87 - _tmp80 * _tmp88 + _tmp85 * _tmp90;
  const Scalar _tmp92 = _tmp77 * _tmp83;
  const Scalar _tmp93 = _tmp31 * _tmp57;
  const Scalar _tmp94 = _tmp54 + _tmp55;
  const Scalar _tmp95 = _tmp53 + _tmp94;
  const Scalar _tmp96 = -_tmp52 * _tmp93 + _tmp78 * _tmp95 - _tmp79 * _tmp92;
  const Scalar _tmp97 = _tmp77 * _tmp89;
  const Scalar _tmp98 = -_tmp31 * _tmp95 - _tmp44 * _tmp96 - _tmp79 * _tmp97 + _tmp93;
  const Scalar _tmp99 = std::pow(_tmp98, Scalar(-2));
  const Scalar _tmp100 = _tmp91 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp46;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp103 = _tmp102 * _tmp46;
  const Scalar _tmp104 = _tmp68 * _tmp80;
  const Scalar _tmp105 = _tmp103 * _tmp104;
  const Scalar _tmp106 = _tmp104 * _tmp59;
  const Scalar _tmp107 = _tmp66 * _tmp80;
  const Scalar _tmp108 = _tmp59 * _tmp68;
  const Scalar _tmp109 = _tmp103 * _tmp108;
  const Scalar _tmp110 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp111 =
      std::sqrt(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp112 = _tmp111 * _tmp49;
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp40 * _tmp68;
  const Scalar _tmp115 = Scalar(1.0) / (_tmp111);
  const Scalar _tmp116 = _tmp112 * (_tmp115 * _tmp33 * _tmp51 - _tmp115 * _tmp36 * _tmp48);
  const Scalar _tmp117 = _tmp116 * _tmp68;
  const Scalar _tmp118 = -_tmp114 + _tmp116 * _tmp66 - _tmp117 + _tmp40 * _tmp66 - _tmp43 * _tmp72;
  const Scalar _tmp119 = _tmp43 * _tmp68;
  const Scalar _tmp120 = _tmp114 * _tmp59 + _tmp117 * _tmp59 - _tmp119 * _tmp62;
  const Scalar _tmp121 = -_tmp118 * _tmp80 + _tmp120 * _tmp86;
  const Scalar _tmp122 = _tmp116 * _tmp31 - _tmp120 * _tmp80 - _tmp16 * _tmp78 + _tmp27 * _tmp31;
  const Scalar _tmp123 = std::pow(_tmp122, Scalar(-2));
  const Scalar _tmp124 = _tmp121 * _tmp123;
  const Scalar _tmp125 = Scalar(1.0) * _tmp77;
  const Scalar _tmp126 = _tmp125 * _tmp79;
  const Scalar _tmp127 = _tmp108 * _tmp126;
  const Scalar _tmp128 = Scalar(1.0) * _tmp31;
  const Scalar _tmp129 = Scalar(1.0) / (_tmp122);
  const Scalar _tmp130 = Scalar(1.0) * _tmp129;
  const Scalar _tmp131 = _tmp104 * _tmp130;
  const Scalar _tmp132 = _tmp108 * _tmp130;
  const Scalar _tmp133 = _tmp15 + _tmp42;
  const Scalar _tmp134 = _tmp133 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp135 = _tmp26 + _tmp39;
  const Scalar _tmp136 = _tmp135 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp137 =
      std::pow(Scalar(std::pow(_tmp134, Scalar(2)) + std::pow(_tmp136, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp138 = _tmp136 * _tmp137;
  const Scalar _tmp139 = _tmp134 * _tmp137;
  const Scalar _tmp140 = fh1 * (_tmp133 * _tmp138 - _tmp135 * _tmp139);
  const Scalar _tmp141 = _tmp112 * _tmp140;
  const Scalar _tmp142 = _tmp52 * _tmp77;
  const Scalar _tmp143 = _tmp52 * _tmp57;
  const Scalar _tmp144 = _tmp143 + _tmp52 * _tmp92;
  const Scalar _tmp145 = -_tmp144 * _tmp44 + _tmp52 * _tmp97 - _tmp57;
  const Scalar _tmp146 = _tmp102 * _tmp122;
  const Scalar _tmp147 = -_tmp116 + _tmp120 * _tmp142 - _tmp145 * _tmp146;
  const Scalar _tmp148 = _tmp129 * _tmp98;
  const Scalar _tmp149 = _tmp147 * _tmp148;
  const Scalar _tmp150 = _tmp145 + _tmp149;
  const Scalar _tmp151 = _tmp102 * _tmp79;
  const Scalar _tmp152 = -_tmp150 * _tmp151 - _tmp52;
  const Scalar _tmp153 = _tmp108 * _tmp85;
  const Scalar _tmp154 = _tmp100 * _tmp150;
  const Scalar _tmp155 = _tmp129 * _tmp91;
  const Scalar _tmp156 = _tmp147 * _tmp155;
  const Scalar _tmp157 = _tmp100 * _tmp122;
  const Scalar _tmp158 = _tmp102 * _tmp145;
  const Scalar _tmp159 = _tmp83 * _tmp85;
  const Scalar _tmp160 = _tmp142 * _tmp74 - _tmp159 * _tmp52;
  const Scalar _tmp161 = _tmp52 * _tmp89;
  const Scalar _tmp162 = _tmp142 * _tmp88 - _tmp160 * _tmp44 - _tmp161 * _tmp85;
  const Scalar _tmp163 = _tmp148 * (_tmp118 * _tmp142 - _tmp120 * _tmp52 * _tmp85 -
                                    _tmp121 * _tmp158 + _tmp145 * _tmp157 - _tmp146 * _tmp162);
  const Scalar _tmp164 = _tmp124 * _tmp98;
  const Scalar _tmp165 = _tmp147 * _tmp164;
  const Scalar _tmp166 = _tmp156 + _tmp162 + _tmp163 - _tmp165;
  const Scalar _tmp167 = -_tmp151 * _tmp166 + _tmp154 * _tmp79;
  const Scalar _tmp168 = _tmp68 * _tmp77;
  const Scalar _tmp169 = _tmp168 * _tmp59;
  const Scalar _tmp170 = _tmp102 * _tmp31;
  const Scalar _tmp171 = _tmp152 * _tmp168;
  const Scalar _tmp172 = _tmp66 * _tmp77;
  const Scalar _tmp173 = _tmp139 * fh1;
  const Scalar _tmp174 = _tmp112 * _tmp173;
  const Scalar _tmp175 = Scalar(1.0) * _tmp92;
  const Scalar _tmp176 = _tmp175 * _tmp44 - Scalar(1.0) * _tmp97;
  const Scalar _tmp177 = -_tmp120 * _tmp125 - _tmp146 * _tmp176;
  const Scalar _tmp178 = _tmp148 * _tmp177;
  const Scalar _tmp179 = _tmp176 + _tmp178;
  const Scalar _tmp180 = -_tmp151 * _tmp179 + Scalar(1.0);
  const Scalar _tmp181 = _tmp168 * _tmp180;
  const Scalar _tmp182 = _tmp179 * _tmp31;
  const Scalar _tmp183 = _tmp179 * _tmp79;
  const Scalar _tmp184 = _tmp164 * _tmp177;
  const Scalar _tmp185 = _tmp155 * _tmp177;
  const Scalar _tmp186 = _tmp125 * _tmp74;
  const Scalar _tmp187 = Scalar(1.0) * _tmp89;
  const Scalar _tmp188 = Scalar(1.0) * _tmp159;
  const Scalar _tmp189 = -_tmp125 * _tmp88 + _tmp186 * _tmp44 + _tmp187 * _tmp85 - _tmp188 * _tmp44;
  const Scalar _tmp190 = _tmp102 * _tmp176;
  const Scalar _tmp191 = Scalar(1.0) * _tmp120;
  const Scalar _tmp192 = _tmp148 * (-_tmp118 * _tmp125 - _tmp121 * _tmp190 - _tmp146 * _tmp189 +
                                    _tmp157 * _tmp176 + _tmp191 * _tmp85);
  const Scalar _tmp193 = -_tmp184 + _tmp185 + _tmp189 + _tmp192;
  const Scalar _tmp194 = _tmp100 * _tmp183 - _tmp151 * _tmp193;
  const Scalar _tmp195 = _tmp138 * fh1;
  const Scalar _tmp196 = _tmp112 * _tmp195;
  const Scalar _tmp197 = -_tmp113 * (_tmp101 * _tmp106 - _tmp101 * _tmp31 - _tmp103 * _tmp107 +
                                     _tmp105 + _tmp109 * _tmp86) -
                         _tmp141 * (-_tmp107 * _tmp130 + _tmp124 * _tmp127 - _tmp124 * _tmp128 +
                                    _tmp131 + _tmp132 * _tmp86) -
                         _tmp174 * (-_tmp152 * _tmp153 + _tmp152 * _tmp172 - _tmp154 * _tmp31 +
                                    _tmp166 * _tmp170 + _tmp167 * _tmp169 - _tmp171) -
                         _tmp196 * (-_tmp100 * _tmp182 - _tmp153 * _tmp180 + _tmp169 * _tmp194 +
                                    _tmp170 * _tmp193 + _tmp172 * _tmp180 - _tmp181);
  const Scalar _tmp198 = -_tmp113 * (_tmp103 * _tmp31 - _tmp105 * _tmp59) -
                         _tmp141 * (_tmp130 * _tmp31 - _tmp131 * _tmp59) -
                         _tmp174 * (_tmp150 * _tmp170 + _tmp171 * _tmp59 + Scalar(1.0)) -
                         _tmp196 * (_tmp170 * _tmp179 + _tmp181 * _tmp59);
  const Scalar _tmp199 = Scalar(1.0) / (_tmp198);
  const Scalar _tmp200 = Scalar(0.71007031138673404) * _tmp199;
  const Scalar _tmp201 = _tmp27 + _tmp38;
  const Scalar _tmp202 = _tmp201 * _tmp44;
  const Scalar _tmp203 = Scalar(1.0) / (-_tmp16 - _tmp202 + _tmp34);
  const Scalar _tmp204 = Scalar(1.0) * _tmp203;
  const Scalar _tmp205 = _tmp102 * _tmp96;
  const Scalar _tmp206 = _tmp201 * _tmp203;
  const Scalar _tmp207 = -_tmp175 + _tmp178 * _tmp206 - _tmp179 * _tmp205;
  const Scalar _tmp208 = Scalar(1.0) * _tmp41;
  const Scalar _tmp209 = Scalar(1.0) * _tmp195;
  const Scalar _tmp210 = _tmp201 * _tmp41;
  const Scalar _tmp211 = fh1 * (_tmp70 + _tmp94);
  const Scalar _tmp212 = Scalar(40.024799999999999) * _tmp10 + _tmp133 * fv1 + _tmp139 * _tmp211;
  const Scalar _tmp213 = _tmp144 + _tmp149 * _tmp206 - _tmp150 * _tmp205;
  const Scalar _tmp214 = Scalar(1.0) * _tmp173;
  const Scalar _tmp215 = -_tmp135 * fv1 - _tmp138 * _tmp211 - Scalar(40.024799999999999) * _tmp24;
  const Scalar _tmp216 = _tmp204 * _tmp44;
  const Scalar _tmp217 = _tmp202 * _tmp204 + Scalar(1.0);
  const Scalar _tmp218 = _tmp203 * _tmp45;
  const Scalar _tmp219 = -_tmp103 * _tmp96 - _tmp201 * _tmp218 + _tmp38;
  const Scalar _tmp220 = _tmp148 * _tmp204;
  const Scalar _tmp221 = -_tmp130 * _tmp96 + _tmp201 * _tmp220;
  const Scalar _tmp222 = Scalar(1.0) * _tmp140;
  const Scalar _tmp223 =
      Scalar(1.0) * _tmp110 * (-_tmp204 * _tmp45 - _tmp208 * _tmp219 + Scalar(1.0)) +
      _tmp209 * (_tmp178 * _tmp204 - _tmp207 * _tmp208) +
      Scalar(1.0) * _tmp212 * (_tmp204 * _tmp210 - _tmp204) +
      _tmp214 * (_tmp149 * _tmp204 - _tmp208 * _tmp213) +
      Scalar(1.0) * _tmp215 * (-_tmp208 * _tmp217 + _tmp216) +
      _tmp222 * (-_tmp208 * _tmp221 + _tmp220);
  const Scalar _tmp224 = std::asinh(_tmp199 * _tmp223);
  const Scalar _tmp225 = Scalar(1.4083112389913199) * _tmp224;
  const Scalar _tmp226 =
      -_tmp198 * _tmp225 - std::sqrt(Scalar(std::pow(Scalar(-_tmp47 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp227 = _tmp200 * _tmp226;
  const Scalar _tmp228 = Scalar(1.0) * _tmp224;
  const Scalar _tmp229 = Scalar(1.4083112389913199) * _tmp200 * p_b(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp227) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp228);
  const Scalar _tmp230 = std::pow(_tmp198, Scalar(-2));
  const Scalar _tmp231 = Scalar(0.71007031138673404) * _tmp230;
  const Scalar _tmp232 = _tmp197 * _tmp231;
  const Scalar _tmp233 = Scalar(1.0) * std::sinh(_tmp228);
  const Scalar _tmp234 =
      std::pow(Scalar(std::pow(_tmp223, Scalar(2)) * _tmp230 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp235 = _tmp102 * _tmp87;
  const Scalar _tmp236 = _tmp100 * _tmp96;
  const Scalar _tmp237 = -_tmp150 * _tmp235 + _tmp150 * _tmp236 + _tmp156 * _tmp206 + _tmp160 +
                         _tmp163 * _tmp206 - _tmp165 * _tmp206 - _tmp166 * _tmp205;
  const Scalar _tmp238 = _tmp179 * _tmp96;
  const Scalar _tmp239 = _tmp100 * _tmp238 - _tmp179 * _tmp235 - _tmp184 * _tmp206 +
                         _tmp185 * _tmp206 - _tmp186 + _tmp188 + _tmp192 * _tmp206 -
                         _tmp193 * _tmp205;
  const Scalar _tmp240 = _tmp155 * _tmp204;
  const Scalar _tmp241 = Scalar(1.0) * _tmp96;
  const Scalar _tmp242 = _tmp164 * _tmp204;
  const Scalar _tmp243 =
      _tmp124 * _tmp241 - _tmp130 * _tmp87 + _tmp201 * _tmp240 - _tmp201 * _tmp242;
  const Scalar _tmp244 = _tmp110 * _tmp41;
  const Scalar _tmp245 = _tmp244 * (-_tmp235 * _tmp46 + _tmp236 * _tmp46);
  const Scalar _tmp246 = _tmp223 * _tmp230;
  const Scalar _tmp247 = _tmp234 * (-_tmp197 * _tmp246 +
                                    _tmp199 * (_tmp209 * (-_tmp184 * _tmp204 + _tmp185 * _tmp204 +
                                                          _tmp192 * _tmp204 - _tmp208 * _tmp239) +
                                               _tmp214 * (_tmp156 * _tmp204 + _tmp163 * _tmp204 -
                                                          _tmp165 * _tmp204 - _tmp208 * _tmp237) +
                                               _tmp222 * (-_tmp208 * _tmp243 + _tmp240 - _tmp242) -
                                               Scalar(1.0) * _tmp245));
  const Scalar _tmp248 = Scalar(1.4083112389913199) * _tmp198;
  const Scalar _tmp249 = std::sinh(_tmp227);
  const Scalar _tmp250 = _tmp140 * _tmp41;
  const Scalar _tmp251 = _tmp204 * _tmp212;
  const Scalar _tmp252 = _tmp41 * fh1;
  const Scalar _tmp253 = _tmp139 * _tmp252;
  const Scalar _tmp254 = _tmp138 * _tmp252;
  const Scalar _tmp255 = _tmp207 * _tmp254 - _tmp210 * _tmp251 + _tmp213 * _tmp253 +
                         _tmp215 * _tmp217 * _tmp41 + _tmp219 * _tmp244 + _tmp221 * _tmp250;
  const Scalar _tmp256 = _tmp130 * _tmp140;
  const Scalar _tmp257 = _tmp103 * _tmp110;
  const Scalar _tmp258 = _tmp173 * _tmp77;
  const Scalar _tmp259 = _tmp195 * _tmp77;
  const Scalar _tmp260 =
      _tmp152 * _tmp258 + _tmp180 * _tmp259 - _tmp256 * _tmp80 - _tmp257 * _tmp80;
  const Scalar _tmp261 = Scalar(1.0) / (_tmp260);
  const Scalar _tmp262 = std::asinh(_tmp255 * _tmp261);
  const Scalar _tmp263 = Scalar(1.0) * _tmp262;
  const Scalar _tmp264 = Scalar(0.71007031138673404) * _tmp261;
  const Scalar _tmp265 = -_tmp61 + p_a(1, 0);
  const Scalar _tmp266 = -_tmp58 + p_a(0, 0);
  const Scalar _tmp267 =
      std::sqrt(Scalar(std::pow(_tmp265, Scalar(2)) + std::pow(_tmp266, Scalar(2))));
  const Scalar _tmp268 = Scalar(1.4083112389913199) * _tmp260;
  const Scalar _tmp269 = -_tmp262 * _tmp268 - _tmp267;
  const Scalar _tmp270 = _tmp264 * _tmp269;
  const Scalar _tmp271 = _tmp264 * p_a(2, 0) + std::cosh(_tmp263) - std::cosh(_tmp270);
  const Scalar _tmp272 = _tmp126 * _tmp140;
  const Scalar _tmp273 = _tmp101 * _tmp110;
  const Scalar _tmp274 = _tmp124 * _tmp272 - _tmp152 * _tmp173 * _tmp85 + _tmp167 * _tmp258 -
                         _tmp180 * _tmp195 * _tmp85 + _tmp194 * _tmp259 + _tmp256 * _tmp86 +
                         _tmp257 * _tmp86 + _tmp273 * _tmp80;
  const Scalar _tmp275 = Scalar(1.4083112389913199) * _tmp274;
  const Scalar _tmp276 = std::pow(_tmp260, Scalar(-2));
  const Scalar _tmp277 = Scalar(0.71007031138673404) * _tmp276;
  const Scalar _tmp278 = _tmp277 * p_a(2, 0);
  const Scalar _tmp279 = _tmp255 * _tmp276;
  const Scalar _tmp280 =
      _tmp261 * (_tmp237 * _tmp253 + _tmp239 * _tmp254 + _tmp243 * _tmp250 + _tmp245) -
      _tmp274 * _tmp279;
  const Scalar _tmp281 =
      std::pow(Scalar(std::pow(_tmp255, Scalar(2)) * _tmp276 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp282 = Scalar(1.0) * _tmp281 * std::sinh(_tmp263);
  const Scalar _tmp283 = _tmp269 * _tmp277;
  const Scalar _tmp284 = _tmp268 * _tmp281;
  const Scalar _tmp285 = Scalar(1.0) / (_tmp267);
  const Scalar _tmp286 = std::sinh(_tmp270);
  const Scalar _tmp287 = _tmp102 * _tmp173;
  const Scalar _tmp288 = _tmp102 * _tmp195;
  const Scalar _tmp289 = _tmp179 * _tmp195;
  const Scalar _tmp290 = -_tmp100 * _tmp289 - _tmp124 * _tmp222 - _tmp154 * _tmp173 +
                         _tmp166 * _tmp287 + _tmp193 * _tmp288 - _tmp273;
  const Scalar _tmp291 = _tmp195 * _tmp203;
  const Scalar _tmp292 = _tmp173 * _tmp203;
  const Scalar _tmp293 = _tmp110 * _tmp218 - _tmp140 * _tmp220 - _tmp149 * _tmp292 -
                         _tmp178 * _tmp291 - _tmp215 * _tmp216 + _tmp251;
  const Scalar _tmp294 = _tmp150 * _tmp287 + _tmp179 * _tmp288 + _tmp256 + _tmp257;
  const Scalar _tmp295 = Scalar(1.0) / (_tmp294);
  const Scalar _tmp296 = std::asinh(_tmp293 * _tmp295);
  const Scalar _tmp297 = Scalar(1.0) * _tmp296;
  const Scalar _tmp298 = Scalar(0.71007031138673404) * _tmp295;
  const Scalar _tmp299 = Scalar(1.4083112389913199) * _tmp294;
  const Scalar _tmp300 =
      -_tmp296 * _tmp299 - std::sqrt(Scalar(std::pow(Scalar(-_tmp17 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp28 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp301 = _tmp298 * _tmp300;
  const Scalar _tmp302 = Scalar(1.4083112389913199) * _tmp298 * p_c(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp297) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp301);
  const Scalar _tmp303 = Scalar(1.0) * std::sinh(_tmp297);
  const Scalar _tmp304 = std::pow(_tmp294, Scalar(-2));
  const Scalar _tmp305 =
      std::pow(Scalar(std::pow(_tmp293, Scalar(2)) * _tmp304 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp306 = _tmp293 * _tmp304;
  const Scalar _tmp307 =
      _tmp305 *
      (-_tmp290 * _tmp306 +
       _tmp295 * (-_tmp140 * _tmp240 + _tmp140 * _tmp242 - _tmp156 * _tmp292 - _tmp163 * _tmp292 +
                  _tmp165 * _tmp292 + _tmp184 * _tmp291 - _tmp185 * _tmp291 - _tmp192 * _tmp291));
  const Scalar _tmp308 = std::sinh(_tmp301);
  const Scalar _tmp309 = Scalar(1.4083112389913199) * _tmp296;
  const Scalar _tmp310 = Scalar(0.71007031138673404) * _tmp304;
  const Scalar _tmp311 = _tmp290 * _tmp310;
  const Scalar _tmp312 = _tmp63 * _tmp65;
  const Scalar _tmp313 = _tmp84 * (-_tmp312 + _tmp52 * _tmp72 + _tmp68);
  const Scalar _tmp314 = -_tmp143 * _tmp72 + _tmp312 * _tmp71 - _tmp82;
  const Scalar _tmp315 = _tmp313 * _tmp83;
  const Scalar _tmp316 = -_tmp314 * _tmp80 + _tmp315 * _tmp79;
  const Scalar _tmp317 = _tmp57 * _tmp72 - _tmp73;
  const Scalar _tmp318 = _tmp313 * _tmp90 - _tmp316 * _tmp44 - _tmp317 * _tmp80;
  const Scalar _tmp319 = _tmp318 * _tmp99;
  const Scalar _tmp320 = _tmp319 * _tmp46;
  const Scalar _tmp321 = _tmp72 * _tmp80;
  const Scalar _tmp322 = _tmp313 * _tmp79;
  const Scalar _tmp323 = _tmp72 * _tmp77;
  const Scalar _tmp324 = _tmp180 * _tmp313;
  const Scalar _tmp325 = _tmp129 * _tmp318;
  const Scalar _tmp326 = _tmp177 * _tmp325;
  const Scalar _tmp327 = _tmp116 * _tmp72 + _tmp119 - _tmp312 * _tmp43 + _tmp40 * _tmp72;
  const Scalar _tmp328 = _tmp120 * _tmp313;
  const Scalar _tmp329 = -_tmp327 * _tmp80 + _tmp328 * _tmp79;
  const Scalar _tmp330 = _tmp123 * _tmp329;
  const Scalar _tmp331 = _tmp330 * _tmp98;
  const Scalar _tmp332 = _tmp177 * _tmp331;
  const Scalar _tmp333 = _tmp125 * _tmp314;
  const Scalar _tmp334 = Scalar(1.0) * _tmp315;
  const Scalar _tmp335 =
      -_tmp125 * _tmp317 + _tmp187 * _tmp313 + _tmp333 * _tmp44 - _tmp334 * _tmp44;
  const Scalar _tmp336 = _tmp122 * _tmp319;
  const Scalar _tmp337 = _tmp148 * (-_tmp125 * _tmp327 - _tmp146 * _tmp335 + _tmp176 * _tmp336 -
                                    _tmp190 * _tmp329 + _tmp191 * _tmp313);
  const Scalar _tmp338 = _tmp326 - _tmp332 + _tmp335 + _tmp337;
  const Scalar _tmp339 = -_tmp151 * _tmp338 + _tmp183 * _tmp319;
  const Scalar _tmp340 = _tmp150 * _tmp319;
  const Scalar _tmp341 = _tmp147 * _tmp325;
  const Scalar _tmp342 = _tmp147 * _tmp331;
  const Scalar _tmp343 = _tmp142 * _tmp314 - _tmp315 * _tmp52;
  const Scalar _tmp344 = _tmp142 * _tmp317 - _tmp161 * _tmp313 - _tmp343 * _tmp44;
  const Scalar _tmp345 = _tmp148 * (_tmp142 * _tmp327 + _tmp145 * _tmp336 - _tmp146 * _tmp344 -
                                    _tmp158 * _tmp329 - _tmp328 * _tmp52);
  const Scalar _tmp346 = _tmp341 - _tmp342 + _tmp344 + _tmp345;
  const Scalar _tmp347 = -_tmp151 * _tmp346 + _tmp340 * _tmp79;
  const Scalar _tmp348 = _tmp152 * _tmp313;
  const Scalar _tmp349 =
      -_tmp113 * (-_tmp103 * _tmp321 + _tmp106 * _tmp320 + _tmp109 * _tmp322 - _tmp31 * _tmp320) -
      _tmp141 * (_tmp127 * _tmp330 - _tmp128 * _tmp330 - _tmp130 * _tmp321 + _tmp132 * _tmp322) -
      _tmp174 * (-_tmp108 * _tmp348 + _tmp152 * _tmp323 + _tmp169 * _tmp347 + _tmp170 * _tmp346 -
                 _tmp31 * _tmp340) -
      _tmp196 * (-_tmp108 * _tmp324 + _tmp169 * _tmp339 + _tmp170 * _tmp338 + _tmp180 * _tmp323 -
                 _tmp182 * _tmp319);
  const Scalar _tmp350 = _tmp231 * _tmp349;
  const Scalar _tmp351 = _tmp244 * (-_tmp103 * _tmp316 + _tmp320 * _tmp96);
  const Scalar _tmp352 = _tmp102 * _tmp316;
  const Scalar _tmp353 = -_tmp179 * _tmp352 - _tmp205 * _tmp338 + _tmp206 * _tmp326 -
                         _tmp206 * _tmp332 + _tmp206 * _tmp337 + _tmp238 * _tmp319 - _tmp333 +
                         _tmp334;
  const Scalar _tmp354 = -_tmp150 * _tmp352 - _tmp205 * _tmp346 + _tmp206 * _tmp341 -
                         _tmp206 * _tmp342 + _tmp206 * _tmp345 + _tmp340 * _tmp96 + _tmp343;
  const Scalar _tmp355 = _tmp204 * _tmp325;
  const Scalar _tmp356 = _tmp204 * _tmp331;
  const Scalar _tmp357 =
      -_tmp130 * _tmp316 + _tmp201 * _tmp355 - _tmp201 * _tmp356 + _tmp241 * _tmp330;
  const Scalar _tmp358 = _tmp234 * (_tmp199 * (_tmp209 * (_tmp204 * _tmp326 - _tmp204 * _tmp332 +
                                                          _tmp204 * _tmp337 - _tmp208 * _tmp353) +
                                               _tmp214 * (_tmp204 * _tmp341 - _tmp204 * _tmp342 +
                                                          _tmp204 * _tmp345 - _tmp208 * _tmp354) +
                                               _tmp222 * (-_tmp208 * _tmp357 + _tmp355 - _tmp356) -
                                               Scalar(1.0) * _tmp351) -
                                    _tmp246 * _tmp349);
  const Scalar _tmp359 = _tmp110 * _tmp320;
  const Scalar _tmp360 = -_tmp173 * _tmp348 - _tmp195 * _tmp324 + _tmp256 * _tmp322 +
                         _tmp257 * _tmp322 + _tmp258 * _tmp347 + _tmp259 * _tmp339 +
                         _tmp272 * _tmp330 + _tmp359 * _tmp80;
  const Scalar _tmp361 = Scalar(1.4083112389913199) * _tmp360;
  const Scalar _tmp362 =
      _tmp261 * (_tmp250 * _tmp357 + _tmp253 * _tmp354 + _tmp254 * _tmp353 + _tmp351) -
      _tmp279 * _tmp360;
  const Scalar _tmp363 = -_tmp173 * _tmp340 - _tmp222 * _tmp330 + _tmp287 * _tmp346 +
                         _tmp288 * _tmp338 - _tmp289 * _tmp319 - _tmp359;
  const Scalar _tmp364 =
      _tmp305 *
      (_tmp295 * (-_tmp140 * _tmp355 + _tmp140 * _tmp356 - _tmp291 * _tmp326 + _tmp291 * _tmp332 -
                  _tmp291 * _tmp337 - _tmp292 * _tmp341 + _tmp292 * _tmp342 - _tmp292 * _tmp345) -
       _tmp306 * _tmp363);
  const Scalar _tmp365 = _tmp310 * _tmp363;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp197 * _tmp229 -
      _tmp248 *
          (-_tmp232 * p_b(2, 0) + _tmp233 * _tmp247 -
           _tmp249 * (_tmp200 * (-_tmp197 * _tmp225 - _tmp247 * _tmp248) - _tmp226 * _tmp232));
  _res(2, 0) =
      -_tmp268 *
          (-_tmp274 * _tmp278 + _tmp280 * _tmp282 -
           _tmp286 * (_tmp264 * (-_tmp262 * _tmp275 - _tmp266 * _tmp285 - _tmp280 * _tmp284) -
                      _tmp274 * _tmp283)) -
      _tmp271 * _tmp275;
  _res(3, 0) =
      -_tmp290 * _tmp302 -
      _tmp299 *
          (_tmp303 * _tmp307 -
           _tmp308 * (_tmp298 * (-_tmp290 * _tmp309 - _tmp299 * _tmp307) - _tmp300 * _tmp311) -
           _tmp311 * p_c(2, 0));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp229 * _tmp349 -
      _tmp248 *
          (_tmp233 * _tmp358 -
           _tmp249 * (_tmp200 * (-_tmp225 * _tmp349 - _tmp248 * _tmp358) - _tmp226 * _tmp350) -
           _tmp350 * p_b(2, 0));
  _res(2, 1) =
      -_tmp268 *
          (-_tmp278 * _tmp360 + _tmp282 * _tmp362 -
           _tmp286 * (_tmp264 * (-_tmp262 * _tmp361 - _tmp265 * _tmp285 - _tmp284 * _tmp362) -
                      _tmp283 * _tmp360)) -
      _tmp271 * _tmp361;
  _res(3, 1) =
      -_tmp299 *
          (_tmp303 * _tmp364 -
           _tmp308 * (_tmp298 * (-_tmp299 * _tmp364 - _tmp309 * _tmp363) - _tmp300 * _tmp365) -
           _tmp365 * p_c(2, 0)) -
      _tmp302 * _tmp363;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = Scalar(-1.0);
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
