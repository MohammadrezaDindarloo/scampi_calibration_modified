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
 * Symbolic function: FK_residual_func_cost3_wrt_pd
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     encoder: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost3WrtPd(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Eigen::Matrix<Scalar, 4, 1>& encoder, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const Scalar epsilon) {
  // Total ops: 1035

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (317)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp12 = _tmp1 * _tmp5;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 - _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp18 = -_tmp17;
  const Scalar _tmp19 = _tmp11 + _tmp12;
  const Scalar _tmp20 = -Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp21 = _tmp2 * _tmp4;
  const Scalar _tmp22 = _tmp0 * _tmp5;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = _tmp20 + _tmp23;
  const Scalar _tmp25 = _tmp18 + _tmp24;
  const Scalar _tmp26 = _tmp25 + position_vector(0, 0);
  const Scalar _tmp27 = _tmp26 - p_d(0, 0);
  const Scalar _tmp28 = std::pow(_tmp27, Scalar(2));
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp30 = -_tmp29;
  const Scalar _tmp31 = _tmp3 - _tmp6;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp31;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp30 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp37 = _tmp36 - p_d(1, 0);
  const Scalar _tmp38 = std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 = _tmp28 + _tmp38;
  const Scalar _tmp40 = std::pow(_tmp39, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp41 = _tmp28 * _tmp40;
  const Scalar _tmp42 = -_tmp7;
  const Scalar _tmp43 = _tmp10 + _tmp13;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = std::pow(_tmp39, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp46 = _tmp15 * _tmp45;
  const Scalar _tmp47 = _tmp44 * _tmp45;
  const Scalar _tmp48 = _tmp20 - _tmp23;
  const Scalar _tmp49 = _tmp17 + _tmp48;
  const Scalar _tmp50 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 - p_b(0, 0);
  const Scalar _tmp52 = Scalar(1.0) / (_tmp51);
  const Scalar _tmp53 = _tmp32 - _tmp33;
  const Scalar _tmp54 = _tmp29 + _tmp53;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_b(1, 0);
  const Scalar _tmp57 = _tmp52 * _tmp56;
  const Scalar _tmp58 = _tmp44 * _tmp57;
  const Scalar _tmp59 = _tmp45 * _tmp57;
  const Scalar _tmp60 = _tmp27 * _tmp37 * _tmp40;
  const Scalar _tmp61 = _tmp41 * _tmp57 - _tmp59 - _tmp60;
  const Scalar _tmp62 = _tmp17 + _tmp24;
  const Scalar _tmp63 = _tmp62 + position_vector(0, 0);
  const Scalar _tmp64 = _tmp63 - p_c(0, 0);
  const Scalar _tmp65 = _tmp29 + _tmp34;
  const Scalar _tmp66 = _tmp65 + position_vector(1, 0);
  const Scalar _tmp67 = _tmp66 - p_c(1, 0);
  const Scalar _tmp68 = std::pow(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp67, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp69 = _tmp64 * _tmp68;
  const Scalar _tmp70 = _tmp67 * _tmp68;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp57 * _tmp69 - _tmp70);
  const Scalar _tmp72 = _tmp43 + _tmp7;
  const Scalar _tmp73 = _tmp71 * (-_tmp58 * _tmp69 + _tmp70 * _tmp72);
  const Scalar _tmp74 = _tmp15 * _tmp60;
  const Scalar _tmp75 = -_tmp41 * _tmp58 + _tmp47 * _tmp57 - _tmp61 * _tmp73 + _tmp74;
  const Scalar _tmp76 = Scalar(1.0) * _tmp54;
  const Scalar _tmp77 = -_tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp65 + _tmp77);
  const Scalar _tmp79 = Scalar(1.0) * _tmp49;
  const Scalar _tmp80 = -_tmp62 + _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp80;
  const Scalar _tmp82 = _tmp71 * (_tmp44 * _tmp69 - _tmp69 * _tmp72);
  const Scalar _tmp83 =
      -_tmp15 * _tmp41 + _tmp41 * _tmp44 + _tmp46 - _tmp47 - _tmp61 * _tmp82 - _tmp75 * _tmp81;
  const Scalar _tmp84 = _tmp25 * _tmp45;
  const Scalar _tmp85 = _tmp35 * _tmp45;
  const Scalar _tmp86 = _tmp27 * _tmp59 - _tmp37 * _tmp45;
  const Scalar _tmp87 =
      std::sqrt(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp56, Scalar(2))));
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 = _tmp52 * _tmp87;
  const Scalar _tmp90 = _tmp89 * (_tmp49 * _tmp56 * _tmp88 - _tmp51 * _tmp54 * _tmp88);
  const Scalar _tmp91 = _tmp71 * (-_tmp62 * _tmp70 + _tmp65 * _tmp69 + _tmp69 * _tmp90);
  const Scalar _tmp92 = _tmp27 * _tmp45;
  const Scalar _tmp93 = _tmp27 * _tmp85 - _tmp37 * _tmp84 - _tmp86 * _tmp91 + _tmp90 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp27 * _tmp47;
  const Scalar _tmp96 = _tmp37 * _tmp46 - _tmp57 * _tmp95 - _tmp73 * _tmp86;
  const Scalar _tmp97 = -_tmp27 * _tmp46 - _tmp81 * _tmp96 - _tmp82 * _tmp86 + _tmp95;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp99 = _tmp57 * _tmp73 + _tmp58;
  const Scalar _tmp100 = -_tmp44 + _tmp57 * _tmp82 - _tmp81 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp98;
  const Scalar _tmp102 = -_tmp101 * _tmp93 + _tmp57 * _tmp91 - _tmp90;
  const Scalar _tmp103 = _tmp102 * _tmp94;
  const Scalar _tmp104 = _tmp103 * _tmp83;
  const Scalar _tmp105 = -_tmp25 * _tmp60 + _tmp35 * _tmp41 + _tmp41 * _tmp90 - _tmp45 * _tmp90 -
                         _tmp61 * _tmp91 - _tmp85;
  const Scalar _tmp106 = std::pow(_tmp97, Scalar(-2));
  const Scalar _tmp107 = _tmp106 * _tmp83;
  const Scalar _tmp108 = _tmp100 * _tmp93;
  const Scalar _tmp109 = _tmp94 * _tmp97;
  const Scalar _tmp110 = _tmp109 * (-_tmp101 * _tmp105 + _tmp107 * _tmp108);
  const Scalar _tmp111 = std::pow(_tmp93, Scalar(-2));
  const Scalar _tmp112 = _tmp105 * _tmp111;
  const Scalar _tmp113 = _tmp112 * _tmp97;
  const Scalar _tmp114 = _tmp102 * _tmp113;
  const Scalar _tmp115 = _tmp104 + _tmp110 - _tmp114;
  const Scalar _tmp116 = _tmp92 * _tmp98;
  const Scalar _tmp117 = _tmp102 * _tmp109;
  const Scalar _tmp118 = _tmp100 + _tmp117;
  const Scalar _tmp119 = _tmp107 * _tmp118;
  const Scalar _tmp120 = _tmp118 * _tmp98;
  const Scalar _tmp121 = _tmp120 * _tmp45;
  const Scalar _tmp122 = _tmp86 * _tmp98;
  const Scalar _tmp123 = -_tmp115 * _tmp122 + _tmp119 * _tmp86 - _tmp120 * _tmp61;
  const Scalar _tmp124 = _tmp69 * _tmp71;
  const Scalar _tmp125 = _tmp18 + _tmp48;
  const Scalar _tmp126 = _tmp125 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp127 = _tmp30 + _tmp53;
  const Scalar _tmp128 = _tmp127 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp129 =
      std::pow(Scalar(std::pow(_tmp126, Scalar(2)) + std::pow(_tmp128, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp130 = _tmp126 * _tmp129;
  const Scalar _tmp131 = _tmp130 * fh1;
  const Scalar _tmp132 = _tmp131 * _tmp89;
  const Scalar _tmp133 = _tmp76 * _tmp81 + _tmp79;
  const Scalar _tmp134 = 0;
  const Scalar _tmp135 = _tmp107 * _tmp134;
  const Scalar _tmp136 = _tmp124 * _tmp86;
  const Scalar _tmp137 = _tmp134 * _tmp98;
  const Scalar _tmp138 = _tmp124 * _tmp137;
  const Scalar _tmp139 = _tmp137 * _tmp45;
  const Scalar _tmp140 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp141 = _tmp140 * _tmp89;
  const Scalar _tmp142 = Scalar(1.0) * _tmp94;
  const Scalar _tmp143 = _tmp142 * _tmp45;
  const Scalar _tmp144 = Scalar(1.0) * _tmp136;
  const Scalar _tmp145 = Scalar(1.0) * _tmp92;
  const Scalar _tmp146 = _tmp124 * _tmp142;
  const Scalar _tmp147 = _tmp128 * _tmp129;
  const Scalar _tmp148 = fh1 * (_tmp125 * _tmp147 - _tmp127 * _tmp130);
  const Scalar _tmp149 = _tmp148 * _tmp89;
  const Scalar _tmp150 = Scalar(1.0) * _tmp78;
  const Scalar _tmp151 = _tmp150 * _tmp73 * _tmp80 - Scalar(1.0) * _tmp82;
  const Scalar _tmp152 = _tmp151 * _tmp98;
  const Scalar _tmp153 = -_tmp152 * _tmp93 - Scalar(1.0) * _tmp91;
  const Scalar _tmp154 = _tmp109 * _tmp153;
  const Scalar _tmp155 = _tmp151 + _tmp154;
  const Scalar _tmp156 = _tmp155 * _tmp98;
  const Scalar _tmp157 = _tmp156 * _tmp45;
  const Scalar _tmp158 = _tmp155 * _tmp92;
  const Scalar _tmp159 = _tmp153 * _tmp94;
  const Scalar _tmp160 = _tmp159 * _tmp83;
  const Scalar _tmp161 = _tmp151 * _tmp93;
  const Scalar _tmp162 = _tmp109 * (-_tmp105 * _tmp152 + _tmp107 * _tmp161);
  const Scalar _tmp163 = _tmp113 * _tmp153;
  const Scalar _tmp164 = _tmp160 + _tmp162 - _tmp163;
  const Scalar _tmp165 = _tmp164 * _tmp98;
  const Scalar _tmp166 = _tmp155 * _tmp86;
  const Scalar _tmp167 = _tmp107 * _tmp166 - _tmp122 * _tmp164 - _tmp156 * _tmp61;
  const Scalar _tmp168 = _tmp147 * fh1;
  const Scalar _tmp169 = _tmp168 * _tmp89;
  const Scalar _tmp170 =
      -_tmp132 *
          (_tmp115 * _tmp116 - _tmp119 * _tmp92 + _tmp120 * _tmp41 - _tmp121 + _tmp123 * _tmp124) -
      _tmp141 *
          (_tmp135 * _tmp136 - _tmp135 * _tmp92 + _tmp137 * _tmp41 - _tmp138 * _tmp61 - _tmp139) -
      _tmp149 *
          (_tmp112 * _tmp144 - _tmp112 * _tmp145 + _tmp142 * _tmp41 - _tmp143 - _tmp146 * _tmp61) -
      _tmp169 *
          (-_tmp107 * _tmp158 + _tmp124 * _tmp167 + _tmp156 * _tmp41 - _tmp157 + _tmp165 * _tmp92);
  const Scalar _tmp171 = -_tmp120 * _tmp86 - _tmp57;
  const Scalar _tmp172 = -_tmp156 * _tmp86 + Scalar(1.0);
  const Scalar _tmp173 = -_tmp132 * (_tmp121 * _tmp27 + _tmp124 * _tmp171 + Scalar(1.0)) -
                         _tmp141 * (-_tmp138 * _tmp86 + _tmp139 * _tmp27) -
                         _tmp149 * (_tmp143 * _tmp27 - _tmp146 * _tmp86) -
                         _tmp169 * (_tmp124 * _tmp172 + _tmp157 * _tmp27);
  const Scalar _tmp174 = Scalar(1.0) / (_tmp173);
  const Scalar _tmp175 = fh1 * (_tmp14 + _tmp42);
  const Scalar _tmp176 = _tmp125 * fv1 + _tmp130 * _tmp175 + Scalar(5.1796800000000003) * _tmp19;
  const Scalar _tmp177 = _tmp35 + _tmp77;
  const Scalar _tmp178 = _tmp177 * _tmp81;
  const Scalar _tmp179 = Scalar(1.0) / (-_tmp178 - _tmp25 + _tmp79);
  const Scalar _tmp180 = Scalar(1.0) * _tmp179;
  const Scalar _tmp181 = _tmp177 * _tmp78;
  const Scalar _tmp182 = _tmp133 * _tmp179;
  const Scalar _tmp183 = -_tmp137 * _tmp96 - _tmp177 * _tmp182 + _tmp77;
  const Scalar _tmp184 = _tmp109 * _tmp180;
  const Scalar _tmp185 = -_tmp142 * _tmp96 + _tmp177 * _tmp184;
  const Scalar _tmp186 = Scalar(1.0) * _tmp148;
  const Scalar _tmp187 = -_tmp127 * fv1 - _tmp147 * _tmp175 - Scalar(5.1796800000000003) * _tmp31;
  const Scalar _tmp188 = _tmp78 * (_tmp178 * _tmp180 + Scalar(1.0));
  const Scalar _tmp189 = _tmp180 * _tmp81;
  const Scalar _tmp190 = _tmp177 * _tmp179;
  const Scalar _tmp191 = _tmp154 * _tmp190 - _tmp156 * _tmp96 - Scalar(1.0) * _tmp73;
  const Scalar _tmp192 = Scalar(1.0) * fh1;
  const Scalar _tmp193 = _tmp147 * _tmp192;
  const Scalar _tmp194 = _tmp117 * _tmp190 - _tmp120 * _tmp96 + _tmp99;
  const Scalar _tmp195 = _tmp130 * _tmp192;
  const Scalar _tmp196 =
      Scalar(1.0) * _tmp140 * (-_tmp133 * _tmp180 - _tmp150 * _tmp183 + Scalar(1.0)) +
      Scalar(1.0) * _tmp176 * (_tmp180 * _tmp181 - _tmp180) +
      _tmp186 * (-_tmp150 * _tmp185 + _tmp184) +
      Scalar(1.0) * _tmp187 * (-Scalar(1.0) * _tmp188 + _tmp189) +
      _tmp193 * (-_tmp150 * _tmp191 + _tmp154 * _tmp180) +
      _tmp195 * (_tmp117 * _tmp180 - _tmp150 * _tmp194);
  const Scalar _tmp197 = std::asinh(_tmp174 * _tmp196);
  const Scalar _tmp198 = Scalar(1.0) * _tmp197;
  const Scalar _tmp199 = Scalar(9.6622558468725703) * _tmp173;
  const Scalar _tmp200 =
      -_tmp197 * _tmp199 - std::sqrt(Scalar(std::pow(Scalar(-_tmp50 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp201 = Scalar(0.1034955) * _tmp174;
  const Scalar _tmp202 = _tmp200 * _tmp201;
  const Scalar _tmp203 = -Scalar(9.6622558468725703) * std::sinh(_tmp198) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp202);
  const Scalar _tmp204 = std::pow(_tmp173, Scalar(-2));
  const Scalar _tmp205 = Scalar(0.1034955) * _tmp200 * _tmp204;
  const Scalar _tmp206 = Scalar(9.6622558468725703) * _tmp197;
  const Scalar _tmp207 =
      std::pow(Scalar(std::pow(_tmp196, Scalar(2)) * _tmp204 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp208 = _tmp96 * _tmp98;
  const Scalar _tmp209 = _tmp104 * _tmp190 + _tmp110 * _tmp190 - _tmp114 * _tmp190 -
                         _tmp115 * _tmp208 + _tmp119 * _tmp96 - _tmp120 * _tmp75;
  const Scalar _tmp210 = _tmp135 * _tmp96 - _tmp137 * _tmp75;
  const Scalar _tmp211 = _tmp140 * _tmp150;
  const Scalar _tmp212 = _tmp155 * _tmp96;
  const Scalar _tmp213 = _tmp107 * _tmp212 - _tmp156 * _tmp75 + _tmp160 * _tmp190 +
                         _tmp162 * _tmp190 - _tmp163 * _tmp190 - _tmp164 * _tmp208;
  const Scalar _tmp214 = Scalar(1.0) * _tmp96;
  const Scalar _tmp215 = _tmp113 * _tmp180;
  const Scalar _tmp216 = _tmp180 * _tmp94;
  const Scalar _tmp217 = _tmp216 * _tmp83;
  const Scalar _tmp218 =
      _tmp112 * _tmp214 - _tmp142 * _tmp75 - _tmp177 * _tmp215 + _tmp177 * _tmp217;
  const Scalar _tmp219 = _tmp196 * _tmp204;
  const Scalar _tmp220 = _tmp207 * (-_tmp170 * _tmp219 +
                                    _tmp174 * (_tmp186 * (-_tmp150 * _tmp218 - _tmp215 + _tmp217) +
                                               _tmp193 * (-_tmp150 * _tmp213 + _tmp160 * _tmp180 +
                                                          _tmp162 * _tmp180 - _tmp163 * _tmp180) +
                                               _tmp195 * (_tmp104 * _tmp180 + _tmp110 * _tmp180 -
                                                          _tmp114 * _tmp180 - _tmp150 * _tmp209) -
                                               _tmp210 * _tmp211));
  const Scalar _tmp221 = std::cosh(_tmp202);
  const Scalar _tmp222 = Scalar(1.0) * std::cosh(_tmp198);
  const Scalar _tmp223 = _tmp168 * _tmp71;
  const Scalar _tmp224 = _tmp131 * _tmp71;
  const Scalar _tmp225 = _tmp142 * _tmp148;
  const Scalar _tmp226 = _tmp71 * _tmp86;
  const Scalar _tmp227 = _tmp137 * _tmp140;
  const Scalar _tmp228 = _tmp227 * _tmp71;
  const Scalar _tmp229 =
      _tmp171 * _tmp224 + _tmp172 * _tmp223 - _tmp225 * _tmp226 - _tmp228 * _tmp86;
  const Scalar _tmp230 = Scalar(1.0) / (_tmp229);
  const Scalar _tmp231 = _tmp131 * _tmp78;
  const Scalar _tmp232 = _tmp140 * _tmp78;
  const Scalar _tmp233 = _tmp168 * _tmp78;
  const Scalar _tmp234 = _tmp148 * _tmp78;
  const Scalar _tmp235 = _tmp176 * _tmp180;
  const Scalar _tmp236 = -_tmp181 * _tmp235 + _tmp183 * _tmp232 + _tmp185 * _tmp234 +
                         _tmp187 * _tmp188 + _tmp191 * _tmp233 + _tmp194 * _tmp231;
  const Scalar _tmp237 = std::asinh(_tmp230 * _tmp236);
  const Scalar _tmp238 = Scalar(1.0) * _tmp237;
  const Scalar _tmp239 = Scalar(1.0) * std::cosh(_tmp238);
  const Scalar _tmp240 = std::pow(_tmp229, Scalar(-2));
  const Scalar _tmp241 =
      std::pow(Scalar(std::pow(_tmp236, Scalar(2)) * _tmp240 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp242 = _tmp225 * _tmp71;
  const Scalar _tmp243 = _tmp112 * _tmp186;
  const Scalar _tmp244 = _tmp135 * _tmp140;
  const Scalar _tmp245 = _tmp123 * _tmp224 + _tmp167 * _tmp223 + _tmp226 * _tmp243 +
                         _tmp226 * _tmp244 - _tmp228 * _tmp61 - _tmp242 * _tmp61;
  const Scalar _tmp246 = _tmp236 * _tmp240;
  const Scalar _tmp247 =
      _tmp241 *
      (_tmp230 * (_tmp209 * _tmp231 + _tmp210 * _tmp232 + _tmp213 * _tmp233 + _tmp218 * _tmp234) -
       _tmp245 * _tmp246);
  const Scalar _tmp248 = Scalar(9.6622558468725703) * _tmp237;
  const Scalar _tmp249 =
      -_tmp229 * _tmp248 - std::sqrt(Scalar(std::pow(Scalar(-_tmp63 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp66 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp250 = Scalar(0.1034955) * _tmp230;
  const Scalar _tmp251 = _tmp249 * _tmp250;
  const Scalar _tmp252 = std::cosh(_tmp251);
  const Scalar _tmp253 = Scalar(0.1034955) * _tmp240 * _tmp249;
  const Scalar _tmp254 = Scalar(9.6622558468725703) * _tmp229;
  const Scalar _tmp255 = -Scalar(9.6622558468725703) * std::sinh(_tmp238) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp251);
  const Scalar _tmp256 = _tmp120 * _tmp131 + _tmp156 * _tmp168 + _tmp225 + _tmp227;
  const Scalar _tmp257 = std::pow(_tmp256, Scalar(-2));
  const Scalar _tmp258 = _tmp168 * _tmp179;
  const Scalar _tmp259 = _tmp131 * _tmp179;
  const Scalar _tmp260 = -_tmp117 * _tmp259 + _tmp140 * _tmp182 - _tmp148 * _tmp184 -
                         _tmp154 * _tmp258 - _tmp187 * _tmp189 + _tmp235;
  const Scalar _tmp261 =
      std::pow(Scalar(_tmp257 * std::pow(_tmp260, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp262 = Scalar(1.0) / (_tmp256);
  const Scalar _tmp263 = _tmp155 * _tmp168;
  const Scalar _tmp264 = _tmp131 * _tmp98;
  const Scalar _tmp265 = -_tmp107 * _tmp263 + _tmp115 * _tmp264 - _tmp119 * _tmp131 +
                         _tmp165 * _tmp168 - _tmp243 - _tmp244;
  const Scalar _tmp266 = _tmp257 * _tmp260;
  const Scalar _tmp267 =
      _tmp261 *
      (_tmp262 * (-_tmp104 * _tmp259 - _tmp110 * _tmp259 + _tmp114 * _tmp259 + _tmp148 * _tmp215 -
                  _tmp148 * _tmp217 - _tmp160 * _tmp258 - _tmp162 * _tmp258 + _tmp163 * _tmp258) -
       _tmp265 * _tmp266);
  const Scalar _tmp268 = std::asinh(_tmp260 * _tmp262);
  const Scalar _tmp269 = Scalar(1.0) * _tmp268;
  const Scalar _tmp270 = Scalar(1.0) * std::cosh(_tmp269);
  const Scalar _tmp271 = Scalar(9.6622558468725703) * _tmp256;
  const Scalar _tmp272 = -_tmp36 + p_d(1, 0);
  const Scalar _tmp273 = -_tmp26 + p_d(0, 0);
  const Scalar _tmp274 =
      std::sqrt(Scalar(std::pow(_tmp272, Scalar(2)) + std::pow(_tmp273, Scalar(2))));
  const Scalar _tmp275 = Scalar(1.0) / (_tmp274);
  const Scalar _tmp276 = Scalar(9.6622558468725703) * _tmp268;
  const Scalar _tmp277 = Scalar(0.1034955) * _tmp262;
  const Scalar _tmp278 = -_tmp268 * _tmp271 - _tmp274;
  const Scalar _tmp279 = Scalar(0.1034955) * _tmp257 * _tmp278;
  const Scalar _tmp280 = _tmp277 * _tmp278;
  const Scalar _tmp281 = std::cosh(_tmp280);
  const Scalar _tmp282 = -Scalar(9.6622558468725703) * std::sinh(_tmp269) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp280);
  const Scalar _tmp283 = _tmp38 * _tmp40;
  const Scalar _tmp284 = -_tmp283 + _tmp45 + _tmp57 * _tmp60;
  const Scalar _tmp285 = _tmp15 * _tmp283 - _tmp284 * _tmp73 - _tmp46 - _tmp58 * _tmp60;
  const Scalar _tmp286 = -_tmp284 * _tmp82 - _tmp285 * _tmp81 + _tmp44 * _tmp60 - _tmp74;
  const Scalar _tmp287 = _tmp106 * _tmp286;
  const Scalar _tmp288 = _tmp118 * _tmp287;
  const Scalar _tmp289 = _tmp103 * _tmp286;
  const Scalar _tmp290 =
      -_tmp25 * _tmp283 - _tmp284 * _tmp91 + _tmp35 * _tmp60 + _tmp60 * _tmp90 + _tmp84;
  const Scalar _tmp291 = _tmp109 * (-_tmp101 * _tmp290 + _tmp108 * _tmp287);
  const Scalar _tmp292 = _tmp111 * _tmp290;
  const Scalar _tmp293 = _tmp292 * _tmp97;
  const Scalar _tmp294 = _tmp102 * _tmp293;
  const Scalar _tmp295 = _tmp289 + _tmp291 - _tmp294;
  const Scalar _tmp296 = -_tmp120 * _tmp284 - _tmp122 * _tmp295 + _tmp288 * _tmp86;
  const Scalar _tmp297 = _tmp159 * _tmp286;
  const Scalar _tmp298 = _tmp153 * _tmp293;
  const Scalar _tmp299 = _tmp109 * (-_tmp152 * _tmp290 + _tmp161 * _tmp287);
  const Scalar _tmp300 = _tmp297 - _tmp298 + _tmp299;
  const Scalar _tmp301 = -_tmp122 * _tmp300 - _tmp156 * _tmp284 + _tmp166 * _tmp287;
  const Scalar _tmp302 = _tmp134 * _tmp287;
  const Scalar _tmp303 =
      -_tmp132 * (_tmp116 * _tmp295 + _tmp120 * _tmp60 + _tmp124 * _tmp296 - _tmp288 * _tmp92) -
      _tmp141 * (_tmp136 * _tmp302 + _tmp137 * _tmp60 - _tmp138 * _tmp284 - _tmp302 * _tmp92) -
      _tmp149 * (_tmp142 * _tmp60 + _tmp144 * _tmp292 - _tmp145 * _tmp292 - _tmp146 * _tmp284) -
      _tmp169 * (_tmp116 * _tmp300 + _tmp124 * _tmp301 + _tmp156 * _tmp60 - _tmp158 * _tmp287);
  const Scalar _tmp304 = -_tmp120 * _tmp285 + _tmp190 * _tmp289 + _tmp190 * _tmp291 -
                         _tmp190 * _tmp294 - _tmp208 * _tmp295 + _tmp288 * _tmp96;
  const Scalar _tmp305 = -_tmp156 * _tmp285 + _tmp190 * _tmp297 - _tmp190 * _tmp298 +
                         _tmp190 * _tmp299 - _tmp208 * _tmp300 + _tmp212 * _tmp287;
  const Scalar _tmp306 = _tmp180 * _tmp293;
  const Scalar _tmp307 = _tmp216 * _tmp286;
  const Scalar _tmp308 =
      -_tmp142 * _tmp285 - _tmp177 * _tmp306 + _tmp177 * _tmp307 + _tmp214 * _tmp292;
  const Scalar _tmp309 = -_tmp137 * _tmp285 + _tmp302 * _tmp96;
  const Scalar _tmp310 = _tmp207 * (_tmp174 * (_tmp186 * (-_tmp150 * _tmp308 - _tmp306 + _tmp307) +
                                               _tmp193 * (-_tmp150 * _tmp305 + _tmp180 * _tmp297 -
                                                          _tmp180 * _tmp298 + _tmp180 * _tmp299) +
                                               _tmp195 * (-_tmp150 * _tmp304 + _tmp180 * _tmp289 +
                                                          _tmp180 * _tmp291 - _tmp180 * _tmp294) -
                                               _tmp211 * _tmp309) -
                                    _tmp219 * _tmp303);
  const Scalar _tmp311 = _tmp140 * _tmp302;
  const Scalar _tmp312 = _tmp186 * _tmp292;
  const Scalar _tmp313 = _tmp223 * _tmp301 + _tmp224 * _tmp296 + _tmp226 * _tmp311 +
                         _tmp226 * _tmp312 - _tmp228 * _tmp284 - _tmp242 * _tmp284;
  const Scalar _tmp314 =
      _tmp241 *
      (_tmp230 * (_tmp231 * _tmp304 + _tmp232 * _tmp309 + _tmp233 * _tmp305 + _tmp234 * _tmp308) -
       _tmp246 * _tmp313);
  const Scalar _tmp315 = -_tmp131 * _tmp288 + _tmp168 * _tmp300 * _tmp98 - _tmp263 * _tmp287 +
                         _tmp264 * _tmp295 - _tmp311 - _tmp312;
  const Scalar _tmp316 =
      _tmp261 *
      (_tmp262 * (_tmp148 * _tmp306 - _tmp148 * _tmp307 - _tmp258 * _tmp297 + _tmp258 * _tmp298 -
                  _tmp258 * _tmp299 - _tmp259 * _tmp289 - _tmp259 * _tmp291 + _tmp259 * _tmp294) -
       _tmp266 * _tmp315);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp170 * _tmp203 +
      _tmp199 *
          (-_tmp220 * _tmp222 -
           _tmp221 * (-_tmp170 * _tmp205 + _tmp201 * (-_tmp170 * _tmp206 - _tmp199 * _tmp220)));
  _res(2, 0) =
      _tmp245 * _tmp255 +
      _tmp254 *
          (-_tmp239 * _tmp247 -
           _tmp252 * (-_tmp245 * _tmp253 + _tmp250 * (-_tmp245 * _tmp248 - _tmp247 * _tmp254)));
  _res(3, 0) =
      _tmp265 * _tmp282 +
      _tmp271 * (-_tmp267 * _tmp270 -
                 _tmp281 * (-_tmp265 * _tmp279 + _tmp277 * (-_tmp265 * _tmp276 - _tmp267 * _tmp271 -
                                                            _tmp273 * _tmp275)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp199 *
          (-_tmp221 * (_tmp201 * (-_tmp199 * _tmp310 - _tmp206 * _tmp303) - _tmp205 * _tmp303) -
           _tmp222 * _tmp310) +
      _tmp203 * _tmp303;
  _res(2, 1) =
      _tmp254 *
          (-_tmp239 * _tmp314 -
           _tmp252 * (_tmp250 * (-_tmp248 * _tmp313 - _tmp254 * _tmp314) - _tmp253 * _tmp313)) +
      _tmp255 * _tmp313;
  _res(3, 1) =
      _tmp271 * (-_tmp270 * _tmp316 -
                 _tmp281 * (_tmp277 * (-_tmp271 * _tmp316 - _tmp272 * _tmp275 - _tmp276 * _tmp315) -
                            _tmp279 * _tmp315)) +
      _tmp282 * _tmp315;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
