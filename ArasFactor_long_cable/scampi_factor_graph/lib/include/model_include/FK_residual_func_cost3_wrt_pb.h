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
 * Symbolic function: FK_residual_func_cost3_wrt_pb
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     TransformationMatrix: Pose3
 *     encoder: Matrix41
 *     offset: Matrix41
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost3WrtPb(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 4, 1>& offset, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const Scalar epsilon) {
  // Total ops: 1193

  // Unused inputs
  (void)encoder;
  (void)offset;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (379)
  const Scalar _tmp0 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp5 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = _tmp2 * _tmp4;
  const Scalar _tmp9 = _tmp0 * _tmp5;
  const Scalar _tmp10 = _tmp8 - _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp13 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 +
                        Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999);
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = _TransformationMatrix[5] + _tmp16;
  const Scalar _tmp18 = _tmp17 - p_b(1, 0);
  const Scalar _tmp19 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp23 = _tmp1 * _tmp5;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp28 = _tmp25 + _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _TransformationMatrix[4] + _tmp29;
  const Scalar _tmp31 = _tmp30 - p_b(0, 0);
  const Scalar _tmp32 = std::pow(_tmp31, Scalar(2));
  const Scalar _tmp33 = _tmp19 + _tmp32;
  const Scalar _tmp34 = std::sqrt(_tmp33);
  const Scalar _tmp35 = Scalar(1.0) / (_tmp34);
  const Scalar _tmp36 = -_tmp7;
  const Scalar _tmp37 = _tmp11 + _tmp14;
  const Scalar _tmp38 = _tmp36 + _tmp37;
  const Scalar _tmp39 = _TransformationMatrix[5] + _tmp38;
  const Scalar _tmp40 = _tmp39 - p_d(1, 0);
  const Scalar _tmp41 = _tmp25 - _tmp27;
  const Scalar _tmp42 = _tmp20 + _tmp41;
  const Scalar _tmp43 = _TransformationMatrix[4] + _tmp42;
  const Scalar _tmp44 = _tmp43 - p_d(0, 0);
  const Scalar _tmp45 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp44, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp46 = _tmp44 * _tmp45;
  const Scalar _tmp47 = _tmp40 * _tmp45;
  const Scalar _tmp48 = _tmp20 + _tmp28;
  const Scalar _tmp49 = _TransformationMatrix[4] + _tmp48;
  const Scalar _tmp50 = _tmp49 - p_c(0, 0);
  const Scalar _tmp51 = std::pow(_tmp50, Scalar(2));
  const Scalar _tmp52 = _tmp37 + _tmp7;
  const Scalar _tmp53 = _TransformationMatrix[5] + _tmp52;
  const Scalar _tmp54 = _tmp53 - p_c(1, 0);
  const Scalar _tmp55 = _tmp51 + std::pow(_tmp54, Scalar(2));
  const Scalar _tmp56 = std::pow(_tmp55, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp57 = _tmp54 * _tmp56;
  const Scalar _tmp58 = _tmp50 * _tmp56;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp31);
  const Scalar _tmp60 = _tmp29 * _tmp35;
  const Scalar _tmp61 = _tmp16 * _tmp35;
  const Scalar _tmp62 = _tmp18 * _tmp60 - _tmp31 * _tmp61;
  const Scalar _tmp63 = _tmp34 * _tmp62;
  const Scalar _tmp64 = _tmp59 * _tmp63;
  const Scalar _tmp65 = -_tmp48 * _tmp57 + _tmp52 * _tmp58 + _tmp58 * _tmp64;
  const Scalar _tmp66 = _tmp18 * _tmp59;
  const Scalar _tmp67 = _tmp46 * _tmp66 - _tmp47;
  const Scalar _tmp68 = _tmp58 * _tmp66;
  const Scalar _tmp69 = -_tmp57 + _tmp68;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp67 * _tmp70;
  const Scalar _tmp72 = _tmp38 * _tmp46 - _tmp42 * _tmp47 + _tmp46 * _tmp64 - _tmp65 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = Scalar(1.0) * _tmp73;
  const Scalar _tmp75 = _tmp46 * _tmp74;
  const Scalar _tmp76 = _tmp58 * _tmp71;
  const Scalar _tmp77 = _tmp21 + _tmp41;
  const Scalar _tmp78 = _TransformationMatrix[4] + _tmp77 - p_a(0, 0);
  const Scalar _tmp79 = _tmp15 + _tmp36;
  const Scalar _tmp80 = _TransformationMatrix[5] + _tmp79 - p_a(1, 0);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp80 * _tmp81;
  const Scalar _tmp83 = _tmp78 * _tmp81;
  const Scalar _tmp84 = fh1 * (_tmp77 * _tmp82 - _tmp79 * _tmp83);
  const Scalar _tmp85 = _tmp84 * (-_tmp74 * _tmp76 + _tmp75);
  const Scalar _tmp86 = _tmp35 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) * _tmp70;
  const Scalar _tmp88 = _tmp58 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp32);
  const Scalar _tmp90 = _tmp18 * _tmp89;
  const Scalar _tmp91 = _tmp46 * _tmp73 * _tmp90;
  const Scalar _tmp92 = _tmp51 / _tmp55;
  const Scalar _tmp93 = std::pow(_tmp69, Scalar(-2));
  const Scalar _tmp94 = _tmp90 * _tmp93;
  const Scalar _tmp95 = _tmp92 * _tmp94;
  const Scalar _tmp96 = _tmp67 * _tmp74;
  const Scalar _tmp97 = _tmp70 * _tmp90;
  const Scalar _tmp98 = _tmp65 * _tmp97;
  const Scalar _tmp99 = std::pow(_tmp33, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp100 = _tmp16 * _tmp99;
  const Scalar _tmp101 = _tmp29 * _tmp99;
  const Scalar _tmp102 = _tmp18 * _tmp31;
  const Scalar _tmp103 = _tmp34 * _tmp59;
  const Scalar _tmp104 = _tmp103 * (-_tmp100 * _tmp32 + _tmp101 * _tmp102 + _tmp61);
  const Scalar _tmp105 = _tmp35 * _tmp62;
  const Scalar _tmp106 = _tmp63 * _tmp89;
  const Scalar _tmp107 = _tmp104 * _tmp58 - _tmp105 * _tmp58 + _tmp106 * _tmp58;
  const Scalar _tmp108 = _tmp105 * _tmp46;
  const Scalar _tmp109 = _tmp58 * _tmp94;
  const Scalar _tmp110 = _tmp109 * _tmp65;
  const Scalar _tmp111 = _tmp104 * _tmp46 + _tmp106 * _tmp46 - _tmp107 * _tmp71 - _tmp108 +
                         _tmp110 * _tmp67 - _tmp46 * _tmp98;
  const Scalar _tmp112 = std::pow(_tmp72, Scalar(-2));
  const Scalar _tmp113 = _tmp111 * _tmp112;
  const Scalar _tmp114 = Scalar(1.0) * _tmp76;
  const Scalar _tmp115 = Scalar(1.0) * _tmp46;
  const Scalar _tmp116 = _tmp103 * _tmp84;
  const Scalar _tmp117 = _tmp34 * _tmp89;
  const Scalar _tmp118 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp119 =
      -Scalar(0.010999999999999999) * _tmp12 - Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp120 =
      Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp121 = _tmp119 - _tmp120;
  const Scalar _tmp122 = _tmp118 + _tmp121;
  const Scalar _tmp123 = -_tmp118;
  const Scalar _tmp124 = _tmp119 + _tmp120;
  const Scalar _tmp125 = _tmp123 + _tmp124;
  const Scalar _tmp126 = _tmp118 + _tmp124;
  const Scalar _tmp127 = _tmp125 * _tmp58;
  const Scalar _tmp128 = -_tmp126 * _tmp58 + _tmp127;
  const Scalar _tmp129 = _tmp125 * _tmp59;
  const Scalar _tmp130 = _tmp129 * _tmp18;
  const Scalar _tmp131 = _tmp126 * _tmp57 - _tmp130 * _tmp58;
  const Scalar _tmp132 = _tmp122 * _tmp47 - _tmp130 * _tmp46 - _tmp131 * _tmp71;
  const Scalar _tmp133 = Scalar(1.0) * _tmp16;
  const Scalar _tmp134 = -_tmp133;
  const Scalar _tmp135 = Scalar(1.0) / (_tmp134 + _tmp52);
  const Scalar _tmp136 = Scalar(1.0) * _tmp29;
  const Scalar _tmp137 = _tmp136 - _tmp48;
  const Scalar _tmp138 = _tmp135 * _tmp137;
  const Scalar _tmp139 =
      -_tmp122 * _tmp46 + _tmp125 * _tmp46 - _tmp128 * _tmp71 - _tmp132 * _tmp138;
  const Scalar _tmp140 = Scalar(1.0) / (_tmp139);
  const Scalar _tmp141 = Scalar(1.0) * _tmp135;
  const Scalar _tmp142 = _tmp137 * _tmp141;
  const Scalar _tmp143 = _tmp131 * _tmp142;
  const Scalar _tmp144 = -_tmp128 * _tmp87 + _tmp143 * _tmp70;
  const Scalar _tmp145 = _tmp140 * _tmp144;
  const Scalar _tmp146 = -_tmp145 * _tmp72 - _tmp65 * _tmp87;
  const Scalar _tmp147 = _tmp146 * _tmp73;
  const Scalar _tmp148 = _tmp139 * _tmp147;
  const Scalar _tmp149 = _tmp144 + _tmp148;
  const Scalar _tmp150 = _tmp140 * _tmp67;
  const Scalar _tmp151 = -_tmp149 * _tmp150 + Scalar(1.0);
  const Scalar _tmp152 = _tmp58 * _tmp70;
  const Scalar _tmp153 = _tmp140 * _tmp149;
  const Scalar _tmp154 = _tmp153 * _tmp46;
  const Scalar _tmp155 = _tmp82 * fh1;
  const Scalar _tmp156 = _tmp155 * (_tmp151 * _tmp152 + _tmp154);
  const Scalar _tmp157 = _tmp128 * _tmp97;
  const Scalar _tmp158 = _tmp125 * _tmp90;
  const Scalar _tmp159 = _tmp109 * _tmp131;
  const Scalar _tmp160 = _tmp131 * _tmp97;
  const Scalar _tmp161 = -_tmp158 * _tmp46 + _tmp158 * _tmp76 + _tmp159 * _tmp67 - _tmp160 * _tmp46;
  const Scalar _tmp162 = _tmp128 * _tmp58;
  const Scalar _tmp163 = _tmp162 * _tmp94;
  const Scalar _tmp164 = -_tmp138 * _tmp161 - _tmp157 * _tmp46 + _tmp163 * _tmp67;
  const Scalar _tmp165 = _tmp66 * _tmp70;
  const Scalar _tmp166 = _tmp130 + _tmp131 * _tmp165;
  const Scalar _tmp167 = -_tmp125 + _tmp128 * _tmp165 - _tmp138 * _tmp166;
  const Scalar _tmp168 = _tmp140 * _tmp167;
  const Scalar _tmp169 = _tmp165 * _tmp65 - _tmp168 * _tmp72 - _tmp64;
  const Scalar _tmp170 = _tmp169 * _tmp73;
  const Scalar _tmp171 = _tmp164 * _tmp170;
  const Scalar _tmp172 = _tmp113 * _tmp139;
  const Scalar _tmp173 = _tmp169 * _tmp172;
  const Scalar _tmp174 = _tmp19 / [&]() {
    const Scalar base = _tmp31;
    return base * base * base;
  }();
  const Scalar _tmp175 = _tmp174 * _tmp93;
  const Scalar _tmp176 = _tmp175 * _tmp58;
  const Scalar _tmp177 = -_tmp127 * _tmp174 * _tmp70 - _tmp131 * _tmp176 + _tmp158 + _tmp160;
  const Scalar _tmp178 = -_tmp138 * _tmp177 + _tmp157 - _tmp162 * _tmp175;
  const Scalar _tmp179 = _tmp140 * _tmp72;
  const Scalar _tmp180 = std::pow(_tmp139, Scalar(-2));
  const Scalar _tmp181 = _tmp164 * _tmp180;
  const Scalar _tmp182 = _tmp167 * _tmp72;
  const Scalar _tmp183 = _tmp139 * _tmp73;
  const Scalar _tmp184 =
      _tmp183 * (-_tmp104 + _tmp105 - _tmp106 + _tmp107 * _tmp165 - _tmp111 * _tmp168 -
                 _tmp176 * _tmp65 - _tmp178 * _tmp179 + _tmp181 * _tmp182 + _tmp98);
  const Scalar _tmp185 = _tmp171 - _tmp173 + _tmp178 + _tmp184;
  const Scalar _tmp186 = _tmp140 * _tmp46;
  const Scalar _tmp187 = _tmp169 * _tmp183;
  const Scalar _tmp188 = _tmp167 + _tmp187;
  const Scalar _tmp189 = _tmp140 * _tmp188;
  const Scalar _tmp190 = _tmp189 * _tmp46;
  const Scalar _tmp191 = _tmp188 * _tmp67;
  const Scalar _tmp192 = -_tmp150 * _tmp185 + _tmp181 * _tmp191 - _tmp190 * _tmp90 - _tmp90;
  const Scalar _tmp193 = -_tmp150 * _tmp188 - _tmp66;
  const Scalar _tmp194 = _tmp193 * _tmp92;
  const Scalar _tmp195 = _tmp188 * _tmp46;
  const Scalar _tmp196 = _tmp83 * fh1;
  const Scalar _tmp197 = _tmp103 * _tmp196;
  const Scalar _tmp198 = _tmp196 * (_tmp152 * _tmp193 + _tmp190 + Scalar(1.0));
  const Scalar _tmp199 = _tmp198 * _tmp35;
  const Scalar _tmp200 = _tmp144 * _tmp72;
  const Scalar _tmp201 = _tmp152 * _tmp158;
  const Scalar _tmp202 = -_tmp109 * _tmp143 - _tmp142 * _tmp201 + Scalar(1.0) * _tmp163;
  const Scalar _tmp203 = _tmp183 * (-_tmp107 * _tmp87 + Scalar(1.0) * _tmp110 - _tmp111 * _tmp145 -
                                    _tmp179 * _tmp202 + _tmp181 * _tmp200);
  const Scalar _tmp204 = _tmp146 * _tmp172;
  const Scalar _tmp205 = _tmp147 * _tmp164;
  const Scalar _tmp206 = _tmp202 + _tmp203 - _tmp204 + _tmp205;
  const Scalar _tmp207 = _tmp149 * _tmp181;
  const Scalar _tmp208 = -_tmp150 * _tmp206 - _tmp154 * _tmp90 + _tmp207 * _tmp67;
  const Scalar _tmp209 = _tmp103 * _tmp155;
  const Scalar _tmp210 = _tmp133 * _tmp138 + _tmp136;
  const Scalar _tmp211 = 0;
  const Scalar _tmp212 = _tmp150 * _tmp211;
  const Scalar _tmp213 = _tmp181 * _tmp211;
  const Scalar _tmp214 = _tmp140 * _tmp211;
  const Scalar _tmp215 = _tmp214 * _tmp46;
  const Scalar _tmp216 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp217 = _tmp103 * _tmp216;
  const Scalar _tmp218 = _tmp216 * (-_tmp214 * _tmp76 + _tmp215);
  const Scalar _tmp219 = _tmp156 * _tmp35;
  const Scalar _tmp220 = _tmp218 * _tmp35;
  const Scalar _tmp221 =
      -_tmp116 * (_tmp113 * _tmp114 - _tmp113 * _tmp115 - _tmp88 * _tmp91 + _tmp95 * _tmp96) -
      _tmp117 * _tmp156 - _tmp117 * _tmp198 - _tmp117 * _tmp218 - _tmp117 * _tmp85 -
      _tmp197 * (_tmp152 * _tmp192 - _tmp181 * _tmp195 + _tmp185 * _tmp186 - _tmp194 * _tmp94) +
      _tmp199 -
      _tmp209 * (-_tmp151 * _tmp95 + _tmp152 * _tmp208 + _tmp186 * _tmp206 - _tmp207 * _tmp46) -
      _tmp217 *
          (-_tmp152 * _tmp215 * _tmp90 + _tmp212 * _tmp95 - _tmp213 * _tmp46 + _tmp213 * _tmp76) +
      _tmp219 + _tmp220 + _tmp86;
  const Scalar _tmp222 = fh1 * (_tmp121 + _tmp123);
  const Scalar _tmp223 = -Scalar(2.3544) * _tmp10 - _tmp222 * _tmp82 - _tmp79 * fv1;
  const Scalar _tmp224 = _tmp134 + _tmp38;
  const Scalar _tmp225 = _tmp138 * _tmp224;
  const Scalar _tmp226 = Scalar(1.0) / (_tmp136 - _tmp225 - _tmp42);
  const Scalar _tmp227 = Scalar(1.0) * _tmp226;
  const Scalar _tmp228 = _tmp138 * _tmp227;
  const Scalar _tmp229 = _tmp225 * _tmp227 + Scalar(1.0);
  const Scalar _tmp230 = _tmp183 * _tmp227;
  const Scalar _tmp231 = -_tmp132 * _tmp74 + _tmp224 * _tmp230;
  const Scalar _tmp232 = Scalar(1.0) * _tmp84;
  const Scalar _tmp233 = _tmp132 * _tmp140;
  const Scalar _tmp234 = _tmp224 * _tmp226;
  const Scalar _tmp235 = _tmp166 + _tmp187 * _tmp234 - _tmp188 * _tmp233;
  const Scalar _tmp236 = Scalar(1.0) * _tmp196;
  const Scalar _tmp237 = -_tmp131 * _tmp87 + _tmp148 * _tmp234 - _tmp149 * _tmp233;
  const Scalar _tmp238 = Scalar(1.0) * _tmp155;
  const Scalar _tmp239 = _tmp210 * _tmp226;
  const Scalar _tmp240 = _tmp134 - _tmp211 * _tmp233 - _tmp224 * _tmp239;
  const Scalar _tmp241 = _tmp135 * _tmp224;
  const Scalar _tmp242 = _tmp222 * _tmp83 + Scalar(2.3544) * _tmp24 + _tmp77 * fv1;
  const Scalar _tmp243 =
      Scalar(1.0) * _tmp216 * (-_tmp141 * _tmp240 - _tmp210 * _tmp227 + Scalar(1.0)) +
      Scalar(1.0) * _tmp223 * (-_tmp141 * _tmp229 + _tmp228) +
      _tmp232 * (-_tmp141 * _tmp231 + _tmp230) +
      _tmp236 * (-_tmp141 * _tmp235 + _tmp187 * _tmp227) +
      _tmp238 * (-_tmp141 * _tmp237 + _tmp148 * _tmp227) +
      Scalar(1.0) * _tmp242 * (_tmp227 * _tmp241 - _tmp227);
  const Scalar _tmp244 =
      -_tmp103 * _tmp156 - _tmp103 * _tmp198 - _tmp103 * _tmp218 - _tmp103 * _tmp85;
  const Scalar _tmp245 = Scalar(1.0) / (_tmp244);
  const Scalar _tmp246 = std::asinh(_tmp243 * _tmp245);
  const Scalar _tmp247 = Scalar(1.0) * _tmp246;
  const Scalar _tmp248 = -_tmp30 + p_b(0, 0);
  const Scalar _tmp249 = -_tmp17 + p_b(1, 0);
  const Scalar _tmp250 =
      std::sqrt(Scalar(std::pow(_tmp248, Scalar(2)) + std::pow(_tmp249, Scalar(2))));
  const Scalar _tmp251 = Scalar(9.6622558468725703) * _tmp244;
  const Scalar _tmp252 = -_tmp246 * _tmp251 - _tmp250;
  const Scalar _tmp253 = Scalar(0.1034955) * _tmp245;
  const Scalar _tmp254 = _tmp252 * _tmp253;
  const Scalar _tmp255 = -Scalar(9.6622558468725703) * std::sinh(_tmp247) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp254);
  const Scalar _tmp256 = Scalar(1.0) * std::cosh(_tmp247);
  const Scalar _tmp257 = std::pow(_tmp244, Scalar(-2));
  const Scalar _tmp258 =
      std::pow(Scalar(std::pow(_tmp243, Scalar(2)) * _tmp257 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp259 = _tmp227 * _tmp73;
  const Scalar _tmp260 = _tmp164 * _tmp259;
  const Scalar _tmp261 = _tmp172 * _tmp227;
  const Scalar _tmp262 = Scalar(1.0) * _tmp132;
  const Scalar _tmp263 =
      _tmp113 * _tmp262 - _tmp161 * _tmp74 + _tmp224 * _tmp260 - _tmp224 * _tmp261;
  const Scalar _tmp264 = _tmp135 * _tmp216;
  const Scalar _tmp265 = _tmp264 * (_tmp132 * _tmp213 - _tmp161 * _tmp214);
  const Scalar _tmp266 = _tmp132 * _tmp207 - _tmp153 * _tmp161 + _tmp158 * _tmp88 +
                         Scalar(1.0) * _tmp159 + _tmp203 * _tmp234 - _tmp204 * _tmp234 +
                         _tmp205 * _tmp234 - _tmp206 * _tmp233;
  const Scalar _tmp267 = _tmp132 * _tmp188;
  const Scalar _tmp268 = -_tmp161 * _tmp189 + _tmp171 * _tmp234 - _tmp173 * _tmp234 + _tmp177 +
                         _tmp181 * _tmp267 + _tmp184 * _tmp234 - _tmp185 * _tmp233;
  const Scalar _tmp269 = _tmp243 * _tmp257;
  const Scalar _tmp270 = _tmp258 * (-_tmp221 * _tmp269 +
                                    _tmp245 * (_tmp232 * (-_tmp141 * _tmp263 + _tmp260 - _tmp261) +
                                               _tmp236 * (-_tmp141 * _tmp268 + _tmp171 * _tmp227 -
                                                          _tmp173 * _tmp227 + _tmp184 * _tmp227) +
                                               _tmp238 * (-_tmp141 * _tmp266 + _tmp203 * _tmp227 -
                                                          _tmp204 * _tmp227 + _tmp205 * _tmp227) -
                                               Scalar(1.0) * _tmp265));
  const Scalar _tmp271 = Scalar(0.1034955) * _tmp252 * _tmp257;
  const Scalar _tmp272 = Scalar(1.0) / (_tmp250);
  const Scalar _tmp273 = Scalar(9.6622558468725703) * _tmp246;
  const Scalar _tmp274 = std::cosh(_tmp254);
  const Scalar _tmp275 = _tmp214 * _tmp216;
  const Scalar _tmp276 = _tmp74 * _tmp84;
  const Scalar _tmp277 = _tmp213 * _tmp216;
  const Scalar _tmp278 = _tmp155 * _tmp70;
  const Scalar _tmp279 = _tmp196 * _tmp70;
  const Scalar _tmp280 = _tmp113 * _tmp232;
  const Scalar _tmp281 = _tmp212 * _tmp216;
  const Scalar _tmp282 = _tmp193 * _tmp196;
  const Scalar _tmp283 = -_tmp109 * _tmp151 * _tmp155 + _tmp109 * _tmp276 * _tmp67 +
                         _tmp109 * _tmp281 - _tmp109 * _tmp282 + _tmp192 * _tmp279 +
                         _tmp208 * _tmp278 - _tmp275 * _tmp46 * _tmp97 + _tmp277 * _tmp71 +
                         _tmp280 * _tmp71 - _tmp84 * _tmp87 * _tmp91;
  const Scalar _tmp284 =
      _tmp151 * _tmp278 + _tmp193 * _tmp279 - _tmp275 * _tmp71 - _tmp276 * _tmp71;
  const Scalar _tmp285 = Scalar(1.0) / (_tmp284);
  const Scalar _tmp286 = _tmp135 * _tmp84;
  const Scalar _tmp287 = _tmp135 * _tmp196;
  const Scalar _tmp288 = _tmp227 * _tmp242;
  const Scalar _tmp289 = _tmp135 * _tmp155;
  const Scalar _tmp290 = _tmp135 * _tmp223 * _tmp229 + _tmp231 * _tmp286 + _tmp235 * _tmp287 +
                         _tmp237 * _tmp289 + _tmp240 * _tmp264 - _tmp241 * _tmp288;
  const Scalar _tmp291 = std::asinh(_tmp285 * _tmp290);
  const Scalar _tmp292 = Scalar(1.0) * _tmp291;
  const Scalar _tmp293 = Scalar(9.6622558468725703) * _tmp291;
  const Scalar _tmp294 =
      -_tmp284 * _tmp293 - std::sqrt(Scalar(std::pow(Scalar(-_tmp49 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp53 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp295 = Scalar(0.1034955) * _tmp285;
  const Scalar _tmp296 = _tmp294 * _tmp295;
  const Scalar _tmp297 = -Scalar(9.6622558468725703) * std::sinh(_tmp292) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp296);
  const Scalar _tmp298 = std::pow(_tmp284, Scalar(-2));
  const Scalar _tmp299 =
      std::pow(Scalar(std::pow(_tmp290, Scalar(2)) * _tmp298 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp300 = _tmp290 * _tmp298;
  const Scalar _tmp301 =
      _tmp299 * (-_tmp283 * _tmp300 +
                 _tmp285 * (_tmp263 * _tmp286 + _tmp265 + _tmp266 * _tmp289 + _tmp268 * _tmp287));
  const Scalar _tmp302 = Scalar(1.0) * std::cosh(_tmp292);
  const Scalar _tmp303 = std::cosh(_tmp296);
  const Scalar _tmp304 = Scalar(0.1034955) * _tmp294 * _tmp298;
  const Scalar _tmp305 = Scalar(9.6622558468725703) * _tmp284;
  const Scalar _tmp306 = _tmp153 * _tmp155 + _tmp189 * _tmp196 + _tmp275 + _tmp276;
  const Scalar _tmp307 = Scalar(1.0) / (_tmp306);
  const Scalar _tmp308 = _tmp155 * _tmp226;
  const Scalar _tmp309 = _tmp196 * _tmp226;
  const Scalar _tmp310 = -_tmp148 * _tmp308 - _tmp187 * _tmp309 + _tmp216 * _tmp239 -
                         _tmp223 * _tmp228 - _tmp230 * _tmp84 + _tmp288;
  const Scalar _tmp311 = std::asinh(_tmp307 * _tmp310);
  const Scalar _tmp312 = Scalar(9.6622558468725703) * _tmp311;
  const Scalar _tmp313 =
      -_tmp306 * _tmp312 - std::sqrt(Scalar(std::pow(Scalar(-_tmp39 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp43 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp314 = Scalar(0.1034955) * _tmp307;
  const Scalar _tmp315 = _tmp313 * _tmp314;
  const Scalar _tmp316 = std::cosh(_tmp315);
  const Scalar _tmp317 = Scalar(9.6622558468725703) * _tmp306;
  const Scalar _tmp318 = _tmp188 * _tmp196;
  const Scalar _tmp319 = _tmp140 * _tmp196;
  const Scalar _tmp320 = _tmp140 * _tmp155;
  const Scalar _tmp321 = -_tmp155 * _tmp207 - _tmp181 * _tmp318 + _tmp185 * _tmp319 +
                         _tmp206 * _tmp320 - _tmp277 - _tmp280;
  const Scalar _tmp322 = std::pow(_tmp306, Scalar(-2));
  const Scalar _tmp323 = _tmp310 * _tmp322;
  const Scalar _tmp324 =
      std::pow(Scalar(std::pow(_tmp310, Scalar(2)) * _tmp322 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp325 =
      _tmp324 *
      (_tmp307 * (-_tmp171 * _tmp309 + _tmp173 * _tmp309 - _tmp184 * _tmp309 - _tmp203 * _tmp308 +
                  _tmp204 * _tmp308 - _tmp205 * _tmp308 - _tmp260 * _tmp84 + _tmp261 * _tmp84) -
       _tmp321 * _tmp323);
  const Scalar _tmp326 = Scalar(0.1034955) * _tmp313 * _tmp322;
  const Scalar _tmp327 = Scalar(1.0) * _tmp311;
  const Scalar _tmp328 = Scalar(1.0) * std::cosh(_tmp327);
  const Scalar _tmp329 = -Scalar(9.6622558468725703) * std::sinh(_tmp315) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp327);
  const Scalar _tmp330 = _tmp59 * _tmp93;
  const Scalar _tmp331 = _tmp330 * _tmp58;
  const Scalar _tmp332 = _tmp331 * _tmp67;
  const Scalar _tmp333 = _tmp59 * _tmp70;
  const Scalar _tmp334 = _tmp128 * _tmp333;
  const Scalar _tmp335 = _tmp131 * _tmp333;
  const Scalar _tmp336 = _tmp129 * _tmp46 - _tmp129 * _tmp76 - _tmp131 * _tmp332 + _tmp335 * _tmp46;
  const Scalar _tmp337 = -_tmp128 * _tmp332 - _tmp138 * _tmp336 + _tmp334 * _tmp46;
  const Scalar _tmp338 = _tmp180 * _tmp337;
  const Scalar _tmp339 = _tmp211 * _tmp338;
  const Scalar _tmp340 = _tmp330 * _tmp92;
  const Scalar _tmp341 = _tmp333 * _tmp58;
  const Scalar _tmp342 = _tmp170 * _tmp337;
  const Scalar _tmp343 = _tmp103 * (-_tmp100 * _tmp102 + _tmp101 * _tmp19 - _tmp60);
  const Scalar _tmp344 = -_tmp105 * _tmp68 + _tmp343 * _tmp58;
  const Scalar _tmp345 = _tmp333 * _tmp65;
  const Scalar _tmp346 =
      -_tmp108 * _tmp66 - _tmp332 * _tmp65 + _tmp343 * _tmp46 - _tmp344 * _tmp71 + _tmp345 * _tmp46;
  const Scalar _tmp347 = _tmp112 * _tmp346;
  const Scalar _tmp348 = _tmp139 * _tmp347;
  const Scalar _tmp349 = _tmp169 * _tmp348;
  const Scalar _tmp350 = -_tmp129 + _tmp159 + _tmp201 - _tmp335;
  const Scalar _tmp351 = -_tmp138 * _tmp350 + _tmp163 - _tmp334;
  const Scalar _tmp352 =
      _tmp183 * (_tmp105 * _tmp66 + _tmp110 + _tmp165 * _tmp344 - _tmp168 * _tmp346 -
                 _tmp179 * _tmp351 + _tmp182 * _tmp338 - _tmp343 - _tmp345);
  const Scalar _tmp353 = _tmp342 - _tmp349 + _tmp351 + _tmp352;
  const Scalar _tmp354 = -_tmp150 * _tmp353 + _tmp190 * _tmp59 + _tmp191 * _tmp338 + _tmp59;
  const Scalar _tmp355 = Scalar(1.0) * _tmp331;
  const Scalar _tmp356 = -_tmp128 * _tmp355 + _tmp129 * _tmp142 * _tmp152 + _tmp143 * _tmp331;
  const Scalar _tmp357 = _tmp183 * (-_tmp145 * _tmp346 - _tmp179 * _tmp356 + _tmp200 * _tmp338 -
                                    _tmp344 * _tmp87 - _tmp355 * _tmp65);
  const Scalar _tmp358 = _tmp146 * _tmp348;
  const Scalar _tmp359 = _tmp147 * _tmp337;
  const Scalar _tmp360 = _tmp356 + _tmp357 - _tmp358 + _tmp359;
  const Scalar _tmp361 = _tmp149 * _tmp338;
  const Scalar _tmp362 = -_tmp150 * _tmp360 + _tmp154 * _tmp59 + _tmp361 * _tmp67;
  const Scalar _tmp363 = _tmp151 * _tmp330;
  const Scalar _tmp364 =
      -_tmp116 * (_tmp114 * _tmp347 - _tmp115 * _tmp347 - _tmp340 * _tmp96 + _tmp341 * _tmp75) -
      _tmp197 * (_tmp152 * _tmp354 + _tmp186 * _tmp353 + _tmp194 * _tmp330 - _tmp195 * _tmp338) +
      _tmp199 * _tmp66 -
      _tmp209 * (_tmp152 * _tmp362 + _tmp186 * _tmp360 - _tmp361 * _tmp46 + _tmp363 * _tmp92) -
      _tmp217 * (-_tmp212 * _tmp340 + _tmp215 * _tmp341 - _tmp339 * _tmp46 + _tmp339 * _tmp76) +
      _tmp219 * _tmp66 + _tmp220 * _tmp66 + _tmp66 * _tmp86;
  const Scalar _tmp365 = -_tmp129 * _tmp88 - _tmp131 * _tmp355 + _tmp132 * _tmp361 -
                         _tmp153 * _tmp336 - _tmp233 * _tmp360 + _tmp234 * _tmp357 -
                         _tmp234 * _tmp358 + _tmp234 * _tmp359;
  const Scalar _tmp366 = -_tmp189 * _tmp336 - _tmp233 * _tmp353 + _tmp234 * _tmp342 -
                         _tmp234 * _tmp349 + _tmp234 * _tmp352 + _tmp267 * _tmp338 + _tmp350;
  const Scalar _tmp367 = _tmp264 * (_tmp132 * _tmp339 - _tmp214 * _tmp336);
  const Scalar _tmp368 = _tmp259 * _tmp337;
  const Scalar _tmp369 = _tmp227 * _tmp348;
  const Scalar _tmp370 =
      _tmp224 * _tmp368 - _tmp224 * _tmp369 + _tmp262 * _tmp347 - _tmp336 * _tmp74;
  const Scalar _tmp371 = _tmp258 * (_tmp245 * (_tmp232 * (-_tmp141 * _tmp370 + _tmp368 - _tmp369) +
                                               _tmp236 * (-_tmp141 * _tmp366 + _tmp227 * _tmp342 -
                                                          _tmp227 * _tmp349 + _tmp227 * _tmp352) +
                                               _tmp238 * (-_tmp141 * _tmp365 + _tmp227 * _tmp357 -
                                                          _tmp227 * _tmp358 + _tmp227 * _tmp359) -
                                               Scalar(1.0) * _tmp367) -
                                    _tmp269 * _tmp364);
  const Scalar _tmp372 = _tmp232 * _tmp347;
  const Scalar _tmp373 = _tmp333 * _tmp46;
  const Scalar _tmp374 = _tmp216 * _tmp339;
  const Scalar _tmp375 = _tmp155 * _tmp363 * _tmp58 + _tmp275 * _tmp373 - _tmp276 * _tmp332 +
                         _tmp276 * _tmp373 + _tmp278 * _tmp362 + _tmp279 * _tmp354 -
                         _tmp281 * _tmp331 + _tmp282 * _tmp331 + _tmp372 * _tmp71 +
                         _tmp374 * _tmp71;
  const Scalar _tmp376 =
      _tmp299 * (_tmp285 * (_tmp286 * _tmp370 + _tmp287 * _tmp366 + _tmp289 * _tmp365 + _tmp367) -
                 _tmp300 * _tmp375);
  const Scalar _tmp377 = -_tmp155 * _tmp361 - _tmp318 * _tmp338 + _tmp319 * _tmp353 +
                         _tmp320 * _tmp360 - _tmp372 - _tmp374;
  const Scalar _tmp378 =
      _tmp324 *
      (_tmp307 * (-_tmp308 * _tmp357 + _tmp308 * _tmp358 - _tmp308 * _tmp359 - _tmp309 * _tmp342 +
                  _tmp309 * _tmp349 - _tmp309 * _tmp352 - _tmp368 * _tmp84 + _tmp369 * _tmp84) -
       _tmp323 * _tmp377);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp221 * _tmp255 +
      _tmp251 * (-_tmp256 * _tmp270 -
                 _tmp274 * (-_tmp221 * _tmp271 + _tmp253 * (-_tmp221 * _tmp273 - _tmp248 * _tmp272 -
                                                            _tmp251 * _tmp270)));
  _res(2, 0) =
      _tmp283 * _tmp297 +
      _tmp305 *
          (-_tmp301 * _tmp302 -
           _tmp303 * (-_tmp283 * _tmp304 + _tmp295 * (-_tmp283 * _tmp293 - _tmp301 * _tmp305)));
  _res(3, 0) =
      _tmp317 *
          (-_tmp316 * (_tmp314 * (-_tmp312 * _tmp321 - _tmp317 * _tmp325) - _tmp321 * _tmp326) -
           _tmp325 * _tmp328) +
      _tmp321 * _tmp329;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp251 * (-_tmp256 * _tmp371 -
                 _tmp274 * (_tmp253 * (-_tmp249 * _tmp272 - _tmp251 * _tmp371 - _tmp273 * _tmp364) -
                            _tmp271 * _tmp364)) +
      _tmp255 * _tmp364;
  _res(2, 1) =
      _tmp297 * _tmp375 + _tmp305 * (-_tmp302 * _tmp376 -
                                     _tmp303 * (_tmp295 * (-_tmp293 * _tmp375 - _tmp305 * _tmp376) -
                                                _tmp304 * _tmp375));
  _res(3, 1) =
      _tmp317 *
          (-_tmp316 * (_tmp314 * (-_tmp312 * _tmp377 - _tmp317 * _tmp378) - _tmp326 * _tmp377) -
           _tmp328 * _tmp378) +
      _tmp329 * _tmp377;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym