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
 * Symbolic function: FK_residual_func_cost4_wrt_pa
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     ofset0: Scalar
 *     ofset1: Scalar
 *     ofset2: Scalar
 *     ofset3: Scalar
 *     distance_measure: Matrix41
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost4WrtPa(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& distance_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const sym::Pose3<Scalar>& TransformationMatrix,
    const Scalar epsilon) {
  // Total ops: 756

  // Unused inputs
  (void)ofset0;
  (void)ofset1;
  (void)ofset2;
  (void)ofset3;
  (void)distance_measure;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (273)
  const Scalar _tmp0 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp5 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp12 = _tmp2 * _tmp4;
  const Scalar _tmp13 = _tmp0 * _tmp5;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _TransformationMatrix[4] + _tmp17;
  const Scalar _tmp19 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp20 = Scalar(1.0) / (fh1);
  const Scalar _tmp21 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp9 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp25 = _tmp1 * _tmp5;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _TransformationMatrix[5] + _tmp30;
  const Scalar _tmp32 = -_tmp31 + p_a(1, 0);
  const Scalar _tmp33 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp32, Scalar(2))));
  const Scalar _tmp34 =
      Scalar(1.0) *
      std::cosh(Scalar(0.1034955) * _tmp20 *
                (-_tmp33 - Scalar(9.6622558468725703) * fh1 * std::asinh(_tmp20 * fv1))) /
      _tmp33;
  const Scalar _tmp35 = _tmp31 - p_a(1, 0);
  const Scalar _tmp36 = _tmp18 - p_a(0, 0);
  const Scalar _tmp37 = std::pow(_tmp36, Scalar(2));
  const Scalar _tmp38 = std::pow(_tmp35, Scalar(2));
  const Scalar _tmp39 = _tmp37 + _tmp38;
  const Scalar _tmp40 = std::pow(_tmp39, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp17 * _tmp40;
  const Scalar _tmp42 = _tmp30 * _tmp40;
  const Scalar _tmp43 = fh1 * (_tmp35 * _tmp41 - _tmp36 * _tmp42);
  const Scalar _tmp44 = _tmp16 + _tmp7;
  const Scalar _tmp45 = _tmp11 + _tmp15;
  const Scalar _tmp46 = _tmp45 + _tmp8;
  const Scalar _tmp47 = Scalar(1.0) * _tmp46;
  const Scalar _tmp48 = _tmp27 + _tmp28;
  const Scalar _tmp49 = _tmp23 + _tmp48;
  const Scalar _tmp50 = Scalar(1.0) * _tmp49;
  const Scalar _tmp51 = -_tmp50;
  const Scalar _tmp52 = _tmp22 + _tmp29;
  const Scalar _tmp53 = _tmp51 + _tmp52;
  const Scalar _tmp54 = _tmp22 + _tmp48;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp51 + _tmp54);
  const Scalar _tmp56 = _tmp45 + _tmp7;
  const Scalar _tmp57 = _tmp55 * (_tmp47 - _tmp56);
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (-_tmp44 + _tmp47 - _tmp58);
  const Scalar _tmp60 = Scalar(1.0) * _tmp59;
  const Scalar _tmp61 = _TransformationMatrix[5] + _tmp52;
  const Scalar _tmp62 = _tmp61 - p_d(1, 0);
  const Scalar _tmp63 = _TransformationMatrix[4] + _tmp44;
  const Scalar _tmp64 = _tmp63 - p_d(0, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp62 * _tmp65;
  const Scalar _tmp67 = _tmp64 * _tmp65;
  const Scalar _tmp68 = _TransformationMatrix[5] + _tmp49;
  const Scalar _tmp69 = _tmp68 - p_b(1, 0);
  const Scalar _tmp70 = _TransformationMatrix[4] + _tmp46;
  const Scalar _tmp71 = _tmp70 - p_b(0, 0);
  const Scalar _tmp72 = Scalar(1.0) / (_tmp71);
  const Scalar _tmp73 = _tmp69 * _tmp72;
  const Scalar _tmp74 = -_tmp66 + _tmp67 * _tmp73;
  const Scalar _tmp75 = _TransformationMatrix[4] + _tmp56;
  const Scalar _tmp76 = _tmp75 - p_c(0, 0);
  const Scalar _tmp77 = _TransformationMatrix[5] + _tmp54;
  const Scalar _tmp78 = _tmp77 - p_c(1, 0);
  const Scalar _tmp79 = std::pow(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp78, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp80 = _tmp76 * _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp79;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp73 * _tmp80 - _tmp81);
  const Scalar _tmp83 =
      std::sqrt(Scalar(std::pow(_tmp69, Scalar(2)) + std::pow(_tmp71, Scalar(2))));
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 = _tmp72 * _tmp83;
  const Scalar _tmp86 = _tmp85 * (_tmp46 * _tmp69 * _tmp84 - _tmp49 * _tmp71 * _tmp84);
  const Scalar _tmp87 = _tmp82 * (_tmp54 * _tmp80 - _tmp56 * _tmp81 + _tmp80 * _tmp86);
  const Scalar _tmp88 = -_tmp44 * _tmp66 + _tmp52 * _tmp67 + _tmp67 * _tmp86 - _tmp74 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp91 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp92 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp93 = _tmp91 - _tmp92;
  const Scalar _tmp94 = _tmp90 + _tmp93;
  const Scalar _tmp95 = -_tmp90;
  const Scalar _tmp96 = _tmp91 + _tmp92;
  const Scalar _tmp97 = _tmp95 + _tmp96;
  const Scalar _tmp98 = _tmp90 + _tmp96;
  const Scalar _tmp99 = _tmp82 * (_tmp80 * _tmp97 - _tmp80 * _tmp98);
  const Scalar _tmp100 = _tmp73 * _tmp97;
  const Scalar _tmp101 = _tmp82 * (-_tmp100 * _tmp80 + _tmp81 * _tmp98);
  const Scalar _tmp102 = -_tmp100 * _tmp67 - _tmp101 * _tmp74 + _tmp66 * _tmp94;
  const Scalar _tmp103 = -_tmp102 * _tmp57 - _tmp67 * _tmp94 + _tmp67 * _tmp97 - _tmp74 * _tmp99;
  const Scalar _tmp104 = _tmp103 * _tmp89;
  const Scalar _tmp105 = _tmp104 * _tmp60;
  const Scalar _tmp106 = Scalar(1.0) * _tmp89;
  const Scalar _tmp107 = -_tmp102 * _tmp106 + _tmp105 * _tmp53;
  const Scalar _tmp108 = Scalar(1.0) * _tmp55;
  const Scalar _tmp109 = Scalar(1.0) * _tmp105 - Scalar(1.0) * _tmp107 * _tmp108;
  const Scalar _tmp110 = _tmp100 + _tmp101 * _tmp73;
  const Scalar _tmp111 = -_tmp110 * _tmp57 + _tmp73 * _tmp99 - _tmp97;
  const Scalar _tmp112 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp113 = _tmp112 * _tmp88;
  const Scalar _tmp114 = _tmp104 * (-_tmp111 * _tmp113 + _tmp73 * _tmp87 - _tmp86);
  const Scalar _tmp115 = _tmp111 + _tmp114;
  const Scalar _tmp116 = _tmp102 * _tmp112;
  const Scalar _tmp117 = _tmp53 * _tmp59;
  const Scalar _tmp118 = _tmp110 + _tmp114 * _tmp117 - _tmp115 * _tmp116;
  const Scalar _tmp119 = -_tmp108 * _tmp118 + _tmp114 * _tmp60;
  const Scalar _tmp120 = _tmp40 * fh1;
  const Scalar _tmp121 = Scalar(1.0) * _tmp120;
  const Scalar _tmp122 = _tmp119 * _tmp121;
  const Scalar _tmp123 = Scalar(1.0) * _tmp101;
  const Scalar _tmp124 = _tmp123 * _tmp57 - Scalar(1.0) * _tmp99;
  const Scalar _tmp125 = _tmp104 * (-_tmp113 * _tmp124 - Scalar(1.0) * _tmp87);
  const Scalar _tmp126 = _tmp124 + _tmp125;
  const Scalar _tmp127 = -_tmp116 * _tmp126 + _tmp117 * _tmp125 - _tmp123;
  const Scalar _tmp128 = -_tmp108 * _tmp127 + _tmp125 * _tmp60;
  const Scalar _tmp129 = _tmp121 * _tmp128;
  const Scalar _tmp130 = _tmp47 + _tmp50 * _tmp57;
  const Scalar _tmp131 = 0;
  const Scalar _tmp132 = _tmp130 * _tmp59;
  const Scalar _tmp133 = -_tmp116 * _tmp131 - _tmp132 * _tmp53 + _tmp51;
  const Scalar _tmp134 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp135 = _tmp93 + _tmp95;
  const Scalar _tmp136 = _tmp120 * _tmp135;
  const Scalar _tmp137 = _tmp136 * _tmp36 + Scalar(3.29616) * _tmp14 + _tmp17 * fv1;
  const Scalar _tmp138 = _tmp53 * _tmp55;
  const Scalar _tmp139 = _tmp138 * _tmp60;
  const Scalar _tmp140 = Scalar(1.0) * _tmp139 - Scalar(1.0) * _tmp60;
  const Scalar _tmp141 = -_tmp136 * _tmp35 - Scalar(3.29616) * _tmp26 - _tmp30 * fv1;
  const Scalar _tmp142 = _tmp57 * _tmp60;
  const Scalar _tmp143 = _tmp58 * _tmp60 + Scalar(1.0);
  const Scalar _tmp144 = -Scalar(1.0) * _tmp108 * _tmp143 + Scalar(1.0) * _tmp142;
  const Scalar _tmp145 =
      _tmp109 * _tmp43 + _tmp122 * _tmp36 + _tmp129 * _tmp35 +
      Scalar(1.0) * _tmp134 * (-_tmp108 * _tmp133 - _tmp130 * _tmp60 + Scalar(1.0)) +
      _tmp137 * _tmp140 + _tmp141 * _tmp144;
  const Scalar _tmp146 = _tmp112 * _tmp131;
  const Scalar _tmp147 = _tmp80 * _tmp82;
  const Scalar _tmp148 = _tmp147 * _tmp74;
  const Scalar _tmp149 = _tmp112 * _tmp74;
  const Scalar _tmp150 = -_tmp126 * _tmp149 + Scalar(1.0);
  const Scalar _tmp151 = _tmp112 * _tmp67;
  const Scalar _tmp152 = _tmp126 * _tmp151 + _tmp147 * _tmp150;
  const Scalar _tmp153 = _tmp120 * _tmp85;
  const Scalar _tmp154 = _tmp152 * _tmp153;
  const Scalar _tmp155 = -_tmp115 * _tmp149 - _tmp73;
  const Scalar _tmp156 = _tmp115 * _tmp151 + _tmp147 * _tmp155 + Scalar(1.0);
  const Scalar _tmp157 = _tmp153 * _tmp156;
  const Scalar _tmp158 = _tmp85 * (-_tmp106 * _tmp148 + _tmp106 * _tmp67);
  const Scalar _tmp159 = -_tmp134 * _tmp85 * (-_tmp146 * _tmp148 + _tmp146 * _tmp67) -
                         _tmp154 * _tmp35 - _tmp157 * _tmp36 - _tmp158 * _tmp43;
  const Scalar _tmp160 = Scalar(1.0) / (_tmp159);
  const Scalar _tmp161 = std::asinh(_tmp145 * _tmp160);
  const Scalar _tmp162 = Scalar(1.0) * _tmp161;
  const Scalar _tmp163 = Scalar(9.6622558468725703) * _tmp159;
  const Scalar _tmp164 =
      -_tmp161 * _tmp163 - std::sqrt(Scalar(std::pow(Scalar(-_tmp68 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp70 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp165 = Scalar(0.1034955) * _tmp160;
  const Scalar _tmp166 = _tmp164 * _tmp165;
  const Scalar _tmp167 = -std::sinh(_tmp162) - std::sinh(_tmp166);
  const Scalar _tmp168 = _tmp35 * _tmp36;
  const Scalar _tmp169 = std::pow(_tmp39, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp170 = _tmp169 * fh1;
  const Scalar _tmp171 = _tmp168 * _tmp170;
  const Scalar _tmp172 = _tmp152 * _tmp85;
  const Scalar _tmp173 = _tmp170 * _tmp37;
  const Scalar _tmp174 = _tmp156 * _tmp85;
  const Scalar _tmp175 = _tmp169 * _tmp30;
  const Scalar _tmp176 = _tmp169 * _tmp17;
  const Scalar _tmp177 = _tmp168 * _tmp176 - _tmp175 * _tmp37 + _tmp42;
  const Scalar _tmp178 = _tmp177 * fh1;
  const Scalar _tmp179 = _tmp157 - _tmp158 * _tmp178 - _tmp171 * _tmp172 - _tmp173 * _tmp174;
  const Scalar _tmp180 = Scalar(9.6622558468725703) * _tmp179;
  const Scalar _tmp181 = std::pow(_tmp159, Scalar(-2));
  const Scalar _tmp182 = Scalar(0.1034955) * _tmp164 * _tmp181;
  const Scalar _tmp183 =
      std::pow(Scalar(std::pow(_tmp145, Scalar(2)) * _tmp181 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp184 = _tmp135 * _tmp170;
  const Scalar _tmp185 = _tmp168 * _tmp184;
  const Scalar _tmp186 = Scalar(1.0) * _tmp119;
  const Scalar _tmp187 = -_tmp136 + _tmp184 * _tmp37;
  const Scalar _tmp188 = Scalar(1.0) * _tmp128;
  const Scalar _tmp189 = _tmp145 * _tmp181;
  const Scalar _tmp190 =
      _tmp183 * (_tmp160 * (_tmp109 * _tmp178 - _tmp122 + _tmp140 * _tmp187 - _tmp144 * _tmp185 +
                            _tmp171 * _tmp188 + _tmp173 * _tmp186) -
                 _tmp179 * _tmp189);
  const Scalar _tmp191 = std::cosh(_tmp166);
  const Scalar _tmp192 = Scalar(1.0) * std::cosh(_tmp162);
  const Scalar _tmp193 = _tmp143 * _tmp55;
  const Scalar _tmp194 = _tmp107 * _tmp55;
  const Scalar _tmp195 = _tmp137 * _tmp60;
  const Scalar _tmp196 = _tmp120 * _tmp55;
  const Scalar _tmp197 = _tmp118 * _tmp196;
  const Scalar _tmp198 = _tmp127 * _tmp196;
  const Scalar _tmp199 = _tmp133 * _tmp134 * _tmp55 - _tmp138 * _tmp195 + _tmp141 * _tmp193 +
                         _tmp194 * _tmp43 + _tmp197 * _tmp36 + _tmp198 * _tmp35;
  const Scalar _tmp200 = _tmp134 * _tmp146;
  const Scalar _tmp201 = _tmp74 * _tmp82;
  const Scalar _tmp202 = _tmp106 * _tmp43;
  const Scalar _tmp203 = _tmp120 * _tmp82;
  const Scalar _tmp204 = _tmp155 * _tmp203;
  const Scalar _tmp205 = _tmp150 * _tmp203;
  const Scalar _tmp206 =
      -_tmp200 * _tmp201 - _tmp201 * _tmp202 + _tmp204 * _tmp36 + _tmp205 * _tmp35;
  const Scalar _tmp207 = Scalar(1.0) / (_tmp206);
  const Scalar _tmp208 = std::asinh(_tmp199 * _tmp207);
  const Scalar _tmp209 = _tmp150 * _tmp82;
  const Scalar _tmp210 = _tmp155 * _tmp82;
  const Scalar _tmp211 = _tmp106 * fh1;
  const Scalar _tmp212 = _tmp177 * _tmp211;
  const Scalar _tmp213 = _tmp171 * _tmp209 + _tmp173 * _tmp210 - _tmp201 * _tmp212 - _tmp204;
  const Scalar _tmp214 = Scalar(9.6622558468725703) * _tmp213;
  const Scalar _tmp215 = Scalar(9.6622558468725703) * _tmp206;
  const Scalar _tmp216 = std::pow(_tmp206, Scalar(-2));
  const Scalar _tmp217 =
      std::pow(Scalar(std::pow(_tmp199, Scalar(2)) * _tmp216 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp218 = _tmp199 * _tmp216;
  const Scalar _tmp219 = _tmp127 * _tmp55;
  const Scalar _tmp220 = _tmp118 * _tmp55;
  const Scalar _tmp221 = _tmp187 * _tmp60;
  const Scalar _tmp222 =
      _tmp217 * (_tmp207 * (-_tmp138 * _tmp221 + _tmp171 * _tmp219 + _tmp173 * _tmp220 +
                            _tmp178 * _tmp194 - _tmp185 * _tmp193 - _tmp197) -
                 _tmp213 * _tmp218);
  const Scalar _tmp223 = Scalar(0.1034955) * _tmp207;
  const Scalar _tmp224 =
      -_tmp208 * _tmp215 - std::sqrt(Scalar(std::pow(Scalar(-_tmp75 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp77 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp225 = Scalar(0.1034955) * _tmp216 * _tmp224;
  const Scalar _tmp226 = _tmp223 * _tmp224;
  const Scalar _tmp227 = std::cosh(_tmp226);
  const Scalar _tmp228 = Scalar(1.0) * _tmp208;
  const Scalar _tmp229 = Scalar(1.0) * std::cosh(_tmp228);
  const Scalar _tmp230 = -std::sinh(_tmp226) - std::sinh(_tmp228);
  const Scalar _tmp231 = _tmp112 * _tmp120;
  const Scalar _tmp232 = _tmp115 * _tmp231;
  const Scalar _tmp233 = _tmp112 * _tmp126;
  const Scalar _tmp234 = _tmp112 * _tmp115;
  const Scalar _tmp235 = _tmp171 * _tmp233 + _tmp173 * _tmp234 + _tmp212 - _tmp232;
  const Scalar _tmp236 = _tmp126 * _tmp231;
  const Scalar _tmp237 = _tmp200 + _tmp202 + _tmp232 * _tmp36 + _tmp236 * _tmp35;
  const Scalar _tmp238 = std::pow(_tmp237, Scalar(-2));
  const Scalar _tmp239 = _tmp120 * _tmp59;
  const Scalar _tmp240 = _tmp125 * _tmp239;
  const Scalar _tmp241 = _tmp114 * _tmp239;
  const Scalar _tmp242 = -_tmp105 * _tmp43 + _tmp132 * _tmp134 - _tmp141 * _tmp142 + _tmp195 -
                         _tmp240 * _tmp35 - _tmp241 * _tmp36;
  const Scalar _tmp243 = Scalar(1.0) / (_tmp237);
  const Scalar _tmp244 = std::asinh(_tmp242 * _tmp243);
  const Scalar _tmp245 = Scalar(9.6622558468725703) * _tmp244;
  const Scalar _tmp246 =
      -_tmp237 * _tmp245 - std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp63 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp247 = Scalar(0.1034955) * _tmp238 * _tmp246;
  const Scalar _tmp248 = Scalar(9.6622558468725703) * _tmp237;
  const Scalar _tmp249 =
      std::pow(Scalar(_tmp238 * std::pow(_tmp242, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp250 = _tmp114 * _tmp59;
  const Scalar _tmp251 = _tmp125 * _tmp59;
  const Scalar _tmp252 = _tmp238 * _tmp242;
  const Scalar _tmp253 =
      _tmp249 *
      (-_tmp235 * _tmp252 + _tmp243 * (-_tmp105 * _tmp178 + _tmp142 * _tmp185 - _tmp171 * _tmp251 -
                                       _tmp173 * _tmp250 + _tmp221 + _tmp241));
  const Scalar _tmp254 = Scalar(0.1034955) * _tmp243;
  const Scalar _tmp255 = _tmp246 * _tmp254;
  const Scalar _tmp256 = std::cosh(_tmp255);
  const Scalar _tmp257 = Scalar(1.0) * _tmp244;
  const Scalar _tmp258 = Scalar(1.0) * std::cosh(_tmp257);
  const Scalar _tmp259 = -Scalar(9.6622558468725703) * std::sinh(_tmp255) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp257);
  const Scalar _tmp260 = _tmp170 * _tmp38;
  const Scalar _tmp261 = -_tmp168 * _tmp175 + _tmp176 * _tmp38 - _tmp41;
  const Scalar _tmp262 = _tmp261 * fh1;
  const Scalar _tmp263 = _tmp154 - _tmp158 * _tmp262 - _tmp171 * _tmp174 - _tmp172 * _tmp260;
  const Scalar _tmp264 = Scalar(9.6622558468725703) * _tmp263;
  const Scalar _tmp265 = _tmp136 - _tmp184 * _tmp38;
  const Scalar _tmp266 =
      _tmp183 * (_tmp160 * (_tmp109 * _tmp262 - _tmp129 + _tmp140 * _tmp185 + _tmp144 * _tmp265 +
                            _tmp171 * _tmp186 + _tmp188 * _tmp260) -
                 _tmp189 * _tmp263);
  const Scalar _tmp267 = _tmp211 * _tmp261;
  const Scalar _tmp268 = _tmp171 * _tmp210 - _tmp201 * _tmp267 - _tmp205 + _tmp209 * _tmp260;
  const Scalar _tmp269 = Scalar(9.6622558468725703) * _tmp268;
  const Scalar _tmp270 =
      _tmp217 * (_tmp207 * (-_tmp139 * _tmp185 + _tmp171 * _tmp220 + _tmp193 * _tmp265 +
                            _tmp194 * _tmp262 - _tmp198 + _tmp219 * _tmp260) -
                 _tmp218 * _tmp268);
  const Scalar _tmp271 = _tmp171 * _tmp234 + _tmp233 * _tmp260 - _tmp236 + _tmp267;
  const Scalar _tmp272 =
      _tmp249 * (_tmp243 * (-_tmp105 * _tmp262 - _tmp142 * _tmp265 - _tmp171 * _tmp250 +
                            _tmp185 * _tmp60 + _tmp240 - _tmp251 * _tmp260) -
                 _tmp252 * _tmp271);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = _tmp19 * _tmp34;
  _res(1, 0) =
      _tmp163 *
          (-_tmp190 * _tmp192 -
           _tmp191 * (_tmp165 * (-_tmp161 * _tmp180 - _tmp163 * _tmp190) - _tmp179 * _tmp182)) +
      _tmp167 * _tmp180;
  _res(2, 0) =
      _tmp214 * _tmp230 +
      _tmp215 *
          (-_tmp222 * _tmp229 -
           _tmp227 * (-_tmp213 * _tmp225 + _tmp223 * (-_tmp208 * _tmp214 - _tmp215 * _tmp222)));
  _res(3, 0) =
      _tmp235 * _tmp259 +
      _tmp248 *
          (-_tmp253 * _tmp258 -
           _tmp256 * (-_tmp235 * _tmp247 + _tmp254 * (-_tmp235 * _tmp245 - _tmp248 * _tmp253)));
  _res(0, 1) = _tmp32 * _tmp34;
  _res(1, 1) =
      _tmp163 *
          (-_tmp191 * (_tmp165 * (-_tmp161 * _tmp264 - _tmp163 * _tmp266) - _tmp182 * _tmp263) -
           _tmp192 * _tmp266) +
      _tmp167 * _tmp264;
  _res(2, 1) =
      _tmp215 *
          (-_tmp227 * (_tmp223 * (-_tmp208 * _tmp269 - _tmp215 * _tmp270) - _tmp225 * _tmp268) -
           _tmp229 * _tmp270) +
      _tmp230 * _tmp269;
  _res(3, 1) =
      _tmp248 *
          (-_tmp256 * (-_tmp247 * _tmp271 + _tmp254 * (-_tmp245 * _tmp271 - _tmp248 * _tmp272)) -
           _tmp258 * _tmp272) +
      _tmp259 * _tmp271;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
