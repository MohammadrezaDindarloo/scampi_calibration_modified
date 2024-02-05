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
 * Symbolic function: FK_residual_func_cost2_wrt_pd
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost2WrtPd(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1053

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (329)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp5 = _tmp3 * _tmp4;
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp8 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp7 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = 2 * _tmp3;
  const Scalar _tmp11 = _tmp0 * _tmp10;
  const Scalar _tmp12 = _tmp1 * _tmp4;
  const Scalar _tmp13 = _tmp11 - _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp14 - _tmp9;
  const Scalar _tmp16 = _tmp15 + _tmp6;
  const Scalar _tmp17 = _tmp16 + position_vector(1, 0);
  const Scalar _tmp18 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp20 = _tmp1 * _tmp10;
  const Scalar _tmp21 = _tmp0 * _tmp4;
  const Scalar _tmp22 = _tmp20 + _tmp21;
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 + position_vector(0, 0);
  const Scalar _tmp28 = -_tmp19;
  const Scalar _tmp29 = _tmp25 + _tmp28;
  const Scalar _tmp30 = _tmp29 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp31 = -_tmp6;
  const Scalar _tmp32 = _tmp15 + _tmp31;
  const Scalar _tmp33 = _tmp32 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp34 = std::pow(Scalar(std::pow(_tmp30, Scalar(2)) + std::pow(_tmp33, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp35 = _tmp30 * _tmp34;
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp20 - Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp37 = -_tmp36;
  const Scalar _tmp38 = -Scalar(0.010999999999999999) * _tmp18 -
                        Scalar(0.010999999999999999) * _tmp7 + Scalar(-0.010999999999999999);
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp40 = _tmp38 - _tmp39;
  const Scalar _tmp41 = fh1 * (_tmp37 + _tmp40);
  const Scalar _tmp42 = Scalar(3.29616) * _tmp22 + _tmp29 * fv1 + _tmp35 * _tmp41;
  const Scalar _tmp43 = _tmp23 + _tmp24;
  const Scalar _tmp44 = _tmp28 + _tmp43;
  const Scalar _tmp45 = Scalar(1.0) * _tmp26;
  const Scalar _tmp46 = Scalar(1.0) * _tmp16;
  const Scalar _tmp47 = -_tmp46;
  const Scalar _tmp48 = _tmp14 + _tmp9;
  const Scalar _tmp49 = _tmp31 + _tmp48;
  const Scalar _tmp50 = _tmp47 + _tmp49;
  const Scalar _tmp51 = _tmp48 + _tmp6;
  const Scalar _tmp52 = Scalar(1.0) / (_tmp47 + _tmp51);
  const Scalar _tmp53 = _tmp19 + _tmp43;
  const Scalar _tmp54 = _tmp45 - _tmp53;
  const Scalar _tmp55 = _tmp52 * _tmp54;
  const Scalar _tmp56 = _tmp50 * _tmp55;
  const Scalar _tmp57 = Scalar(1.0) / (-_tmp44 + _tmp45 - _tmp56);
  const Scalar _tmp58 = Scalar(1.0) * _tmp57;
  const Scalar _tmp59 = _tmp50 * _tmp58;
  const Scalar _tmp60 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp61 = _tmp45 + _tmp46 * _tmp55;
  const Scalar _tmp62 = 0;
  const Scalar _tmp63 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp64 = _tmp63 - p_d(0, 0);
  const Scalar _tmp65 = _tmp38 + _tmp39;
  const Scalar _tmp66 = _tmp37 + _tmp65;
  const Scalar _tmp67 = std::pow(_tmp64, Scalar(2));
  const Scalar _tmp68 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 - p_d(1, 0);
  const Scalar _tmp70 = std::pow(_tmp69, Scalar(2));
  const Scalar _tmp71 = _tmp67 + _tmp70;
  const Scalar _tmp72 = std::pow(_tmp71, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp73 = _tmp66 * _tmp72;
  const Scalar _tmp74 = _tmp36 + _tmp40;
  const Scalar _tmp75 = _tmp72 * _tmp74;
  const Scalar _tmp76 = _tmp64 * _tmp75;
  const Scalar _tmp77 = _tmp27 - p_b(0, 0);
  const Scalar _tmp78 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp79 = _tmp17 - p_b(1, 0);
  const Scalar _tmp80 = _tmp78 * _tmp79;
  const Scalar _tmp81 = _tmp72 * _tmp80;
  const Scalar _tmp82 = _tmp64 * _tmp81 - _tmp69 * _tmp72;
  const Scalar _tmp83 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp84 = _tmp83 - p_c(0, 0);
  const Scalar _tmp85 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp86 = _tmp85 - p_c(1, 0);
  const Scalar _tmp87 = std::pow(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp86, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp88 = _tmp84 * _tmp87;
  const Scalar _tmp89 = _tmp86 * _tmp87;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp80 * _tmp88 - _tmp89);
  const Scalar _tmp91 = _tmp74 * _tmp88;
  const Scalar _tmp92 = _tmp36 + _tmp65;
  const Scalar _tmp93 = _tmp90 * (-_tmp80 * _tmp91 + _tmp89 * _tmp92);
  const Scalar _tmp94 = _tmp69 * _tmp73 - _tmp76 * _tmp80 - _tmp82 * _tmp93;
  const Scalar _tmp95 = _tmp90 * (-_tmp88 * _tmp92 + _tmp91);
  const Scalar _tmp96 = -_tmp55 * _tmp94 - _tmp64 * _tmp73 + _tmp76 - _tmp82 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp98 = _tmp94 * _tmp97;
  const Scalar _tmp99 = _tmp57 * _tmp61;
  const Scalar _tmp100 = _tmp47 - _tmp50 * _tmp99 - _tmp62 * _tmp98;
  const Scalar _tmp101 = Scalar(1.0) * _tmp52;
  const Scalar _tmp102 = _tmp44 * _tmp72;
  const Scalar _tmp103 = _tmp49 * _tmp72;
  const Scalar _tmp104 =
      std::sqrt(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp79, Scalar(2))));
  const Scalar _tmp105 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp106 = _tmp104 * _tmp78;
  const Scalar _tmp107 = _tmp106 * (-_tmp105 * _tmp16 * _tmp77 + _tmp105 * _tmp26 * _tmp79);
  const Scalar _tmp108 = _tmp90 * (_tmp107 * _tmp88 + _tmp51 * _tmp88 - _tmp53 * _tmp89);
  const Scalar _tmp109 = _tmp64 * _tmp72;
  const Scalar _tmp110 =
      -_tmp102 * _tmp69 + _tmp103 * _tmp64 + _tmp107 * _tmp109 - _tmp108 * _tmp82;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp112 = Scalar(1.0) * _tmp111;
  const Scalar _tmp113 = _tmp111 * _tmp96;
  const Scalar _tmp114 = _tmp113 * _tmp58;
  const Scalar _tmp115 = -_tmp112 * _tmp94 + _tmp114 * _tmp50;
  const Scalar _tmp116 = _tmp33 * _tmp34;
  const Scalar _tmp117 = fh1 * (_tmp116 * _tmp29 - _tmp32 * _tmp35);
  const Scalar _tmp118 = Scalar(1.0) * _tmp117;
  const Scalar _tmp119 = -_tmp116 * _tmp41 - Scalar(3.29616) * _tmp13 - _tmp32 * fv1;
  const Scalar _tmp120 = _tmp56 * _tmp58 + Scalar(1.0);
  const Scalar _tmp121 = _tmp55 * _tmp58;
  const Scalar _tmp122 = _tmp101 * _tmp54 * _tmp93 - Scalar(1.0) * _tmp95;
  const Scalar _tmp123 = _tmp122 * _tmp97;
  const Scalar _tmp124 = -Scalar(1.0) * _tmp108 - _tmp110 * _tmp123;
  const Scalar _tmp125 = _tmp113 * _tmp124;
  const Scalar _tmp126 = _tmp50 * _tmp57;
  const Scalar _tmp127 = _tmp122 + _tmp125;
  const Scalar _tmp128 = _tmp127 * _tmp97;
  const Scalar _tmp129 = _tmp125 * _tmp126 - _tmp128 * _tmp94 - Scalar(1.0) * _tmp93;
  const Scalar _tmp130 = _tmp116 * fh1;
  const Scalar _tmp131 = Scalar(1.0) * _tmp130;
  const Scalar _tmp132 = _tmp74 * _tmp80;
  const Scalar _tmp133 = _tmp132 + _tmp80 * _tmp93;
  const Scalar _tmp134 = -_tmp133 * _tmp55 - _tmp74 + _tmp80 * _tmp95;
  const Scalar _tmp135 = _tmp134 * _tmp97;
  const Scalar _tmp136 = -_tmp107 + _tmp108 * _tmp80 - _tmp110 * _tmp135;
  const Scalar _tmp137 = _tmp113 * _tmp136;
  const Scalar _tmp138 = _tmp134 + _tmp137;
  const Scalar _tmp139 = _tmp138 * _tmp97;
  const Scalar _tmp140 = _tmp126 * _tmp137 + _tmp133 - _tmp139 * _tmp94;
  const Scalar _tmp141 = _tmp35 * fh1;
  const Scalar _tmp142 = Scalar(1.0) * _tmp141;
  const Scalar _tmp143 =
      _tmp118 * (-_tmp101 * _tmp115 + _tmp114) +
      Scalar(1.0) * _tmp119 * (-_tmp101 * _tmp120 + _tmp121) +
      _tmp131 * (-_tmp101 * _tmp129 + _tmp125 * _tmp58) +
      _tmp142 * (-_tmp101 * _tmp140 + _tmp137 * _tmp58) +
      Scalar(1.0) * _tmp42 * (_tmp52 * _tmp59 - _tmp58) +
      Scalar(1.0) * _tmp60 * (-_tmp100 * _tmp101 - _tmp58 * _tmp61 + Scalar(1.0));
  const Scalar _tmp144 = _tmp82 * _tmp97;
  const Scalar _tmp145 = -_tmp138 * _tmp144 - _tmp80;
  const Scalar _tmp146 = _tmp88 * _tmp90;
  const Scalar _tmp147 = _tmp139 * _tmp72;
  const Scalar _tmp148 = _tmp106 * _tmp141;
  const Scalar _tmp149 = _tmp128 * _tmp72;
  const Scalar _tmp150 = -_tmp127 * _tmp144 + Scalar(1.0);
  const Scalar _tmp151 = _tmp106 * _tmp130;
  const Scalar _tmp152 = _tmp112 * _tmp72;
  const Scalar _tmp153 = _tmp112 * _tmp146;
  const Scalar _tmp154 = _tmp106 * _tmp117;
  const Scalar _tmp155 = _tmp62 * _tmp97;
  const Scalar _tmp156 = _tmp155 * _tmp72;
  const Scalar _tmp157 = _tmp146 * _tmp62;
  const Scalar _tmp158 = _tmp106 * _tmp60;
  const Scalar _tmp159 = -_tmp148 * (_tmp145 * _tmp146 + _tmp147 * _tmp64 + Scalar(1.0)) -
                         _tmp151 * (_tmp146 * _tmp150 + _tmp149 * _tmp64) -
                         _tmp154 * (_tmp152 * _tmp64 - _tmp153 * _tmp82) -
                         _tmp158 * (-_tmp144 * _tmp157 + _tmp156 * _tmp64);
  const Scalar _tmp160 = Scalar(1.0) / (_tmp159);
  const Scalar _tmp161 = std::asinh(_tmp143 * _tmp160);
  const Scalar _tmp162 = Scalar(9.6622558468725703) * _tmp159;
  const Scalar _tmp163 =
      -_tmp161 * _tmp162 - std::sqrt(Scalar(std::pow(Scalar(-_tmp17 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp27 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp164 = Scalar(0.1034955) * _tmp160;
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = std::cosh(_tmp165);
  const Scalar _tmp167 = std::pow(_tmp71, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp168 = _tmp167 * _tmp67;
  const Scalar _tmp169 = _tmp168 * _tmp74;
  const Scalar _tmp170 = _tmp167 * _tmp64 * _tmp69;
  const Scalar _tmp171 = _tmp168 * _tmp80 - _tmp170 - _tmp81;
  const Scalar _tmp172 = _tmp170 * _tmp66;
  const Scalar _tmp173 = -_tmp169 * _tmp80 - _tmp171 * _tmp93 + _tmp172 + _tmp75 * _tmp80;
  const Scalar _tmp174 =
      -_tmp168 * _tmp66 + _tmp169 - _tmp171 * _tmp95 - _tmp173 * _tmp55 + _tmp73 - _tmp75;
  const Scalar _tmp175 = _tmp111 * _tmp136;
  const Scalar _tmp176 = _tmp174 * _tmp175;
  const Scalar _tmp177 = -_tmp103 + _tmp107 * _tmp168 - _tmp107 * _tmp72 - _tmp108 * _tmp171 +
                         _tmp168 * _tmp49 - _tmp170 * _tmp44;
  const Scalar _tmp178 = std::pow(_tmp96, Scalar(-2));
  const Scalar _tmp179 = _tmp174 * _tmp178;
  const Scalar _tmp180 = _tmp110 * _tmp179;
  const Scalar _tmp181 = _tmp113 * (_tmp134 * _tmp180 - _tmp135 * _tmp177);
  const Scalar _tmp182 = std::pow(_tmp110, Scalar(-2));
  const Scalar _tmp183 = _tmp182 * _tmp96;
  const Scalar _tmp184 = _tmp136 * _tmp183;
  const Scalar _tmp185 = _tmp177 * _tmp184;
  const Scalar _tmp186 = _tmp176 + _tmp181 - _tmp185;
  const Scalar _tmp187 = _tmp186 * _tmp97;
  const Scalar _tmp188 = _tmp109 * _tmp138;
  const Scalar _tmp189 = _tmp138 * _tmp82;
  const Scalar _tmp190 = -_tmp139 * _tmp171 - _tmp144 * _tmp186 + _tmp179 * _tmp189;
  const Scalar _tmp191 = _tmp157 * _tmp82;
  const Scalar _tmp192 = _tmp146 * _tmp155;
  const Scalar _tmp193 = _tmp109 * _tmp62;
  const Scalar _tmp194 = _tmp177 * _tmp182;
  const Scalar _tmp195 = Scalar(1.0) * _tmp146 * _tmp82;
  const Scalar _tmp196 = Scalar(1.0) * _tmp109;
  const Scalar _tmp197 = _tmp127 * _tmp179;
  const Scalar _tmp198 = _tmp111 * _tmp124;
  const Scalar _tmp199 = _tmp174 * _tmp198;
  const Scalar _tmp200 = _tmp113 * (_tmp122 * _tmp180 - _tmp123 * _tmp177);
  const Scalar _tmp201 = _tmp124 * _tmp183;
  const Scalar _tmp202 = _tmp177 * _tmp201;
  const Scalar _tmp203 = _tmp199 + _tmp200 - _tmp202;
  const Scalar _tmp204 = _tmp109 * _tmp97;
  const Scalar _tmp205 = -_tmp128 * _tmp171 - _tmp144 * _tmp203 + _tmp197 * _tmp82;
  const Scalar _tmp206 = -_tmp148 * (_tmp109 * _tmp187 + _tmp139 * _tmp168 + _tmp146 * _tmp190 -
                                     _tmp147 - _tmp179 * _tmp188) -
                         _tmp151 * (-_tmp109 * _tmp197 + _tmp128 * _tmp168 + _tmp146 * _tmp205 -
                                    _tmp149 + _tmp203 * _tmp204) -
                         _tmp154 * (_tmp112 * _tmp168 - _tmp152 - _tmp153 * _tmp171 +
                                    _tmp194 * _tmp195 - _tmp194 * _tmp196) -
                         _tmp158 * (_tmp155 * _tmp168 - _tmp156 - _tmp171 * _tmp192 +
                                    _tmp179 * _tmp191 - _tmp179 * _tmp193);
  const Scalar _tmp207 = std::pow(_tmp159, Scalar(-2));
  const Scalar _tmp208 = Scalar(0.1034955) * _tmp163 * _tmp207;
  const Scalar _tmp209 =
      std::pow(Scalar(std::pow(_tmp143, Scalar(2)) * _tmp207 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp210 = _tmp138 * _tmp94;
  const Scalar _tmp211 = _tmp126 * _tmp176 + _tmp126 * _tmp181 - _tmp126 * _tmp185 -
                         _tmp139 * _tmp173 + _tmp179 * _tmp210 - _tmp186 * _tmp98;
  const Scalar _tmp212 = _tmp62 * _tmp94;
  const Scalar _tmp213 = -_tmp155 * _tmp173 + _tmp179 * _tmp212;
  const Scalar _tmp214 = _tmp101 * _tmp60;
  const Scalar _tmp215 = _tmp126 * _tmp199 + _tmp126 * _tmp200 - _tmp126 * _tmp202 -
                         _tmp128 * _tmp173 + _tmp197 * _tmp94 - _tmp203 * _tmp98;
  const Scalar _tmp216 = Scalar(1.0) * _tmp94;
  const Scalar _tmp217 = _tmp183 * _tmp59;
  const Scalar _tmp218 = _tmp111 * _tmp59;
  const Scalar _tmp219 =
      -_tmp112 * _tmp173 + _tmp174 * _tmp218 - _tmp177 * _tmp217 + _tmp194 * _tmp216;
  const Scalar _tmp220 = _tmp111 * _tmp58;
  const Scalar _tmp221 = _tmp174 * _tmp220;
  const Scalar _tmp222 = _tmp183 * _tmp58;
  const Scalar _tmp223 = _tmp177 * _tmp222;
  const Scalar _tmp224 = _tmp143 * _tmp207;
  const Scalar _tmp225 = _tmp209 * (_tmp160 * (_tmp118 * (-_tmp101 * _tmp219 + _tmp221 - _tmp223) +
                                               _tmp131 * (-_tmp101 * _tmp215 + _tmp199 * _tmp58 +
                                                          _tmp200 * _tmp58 - _tmp202 * _tmp58) +
                                               _tmp142 * (-_tmp101 * _tmp211 + _tmp176 * _tmp58 +
                                                          _tmp181 * _tmp58 - _tmp185 * _tmp58) -
                                               _tmp213 * _tmp214) -
                                    _tmp206 * _tmp224);
  const Scalar _tmp226 = Scalar(9.6622558468725703) * _tmp206;
  const Scalar _tmp227 = Scalar(1.0) * _tmp161;
  const Scalar _tmp228 = Scalar(1.0) * std::cosh(_tmp227);
  const Scalar _tmp229 = -std::sinh(_tmp165) - std::sinh(_tmp227);
  const Scalar _tmp230 = _tmp141 * _tmp90;
  const Scalar _tmp231 = _tmp112 * _tmp117;
  const Scalar _tmp232 = _tmp231 * _tmp90;
  const Scalar _tmp233 = _tmp155 * _tmp60;
  const Scalar _tmp234 = _tmp233 * _tmp90;
  const Scalar _tmp235 = _tmp118 * _tmp194;
  const Scalar _tmp236 = _tmp82 * _tmp90;
  const Scalar _tmp237 = _tmp60 * _tmp62;
  const Scalar _tmp238 = _tmp179 * _tmp237;
  const Scalar _tmp239 = _tmp130 * _tmp90;
  const Scalar _tmp240 = -_tmp171 * _tmp232 - _tmp171 * _tmp234 + _tmp190 * _tmp230 +
                         _tmp205 * _tmp239 + _tmp235 * _tmp236 + _tmp236 * _tmp238;
  const Scalar _tmp241 =
      -_tmp144 * _tmp237 * _tmp90 + _tmp145 * _tmp230 + _tmp150 * _tmp239 - _tmp232 * _tmp82;
  const Scalar _tmp242 = Scalar(1.0) / (_tmp241);
  const Scalar _tmp243 = _tmp141 * _tmp52;
  const Scalar _tmp244 = _tmp52 * _tmp60;
  const Scalar _tmp245 = _tmp130 * _tmp52;
  const Scalar _tmp246 = _tmp117 * _tmp52;
  const Scalar _tmp247 = _tmp42 * _tmp58;
  const Scalar _tmp248 = _tmp100 * _tmp244 + _tmp115 * _tmp246 + _tmp119 * _tmp120 * _tmp52 +
                         _tmp129 * _tmp245 + _tmp140 * _tmp243 - _tmp247 * _tmp50 * _tmp52;
  const Scalar _tmp249 = std::asinh(_tmp242 * _tmp248);
  const Scalar _tmp250 = Scalar(1.0) * _tmp249;
  const Scalar _tmp251 = Scalar(9.6622558468725703) * _tmp241;
  const Scalar _tmp252 =
      -_tmp249 * _tmp251 - std::sqrt(Scalar(std::pow(Scalar(-_tmp83 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp85 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp253 = Scalar(0.1034955) * _tmp242;
  const Scalar _tmp254 = _tmp252 * _tmp253;
  const Scalar _tmp255 = -Scalar(9.6622558468725703) * std::sinh(_tmp250) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp254);
  const Scalar _tmp256 = std::pow(_tmp241, Scalar(-2));
  const Scalar _tmp257 = _tmp248 * _tmp256;
  const Scalar _tmp258 = -_tmp240 * _tmp257 + _tmp242 * (_tmp211 * _tmp243 + _tmp213 * _tmp244 +
                                                         _tmp215 * _tmp245 + _tmp219 * _tmp246);
  const Scalar _tmp259 =
      std::pow(Scalar(std::pow(_tmp248, Scalar(2)) * _tmp256 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp260 = Scalar(1.0) * _tmp259 * std::cosh(_tmp250);
  const Scalar _tmp261 = _tmp251 * _tmp259;
  const Scalar _tmp262 = Scalar(9.6622558468725703) * _tmp249;
  const Scalar _tmp263 = Scalar(0.1034955) * _tmp252 * _tmp256;
  const Scalar _tmp264 = std::cosh(_tmp254);
  const Scalar _tmp265 = _tmp130 * _tmp97;
  const Scalar _tmp266 = _tmp138 * _tmp141;
  const Scalar _tmp267 = -_tmp130 * _tmp197 + _tmp141 * _tmp187 - _tmp179 * _tmp266 +
                         _tmp203 * _tmp265 - _tmp235 - _tmp238;
  const Scalar _tmp268 = _tmp128 * _tmp130 + _tmp139 * _tmp141 + _tmp231 + _tmp233;
  const Scalar _tmp269 = Scalar(1.0) / (_tmp268);
  const Scalar _tmp270 = _tmp130 * _tmp57;
  const Scalar _tmp271 = _tmp141 * _tmp57;
  const Scalar _tmp272 = -_tmp114 * _tmp117 - _tmp119 * _tmp121 - _tmp125 * _tmp270 -
                         _tmp137 * _tmp271 + _tmp247 + _tmp60 * _tmp99;
  const Scalar _tmp273 = std::asinh(_tmp269 * _tmp272);
  const Scalar _tmp274 = Scalar(1.0) * _tmp273;
  const Scalar _tmp275 = -_tmp68 + p_d(1, 0);
  const Scalar _tmp276 = -_tmp63 + p_d(0, 0);
  const Scalar _tmp277 = std::pow(_tmp275, Scalar(2)) + std::pow(_tmp276, Scalar(2));
  const Scalar _tmp278 = std::sqrt(_tmp277);
  const Scalar _tmp279 = Scalar(9.6622558468725703) * _tmp273;
  const Scalar _tmp280 = -_tmp268 * _tmp279 - _tmp278;
  const Scalar _tmp281 = Scalar(0.1034955) * _tmp269;
  const Scalar _tmp282 = _tmp280 * _tmp281;
  const Scalar _tmp283 = -Scalar(9.6622558468725703) * std::sinh(_tmp274) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp282);
  const Scalar _tmp284 = std::cosh(_tmp282);
  const Scalar _tmp285 = Scalar(1.0) / (_tmp278);
  const Scalar _tmp286 = Scalar(9.6622558468725703) * _tmp268;
  const Scalar _tmp287 = std::pow(_tmp268, Scalar(-2));
  const Scalar _tmp288 =
      std::pow(Scalar(std::pow(_tmp272, Scalar(2)) * _tmp287 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp289 = _tmp272 * _tmp287;
  const Scalar _tmp290 =
      _tmp288 *
      (-_tmp267 * _tmp289 +
       _tmp269 * (-_tmp117 * _tmp221 + _tmp117 * _tmp223 - _tmp176 * _tmp271 - _tmp181 * _tmp271 +
                  _tmp185 * _tmp271 - _tmp199 * _tmp270 - _tmp200 * _tmp270 + _tmp202 * _tmp270));
  const Scalar _tmp291 = Scalar(0.1034955) * _tmp280 * _tmp287;
  const Scalar _tmp292 = Scalar(1.0) * std::cosh(_tmp274);
  const Scalar _tmp293 = -_tmp66 + p_d(2, 0) - position_vector(2, 0);
  const Scalar _tmp294 =
      std::pow(Scalar(_tmp277 + std::pow(_tmp293, Scalar(2))), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp295 = _tmp167 * _tmp70;
  const Scalar _tmp296 = _tmp170 * _tmp80 - _tmp295 + _tmp72;
  const Scalar _tmp297 = -_tmp132 * _tmp170 + _tmp295 * _tmp66 - _tmp296 * _tmp93 - _tmp73;
  const Scalar _tmp298 = _tmp170 * _tmp74 - _tmp172 - _tmp296 * _tmp95 - _tmp297 * _tmp55;
  const Scalar _tmp299 = _tmp178 * _tmp298;
  const Scalar _tmp300 = _tmp175 * _tmp298;
  const Scalar _tmp301 = _tmp110 * _tmp299;
  const Scalar _tmp302 =
      _tmp102 + _tmp107 * _tmp170 - _tmp108 * _tmp296 + _tmp170 * _tmp49 - _tmp295 * _tmp44;
  const Scalar _tmp303 = _tmp113 * (_tmp134 * _tmp301 - _tmp135 * _tmp302);
  const Scalar _tmp304 = _tmp184 * _tmp302;
  const Scalar _tmp305 = _tmp300 + _tmp303 - _tmp304;
  const Scalar _tmp306 = -_tmp139 * _tmp296 - _tmp144 * _tmp305 + _tmp189 * _tmp299;
  const Scalar _tmp307 = _tmp127 * _tmp299;
  const Scalar _tmp308 = _tmp198 * _tmp298;
  const Scalar _tmp309 = _tmp201 * _tmp302;
  const Scalar _tmp310 = _tmp113 * (_tmp122 * _tmp301 - _tmp123 * _tmp302);
  const Scalar _tmp311 = _tmp308 - _tmp309 + _tmp310;
  const Scalar _tmp312 = -_tmp128 * _tmp296 - _tmp144 * _tmp311 + _tmp307 * _tmp82;
  const Scalar _tmp313 = _tmp182 * _tmp302;
  const Scalar _tmp314 =
      -_tmp148 * (_tmp139 * _tmp170 + _tmp146 * _tmp306 - _tmp188 * _tmp299 + _tmp204 * _tmp305) -
      _tmp151 * (-_tmp109 * _tmp307 + _tmp128 * _tmp170 + _tmp146 * _tmp312 + _tmp204 * _tmp311) -
      _tmp154 * (_tmp112 * _tmp170 - _tmp153 * _tmp296 + _tmp195 * _tmp313 - _tmp196 * _tmp313) -
      _tmp158 * (_tmp155 * _tmp170 + _tmp191 * _tmp299 - _tmp192 * _tmp296 - _tmp193 * _tmp299);
  const Scalar _tmp315 = _tmp126 * _tmp300 + _tmp126 * _tmp303 - _tmp126 * _tmp304 -
                         _tmp139 * _tmp297 + _tmp210 * _tmp299 - _tmp305 * _tmp98;
  const Scalar _tmp316 = _tmp126 * _tmp308 - _tmp126 * _tmp309 + _tmp126 * _tmp310 -
                         _tmp128 * _tmp297 + _tmp307 * _tmp94 - _tmp311 * _tmp98;
  const Scalar _tmp317 = _tmp222 * _tmp302;
  const Scalar _tmp318 =
      -_tmp112 * _tmp297 + _tmp216 * _tmp313 - _tmp217 * _tmp302 + _tmp218 * _tmp298;
  const Scalar _tmp319 = _tmp220 * _tmp298;
  const Scalar _tmp320 = -_tmp155 * _tmp297 + _tmp212 * _tmp299;
  const Scalar _tmp321 = _tmp209 * (_tmp160 * (_tmp118 * (-_tmp101 * _tmp318 - _tmp317 + _tmp319) +
                                               _tmp131 * (-_tmp101 * _tmp316 + _tmp308 * _tmp58 -
                                                          _tmp309 * _tmp58 + _tmp310 * _tmp58) +
                                               _tmp142 * (-_tmp101 * _tmp315 + _tmp300 * _tmp58 +
                                                          _tmp303 * _tmp58 - _tmp304 * _tmp58) -
                                               _tmp214 * _tmp320) -
                                    _tmp224 * _tmp314);
  const Scalar _tmp322 = Scalar(9.6622558468725703) * _tmp314;
  const Scalar _tmp323 = _tmp237 * _tmp299;
  const Scalar _tmp324 = _tmp118 * _tmp313;
  const Scalar _tmp325 = _tmp230 * _tmp306 - _tmp232 * _tmp296 - _tmp234 * _tmp296 +
                         _tmp236 * _tmp323 + _tmp236 * _tmp324 + _tmp239 * _tmp312;
  const Scalar _tmp326 =
      _tmp242 * (_tmp243 * _tmp315 + _tmp244 * _tmp320 + _tmp245 * _tmp316 + _tmp246 * _tmp318) -
      _tmp257 * _tmp325;
  const Scalar _tmp327 = -_tmp130 * _tmp307 + _tmp141 * _tmp305 * _tmp97 + _tmp265 * _tmp311 -
                         _tmp266 * _tmp299 - _tmp323 - _tmp324;
  const Scalar _tmp328 =
      _tmp288 *
      (_tmp269 * (_tmp117 * _tmp317 - _tmp117 * _tmp319 - _tmp270 * _tmp308 + _tmp270 * _tmp309 -
                  _tmp270 * _tmp310 - _tmp271 * _tmp300 - _tmp271 * _tmp303 + _tmp271 * _tmp304) -
       _tmp289 * _tmp327);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp162 *
          (-_tmp166 * (_tmp164 * (-_tmp161 * _tmp226 - _tmp162 * _tmp225) - _tmp206 * _tmp208) -
           _tmp225 * _tmp228) +
      _tmp226 * _tmp229;
  _res(2, 0) =
      _tmp240 * _tmp255 +
      _tmp251 *
          (-_tmp258 * _tmp260 -
           _tmp264 * (-_tmp240 * _tmp263 + _tmp253 * (-_tmp240 * _tmp262 - _tmp258 * _tmp261)));
  _res(3, 0) =
      _tmp267 * _tmp283 - _tmp276 * _tmp294 +
      _tmp286 *
          (-_tmp284 * (-_tmp267 * _tmp291 +
                       _tmp281 * (-_tmp267 * _tmp279 - _tmp276 * _tmp285 - _tmp286 * _tmp290)) -
           _tmp290 * _tmp292);
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp162 *
          (-_tmp166 * (_tmp164 * (-_tmp161 * _tmp322 - _tmp162 * _tmp321) - _tmp208 * _tmp314) -
           _tmp228 * _tmp321) +
      _tmp229 * _tmp322;
  _res(2, 1) =
      _tmp251 *
          (-_tmp260 * _tmp326 -
           _tmp264 * (_tmp253 * (-_tmp261 * _tmp326 - _tmp262 * _tmp325) - _tmp263 * _tmp325)) +
      _tmp255 * _tmp325;
  _res(3, 1) =
      -_tmp275 * _tmp294 + _tmp283 * _tmp327 +
      _tmp286 *
          (-_tmp284 * (_tmp281 * (-_tmp275 * _tmp285 - _tmp279 * _tmp327 - _tmp286 * _tmp328) -
                       _tmp291 * _tmp327) -
           _tmp292 * _tmp328);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = -_tmp293 * _tmp294;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym