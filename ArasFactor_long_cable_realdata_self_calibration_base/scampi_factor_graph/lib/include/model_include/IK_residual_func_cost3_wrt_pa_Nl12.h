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
 * Symbolic function: IK_residual_func_cost3_wrt_pa_Nl12
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPaNl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 726

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (243)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp2;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp0 * _tmp9;
  const Scalar _tmp11 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp12 = 2 * _tmp0 * _tmp6;
  const Scalar _tmp13 = _tmp2 * _tmp9;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp5;
  const Scalar _tmp17 = _tmp16 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp18 = Scalar(1.0) / (_tmp17);
  const Scalar _tmp19 = std::pow(_tmp17, Scalar(2));
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp0 * _tmp7;
  const Scalar _tmp24 = _tmp6 * _tmp9;
  const Scalar _tmp25 =
      -Scalar(0.010999999999999999) * _tmp23 + Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp22 + _tmp27;
  const Scalar _tmp29 = _tmp28 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp30 = std::pow(_tmp29, Scalar(2));
  const Scalar _tmp31 = _tmp19 + _tmp30;
  const Scalar _tmp32 = std::sqrt(_tmp31);
  const Scalar _tmp33 = _tmp18 * _tmp32;
  const Scalar _tmp34 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp36 = -_tmp35;
  const Scalar _tmp37 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp38 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp39 = _tmp37 - _tmp38;
  const Scalar _tmp40 = _tmp36 + _tmp39;
  const Scalar _tmp41 = _tmp11 + _tmp14;
  const Scalar _tmp42 = _tmp41 + _tmp5;
  const Scalar _tmp43 = _tmp42 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp44 = _tmp21 + _tmp27;
  const Scalar _tmp45 = _tmp44 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp43 * _tmp46;
  const Scalar _tmp48 = _tmp36 + _tmp37 + _tmp38;
  const Scalar _tmp49 = _tmp15 + _tmp4;
  const Scalar _tmp50 = _tmp49 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp51 = std::pow(_tmp50, Scalar(2));
  const Scalar _tmp52 = _tmp25 + _tmp26;
  const Scalar _tmp53 = _tmp22 + _tmp52;
  const Scalar _tmp54 = _tmp53 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp55 = _tmp51 + std::pow(_tmp54, Scalar(2));
  const Scalar _tmp56 = std::pow(_tmp55, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp57 = _tmp50 * _tmp56;
  const Scalar _tmp58 = _tmp40 * _tmp57;
  const Scalar _tmp59 = -_tmp48 * _tmp57 + _tmp58;
  const Scalar _tmp60 = _tmp45 * _tmp46;
  const Scalar _tmp61 = _tmp18 * _tmp29;
  const Scalar _tmp62 = _tmp47 * _tmp61 - _tmp60;
  const Scalar _tmp63 = _tmp54 * _tmp56;
  const Scalar _tmp64 = _tmp57 * _tmp61;
  const Scalar _tmp65 = -_tmp63 + _tmp64;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp62 * _tmp66;
  const Scalar _tmp68 = _tmp35 + _tmp39;
  const Scalar _tmp69 = _tmp18 * _tmp40;
  const Scalar _tmp70 = _tmp29 * _tmp69;
  const Scalar _tmp71 = _tmp48 * _tmp63 - _tmp57 * _tmp70;
  const Scalar _tmp72 = Scalar(1.0) * _tmp28;
  const Scalar _tmp73 = Scalar(1.0) * _tmp16;
  const Scalar _tmp74 = (-_tmp49 + _tmp73) / (_tmp53 - _tmp72);
  const Scalar _tmp75 = _tmp40 * _tmp47 - _tmp47 * _tmp68 - _tmp59 * _tmp67 -
                        _tmp74 * (-_tmp47 * _tmp70 + _tmp60 * _tmp68 - _tmp67 * _tmp71);
  const Scalar _tmp76 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp77 = _tmp72 * _tmp74 + _tmp73;
  const Scalar _tmp78 = 0;
  const Scalar _tmp79 = _tmp76 * _tmp78;
  const Scalar _tmp80 = _tmp47 * _tmp79;
  const Scalar _tmp81 = _tmp57 * _tmp66;
  const Scalar _tmp82 = _tmp62 * _tmp76;
  const Scalar _tmp83 = _tmp78 * _tmp82;
  const Scalar _tmp84 = _tmp34 * (_tmp80 - _tmp81 * _tmp83);
  const Scalar _tmp85 = Scalar(1.0) / (_tmp32);
  const Scalar _tmp86 = _tmp28 * _tmp85;
  const Scalar _tmp87 = _tmp16 * _tmp85;
  const Scalar _tmp88 = -_tmp17 * _tmp86 + _tmp29 * _tmp87;
  const Scalar _tmp89 = _tmp33 * _tmp88;
  const Scalar _tmp90 = -_tmp49 * _tmp63 + _tmp53 * _tmp57 + _tmp57 * _tmp89;
  const Scalar _tmp91 = -_tmp42 * _tmp60 + _tmp44 * _tmp47 + _tmp47 * _tmp89 - _tmp67 * _tmp90;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp66 * _tmp90;
  const Scalar _tmp94 = _tmp61 * _tmp66;
  const Scalar _tmp95 = -_tmp40 + _tmp59 * _tmp94 - _tmp74 * (_tmp70 + _tmp71 * _tmp94);
  const Scalar _tmp96 = _tmp76 * _tmp91;
  const Scalar _tmp97 = _tmp61 * _tmp93 - _tmp89 - _tmp95 * _tmp96;
  const Scalar _tmp98 = _tmp92 * _tmp97;
  const Scalar _tmp99 = _tmp75 * _tmp98 + _tmp95;
  const Scalar _tmp100 = -_tmp61 - _tmp82 * _tmp99;
  const Scalar _tmp101 = _tmp47 * _tmp76;
  const Scalar _tmp102 = _tmp101 * _tmp99;
  const Scalar _tmp103 = _tmp4 + _tmp41;
  const Scalar _tmp104 = _tmp103 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp105 = _tmp21 + _tmp52;
  const Scalar _tmp106 = _tmp105 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp107 =
      std::pow(Scalar(std::pow(_tmp104, Scalar(2)) + std::pow(_tmp106, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp108 = _tmp104 * _tmp107;
  const Scalar _tmp109 = _tmp108 * fh1;
  const Scalar _tmp110 = _tmp109 * (_tmp100 * _tmp81 + _tmp102 + Scalar(1.0));
  const Scalar _tmp111 = Scalar(1.0) * _tmp92;
  const Scalar _tmp112 = _tmp111 * _tmp47;
  const Scalar _tmp113 = Scalar(1.0) * _tmp66;
  const Scalar _tmp114 = _tmp113 * _tmp62;
  const Scalar _tmp115 = _tmp114 * _tmp92;
  const Scalar _tmp116 = _tmp106 * _tmp107;
  const Scalar _tmp117 = fh1 * (_tmp103 * _tmp116 - _tmp105 * _tmp108);
  const Scalar _tmp118 = _tmp117 * (_tmp112 - _tmp115 * _tmp57);
  const Scalar _tmp119 = _tmp71 * _tmp74;
  const Scalar _tmp120 = _tmp113 * _tmp119 - _tmp113 * _tmp59;
  const Scalar _tmp121 = -_tmp113 * _tmp90 - _tmp120 * _tmp96;
  const Scalar _tmp122 = _tmp75 * _tmp92;
  const Scalar _tmp123 = _tmp120 + _tmp121 * _tmp122;
  const Scalar _tmp124 = -_tmp123 * _tmp82 + Scalar(1.0);
  const Scalar _tmp125 = _tmp101 * _tmp123;
  const Scalar _tmp126 = _tmp116 * fh1;
  const Scalar _tmp127 = _tmp126 * (_tmp124 * _tmp81 + _tmp125);
  const Scalar _tmp128 =
      std::exp(_tmp110 * _tmp33 + _tmp118 * _tmp33 + _tmp127 * _tmp33 + _tmp33 * _tmp84);
  const Scalar _tmp129 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp130 = _tmp129 * _tmp32;
  const Scalar _tmp131 = _tmp127 * _tmp85;
  const Scalar _tmp132 = std::pow(_tmp31, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp133 = _tmp132 * _tmp28;
  const Scalar _tmp134 = _tmp132 * _tmp16;
  const Scalar _tmp135 = _tmp17 * _tmp29;
  const Scalar _tmp136 = _tmp33 * (-_tmp133 * _tmp19 + _tmp134 * _tmp135 + _tmp86);
  const Scalar _tmp137 = _tmp85 * _tmp88;
  const Scalar _tmp138 = _tmp130 * _tmp88;
  const Scalar _tmp139 = _tmp136 * _tmp57 - _tmp137 * _tmp57 + _tmp138 * _tmp57;
  const Scalar _tmp140 = std::pow(_tmp65, Scalar(-2));
  const Scalar _tmp141 = _tmp129 * _tmp29;
  const Scalar _tmp142 = _tmp140 * _tmp141;
  const Scalar _tmp143 = _tmp57 * _tmp90;
  const Scalar _tmp144 = _tmp142 * _tmp143;
  const Scalar _tmp145 = _tmp141 * _tmp93;
  const Scalar _tmp146 = _tmp137 * _tmp47;
  const Scalar _tmp147 = _tmp136 * _tmp47 + _tmp138 * _tmp47 - _tmp139 * _tmp67 + _tmp144 * _tmp62 -
                         _tmp145 * _tmp47 - _tmp146;
  const Scalar _tmp148 = std::pow(_tmp91, Scalar(-2));
  const Scalar _tmp149 = _tmp114 * _tmp148;
  const Scalar _tmp150 = _tmp147 * _tmp149;
  const Scalar _tmp151 = _tmp51 / _tmp55;
  const Scalar _tmp152 = _tmp142 * _tmp151;
  const Scalar _tmp153 = Scalar(1.0) * _tmp148;
  const Scalar _tmp154 = _tmp153 * _tmp47;
  const Scalar _tmp155 = _tmp113 * _tmp141 * _tmp47 * _tmp92;
  const Scalar _tmp156 = _tmp117 * _tmp33;
  const Scalar _tmp157 = _tmp100 * _tmp151;
  const Scalar _tmp158 = _tmp30 / [&]() {
    const Scalar base = _tmp17;
    return base * base * base;
  }();
  const Scalar _tmp159 = _tmp140 * _tmp158;
  const Scalar _tmp160 = _tmp57 * _tmp71;
  const Scalar _tmp161 = _tmp140 * _tmp160;
  const Scalar _tmp162 = _tmp141 * _tmp161;
  const Scalar _tmp163 = _tmp141 * _tmp66;
  const Scalar _tmp164 = _tmp163 * _tmp71;
  const Scalar _tmp165 = _tmp141 * _tmp58;
  const Scalar _tmp166 = _tmp141 * _tmp40;
  const Scalar _tmp167 = _tmp57 * _tmp59;
  const Scalar _tmp168 = _tmp142 * _tmp167;
  const Scalar _tmp169 = _tmp163 * _tmp59;
  const Scalar _tmp170 =
      _tmp168 * _tmp62 - _tmp169 * _tmp47 -
      _tmp74 * (_tmp162 * _tmp62 - _tmp164 * _tmp47 + _tmp165 * _tmp67 - _tmp166 * _tmp47);
  const Scalar _tmp171 = std::pow(_tmp75, Scalar(-2));
  const Scalar _tmp172 = _tmp170 * _tmp171;
  const Scalar _tmp173 = _tmp91 * _tmp95;
  const Scalar _tmp174 =
      -_tmp159 * _tmp167 + _tmp169 -
      _tmp74 * (-_tmp158 * _tmp161 - _tmp158 * _tmp58 * _tmp66 + _tmp164 + _tmp166);
  const Scalar _tmp175 = _tmp76 * _tmp95;
  const Scalar _tmp176 = _tmp148 * _tmp75;
  const Scalar _tmp177 = _tmp176 * _tmp97;
  const Scalar _tmp178 =
      _tmp122 * (-_tmp136 + _tmp137 - _tmp138 + _tmp139 * _tmp94 - _tmp143 * _tmp159 + _tmp145 -
                 _tmp147 * _tmp175 + _tmp172 * _tmp173 - _tmp174 * _tmp96) -
      _tmp147 * _tmp177 + _tmp170 * _tmp98 + _tmp174;
  const Scalar _tmp179 = _tmp172 * _tmp62;
  const Scalar _tmp180 = -_tmp102 * _tmp141 - _tmp141 - _tmp178 * _tmp82 + _tmp179 * _tmp99;
  const Scalar _tmp181 = _tmp172 * _tmp47;
  const Scalar _tmp182 = _tmp109 * _tmp33;
  const Scalar _tmp183 = _tmp118 * _tmp85;
  const Scalar _tmp184 = _tmp57 * _tmp67;
  const Scalar _tmp185 = _tmp184 * _tmp78;
  const Scalar _tmp186 = _tmp33 * _tmp34;
  const Scalar _tmp187 = _tmp123 * _tmp47;
  const Scalar _tmp188 = _tmp120 * _tmp76;
  const Scalar _tmp189 = _tmp119 * _tmp57;
  const Scalar _tmp190 = _tmp113 * _tmp74;
  const Scalar _tmp191 =
      -Scalar(1.0) * _tmp142 * _tmp189 - _tmp165 * _tmp190 + Scalar(1.0) * _tmp168;
  const Scalar _tmp192 = _tmp120 * _tmp91;
  const Scalar _tmp193 = _tmp121 * _tmp176;
  const Scalar _tmp194 = _tmp121 * _tmp170 * _tmp92 +
                         _tmp122 * (-_tmp113 * _tmp139 + Scalar(1.0) * _tmp144 - _tmp147 * _tmp188 +
                                    _tmp172 * _tmp192 - _tmp191 * _tmp96) -
                         _tmp147 * _tmp193 + _tmp191;
  const Scalar _tmp195 = _tmp123 * _tmp179 - _tmp125 * _tmp141 - _tmp194 * _tmp82;
  const Scalar _tmp196 = _tmp126 * _tmp33;
  const Scalar _tmp197 = _tmp84 * _tmp85;
  const Scalar _tmp198 = _tmp110 * _tmp85;
  const Scalar _tmp199 = _tmp126 * _tmp66;
  const Scalar _tmp200 = _tmp34 * _tmp78;
  const Scalar _tmp201 = _tmp200 * _tmp82;
  const Scalar _tmp202 = _tmp109 * _tmp66;
  const Scalar _tmp203 =
      std::exp(-_tmp100 * _tmp202 + _tmp115 * _tmp117 - _tmp124 * _tmp199 + _tmp201 * _tmp66);
  const Scalar _tmp204 = _tmp172 * _tmp200;
  const Scalar _tmp205 = _tmp126 * _tmp57;
  const Scalar _tmp206 = _tmp111 * _tmp117;
  const Scalar _tmp207 = _tmp142 * _tmp57;
  const Scalar _tmp208 = _tmp100 * _tmp109;
  const Scalar _tmp209 = _tmp34 * _tmp79;
  const Scalar _tmp210 = _tmp209 * _tmp47;
  const Scalar _tmp211 = _tmp126 * _tmp76;
  const Scalar _tmp212 = _tmp109 * _tmp76;
  const Scalar _tmp213 = std::exp(-_tmp123 * _tmp211 - _tmp206 - _tmp209 - _tmp212 * _tmp99);
  const Scalar _tmp214 = _tmp109 * _tmp99;
  const Scalar _tmp215 = _tmp117 * _tmp153;
  const Scalar _tmp216 = _tmp123 * _tmp126;
  const Scalar _tmp217 = _tmp140 * _tmp18;
  const Scalar _tmp218 = _tmp217 * _tmp62;
  const Scalar _tmp219 = _tmp18 * _tmp66;
  const Scalar _tmp220 = _tmp219 * _tmp71;
  const Scalar _tmp221 = _tmp219 * _tmp59;
  const Scalar _tmp222 =
      -_tmp167 * _tmp218 + _tmp221 * _tmp47 -
      _tmp74 * (-_tmp160 * _tmp218 - _tmp184 * _tmp69 + _tmp220 * _tmp47 + _tmp47 * _tmp69);
  const Scalar _tmp223 = _tmp222 * _tmp92;
  const Scalar _tmp224 =
      _tmp168 - _tmp221 - _tmp74 * (_tmp162 + _tmp163 * _tmp58 - _tmp220 - _tmp69);
  const Scalar _tmp225 = _tmp171 * _tmp222;
  const Scalar _tmp226 = _tmp33 * (-_tmp133 * _tmp135 + _tmp134 * _tmp30 - _tmp87);
  const Scalar _tmp227 = _tmp66 * (-_tmp137 * _tmp64 + _tmp226 * _tmp57);
  const Scalar _tmp228 = _tmp219 * _tmp90;
  const Scalar _tmp229 = -_tmp143 * _tmp218 - _tmp146 * _tmp61 + _tmp226 * _tmp47 -
                         _tmp227 * _tmp62 + _tmp228 * _tmp47;
  const Scalar _tmp230 =
      _tmp122 * (_tmp137 * _tmp61 + _tmp144 + _tmp173 * _tmp225 - _tmp175 * _tmp229 -
                 _tmp224 * _tmp96 - _tmp226 + _tmp227 * _tmp61 - _tmp228) -
      _tmp177 * _tmp229 + _tmp223 * _tmp97 + _tmp224;
  const Scalar _tmp231 = _tmp225 * _tmp62;
  const Scalar _tmp232 = _tmp102 * _tmp18 + _tmp18 - _tmp230 * _tmp82 + _tmp231 * _tmp99;
  const Scalar _tmp233 = _tmp225 * _tmp47;
  const Scalar _tmp234 = _tmp219 * _tmp57;
  const Scalar _tmp235 = _tmp124 * _tmp217;
  const Scalar _tmp236 = Scalar(1.0) * _tmp217;
  const Scalar _tmp237 = -_tmp167 * _tmp236 + _tmp189 * _tmp236 + _tmp190 * _tmp57 * _tmp69;
  const Scalar _tmp238 = _tmp121 * _tmp223 +
                         _tmp122 * (-_tmp143 * _tmp236 - _tmp188 * _tmp229 + _tmp192 * _tmp225 -
                                    Scalar(1.0) * _tmp227 - _tmp237 * _tmp96) -
                         _tmp193 * _tmp229 + _tmp237;
  const Scalar _tmp239 = _tmp123 * _tmp231 + _tmp125 * _tmp18 - _tmp238 * _tmp82;
  const Scalar _tmp240 = _tmp149 * _tmp229;
  const Scalar _tmp241 = _tmp217 * _tmp57;
  const Scalar _tmp242 = _tmp200 * _tmp225;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp128 *
      (-_tmp110 * _tmp130 - _tmp118 * _tmp130 - _tmp127 * _tmp130 - _tmp130 * _tmp84 + _tmp131 -
       _tmp156 *
           (_tmp111 * _tmp152 * _tmp62 - _tmp147 * _tmp154 + _tmp150 * _tmp57 - _tmp155 * _tmp57) -
       _tmp182 * (_tmp101 * _tmp178 - _tmp142 * _tmp157 + _tmp180 * _tmp81 - _tmp181 * _tmp99) +
       _tmp183 -
       _tmp186 *
           (-_tmp141 * _tmp80 * _tmp81 + _tmp152 * _tmp83 + _tmp172 * _tmp185 - _tmp181 * _tmp78) -
       _tmp196 * (_tmp101 * _tmp194 - _tmp124 * _tmp152 - _tmp172 * _tmp187 + _tmp195 * _tmp81) +
       _tmp197 + _tmp198);
  _res(2, 0) =
      -_tmp203 * (_tmp117 * _tmp150 - _tmp117 * _tmp155 - _tmp124 * _tmp142 * _tmp205 -
                  _tmp163 * _tmp210 + _tmp180 * _tmp202 + _tmp195 * _tmp199 + _tmp201 * _tmp207 +
                  _tmp204 * _tmp67 + _tmp206 * _tmp207 * _tmp62 - _tmp207 * _tmp208);
  _res(3, 0) = -_tmp213 * (-_tmp147 * _tmp215 - _tmp172 * _tmp214 - _tmp172 * _tmp216 +
                           _tmp178 * _tmp212 + _tmp194 * _tmp211 - _tmp204);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp128 *
      (_tmp131 * _tmp61 -
       _tmp156 * (-_tmp111 * _tmp151 * _tmp218 + _tmp112 * _tmp234 - _tmp154 * _tmp229 +
                  _tmp240 * _tmp57) -
       _tmp182 * (_tmp101 * _tmp230 + _tmp157 * _tmp217 + _tmp232 * _tmp81 - _tmp233 * _tmp99) +
       _tmp183 * _tmp61 -
       _tmp186 *
           (-_tmp151 * _tmp217 * _tmp83 + _tmp185 * _tmp225 - _tmp233 * _tmp78 + _tmp234 * _tmp80) -
       _tmp196 * (_tmp101 * _tmp238 + _tmp151 * _tmp235 - _tmp187 * _tmp225 + _tmp239 * _tmp81) +
       _tmp197 * _tmp61 + _tmp198 * _tmp61);
  _res(2, 1) =
      -_tmp203 * (_tmp117 * _tmp240 + _tmp199 * _tmp239 - _tmp201 * _tmp241 + _tmp202 * _tmp232 +
                  _tmp205 * _tmp235 - _tmp206 * _tmp218 * _tmp57 + _tmp206 * _tmp219 * _tmp47 +
                  _tmp208 * _tmp241 + _tmp210 * _tmp219 + _tmp242 * _tmp67);
  _res(3, 1) = -_tmp213 * (_tmp211 * _tmp238 + _tmp212 * _tmp230 - _tmp214 * _tmp225 -
                           _tmp215 * _tmp229 - _tmp216 * _tmp225 - _tmp242);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym