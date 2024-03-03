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
 * Symbolic function: IK_residual_func_cost3_wrt_pd_Nl5
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     encoder: Matrix41
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPdNl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 717

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (241)
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
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp7 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp2;
  const Scalar _tmp12 = _tmp11 * _tmp6;
  const Scalar _tmp13 = _tmp0 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp5;
  const Scalar _tmp17 = _tmp16 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp18 = Scalar(1.0) / (_tmp17);
  const Scalar _tmp19 = std::pow(_tmp17, Scalar(2));
  const Scalar _tmp20 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp20 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp22 = _tmp0 * _tmp11;
  const Scalar _tmp23 = _tmp6 * _tmp8;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 + Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = _tmp21 + _tmp26;
  const Scalar _tmp28 = _tmp27 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp29 = std::pow(_tmp28, Scalar(2));
  const Scalar _tmp30 = _tmp19 + _tmp29;
  const Scalar _tmp31 = std::sqrt(_tmp30);
  const Scalar _tmp32 = _tmp18 * _tmp31;
  const Scalar _tmp33 = Scalar(1.0) / (_tmp31);
  const Scalar _tmp34 = _tmp16 * _tmp33;
  const Scalar _tmp35 = _tmp27 * _tmp33;
  const Scalar _tmp36 = -_tmp17 * _tmp35 + _tmp28 * _tmp34;
  const Scalar _tmp37 = _tmp31 * _tmp36;
  const Scalar _tmp38 = _tmp18 * _tmp37;
  const Scalar _tmp39 = _tmp15 + _tmp4;
  const Scalar _tmp40 = _tmp39 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp41 = std::pow(_tmp40, Scalar(2));
  const Scalar _tmp42 = _tmp24 + _tmp25;
  const Scalar _tmp43 = _tmp21 + _tmp42;
  const Scalar _tmp44 = _tmp43 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp45 = _tmp41 + std::pow(_tmp44, Scalar(2));
  const Scalar _tmp46 = std::pow(_tmp45, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp40 * _tmp46;
  const Scalar _tmp48 = _tmp44 * _tmp46;
  const Scalar _tmp49 = _tmp38 * _tmp47 - _tmp39 * _tmp48 + _tmp43 * _tmp47;
  const Scalar _tmp50 = _tmp18 * _tmp28;
  const Scalar _tmp51 = _tmp47 * _tmp50;
  const Scalar _tmp52 = -_tmp48 + _tmp51;
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = _tmp50 * _tmp53;
  const Scalar _tmp55 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp56 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp57 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp58 = _tmp56 + _tmp57;
  const Scalar _tmp59 = _tmp55 + _tmp58;
  const Scalar _tmp60 = -_tmp55 + _tmp58;
  const Scalar _tmp61 = _tmp47 * _tmp60;
  const Scalar _tmp62 = -_tmp47 * _tmp59 + _tmp61;
  const Scalar _tmp63 = _tmp53 * _tmp62;
  const Scalar _tmp64 = _tmp50 * _tmp60;
  const Scalar _tmp65 = _tmp48 * _tmp59 - _tmp50 * _tmp61;
  const Scalar _tmp66 = _tmp53 * _tmp65;
  const Scalar _tmp67 = Scalar(1.0) * _tmp27;
  const Scalar _tmp68 = Scalar(1.0) * _tmp16;
  const Scalar _tmp69 = (-_tmp39 + _tmp68) / (_tmp43 - _tmp67);
  const Scalar _tmp70 = _tmp50 * _tmp63 - _tmp60 - _tmp69 * (_tmp50 * _tmp66 + _tmp64);
  const Scalar _tmp71 = _tmp10 - _tmp14;
  const Scalar _tmp72 = _tmp4 + _tmp71;
  const Scalar _tmp73 = _tmp72 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp74 = -_tmp21;
  const Scalar _tmp75 = _tmp42 + _tmp74;
  const Scalar _tmp76 = _tmp75 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp77 = std::pow(Scalar(std::pow(_tmp73, Scalar(2)) + std::pow(_tmp76, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp78 = _tmp73 * _tmp77;
  const Scalar _tmp79 = _tmp55 + _tmp56 - _tmp57;
  const Scalar _tmp80 = _tmp76 * _tmp77;
  const Scalar _tmp81 = _tmp50 * _tmp78 - _tmp80;
  const Scalar _tmp82 = _tmp53 * _tmp81;
  const Scalar _tmp83 = _tmp60 * _tmp78 - _tmp62 * _tmp82 -
                        _tmp69 * (-_tmp64 * _tmp78 - _tmp65 * _tmp82 + _tmp79 * _tmp80) -
                        _tmp78 * _tmp79;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 = _tmp38 * _tmp78 - _tmp49 * _tmp82 - _tmp72 * _tmp80 + _tmp75 * _tmp78;
  const Scalar _tmp86 = _tmp84 * _tmp85;
  const Scalar _tmp87 = -_tmp38 + _tmp49 * _tmp54 - _tmp70 * _tmp86;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp89 = _tmp83 * _tmp88;
  const Scalar _tmp90 = _tmp70 + _tmp87 * _tmp89;
  const Scalar _tmp91 = _tmp81 * _tmp84;
  const Scalar _tmp92 = -_tmp50 - _tmp90 * _tmp91;
  const Scalar _tmp93 = _tmp47 * _tmp53;
  const Scalar _tmp94 = _tmp78 * _tmp84;
  const Scalar _tmp95 = _tmp90 * _tmp94;
  const Scalar _tmp96 = _tmp5 + _tmp71;
  const Scalar _tmp97 = _tmp96 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp98 = _tmp26 + _tmp74;
  const Scalar _tmp99 = _tmp98 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp100 = std::pow(Scalar(std::pow(_tmp97, Scalar(2)) + std::pow(_tmp99, Scalar(2))),
                                  Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp101 = _tmp100 * _tmp97;
  const Scalar _tmp102 = _tmp101 * fh1;
  const Scalar _tmp103 = _tmp102 * (_tmp92 * _tmp93 + _tmp95 + Scalar(1.0));
  const Scalar _tmp104 = Scalar(1.0) * _tmp88;
  const Scalar _tmp105 = _tmp47 * _tmp82;
  const Scalar _tmp106 = _tmp104 * _tmp78;
  const Scalar _tmp107 = _tmp100 * _tmp99;
  const Scalar _tmp108 = fh1 * (-_tmp101 * _tmp98 + _tmp107 * _tmp96);
  const Scalar _tmp109 = _tmp108 * (-_tmp104 * _tmp105 + _tmp106);
  const Scalar _tmp110 = Scalar(1.0) * _tmp53;
  const Scalar _tmp111 = _tmp110 * _tmp69;
  const Scalar _tmp112 = -_tmp110 * _tmp62 + _tmp111 * _tmp65;
  const Scalar _tmp113 = -_tmp110 * _tmp49 - _tmp112 * _tmp86;
  const Scalar _tmp114 = _tmp112 + _tmp113 * _tmp89;
  const Scalar _tmp115 = _tmp114 * _tmp94;
  const Scalar _tmp116 = -_tmp114 * _tmp91 + Scalar(1.0);
  const Scalar _tmp117 = _tmp107 * fh1;
  const Scalar _tmp118 = _tmp117 * (_tmp115 + _tmp116 * _tmp93);
  const Scalar _tmp119 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp120 = _tmp67 * _tmp69 + _tmp68;
  const Scalar _tmp121 = 0;
  const Scalar _tmp122 = _tmp121 * _tmp84;
  const Scalar _tmp123 = _tmp122 * _tmp78;
  const Scalar _tmp124 = _tmp121 * _tmp91;
  const Scalar _tmp125 = _tmp119 * (_tmp123 - _tmp124 * _tmp93);
  const Scalar _tmp126 =
      std::exp(_tmp103 * _tmp32 + _tmp109 * _tmp32 + _tmp118 * _tmp32 + _tmp125 * _tmp32);
  const Scalar _tmp127 = std::pow(_tmp52, Scalar(-2));
  const Scalar _tmp128 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp129 = _tmp128 * _tmp28;
  const Scalar _tmp130 = _tmp127 * _tmp129;
  const Scalar _tmp131 = _tmp47 * _tmp62;
  const Scalar _tmp132 = _tmp130 * _tmp131;
  const Scalar _tmp133 = _tmp129 * _tmp63;
  const Scalar _tmp134 = _tmp47 * _tmp65;
  const Scalar _tmp135 = _tmp130 * _tmp134;
  const Scalar _tmp136 = _tmp129 * _tmp60;
  const Scalar _tmp137 = _tmp129 * _tmp66;
  const Scalar _tmp138 = _tmp129 * _tmp61;
  const Scalar _tmp139 =
      _tmp132 * _tmp81 - _tmp133 * _tmp78 -
      _tmp69 * (_tmp135 * _tmp81 - _tmp136 * _tmp78 - _tmp137 * _tmp78 + _tmp138 * _tmp82);
  const Scalar _tmp140 = std::pow(_tmp83, Scalar(-2));
  const Scalar _tmp141 = _tmp139 * _tmp140;
  const Scalar _tmp142 = _tmp141 * _tmp78;
  const Scalar _tmp143 = _tmp81 * _tmp90;
  const Scalar _tmp144 = _tmp33 * _tmp36;
  const Scalar _tmp145 = _tmp128 * _tmp37;
  const Scalar _tmp146 = std::pow(_tmp30, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp147 = _tmp146 * _tmp27;
  const Scalar _tmp148 = _tmp146 * _tmp16;
  const Scalar _tmp149 = _tmp17 * _tmp28;
  const Scalar _tmp150 = _tmp32 * (-_tmp147 * _tmp19 + _tmp148 * _tmp149 + _tmp35);
  const Scalar _tmp151 = -_tmp144 * _tmp47 + _tmp145 * _tmp47 + _tmp150 * _tmp47;
  const Scalar _tmp152 = _tmp144 * _tmp78;
  const Scalar _tmp153 = _tmp47 * _tmp49;
  const Scalar _tmp154 = _tmp130 * _tmp153;
  const Scalar _tmp155 = _tmp129 * _tmp53;
  const Scalar _tmp156 = _tmp155 * _tmp49;
  const Scalar _tmp157 = _tmp145 * _tmp78 + _tmp150 * _tmp78 - _tmp151 * _tmp82 - _tmp152 +
                         _tmp154 * _tmp81 - _tmp156 * _tmp78;
  const Scalar _tmp158 = _tmp70 * _tmp84;
  const Scalar _tmp159 = _tmp141 * _tmp85;
  const Scalar _tmp160 = _tmp29 / [&]() {
    const Scalar base = _tmp17;
    return base * base * base;
  }();
  const Scalar _tmp161 = _tmp127 * _tmp160;
  const Scalar _tmp162 =
      -_tmp131 * _tmp161 + _tmp133 -
      _tmp69 * (-_tmp134 * _tmp161 + _tmp136 + _tmp137 - _tmp160 * _tmp53 * _tmp61);
  const Scalar _tmp163 = _tmp87 * _tmp88;
  const Scalar _tmp164 = std::pow(_tmp85, Scalar(-2));
  const Scalar _tmp165 = _tmp164 * _tmp83;
  const Scalar _tmp166 = _tmp157 * _tmp165;
  const Scalar _tmp167 =
      _tmp139 * _tmp163 + _tmp162 - _tmp166 * _tmp87 +
      _tmp89 * (_tmp144 - _tmp145 - _tmp150 + _tmp151 * _tmp54 - _tmp153 * _tmp161 + _tmp156 -
                _tmp157 * _tmp158 + _tmp159 * _tmp70 - _tmp162 * _tmp86);
  const Scalar _tmp168 = -_tmp129 * _tmp95 - _tmp129 + _tmp141 * _tmp143 - _tmp167 * _tmp91;
  const Scalar _tmp169 = _tmp41 / _tmp45;
  const Scalar _tmp170 = _tmp169 * _tmp92;
  const Scalar _tmp171 = _tmp102 * _tmp32;
  const Scalar _tmp172 = _tmp118 * _tmp33;
  const Scalar _tmp173 = _tmp105 * _tmp121;
  const Scalar _tmp174 = _tmp130 * _tmp169;
  const Scalar _tmp175 = _tmp119 * _tmp32;
  const Scalar _tmp176 = _tmp104 * _tmp81;
  const Scalar _tmp177 = _tmp110 * _tmp129 * _tmp78 * _tmp88;
  const Scalar _tmp178 = Scalar(1.0) * _tmp164;
  const Scalar _tmp179 = _tmp105 * _tmp178;
  const Scalar _tmp180 = _tmp178 * _tmp78;
  const Scalar _tmp181 = _tmp108 * _tmp32;
  const Scalar _tmp182 = _tmp113 * _tmp88;
  const Scalar _tmp183 =
      -_tmp111 * _tmp138 + Scalar(1.0) * _tmp132 - Scalar(1.0) * _tmp135 * _tmp69;
  const Scalar _tmp184 = _tmp112 * _tmp84;
  const Scalar _tmp185 = -_tmp113 * _tmp166 + _tmp139 * _tmp182 + _tmp183 +
                         _tmp89 * (-_tmp110 * _tmp151 + _tmp112 * _tmp159 + Scalar(1.0) * _tmp154 -
                                   _tmp157 * _tmp184 - _tmp183 * _tmp86);
  const Scalar _tmp186 = _tmp114 * _tmp81;
  const Scalar _tmp187 = -_tmp115 * _tmp129 + _tmp141 * _tmp186 - _tmp185 * _tmp91;
  const Scalar _tmp188 = _tmp117 * _tmp32;
  const Scalar _tmp189 = _tmp109 * _tmp33;
  const Scalar _tmp190 = _tmp128 * _tmp31;
  const Scalar _tmp191 = _tmp125 * _tmp33;
  const Scalar _tmp192 = _tmp103 * _tmp33;
  const Scalar _tmp193 = _tmp104 * _tmp108;
  const Scalar _tmp194 = _tmp102 * _tmp53;
  const Scalar _tmp195 = _tmp117 * _tmp53;
  const Scalar _tmp196 = _tmp119 * _tmp121;
  const Scalar _tmp197 = _tmp196 * _tmp91;
  const Scalar _tmp198 =
      std::exp(-_tmp116 * _tmp195 + _tmp193 * _tmp82 - _tmp194 * _tmp92 + _tmp197 * _tmp53);
  const Scalar _tmp199 = _tmp108 * _tmp178;
  const Scalar _tmp200 = _tmp157 * _tmp199;
  const Scalar _tmp201 = _tmp130 * _tmp47;
  const Scalar _tmp202 = _tmp119 * _tmp122;
  const Scalar _tmp203 = _tmp202 * _tmp78;
  const Scalar _tmp204 = _tmp141 * _tmp196;
  const Scalar _tmp205 = _tmp117 * _tmp47;
  const Scalar _tmp206 = _tmp102 * _tmp92;
  const Scalar _tmp207 = _tmp102 * _tmp84;
  const Scalar _tmp208 = _tmp117 * _tmp84;
  const Scalar _tmp209 = std::exp(-_tmp114 * _tmp208 - _tmp193 - _tmp202 - _tmp207 * _tmp90);
  const Scalar _tmp210 = _tmp114 * _tmp117;
  const Scalar _tmp211 = _tmp102 * _tmp90;
  const Scalar _tmp212 = _tmp127 * _tmp18;
  const Scalar _tmp213 = _tmp212 * _tmp47;
  const Scalar _tmp214 = _tmp213 * _tmp81;
  const Scalar _tmp215 = _tmp18 * _tmp53;
  const Scalar _tmp216 = _tmp215 * _tmp49;
  const Scalar _tmp217 = _tmp32 * (-_tmp147 * _tmp149 + _tmp148 * _tmp29 - _tmp34);
  const Scalar _tmp218 = -_tmp144 * _tmp51 + _tmp217 * _tmp47;
  const Scalar _tmp219 =
      -_tmp152 * _tmp50 - _tmp214 * _tmp49 + _tmp216 * _tmp78 + _tmp217 * _tmp78 - _tmp218 * _tmp82;
  const Scalar _tmp220 = _tmp165 * _tmp219;
  const Scalar _tmp221 = _tmp18 * _tmp60;
  const Scalar _tmp222 = _tmp215 * _tmp65;
  const Scalar _tmp223 = _tmp213 * _tmp62;
  const Scalar _tmp224 = _tmp215 * _tmp62;
  const Scalar _tmp225 =
      -_tmp223 * _tmp81 + _tmp224 * _tmp78 -
      _tmp69 * (-_tmp105 * _tmp221 - _tmp214 * _tmp65 + _tmp221 * _tmp78 + _tmp222 * _tmp78);
  const Scalar _tmp226 = _tmp140 * _tmp225;
  const Scalar _tmp227 = _tmp226 * _tmp85;
  const Scalar _tmp228 =
      _tmp132 - _tmp224 - _tmp69 * (_tmp135 + _tmp155 * _tmp61 - _tmp221 - _tmp222);
  const Scalar _tmp229 =
      _tmp163 * _tmp225 - _tmp220 * _tmp87 + _tmp228 +
      _tmp89 * (_tmp144 * _tmp50 + _tmp154 - _tmp158 * _tmp219 - _tmp216 - _tmp217 +
                _tmp218 * _tmp54 + _tmp227 * _tmp70 - _tmp228 * _tmp86);
  const Scalar _tmp230 = _tmp226 * _tmp78;
  const Scalar _tmp231 = _tmp143 * _tmp226 + _tmp18 * _tmp95 + _tmp18 - _tmp229 * _tmp91;
  const Scalar _tmp232 = _tmp215 * _tmp47;
  const Scalar _tmp233 = _tmp169 * _tmp212;
  const Scalar _tmp234 = Scalar(1.0) * _tmp213;
  const Scalar _tmp235 =
      _tmp111 * _tmp221 * _tmp47 - Scalar(1.0) * _tmp223 + _tmp234 * _tmp65 * _tmp69;
  const Scalar _tmp236 = -_tmp113 * _tmp220 + _tmp182 * _tmp225 + _tmp235 +
                         _tmp89 * (-_tmp110 * _tmp218 + _tmp112 * _tmp227 - _tmp184 * _tmp219 -
                                   _tmp234 * _tmp49 - _tmp235 * _tmp86);
  const Scalar _tmp237 = _tmp115 * _tmp18 + _tmp186 * _tmp226 - _tmp236 * _tmp91;
  const Scalar _tmp238 = _tmp116 * _tmp212;
  const Scalar _tmp239 = _tmp199 * _tmp219;
  const Scalar _tmp240 = _tmp196 * _tmp226;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp126 *
      (-_tmp103 * _tmp190 - _tmp109 * _tmp190 - _tmp118 * _tmp190 - _tmp125 * _tmp190 -
       _tmp171 * (-_tmp130 * _tmp170 - _tmp142 * _tmp90 + _tmp167 * _tmp94 + _tmp168 * _tmp93) +
       _tmp172 -
       _tmp175 * (-_tmp121 * _tmp142 - _tmp123 * _tmp129 * _tmp93 + _tmp124 * _tmp174 +
                  _tmp141 * _tmp173) -
       _tmp181 * (_tmp157 * _tmp179 - _tmp157 * _tmp180 + _tmp174 * _tmp176 - _tmp177 * _tmp47) -
       _tmp188 * (-_tmp114 * _tmp142 - _tmp116 * _tmp174 + _tmp185 * _tmp94 + _tmp187 * _tmp93) +
       _tmp189 + _tmp191 + _tmp192);
  _res(2, 0) =
      -_tmp198 * (-_tmp108 * _tmp177 - _tmp116 * _tmp130 * _tmp205 - _tmp155 * _tmp203 +
                  _tmp168 * _tmp194 + _tmp187 * _tmp195 + _tmp193 * _tmp201 * _tmp81 +
                  _tmp197 * _tmp201 + _tmp200 * _tmp82 - _tmp201 * _tmp206 + _tmp204 * _tmp82);
  _res(3, 0) = -_tmp209 * (-_tmp141 * _tmp210 - _tmp141 * _tmp211 + _tmp167 * _tmp207 +
                           _tmp185 * _tmp208 - _tmp200 - _tmp204);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp126 *
      (-_tmp171 * (_tmp170 * _tmp212 + _tmp229 * _tmp94 - _tmp230 * _tmp90 + _tmp231 * _tmp93) +
       _tmp172 * _tmp50 -
       _tmp175 * (-_tmp121 * _tmp230 + _tmp123 * _tmp232 - _tmp124 * _tmp233 + _tmp173 * _tmp226) -
       _tmp181 * (_tmp106 * _tmp232 - _tmp176 * _tmp233 + _tmp179 * _tmp219 - _tmp180 * _tmp219) -
       _tmp188 * (-_tmp114 * _tmp230 + _tmp169 * _tmp238 + _tmp236 * _tmp94 + _tmp237 * _tmp93) +
       _tmp189 * _tmp50 + _tmp191 * _tmp50 + _tmp192 * _tmp50);
  _res(2, 1) =
      -_tmp198 * (_tmp106 * _tmp108 * _tmp215 - _tmp193 * _tmp214 + _tmp194 * _tmp231 +
                  _tmp195 * _tmp237 - _tmp197 * _tmp213 + _tmp203 * _tmp215 + _tmp205 * _tmp238 +
                  _tmp206 * _tmp213 + _tmp239 * _tmp82 + _tmp240 * _tmp82);
  _res(3, 1) = -_tmp209 * (_tmp207 * _tmp229 + _tmp208 * _tmp236 - _tmp210 * _tmp226 -
                           _tmp211 * _tmp226 - _tmp239 - _tmp240);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
