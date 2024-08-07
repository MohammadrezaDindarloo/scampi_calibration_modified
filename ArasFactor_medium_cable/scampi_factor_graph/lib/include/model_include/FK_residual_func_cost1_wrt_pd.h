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
 *     DeltaRot: Rot3
 *     TransformationMatrix: Pose3
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost1WrtPd(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar epsilon) {
  // Total ops: 1055

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (334)
  const Scalar _tmp0 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 =
      -_DeltaRot[0] * _TransformationMatrix[0] - _DeltaRot[1] * _TransformationMatrix[1] -
      _DeltaRot[2] * _TransformationMatrix[2] + _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp5 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp4 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp11 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp13 = _tmp0 * _tmp6;
  const Scalar _tmp14 = _tmp2 * _tmp4;
  const Scalar _tmp15 = _tmp13 - _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp12 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp9;
  const Scalar _tmp19 = _TransformationMatrix[5] + _tmp18;
  const Scalar _tmp20 = _tmp19 - p_d(1, 0);
  const Scalar _tmp21 = std::pow(_tmp20, Scalar(2));
  const Scalar _tmp22 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = _tmp2 * _tmp5;
  const Scalar _tmp26 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _TransformationMatrix[4] + _tmp31;
  const Scalar _tmp33 = _tmp32 - p_d(0, 0);
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 = _tmp21 + _tmp34;
  const Scalar _tmp36 = std::pow(_tmp35, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = _tmp28 - _tmp29;
  const Scalar _tmp38 = _tmp23 + _tmp37;
  const Scalar _tmp39 = -_tmp12 + _tmp16;
  const Scalar _tmp40 = _tmp39 + _tmp8;
  const Scalar _tmp41 = _TransformationMatrix[5] + _tmp40;
  const Scalar _tmp42 = _tmp41 - p_b(1, 0);
  const Scalar _tmp43 = _TransformationMatrix[4] + _tmp38;
  const Scalar _tmp44 = _tmp43 - p_b(0, 0);
  const Scalar _tmp45 =
      std::sqrt(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp44, Scalar(2))));
  const Scalar _tmp46 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp47 = Scalar(1.0) / (_tmp44);
  const Scalar _tmp48 = _tmp45 * _tmp47;
  const Scalar _tmp49 = _tmp48 * (_tmp38 * _tmp42 * _tmp46 - _tmp40 * _tmp44 * _tmp46);
  const Scalar _tmp50 = _tmp36 * _tmp49;
  const Scalar _tmp51 = _tmp18 * _tmp36;
  const Scalar _tmp52 = _tmp42 * _tmp47;
  const Scalar _tmp53 = _tmp36 * _tmp52;
  const Scalar _tmp54 = std::pow(_tmp35, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp55 = _tmp20 * _tmp33 * _tmp54;
  const Scalar _tmp56 = _tmp34 * _tmp54;
  const Scalar _tmp57 = _tmp52 * _tmp56 - _tmp53 - _tmp55;
  const Scalar _tmp58 = _tmp23 + _tmp30;
  const Scalar _tmp59 = _TransformationMatrix[4] + _tmp58;
  const Scalar _tmp60 = _tmp59 - p_c(0, 0);
  const Scalar _tmp61 = _tmp17 + _tmp8;
  const Scalar _tmp62 = _TransformationMatrix[5] + _tmp61;
  const Scalar _tmp63 = _tmp62 - p_c(1, 0);
  const Scalar _tmp64 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp63, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp60 * _tmp64;
  const Scalar _tmp66 = _tmp63 * _tmp64;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp52 * _tmp65 - _tmp66);
  const Scalar _tmp68 = _tmp67 * (_tmp49 * _tmp65 - _tmp58 * _tmp66 + _tmp61 * _tmp65);
  const Scalar _tmp69 =
      _tmp18 * _tmp56 - _tmp31 * _tmp55 + _tmp49 * _tmp56 - _tmp50 - _tmp51 - _tmp57 * _tmp68;
  const Scalar _tmp70 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp71 = -_tmp70;
  const Scalar _tmp72 = -Scalar(0.010999999999999999) * _tmp10 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp73 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp74 = _tmp72 + _tmp73;
  const Scalar _tmp75 = _tmp71 + _tmp74;
  const Scalar _tmp76 = _tmp36 * _tmp75;
  const Scalar _tmp77 = _tmp72 - _tmp73;
  const Scalar _tmp78 = _tmp70 + _tmp77;
  const Scalar _tmp79 = _tmp36 * _tmp78;
  const Scalar _tmp80 = _tmp33 * _tmp79;
  const Scalar _tmp81 = _tmp70 + _tmp74;
  const Scalar _tmp82 = _tmp65 * _tmp78 - _tmp65 * _tmp81;
  const Scalar _tmp83 = -_tmp20 * _tmp36 + _tmp33 * _tmp53;
  const Scalar _tmp84 = _tmp67 * _tmp83;
  const Scalar _tmp85 = _tmp52 * _tmp78;
  const Scalar _tmp86 = -_tmp65 * _tmp85 + _tmp66 * _tmp81;
  const Scalar _tmp87 = _tmp20 * _tmp76 - _tmp52 * _tmp80 - _tmp84 * _tmp86;
  const Scalar _tmp88 = Scalar(1.0) * _tmp40;
  const Scalar _tmp89 = -_tmp88;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp61 + _tmp89);
  const Scalar _tmp91 = Scalar(1.0) * _tmp38;
  const Scalar _tmp92 = -_tmp58 + _tmp91;
  const Scalar _tmp93 = _tmp90 * _tmp92;
  const Scalar _tmp94 = -_tmp33 * _tmp76 + _tmp80 - _tmp82 * _tmp84 - _tmp87 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp67 * _tmp82;
  const Scalar _tmp97 = Scalar(1.0) * _tmp90;
  const Scalar _tmp98 = _tmp67 * _tmp86;
  const Scalar _tmp99 = _tmp92 * _tmp97 * _tmp98 - Scalar(1.0) * _tmp96;
  const Scalar _tmp100 = _tmp95 * _tmp99;
  const Scalar _tmp101 = _tmp31 * _tmp36;
  const Scalar _tmp102 = -_tmp101 * _tmp20 + _tmp33 * _tmp50 + _tmp33 * _tmp51 - _tmp68 * _tmp83;
  const Scalar _tmp103 = _tmp56 * _tmp78;
  const Scalar _tmp104 = _tmp57 * _tmp67;
  const Scalar _tmp105 = _tmp55 * _tmp75;
  const Scalar _tmp106 = -_tmp103 * _tmp52 - _tmp104 * _tmp86 + _tmp105 + _tmp52 * _tmp79;
  const Scalar _tmp107 =
      _tmp103 - _tmp104 * _tmp82 - _tmp106 * _tmp93 - _tmp56 * _tmp75 + _tmp76 - _tmp79;
  const Scalar _tmp108 = std::pow(_tmp94, Scalar(-2));
  const Scalar _tmp109 = _tmp107 * _tmp108;
  const Scalar _tmp110 = _tmp102 * _tmp109;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp112 = _tmp111 * _tmp94;
  const Scalar _tmp113 = _tmp112 * (-_tmp100 * _tmp69 + _tmp110 * _tmp99);
  const Scalar _tmp114 = -_tmp100 * _tmp102 - Scalar(1.0) * _tmp68;
  const Scalar _tmp115 = _tmp114 * _tmp94;
  const Scalar _tmp116 = std::pow(_tmp102, Scalar(-2));
  const Scalar _tmp117 = _tmp116 * _tmp69;
  const Scalar _tmp118 = _tmp115 * _tmp117;
  const Scalar _tmp119 = _tmp107 * _tmp111;
  const Scalar _tmp120 = _tmp114 * _tmp119;
  const Scalar _tmp121 = _tmp113 - _tmp118 + _tmp120;
  const Scalar _tmp122 = _tmp36 * _tmp95;
  const Scalar _tmp123 = _tmp122 * _tmp33;
  const Scalar _tmp124 = _tmp112 * _tmp114;
  const Scalar _tmp125 = _tmp124 + _tmp99;
  const Scalar _tmp126 = _tmp125 * _tmp95;
  const Scalar _tmp127 = _tmp33 * _tmp36;
  const Scalar _tmp128 = _tmp109 * _tmp127;
  const Scalar _tmp129 = _tmp122 * _tmp125;
  const Scalar _tmp130 = _tmp83 * _tmp95;
  const Scalar _tmp131 = _tmp125 * _tmp83;
  const Scalar _tmp132 = _tmp109 * _tmp131 - _tmp121 * _tmp130 - _tmp126 * _tmp57;
  const Scalar _tmp133 = _tmp65 * _tmp67;
  const Scalar _tmp134 = _tmp24 + _tmp37;
  const Scalar _tmp135 = _TransformationMatrix[4] + _tmp134 - p_a(0, 0);
  const Scalar _tmp136 = _tmp39 + _tmp9;
  const Scalar _tmp137 = _TransformationMatrix[5] + _tmp136 - p_a(1, 0);
  const Scalar _tmp138 =
      std::pow(Scalar(std::pow(_tmp135, Scalar(2)) + std::pow(_tmp137, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp139 = _tmp137 * _tmp138;
  const Scalar _tmp140 = _tmp139 * fh1;
  const Scalar _tmp141 = _tmp140 * _tmp48;
  const Scalar _tmp142 = Scalar(1.0) * _tmp111;
  const Scalar _tmp143 = _tmp142 * _tmp36;
  const Scalar _tmp144 = _tmp65 * _tmp84;
  const Scalar _tmp145 = Scalar(1.0) * _tmp144;
  const Scalar _tmp146 = Scalar(1.0) * _tmp127;
  const Scalar _tmp147 = _tmp104 * _tmp65;
  const Scalar _tmp148 = _tmp135 * _tmp138;
  const Scalar _tmp149 = fh1 * (_tmp134 * _tmp139 - _tmp136 * _tmp148);
  const Scalar _tmp150 = _tmp149 * _tmp48;
  const Scalar _tmp151 = _tmp52 * _tmp98 + _tmp85;
  const Scalar _tmp152 = -_tmp151 * _tmp93 + _tmp52 * _tmp96 - _tmp78;
  const Scalar _tmp153 = _tmp152 * _tmp95;
  const Scalar _tmp154 = -_tmp102 * _tmp153 - _tmp49 + _tmp52 * _tmp68;
  const Scalar _tmp155 = _tmp112 * _tmp154;
  const Scalar _tmp156 = _tmp152 + _tmp155;
  const Scalar _tmp157 = _tmp122 * _tmp156;
  const Scalar _tmp158 = _tmp119 * _tmp154;
  const Scalar _tmp159 = _tmp112 * (_tmp110 * _tmp152 - _tmp153 * _tmp69);
  const Scalar _tmp160 = _tmp154 * _tmp94;
  const Scalar _tmp161 = _tmp117 * _tmp160;
  const Scalar _tmp162 = _tmp158 + _tmp159 - _tmp161;
  const Scalar _tmp163 = _tmp156 * _tmp95;
  const Scalar _tmp164 = _tmp156 * _tmp83;
  const Scalar _tmp165 = _tmp109 * _tmp164 - _tmp130 * _tmp162 - _tmp163 * _tmp57;
  const Scalar _tmp166 = _tmp148 * fh1;
  const Scalar _tmp167 = _tmp166 * _tmp48;
  const Scalar _tmp168 = _tmp88 * _tmp93 + _tmp91;
  const Scalar _tmp169 = 0;
  const Scalar _tmp170 = _tmp169 * _tmp95;
  const Scalar _tmp171 = _tmp144 * _tmp169;
  const Scalar _tmp172 = _tmp170 * _tmp36;
  const Scalar _tmp173 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp174 = _tmp173 * _tmp48;
  const Scalar _tmp175 =
      -_tmp141 *
          (_tmp121 * _tmp123 - _tmp125 * _tmp128 + _tmp126 * _tmp56 - _tmp129 + _tmp132 * _tmp133) -
      _tmp150 *
          (_tmp117 * _tmp145 - _tmp117 * _tmp146 - _tmp142 * _tmp147 + _tmp142 * _tmp56 - _tmp143) -
      _tmp167 *
          (_tmp123 * _tmp162 - _tmp128 * _tmp156 + _tmp133 * _tmp165 - _tmp157 + _tmp163 * _tmp56) -
      _tmp174 *
          (_tmp109 * _tmp171 - _tmp128 * _tmp169 - _tmp147 * _tmp170 + _tmp170 * _tmp56 - _tmp172);
  const Scalar _tmp176 = -_tmp125 * _tmp130 + Scalar(1.0);
  const Scalar _tmp177 = -_tmp130 * _tmp156 - _tmp52;
  const Scalar _tmp178 = -_tmp141 * (_tmp129 * _tmp33 + _tmp133 * _tmp176) -
                         _tmp150 * (-_tmp142 * _tmp144 + _tmp143 * _tmp33) -
                         _tmp167 * (_tmp133 * _tmp177 + _tmp157 * _tmp33 + Scalar(1.0)) -
                         _tmp174 * (-_tmp144 * _tmp170 + _tmp172 * _tmp33);
  const Scalar _tmp179 = Scalar(1.0) / (_tmp178);
  const Scalar _tmp180 = Scalar(0.1034955) * _tmp179;
  const Scalar _tmp181 = _tmp18 + _tmp89;
  const Scalar _tmp182 = _tmp181 * _tmp93;
  const Scalar _tmp183 = Scalar(1.0) / (-_tmp182 - _tmp31 + _tmp91);
  const Scalar _tmp184 = Scalar(1.0) * _tmp183;
  const Scalar _tmp185 = _tmp112 * _tmp184;
  const Scalar _tmp186 = -_tmp142 * _tmp87 + _tmp181 * _tmp185;
  const Scalar _tmp187 = Scalar(1.0) * _tmp149;
  const Scalar _tmp188 = _tmp87 * _tmp95;
  const Scalar _tmp189 = _tmp181 * _tmp183;
  const Scalar _tmp190 = _tmp151 + _tmp155 * _tmp189 - _tmp156 * _tmp188;
  const Scalar _tmp191 = Scalar(1.0) * _tmp166;
  const Scalar _tmp192 = fh1 * (_tmp71 + _tmp77);
  const Scalar _tmp193 = -_tmp136 * fv1 - _tmp139 * _tmp192 - Scalar(5.1796800000000003) * _tmp15;
  const Scalar _tmp194 = _tmp184 * _tmp93;
  const Scalar _tmp195 = _tmp182 * _tmp184 + Scalar(1.0);
  const Scalar _tmp196 = _tmp124 * _tmp189 - _tmp125 * _tmp188 - Scalar(1.0) * _tmp98;
  const Scalar _tmp197 = Scalar(1.0) * _tmp140;
  const Scalar _tmp198 = _tmp168 * _tmp183;
  const Scalar _tmp199 = -_tmp170 * _tmp87 - _tmp181 * _tmp198 + _tmp89;
  const Scalar _tmp200 = _tmp181 * _tmp90;
  const Scalar _tmp201 = _tmp134 * fv1 + _tmp148 * _tmp192 + Scalar(5.1796800000000003) * _tmp27;
  const Scalar _tmp202 =
      Scalar(1.0) * _tmp173 * (-_tmp168 * _tmp184 - _tmp199 * _tmp97 + Scalar(1.0)) +
      _tmp187 * (_tmp185 - _tmp186 * _tmp97) + _tmp191 * (_tmp155 * _tmp184 - _tmp190 * _tmp97) +
      Scalar(1.0) * _tmp193 * (_tmp194 - _tmp195 * _tmp97) +
      _tmp197 * (_tmp124 * _tmp184 - _tmp196 * _tmp97) +
      Scalar(1.0) * _tmp201 * (_tmp184 * _tmp200 - _tmp184);
  const Scalar _tmp203 = std::asinh(_tmp179 * _tmp202);
  const Scalar _tmp204 = Scalar(9.6622558468725703) * _tmp178;
  const Scalar _tmp205 =
      -_tmp203 * _tmp204 - std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp43 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp206 = _tmp180 * _tmp205;
  const Scalar _tmp207 = Scalar(1.0) * _tmp203;
  const Scalar _tmp208 = Scalar(9.6622558468725703) * _tmp180 * p_b(2, 0) -
                         Scalar(9.6622558468725703) * std::cosh(_tmp206) +
                         Scalar(9.6622558468725703) * std::cosh(_tmp207);
  const Scalar _tmp209 = std::pow(_tmp178, Scalar(-2));
  const Scalar _tmp210 = Scalar(0.1034955) * _tmp209;
  const Scalar _tmp211 = _tmp175 * _tmp210;
  const Scalar _tmp212 = _tmp202 * _tmp209;
  const Scalar _tmp213 = _tmp109 * _tmp87;
  const Scalar _tmp214 = -_tmp106 * _tmp170 + _tmp169 * _tmp213;
  const Scalar _tmp215 = _tmp173 * _tmp97;
  const Scalar _tmp216 = -_tmp106 * _tmp126 + _tmp113 * _tmp189 - _tmp118 * _tmp189 +
                         _tmp120 * _tmp189 - _tmp121 * _tmp188 + _tmp125 * _tmp213;
  const Scalar _tmp217 = _tmp156 * _tmp87;
  const Scalar _tmp218 = -_tmp106 * _tmp163 + _tmp109 * _tmp217 + _tmp158 * _tmp189 +
                         _tmp159 * _tmp189 - _tmp161 * _tmp189 - _tmp162 * _tmp188;
  const Scalar _tmp219 = _tmp184 * _tmp94;
  const Scalar _tmp220 = _tmp117 * _tmp219;
  const Scalar _tmp221 = Scalar(1.0) * _tmp87;
  const Scalar _tmp222 = _tmp119 * _tmp184;
  const Scalar _tmp223 =
      -_tmp106 * _tmp142 + _tmp117 * _tmp221 - _tmp181 * _tmp220 + _tmp181 * _tmp222;
  const Scalar _tmp224 =
      -_tmp175 * _tmp212 + _tmp179 * (_tmp187 * (-_tmp220 + _tmp222 - _tmp223 * _tmp97) +
                                      _tmp191 * (_tmp158 * _tmp184 + _tmp159 * _tmp184 -
                                                 _tmp161 * _tmp184 - _tmp218 * _tmp97) +
                                      _tmp197 * (_tmp113 * _tmp184 - _tmp118 * _tmp184 +
                                                 _tmp120 * _tmp184 - _tmp216 * _tmp97) -
                                      _tmp214 * _tmp215);
  const Scalar _tmp225 =
      std::pow(Scalar(std::pow(_tmp202, Scalar(2)) * _tmp209 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp226 = Scalar(1.0) * _tmp225 * std::sinh(_tmp207);
  const Scalar _tmp227 = Scalar(9.6622558468725703) * _tmp203;
  const Scalar _tmp228 = _tmp204 * _tmp225;
  const Scalar _tmp229 = std::sinh(_tmp206);
  const Scalar _tmp230 = _tmp170 * _tmp173;
  const Scalar _tmp231 = _tmp142 * _tmp149;
  const Scalar _tmp232 = _tmp67 * fh1;
  const Scalar _tmp233 = _tmp148 * _tmp232;
  const Scalar _tmp234 = _tmp139 * _tmp232;
  const Scalar _tmp235 =
      _tmp176 * _tmp234 + _tmp177 * _tmp233 - _tmp230 * _tmp84 - _tmp231 * _tmp84;
  const Scalar _tmp236 = Scalar(1.0) / (_tmp235);
  const Scalar _tmp237 = _tmp149 * _tmp90;
  const Scalar _tmp238 = _tmp184 * _tmp201;
  const Scalar _tmp239 = _tmp173 * _tmp90;
  const Scalar _tmp240 = _tmp166 * _tmp90;
  const Scalar _tmp241 = _tmp140 * _tmp90;
  const Scalar _tmp242 = _tmp186 * _tmp237 + _tmp190 * _tmp240 + _tmp193 * _tmp195 * _tmp90 +
                         _tmp196 * _tmp241 + _tmp199 * _tmp239 - _tmp200 * _tmp238;
  const Scalar _tmp243 = std::asinh(_tmp236 * _tmp242);
  const Scalar _tmp244 = Scalar(1.0) * _tmp243;
  const Scalar _tmp245 = Scalar(0.1034955) * _tmp236;
  const Scalar _tmp246 = Scalar(9.6622558468725703) * _tmp235;
  const Scalar _tmp247 =
      -_tmp243 * _tmp246 - std::sqrt(Scalar(std::pow(Scalar(-_tmp59 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp62 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp248 = _tmp245 * _tmp247;
  const Scalar _tmp249 = _tmp245 * p_c(2, 0) + std::cosh(_tmp244) - std::cosh(_tmp248);
  const Scalar _tmp250 = _tmp169 * _tmp173;
  const Scalar _tmp251 = _tmp109 * _tmp250;
  const Scalar _tmp252 = _tmp117 * _tmp187;
  const Scalar _tmp253 = -_tmp104 * _tmp230 - _tmp104 * _tmp231 + _tmp132 * _tmp234 +
                         _tmp165 * _tmp233 + _tmp251 * _tmp84 + _tmp252 * _tmp84;
  const Scalar _tmp254 = Scalar(9.6622558468725703) * _tmp253;
  const Scalar _tmp255 = std::pow(_tmp235, Scalar(-2));
  const Scalar _tmp256 =
      std::pow(Scalar(std::pow(_tmp242, Scalar(2)) * _tmp255 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp257 = _tmp242 * _tmp255;
  const Scalar _tmp258 =
      _tmp256 *
      (_tmp236 * (_tmp214 * _tmp239 + _tmp216 * _tmp241 + _tmp218 * _tmp240 + _tmp223 * _tmp237) -
       _tmp253 * _tmp257);
  const Scalar _tmp259 = Scalar(0.1034955) * _tmp255;
  const Scalar _tmp260 = _tmp247 * _tmp259;
  const Scalar _tmp261 = std::sinh(_tmp248);
  const Scalar _tmp262 = _tmp259 * p_c(2, 0);
  const Scalar _tmp263 = Scalar(1.0) * std::sinh(_tmp244);
  const Scalar _tmp264 = _tmp140 * _tmp95;
  const Scalar _tmp265 = _tmp166 * _tmp95;
  const Scalar _tmp266 = _tmp125 * _tmp140;
  const Scalar _tmp267 = -_tmp109 * _tmp156 * _tmp166 - _tmp109 * _tmp266 + _tmp121 * _tmp264 +
                         _tmp162 * _tmp265 - _tmp251 - _tmp252;
  const Scalar _tmp268 = _tmp126 * _tmp140 + _tmp163 * _tmp166 + _tmp230 + _tmp231;
  const Scalar _tmp269 = Scalar(1.0) / (_tmp268);
  const Scalar _tmp270 = Scalar(0.1034955) * _tmp269;
  const Scalar _tmp271 = -_tmp32 + p_d(0, 0);
  const Scalar _tmp272 = -_tmp19 + p_d(1, 0);
  const Scalar _tmp273 =
      std::sqrt(Scalar(std::pow(_tmp271, Scalar(2)) + std::pow(_tmp272, Scalar(2))));
  const Scalar _tmp274 = _tmp140 * _tmp183;
  const Scalar _tmp275 = _tmp166 * _tmp183;
  const Scalar _tmp276 = -_tmp124 * _tmp274 - _tmp149 * _tmp185 - _tmp155 * _tmp275 +
                         _tmp173 * _tmp198 - _tmp193 * _tmp194 + _tmp238;
  const Scalar _tmp277 = std::asinh(_tmp269 * _tmp276);
  const Scalar _tmp278 = Scalar(9.6622558468725703) * _tmp277;
  const Scalar _tmp279 = -_tmp268 * _tmp278 - _tmp273;
  const Scalar _tmp280 = _tmp270 * _tmp279;
  const Scalar _tmp281 = Scalar(1.0) * _tmp277;
  const Scalar _tmp282 = Scalar(9.6622558468725703) * _tmp270 * p_d(2, 0) -
                         Scalar(9.6622558468725703) * std::cosh(_tmp280) +
                         Scalar(9.6622558468725703) * std::cosh(_tmp281);
  const Scalar _tmp283 = std::pow(_tmp268, Scalar(-2));
  const Scalar _tmp284 = _tmp276 * _tmp283;
  const Scalar _tmp285 =
      std::pow(Scalar(std::pow(_tmp276, Scalar(2)) * _tmp283 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp286 =
      _tmp285 *
      (-_tmp267 * _tmp284 +
       _tmp269 * (-_tmp113 * _tmp274 + _tmp118 * _tmp274 - _tmp120 * _tmp274 + _tmp149 * _tmp220 -
                  _tmp149 * _tmp222 - _tmp158 * _tmp275 - _tmp159 * _tmp275 + _tmp161 * _tmp275));
  const Scalar _tmp287 = Scalar(1.0) * std::sinh(_tmp281);
  const Scalar _tmp288 = Scalar(0.1034955) * _tmp283;
  const Scalar _tmp289 = _tmp267 * _tmp288;
  const Scalar _tmp290 = std::sinh(_tmp280);
  const Scalar _tmp291 = Scalar(1.0) / (_tmp273);
  const Scalar _tmp292 = Scalar(9.6622558468725703) * _tmp268;
  const Scalar _tmp293 = _tmp21 * _tmp54;
  const Scalar _tmp294 = -_tmp293 + _tmp36 + _tmp52 * _tmp55;
  const Scalar _tmp295 =
      _tmp101 + _tmp18 * _tmp55 - _tmp293 * _tmp31 - _tmp294 * _tmp68 + _tmp49 * _tmp55;
  const Scalar _tmp296 = _tmp116 * _tmp295;
  const Scalar _tmp297 = _tmp133 * _tmp294;
  const Scalar _tmp298 = _tmp293 * _tmp75 - _tmp294 * _tmp98 - _tmp55 * _tmp85 - _tmp76;
  const Scalar _tmp299 = -_tmp105 - _tmp294 * _tmp96 - _tmp298 * _tmp93 + _tmp55 * _tmp78;
  const Scalar _tmp300 = _tmp108 * _tmp299;
  const Scalar _tmp301 = _tmp102 * _tmp300;
  const Scalar _tmp302 = _tmp112 * (_tmp152 * _tmp301 - _tmp153 * _tmp295);
  const Scalar _tmp303 = _tmp111 * _tmp299;
  const Scalar _tmp304 = _tmp154 * _tmp303;
  const Scalar _tmp305 = _tmp160 * _tmp296;
  const Scalar _tmp306 = _tmp302 + _tmp304 - _tmp305;
  const Scalar _tmp307 = -_tmp130 * _tmp306 - _tmp163 * _tmp294 + _tmp164 * _tmp300;
  const Scalar _tmp308 = _tmp156 * _tmp300;
  const Scalar _tmp309 = _tmp127 * _tmp300;
  const Scalar _tmp310 = _tmp115 * _tmp296;
  const Scalar _tmp311 = _tmp112 * (-_tmp100 * _tmp295 + _tmp301 * _tmp99);
  const Scalar _tmp312 = _tmp114 * _tmp303;
  const Scalar _tmp313 = -_tmp310 + _tmp311 + _tmp312;
  const Scalar _tmp314 = -_tmp126 * _tmp294 - _tmp130 * _tmp313 + _tmp131 * _tmp300;
  const Scalar _tmp315 =
      -_tmp141 * (_tmp123 * _tmp313 - _tmp125 * _tmp309 + _tmp126 * _tmp55 + _tmp133 * _tmp314) -
      _tmp150 * (-_tmp142 * _tmp297 + _tmp142 * _tmp55 + _tmp145 * _tmp296 - _tmp146 * _tmp296) -
      _tmp167 * (_tmp123 * _tmp306 - _tmp127 * _tmp308 + _tmp133 * _tmp307 + _tmp163 * _tmp55) -
      _tmp174 * (-_tmp169 * _tmp309 - _tmp170 * _tmp297 + _tmp170 * _tmp55 + _tmp171 * _tmp300);
  const Scalar _tmp316 = _tmp210 * _tmp315;
  const Scalar _tmp317 = _tmp300 * _tmp87;
  const Scalar _tmp318 = _tmp169 * _tmp317 - _tmp170 * _tmp298;
  const Scalar _tmp319 = -_tmp163 * _tmp298 - _tmp188 * _tmp306 + _tmp189 * _tmp302 +
                         _tmp189 * _tmp304 - _tmp189 * _tmp305 + _tmp217 * _tmp300;
  const Scalar _tmp320 = _tmp184 * _tmp303;
  const Scalar _tmp321 = _tmp219 * _tmp296;
  const Scalar _tmp322 =
      -_tmp142 * _tmp298 + _tmp181 * _tmp320 - _tmp181 * _tmp321 + _tmp221 * _tmp296;
  const Scalar _tmp323 = _tmp125 * _tmp317 - _tmp126 * _tmp298 - _tmp188 * _tmp313 -
                         _tmp189 * _tmp310 + _tmp189 * _tmp311 + _tmp189 * _tmp312;
  const Scalar _tmp324 = _tmp179 * (_tmp187 * (_tmp320 - _tmp321 - _tmp322 * _tmp97) +
                                    _tmp191 * (_tmp184 * _tmp302 + _tmp184 * _tmp304 -
                                               _tmp184 * _tmp305 - _tmp319 * _tmp97) +
                                    _tmp197 * (-_tmp184 * _tmp310 + _tmp184 * _tmp311 +
                                               _tmp184 * _tmp312 - _tmp323 * _tmp97) -
                                    _tmp215 * _tmp318) -
                         _tmp212 * _tmp315;
  const Scalar _tmp325 = _tmp294 * _tmp67;
  const Scalar _tmp326 = _tmp250 * _tmp300;
  const Scalar _tmp327 = _tmp187 * _tmp296;
  const Scalar _tmp328 = -_tmp230 * _tmp325 - _tmp231 * _tmp325 + _tmp233 * _tmp307 +
                         _tmp234 * _tmp314 + _tmp326 * _tmp84 + _tmp327 * _tmp84;
  const Scalar _tmp329 =
      _tmp256 *
      (_tmp236 * (_tmp237 * _tmp322 + _tmp239 * _tmp318 + _tmp240 * _tmp319 + _tmp241 * _tmp323) -
       _tmp257 * _tmp328);
  const Scalar _tmp330 = Scalar(9.6622558468725703) * _tmp328;
  const Scalar _tmp331 = -_tmp166 * _tmp308 + _tmp264 * _tmp313 + _tmp265 * _tmp306 -
                         _tmp266 * _tmp300 - _tmp326 - _tmp327;
  const Scalar _tmp332 =
      _tmp285 *
      (_tmp269 * (-_tmp149 * _tmp320 + _tmp149 * _tmp321 + _tmp274 * _tmp310 - _tmp274 * _tmp311 -
                  _tmp274 * _tmp312 - _tmp275 * _tmp302 - _tmp275 * _tmp304 + _tmp275 * _tmp305) -
       _tmp284 * _tmp331);
  const Scalar _tmp333 = _tmp288 * _tmp331;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp175 * _tmp208 -
      _tmp204 *
          (-_tmp211 * p_b(2, 0) + _tmp224 * _tmp226 -
           _tmp229 * (_tmp180 * (-_tmp175 * _tmp227 - _tmp224 * _tmp228) - _tmp205 * _tmp211));
  _res(2, 0) =
      -_tmp246 *
          (-_tmp253 * _tmp262 + _tmp258 * _tmp263 -
           _tmp261 * (_tmp245 * (-_tmp243 * _tmp254 - _tmp246 * _tmp258) - _tmp253 * _tmp260)) -
      _tmp249 * _tmp254;
  _res(3, 0) =
      -_tmp267 * _tmp282 -
      _tmp292 * (_tmp286 * _tmp287 - _tmp289 * p_d(2, 0) -
                 _tmp290 * (_tmp270 * (-_tmp267 * _tmp278 - _tmp271 * _tmp291 - _tmp286 * _tmp292) -
                            _tmp279 * _tmp289));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp204 *
          (_tmp226 * _tmp324 -
           _tmp229 * (_tmp180 * (-_tmp227 * _tmp315 - _tmp228 * _tmp324) - _tmp205 * _tmp316) -
           _tmp316 * p_b(2, 0)) -
      _tmp208 * _tmp315;
  _res(2, 1) =
      -_tmp246 *
          (-_tmp261 * (_tmp245 * (-_tmp243 * _tmp330 - _tmp246 * _tmp329) - _tmp260 * _tmp328) -
           _tmp262 * _tmp328 + _tmp263 * _tmp329) -
      _tmp249 * _tmp330;
  _res(3, 1) =
      -_tmp282 * _tmp331 -
      _tmp292 * (_tmp287 * _tmp332 -
                 _tmp290 * (_tmp270 * (-_tmp272 * _tmp291 - _tmp278 * _tmp331 - _tmp292 * _tmp332) -
                            _tmp279 * _tmp333) -
                 _tmp333 * p_d(2, 0));
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = Scalar(-1.0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
