// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/pose3.h>
#include <sym/rot3.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: FK_residual_func_cost1_wrt_pd
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     DeltaRot: Rot3
 *     TransformationMatrix: Pose3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost1WrtPd(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Scalar epsilon) {
  // Total ops: 1061

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (333)
  const Scalar _tmp0 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp5 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp6 = 2 * _tmp2 * _tmp5;
  const Scalar _tmp7 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = _tmp6 - _tmp8;
  const Scalar _tmp10 = -Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0;
  const Scalar _tmp12 = _tmp11 * _tmp5;
  const Scalar _tmp13 = _tmp2 * _tmp7;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _TransformationMatrix[5] + _tmp16;
  const Scalar _tmp18 = _tmp17 - p_d(1, 0);
  const Scalar _tmp19 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp11 * _tmp2;
  const Scalar _tmp24 = _tmp5 * _tmp7;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = _tmp22 + _tmp28;
  const Scalar _tmp30 = _TransformationMatrix[4] + _tmp29;
  const Scalar _tmp31 = _tmp30 - p_d(0, 0);
  const Scalar _tmp32 = std::pow(_tmp31, Scalar(2));
  const Scalar _tmp33 = _tmp19 + _tmp32;
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp35 = _tmp26 - _tmp27;
  const Scalar _tmp36 = _tmp21 + _tmp35;
  const Scalar _tmp37 = -_tmp4;
  const Scalar _tmp38 = _tmp10 + _tmp14;
  const Scalar _tmp39 = _tmp37 + _tmp38;
  const Scalar _tmp40 = _TransformationMatrix[5] + _tmp39;
  const Scalar _tmp41 = _tmp40 - p_b(1, 0);
  const Scalar _tmp42 = _TransformationMatrix[4] + _tmp36;
  const Scalar _tmp43 = _tmp42 - p_b(0, 0);
  const Scalar _tmp44 =
      std::sqrt(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp43, Scalar(2))));
  const Scalar _tmp45 = Scalar(1.0) / (_tmp44);
  const Scalar _tmp46 = Scalar(1.0) / (_tmp43);
  const Scalar _tmp47 = _tmp44 * _tmp46;
  const Scalar _tmp48 = _tmp47 * (_tmp36 * _tmp41 * _tmp45 - _tmp39 * _tmp43 * _tmp45);
  const Scalar _tmp49 = _tmp34 * _tmp48;
  const Scalar _tmp50 = _tmp16 * _tmp34;
  const Scalar _tmp51 = _tmp21 + _tmp28;
  const Scalar _tmp52 = _TransformationMatrix[4] + _tmp51;
  const Scalar _tmp53 = _tmp52 - p_c(0, 0);
  const Scalar _tmp54 = _tmp38 + _tmp4;
  const Scalar _tmp55 = _TransformationMatrix[5] + _tmp54;
  const Scalar _tmp56 = _tmp55 - p_c(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp53 * _tmp57;
  const Scalar _tmp60 = _tmp48 * _tmp59 - _tmp51 * _tmp58 + _tmp54 * _tmp59;
  const Scalar _tmp61 = _tmp41 * _tmp46;
  const Scalar _tmp62 = _tmp34 * _tmp61;
  const Scalar _tmp63 = std::pow(_tmp33, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp64 = _tmp18 * _tmp31 * _tmp63;
  const Scalar _tmp65 = _tmp32 * _tmp63;
  const Scalar _tmp66 = _tmp61 * _tmp65 - _tmp62 - _tmp64;
  const Scalar _tmp67 = Scalar(1.0) / (-_tmp58 + _tmp59 * _tmp61);
  const Scalar _tmp68 = _tmp66 * _tmp67;
  const Scalar _tmp69 =
      _tmp16 * _tmp65 - _tmp29 * _tmp64 + _tmp48 * _tmp65 - _tmp49 - _tmp50 - _tmp60 * _tmp68;
  const Scalar _tmp70 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp71 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp72 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp73 = _tmp71 - _tmp72;
  const Scalar _tmp74 = _tmp70 + _tmp73;
  const Scalar _tmp75 = _tmp34 * _tmp74;
  const Scalar _tmp76 = -_tmp70;
  const Scalar _tmp77 = _tmp71 + _tmp72;
  const Scalar _tmp78 = _tmp76 + _tmp77;
  const Scalar _tmp79 = _tmp34 * _tmp78;
  const Scalar _tmp80 = _tmp31 * _tmp79;
  const Scalar _tmp81 = _tmp70 + _tmp77;
  const Scalar _tmp82 = _tmp59 * _tmp78 - _tmp59 * _tmp81;
  const Scalar _tmp83 = _tmp18 * _tmp34;
  const Scalar _tmp84 = _tmp31 * _tmp62 - _tmp83;
  const Scalar _tmp85 = _tmp67 * _tmp84;
  const Scalar _tmp86 = _tmp61 * _tmp78;
  const Scalar _tmp87 = _tmp58 * _tmp81 - _tmp59 * _tmp86;
  const Scalar _tmp88 = -_tmp61 * _tmp80 + _tmp74 * _tmp83 - _tmp85 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) * _tmp39;
  const Scalar _tmp90 = -_tmp89;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp54 + _tmp90);
  const Scalar _tmp92 = Scalar(1.0) * _tmp36;
  const Scalar _tmp93 = -_tmp51 + _tmp92;
  const Scalar _tmp94 = _tmp91 * _tmp93;
  const Scalar _tmp95 = -_tmp31 * _tmp75 + _tmp80 - _tmp82 * _tmp85 - _tmp88 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = Scalar(1.0) * _tmp67;
  const Scalar _tmp98 = Scalar(1.0) * _tmp91;
  const Scalar _tmp99 = _tmp67 * _tmp87;
  const Scalar _tmp100 = -_tmp82 * _tmp97 + _tmp93 * _tmp98 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp96;
  const Scalar _tmp102 = _tmp64 * _tmp74;
  const Scalar _tmp103 = _tmp102 + _tmp61 * _tmp79 - _tmp65 * _tmp86 - _tmp68 * _tmp87;
  const Scalar _tmp104 =
      -_tmp103 * _tmp94 - _tmp65 * _tmp74 + _tmp65 * _tmp78 - _tmp68 * _tmp82 + _tmp75 - _tmp79;
  const Scalar _tmp105 = -_tmp29 * _tmp83 + _tmp31 * _tmp49 + _tmp31 * _tmp50 - _tmp60 * _tmp85;
  const Scalar _tmp106 = std::pow(_tmp95, Scalar(-2));
  const Scalar _tmp107 = _tmp105 * _tmp106;
  const Scalar _tmp108 = _tmp104 * _tmp107;
  const Scalar _tmp109 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp110 = _tmp109 * _tmp95;
  const Scalar _tmp111 = _tmp110 * (_tmp100 * _tmp108 - _tmp101 * _tmp69);
  const Scalar _tmp112 = -_tmp101 * _tmp105 - _tmp60 * _tmp97;
  const Scalar _tmp113 = _tmp112 * _tmp95;
  const Scalar _tmp114 = std::pow(_tmp105, Scalar(-2));
  const Scalar _tmp115 = _tmp114 * _tmp69;
  const Scalar _tmp116 = _tmp113 * _tmp115;
  const Scalar _tmp117 = _tmp109 * _tmp112;
  const Scalar _tmp118 = _tmp104 * _tmp117;
  const Scalar _tmp119 = _tmp111 - _tmp116 + _tmp118;
  const Scalar _tmp120 = _tmp31 * _tmp34;
  const Scalar _tmp121 = _tmp120 * _tmp96;
  const Scalar _tmp122 = _tmp117 * _tmp95;
  const Scalar _tmp123 = _tmp100 + _tmp122;
  const Scalar _tmp124 = _tmp123 * _tmp96;
  const Scalar _tmp125 = _tmp106 * _tmp123;
  const Scalar _tmp126 = _tmp104 * _tmp125;
  const Scalar _tmp127 = _tmp124 * _tmp34;
  const Scalar _tmp128 = _tmp84 * _tmp96;
  const Scalar _tmp129 = -_tmp119 * _tmp128 - _tmp124 * _tmp66 + _tmp126 * _tmp84;
  const Scalar _tmp130 = _tmp59 * _tmp67;
  const Scalar _tmp131 = _tmp22 + _tmp35;
  const Scalar _tmp132 = _TransformationMatrix[4] + _tmp131 - p_a(0, 0);
  const Scalar _tmp133 = _tmp15 + _tmp37;
  const Scalar _tmp134 = _TransformationMatrix[5] + _tmp133 - p_a(1, 0);
  const Scalar _tmp135 =
      std::pow(Scalar(std::pow(_tmp132, Scalar(2)) + std::pow(_tmp134, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp136 = _tmp134 * _tmp135;
  const Scalar _tmp137 = _tmp136 * fh1;
  const Scalar _tmp138 = _tmp137 * _tmp47;
  const Scalar _tmp139 = Scalar(1.0) * _tmp109;
  const Scalar _tmp140 = _tmp139 * _tmp34;
  const Scalar _tmp141 = _tmp59 * _tmp85;
  const Scalar _tmp142 = Scalar(1.0) * _tmp141;
  const Scalar _tmp143 = Scalar(1.0) * _tmp120;
  const Scalar _tmp144 = _tmp139 * _tmp59;
  const Scalar _tmp145 = _tmp132 * _tmp135;
  const Scalar _tmp146 = fh1 * (_tmp131 * _tmp136 - _tmp133 * _tmp145);
  const Scalar _tmp147 = _tmp146 * _tmp47;
  const Scalar _tmp148 = _tmp61 * _tmp67;
  const Scalar _tmp149 = _tmp61 * _tmp99 + _tmp86;
  const Scalar _tmp150 = _tmp148 * _tmp82 - _tmp149 * _tmp94 - _tmp78;
  const Scalar _tmp151 = _tmp150 * _tmp96;
  const Scalar _tmp152 = -_tmp105 * _tmp151 + _tmp148 * _tmp60 - _tmp48;
  const Scalar _tmp153 = _tmp110 * _tmp152;
  const Scalar _tmp154 = _tmp150 + _tmp153;
  const Scalar _tmp155 = _tmp154 * _tmp96;
  const Scalar _tmp156 = _tmp155 * _tmp34;
  const Scalar _tmp157 = _tmp109 * _tmp152;
  const Scalar _tmp158 = _tmp104 * _tmp157;
  const Scalar _tmp159 = _tmp110 * (_tmp108 * _tmp150 - _tmp151 * _tmp69);
  const Scalar _tmp160 = _tmp152 * _tmp95;
  const Scalar _tmp161 = _tmp115 * _tmp160;
  const Scalar _tmp162 = _tmp158 + _tmp159 - _tmp161;
  const Scalar _tmp163 = _tmp154 * _tmp84;
  const Scalar _tmp164 = _tmp104 * _tmp106;
  const Scalar _tmp165 = -_tmp128 * _tmp162 - _tmp155 * _tmp66 + _tmp163 * _tmp164;
  const Scalar _tmp166 = _tmp120 * _tmp154;
  const Scalar _tmp167 = _tmp145 * fh1;
  const Scalar _tmp168 = _tmp167 * _tmp47;
  const Scalar _tmp169 = _tmp89 * _tmp94 + _tmp92;
  const Scalar _tmp170 = 0;
  const Scalar _tmp171 = _tmp170 * _tmp96;
  const Scalar _tmp172 = _tmp120 * _tmp170;
  const Scalar _tmp173 = _tmp141 * _tmp170;
  const Scalar _tmp174 = _tmp171 * _tmp34;
  const Scalar _tmp175 = _tmp171 * _tmp59;
  const Scalar _tmp176 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp177 = _tmp176 * _tmp47;
  const Scalar _tmp178 =
      -_tmp138 *
          (_tmp119 * _tmp121 - _tmp120 * _tmp126 + _tmp124 * _tmp65 - _tmp127 + _tmp129 * _tmp130) -
      _tmp147 *
          (_tmp115 * _tmp142 - _tmp115 * _tmp143 + _tmp139 * _tmp65 - _tmp140 - _tmp144 * _tmp68) -
      _tmp168 *
          (_tmp121 * _tmp162 + _tmp130 * _tmp165 + _tmp155 * _tmp65 - _tmp156 - _tmp164 * _tmp166) -
      _tmp177 *
          (-_tmp164 * _tmp172 + _tmp164 * _tmp173 + _tmp171 * _tmp65 - _tmp174 - _tmp175 * _tmp68);
  const Scalar _tmp179 = -_tmp123 * _tmp128 + Scalar(1.0);
  const Scalar _tmp180 = -_tmp128 * _tmp154 - _tmp61;
  const Scalar _tmp181 = -_tmp138 * (_tmp127 * _tmp31 + _tmp130 * _tmp179) -
                         _tmp147 * (_tmp140 * _tmp31 - _tmp144 * _tmp85) -
                         _tmp168 * (_tmp130 * _tmp180 + _tmp156 * _tmp31 + Scalar(1.0)) -
                         _tmp177 * (-_tmp128 * _tmp130 * _tmp170 + _tmp174 * _tmp31);
  const Scalar _tmp182 = Scalar(1.0) / (_tmp181);
  const Scalar _tmp183 = Scalar(0.1034955) * _tmp182;
  const Scalar _tmp184 = _tmp16 + _tmp90;
  const Scalar _tmp185 = _tmp184 * _tmp94;
  const Scalar _tmp186 = Scalar(1.0) / (-_tmp185 - _tmp29 + _tmp92);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = _tmp110 * _tmp187;
  const Scalar _tmp189 = -_tmp139 * _tmp88 + _tmp184 * _tmp188;
  const Scalar _tmp190 = Scalar(1.0) * _tmp146;
  const Scalar _tmp191 = _tmp88 * _tmp96;
  const Scalar _tmp192 = _tmp184 * _tmp186;
  const Scalar _tmp193 = _tmp149 + _tmp153 * _tmp192 - _tmp154 * _tmp191;
  const Scalar _tmp194 = Scalar(1.0) * _tmp167;
  const Scalar _tmp195 = fh1 * (_tmp73 + _tmp76);
  const Scalar _tmp196 = -_tmp133 * fv1 - _tmp136 * _tmp195 - Scalar(5.1796800000000003) * _tmp9;
  const Scalar _tmp197 = _tmp187 * _tmp94;
  const Scalar _tmp198 = _tmp185 * _tmp187 + Scalar(1.0);
  const Scalar _tmp199 = _tmp122 * _tmp192 - _tmp123 * _tmp191 - Scalar(1.0) * _tmp99;
  const Scalar _tmp200 = Scalar(1.0) * _tmp137;
  const Scalar _tmp201 = _tmp169 * _tmp186;
  const Scalar _tmp202 = -_tmp170 * _tmp191 - _tmp184 * _tmp201 + _tmp90;
  const Scalar _tmp203 = _tmp184 * _tmp91;
  const Scalar _tmp204 = _tmp131 * fv1 + _tmp145 * _tmp195 + Scalar(5.1796800000000003) * _tmp25;
  const Scalar _tmp205 =
      Scalar(1.0) * _tmp176 * (-_tmp169 * _tmp187 - _tmp202 * _tmp98 + Scalar(1.0)) +
      _tmp190 * (_tmp188 - _tmp189 * _tmp98) + _tmp194 * (_tmp153 * _tmp187 - _tmp193 * _tmp98) +
      Scalar(1.0) * _tmp196 * (_tmp197 - _tmp198 * _tmp98) +
      _tmp200 * (_tmp122 * _tmp187 - _tmp199 * _tmp98) +
      Scalar(1.0) * _tmp204 * (_tmp187 * _tmp203 - _tmp187);
  const Scalar _tmp206 = std::asinh(_tmp182 * _tmp205);
  const Scalar _tmp207 = Scalar(9.6622558468725703) * _tmp181;
  const Scalar _tmp208 =
      -_tmp206 * _tmp207 - std::sqrt(Scalar(std::pow(Scalar(-_tmp40 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp42 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp209 = _tmp183 * _tmp208;
  const Scalar _tmp210 = Scalar(1.0) * _tmp206;
  const Scalar _tmp211 = Scalar(9.6622558468725703) * _tmp183 * p_b(2, 0) -
                         Scalar(9.6622558468725703) * std::cosh(_tmp209) +
                         Scalar(9.6622558468725703) * std::cosh(_tmp210);
  const Scalar _tmp212 = std::pow(_tmp181, Scalar(-2));
  const Scalar _tmp213 = Scalar(0.1034955) * _tmp212;
  const Scalar _tmp214 = _tmp213 * p_b(2, 0);
  const Scalar _tmp215 = Scalar(9.6622558468725703) * _tmp206;
  const Scalar _tmp216 =
      std::pow(Scalar(std::pow(_tmp205, Scalar(2)) * _tmp212 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp217 = _tmp205 * _tmp212;
  const Scalar _tmp218 = _tmp164 * _tmp88;
  const Scalar _tmp219 = -_tmp103 * _tmp171 + _tmp170 * _tmp218;
  const Scalar _tmp220 = _tmp176 * _tmp98;
  const Scalar _tmp221 = -_tmp103 * _tmp124 + _tmp111 * _tmp192 - _tmp116 * _tmp192 +
                         _tmp118 * _tmp192 - _tmp119 * _tmp191 + _tmp126 * _tmp88;
  const Scalar _tmp222 = -_tmp103 * _tmp155 + _tmp154 * _tmp218 + _tmp158 * _tmp192 +
                         _tmp159 * _tmp192 - _tmp161 * _tmp192 - _tmp162 * _tmp191;
  const Scalar _tmp223 = _tmp187 * _tmp95;
  const Scalar _tmp224 = _tmp115 * _tmp223;
  const Scalar _tmp225 = Scalar(1.0) * _tmp88;
  const Scalar _tmp226 = _tmp109 * _tmp187;
  const Scalar _tmp227 = _tmp104 * _tmp226;
  const Scalar _tmp228 =
      -_tmp103 * _tmp139 + _tmp115 * _tmp225 - _tmp184 * _tmp224 + _tmp184 * _tmp227;
  const Scalar _tmp229 =
      _tmp216 * (-_tmp178 * _tmp217 + _tmp182 * (_tmp190 * (-_tmp224 + _tmp227 - _tmp228 * _tmp98) +
                                                 _tmp194 * (_tmp158 * _tmp187 + _tmp159 * _tmp187 -
                                                            _tmp161 * _tmp187 - _tmp222 * _tmp98) +
                                                 _tmp200 * (_tmp111 * _tmp187 - _tmp116 * _tmp187 +
                                                            _tmp118 * _tmp187 - _tmp221 * _tmp98) -
                                                 _tmp219 * _tmp220));
  const Scalar _tmp230 = _tmp208 * _tmp213;
  const Scalar _tmp231 = std::sinh(_tmp209);
  const Scalar _tmp232 = Scalar(1.0) * std::sinh(_tmp210);
  const Scalar _tmp233 = _tmp137 * _tmp67;
  const Scalar _tmp234 = _tmp171 * _tmp176;
  const Scalar _tmp235 = _tmp170 * _tmp176;
  const Scalar _tmp236 = _tmp164 * _tmp235;
  const Scalar _tmp237 = _tmp167 * _tmp67;
  const Scalar _tmp238 = _tmp115 * _tmp190;
  const Scalar _tmp239 = _tmp139 * _tmp146;
  const Scalar _tmp240 = _tmp129 * _tmp233 + _tmp165 * _tmp237 - _tmp234 * _tmp68 +
                         _tmp236 * _tmp85 + _tmp238 * _tmp85 - _tmp239 * _tmp68;
  const Scalar _tmp241 =
      -_tmp128 * _tmp235 * _tmp67 + _tmp179 * _tmp233 + _tmp180 * _tmp237 - _tmp239 * _tmp85;
  const Scalar _tmp242 = Scalar(1.0) / (_tmp241);
  const Scalar _tmp243 = _tmp146 * _tmp91;
  const Scalar _tmp244 = _tmp187 * _tmp204;
  const Scalar _tmp245 = _tmp176 * _tmp91;
  const Scalar _tmp246 = _tmp167 * _tmp91;
  const Scalar _tmp247 = _tmp137 * _tmp91;
  const Scalar _tmp248 = _tmp189 * _tmp243 + _tmp193 * _tmp246 + _tmp196 * _tmp198 * _tmp91 +
                         _tmp199 * _tmp247 + _tmp202 * _tmp245 - _tmp203 * _tmp244;
  const Scalar _tmp249 = std::asinh(_tmp242 * _tmp248);
  const Scalar _tmp250 = Scalar(9.6622558468725703) * _tmp241;
  const Scalar _tmp251 =
      -_tmp249 * _tmp250 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp252 = std::pow(_tmp241, Scalar(-2));
  const Scalar _tmp253 = Scalar(0.1034955) * _tmp252;
  const Scalar _tmp254 = _tmp251 * _tmp253;
  const Scalar _tmp255 =
      std::pow(Scalar(std::pow(_tmp248, Scalar(2)) * _tmp252 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp256 = _tmp248 * _tmp252;
  const Scalar _tmp257 =
      _tmp255 * (-_tmp240 * _tmp256 + _tmp242 * (_tmp219 * _tmp245 + _tmp221 * _tmp247 +
                                                 _tmp222 * _tmp246 + _tmp228 * _tmp243));
  const Scalar _tmp258 = Scalar(9.6622558468725703) * _tmp240;
  const Scalar _tmp259 = Scalar(0.1034955) * _tmp242;
  const Scalar _tmp260 = _tmp251 * _tmp259;
  const Scalar _tmp261 = std::sinh(_tmp260);
  const Scalar _tmp262 = Scalar(1.0) * _tmp249;
  const Scalar _tmp263 = Scalar(1.0) * std::sinh(_tmp262);
  const Scalar _tmp264 = _tmp253 * p_c(2, 0);
  const Scalar _tmp265 = _tmp259 * p_c(2, 0) - std::cosh(_tmp260) + std::cosh(_tmp262);
  const Scalar _tmp266 = _tmp167 * _tmp96;
  const Scalar _tmp267 = _tmp154 * _tmp167;
  const Scalar _tmp268 = _tmp119 * _tmp137 * _tmp96 - _tmp126 * _tmp137 + _tmp162 * _tmp266 -
                         _tmp164 * _tmp267 - _tmp236 - _tmp238;
  const Scalar _tmp269 = _tmp124 * _tmp137 + _tmp155 * _tmp167 + _tmp234 + _tmp239;
  const Scalar _tmp270 = Scalar(1.0) / (_tmp269);
  const Scalar _tmp271 = _tmp137 * _tmp186;
  const Scalar _tmp272 = _tmp167 * _tmp186;
  const Scalar _tmp273 = -_tmp122 * _tmp271 - _tmp146 * _tmp188 - _tmp153 * _tmp272 +
                         _tmp176 * _tmp201 - _tmp196 * _tmp197 + _tmp244;
  const Scalar _tmp274 = std::asinh(_tmp270 * _tmp273);
  const Scalar _tmp275 = Scalar(1.0) * _tmp274;
  const Scalar _tmp276 = Scalar(0.1034955) * _tmp270;
  const Scalar _tmp277 = -_tmp30 + p_d(0, 0);
  const Scalar _tmp278 = -_tmp17 + p_d(1, 0);
  const Scalar _tmp279 =
      std::sqrt(Scalar(std::pow(_tmp277, Scalar(2)) + std::pow(_tmp278, Scalar(2))));
  const Scalar _tmp280 = Scalar(9.6622558468725703) * _tmp274;
  const Scalar _tmp281 = -_tmp269 * _tmp280 - _tmp279;
  const Scalar _tmp282 = _tmp276 * _tmp281;
  const Scalar _tmp283 = Scalar(9.6622558468725703) * _tmp276 * p_d(2, 0) +
                         Scalar(9.6622558468725703) * std::cosh(_tmp275) -
                         Scalar(9.6622558468725703) * std::cosh(_tmp282);
  const Scalar _tmp284 = std::pow(_tmp269, Scalar(-2));
  const Scalar _tmp285 = Scalar(0.1034955) * _tmp284;
  const Scalar _tmp286 = _tmp285 * p_d(2, 0);
  const Scalar _tmp287 = _tmp273 * _tmp284;
  const Scalar _tmp288 =
      std::pow(Scalar(std::pow(_tmp273, Scalar(2)) * _tmp284 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp289 =
      _tmp288 *
      (-_tmp268 * _tmp287 +
       _tmp270 * (-_tmp111 * _tmp271 + _tmp116 * _tmp271 - _tmp118 * _tmp271 + _tmp146 * _tmp224 -
                  _tmp146 * _tmp227 - _tmp158 * _tmp272 - _tmp159 * _tmp272 + _tmp161 * _tmp272));
  const Scalar _tmp290 = Scalar(1.0) * std::sinh(_tmp275);
  const Scalar _tmp291 = std::sinh(_tmp282);
  const Scalar _tmp292 = Scalar(1.0) / (_tmp279);
  const Scalar _tmp293 = Scalar(9.6622558468725703) * _tmp269;
  const Scalar _tmp294 = _tmp281 * _tmp285;
  const Scalar _tmp295 = _tmp19 * _tmp63;
  const Scalar _tmp296 = -_tmp295 + _tmp34 + _tmp61 * _tmp64;
  const Scalar _tmp297 = _tmp295 * _tmp74 - _tmp296 * _tmp99 - _tmp64 * _tmp86 - _tmp75;
  const Scalar _tmp298 = _tmp296 * _tmp67;
  const Scalar _tmp299 = -_tmp102 - _tmp297 * _tmp94 - _tmp298 * _tmp82 + _tmp64 * _tmp78;
  const Scalar _tmp300 = _tmp106 * _tmp299;
  const Scalar _tmp301 = _tmp300 * _tmp88;
  const Scalar _tmp302 = _tmp170 * _tmp301 - _tmp171 * _tmp297;
  const Scalar _tmp303 =
      _tmp16 * _tmp64 - _tmp29 * _tmp295 + _tmp29 * _tmp34 - _tmp298 * _tmp60 + _tmp48 * _tmp64;
  const Scalar _tmp304 = _tmp303 * _tmp96;
  const Scalar _tmp305 = _tmp107 * _tmp299;
  const Scalar _tmp306 = _tmp110 * (-_tmp150 * _tmp304 + _tmp150 * _tmp305);
  const Scalar _tmp307 = _tmp157 * _tmp299;
  const Scalar _tmp308 = _tmp114 * _tmp303;
  const Scalar _tmp309 = _tmp160 * _tmp308;
  const Scalar _tmp310 = _tmp306 + _tmp307 - _tmp309;
  const Scalar _tmp311 = _tmp154 * _tmp301 - _tmp155 * _tmp297 - _tmp191 * _tmp310 +
                         _tmp192 * _tmp306 + _tmp192 * _tmp307 - _tmp192 * _tmp309;
  const Scalar _tmp312 = _tmp226 * _tmp299;
  const Scalar _tmp313 = _tmp223 * _tmp308;
  const Scalar _tmp314 =
      -_tmp139 * _tmp297 + _tmp184 * _tmp312 - _tmp184 * _tmp313 + _tmp225 * _tmp308;
  const Scalar _tmp315 = _tmp117 * _tmp299;
  const Scalar _tmp316 = _tmp113 * _tmp308;
  const Scalar _tmp317 = _tmp110 * (-_tmp100 * _tmp304 + _tmp100 * _tmp305);
  const Scalar _tmp318 = _tmp315 - _tmp316 + _tmp317;
  const Scalar _tmp319 = _tmp125 * _tmp299;
  const Scalar _tmp320 = -_tmp124 * _tmp297 - _tmp191 * _tmp318 + _tmp192 * _tmp315 -
                         _tmp192 * _tmp316 + _tmp192 * _tmp317 + _tmp319 * _tmp88;
  const Scalar _tmp321 = -_tmp128 * _tmp310 - _tmp155 * _tmp296 + _tmp163 * _tmp300;
  const Scalar _tmp322 = -_tmp124 * _tmp296 - _tmp128 * _tmp318 + _tmp319 * _tmp84;
  const Scalar _tmp323 = _tmp318 * _tmp96;
  const Scalar _tmp324 =
      -_tmp138 * (-_tmp120 * _tmp319 + _tmp120 * _tmp323 + _tmp124 * _tmp64 + _tmp130 * _tmp322) -
      _tmp147 * (_tmp139 * _tmp64 + _tmp142 * _tmp308 - _tmp143 * _tmp308 - _tmp144 * _tmp298) -
      _tmp168 * (_tmp121 * _tmp310 + _tmp130 * _tmp321 + _tmp155 * _tmp64 - _tmp166 * _tmp300) -
      _tmp177 * (_tmp171 * _tmp64 - _tmp172 * _tmp300 + _tmp173 * _tmp300 - _tmp175 * _tmp298);
  const Scalar _tmp325 = _tmp216 * (_tmp182 * (_tmp190 * (_tmp312 - _tmp313 - _tmp314 * _tmp98) +
                                               _tmp194 * (_tmp187 * _tmp306 + _tmp187 * _tmp307 -
                                                          _tmp187 * _tmp309 - _tmp311 * _tmp98) +
                                               _tmp200 * (_tmp187 * _tmp315 - _tmp187 * _tmp316 +
                                                          _tmp187 * _tmp317 - _tmp320 * _tmp98) -
                                               _tmp220 * _tmp302) -
                                    _tmp217 * _tmp324);
  const Scalar _tmp326 = _tmp235 * _tmp300;
  const Scalar _tmp327 = _tmp190 * _tmp308;
  const Scalar _tmp328 = _tmp233 * _tmp322 - _tmp234 * _tmp298 + _tmp237 * _tmp321 -
                         _tmp239 * _tmp298 + _tmp326 * _tmp85 + _tmp327 * _tmp85;
  const Scalar _tmp329 = Scalar(9.6622558468725703) * _tmp328;
  const Scalar _tmp330 =
      _tmp255 *
      (_tmp242 * (_tmp243 * _tmp314 + _tmp245 * _tmp302 + _tmp246 * _tmp311 + _tmp247 * _tmp320) -
       _tmp256 * _tmp328);
  const Scalar _tmp331 = -_tmp137 * _tmp319 + _tmp137 * _tmp323 + _tmp266 * _tmp310 -
                         _tmp267 * _tmp300 - _tmp326 - _tmp327;
  const Scalar _tmp332 =
      _tmp288 *
      (_tmp270 * (-_tmp146 * _tmp312 + _tmp146 * _tmp313 - _tmp271 * _tmp315 + _tmp271 * _tmp316 -
                  _tmp271 * _tmp317 - _tmp272 * _tmp306 - _tmp272 * _tmp307 + _tmp272 * _tmp309) -
       _tmp287 * _tmp331);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp178 * _tmp211 -
      _tmp207 *
          (-_tmp178 * _tmp214 + _tmp229 * _tmp232 -
           _tmp231 * (-_tmp178 * _tmp230 + _tmp183 * (-_tmp178 * _tmp215 - _tmp207 * _tmp229)));
  _res(2, 0) =
      -_tmp250 *
          (-_tmp240 * _tmp264 + _tmp257 * _tmp263 -
           _tmp261 * (-_tmp240 * _tmp254 + _tmp259 * (-_tmp249 * _tmp258 - _tmp250 * _tmp257))) -
      _tmp258 * _tmp265;
  _res(3, 0) =
      -_tmp268 * _tmp283 -
      _tmp293 * (-_tmp268 * _tmp286 + _tmp289 * _tmp290 -
                 _tmp291 * (-_tmp268 * _tmp294 + _tmp276 * (-_tmp268 * _tmp280 - _tmp277 * _tmp292 -
                                                            _tmp289 * _tmp293)));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp207 *
          (-_tmp214 * _tmp324 -
           _tmp231 * (_tmp183 * (-_tmp207 * _tmp325 - _tmp215 * _tmp324) - _tmp230 * _tmp324) +
           _tmp232 * _tmp325) -
      _tmp211 * _tmp324;
  _res(2, 1) =
      -_tmp250 *
          (-_tmp261 * (-_tmp254 * _tmp328 + _tmp259 * (-_tmp249 * _tmp329 - _tmp250 * _tmp330)) +
           _tmp263 * _tmp330 - _tmp264 * _tmp328) -
      _tmp265 * _tmp329;
  _res(3, 1) =
      -_tmp283 * _tmp331 -
      _tmp293 * (-_tmp286 * _tmp331 + _tmp290 * _tmp332 -
                 _tmp291 * (_tmp276 * (-_tmp278 * _tmp292 - _tmp280 * _tmp331 - _tmp293 * _tmp332) -
                            _tmp294 * _tmp331));
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = Scalar(-1.0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
