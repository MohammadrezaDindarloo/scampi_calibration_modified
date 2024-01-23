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
 * Symbolic function: FK_residual_func_cost2_wrt_pc
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost2WrtPc(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& distance_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const sym::Pose3<Scalar>& TransformationMatrix,
    const Scalar epsilon) {
  // Total ops: 1158

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

  // Intermediate terms (369)
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
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp33 = -Scalar(0.010999999999999999) * _tmp20 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp35 = _tmp33 - _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = -_tmp19;
  const Scalar _tmp38 = _tmp21 + _tmp25;
  const Scalar _tmp39 = _tmp37 + _tmp38;
  const Scalar _tmp40 = _TransformationMatrix[5] + _tmp39;
  const Scalar _tmp41 = _tmp40 - p_d(1, 0);
  const Scalar _tmp42 = -_tmp11 + _tmp15;
  const Scalar _tmp43 = _tmp42 + _tmp7;
  const Scalar _tmp44 = _TransformationMatrix[4] + _tmp43;
  const Scalar _tmp45 = _tmp44 - p_d(0, 0);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp45 * _tmp46;
  const Scalar _tmp48 = -_tmp32;
  const Scalar _tmp49 = _tmp33 + _tmp34;
  const Scalar _tmp50 = _tmp48 + _tmp49;
  const Scalar _tmp51 = std::pow(_tmp31, Scalar(2));
  const Scalar _tmp52 = _tmp19 + _tmp38;
  const Scalar _tmp53 = _TransformationMatrix[5] + _tmp52;
  const Scalar _tmp54 = _tmp53 - p_c(1, 0);
  const Scalar _tmp55 = std::pow(_tmp54, Scalar(2));
  const Scalar _tmp56 = _tmp51 + _tmp55;
  const Scalar _tmp57 = std::pow(_tmp56, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp32 + _tmp49;
  const Scalar _tmp59 = _tmp57 * _tmp58;
  const Scalar _tmp60 = _tmp50 * _tmp57;
  const Scalar _tmp61 = _tmp31 * _tmp60;
  const Scalar _tmp62 = -_tmp31 * _tmp59 + _tmp61;
  const Scalar _tmp63 = _tmp41 * _tmp46;
  const Scalar _tmp64 = _tmp28 - p_b(1, 0);
  const Scalar _tmp65 = _tmp18 - p_b(0, 0);
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp64 * _tmp66;
  const Scalar _tmp68 = _tmp47 * _tmp67 - _tmp63;
  const Scalar _tmp69 = _tmp57 * _tmp67;
  const Scalar _tmp70 = _tmp31 * _tmp69 - _tmp54 * _tmp57;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp68 * _tmp71;
  const Scalar _tmp73 = _tmp54 * _tmp59 - _tmp61 * _tmp67;
  const Scalar _tmp74 = _tmp50 * _tmp67;
  const Scalar _tmp75 = _tmp36 * _tmp63 - _tmp47 * _tmp74 - _tmp72 * _tmp73;
  const Scalar _tmp76 = Scalar(1.0) * _tmp27;
  const Scalar _tmp77 = -_tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp52 + _tmp77);
  const Scalar _tmp79 = Scalar(1.0) * _tmp17;
  const Scalar _tmp80 = -_tmp29 + _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp80;
  const Scalar _tmp82 = -_tmp36 * _tmp47 + _tmp47 * _tmp50 - _tmp62 * _tmp72 - _tmp75 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = _tmp76 * _tmp81 + _tmp79;
  const Scalar _tmp85 = 0;
  const Scalar _tmp86 = _tmp83 * _tmp85;
  const Scalar _tmp87 = _tmp57 * _tmp72;
  const Scalar _tmp88 = _tmp86 * _tmp87;
  const Scalar _tmp89 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp90 =
      std::sqrt(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp65, Scalar(2))));
  const Scalar _tmp91 = _tmp66 * _tmp90;
  const Scalar _tmp92 = _tmp89 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) * _tmp71;
  const Scalar _tmp94 = Scalar(1.0) * _tmp78;
  const Scalar _tmp95 = _tmp80 * _tmp94;
  const Scalar _tmp96 = _tmp71 * _tmp95;
  const Scalar _tmp97 = -_tmp62 * _tmp93 + _tmp73 * _tmp96;
  const Scalar _tmp98 = _tmp29 * _tmp57;
  const Scalar _tmp99 = _tmp52 * _tmp57;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp101 = _tmp91 * (_tmp100 * _tmp17 * _tmp64 - _tmp100 * _tmp27 * _tmp65);
  const Scalar _tmp102 = _tmp101 * _tmp57;
  const Scalar _tmp103 = _tmp102 * _tmp31 + _tmp31 * _tmp99 - _tmp54 * _tmp98;
  const Scalar _tmp104 = _tmp101 * _tmp47 - _tmp103 * _tmp72 + _tmp39 * _tmp47 - _tmp43 * _tmp63;
  const Scalar _tmp105 = _tmp104 * _tmp83;
  const Scalar _tmp106 = -_tmp103 * _tmp93 - _tmp105 * _tmp97;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp108 = _tmp107 * _tmp82;
  const Scalar _tmp109 = _tmp106 * _tmp108;
  const Scalar _tmp110 = _tmp109 + _tmp97;
  const Scalar _tmp111 = _tmp68 * _tmp83;
  const Scalar _tmp112 = -_tmp110 * _tmp111 + Scalar(1.0);
  const Scalar _tmp113 = _tmp57 * _tmp71;
  const Scalar _tmp114 = _tmp112 * _tmp113;
  const Scalar _tmp115 = _tmp47 * _tmp83;
  const Scalar _tmp116 = _tmp42 + _tmp8;
  const Scalar _tmp117 = _TransformationMatrix[4] + _tmp116 - p_a(0, 0);
  const Scalar _tmp118 = _tmp26 + _tmp37;
  const Scalar _tmp119 = _TransformationMatrix[5] + _tmp118 - p_a(1, 0);
  const Scalar _tmp120 =
      std::pow(Scalar(std::pow(_tmp117, Scalar(2)) + std::pow(_tmp119, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp121 = _tmp119 * _tmp120;
  const Scalar _tmp122 = _tmp121 * fh1;
  const Scalar _tmp123 = _tmp122 * _tmp91;
  const Scalar _tmp124 = _tmp67 * _tmp71;
  const Scalar _tmp125 = _tmp124 * _tmp73 + _tmp74;
  const Scalar _tmp126 = _tmp124 * _tmp62 - _tmp125 * _tmp81 - _tmp50;
  const Scalar _tmp127 = _tmp126 * _tmp83;
  const Scalar _tmp128 = -_tmp101 + _tmp103 * _tmp124 - _tmp104 * _tmp127;
  const Scalar _tmp129 = _tmp107 * _tmp128;
  const Scalar _tmp130 = _tmp129 * _tmp82;
  const Scalar _tmp131 = _tmp126 + _tmp130;
  const Scalar _tmp132 = -_tmp111 * _tmp131 - _tmp67;
  const Scalar _tmp133 = _tmp113 * _tmp132;
  const Scalar _tmp134 = _tmp117 * _tmp120;
  const Scalar _tmp135 = _tmp134 * fh1;
  const Scalar _tmp136 = _tmp135 * _tmp91;
  const Scalar _tmp137 = Scalar(1.0) * _tmp107;
  const Scalar _tmp138 = _tmp137 * _tmp87;
  const Scalar _tmp139 = fh1 * (_tmp116 * _tmp121 - _tmp118 * _tmp134);
  const Scalar _tmp140 = _tmp139 * _tmp91;
  const Scalar _tmp141 = -_tmp123 * (_tmp110 * _tmp115 + _tmp114 * _tmp31) -
                         _tmp136 * (_tmp115 * _tmp131 + _tmp133 * _tmp31 + Scalar(1.0)) -
                         _tmp140 * (_tmp137 * _tmp47 - _tmp138 * _tmp31) -
                         _tmp92 * (-_tmp31 * _tmp88 + _tmp47 * _tmp86);
  const Scalar _tmp142 = Scalar(1.0) / (_tmp141);
  const Scalar _tmp143 = _tmp39 + _tmp77;
  const Scalar _tmp144 = _tmp143 * _tmp81;
  const Scalar _tmp145 = Scalar(1.0) / (-_tmp144 - _tmp43 + _tmp79);
  const Scalar _tmp146 = Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp108 * _tmp146;
  const Scalar _tmp148 = -_tmp137 * _tmp75 + _tmp143 * _tmp147;
  const Scalar _tmp149 = Scalar(1.0) * _tmp139;
  const Scalar _tmp150 = _tmp75 * _tmp83;
  const Scalar _tmp151 = _tmp143 * _tmp145;
  const Scalar _tmp152 = _tmp125 + _tmp130 * _tmp151 - _tmp131 * _tmp150;
  const Scalar _tmp153 = Scalar(1.0) * _tmp135;
  const Scalar _tmp154 = fh1 * (_tmp35 + _tmp48);
  const Scalar _tmp155 = -_tmp118 * fv1 - _tmp121 * _tmp154 - Scalar(5.1796800000000003) * _tmp24;
  const Scalar _tmp156 = _tmp146 * _tmp81;
  const Scalar _tmp157 = _tmp144 * _tmp146 + Scalar(1.0);
  const Scalar _tmp158 = _tmp109 * _tmp151 - _tmp110 * _tmp150 - _tmp73 * _tmp93;
  const Scalar _tmp159 = Scalar(1.0) * _tmp122;
  const Scalar _tmp160 = _tmp145 * _tmp84;
  const Scalar _tmp161 = -_tmp143 * _tmp160 - _tmp150 * _tmp85 + _tmp77;
  const Scalar _tmp162 = _tmp143 * _tmp78;
  const Scalar _tmp163 = _tmp116 * fv1 + _tmp134 * _tmp154 + Scalar(5.1796800000000003) * _tmp14;
  const Scalar _tmp164 =
      _tmp149 * (_tmp147 - _tmp148 * _tmp94) + _tmp153 * (_tmp130 * _tmp146 - _tmp152 * _tmp94) +
      Scalar(1.0) * _tmp155 * (_tmp156 - _tmp157 * _tmp94) +
      _tmp159 * (_tmp109 * _tmp146 - _tmp158 * _tmp94) +
      Scalar(1.0) * _tmp163 * (_tmp146 * _tmp162 - _tmp146) +
      Scalar(1.0) * _tmp89 * (-_tmp146 * _tmp84 - _tmp161 * _tmp94 + Scalar(1.0));
  const Scalar _tmp165 = std::asinh(_tmp142 * _tmp164);
  const Scalar _tmp166 = Scalar(9.6622558468725703) * _tmp165;
  const Scalar _tmp167 =
      -_tmp141 * _tmp166 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp28 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp168 = Scalar(0.1034955) * _tmp142;
  const Scalar _tmp169 = _tmp167 * _tmp168;
  const Scalar _tmp170 = std::cosh(_tmp169);
  const Scalar _tmp171 = std::pow(_tmp56, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp172 = _tmp171 * _tmp31 * _tmp54;
  const Scalar _tmp173 = _tmp171 * _tmp51;
  const Scalar _tmp174 = -_tmp172 + _tmp173 * _tmp67 - _tmp69;
  const Scalar _tmp175 = _tmp31 * _tmp57;
  const Scalar _tmp176 = std::pow(_tmp70, Scalar(-2));
  const Scalar _tmp177 = _tmp111 * _tmp176;
  const Scalar _tmp178 = _tmp177 * _tmp85;
  const Scalar _tmp179 = _tmp176 * _tmp73;
  const Scalar _tmp180 = _tmp174 * _tmp68;
  const Scalar _tmp181 = _tmp172 * _tmp58;
  const Scalar _tmp182 = -_tmp173 * _tmp74 + _tmp181 + _tmp60 * _tmp67;
  const Scalar _tmp183 = _tmp179 * _tmp180 - _tmp182 * _tmp72;
  const Scalar _tmp184 = _tmp173 * _tmp50 - _tmp173 * _tmp58 + _tmp59 - _tmp60;
  const Scalar _tmp185 = _tmp176 * _tmp62;
  const Scalar _tmp186 = _tmp180 * _tmp185 - _tmp183 * _tmp81 - _tmp184 * _tmp72;
  const Scalar _tmp187 = std::pow(_tmp82, Scalar(-2));
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = _tmp47 * _tmp85;
  const Scalar _tmp190 = _tmp173 * _tmp72;
  const Scalar _tmp191 = _tmp31 * _tmp87;
  const Scalar _tmp192 = _tmp191 * _tmp85;
  const Scalar _tmp193 = _tmp101 * _tmp173 - _tmp102 - _tmp172 * _tmp29 + _tmp173 * _tmp52 - _tmp99;
  const Scalar _tmp194 = _tmp103 * _tmp176;
  const Scalar _tmp195 = _tmp180 * _tmp194 - _tmp193 * _tmp72;
  const Scalar _tmp196 = std::pow(_tmp104, Scalar(-2));
  const Scalar _tmp197 = _tmp195 * _tmp196;
  const Scalar _tmp198 = Scalar(1.0) * _tmp191;
  const Scalar _tmp199 = _tmp176 * _tmp180;
  const Scalar _tmp200 = _tmp137 * _tmp175;
  const Scalar _tmp201 = Scalar(1.0) * _tmp47;
  const Scalar _tmp202 = _tmp132 * _tmp176;
  const Scalar _tmp203 = _tmp174 * _tmp202;
  const Scalar _tmp204 = _tmp173 * _tmp71;
  const Scalar _tmp205 = _tmp131 * _tmp187;
  const Scalar _tmp206 = _tmp186 * _tmp205;
  const Scalar _tmp207 = _tmp174 * _tmp67;
  const Scalar _tmp208 = _tmp179 * _tmp67;
  const Scalar _tmp209 = _tmp124 * _tmp182 - _tmp174 * _tmp208;
  const Scalar _tmp210 = _tmp124 * _tmp184 - _tmp185 * _tmp207 - _tmp209 * _tmp81;
  const Scalar _tmp211 = _tmp104 * _tmp126;
  const Scalar _tmp212 = _tmp108 * (-_tmp105 * _tmp210 + _tmp124 * _tmp193 - _tmp127 * _tmp195 +
                                    _tmp188 * _tmp211 - _tmp194 * _tmp207);
  const Scalar _tmp213 = _tmp197 * _tmp82;
  const Scalar _tmp214 = _tmp128 * _tmp213;
  const Scalar _tmp215 = _tmp129 * _tmp186;
  const Scalar _tmp216 = _tmp210 + _tmp212 - _tmp214 + _tmp215;
  const Scalar _tmp217 = -_tmp111 * _tmp216 + _tmp206 * _tmp68;
  const Scalar _tmp218 = _tmp113 * _tmp31;
  const Scalar _tmp219 = _tmp110 * _tmp47;
  const Scalar _tmp220 = _tmp112 * _tmp176;
  const Scalar _tmp221 = _tmp174 * _tmp220;
  const Scalar _tmp222 = _tmp110 * _tmp68;
  const Scalar _tmp223 = _tmp106 * _tmp213;
  const Scalar _tmp224 = _tmp83 * _tmp97;
  const Scalar _tmp225 = Scalar(1.0) * _tmp174;
  const Scalar _tmp226 = _tmp179 * _tmp95;
  const Scalar _tmp227 =
      -_tmp174 * _tmp226 + _tmp182 * _tmp96 - _tmp184 * _tmp93 + _tmp185 * _tmp225;
  const Scalar _tmp228 = _tmp104 * _tmp97;
  const Scalar _tmp229 = _tmp108 * (-_tmp105 * _tmp227 + _tmp188 * _tmp228 - _tmp193 * _tmp93 +
                                    _tmp194 * _tmp225 - _tmp195 * _tmp224);
  const Scalar _tmp230 = _tmp106 * _tmp107;
  const Scalar _tmp231 = _tmp186 * _tmp230;
  const Scalar _tmp232 = -_tmp223 + _tmp227 + _tmp229 + _tmp231;
  const Scalar _tmp233 = -_tmp111 * _tmp232 + _tmp188 * _tmp222;
  const Scalar _tmp234 = -_tmp123 * (_tmp112 * _tmp204 - _tmp114 + _tmp115 * _tmp232 -
                                     _tmp175 * _tmp221 - _tmp188 * _tmp219 + _tmp218 * _tmp233) -
                         _tmp136 * (_tmp115 * _tmp216 + _tmp132 * _tmp204 - _tmp133 -
                                    _tmp175 * _tmp203 - _tmp206 * _tmp47 + _tmp217 * _tmp218) -
                         _tmp140 * (-_tmp137 * _tmp190 + _tmp138 + _tmp197 * _tmp198 -
                                    _tmp197 * _tmp201 + _tmp199 * _tmp200) -
                         _tmp92 * (_tmp174 * _tmp175 * _tmp178 - _tmp188 * _tmp189 +
                                   _tmp188 * _tmp192 - _tmp190 * _tmp86 + _tmp88);
  const Scalar _tmp235 = std::pow(_tmp141, Scalar(-2));
  const Scalar _tmp236 = Scalar(0.1034955) * _tmp167 * _tmp235;
  const Scalar _tmp237 = Scalar(9.6622558468725703) * _tmp141;
  const Scalar _tmp238 = _tmp146 * _tmp213;
  const Scalar _tmp239 = _tmp107 * _tmp146;
  const Scalar _tmp240 = _tmp186 * _tmp239;
  const Scalar _tmp241 = Scalar(1.0) * _tmp75;
  const Scalar _tmp242 =
      -_tmp137 * _tmp183 - _tmp143 * _tmp238 + _tmp143 * _tmp240 + _tmp197 * _tmp241;
  const Scalar _tmp243 = _tmp183 * _tmp83;
  const Scalar _tmp244 = -_tmp131 * _tmp243 - _tmp150 * _tmp216 + _tmp151 * _tmp212 -
                         _tmp151 * _tmp214 + _tmp151 * _tmp215 + _tmp206 * _tmp75 + _tmp209;
  const Scalar _tmp245 = _tmp110 * _tmp75;
  const Scalar _tmp246 = -_tmp110 * _tmp243 - _tmp150 * _tmp232 - _tmp151 * _tmp223 +
                         _tmp151 * _tmp229 + _tmp151 * _tmp231 + _tmp179 * _tmp225 -
                         _tmp182 * _tmp93 + _tmp188 * _tmp245;
  const Scalar _tmp247 = _tmp75 * _tmp85;
  const Scalar _tmp248 = _tmp188 * _tmp247 - _tmp243 * _tmp85;
  const Scalar _tmp249 = _tmp89 * _tmp94;
  const Scalar _tmp250 = _tmp164 * _tmp235;
  const Scalar _tmp251 =
      std::pow(Scalar(std::pow(_tmp164, Scalar(2)) * _tmp235 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp252 = _tmp251 * (_tmp142 * (_tmp149 * (-_tmp238 + _tmp240 - _tmp242 * _tmp94) +
                                               _tmp153 * (_tmp146 * _tmp212 - _tmp146 * _tmp214 +
                                                          _tmp146 * _tmp215 - _tmp244 * _tmp94) +
                                               _tmp159 * (-_tmp146 * _tmp223 + _tmp146 * _tmp229 +
                                                          _tmp146 * _tmp231 - _tmp246 * _tmp94) -
                                               _tmp248 * _tmp249) -
                                    _tmp234 * _tmp250);
  const Scalar _tmp253 = Scalar(1.0) * _tmp165;
  const Scalar _tmp254 = Scalar(1.0) * std::cosh(_tmp253);
  const Scalar _tmp255 = -std::sinh(_tmp169) - std::sinh(_tmp253);
  const Scalar _tmp256 = _tmp86 * _tmp89;
  const Scalar _tmp257 = _tmp137 * _tmp139;
  const Scalar _tmp258 = _tmp132 * _tmp71;
  const Scalar _tmp259 = _tmp122 * _tmp71;
  const Scalar _tmp260 =
      _tmp112 * _tmp259 + _tmp135 * _tmp258 - _tmp256 * _tmp72 - _tmp257 * _tmp72;
  const Scalar _tmp261 = Scalar(1.0) / (_tmp260);
  const Scalar _tmp262 = _tmp135 * _tmp78;
  const Scalar _tmp263 = _tmp139 * _tmp78;
  const Scalar _tmp264 = _tmp78 * _tmp89;
  const Scalar _tmp265 = _tmp122 * _tmp78;
  const Scalar _tmp266 = _tmp149 * _tmp197;
  const Scalar _tmp267 = _tmp85 * _tmp89;
  const Scalar _tmp268 = _tmp177 * _tmp267;
  const Scalar _tmp269 = _tmp135 * _tmp71;
  const Scalar _tmp270 = _tmp188 * _tmp267;
  const Scalar _tmp271 = -_tmp122 * _tmp221 - _tmp135 * _tmp203 + _tmp174 * _tmp268 +
                         _tmp199 * _tmp257 + _tmp217 * _tmp269 + _tmp233 * _tmp259 +
                         _tmp266 * _tmp72 + _tmp270 * _tmp72;
  const Scalar _tmp272 = std::pow(_tmp260, Scalar(-2));
  const Scalar _tmp273 = _tmp146 * _tmp163;
  const Scalar _tmp274 = _tmp148 * _tmp263 + _tmp152 * _tmp262 + _tmp155 * _tmp157 * _tmp78 +
                         _tmp158 * _tmp265 + _tmp161 * _tmp264 - _tmp162 * _tmp273;
  const Scalar _tmp275 = _tmp272 * _tmp274;
  const Scalar _tmp276 =
      _tmp261 * (_tmp242 * _tmp263 + _tmp244 * _tmp262 + _tmp246 * _tmp265 + _tmp248 * _tmp264) -
      _tmp271 * _tmp275;
  const Scalar _tmp277 =
      std::pow(Scalar(_tmp272 * std::pow(_tmp274, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp278 = std::asinh(_tmp261 * _tmp274);
  const Scalar _tmp279 = Scalar(1.0) * _tmp278;
  const Scalar _tmp280 = Scalar(1.0) * _tmp277 * std::cosh(_tmp279);
  const Scalar _tmp281 = -_tmp30 + p_c(0, 0);
  const Scalar _tmp282 = -_tmp53 + p_c(1, 0);
  const Scalar _tmp283 = std::pow(_tmp281, Scalar(2)) + std::pow(_tmp282, Scalar(2));
  const Scalar _tmp284 = std::sqrt(_tmp283);
  const Scalar _tmp285 = Scalar(1.0) / (_tmp284);
  const Scalar _tmp286 = Scalar(9.6622558468725703) * _tmp271;
  const Scalar _tmp287 = Scalar(9.6622558468725703) * _tmp260;
  const Scalar _tmp288 = _tmp277 * _tmp287;
  const Scalar _tmp289 = Scalar(0.1034955) * _tmp261;
  const Scalar _tmp290 = -_tmp278 * _tmp287 - _tmp284;
  const Scalar _tmp291 = Scalar(0.1034955) * _tmp272 * _tmp290;
  const Scalar _tmp292 = _tmp289 * _tmp290;
  const Scalar _tmp293 = std::cosh(_tmp292);
  const Scalar _tmp294 = -std::sinh(_tmp279) - std::sinh(_tmp292);
  const Scalar _tmp295 = -_TransformationMatrix[6] - _tmp58 + p_c(2, 0);
  const Scalar _tmp296 =
      std::pow(Scalar(_tmp283 + std::pow(_tmp295, Scalar(2))), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp297 = _tmp122 * _tmp83;
  const Scalar _tmp298 = _tmp135 * _tmp83;
  const Scalar _tmp299 = _tmp110 * _tmp297 + _tmp131 * _tmp298 + _tmp256 + _tmp257;
  const Scalar _tmp300 = std::pow(_tmp299, Scalar(-2));
  const Scalar _tmp301 = _tmp122 * _tmp145;
  const Scalar _tmp302 = _tmp135 * _tmp145;
  const Scalar _tmp303 = -_tmp109 * _tmp301 - _tmp130 * _tmp302 - _tmp139 * _tmp147 -
                         _tmp155 * _tmp156 + _tmp160 * _tmp89 + _tmp273;
  const Scalar _tmp304 =
      std::pow(Scalar(_tmp300 * std::pow(_tmp303, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp305 = Scalar(1.0) / (_tmp299);
  const Scalar _tmp306 = _tmp110 * _tmp122;
  const Scalar _tmp307 = -_tmp135 * _tmp206 - _tmp188 * _tmp306 + _tmp216 * _tmp298 +
                         _tmp232 * _tmp297 - _tmp266 - _tmp270;
  const Scalar _tmp308 = _tmp300 * _tmp303;
  const Scalar _tmp309 =
      _tmp304 *
      (_tmp305 * (_tmp139 * _tmp238 - _tmp139 * _tmp240 - _tmp212 * _tmp302 + _tmp214 * _tmp302 -
                  _tmp215 * _tmp302 + _tmp223 * _tmp301 - _tmp229 * _tmp301 - _tmp231 * _tmp301) -
       _tmp307 * _tmp308);
  const Scalar _tmp310 = std::asinh(_tmp303 * _tmp305);
  const Scalar _tmp311 = Scalar(1.0) * _tmp310;
  const Scalar _tmp312 = Scalar(1.0) * std::cosh(_tmp311);
  const Scalar _tmp313 = Scalar(9.6622558468725703) * _tmp310;
  const Scalar _tmp314 =
      -_tmp299 * _tmp313 - std::sqrt(Scalar(std::pow(Scalar(-_tmp40 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp44 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp315 = Scalar(0.1034955) * _tmp305;
  const Scalar _tmp316 = _tmp314 * _tmp315;
  const Scalar _tmp317 = std::cosh(_tmp316);
  const Scalar _tmp318 = Scalar(0.1034955) * _tmp300 * _tmp314;
  const Scalar _tmp319 = Scalar(9.6622558468725703) * _tmp299;
  const Scalar _tmp320 = -Scalar(9.6622558468725703) * std::sinh(_tmp311) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp316);
  const Scalar _tmp321 = _tmp171 * _tmp55;
  const Scalar _tmp322 = -_tmp172 * _tmp74 + _tmp321 * _tmp58 - _tmp59;
  const Scalar _tmp323 = _tmp172 * _tmp67 - _tmp321 + _tmp57;
  const Scalar _tmp324 = _tmp323 * _tmp68;
  const Scalar _tmp325 = _tmp179 * _tmp324 - _tmp322 * _tmp72;
  const Scalar _tmp326 = _tmp172 * _tmp50 - _tmp181;
  const Scalar _tmp327 = _tmp185 * _tmp324 - _tmp325 * _tmp81 - _tmp326 * _tmp72;
  const Scalar _tmp328 = _tmp187 * _tmp327;
  const Scalar _tmp329 = _tmp175 * _tmp323;
  const Scalar _tmp330 = _tmp172 * _tmp72;
  const Scalar _tmp331 = _tmp101 * _tmp172 + _tmp172 * _tmp52 - _tmp29 * _tmp321 + _tmp98;
  const Scalar _tmp332 = _tmp194 * _tmp324 - _tmp331 * _tmp72;
  const Scalar _tmp333 = _tmp196 * _tmp332;
  const Scalar _tmp334 = _tmp333 * _tmp82;
  const Scalar _tmp335 = _tmp106 * _tmp334;
  const Scalar _tmp336 = Scalar(1.0) * _tmp323;
  const Scalar _tmp337 =
      _tmp185 * _tmp336 - _tmp226 * _tmp323 + _tmp322 * _tmp96 - _tmp326 * _tmp93;
  const Scalar _tmp338 = _tmp108 * (-_tmp105 * _tmp337 + _tmp194 * _tmp336 - _tmp224 * _tmp332 +
                                    _tmp228 * _tmp328 - _tmp331 * _tmp93);
  const Scalar _tmp339 = _tmp230 * _tmp327;
  const Scalar _tmp340 = -_tmp335 + _tmp337 + _tmp338 + _tmp339;
  const Scalar _tmp341 = -_tmp111 * _tmp340 + _tmp222 * _tmp328;
  const Scalar _tmp342 = _tmp128 * _tmp334;
  const Scalar _tmp343 = _tmp124 * _tmp322 - _tmp208 * _tmp323;
  const Scalar _tmp344 = _tmp323 * _tmp67;
  const Scalar _tmp345 = _tmp124 * _tmp326 - _tmp185 * _tmp344 - _tmp343 * _tmp81;
  const Scalar _tmp346 = _tmp108 * (-_tmp105 * _tmp345 + _tmp124 * _tmp331 - _tmp127 * _tmp332 -
                                    _tmp194 * _tmp344 + _tmp211 * _tmp328);
  const Scalar _tmp347 = _tmp129 * _tmp327;
  const Scalar _tmp348 = -_tmp342 + _tmp345 + _tmp346 + _tmp347;
  const Scalar _tmp349 = _tmp205 * _tmp327;
  const Scalar _tmp350 = -_tmp111 * _tmp348 + _tmp349 * _tmp68;
  const Scalar _tmp351 = _tmp176 * _tmp324;
  const Scalar _tmp352 =
      -_tmp123 * (_tmp112 * _tmp172 * _tmp71 + _tmp115 * _tmp340 + _tmp218 * _tmp341 -
                  _tmp219 * _tmp328 - _tmp220 * _tmp329) -
      _tmp136 * (_tmp115 * _tmp348 + _tmp172 * _tmp258 - _tmp202 * _tmp329 + _tmp218 * _tmp350 -
                 _tmp349 * _tmp47) -
      _tmp140 * (-_tmp137 * _tmp330 + _tmp198 * _tmp333 + _tmp200 * _tmp351 - _tmp201 * _tmp333) -
      _tmp92 * (_tmp178 * _tmp329 - _tmp189 * _tmp328 + _tmp192 * _tmp328 - _tmp330 * _tmp86);
  const Scalar _tmp353 = _tmp146 * _tmp334;
  const Scalar _tmp354 = _tmp239 * _tmp327;
  const Scalar _tmp355 =
      -_tmp137 * _tmp325 - _tmp143 * _tmp353 + _tmp143 * _tmp354 + _tmp241 * _tmp333;
  const Scalar _tmp356 = _tmp325 * _tmp83;
  const Scalar _tmp357 = -_tmp131 * _tmp356 - _tmp150 * _tmp348 - _tmp151 * _tmp342 +
                         _tmp151 * _tmp346 + _tmp151 * _tmp347 + _tmp343 + _tmp349 * _tmp75;
  const Scalar _tmp358 = -_tmp110 * _tmp356 - _tmp150 * _tmp340 - _tmp151 * _tmp335 +
                         _tmp151 * _tmp338 + _tmp151 * _tmp339 + _tmp179 * _tmp336 +
                         _tmp245 * _tmp328 - _tmp322 * _tmp93;
  const Scalar _tmp359 = _tmp247 * _tmp328 - _tmp356 * _tmp85;
  const Scalar _tmp360 = _tmp251 * (_tmp142 * (_tmp149 * (-_tmp353 + _tmp354 - _tmp355 * _tmp94) +
                                               _tmp153 * (-_tmp146 * _tmp342 + _tmp146 * _tmp346 +
                                                          _tmp146 * _tmp347 - _tmp357 * _tmp94) +
                                               _tmp159 * (-_tmp146 * _tmp335 + _tmp146 * _tmp338 +
                                                          _tmp146 * _tmp339 - _tmp358 * _tmp94) -
                                               _tmp249 * _tmp359) -
                                    _tmp250 * _tmp352);
  const Scalar _tmp361 = Scalar(9.6622558468725703) * _tmp352;
  const Scalar _tmp362 = _tmp149 * _tmp333;
  const Scalar _tmp363 = _tmp267 * _tmp328;
  const Scalar _tmp364 = -_tmp122 * _tmp220 * _tmp323 - _tmp135 * _tmp202 * _tmp323 +
                         _tmp257 * _tmp351 + _tmp259 * _tmp341 + _tmp268 * _tmp323 +
                         _tmp269 * _tmp350 + _tmp362 * _tmp72 + _tmp363 * _tmp72;
  const Scalar _tmp365 =
      _tmp261 * (_tmp262 * _tmp357 + _tmp263 * _tmp355 + _tmp264 * _tmp359 + _tmp265 * _tmp358) -
      _tmp275 * _tmp364;
  const Scalar _tmp366 = Scalar(9.6622558468725703) * _tmp364;
  const Scalar _tmp367 = -_tmp135 * _tmp349 + _tmp297 * _tmp340 + _tmp298 * _tmp348 -
                         _tmp306 * _tmp328 - _tmp362 - _tmp363;
  const Scalar _tmp368 =
      _tmp304 *
      (_tmp305 * (_tmp139 * _tmp353 - _tmp139 * _tmp354 + _tmp301 * _tmp335 - _tmp301 * _tmp338 -
                  _tmp301 * _tmp339 + _tmp302 * _tmp342 - _tmp302 * _tmp346 - _tmp302 * _tmp347) -
       _tmp308 * _tmp367);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      Scalar(9.6622558468725703) * _tmp234 * _tmp255 +
      _tmp237 *
          (-_tmp170 * (_tmp168 * (-_tmp166 * _tmp234 - _tmp237 * _tmp252) - _tmp234 * _tmp236) -
           _tmp252 * _tmp254);
  _res(2, 0) =
      -_tmp281 * _tmp296 + _tmp286 * _tmp294 +
      _tmp287 * (-_tmp276 * _tmp280 -
                 _tmp293 * (-_tmp271 * _tmp291 + _tmp289 * (-_tmp276 * _tmp288 - _tmp278 * _tmp286 -
                                                            _tmp281 * _tmp285)));
  _res(3, 0) =
      _tmp307 * _tmp320 +
      _tmp319 *
          (-_tmp309 * _tmp312 -
           _tmp317 * (-_tmp307 * _tmp318 + _tmp315 * (-_tmp307 * _tmp313 - _tmp309 * _tmp319)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp237 *
          (-_tmp170 * (_tmp168 * (-_tmp165 * _tmp361 - _tmp237 * _tmp360) - _tmp236 * _tmp352) -
           _tmp254 * _tmp360) +
      _tmp255 * _tmp361;
  _res(2, 1) =
      -_tmp282 * _tmp296 +
      _tmp287 * (-_tmp280 * _tmp365 -
                 _tmp293 * (_tmp289 * (-_tmp278 * _tmp366 - _tmp282 * _tmp285 - _tmp288 * _tmp365) -
                            _tmp291 * _tmp364)) +
      _tmp294 * _tmp366;
  _res(3, 1) =
      _tmp319 *
          (-_tmp312 * _tmp368 -
           _tmp317 * (_tmp315 * (-_tmp313 * _tmp367 - _tmp319 * _tmp368) - _tmp318 * _tmp367)) +
      _tmp320 * _tmp367;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = -_tmp295 * _tmp296;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
