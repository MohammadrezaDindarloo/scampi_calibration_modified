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
 * Symbolic function: IK_residual_func_cost3_wrt_pc_Nl9
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPcNl9(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 715

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (236)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp0 * _tmp5;
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp2 * _tmp7;
  const Scalar _tmp9 = -Scalar(0.010999999999999999) * _tmp6 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp10 = 2 * _tmp2;
  const Scalar _tmp11 = _tmp10 * _tmp5;
  const Scalar _tmp12 = _tmp0 * _tmp7;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp13 + _tmp9;
  const Scalar _tmp15 = _tmp14 + _tmp4;
  const Scalar _tmp16 = _tmp15 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp17 = Scalar(1.0) / (_tmp16);
  const Scalar _tmp18 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp20 = _tmp0 * _tmp10;
  const Scalar _tmp21 = _tmp5 * _tmp7;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 + Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp23 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp25 = _tmp22 + _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp28 = std::pow(_tmp27, Scalar(2));
  const Scalar _tmp29 = _tmp18 + _tmp28;
  const Scalar _tmp30 = std::sqrt(_tmp29);
  const Scalar _tmp31 = _tmp17 * _tmp30;
  const Scalar _tmp32 = -_tmp4;
  const Scalar _tmp33 = -_tmp13 + _tmp9;
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp34 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp36 = -_tmp19;
  const Scalar _tmp37 = _tmp22 - _tmp24;
  const Scalar _tmp38 = _tmp36 + _tmp37;
  const Scalar _tmp39 = _tmp38 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp40 = std::pow(Scalar(std::pow(_tmp35, Scalar(2)) + std::pow(_tmp39, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp35 * _tmp40;
  const Scalar _tmp42 = Scalar(1.0) / (_tmp30);
  const Scalar _tmp43 = _tmp26 * _tmp42;
  const Scalar _tmp44 = _tmp15 * _tmp42;
  const Scalar _tmp45 = -_tmp16 * _tmp43 + _tmp27 * _tmp44;
  const Scalar _tmp46 = _tmp31 * _tmp45;
  const Scalar _tmp47 = _tmp14 + _tmp32;
  const Scalar _tmp48 = _tmp47 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp49 = std::pow(_tmp48, Scalar(2));
  const Scalar _tmp50 = _tmp25 + _tmp36;
  const Scalar _tmp51 = _tmp50 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp52 = _tmp49 + std::pow(_tmp51, Scalar(2));
  const Scalar _tmp53 = std::pow(_tmp52, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp48 * _tmp53;
  const Scalar _tmp55 = _tmp51 * _tmp53;
  const Scalar _tmp56 = _tmp46 * _tmp54 - _tmp47 * _tmp55 + _tmp50 * _tmp54;
  const Scalar _tmp57 = _tmp17 * _tmp27;
  const Scalar _tmp58 = _tmp54 * _tmp57 - _tmp55;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp60 = _tmp39 * _tmp40;
  const Scalar _tmp61 = _tmp41 * _tmp57 - _tmp60;
  const Scalar _tmp62 = _tmp59 * _tmp61;
  const Scalar _tmp63 = -_tmp34 * _tmp60 + _tmp38 * _tmp41 + _tmp41 * _tmp46 - _tmp56 * _tmp62;
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp65 = -_tmp64;
  const Scalar _tmp66 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp67 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp68 = _tmp66 + _tmp67;
  const Scalar _tmp69 = _tmp65 + _tmp68;
  const Scalar _tmp70 = _tmp64 + _tmp68;
  const Scalar _tmp71 = _tmp17 * _tmp70;
  const Scalar _tmp72 = _tmp27 * _tmp71;
  const Scalar _tmp73 = -_tmp54 * _tmp72 + _tmp55 * _tmp69;
  const Scalar _tmp74 = _tmp65 + _tmp66 - _tmp67;
  const Scalar _tmp75 = Scalar(1.0) * _tmp26;
  const Scalar _tmp76 = Scalar(1.0) * _tmp15;
  const Scalar _tmp77 = (-_tmp47 + _tmp76) / (_tmp50 - _tmp75);
  const Scalar _tmp78 = _tmp54 * _tmp70;
  const Scalar _tmp79 = -_tmp54 * _tmp69 + _tmp78;
  const Scalar _tmp80 = _tmp41 * _tmp70 - _tmp41 * _tmp74 - _tmp62 * _tmp79 -
                        _tmp77 * (-_tmp41 * _tmp72 + _tmp60 * _tmp74 - _tmp62 * _tmp73);
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = Scalar(1.0) * _tmp59;
  const Scalar _tmp83 = _tmp77 * _tmp82;
  const Scalar _tmp84 = _tmp73 * _tmp83 - _tmp79 * _tmp82;
  const Scalar _tmp85 = _tmp81 * _tmp84;
  const Scalar _tmp86 = -_tmp56 * _tmp82 - _tmp63 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp63);
  const Scalar _tmp88 = _tmp80 * _tmp87;
  const Scalar _tmp89 = _tmp84 + _tmp86 * _tmp88;
  const Scalar _tmp90 = _tmp61 * _tmp81;
  const Scalar _tmp91 = -_tmp89 * _tmp90 + Scalar(1.0);
  const Scalar _tmp92 = _tmp54 * _tmp59;
  const Scalar _tmp93 = _tmp41 * _tmp81;
  const Scalar _tmp94 = _tmp89 * _tmp93;
  const Scalar _tmp95 = _tmp33 + _tmp4;
  const Scalar _tmp96 = _tmp95 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp97 = _tmp19 + _tmp37;
  const Scalar _tmp98 = _tmp97 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp99 = std::pow(Scalar(std::pow(_tmp96, Scalar(2)) + std::pow(_tmp98, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp100 = _tmp98 * _tmp99;
  const Scalar _tmp101 = _tmp100 * fh1;
  const Scalar _tmp102 = _tmp101 * (_tmp91 * _tmp92 + _tmp94);
  const Scalar _tmp103 = _tmp57 * _tmp59;
  const Scalar _tmp104 = _tmp103 * _tmp79 - _tmp70 - _tmp77 * (_tmp103 * _tmp73 + _tmp72);
  const Scalar _tmp105 = _tmp104 * _tmp81;
  const Scalar _tmp106 = _tmp103 * _tmp56 - _tmp105 * _tmp63 - _tmp46;
  const Scalar _tmp107 = _tmp104 + _tmp106 * _tmp88;
  const Scalar _tmp108 = _tmp107 * _tmp93;
  const Scalar _tmp109 = -_tmp107 * _tmp90 - _tmp57;
  const Scalar _tmp110 = _tmp96 * _tmp99;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = _tmp111 * (_tmp108 + _tmp109 * _tmp92 + Scalar(1.0));
  const Scalar _tmp113 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp114 = _tmp75 * _tmp77 + _tmp76;
  const Scalar _tmp115 = 0;
  const Scalar _tmp116 = _tmp54 * _tmp62;
  const Scalar _tmp117 = _tmp115 * _tmp116;
  const Scalar _tmp118 = _tmp115 * _tmp93;
  const Scalar _tmp119 = _tmp113 * (-_tmp117 * _tmp81 + _tmp118);
  const Scalar _tmp120 = Scalar(1.0) * _tmp87;
  const Scalar _tmp121 = _tmp120 * _tmp41;
  const Scalar _tmp122 = fh1 * (_tmp100 * _tmp95 - _tmp110 * _tmp97);
  const Scalar _tmp123 = _tmp122 * (-_tmp116 * _tmp120 + _tmp121);
  const Scalar _tmp124 =
      std::exp(_tmp102 * _tmp31 + _tmp112 * _tmp31 + _tmp119 * _tmp31 + _tmp123 * _tmp31);
  const Scalar _tmp125 = _tmp119 * _tmp42;
  const Scalar _tmp126 = Scalar(1.0) / (_tmp18);
  const Scalar _tmp127 = _tmp126 * _tmp30;
  const Scalar _tmp128 = _tmp123 * _tmp42;
  const Scalar _tmp129 = _tmp54 * _tmp56;
  const Scalar _tmp130 = std::pow(_tmp58, Scalar(-2));
  const Scalar _tmp131 = _tmp126 * _tmp27;
  const Scalar _tmp132 = _tmp130 * _tmp131;
  const Scalar _tmp133 = _tmp129 * _tmp132;
  const Scalar _tmp134 = _tmp127 * _tmp45;
  const Scalar _tmp135 = _tmp42 * _tmp45;
  const Scalar _tmp136 = std::pow(_tmp29, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp137 = _tmp136 * _tmp26;
  const Scalar _tmp138 = _tmp136 * _tmp15;
  const Scalar _tmp139 = _tmp16 * _tmp27;
  const Scalar _tmp140 = _tmp31 * (-_tmp137 * _tmp18 + _tmp138 * _tmp139 + _tmp43);
  const Scalar _tmp141 = _tmp134 * _tmp54 - _tmp135 * _tmp54 + _tmp140 * _tmp54;
  const Scalar _tmp142 = _tmp135 * _tmp41;
  const Scalar _tmp143 = _tmp131 * _tmp59;
  const Scalar _tmp144 = _tmp143 * _tmp56;
  const Scalar _tmp145 = _tmp133 * _tmp61 + _tmp134 * _tmp41 + _tmp140 * _tmp41 - _tmp141 * _tmp62 -
                         _tmp142 - _tmp144 * _tmp41;
  const Scalar _tmp146 = std::pow(_tmp63, Scalar(-2));
  const Scalar _tmp147 = Scalar(1.0) * _tmp146;
  const Scalar _tmp148 = _tmp145 * _tmp147;
  const Scalar _tmp149 = _tmp49 / _tmp52;
  const Scalar _tmp150 = _tmp132 * _tmp149;
  const Scalar _tmp151 = _tmp131 * _tmp41 * _tmp82 * _tmp87;
  const Scalar _tmp152 = _tmp122 * _tmp31;
  const Scalar _tmp153 = _tmp54 * _tmp79;
  const Scalar _tmp154 = _tmp132 * _tmp153;
  const Scalar _tmp155 = _tmp143 * _tmp79;
  const Scalar _tmp156 = _tmp54 * _tmp73;
  const Scalar _tmp157 = _tmp130 * _tmp156;
  const Scalar _tmp158 = _tmp131 * _tmp157;
  const Scalar _tmp159 = _tmp131 * _tmp70;
  const Scalar _tmp160 = _tmp143 * _tmp73;
  const Scalar _tmp161 =
      _tmp154 * _tmp61 - _tmp155 * _tmp41 -
      _tmp77 * (_tmp116 * _tmp159 + _tmp158 * _tmp61 - _tmp159 * _tmp41 - _tmp160 * _tmp41);
  const Scalar _tmp162 = std::pow(_tmp80, Scalar(-2));
  const Scalar _tmp163 = _tmp161 * _tmp162;
  const Scalar _tmp164 = _tmp163 * _tmp41;
  const Scalar _tmp165 = _tmp61 * _tmp89;
  const Scalar _tmp166 = _tmp146 * _tmp80;
  const Scalar _tmp167 = _tmp166 * _tmp86;
  const Scalar _tmp168 = _tmp161 * _tmp87;
  const Scalar _tmp169 = _tmp63 * _tmp84;
  const Scalar _tmp170 = _tmp54 * _tmp83;
  const Scalar _tmp171 = Scalar(1.0) * _tmp154 - Scalar(1.0) * _tmp158 * _tmp77 - _tmp159 * _tmp170;
  const Scalar _tmp172 = _tmp63 * _tmp81;
  const Scalar _tmp173 = -_tmp145 * _tmp167 + _tmp168 * _tmp86 + _tmp171 +
                         _tmp88 * (Scalar(1.0) * _tmp133 - _tmp141 * _tmp82 - _tmp145 * _tmp85 +
                                   _tmp163 * _tmp169 - _tmp171 * _tmp172);
  const Scalar _tmp174 = -_tmp131 * _tmp94 + _tmp163 * _tmp165 - _tmp173 * _tmp90;
  const Scalar _tmp175 = _tmp101 * _tmp31;
  const Scalar _tmp176 = _tmp112 * _tmp42;
  const Scalar _tmp177 = _tmp115 * _tmp90;
  const Scalar _tmp178 = _tmp113 * _tmp31;
  const Scalar _tmp179 = _tmp102 * _tmp42;
  const Scalar _tmp180 = _tmp107 * _tmp61;
  const Scalar _tmp181 = _tmp106 * _tmp166;
  const Scalar _tmp182 = _tmp28 / [&]() {
    const Scalar base = _tmp16;
    return base * base * base;
  }();
  const Scalar _tmp183 = _tmp130 * _tmp182;
  const Scalar _tmp184 =
      -_tmp153 * _tmp183 + _tmp155 -
      _tmp77 * (-_tmp157 * _tmp182 + _tmp159 + _tmp160 - _tmp182 * _tmp59 * _tmp78);
  const Scalar _tmp185 = _tmp104 * _tmp63;
  const Scalar _tmp186 =
      _tmp106 * _tmp168 - _tmp145 * _tmp181 + _tmp184 +
      _tmp88 * (_tmp103 * _tmp141 - _tmp105 * _tmp145 - _tmp129 * _tmp183 - _tmp134 + _tmp135 -
                _tmp140 + _tmp144 + _tmp163 * _tmp185 - _tmp172 * _tmp184);
  const Scalar _tmp187 = -_tmp108 * _tmp131 - _tmp131 + _tmp163 * _tmp180 - _tmp186 * _tmp90;
  const Scalar _tmp188 = _tmp107 * _tmp41;
  const Scalar _tmp189 = _tmp109 * _tmp149;
  const Scalar _tmp190 = _tmp111 * _tmp31;
  const Scalar _tmp191 = _tmp113 * _tmp115;
  const Scalar _tmp192 = _tmp191 * _tmp81;
  const Scalar _tmp193 = _tmp101 * _tmp59;
  const Scalar _tmp194 = _tmp120 * _tmp122;
  const Scalar _tmp195 = _tmp111 * _tmp59;
  const Scalar _tmp196 =
      std::exp(-_tmp109 * _tmp195 + _tmp192 * _tmp62 - _tmp193 * _tmp91 + _tmp194 * _tmp62);
  const Scalar _tmp197 = _tmp191 * _tmp90;
  const Scalar _tmp198 = _tmp132 * _tmp54;
  const Scalar _tmp199 = _tmp163 * _tmp191;
  const Scalar _tmp200 = _tmp122 * _tmp148;
  const Scalar _tmp201 = _tmp101 * _tmp54;
  const Scalar _tmp202 = _tmp109 * _tmp111;
  const Scalar _tmp203 = _tmp111 * _tmp81;
  const Scalar _tmp204 = _tmp101 * _tmp81;
  const Scalar _tmp205 = std::exp(-_tmp107 * _tmp203 - _tmp192 - _tmp194 - _tmp204 * _tmp89);
  const Scalar _tmp206 = _tmp107 * _tmp111;
  const Scalar _tmp207 = _tmp101 * _tmp89;
  const Scalar _tmp208 = _tmp135 * _tmp57;
  const Scalar _tmp209 = _tmp31 * (-_tmp137 * _tmp139 + _tmp138 * _tmp28 - _tmp44);
  const Scalar _tmp210 = -_tmp208 * _tmp54 + _tmp209 * _tmp54;
  const Scalar _tmp211 = _tmp130 * _tmp17;
  const Scalar _tmp212 = _tmp211 * _tmp61;
  const Scalar _tmp213 = _tmp17 * _tmp59;
  const Scalar _tmp214 = _tmp213 * _tmp56;
  const Scalar _tmp215 = -_tmp129 * _tmp212 - _tmp142 * _tmp57 + _tmp209 * _tmp41 -
                         _tmp210 * _tmp62 + _tmp214 * _tmp41;
  const Scalar _tmp216 = _tmp147 * _tmp215;
  const Scalar _tmp217 = _tmp213 * _tmp54;
  const Scalar _tmp218 = _tmp213 * _tmp79;
  const Scalar _tmp219 = _tmp213 * _tmp73;
  const Scalar _tmp220 =
      -_tmp153 * _tmp212 + _tmp218 * _tmp41 -
      _tmp77 * (-_tmp116 * _tmp71 - _tmp156 * _tmp212 + _tmp219 * _tmp41 + _tmp41 * _tmp71);
  const Scalar _tmp221 = _tmp162 * _tmp220;
  const Scalar _tmp222 = _tmp221 * _tmp41;
  const Scalar _tmp223 =
      _tmp154 - _tmp218 - _tmp77 * (_tmp158 + _tmp159 * _tmp92 - _tmp219 - _tmp71);
  const Scalar _tmp224 = _tmp220 * _tmp87;
  const Scalar _tmp225 =
      _tmp106 * _tmp224 - _tmp181 * _tmp215 + _tmp223 +
      _tmp88 * (_tmp103 * _tmp210 - _tmp105 * _tmp215 + _tmp133 - _tmp172 * _tmp223 +
                _tmp185 * _tmp221 + _tmp208 - _tmp209 - _tmp214);
  const Scalar _tmp226 = _tmp108 * _tmp17 + _tmp17 + _tmp180 * _tmp221 - _tmp225 * _tmp90;
  const Scalar _tmp227 = Scalar(1.0) * _tmp211;
  const Scalar _tmp228 = -_tmp153 * _tmp227 + _tmp156 * _tmp227 * _tmp77 + _tmp170 * _tmp71;
  const Scalar _tmp229 = -_tmp167 * _tmp215 + _tmp224 * _tmp86 + _tmp228 +
                         _tmp88 * (-_tmp129 * _tmp227 + _tmp169 * _tmp221 - _tmp172 * _tmp228 -
                                   _tmp210 * _tmp82 - _tmp215 * _tmp85);
  const Scalar _tmp230 = _tmp211 * _tmp91;
  const Scalar _tmp231 = _tmp165 * _tmp221 + _tmp17 * _tmp94 - _tmp229 * _tmp90;
  const Scalar _tmp232 = _tmp211 * _tmp54;
  const Scalar _tmp233 = _tmp122 * _tmp216;
  const Scalar _tmp234 = _tmp213 * _tmp41;
  const Scalar _tmp235 = _tmp191 * _tmp221;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp124 *
      (-_tmp102 * _tmp127 - _tmp112 * _tmp127 - _tmp119 * _tmp127 - _tmp123 * _tmp127 + _tmp125 +
       _tmp128 -
       _tmp152 *
           (_tmp116 * _tmp148 + _tmp120 * _tmp150 * _tmp61 - _tmp148 * _tmp41 - _tmp151 * _tmp54) -
       _tmp175 * (-_tmp150 * _tmp91 - _tmp164 * _tmp89 + _tmp173 * _tmp93 + _tmp174 * _tmp92) +
       _tmp176 -
       _tmp178 * (-_tmp115 * _tmp164 + _tmp117 * _tmp163 - _tmp118 * _tmp131 * _tmp92 +
                  _tmp150 * _tmp177) +
       _tmp179 -
       _tmp190 * (-_tmp132 * _tmp189 - _tmp163 * _tmp188 + _tmp186 * _tmp93 + _tmp187 * _tmp92));
  _res(2, 0) =
      -_tmp196 * (-_tmp122 * _tmp151 - _tmp132 * _tmp201 * _tmp91 - _tmp143 * _tmp192 * _tmp41 +
                  _tmp174 * _tmp193 + _tmp187 * _tmp195 + _tmp194 * _tmp198 * _tmp61 +
                  _tmp197 * _tmp198 - _tmp198 * _tmp202 + _tmp199 * _tmp62 + _tmp200 * _tmp62);
  _res(3, 0) = -_tmp205 * (-_tmp163 * _tmp206 - _tmp163 * _tmp207 + _tmp173 * _tmp204 +
                           _tmp186 * _tmp203 - _tmp199 - _tmp200);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp124 *
      (_tmp125 * _tmp57 + _tmp128 * _tmp57 -
       _tmp152 * (_tmp116 * _tmp216 - _tmp120 * _tmp149 * _tmp212 + _tmp121 * _tmp217 -
                  _tmp216 * _tmp41) -
       _tmp175 * (_tmp149 * _tmp230 - _tmp222 * _tmp89 + _tmp229 * _tmp93 + _tmp231 * _tmp92) +
       _tmp176 * _tmp57 -
       _tmp178 * (-_tmp115 * _tmp222 + _tmp117 * _tmp221 + _tmp118 * _tmp217 -
                  _tmp149 * _tmp177 * _tmp211) +
       _tmp179 * _tmp57 -
       _tmp190 * (-_tmp188 * _tmp221 + _tmp189 * _tmp211 + _tmp225 * _tmp93 + _tmp226 * _tmp92));
  _res(2, 1) =
      -_tmp196 * (_tmp192 * _tmp234 + _tmp193 * _tmp231 - _tmp194 * _tmp212 * _tmp54 +
                  _tmp194 * _tmp234 + _tmp195 * _tmp226 - _tmp197 * _tmp232 + _tmp201 * _tmp230 +
                  _tmp202 * _tmp232 + _tmp233 * _tmp62 + _tmp235 * _tmp62);
  _res(3, 1) = -_tmp205 * (_tmp203 * _tmp225 + _tmp204 * _tmp229 - _tmp206 * _tmp221 -
                           _tmp207 * _tmp221 - _tmp233 - _tmp235);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
