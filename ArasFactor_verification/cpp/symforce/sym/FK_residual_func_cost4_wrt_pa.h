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
 * Symbolic function: FK_residual_func_cost4_wrt_pa
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     ofset0: Scalar
 *     ofset1: Scalar
 *     ofset2: Scalar
 *     ofset3: Scalar
 *     encoder_data: Matrix41
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost4WrtPa(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& encoder_data,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const Eigen::Matrix<Scalar, 3, 1>& position_vector,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 757

  // Unused inputs
  (void)ofset0;
  (void)ofset1;
  (void)ofset2;
  (void)ofset3;
  (void)encoder_data;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (271)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp12 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp13 = _tmp1 * _tmp5;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp20 = Scalar(1.0) / (fh1);
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp2 * _tmp4;
  const Scalar _tmp26 = _tmp0 * _tmp5;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp24 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = -_tmp31 + p_a(1, 0);
  const Scalar _tmp33 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp32, Scalar(2))));
  const Scalar _tmp34 =
      Scalar(1.0) *
      std::cosh(Scalar(0.1034955) * _tmp20 *
                (-_tmp33 - Scalar(9.6622558468725703) * fh1 * std::asinh(_tmp20 * fv1))) /
      _tmp33;
  const Scalar _tmp35 = _tmp18 - p_a(0, 0);
  const Scalar _tmp36 = std::pow(_tmp35, Scalar(2));
  const Scalar _tmp37 = _tmp31 - p_a(1, 0);
  const Scalar _tmp38 = std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 = _tmp36 + _tmp38;
  const Scalar _tmp40 = std::pow(_tmp39, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp41 = _tmp35 * _tmp37;
  const Scalar _tmp42 = _tmp40 * _tmp41;
  const Scalar _tmp43 = _tmp42 * fh1;
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp45 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp46 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp47 = _tmp45 + _tmp46;
  const Scalar _tmp48 = _tmp44 + _tmp47;
  const Scalar _tmp49 = _tmp11 + _tmp15;
  const Scalar _tmp50 = _tmp49 + _tmp7;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - p_c(0, 0);
  const Scalar _tmp53 = _tmp24 + _tmp28;
  const Scalar _tmp54 = _tmp21 + _tmp53;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_c(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp52 * _tmp57;
  const Scalar _tmp59 = -_tmp44;
  const Scalar _tmp60 = _tmp47 + _tmp59;
  const Scalar _tmp61 = _tmp58 * _tmp60;
  const Scalar _tmp62 = _tmp49 + _tmp8;
  const Scalar _tmp63 = _tmp62 + position_vector(0, 0);
  const Scalar _tmp64 = _tmp63 - p_b(0, 0);
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = _tmp21 + _tmp29;
  const Scalar _tmp67 = _tmp66 + position_vector(1, 0);
  const Scalar _tmp68 = _tmp67 - p_b(1, 0);
  const Scalar _tmp69 = _tmp65 * _tmp68;
  const Scalar _tmp70 = _tmp56 * _tmp57;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp58 * _tmp69 - _tmp70);
  const Scalar _tmp72 = _tmp71 * (-_tmp48 * _tmp58 + _tmp61);
  const Scalar _tmp73 = Scalar(1.0) * _tmp62;
  const Scalar _tmp74 = -_tmp50 + _tmp73;
  const Scalar _tmp75 = _tmp48 * _tmp70 - _tmp61 * _tmp69;
  const Scalar _tmp76 = Scalar(1.0) * _tmp66;
  const Scalar _tmp77 = -_tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp54 + _tmp77);
  const Scalar _tmp79 = Scalar(1.0) * _tmp78;
  const Scalar _tmp80 = _tmp71 * _tmp74 * _tmp75 * _tmp79 - Scalar(1.0) * _tmp72;
  const Scalar _tmp81 = _tmp45 - _tmp46;
  const Scalar _tmp82 = _tmp44 + _tmp81;
  const Scalar _tmp83 = _tmp16 + _tmp7;
  const Scalar _tmp84 = _tmp83 + position_vector(0, 0);
  const Scalar _tmp85 = _tmp84 - p_d(0, 0);
  const Scalar _tmp86 = _tmp22 + _tmp53;
  const Scalar _tmp87 = _tmp86 + position_vector(1, 0);
  const Scalar _tmp88 = _tmp87 - p_d(1, 0);
  const Scalar _tmp89 = std::pow(Scalar(std::pow(_tmp85, Scalar(2)) + std::pow(_tmp88, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp85 * _tmp89;
  const Scalar _tmp91 = _tmp88 * _tmp89;
  const Scalar _tmp92 = _tmp69 * _tmp90 - _tmp91;
  const Scalar _tmp93 = _tmp71 * _tmp92;
  const Scalar _tmp94 = _tmp60 * _tmp69;
  const Scalar _tmp95 = -_tmp75 * _tmp93 + _tmp82 * _tmp91 - _tmp90 * _tmp94;
  const Scalar _tmp96 = _tmp74 * _tmp78;
  const Scalar _tmp97 = _tmp60 * _tmp90 - _tmp72 * _tmp92 - _tmp82 * _tmp90 - _tmp95 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp99 =
      std::sqrt(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp68, Scalar(2))));
  const Scalar _tmp100 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp101 = _tmp65 * _tmp99;
  const Scalar _tmp102 = _tmp101 * (_tmp100 * _tmp62 * _tmp68 - _tmp100 * _tmp64 * _tmp66);
  const Scalar _tmp103 = _tmp102 * _tmp58 - _tmp50 * _tmp70 + _tmp54 * _tmp58;
  const Scalar _tmp104 = _tmp102 * _tmp90 - _tmp103 * _tmp93 - _tmp83 * _tmp91 + _tmp86 * _tmp90;
  const Scalar _tmp105 = _tmp104 * _tmp98;
  const Scalar _tmp106 = Scalar(1.0) * _tmp71;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp108 = _tmp107 * _tmp97;
  const Scalar _tmp109 = _tmp108 * (-_tmp103 * _tmp106 - _tmp105 * _tmp80);
  const Scalar _tmp110 = _tmp109 + _tmp80;
  const Scalar _tmp111 = _tmp90 * _tmp98;
  const Scalar _tmp112 = _tmp92 * _tmp98;
  const Scalar _tmp113 = _tmp71 * (-_tmp110 * _tmp112 + Scalar(1.0));
  const Scalar _tmp114 = _tmp110 * _tmp111 + _tmp113 * _tmp58;
  const Scalar _tmp115 = _tmp101 * _tmp114;
  const Scalar _tmp116 = _tmp69 * _tmp71;
  const Scalar _tmp117 = _tmp116 * _tmp75 + _tmp94;
  const Scalar _tmp118 = -_tmp117 * _tmp96 - _tmp60 + _tmp69 * _tmp72;
  const Scalar _tmp119 = _tmp108 * (-_tmp102 + _tmp103 * _tmp116 - _tmp105 * _tmp118);
  const Scalar _tmp120 = _tmp118 + _tmp119;
  const Scalar _tmp121 = _tmp71 * (-_tmp112 * _tmp120 - _tmp69);
  const Scalar _tmp122 = _tmp111 * _tmp120 + _tmp121 * _tmp58 + Scalar(1.0);
  const Scalar _tmp123 = std::pow(_tmp39, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp124 = _tmp123 * fh1;
  const Scalar _tmp125 = _tmp101 * _tmp124;
  const Scalar _tmp126 = _tmp122 * _tmp125;
  const Scalar _tmp127 = _tmp36 * _tmp40;
  const Scalar _tmp128 = _tmp127 * fh1;
  const Scalar _tmp129 = _tmp101 * _tmp122;
  const Scalar _tmp130 = _tmp123 * _tmp30;
  const Scalar _tmp131 = _tmp17 * _tmp40;
  const Scalar _tmp132 = fh1 * (-_tmp127 * _tmp30 + _tmp130 + _tmp131 * _tmp41);
  const Scalar _tmp133 = Scalar(1.0) * _tmp107;
  const Scalar _tmp134 = _tmp58 * _tmp93;
  const Scalar _tmp135 = _tmp101 * (-_tmp133 * _tmp134 + _tmp133 * _tmp90);
  const Scalar _tmp136 = -_tmp115 * _tmp43 + _tmp126 - _tmp128 * _tmp129 - _tmp132 * _tmp135;
  const Scalar _tmp137 = _tmp114 * _tmp125;
  const Scalar _tmp138 = _tmp123 * _tmp17;
  const Scalar _tmp139 = fh1 * (-_tmp130 * _tmp35 + _tmp138 * _tmp37);
  const Scalar _tmp140 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp141 = _tmp73 + _tmp76 * _tmp96;
  const Scalar _tmp142 = 0;
  const Scalar _tmp143 = _tmp142 * _tmp98;
  const Scalar _tmp144 = -_tmp101 * _tmp140 * (-_tmp134 * _tmp143 + _tmp143 * _tmp90) -
                         _tmp126 * _tmp35 - _tmp135 * _tmp139 - _tmp137 * _tmp37;
  const Scalar _tmp145 = std::pow(_tmp144, Scalar(-2));
  const Scalar _tmp146 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp147 = _tmp59 + _tmp81;
  const Scalar _tmp148 = _tmp124 * _tmp147;
  const Scalar _tmp149 = Scalar(5.1796800000000003) * _tmp14 + _tmp148 * _tmp35 + _tmp17 * fv1;
  const Scalar _tmp150 = _tmp77 + _tmp86;
  const Scalar _tmp151 = _tmp150 * _tmp96;
  const Scalar _tmp152 = Scalar(1.0) / (-_tmp151 + _tmp73 - _tmp83);
  const Scalar _tmp153 = Scalar(1.0) * _tmp152;
  const Scalar _tmp154 = _tmp150 * _tmp78;
  const Scalar _tmp155 = _tmp153 * _tmp154;
  const Scalar _tmp156 = -Scalar(1.0) * _tmp153 + Scalar(1.0) * _tmp155;
  const Scalar _tmp157 = _tmp95 * _tmp98;
  const Scalar _tmp158 = _tmp141 * _tmp152;
  const Scalar _tmp159 = -_tmp142 * _tmp157 - _tmp150 * _tmp158 + _tmp77;
  const Scalar _tmp160 = _tmp108 * _tmp153;
  const Scalar _tmp161 = -_tmp133 * _tmp95 + _tmp150 * _tmp160;
  const Scalar _tmp162 = Scalar(1.0) * _tmp160 - Scalar(1.0) * _tmp161 * _tmp79;
  const Scalar _tmp163 = -_tmp148 * _tmp37 - Scalar(5.1796800000000003) * _tmp27 - _tmp30 * fv1;
  const Scalar _tmp164 = _tmp151 * _tmp153 + Scalar(1.0);
  const Scalar _tmp165 = _tmp153 * _tmp96;
  const Scalar _tmp166 = -Scalar(1.0) * _tmp164 * _tmp79 + Scalar(1.0) * _tmp165;
  const Scalar _tmp167 = _tmp150 * _tmp152;
  const Scalar _tmp168 = -_tmp106 * _tmp75 + _tmp109 * _tmp167 - _tmp110 * _tmp157;
  const Scalar _tmp169 = _tmp109 * _tmp153 - _tmp168 * _tmp79;
  const Scalar _tmp170 = Scalar(1.0) * _tmp124;
  const Scalar _tmp171 = _tmp169 * _tmp170;
  const Scalar _tmp172 = _tmp117 + _tmp119 * _tmp167 - _tmp120 * _tmp157;
  const Scalar _tmp173 = _tmp119 * _tmp153 - _tmp172 * _tmp79;
  const Scalar _tmp174 = _tmp170 * _tmp173;
  const Scalar _tmp175 =
      _tmp139 * _tmp162 +
      Scalar(1.0) * _tmp140 * (-_tmp141 * _tmp153 - _tmp159 * _tmp79 + Scalar(1.0)) +
      _tmp149 * _tmp156 + _tmp163 * _tmp166 + _tmp171 * _tmp37 + _tmp174 * _tmp35;
  const Scalar _tmp176 = std::asinh(_tmp146 * _tmp175);
  const Scalar _tmp177 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp178 =
      -_tmp144 * _tmp177 - std::sqrt(Scalar(std::pow(Scalar(-_tmp63 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp67 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp179 = Scalar(0.1034955) * _tmp145 * _tmp178;
  const Scalar _tmp180 = _tmp147 * fh1;
  const Scalar _tmp181 = _tmp180 * _tmp42;
  const Scalar _tmp182 = _tmp127 * _tmp180 - _tmp148;
  const Scalar _tmp183 = Scalar(1.0) * _tmp169;
  const Scalar _tmp184 = Scalar(1.0) * _tmp173;
  const Scalar _tmp185 = _tmp145 * _tmp175;
  const Scalar _tmp186 =
      -_tmp136 * _tmp185 + _tmp146 * (_tmp128 * _tmp184 + _tmp132 * _tmp162 + _tmp156 * _tmp182 -
                                      _tmp166 * _tmp181 - _tmp174 + _tmp183 * _tmp43);
  const Scalar _tmp187 =
      std::pow(Scalar(_tmp145 * std::pow(_tmp175, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp188 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = Scalar(0.1034955) * _tmp146;
  const Scalar _tmp191 = _tmp178 * _tmp190;
  const Scalar _tmp192 = std::cosh(_tmp191);
  const Scalar _tmp193 = Scalar(1.0) * _tmp176;
  const Scalar _tmp194 = Scalar(1.0) * _tmp187 * std::cosh(_tmp193);
  const Scalar _tmp195 = -Scalar(9.6622558468725703) * std::sinh(_tmp191) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp193);
  const Scalar _tmp196 = _tmp113 * _tmp124;
  const Scalar _tmp197 = _tmp121 * _tmp124;
  const Scalar _tmp198 = _tmp133 * _tmp139;
  const Scalar _tmp199 = _tmp140 * _tmp143;
  const Scalar _tmp200 = _tmp196 * _tmp37 + _tmp197 * _tmp35 - _tmp198 * _tmp93 - _tmp199 * _tmp93;
  const Scalar _tmp201 = Scalar(1.0) / (_tmp200);
  const Scalar _tmp202 = _tmp124 * _tmp78;
  const Scalar _tmp203 = _tmp172 * _tmp202;
  const Scalar _tmp204 = _tmp168 * _tmp202;
  const Scalar _tmp205 = _tmp164 * _tmp78;
  const Scalar _tmp206 = _tmp161 * _tmp78;
  const Scalar _tmp207 = _tmp149 * _tmp153;
  const Scalar _tmp208 = _tmp139 * _tmp206 + _tmp140 * _tmp159 * _tmp78 - _tmp154 * _tmp207 +
                         _tmp163 * _tmp205 + _tmp203 * _tmp35 + _tmp204 * _tmp37;
  const Scalar _tmp209 = std::asinh(_tmp201 * _tmp208);
  const Scalar _tmp210 = Scalar(1.0) * _tmp209;
  const Scalar _tmp211 = Scalar(1.0) * std::cosh(_tmp210);
  const Scalar _tmp212 = std::pow(_tmp200, Scalar(-2));
  const Scalar _tmp213 =
      std::pow(Scalar(std::pow(_tmp208, Scalar(2)) * _tmp212 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp214 = _tmp132 * _tmp133;
  const Scalar _tmp215 = _tmp113 * _tmp43 + _tmp121 * _tmp128 - _tmp197 - _tmp214 * _tmp93;
  const Scalar _tmp216 = _tmp208 * _tmp212;
  const Scalar _tmp217 = _tmp153 * _tmp182;
  const Scalar _tmp218 = _tmp172 * _tmp78;
  const Scalar _tmp219 = _tmp168 * _tmp78;
  const Scalar _tmp220 =
      _tmp213 * (_tmp201 * (_tmp128 * _tmp218 + _tmp132 * _tmp206 - _tmp154 * _tmp217 -
                            _tmp181 * _tmp205 - _tmp203 + _tmp219 * _tmp43) -
                 _tmp215 * _tmp216);
  const Scalar _tmp221 = Scalar(9.6622558468725703) * _tmp200;
  const Scalar _tmp222 =
      -_tmp209 * _tmp221 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp223 = Scalar(0.1034955) * _tmp201;
  const Scalar _tmp224 = _tmp222 * _tmp223;
  const Scalar _tmp225 = std::cosh(_tmp224);
  const Scalar _tmp226 = Scalar(0.1034955) * _tmp212 * _tmp222;
  const Scalar _tmp227 = Scalar(9.6622558468725703) * _tmp215;
  const Scalar _tmp228 = -std::sinh(_tmp210) - std::sinh(_tmp224);
  const Scalar _tmp229 = _tmp124 * _tmp98;
  const Scalar _tmp230 = _tmp120 * _tmp229;
  const Scalar _tmp231 = _tmp120 * _tmp98;
  const Scalar _tmp232 = _tmp110 * _tmp98;
  const Scalar _tmp233 = _tmp128 * _tmp231 + _tmp214 - _tmp230 + _tmp232 * _tmp43;
  const Scalar _tmp234 = _tmp110 * _tmp229;
  const Scalar _tmp235 = _tmp198 + _tmp199 + _tmp230 * _tmp35 + _tmp234 * _tmp37;
  const Scalar _tmp236 = std::pow(_tmp235, Scalar(-2));
  const Scalar _tmp237 = _tmp124 * _tmp152;
  const Scalar _tmp238 = _tmp109 * _tmp237;
  const Scalar _tmp239 = _tmp119 * _tmp237;
  const Scalar _tmp240 = -_tmp139 * _tmp160 + _tmp140 * _tmp158 - _tmp163 * _tmp165 + _tmp207 -
                         _tmp238 * _tmp37 - _tmp239 * _tmp35;
  const Scalar _tmp241 = _tmp236 * _tmp240;
  const Scalar _tmp242 = Scalar(1.0) / (_tmp235);
  const Scalar _tmp243 = _tmp119 * _tmp152;
  const Scalar _tmp244 = _tmp109 * _tmp152;
  const Scalar _tmp245 =
      -_tmp233 * _tmp241 + _tmp242 * (-_tmp128 * _tmp243 - _tmp132 * _tmp160 + _tmp165 * _tmp181 +
                                      _tmp217 + _tmp239 - _tmp244 * _tmp43);
  const Scalar _tmp246 =
      std::pow(Scalar(_tmp236 * std::pow(_tmp240, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp247 = std::asinh(_tmp240 * _tmp242);
  const Scalar _tmp248 = Scalar(1.0) * _tmp247;
  const Scalar _tmp249 = Scalar(1.0) * _tmp246 * std::cosh(_tmp248);
  const Scalar _tmp250 = Scalar(9.6622558468725703) * _tmp247;
  const Scalar _tmp251 =
      -_tmp235 * _tmp250 - std::sqrt(Scalar(std::pow(Scalar(-_tmp84 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp87 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp252 = Scalar(0.1034955) * _tmp236 * _tmp251;
  const Scalar _tmp253 = Scalar(9.6622558468725703) * _tmp235;
  const Scalar _tmp254 = _tmp246 * _tmp253;
  const Scalar _tmp255 = Scalar(0.1034955) * _tmp242;
  const Scalar _tmp256 = _tmp251 * _tmp255;
  const Scalar _tmp257 = std::cosh(_tmp256);
  const Scalar _tmp258 = -Scalar(9.6622558468725703) * std::sinh(_tmp248) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp256);
  const Scalar _tmp259 = fh1 * (_tmp131 * _tmp38 - _tmp138 - _tmp30 * _tmp42);
  const Scalar _tmp260 = _tmp38 * _tmp40;
  const Scalar _tmp261 = _tmp260 * fh1;
  const Scalar _tmp262 = -_tmp115 * _tmp261 - _tmp129 * _tmp43 - _tmp135 * _tmp259 + _tmp137;
  const Scalar _tmp263 = _tmp148 - _tmp180 * _tmp260;
  const Scalar _tmp264 = _tmp146 * (_tmp156 * _tmp181 + _tmp162 * _tmp259 + _tmp166 * _tmp263 -
                                    _tmp171 + _tmp183 * _tmp261 + _tmp184 * _tmp43) -
                         _tmp185 * _tmp262;
  const Scalar _tmp265 = _tmp133 * _tmp259;
  const Scalar _tmp266 = _tmp113 * _tmp261 + _tmp121 * _tmp43 - _tmp196 - _tmp265 * _tmp93;
  const Scalar _tmp267 = Scalar(9.6622558468725703) * _tmp266;
  const Scalar _tmp268 =
      _tmp213 * (_tmp201 * (-_tmp155 * _tmp181 - _tmp204 + _tmp205 * _tmp263 + _tmp206 * _tmp259 +
                            _tmp218 * _tmp43 + _tmp219 * _tmp261) -
                 _tmp216 * _tmp266);
  const Scalar _tmp269 = _tmp231 * _tmp43 + _tmp232 * _tmp261 - _tmp234 + _tmp265;
  const Scalar _tmp270 =
      -_tmp241 * _tmp269 + _tmp242 * (_tmp153 * _tmp181 - _tmp160 * _tmp259 - _tmp165 * _tmp263 +
                                      _tmp238 - _tmp243 * _tmp43 - _tmp244 * _tmp261);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = _tmp19 * _tmp34;
  _res(1, 0) =
      _tmp136 * _tmp195 +
      _tmp188 *
          (-_tmp186 * _tmp194 -
           _tmp192 * (-_tmp136 * _tmp179 + _tmp190 * (-_tmp136 * _tmp177 - _tmp186 * _tmp189)));
  _res(2, 0) =
      _tmp221 *
          (-_tmp211 * _tmp220 -
           _tmp225 * (-_tmp215 * _tmp226 + _tmp223 * (-_tmp209 * _tmp227 - _tmp220 * _tmp221))) +
      _tmp227 * _tmp228;
  _res(3, 0) =
      _tmp233 * _tmp258 +
      _tmp253 *
          (-_tmp245 * _tmp249 -
           _tmp257 * (-_tmp233 * _tmp252 + _tmp255 * (-_tmp233 * _tmp250 - _tmp245 * _tmp254)));
  _res(0, 1) = _tmp32 * _tmp34;
  _res(1, 1) =
      _tmp188 *
          (-_tmp192 * (-_tmp179 * _tmp262 + _tmp190 * (-_tmp177 * _tmp262 - _tmp189 * _tmp264)) -
           _tmp194 * _tmp264) +
      _tmp195 * _tmp262;
  _res(2, 1) =
      _tmp221 *
          (-_tmp211 * _tmp268 -
           _tmp225 * (_tmp223 * (-_tmp209 * _tmp267 - _tmp221 * _tmp268) - _tmp226 * _tmp266)) +
      _tmp228 * _tmp267;
  _res(3, 1) =
      _tmp253 *
          (-_tmp249 * _tmp270 -
           _tmp257 * (-_tmp252 * _tmp269 + _tmp255 * (-_tmp250 * _tmp269 - _tmp254 * _tmp270))) +
      _tmp258 * _tmp269;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
