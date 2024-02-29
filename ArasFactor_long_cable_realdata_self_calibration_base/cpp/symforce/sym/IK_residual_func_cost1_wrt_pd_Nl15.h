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
 * Symbolic function: IK_residual_func_cost1_wrt_pd_Nl15
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPdNl15(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1161

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (366)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp0 * _tmp6;
  const Scalar _tmp8 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = 2 * _tmp2;
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 = _tmp10 + _tmp7;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = _tmp6 * _tmp9;
  const Scalar _tmp14 = 2 * _tmp8;
  const Scalar _tmp15 = _tmp0 * _tmp14;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp12 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp5;
  const Scalar _tmp19 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp20 = _tmp19 - p_d(0, 0);
  const Scalar _tmp21 = _tmp0 * _tmp9;
  const Scalar _tmp22 = _tmp14 * _tmp6;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp25 =
      -Scalar(0.010999999999999999) * _tmp24 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp26 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp23 + _tmp27;
  const Scalar _tmp29 = std::pow(_tmp20, Scalar(2));
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp24 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp31 = _tmp21 - _tmp22;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp31;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp34 = _tmp32 - _tmp33;
  const Scalar _tmp35 = _tmp30 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp37 = _tmp36 - p_d(1, 0);
  const Scalar _tmp38 = std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 = _tmp29 + _tmp38;
  const Scalar _tmp40 = std::pow(_tmp39, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp28 * _tmp40;
  const Scalar _tmp42 = -_tmp23;
  const Scalar _tmp43 = _tmp25 + _tmp26;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp40 * _tmp44;
  const Scalar _tmp46 = _tmp20 * _tmp45;
  const Scalar _tmp47 = -_tmp20 * _tmp41 + _tmp46;
  const Scalar _tmp48 = _tmp12 - _tmp16;
  const Scalar _tmp49 = _tmp4 + _tmp48;
  const Scalar _tmp50 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 - p_b(0, 0);
  const Scalar _tmp52 = Scalar(1.0) / (_tmp51);
  const Scalar _tmp53 = -_tmp30;
  const Scalar _tmp54 = _tmp32 + _tmp33;
  const Scalar _tmp55 = _tmp53 + _tmp54;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 - p_b(1, 0);
  const Scalar _tmp58 = _tmp52 * _tmp57;
  const Scalar _tmp59 = _tmp40 * _tmp58;
  const Scalar _tmp60 = _tmp37 * _tmp40;
  const Scalar _tmp61 = _tmp20 * _tmp59 - _tmp60;
  const Scalar _tmp62 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp63 = _tmp48 + _tmp5;
  const Scalar _tmp64 = _tmp63 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 - p_a(0, 0);
  const Scalar _tmp66 = _tmp34 + _tmp53;
  const Scalar _tmp67 = _tmp66 + position_vector(1, 0);
  const Scalar _tmp68 = _tmp67 - p_a(1, 0);
  const Scalar _tmp69 = std::pow(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp68, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp70 = _tmp65 * _tmp69;
  const Scalar _tmp71 = _tmp68 * _tmp69;
  const Scalar _tmp72 = _tmp58 * _tmp70 - _tmp71;
  const Scalar _tmp73 = _tmp62 * _tmp72;
  const Scalar _tmp74 = _tmp27 + _tmp42;
  const Scalar _tmp75 = _tmp44 * _tmp58;
  const Scalar _tmp76 = _tmp28 * _tmp60 - _tmp46 * _tmp58;
  const Scalar _tmp77 = -_tmp70 * _tmp75 + _tmp71 * _tmp74 - _tmp73 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) * _tmp55;
  const Scalar _tmp79 = -_tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp35 + _tmp79);
  const Scalar _tmp81 = Scalar(1.0) * _tmp49;
  const Scalar _tmp82 = -_tmp18 + _tmp81;
  const Scalar _tmp83 = _tmp80 * _tmp82;
  const Scalar _tmp84 = _tmp44 * _tmp70 - _tmp47 * _tmp73 - _tmp70 * _tmp74 - _tmp77 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp84);
  const Scalar _tmp86 = _tmp78 * _tmp83 + _tmp81;
  const Scalar _tmp87 = 0;
  const Scalar _tmp88 = _tmp85 * _tmp87;
  const Scalar _tmp89 = _tmp40 * _tmp73;
  const Scalar _tmp90 = std::pow(_tmp39, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp91 = _tmp29 * _tmp90;
  const Scalar _tmp92 = -_tmp28 * _tmp91 + _tmp41 + _tmp44 * _tmp91 - _tmp45;
  const Scalar _tmp93 = _tmp20 * _tmp37 * _tmp90;
  const Scalar _tmp94 = _tmp58 * _tmp91 - _tmp59 - _tmp93;
  const Scalar _tmp95 = std::pow(_tmp61, Scalar(-2));
  const Scalar _tmp96 = _tmp72 * _tmp95;
  const Scalar _tmp97 = _tmp94 * _tmp96;
  const Scalar _tmp98 = _tmp28 * _tmp93;
  const Scalar _tmp99 = _tmp45 * _tmp58 - _tmp75 * _tmp91 + _tmp98;
  const Scalar _tmp100 = -_tmp73 * _tmp99 + _tmp76 * _tmp97;
  const Scalar _tmp101 = -_tmp100 * _tmp83 + _tmp47 * _tmp97 - _tmp73 * _tmp92;
  const Scalar _tmp102 = std::pow(_tmp84, Scalar(-2));
  const Scalar _tmp103 = _tmp101 * _tmp102;
  const Scalar _tmp104 = _tmp103 * _tmp87;
  const Scalar _tmp105 = _tmp20 * _tmp40;
  const Scalar _tmp106 = _tmp105 * _tmp73;
  const Scalar _tmp107 = _tmp73 * _tmp91;
  const Scalar _tmp108 = _tmp94 * _tmp95;
  const Scalar _tmp109 = _tmp72 * _tmp85;
  const Scalar _tmp110 = _tmp109 * _tmp87;
  const Scalar _tmp111 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp112 =
      std::sqrt(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp113 = _tmp112 * _tmp52;
  const Scalar _tmp114 = _tmp111 * _tmp113;
  const Scalar _tmp115 = _tmp18 * _tmp40;
  const Scalar _tmp116 = _tmp35 * _tmp40;
  const Scalar _tmp117 = Scalar(1.0) / (_tmp112);
  const Scalar _tmp118 = _tmp113 * (_tmp117 * _tmp49 * _tmp57 - _tmp117 * _tmp51 * _tmp55);
  const Scalar _tmp119 = _tmp118 * _tmp40;
  const Scalar _tmp120 = -_tmp115 * _tmp37 + _tmp116 * _tmp20 + _tmp119 * _tmp20;
  const Scalar _tmp121 = _tmp118 * _tmp70 - _tmp120 * _tmp73 - _tmp63 * _tmp71 + _tmp66 * _tmp70;
  const Scalar _tmp122 = Scalar(1.0) / (_tmp121);
  const Scalar _tmp123 = Scalar(1.0) * _tmp122;
  const Scalar _tmp124 = -_tmp116 + _tmp118 * _tmp91 - _tmp119 - _tmp18 * _tmp93 + _tmp35 * _tmp91;
  const Scalar _tmp125 = _tmp120 * _tmp97 - _tmp124 * _tmp73;
  const Scalar _tmp126 = std::pow(_tmp121, Scalar(-2));
  const Scalar _tmp127 = _tmp125 * _tmp126;
  const Scalar _tmp128 = Scalar(1.0) * _tmp70;
  const Scalar _tmp129 = Scalar(1.0) * _tmp106;
  const Scalar _tmp130 = _tmp105 * _tmp123;
  const Scalar _tmp131 = _tmp30 + _tmp54;
  const Scalar _tmp132 = _tmp17 + _tmp4;
  const Scalar _tmp133 = _tmp132 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp134 = _tmp131 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp135 =
      std::pow(Scalar(std::pow(_tmp133, Scalar(2)) + std::pow(_tmp134, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp136 = _tmp133 * _tmp135;
  const Scalar _tmp137 = _tmp134 * _tmp135;
  const Scalar _tmp138 = fh1 * (-_tmp131 * _tmp136 + _tmp132 * _tmp137);
  const Scalar _tmp139 = _tmp113 * _tmp138;
  const Scalar _tmp140 = Scalar(1.0) * _tmp62;
  const Scalar _tmp141 = Scalar(1.0) * _tmp80;
  const Scalar _tmp142 = _tmp141 * _tmp82;
  const Scalar _tmp143 = _tmp142 * _tmp62;
  const Scalar _tmp144 = -_tmp140 * _tmp47 + _tmp143 * _tmp76;
  const Scalar _tmp145 = _tmp121 * _tmp85;
  const Scalar _tmp146 = -_tmp120 * _tmp140 - _tmp144 * _tmp145;
  const Scalar _tmp147 = _tmp122 * _tmp84;
  const Scalar _tmp148 = _tmp146 * _tmp147;
  const Scalar _tmp149 = _tmp144 + _tmp148;
  const Scalar _tmp150 = -_tmp109 * _tmp149 + Scalar(1.0);
  const Scalar _tmp151 = _tmp62 * _tmp91;
  const Scalar _tmp152 = _tmp101 * _tmp122;
  const Scalar _tmp153 = _tmp146 * _tmp152;
  const Scalar _tmp154 = _tmp127 * _tmp84;
  const Scalar _tmp155 = _tmp146 * _tmp154;
  const Scalar _tmp156 = Scalar(1.0) * _tmp95;
  const Scalar _tmp157 = _tmp156 * _tmp94;
  const Scalar _tmp158 =
      -_tmp108 * _tmp142 * _tmp76 - _tmp140 * _tmp92 + _tmp143 * _tmp99 + _tmp157 * _tmp47;
  const Scalar _tmp159 = _tmp125 * _tmp85;
  const Scalar _tmp160 = _tmp121 * _tmp144;
  const Scalar _tmp161 = _tmp147 * (_tmp103 * _tmp160 + _tmp120 * _tmp157 - _tmp124 * _tmp140 -
                                    _tmp144 * _tmp159 - _tmp145 * _tmp158);
  const Scalar _tmp162 = _tmp153 - _tmp155 + _tmp158 + _tmp161;
  const Scalar _tmp163 = _tmp70 * _tmp85;
  const Scalar _tmp164 = _tmp40 * _tmp62;
  const Scalar _tmp165 = _tmp150 * _tmp164;
  const Scalar _tmp166 = _tmp149 * _tmp72;
  const Scalar _tmp167 = _tmp103 * _tmp166 - _tmp109 * _tmp162;
  const Scalar _tmp168 = _tmp164 * _tmp20;
  const Scalar _tmp169 = _tmp108 * _tmp150;
  const Scalar _tmp170 = _tmp149 * _tmp70;
  const Scalar _tmp171 = _tmp137 * fh1;
  const Scalar _tmp172 = _tmp113 * _tmp171;
  const Scalar _tmp173 = _tmp58 * _tmp62;
  const Scalar _tmp174 = _tmp173 * _tmp76 + _tmp75;
  const Scalar _tmp175 = _tmp173 * _tmp47 - _tmp174 * _tmp83 - _tmp44;
  const Scalar _tmp176 = -_tmp118 + _tmp120 * _tmp173 - _tmp145 * _tmp175;
  const Scalar _tmp177 = _tmp152 * _tmp176;
  const Scalar _tmp178 = _tmp154 * _tmp176;
  const Scalar _tmp179 = _tmp121 * _tmp175;
  const Scalar _tmp180 = _tmp58 * _tmp95;
  const Scalar _tmp181 = _tmp180 * _tmp94;
  const Scalar _tmp182 = _tmp173 * _tmp99 - _tmp181 * _tmp76;
  const Scalar _tmp183 = _tmp173 * _tmp92 - _tmp181 * _tmp47 - _tmp182 * _tmp83;
  const Scalar _tmp184 = _tmp147 * (_tmp103 * _tmp179 - _tmp120 * _tmp181 + _tmp124 * _tmp173 -
                                    _tmp145 * _tmp183 - _tmp159 * _tmp175);
  const Scalar _tmp185 = _tmp177 - _tmp178 + _tmp183 + _tmp184;
  const Scalar _tmp186 = _tmp147 * _tmp176;
  const Scalar _tmp187 = _tmp175 + _tmp186;
  const Scalar _tmp188 = _tmp187 * _tmp72;
  const Scalar _tmp189 = _tmp103 * _tmp188 - _tmp109 * _tmp185;
  const Scalar _tmp190 = _tmp187 * _tmp70;
  const Scalar _tmp191 = -_tmp109 * _tmp187 - _tmp58;
  const Scalar _tmp192 = _tmp164 * _tmp191;
  const Scalar _tmp193 = _tmp108 * _tmp191;
  const Scalar _tmp194 = _tmp136 * fh1;
  const Scalar _tmp195 = _tmp113 * _tmp194;
  const Scalar _tmp196 =
      -_tmp114 * (_tmp104 * _tmp106 - _tmp104 * _tmp70 + _tmp105 * _tmp108 * _tmp110 -
                  _tmp107 * _tmp88 + _tmp88 * _tmp89) -
      _tmp139 * (-_tmp107 * _tmp123 + _tmp123 * _tmp89 - _tmp127 * _tmp128 + _tmp127 * _tmp129 +
                 _tmp130 * _tmp97) -
      _tmp172 * (-_tmp103 * _tmp170 - _tmp105 * _tmp169 + _tmp150 * _tmp151 + _tmp162 * _tmp163 -
                 _tmp165 + _tmp167 * _tmp168) -
      _tmp195 * (-_tmp103 * _tmp190 - _tmp105 * _tmp193 + _tmp151 * _tmp191 + _tmp163 * _tmp185 +
                 _tmp168 * _tmp189 - _tmp192);
  const Scalar _tmp197 = _tmp149 * _tmp85;
  const Scalar _tmp198 = _tmp187 * _tmp85;
  const Scalar _tmp199 = -_tmp114 * (-_tmp106 * _tmp88 + _tmp70 * _tmp88) -
                         _tmp139 * (-_tmp106 * _tmp123 + _tmp123 * _tmp70) -
                         _tmp172 * (_tmp165 * _tmp20 + _tmp197 * _tmp70) -
                         _tmp195 * (_tmp192 * _tmp20 + _tmp198 * _tmp70 + Scalar(1.0));
  const Scalar _tmp200 = Scalar(1.0) / (_tmp199);
  const Scalar _tmp201 = Scalar(0.71007031138673404) * _tmp200;
  const Scalar _tmp202 = _tmp66 + _tmp79;
  const Scalar _tmp203 = _tmp202 * _tmp83;
  const Scalar _tmp204 = Scalar(1.0) / (-_tmp203 - _tmp63 + _tmp81);
  const Scalar _tmp205 = Scalar(1.0) * _tmp204;
  const Scalar _tmp206 = _tmp204 * _tmp86;
  const Scalar _tmp207 = -_tmp202 * _tmp206 - _tmp77 * _tmp88 + _tmp79;
  const Scalar _tmp208 = Scalar(1.0) * _tmp111;
  const Scalar _tmp209 = _tmp147 * _tmp205;
  const Scalar _tmp210 = -_tmp123 * _tmp77 + _tmp202 * _tmp209;
  const Scalar _tmp211 = Scalar(1.0) * _tmp138;
  const Scalar _tmp212 = _tmp77 * _tmp85;
  const Scalar _tmp213 = _tmp202 * _tmp204;
  const Scalar _tmp214 = _tmp174 + _tmp186 * _tmp213 - _tmp187 * _tmp212;
  const Scalar _tmp215 = Scalar(1.0) * _tmp194;
  const Scalar _tmp216 = -_tmp140 * _tmp76 + _tmp148 * _tmp213 - _tmp149 * _tmp212;
  const Scalar _tmp217 = Scalar(1.0) * _tmp171;
  const Scalar _tmp218 = fh1 * (_tmp23 + _tmp43);
  const Scalar _tmp219 = -_tmp131 * fv1 - _tmp137 * _tmp218 - Scalar(40.024799999999999) * _tmp31;
  const Scalar _tmp220 = _tmp203 * _tmp205 + Scalar(1.0);
  const Scalar _tmp221 = Scalar(40.024799999999999) * _tmp11 + _tmp132 * fv1 + _tmp136 * _tmp218;
  const Scalar _tmp222 = _tmp202 * _tmp80;
  const Scalar _tmp223 = _tmp208 * (-_tmp141 * _tmp207 - _tmp205 * _tmp86 + Scalar(1.0)) +
                         _tmp211 * (-_tmp141 * _tmp210 + _tmp209) +
                         _tmp215 * (-_tmp141 * _tmp214 + _tmp186 * _tmp205) +
                         _tmp217 * (-_tmp141 * _tmp216 + _tmp148 * _tmp205) +
                         Scalar(1.0) * _tmp219 * (-_tmp141 * _tmp220 + _tmp205 * _tmp83) +
                         Scalar(1.0) * _tmp221 * (_tmp205 * _tmp222 - _tmp205);
  const Scalar _tmp224 = std::asinh(_tmp200 * _tmp223);
  const Scalar _tmp225 = Scalar(1.4083112389913199) * _tmp199;
  const Scalar _tmp226 =
      -_tmp224 * _tmp225 - std::sqrt(Scalar(std::pow(Scalar(-_tmp50 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp56 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp227 = _tmp201 * _tmp226;
  const Scalar _tmp228 = Scalar(1.0) * _tmp224;
  const Scalar _tmp229 = Scalar(1.4083112389913199) * _tmp201 * p_b(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp227) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp228);
  const Scalar _tmp230 = std::pow(_tmp199, Scalar(-2));
  const Scalar _tmp231 = Scalar(0.71007031138673404) * _tmp230;
  const Scalar _tmp232 = _tmp231 * p_b(2, 0);
  const Scalar _tmp233 = _tmp226 * _tmp231;
  const Scalar _tmp234 = -_tmp100 * _tmp88 + _tmp104 * _tmp77;
  const Scalar _tmp235 = _tmp208 * _tmp80;
  const Scalar _tmp236 = _tmp154 * _tmp205;
  const Scalar _tmp237 = _tmp152 * _tmp205;
  const Scalar _tmp238 = Scalar(1.0) * _tmp77;
  const Scalar _tmp239 =
      -_tmp100 * _tmp123 + _tmp127 * _tmp238 - _tmp202 * _tmp236 + _tmp202 * _tmp237;
  const Scalar _tmp240 = _tmp103 * _tmp77;
  const Scalar _tmp241 = -_tmp100 * _tmp197 - _tmp140 * _tmp99 + _tmp149 * _tmp240 +
                         _tmp153 * _tmp213 - _tmp155 * _tmp213 + _tmp157 * _tmp76 +
                         _tmp161 * _tmp213 - _tmp162 * _tmp212;
  const Scalar _tmp242 = -_tmp100 * _tmp198 + _tmp177 * _tmp213 - _tmp178 * _tmp213 + _tmp182 +
                         _tmp184 * _tmp213 - _tmp185 * _tmp212 + _tmp187 * _tmp240;
  const Scalar _tmp243 = _tmp223 * _tmp230;
  const Scalar _tmp244 =
      std::pow(Scalar(std::pow(_tmp223, Scalar(2)) * _tmp230 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp245 = _tmp244 * (-_tmp196 * _tmp243 +
                                    _tmp200 * (_tmp211 * (-_tmp141 * _tmp239 - _tmp236 + _tmp237) +
                                               _tmp215 * (-_tmp141 * _tmp242 + _tmp177 * _tmp205 -
                                                          _tmp178 * _tmp205 + _tmp184 * _tmp205) +
                                               _tmp217 * (-_tmp141 * _tmp241 + _tmp153 * _tmp205 -
                                                          _tmp155 * _tmp205 + _tmp161 * _tmp205) -
                                               _tmp234 * _tmp235));
  const Scalar _tmp246 = Scalar(1.4083112389913199) * _tmp224;
  const Scalar _tmp247 = std::sinh(_tmp227);
  const Scalar _tmp248 = Scalar(1.0) * std::sinh(_tmp228);
  const Scalar _tmp249 = _tmp171 * _tmp62;
  const Scalar _tmp250 = _tmp104 * _tmp111;
  const Scalar _tmp251 = _tmp127 * _tmp211;
  const Scalar _tmp252 = _tmp110 * _tmp111;
  const Scalar _tmp253 = _tmp123 * _tmp138;
  const Scalar _tmp254 = _tmp194 * _tmp62;
  const Scalar _tmp255 = _tmp108 * _tmp252 + _tmp167 * _tmp249 - _tmp169 * _tmp171 +
                         _tmp189 * _tmp254 - _tmp193 * _tmp194 + _tmp250 * _tmp73 +
                         _tmp251 * _tmp73 + _tmp253 * _tmp97;
  const Scalar _tmp256 = _tmp111 * _tmp88;
  const Scalar _tmp257 =
      _tmp150 * _tmp249 + _tmp191 * _tmp254 - _tmp253 * _tmp73 - _tmp256 * _tmp73;
  const Scalar _tmp258 = std::pow(_tmp257, Scalar(-2));
  const Scalar _tmp259 = Scalar(0.71007031138673404) * _tmp258;
  const Scalar _tmp260 = _tmp255 * _tmp259;
  const Scalar _tmp261 = _tmp194 * _tmp80;
  const Scalar _tmp262 = _tmp171 * _tmp80;
  const Scalar _tmp263 = _tmp219 * _tmp80;
  const Scalar _tmp264 = _tmp111 * _tmp80;
  const Scalar _tmp265 = _tmp138 * _tmp80;
  const Scalar _tmp266 = _tmp205 * _tmp221;
  const Scalar _tmp267 = _tmp207 * _tmp264 + _tmp210 * _tmp265 + _tmp214 * _tmp261 +
                         _tmp216 * _tmp262 + _tmp220 * _tmp263 - _tmp222 * _tmp266;
  const Scalar _tmp268 = _tmp258 * _tmp267;
  const Scalar _tmp269 = Scalar(1.0) / (_tmp257);
  const Scalar _tmp270 =
      std::pow(Scalar(_tmp258 * std::pow(_tmp267, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp271 =
      _tmp270 * (-_tmp255 * _tmp268 + _tmp269 * (_tmp234 * _tmp264 + _tmp239 * _tmp265 +
                                                 _tmp241 * _tmp262 + _tmp242 * _tmp261));
  const Scalar _tmp272 = std::asinh(_tmp267 * _tmp269);
  const Scalar _tmp273 = Scalar(1.0) * _tmp272;
  const Scalar _tmp274 = Scalar(1.0) * std::sinh(_tmp273);
  const Scalar _tmp275 = -_tmp36 + p_d(1, 0);
  const Scalar _tmp276 = -_tmp19 + p_d(0, 0);
  const Scalar _tmp277 =
      std::sqrt(Scalar(std::pow(_tmp275, Scalar(2)) + std::pow(_tmp276, Scalar(2))));
  const Scalar _tmp278 = Scalar(1.4083112389913199) * _tmp272;
  const Scalar _tmp279 = -_tmp257 * _tmp278 - _tmp277;
  const Scalar _tmp280 = Scalar(0.71007031138673404) * _tmp269;
  const Scalar _tmp281 = _tmp279 * _tmp280;
  const Scalar _tmp282 = std::sinh(_tmp281);
  const Scalar _tmp283 = Scalar(1.0) / (_tmp277);
  const Scalar _tmp284 = Scalar(1.4083112389913199) * _tmp257;
  const Scalar _tmp285 = _tmp280 * p_d(2, 0) + std::cosh(_tmp273) - std::cosh(_tmp281);
  const Scalar _tmp286 = _tmp171 * _tmp85;
  const Scalar _tmp287 = _tmp187 * _tmp194;
  const Scalar _tmp288 = _tmp149 * _tmp171;
  const Scalar _tmp289 = _tmp194 * _tmp85;
  const Scalar _tmp290 = -_tmp103 * _tmp287 - _tmp103 * _tmp288 + _tmp162 * _tmp286 +
                         _tmp185 * _tmp289 - _tmp250 - _tmp251;
  const Scalar _tmp291 = _tmp171 * _tmp197 + _tmp194 * _tmp198 + _tmp253 + _tmp256;
  const Scalar _tmp292 = Scalar(1.0) / (_tmp291);
  const Scalar _tmp293 = _tmp171 * _tmp204;
  const Scalar _tmp294 = _tmp194 * _tmp204;
  const Scalar _tmp295 = _tmp111 * _tmp206 - _tmp138 * _tmp209 - _tmp148 * _tmp293 -
                         _tmp186 * _tmp294 - _tmp205 * _tmp263 * _tmp82 + _tmp266;
  const Scalar _tmp296 = std::asinh(_tmp292 * _tmp295);
  const Scalar _tmp297 = Scalar(1.0) * _tmp296;
  const Scalar _tmp298 = Scalar(0.71007031138673404) * _tmp292;
  const Scalar _tmp299 = Scalar(1.4083112389913199) * _tmp296;
  const Scalar _tmp300 =
      -_tmp291 * _tmp299 - std::sqrt(Scalar(std::pow(Scalar(-_tmp64 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp67 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp301 = _tmp298 * _tmp300;
  const Scalar _tmp302 = Scalar(1.4083112389913199) * _tmp298 * p_a(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp297) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp301);
  const Scalar _tmp303 = std::pow(_tmp291, Scalar(-2));
  const Scalar _tmp304 = _tmp295 * _tmp303;
  const Scalar _tmp305 =
      -_tmp290 * _tmp304 +
      _tmp292 * (_tmp138 * _tmp236 - _tmp138 * _tmp237 - _tmp153 * _tmp293 + _tmp155 * _tmp293 -
                 _tmp161 * _tmp293 - _tmp177 * _tmp294 + _tmp178 * _tmp294 - _tmp184 * _tmp294);
  const Scalar _tmp306 =
      std::pow(Scalar(std::pow(_tmp295, Scalar(2)) * _tmp303 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp307 = Scalar(1.0) * _tmp306 * std::sinh(_tmp297);
  const Scalar _tmp308 = Scalar(1.4083112389913199) * _tmp291;
  const Scalar _tmp309 = _tmp306 * _tmp308;
  const Scalar _tmp310 = Scalar(0.71007031138673404) * _tmp303;
  const Scalar _tmp311 = _tmp290 * _tmp310;
  const Scalar _tmp312 = std::sinh(_tmp301);
  const Scalar _tmp313 = _tmp38 * _tmp90;
  const Scalar _tmp314 = -_tmp313 + _tmp40 + _tmp58 * _tmp93;
  const Scalar _tmp315 = _tmp120 * _tmp314;
  const Scalar _tmp316 = _tmp115 + _tmp118 * _tmp93 - _tmp18 * _tmp313 + _tmp35 * _tmp93;
  const Scalar _tmp317 = _tmp315 * _tmp96 - _tmp316 * _tmp73;
  const Scalar _tmp318 = _tmp126 * _tmp317;
  const Scalar _tmp319 = _tmp73 * _tmp93;
  const Scalar _tmp320 = _tmp314 * _tmp96;
  const Scalar _tmp321 = _tmp314 * _tmp95;
  const Scalar _tmp322 = _tmp105 * _tmp321;
  const Scalar _tmp323 = _tmp318 * _tmp84;
  const Scalar _tmp324 = _tmp176 * _tmp323;
  const Scalar _tmp325 = _tmp44 * _tmp93 - _tmp98;
  const Scalar _tmp326 = _tmp314 * _tmp76;
  const Scalar _tmp327 = _tmp28 * _tmp313 - _tmp41 - _tmp75 * _tmp93;
  const Scalar _tmp328 = _tmp173 * _tmp327 - _tmp180 * _tmp326;
  const Scalar _tmp329 = _tmp314 * _tmp47;
  const Scalar _tmp330 = _tmp173 * _tmp325 - _tmp180 * _tmp329 - _tmp328 * _tmp83;
  const Scalar _tmp331 = _tmp317 * _tmp85;
  const Scalar _tmp332 = _tmp326 * _tmp96 - _tmp327 * _tmp73;
  const Scalar _tmp333 = -_tmp325 * _tmp73 + _tmp329 * _tmp96 - _tmp332 * _tmp83;
  const Scalar _tmp334 = _tmp102 * _tmp333;
  const Scalar _tmp335 = _tmp147 * (-_tmp145 * _tmp330 + _tmp173 * _tmp316 - _tmp175 * _tmp331 +
                                    _tmp179 * _tmp334 - _tmp180 * _tmp315);
  const Scalar _tmp336 = _tmp122 * _tmp333;
  const Scalar _tmp337 = _tmp176 * _tmp336;
  const Scalar _tmp338 = -_tmp324 + _tmp330 + _tmp335 + _tmp337;
  const Scalar _tmp339 = _tmp62 * _tmp93;
  const Scalar _tmp340 = -_tmp109 * _tmp338 + _tmp188 * _tmp334;
  const Scalar _tmp341 = _tmp146 * _tmp323;
  const Scalar _tmp342 = _tmp146 * _tmp336;
  const Scalar _tmp343 =
      -_tmp140 * _tmp325 - _tmp142 * _tmp326 * _tmp95 + _tmp143 * _tmp327 + _tmp156 * _tmp329;
  const Scalar _tmp344 = _tmp147 * (-_tmp140 * _tmp316 - _tmp144 * _tmp331 - _tmp145 * _tmp343 +
                                    _tmp156 * _tmp315 + _tmp160 * _tmp334);
  const Scalar _tmp345 = -_tmp341 + _tmp342 + _tmp343 + _tmp344;
  const Scalar _tmp346 = -_tmp109 * _tmp345 + _tmp166 * _tmp334;
  const Scalar _tmp347 = _tmp334 * _tmp87;
  const Scalar _tmp348 =
      -_tmp114 * (_tmp106 * _tmp347 + _tmp110 * _tmp322 - _tmp319 * _tmp88 - _tmp347 * _tmp70) -
      _tmp139 * (-_tmp123 * _tmp319 - _tmp128 * _tmp318 + _tmp129 * _tmp318 + _tmp130 * _tmp320) -
      _tmp172 * (-_tmp150 * _tmp322 + _tmp150 * _tmp339 + _tmp163 * _tmp345 + _tmp168 * _tmp346 -
                 _tmp170 * _tmp334) -
      _tmp195 * (_tmp163 * _tmp338 + _tmp168 * _tmp340 - _tmp190 * _tmp334 - _tmp191 * _tmp322 +
                 _tmp191 * _tmp339);
  const Scalar _tmp349 = _tmp205 * _tmp336;
  const Scalar _tmp350 = _tmp205 * _tmp323;
  const Scalar _tmp351 =
      -_tmp123 * _tmp332 + _tmp202 * _tmp349 - _tmp202 * _tmp350 + _tmp238 * _tmp318;
  const Scalar _tmp352 = _tmp334 * _tmp77;
  const Scalar _tmp353 = -_tmp332 * _tmp88 + _tmp352 * _tmp87;
  const Scalar _tmp354 = _tmp187 * _tmp352 - _tmp198 * _tmp332 - _tmp212 * _tmp338 -
                         _tmp213 * _tmp324 + _tmp213 * _tmp335 + _tmp213 * _tmp337 + _tmp328;
  const Scalar _tmp355 = -_tmp140 * _tmp327 + _tmp149 * _tmp352 + _tmp156 * _tmp326 -
                         _tmp197 * _tmp332 - _tmp212 * _tmp345 - _tmp213 * _tmp341 +
                         _tmp213 * _tmp342 + _tmp213 * _tmp344;
  const Scalar _tmp356 = _tmp244 * (_tmp200 * (_tmp211 * (-_tmp141 * _tmp351 + _tmp349 - _tmp350) +
                                               _tmp215 * (-_tmp141 * _tmp354 - _tmp205 * _tmp324 +
                                                          _tmp205 * _tmp335 + _tmp205 * _tmp337) +
                                               _tmp217 * (-_tmp141 * _tmp355 - _tmp205 * _tmp341 +
                                                          _tmp205 * _tmp342 + _tmp205 * _tmp344) -
                                               _tmp235 * _tmp353) -
                                    _tmp243 * _tmp348);
  const Scalar _tmp357 = _tmp111 * _tmp347;
  const Scalar _tmp358 = _tmp211 * _tmp318;
  const Scalar _tmp359 = -_tmp150 * _tmp171 * _tmp321 - _tmp191 * _tmp194 * _tmp321 +
                         _tmp249 * _tmp346 + _tmp252 * _tmp321 + _tmp253 * _tmp320 +
                         _tmp254 * _tmp340 + _tmp357 * _tmp73 + _tmp358 * _tmp73;
  const Scalar _tmp360 =
      _tmp270 * (-_tmp268 * _tmp359 + _tmp269 * (_tmp261 * _tmp354 + _tmp262 * _tmp355 +
                                                 _tmp264 * _tmp353 + _tmp265 * _tmp351));
  const Scalar _tmp361 = _tmp259 * _tmp359;
  const Scalar _tmp362 = Scalar(1.4083112389913199) * _tmp359;
  const Scalar _tmp363 = _tmp286 * _tmp345 - _tmp287 * _tmp334 - _tmp288 * _tmp334 +
                         _tmp289 * _tmp338 - _tmp357 - _tmp358;
  const Scalar _tmp364 =
      _tmp292 * (-_tmp138 * _tmp349 + _tmp138 * _tmp350 + _tmp293 * _tmp341 - _tmp293 * _tmp342 -
                 _tmp293 * _tmp344 + _tmp294 * _tmp324 - _tmp294 * _tmp335 - _tmp294 * _tmp337) -
      _tmp304 * _tmp363;
  const Scalar _tmp365 = _tmp310 * _tmp363;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp196 * _tmp229 -
      _tmp225 *
          (-_tmp196 * _tmp232 + _tmp245 * _tmp248 -
           _tmp247 * (-_tmp196 * _tmp233 + _tmp201 * (-_tmp196 * _tmp246 - _tmp225 * _tmp245)));
  _res(2, 0) =
      -Scalar(1.4083112389913199) * _tmp255 * _tmp285 -
      _tmp284 * (-_tmp260 * p_d(2, 0) + _tmp271 * _tmp274 -
                 _tmp282 * (-_tmp260 * _tmp279 + _tmp280 * (-_tmp255 * _tmp278 - _tmp271 * _tmp284 -
                                                            _tmp276 * _tmp283)));
  _res(3, 0) =
      -_tmp290 * _tmp302 -
      _tmp308 *
          (_tmp305 * _tmp307 - _tmp311 * p_a(2, 0) -
           _tmp312 * (_tmp298 * (-_tmp290 * _tmp299 - _tmp305 * _tmp309) - _tmp300 * _tmp311));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp225 *
          (-_tmp232 * _tmp348 -
           _tmp247 * (_tmp201 * (-_tmp225 * _tmp356 - _tmp246 * _tmp348) - _tmp233 * _tmp348) +
           _tmp248 * _tmp356) -
      _tmp229 * _tmp348;
  _res(2, 1) =
      -_tmp284 *
          (_tmp274 * _tmp360 -
           _tmp282 * (-_tmp279 * _tmp361 +
                      _tmp280 * (-_tmp272 * _tmp362 - _tmp275 * _tmp283 - _tmp284 * _tmp360)) -
           _tmp361 * p_d(2, 0)) -
      _tmp285 * _tmp362;
  _res(3, 1) =
      -_tmp302 * _tmp363 -
      _tmp308 *
          (_tmp307 * _tmp364 -
           _tmp312 * (_tmp298 * (-_tmp299 * _tmp363 - _tmp309 * _tmp364) - _tmp300 * _tmp365) -
           _tmp365 * p_a(2, 0));
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = Scalar(-1.0);
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
