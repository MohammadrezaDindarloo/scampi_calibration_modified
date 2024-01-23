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
 * Symbolic function: FK_residual_func_cost4_wrt_pc
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost4WrtPc(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& distance_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const sym::Pose3<Scalar>& TransformationMatrix,
    const Scalar epsilon) {
  // Total ops: 1142

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

  // Intermediate terms (364)
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
  const Scalar _tmp9 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp10 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp12 = _tmp2 * _tmp4;
  const Scalar _tmp13 = _tmp0 * _tmp5;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _TransformationMatrix[4] + _tmp17;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp20 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp23 = _tmp1 * _tmp5;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -_tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _TransformationMatrix[5] + _tmp27;
  const Scalar _tmp29 = _tmp16 + _tmp7;
  const Scalar _tmp30 = _TransformationMatrix[4] + _tmp29;
  const Scalar _tmp31 = _tmp30 - p_c(0, 0);
  const Scalar _tmp32 = std::pow(_tmp31, Scalar(2));
  const Scalar _tmp33 = _tmp21 + _tmp25;
  const Scalar _tmp34 = _tmp19 + _tmp33;
  const Scalar _tmp35 = _TransformationMatrix[5] + _tmp34;
  const Scalar _tmp36 = _tmp35 - p_c(1, 0);
  const Scalar _tmp37 = std::pow(_tmp36, Scalar(2));
  const Scalar _tmp38 = _tmp32 + _tmp37;
  const Scalar _tmp39 = std::pow(_tmp38, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp28 - p_b(1, 0);
  const Scalar _tmp41 = _tmp18 - p_b(0, 0);
  const Scalar _tmp42 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp43 = _tmp40 * _tmp42;
  const Scalar _tmp44 = _tmp39 * _tmp43;
  const Scalar _tmp45 = _tmp36 * _tmp39;
  const Scalar _tmp46 = _tmp31 * _tmp44 - _tmp45;
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = _tmp39 * _tmp47;
  const Scalar _tmp49 = _tmp31 * _tmp48;
  const Scalar _tmp50 = Scalar(1.0) * _tmp17;
  const Scalar _tmp51 = Scalar(1.0) * _tmp27;
  const Scalar _tmp52 = -_tmp51;
  const Scalar _tmp53 = Scalar(1.0) / (_tmp34 + _tmp52);
  const Scalar _tmp54 = _tmp53 * (-_tmp29 + _tmp50);
  const Scalar _tmp55 = _tmp50 + _tmp51 * _tmp54;
  const Scalar _tmp56 = 0;
  const Scalar _tmp57 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp58 = -_tmp57;
  const Scalar _tmp59 = -Scalar(0.010999999999999999) * _tmp20 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp60 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp61 = _tmp59 + _tmp60;
  const Scalar _tmp62 = _tmp58 + _tmp61;
  const Scalar _tmp63 = -_tmp19;
  const Scalar _tmp64 = _tmp33 + _tmp63;
  const Scalar _tmp65 = _TransformationMatrix[5] + _tmp64;
  const Scalar _tmp66 = _tmp65 - p_d(1, 0);
  const Scalar _tmp67 = -_tmp11 + _tmp15;
  const Scalar _tmp68 = _tmp67 + _tmp7;
  const Scalar _tmp69 = _TransformationMatrix[4] + _tmp68;
  const Scalar _tmp70 = _tmp69 - p_d(0, 0);
  const Scalar _tmp71 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp70, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp72 = _tmp70 * _tmp71;
  const Scalar _tmp73 = _tmp59 - _tmp60;
  const Scalar _tmp74 = _tmp57 + _tmp73;
  const Scalar _tmp75 = _tmp57 + _tmp61;
  const Scalar _tmp76 = _tmp39 * _tmp75;
  const Scalar _tmp77 = _tmp39 * _tmp74;
  const Scalar _tmp78 = _tmp31 * _tmp77;
  const Scalar _tmp79 = -_tmp31 * _tmp76 + _tmp78;
  const Scalar _tmp80 = _tmp66 * _tmp71;
  const Scalar _tmp81 = _tmp43 * _tmp72 - _tmp80;
  const Scalar _tmp82 = _tmp47 * _tmp81;
  const Scalar _tmp83 = -_tmp43 * _tmp78 + _tmp45 * _tmp75;
  const Scalar _tmp84 = _tmp43 * _tmp74;
  const Scalar _tmp85 = _tmp62 * _tmp80 - _tmp72 * _tmp84 - _tmp82 * _tmp83;
  const Scalar _tmp86 = -_tmp54 * _tmp85 - _tmp62 * _tmp72 + _tmp72 * _tmp74 - _tmp79 * _tmp82;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp81 * _tmp87;
  const Scalar _tmp89 = _tmp56 * _tmp88;
  const Scalar _tmp90 = _tmp56 * _tmp87;
  const Scalar _tmp91 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp92 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp41, Scalar(2))));
  const Scalar _tmp93 = _tmp42 * _tmp92;
  const Scalar _tmp94 = _tmp91 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) * _tmp47;
  const Scalar _tmp96 = _tmp83 * _tmp95;
  const Scalar _tmp97 = _tmp54 * _tmp96 - _tmp79 * _tmp95;
  const Scalar _tmp98 = _tmp29 * _tmp39;
  const Scalar _tmp99 = _tmp34 * _tmp39;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp101 = _tmp93 * (_tmp100 * _tmp17 * _tmp40 - _tmp100 * _tmp27 * _tmp41);
  const Scalar _tmp102 = _tmp101 * _tmp39;
  const Scalar _tmp103 = _tmp102 * _tmp31 + _tmp31 * _tmp99 - _tmp36 * _tmp98;
  const Scalar _tmp104 = _tmp101 * _tmp72 - _tmp103 * _tmp82 + _tmp64 * _tmp72 - _tmp68 * _tmp80;
  const Scalar _tmp105 = _tmp104 * _tmp87;
  const Scalar _tmp106 = -_tmp103 * _tmp95 - _tmp105 * _tmp97;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp108 = _tmp107 * _tmp86;
  const Scalar _tmp109 = _tmp106 * _tmp108;
  const Scalar _tmp110 = _tmp109 + _tmp97;
  const Scalar _tmp111 = -_tmp110 * _tmp88 + Scalar(1.0);
  const Scalar _tmp112 = _tmp111 * _tmp48;
  const Scalar _tmp113 = _tmp72 * _tmp87;
  const Scalar _tmp114 = _tmp67 + _tmp8;
  const Scalar _tmp115 = _TransformationMatrix[4] + _tmp114 - p_a(0, 0);
  const Scalar _tmp116 = _tmp26 + _tmp63;
  const Scalar _tmp117 = _TransformationMatrix[5] + _tmp116 - p_a(1, 0);
  const Scalar _tmp118 =
      std::pow(Scalar(std::pow(_tmp115, Scalar(2)) + std::pow(_tmp117, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp119 = _tmp117 * _tmp118;
  const Scalar _tmp120 = _tmp119 * fh1;
  const Scalar _tmp121 = _tmp120 * _tmp93;
  const Scalar _tmp122 = _tmp43 * _tmp47;
  const Scalar _tmp123 = _tmp122 * _tmp83 + _tmp84;
  const Scalar _tmp124 = _tmp122 * _tmp79 - _tmp123 * _tmp54 - _tmp74;
  const Scalar _tmp125 = _tmp124 * _tmp87;
  const Scalar _tmp126 = -_tmp101 + _tmp103 * _tmp122 - _tmp104 * _tmp125;
  const Scalar _tmp127 = _tmp107 * _tmp126;
  const Scalar _tmp128 = _tmp127 * _tmp86;
  const Scalar _tmp129 = _tmp124 + _tmp128;
  const Scalar _tmp130 = -_tmp129 * _tmp88 - _tmp43;
  const Scalar _tmp131 = _tmp130 * _tmp48;
  const Scalar _tmp132 = _tmp115 * _tmp118;
  const Scalar _tmp133 = _tmp132 * fh1;
  const Scalar _tmp134 = _tmp133 * _tmp93;
  const Scalar _tmp135 = Scalar(1.0) * _tmp107;
  const Scalar _tmp136 = _tmp31 * _tmp39;
  const Scalar _tmp137 = _tmp81 * _tmp95;
  const Scalar _tmp138 = _tmp107 * _tmp137;
  const Scalar _tmp139 = fh1 * (_tmp114 * _tmp119 - _tmp116 * _tmp132);
  const Scalar _tmp140 = _tmp139 * _tmp93;
  const Scalar _tmp141 = -_tmp121 * (_tmp110 * _tmp113 + _tmp112 * _tmp31) -
                         _tmp134 * (_tmp113 * _tmp129 + _tmp131 * _tmp31 + Scalar(1.0)) -
                         _tmp140 * (_tmp135 * _tmp72 - _tmp136 * _tmp138) -
                         _tmp94 * (-_tmp49 * _tmp89 + _tmp72 * _tmp90);
  const Scalar _tmp142 = Scalar(1.0) / (_tmp141);
  const Scalar _tmp143 = _tmp52 + _tmp64;
  const Scalar _tmp144 = _tmp143 * _tmp54;
  const Scalar _tmp145 = Scalar(1.0) / (-_tmp144 + _tmp50 - _tmp68);
  const Scalar _tmp146 = Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp108 * _tmp146;
  const Scalar _tmp148 = -_tmp135 * _tmp85 + _tmp143 * _tmp147;
  const Scalar _tmp149 = Scalar(1.0) * _tmp53;
  const Scalar _tmp150 = Scalar(1.0) * _tmp139;
  const Scalar _tmp151 = _tmp85 * _tmp87;
  const Scalar _tmp152 = _tmp143 * _tmp145;
  const Scalar _tmp153 = _tmp123 + _tmp128 * _tmp152 - _tmp129 * _tmp151;
  const Scalar _tmp154 = Scalar(1.0) * fh1;
  const Scalar _tmp155 = _tmp132 * _tmp154;
  const Scalar _tmp156 = fh1 * (_tmp58 + _tmp73);
  const Scalar _tmp157 = -_tmp116 * fv1 - _tmp119 * _tmp156 - Scalar(5.1796800000000003) * _tmp24;
  const Scalar _tmp158 = _tmp146 * _tmp54;
  const Scalar _tmp159 = _tmp144 * _tmp146 + Scalar(1.0);
  const Scalar _tmp160 = _tmp109 * _tmp152 - _tmp110 * _tmp151 - _tmp96;
  const Scalar _tmp161 = _tmp119 * _tmp154;
  const Scalar _tmp162 = _tmp145 * _tmp55;
  const Scalar _tmp163 = -_tmp143 * _tmp162 - _tmp151 * _tmp56 + _tmp52;
  const Scalar _tmp164 = _tmp143 * _tmp53;
  const Scalar _tmp165 = _tmp114 * fv1 + _tmp132 * _tmp156 + Scalar(5.1796800000000003) * _tmp14;
  const Scalar _tmp166 =
      _tmp150 * (_tmp147 - _tmp148 * _tmp149) + _tmp155 * (_tmp128 * _tmp146 - _tmp149 * _tmp153) +
      Scalar(1.0) * _tmp157 * (-_tmp149 * _tmp159 + _tmp158) +
      _tmp161 * (_tmp109 * _tmp146 - _tmp149 * _tmp160) +
      Scalar(1.0) * _tmp165 * (_tmp146 * _tmp164 - _tmp146) +
      Scalar(1.0) * _tmp91 * (-_tmp146 * _tmp55 - _tmp149 * _tmp163 + Scalar(1.0));
  const Scalar _tmp167 = std::asinh(_tmp142 * _tmp166);
  const Scalar _tmp168 = Scalar(9.6622558468725703) * _tmp167;
  const Scalar _tmp169 =
      -_tmp141 * _tmp168 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp28 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp170 = Scalar(0.1034955) * _tmp142;
  const Scalar _tmp171 = _tmp169 * _tmp170;
  const Scalar _tmp172 = std::cosh(_tmp171);
  const Scalar _tmp173 = std::pow(_tmp46, Scalar(-2));
  const Scalar _tmp174 = std::pow(_tmp38, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp175 = _tmp174 * _tmp31 * _tmp36;
  const Scalar _tmp176 = _tmp174 * _tmp32;
  const Scalar _tmp177 = _tmp173 * (-_tmp175 + _tmp176 * _tmp43 - _tmp44);
  const Scalar _tmp178 = _tmp136 * _tmp89;
  const Scalar _tmp179 = _tmp177 * _tmp81;
  const Scalar _tmp180 = _tmp175 * _tmp75;
  const Scalar _tmp181 = -_tmp176 * _tmp84 + _tmp180 + _tmp43 * _tmp77;
  const Scalar _tmp182 = _tmp179 * _tmp83 - _tmp181 * _tmp82;
  const Scalar _tmp183 = _tmp176 * _tmp74 - _tmp176 * _tmp75 + _tmp76 - _tmp77;
  const Scalar _tmp184 = _tmp179 * _tmp79 - _tmp182 * _tmp54 - _tmp183 * _tmp82;
  const Scalar _tmp185 = std::pow(_tmp86, Scalar(-2));
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = _tmp186 * _tmp56;
  const Scalar _tmp188 = _tmp176 * _tmp47;
  const Scalar _tmp189 = _tmp136 * _tmp82;
  const Scalar _tmp190 = _tmp101 * _tmp176 - _tmp102 - _tmp175 * _tmp29 + _tmp176 * _tmp34 - _tmp99;
  const Scalar _tmp191 = _tmp103 * _tmp177;
  const Scalar _tmp192 = -_tmp190 * _tmp82 + _tmp191 * _tmp81;
  const Scalar _tmp193 = std::pow(_tmp104, Scalar(-2));
  const Scalar _tmp194 = _tmp137 * _tmp193;
  const Scalar _tmp195 = _tmp192 * _tmp194;
  const Scalar _tmp196 = _tmp135 * _tmp136;
  const Scalar _tmp197 = Scalar(1.0) * _tmp193;
  const Scalar _tmp198 = _tmp197 * _tmp72;
  const Scalar _tmp199 = _tmp130 * _tmp136;
  const Scalar _tmp200 = _tmp186 * _tmp72;
  const Scalar _tmp201 = _tmp129 * _tmp81;
  const Scalar _tmp202 = _tmp177 * _tmp43;
  const Scalar _tmp203 = _tmp122 * _tmp181 - _tmp202 * _tmp83;
  const Scalar _tmp204 = _tmp122 * _tmp183 - _tmp202 * _tmp79 - _tmp203 * _tmp54;
  const Scalar _tmp205 = _tmp104 * _tmp124;
  const Scalar _tmp206 = _tmp108 * (-_tmp105 * _tmp204 + _tmp122 * _tmp190 - _tmp125 * _tmp192 +
                                    _tmp186 * _tmp205 - _tmp191 * _tmp43);
  const Scalar _tmp207 = _tmp193 * _tmp86;
  const Scalar _tmp208 = _tmp192 * _tmp207;
  const Scalar _tmp209 = _tmp126 * _tmp208;
  const Scalar _tmp210 = _tmp127 * _tmp184;
  const Scalar _tmp211 = _tmp204 + _tmp206 - _tmp209 + _tmp210;
  const Scalar _tmp212 = _tmp186 * _tmp201 - _tmp211 * _tmp88;
  const Scalar _tmp213 = _tmp111 * _tmp177;
  const Scalar _tmp214 = _tmp110 * _tmp81;
  const Scalar _tmp215 = _tmp106 * _tmp208;
  const Scalar _tmp216 = _tmp87 * _tmp97;
  const Scalar _tmp217 = Scalar(1.0) * _tmp83;
  const Scalar _tmp218 = _tmp177 * _tmp217;
  const Scalar _tmp219 = Scalar(1.0) * _tmp79;
  const Scalar _tmp220 = _tmp181 * _tmp95;
  const Scalar _tmp221 = _tmp177 * _tmp219 - _tmp183 * _tmp95 - _tmp218 * _tmp54 + _tmp220 * _tmp54;
  const Scalar _tmp222 = _tmp104 * _tmp97;
  const Scalar _tmp223 = _tmp108 * (-_tmp105 * _tmp221 + _tmp186 * _tmp222 - _tmp190 * _tmp95 +
                                    Scalar(1.0) * _tmp191 - _tmp192 * _tmp216);
  const Scalar _tmp224 = _tmp106 * _tmp107;
  const Scalar _tmp225 = _tmp184 * _tmp224;
  const Scalar _tmp226 = -_tmp215 + _tmp221 + _tmp223 + _tmp225;
  const Scalar _tmp227 = _tmp186 * _tmp214 - _tmp226 * _tmp88;
  const Scalar _tmp228 = -_tmp121 * (-_tmp110 * _tmp200 + _tmp111 * _tmp188 - _tmp112 +
                                     _tmp113 * _tmp226 - _tmp136 * _tmp213 + _tmp227 * _tmp49) -
                         _tmp134 * (_tmp113 * _tmp211 - _tmp129 * _tmp200 + _tmp130 * _tmp188 -
                                    _tmp131 - _tmp177 * _tmp199 + _tmp212 * _tmp49) -
                         _tmp140 * (_tmp136 * _tmp195 - _tmp138 * _tmp176 + _tmp138 * _tmp39 +
                                    _tmp179 * _tmp196 - _tmp192 * _tmp198) -
                         _tmp94 * (_tmp177 * _tmp178 + _tmp187 * _tmp189 - _tmp187 * _tmp72 -
                                   _tmp188 * _tmp89 + _tmp48 * _tmp89);
  const Scalar _tmp229 = std::pow(_tmp141, Scalar(-2));
  const Scalar _tmp230 = Scalar(0.1034955) * _tmp169 * _tmp229;
  const Scalar _tmp231 = _tmp146 * _tmp208;
  const Scalar _tmp232 = _tmp107 * _tmp146;
  const Scalar _tmp233 = _tmp184 * _tmp232;
  const Scalar _tmp234 = _tmp197 * _tmp85;
  const Scalar _tmp235 =
      -_tmp135 * _tmp182 - _tmp143 * _tmp231 + _tmp143 * _tmp233 + _tmp192 * _tmp234;
  const Scalar _tmp236 = _tmp186 * _tmp85;
  const Scalar _tmp237 = _tmp182 * _tmp87;
  const Scalar _tmp238 = _tmp129 * _tmp236 - _tmp129 * _tmp237 - _tmp151 * _tmp211 +
                         _tmp152 * _tmp206 - _tmp152 * _tmp209 + _tmp152 * _tmp210 + _tmp203;
  const Scalar _tmp239 = _tmp110 * _tmp236 - _tmp110 * _tmp237 - _tmp151 * _tmp226 -
                         _tmp152 * _tmp215 + _tmp152 * _tmp223 + _tmp152 * _tmp225 + _tmp218 -
                         _tmp220;
  const Scalar _tmp240 = _tmp236 * _tmp56 - _tmp237 * _tmp56;
  const Scalar _tmp241 = _tmp149 * _tmp91;
  const Scalar _tmp242 = _tmp166 * _tmp229;
  const Scalar _tmp243 = _tmp142 * (_tmp150 * (-_tmp149 * _tmp235 - _tmp231 + _tmp233) +
                                    _tmp155 * (_tmp146 * _tmp206 - _tmp146 * _tmp209 +
                                               _tmp146 * _tmp210 - _tmp149 * _tmp238) +
                                    _tmp161 * (-_tmp146 * _tmp215 + _tmp146 * _tmp223 +
                                               _tmp146 * _tmp225 - _tmp149 * _tmp239) -
                                    _tmp240 * _tmp241) -
                         _tmp228 * _tmp242;
  const Scalar _tmp244 =
      std::pow(Scalar(std::pow(_tmp166, Scalar(2)) * _tmp229 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp245 = Scalar(9.6622558468725703) * _tmp141;
  const Scalar _tmp246 = _tmp244 * _tmp245;
  const Scalar _tmp247 = Scalar(1.0) * _tmp167;
  const Scalar _tmp248 = Scalar(1.0) * _tmp244 * std::cosh(_tmp247);
  const Scalar _tmp249 = -std::sinh(_tmp171) - std::sinh(_tmp247);
  const Scalar _tmp250 = _tmp89 * _tmp91;
  const Scalar _tmp251 = _tmp130 * _tmp47;
  const Scalar _tmp252 = _tmp120 * _tmp47;
  const Scalar _tmp253 =
      _tmp111 * _tmp252 + _tmp133 * _tmp251 - _tmp138 * _tmp139 - _tmp250 * _tmp47;
  const Scalar _tmp254 = Scalar(1.0) / (_tmp253);
  const Scalar _tmp255 = _tmp53 * fh1;
  const Scalar _tmp256 = _tmp132 * _tmp255;
  const Scalar _tmp257 = _tmp139 * _tmp53;
  const Scalar _tmp258 = _tmp53 * _tmp91;
  const Scalar _tmp259 = _tmp119 * _tmp255;
  const Scalar _tmp260 = _tmp135 * _tmp139;
  const Scalar _tmp261 = _tmp130 * _tmp133;
  const Scalar _tmp262 = _tmp133 * _tmp47;
  const Scalar _tmp263 = _tmp187 * _tmp91;
  const Scalar _tmp264 = -_tmp120 * _tmp213 + _tmp139 * _tmp195 + _tmp177 * _tmp250 -
                         _tmp177 * _tmp261 + _tmp179 * _tmp260 + _tmp212 * _tmp262 +
                         _tmp227 * _tmp252 + _tmp263 * _tmp82;
  const Scalar _tmp265 = _tmp146 * _tmp165;
  const Scalar _tmp266 = _tmp148 * _tmp257 + _tmp153 * _tmp256 + _tmp157 * _tmp159 * _tmp53 +
                         _tmp160 * _tmp259 + _tmp163 * _tmp258 - _tmp164 * _tmp265;
  const Scalar _tmp267 = std::pow(_tmp253, Scalar(-2));
  const Scalar _tmp268 = _tmp266 * _tmp267;
  const Scalar _tmp269 =
      _tmp254 * (_tmp235 * _tmp257 + _tmp238 * _tmp256 + _tmp239 * _tmp259 + _tmp240 * _tmp258) -
      _tmp264 * _tmp268;
  const Scalar _tmp270 =
      std::pow(Scalar(std::pow(_tmp266, Scalar(2)) * _tmp267 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp271 = std::asinh(_tmp254 * _tmp266);
  const Scalar _tmp272 = Scalar(1.0) * _tmp271;
  const Scalar _tmp273 = Scalar(1.0) * _tmp270 * std::cosh(_tmp272);
  const Scalar _tmp274 = -_tmp30 + p_c(0, 0);
  const Scalar _tmp275 = -_tmp35 + p_c(1, 0);
  const Scalar _tmp276 =
      std::sqrt(Scalar(std::pow(_tmp274, Scalar(2)) + std::pow(_tmp275, Scalar(2))));
  const Scalar _tmp277 = Scalar(1.0) / (_tmp276);
  const Scalar _tmp278 = Scalar(9.6622558468725703) * _tmp264;
  const Scalar _tmp279 = Scalar(9.6622558468725703) * _tmp253;
  const Scalar _tmp280 = _tmp270 * _tmp279;
  const Scalar _tmp281 = Scalar(0.1034955) * _tmp254;
  const Scalar _tmp282 = -_tmp271 * _tmp279 - _tmp276;
  const Scalar _tmp283 = Scalar(0.1034955) * _tmp267 * _tmp282;
  const Scalar _tmp284 = _tmp281 * _tmp282;
  const Scalar _tmp285 = std::cosh(_tmp284);
  const Scalar _tmp286 = -std::sinh(_tmp272) - std::sinh(_tmp284);
  const Scalar _tmp287 = _tmp87 * fh1;
  const Scalar _tmp288 = _tmp119 * _tmp287;
  const Scalar _tmp289 = _tmp132 * _tmp287;
  const Scalar _tmp290 = _tmp110 * _tmp288 + _tmp129 * _tmp289 + _tmp260 + _tmp90 * _tmp91;
  const Scalar _tmp291 = std::pow(_tmp290, Scalar(-2));
  const Scalar _tmp292 = _tmp120 * _tmp145;
  const Scalar _tmp293 = _tmp133 * _tmp145;
  const Scalar _tmp294 = -_tmp109 * _tmp292 - _tmp128 * _tmp293 - _tmp139 * _tmp147 -
                         _tmp157 * _tmp158 + _tmp162 * _tmp91 + _tmp265;
  const Scalar _tmp295 =
      std::pow(Scalar(_tmp291 * std::pow(_tmp294, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp296 = Scalar(1.0) / (_tmp290);
  const Scalar _tmp297 = _tmp150 * _tmp193;
  const Scalar _tmp298 = _tmp110 * _tmp120;
  const Scalar _tmp299 = _tmp129 * _tmp133;
  const Scalar _tmp300 = -_tmp186 * _tmp298 - _tmp186 * _tmp299 - _tmp192 * _tmp297 +
                         _tmp211 * _tmp289 + _tmp226 * _tmp288 - _tmp263;
  const Scalar _tmp301 = _tmp291 * _tmp294;
  const Scalar _tmp302 =
      _tmp295 *
      (_tmp296 * (_tmp139 * _tmp231 - _tmp139 * _tmp233 - _tmp206 * _tmp293 + _tmp209 * _tmp293 -
                  _tmp210 * _tmp293 + _tmp215 * _tmp292 - _tmp223 * _tmp292 - _tmp225 * _tmp292) -
       _tmp300 * _tmp301);
  const Scalar _tmp303 = std::asinh(_tmp294 * _tmp296);
  const Scalar _tmp304 = Scalar(1.0) * _tmp303;
  const Scalar _tmp305 = Scalar(1.0) * std::cosh(_tmp304);
  const Scalar _tmp306 = Scalar(9.6622558468725703) * _tmp290;
  const Scalar _tmp307 =
      -_tmp303 * _tmp306 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp69 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp308 = Scalar(0.1034955) * _tmp296;
  const Scalar _tmp309 = _tmp307 * _tmp308;
  const Scalar _tmp310 = std::cosh(_tmp309);
  const Scalar _tmp311 = Scalar(0.1034955) * _tmp291 * _tmp307;
  const Scalar _tmp312 = Scalar(9.6622558468725703) * _tmp303;
  const Scalar _tmp313 = -Scalar(9.6622558468725703) * std::sinh(_tmp304) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp309);
  const Scalar _tmp314 = _tmp174 * _tmp37;
  const Scalar _tmp315 = -_tmp175 * _tmp84 + _tmp314 * _tmp75 - _tmp76;
  const Scalar _tmp316 = _tmp173 * (_tmp175 * _tmp43 - _tmp314 + _tmp39);
  const Scalar _tmp317 = _tmp316 * _tmp81;
  const Scalar _tmp318 = -_tmp315 * _tmp82 + _tmp317 * _tmp83;
  const Scalar _tmp319 = _tmp175 * _tmp74 - _tmp180;
  const Scalar _tmp320 = _tmp317 * _tmp79 - _tmp318 * _tmp54 - _tmp319 * _tmp82;
  const Scalar _tmp321 = _tmp185 * _tmp320;
  const Scalar _tmp322 = _tmp321 * _tmp56;
  const Scalar _tmp323 = _tmp175 * _tmp47;
  const Scalar _tmp324 = _tmp321 * _tmp72;
  const Scalar _tmp325 = _tmp101 * _tmp175 + _tmp175 * _tmp34 - _tmp29 * _tmp314 + _tmp98;
  const Scalar _tmp326 = _tmp103 * _tmp317 - _tmp325 * _tmp82;
  const Scalar _tmp327 = _tmp207 * _tmp326;
  const Scalar _tmp328 = _tmp106 * _tmp327;
  const Scalar _tmp329 = _tmp217 * _tmp316;
  const Scalar _tmp330 = _tmp315 * _tmp95;
  const Scalar _tmp331 = _tmp219 * _tmp316 - _tmp319 * _tmp95 - _tmp329 * _tmp54 + _tmp330 * _tmp54;
  const Scalar _tmp332 = _tmp103 * _tmp316;
  const Scalar _tmp333 = _tmp108 * (-_tmp105 * _tmp331 - _tmp216 * _tmp326 + _tmp222 * _tmp321 -
                                    _tmp325 * _tmp95 + Scalar(1.0) * _tmp332);
  const Scalar _tmp334 = _tmp224 * _tmp320;
  const Scalar _tmp335 = -_tmp328 + _tmp331 + _tmp333 + _tmp334;
  const Scalar _tmp336 = _tmp214 * _tmp321 - _tmp335 * _tmp88;
  const Scalar _tmp337 = _tmp111 * _tmp316;
  const Scalar _tmp338 = _tmp126 * _tmp327;
  const Scalar _tmp339 = _tmp316 * _tmp43;
  const Scalar _tmp340 = _tmp122 * _tmp315 - _tmp339 * _tmp83;
  const Scalar _tmp341 = _tmp122 * _tmp319 - _tmp339 * _tmp79 - _tmp340 * _tmp54;
  const Scalar _tmp342 = _tmp108 * (-_tmp105 * _tmp341 + _tmp122 * _tmp325 - _tmp125 * _tmp326 +
                                    _tmp205 * _tmp321 - _tmp332 * _tmp43);
  const Scalar _tmp343 = _tmp127 * _tmp320;
  const Scalar _tmp344 = -_tmp338 + _tmp341 + _tmp342 + _tmp343;
  const Scalar _tmp345 = _tmp201 * _tmp321 - _tmp344 * _tmp88;
  const Scalar _tmp346 = _tmp194 * _tmp326;
  const Scalar _tmp347 =
      -_tmp121 * (-_tmp110 * _tmp324 + _tmp111 * _tmp323 + _tmp113 * _tmp335 - _tmp136 * _tmp337 +
                  _tmp336 * _tmp49) -
      _tmp134 * (_tmp113 * _tmp344 - _tmp129 * _tmp324 + _tmp175 * _tmp251 - _tmp199 * _tmp316 +
                 _tmp345 * _tmp49) -
      _tmp140 * (_tmp136 * _tmp346 - _tmp138 * _tmp175 + _tmp196 * _tmp317 - _tmp198 * _tmp326) -
      _tmp94 * (_tmp178 * _tmp316 + _tmp189 * _tmp322 - _tmp322 * _tmp72 - _tmp323 * _tmp89);
  const Scalar _tmp348 = _tmp146 * _tmp327;
  const Scalar _tmp349 = _tmp232 * _tmp320;
  const Scalar _tmp350 =
      -_tmp135 * _tmp318 - _tmp143 * _tmp348 + _tmp143 * _tmp349 + _tmp234 * _tmp326;
  const Scalar _tmp351 = _tmp318 * _tmp87;
  const Scalar _tmp352 = _tmp321 * _tmp85;
  const Scalar _tmp353 = -_tmp129 * _tmp351 + _tmp129 * _tmp352 - _tmp151 * _tmp344 -
                         _tmp152 * _tmp338 + _tmp152 * _tmp342 + _tmp152 * _tmp343 + _tmp340;
  const Scalar _tmp354 = -_tmp110 * _tmp351 + _tmp110 * _tmp352 - _tmp151 * _tmp335 -
                         _tmp152 * _tmp328 + _tmp152 * _tmp333 + _tmp152 * _tmp334 + _tmp329 -
                         _tmp330;
  const Scalar _tmp355 = -_tmp318 * _tmp90 + _tmp322 * _tmp85;
  const Scalar _tmp356 = _tmp142 * (_tmp150 * (-_tmp149 * _tmp350 - _tmp348 + _tmp349) +
                                    _tmp155 * (-_tmp146 * _tmp338 + _tmp146 * _tmp342 +
                                               _tmp146 * _tmp343 - _tmp149 * _tmp353) +
                                    _tmp161 * (-_tmp146 * _tmp328 + _tmp146 * _tmp333 +
                                               _tmp146 * _tmp334 - _tmp149 * _tmp354) -
                                    _tmp241 * _tmp355) -
                         _tmp242 * _tmp347;
  const Scalar _tmp357 = Scalar(9.6622558468725703) * _tmp347;
  const Scalar _tmp358 = _tmp322 * _tmp91;
  const Scalar _tmp359 = -_tmp120 * _tmp337 + _tmp139 * _tmp346 + _tmp250 * _tmp316 +
                         _tmp252 * _tmp336 + _tmp260 * _tmp317 - _tmp261 * _tmp316 +
                         _tmp262 * _tmp345 + _tmp358 * _tmp82;
  const Scalar _tmp360 =
      _tmp254 * (_tmp256 * _tmp353 + _tmp257 * _tmp350 + _tmp258 * _tmp355 + _tmp259 * _tmp354) -
      _tmp268 * _tmp359;
  const Scalar _tmp361 = Scalar(9.6622558468725703) * _tmp359;
  const Scalar _tmp362 = _tmp288 * _tmp335 + _tmp289 * _tmp344 - _tmp297 * _tmp326 -
                         _tmp298 * _tmp321 - _tmp299 * _tmp321 - _tmp358;
  const Scalar _tmp363 =
      _tmp295 *
      (_tmp296 * (_tmp139 * _tmp348 - _tmp139 * _tmp349 + _tmp292 * _tmp328 - _tmp292 * _tmp333 -
                  _tmp292 * _tmp334 + _tmp293 * _tmp338 - _tmp293 * _tmp342 - _tmp293 * _tmp343) -
       _tmp301 * _tmp362);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      Scalar(9.6622558468725703) * _tmp228 * _tmp249 +
      _tmp245 *
          (-_tmp172 * (_tmp170 * (-_tmp168 * _tmp228 - _tmp243 * _tmp246) - _tmp228 * _tmp230) -
           _tmp243 * _tmp248);
  _res(2, 0) =
      _tmp278 * _tmp286 +
      _tmp279 * (-_tmp269 * _tmp273 -
                 _tmp285 * (-_tmp264 * _tmp283 + _tmp281 * (-_tmp269 * _tmp280 - _tmp271 * _tmp278 -
                                                            _tmp274 * _tmp277)));
  _res(3, 0) =
      _tmp300 * _tmp313 +
      _tmp306 *
          (-_tmp302 * _tmp305 -
           _tmp310 * (-_tmp300 * _tmp311 + _tmp308 * (-_tmp300 * _tmp312 - _tmp302 * _tmp306)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp245 *
          (-_tmp172 * (_tmp170 * (-_tmp167 * _tmp357 - _tmp246 * _tmp356) - _tmp230 * _tmp347) -
           _tmp248 * _tmp356) +
      _tmp249 * _tmp357;
  _res(2, 1) =
      _tmp279 * (-_tmp273 * _tmp360 -
                 _tmp285 * (_tmp281 * (-_tmp271 * _tmp361 - _tmp275 * _tmp277 - _tmp280 * _tmp360) -
                            _tmp283 * _tmp359)) +
      _tmp286 * _tmp361;
  _res(3, 1) =
      _tmp306 *
          (-_tmp305 * _tmp363 -
           _tmp310 * (_tmp308 * (-_tmp306 * _tmp363 - _tmp312 * _tmp362) - _tmp311 * _tmp362)) +
      _tmp313 * _tmp362;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
