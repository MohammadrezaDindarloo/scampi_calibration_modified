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
 * Symbolic function: FK_residual_func_cost3_wrt_pb
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost3WrtPb(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 713

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (236)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp2 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp7 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = _tmp0 * _tmp6;
  const Scalar _tmp12 = _tmp2 * _tmp8;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 - _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp4;
  const Scalar _tmp16 = _tmp15 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp17 = Scalar(1.0) / (_tmp16);
  const Scalar _tmp18 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp20 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp23 = _tmp5 * _tmp8;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 + Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -_tmp21 + _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp28 = std::pow(_tmp27, Scalar(2));
  const Scalar _tmp29 = _tmp18 + _tmp28;
  const Scalar _tmp30 = std::sqrt(_tmp29);
  const Scalar _tmp31 = _tmp17 * _tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp33 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = -_tmp32 + _tmp35;
  const Scalar _tmp37 = -_tmp4;
  const Scalar _tmp38 = _tmp10 + _tmp13;
  const Scalar _tmp39 = _tmp37 + _tmp38;
  const Scalar _tmp40 = _tmp39 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp41 = -_tmp19;
  const Scalar _tmp42 = _tmp21 + _tmp24;
  const Scalar _tmp43 = _tmp41 + _tmp42;
  const Scalar _tmp44 = _tmp43 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp45 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp44, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp46 = _tmp40 * _tmp45;
  const Scalar _tmp47 = _tmp32 + _tmp33 - _tmp34;
  const Scalar _tmp48 = _tmp46 * _tmp47;
  const Scalar _tmp49 = _tmp44 * _tmp45;
  const Scalar _tmp50 = _tmp17 * _tmp27;
  const Scalar _tmp51 = _tmp38 + _tmp4;
  const Scalar _tmp52 = _tmp51 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp53 = std::pow(_tmp52, Scalar(2));
  const Scalar _tmp54 = _tmp19 + _tmp42;
  const Scalar _tmp55 = _tmp54 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp56 = _tmp53 + std::pow(_tmp55, Scalar(2));
  const Scalar _tmp57 = std::pow(_tmp56, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp52 * _tmp57;
  const Scalar _tmp59 = _tmp47 * _tmp58;
  const Scalar _tmp60 = _tmp32 + _tmp35;
  const Scalar _tmp61 = _tmp55 * _tmp57;
  const Scalar _tmp62 = -_tmp50 * _tmp59 + _tmp60 * _tmp61;
  const Scalar _tmp63 = _tmp46 * _tmp50 - _tmp49;
  const Scalar _tmp64 = _tmp50 * _tmp58 - _tmp61;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = _tmp63 * _tmp65;
  const Scalar _tmp67 = Scalar(1.0) * _tmp26;
  const Scalar _tmp68 = Scalar(1.0) * _tmp15;
  const Scalar _tmp69 = (-_tmp51 + _tmp68) / (_tmp54 - _tmp67);
  const Scalar _tmp70 = -_tmp58 * _tmp60 + _tmp59;
  const Scalar _tmp71 = -_tmp36 * _tmp46 + _tmp48 - _tmp66 * _tmp70 -
                        _tmp69 * (_tmp36 * _tmp49 - _tmp48 * _tmp50 - _tmp62 * _tmp66);
  const Scalar _tmp72 = Scalar(1.0) / (_tmp30);
  const Scalar _tmp73 = _tmp15 * _tmp72;
  const Scalar _tmp74 = _tmp26 * _tmp72;
  const Scalar _tmp75 = -_tmp16 * _tmp74 + _tmp27 * _tmp73;
  const Scalar _tmp76 = _tmp30 * _tmp75;
  const Scalar _tmp77 = _tmp17 * _tmp76;
  const Scalar _tmp78 = -_tmp51 * _tmp61 + _tmp54 * _tmp58 + _tmp58 * _tmp77;
  const Scalar _tmp79 = -_tmp39 * _tmp49 + _tmp43 * _tmp46 + _tmp46 * _tmp77 - _tmp66 * _tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp79);
  const Scalar _tmp81 = _tmp50 * _tmp65;
  const Scalar _tmp82 = -_tmp47 - _tmp69 * (_tmp47 * _tmp50 + _tmp62 * _tmp81) + _tmp70 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp71);
  const Scalar _tmp84 = _tmp79 * _tmp83;
  const Scalar _tmp85 = -_tmp77 + _tmp78 * _tmp81 - _tmp82 * _tmp84;
  const Scalar _tmp86 = _tmp80 * _tmp85;
  const Scalar _tmp87 = _tmp71 * _tmp86 + _tmp82;
  const Scalar _tmp88 = _tmp63 * _tmp83;
  const Scalar _tmp89 = -_tmp50 - _tmp87 * _tmp88;
  const Scalar _tmp90 = _tmp58 * _tmp65;
  const Scalar _tmp91 = _tmp46 * _tmp83;
  const Scalar _tmp92 = _tmp87 * _tmp91;
  const Scalar _tmp93 = _tmp14 + _tmp37;
  const Scalar _tmp94 = _tmp93 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp95 = _tmp25 + _tmp41;
  const Scalar _tmp96 = _tmp95 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp97 = std::pow(Scalar(std::pow(_tmp94, Scalar(2)) + std::pow(_tmp96, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp98 = _tmp94 * _tmp97;
  const Scalar _tmp99 = _tmp98 * fh1;
  const Scalar _tmp100 = _tmp99 * (_tmp89 * _tmp90 + _tmp92 + Scalar(1.0));
  const Scalar _tmp101 = Scalar(1.0) * _tmp65;
  const Scalar _tmp102 = _tmp62 * _tmp69;
  const Scalar _tmp103 = _tmp101 * _tmp102 - _tmp101 * _tmp70;
  const Scalar _tmp104 = -_tmp101 * _tmp78 - _tmp103 * _tmp84;
  const Scalar _tmp105 = _tmp104 * _tmp80;
  const Scalar _tmp106 = _tmp103 + _tmp105 * _tmp71;
  const Scalar _tmp107 = _tmp106 * _tmp91;
  const Scalar _tmp108 = -_tmp106 * _tmp88 + Scalar(1.0);
  const Scalar _tmp109 = _tmp96 * _tmp97;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = _tmp110 * (_tmp107 + _tmp108 * _tmp90);
  const Scalar _tmp112 = Scalar(1.0) * _tmp80;
  const Scalar _tmp113 = _tmp58 * _tmp66;
  const Scalar _tmp114 = fh1 * (_tmp109 * _tmp93 - _tmp95 * _tmp98);
  const Scalar _tmp115 = _tmp114 * (-_tmp112 * _tmp113 + _tmp112 * _tmp46);
  const Scalar _tmp116 = _tmp67 * _tmp69 + _tmp68;
  const Scalar _tmp117 = 0;
  const Scalar _tmp118 = _tmp117 * _tmp91;
  const Scalar _tmp119 = _tmp113 * _tmp117;
  const Scalar _tmp120 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp121 = _tmp120 * (_tmp118 - _tmp119 * _tmp83);
  const Scalar _tmp122 =
      std::exp(_tmp100 * _tmp31 + _tmp111 * _tmp31 + _tmp115 * _tmp31 + _tmp121 * _tmp31);
  const Scalar _tmp123 = _tmp115 * _tmp72;
  const Scalar _tmp124 = Scalar(1.0) / (_tmp18);
  const Scalar _tmp125 = _tmp124 * _tmp30;
  const Scalar _tmp126 = _tmp100 * _tmp72;
  const Scalar _tmp127 = _tmp124 * _tmp27;
  const Scalar _tmp128 = _tmp127 * _tmp65;
  const Scalar _tmp129 = _tmp128 * _tmp70;
  const Scalar _tmp130 = _tmp128 * _tmp62;
  const Scalar _tmp131 = _tmp58 * _tmp62;
  const Scalar _tmp132 = std::pow(_tmp64, Scalar(-2));
  const Scalar _tmp133 = _tmp28 / [&]() {
    const Scalar base = _tmp16;
    return base * base * base;
  }();
  const Scalar _tmp134 = _tmp132 * _tmp133;
  const Scalar _tmp135 = _tmp134 * _tmp58;
  const Scalar _tmp136 =
      _tmp129 - _tmp135 * _tmp70 -
      _tmp69 * (_tmp127 * _tmp47 + _tmp130 - _tmp131 * _tmp134 - _tmp133 * _tmp59 * _tmp65);
  const Scalar _tmp137 = _tmp124 * _tmp76;
  const Scalar _tmp138 = _tmp72 * _tmp75;
  const Scalar _tmp139 = _tmp138 * _tmp58;
  const Scalar _tmp140 = std::pow(_tmp29, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp141 = _tmp140 * _tmp26;
  const Scalar _tmp142 = _tmp140 * _tmp15;
  const Scalar _tmp143 = _tmp16 * _tmp27;
  const Scalar _tmp144 = _tmp31 * (-_tmp141 * _tmp18 + _tmp142 * _tmp143 + _tmp74);
  const Scalar _tmp145 = _tmp137 * _tmp58 - _tmp139 + _tmp144 * _tmp58;
  const Scalar _tmp146 = _tmp127 * _tmp132;
  const Scalar _tmp147 = _tmp146 * _tmp58;
  const Scalar _tmp148 = _tmp147 * _tmp78;
  const Scalar _tmp149 = _tmp128 * _tmp78;
  const Scalar _tmp150 = _tmp137 * _tmp46 - _tmp138 * _tmp46 + _tmp144 * _tmp46 - _tmp145 * _tmp66 +
                         _tmp148 * _tmp63 - _tmp149 * _tmp46;
  const Scalar _tmp151 = _tmp82 * _tmp83;
  const Scalar _tmp152 = _tmp147 * _tmp70;
  const Scalar _tmp153 = _tmp131 * _tmp146;
  const Scalar _tmp154 = _tmp127 * _tmp59;
  const Scalar _tmp155 =
      -_tmp129 * _tmp46 + _tmp152 * _tmp63 -
      _tmp69 * (-_tmp127 * _tmp48 - _tmp130 * _tmp46 + _tmp153 * _tmp63 + _tmp154 * _tmp66);
  const Scalar _tmp156 = std::pow(_tmp71, Scalar(-2));
  const Scalar _tmp157 = _tmp155 * _tmp156;
  const Scalar _tmp158 = _tmp157 * _tmp79;
  const Scalar _tmp159 = _tmp71 * _tmp80;
  const Scalar _tmp160 = std::pow(_tmp79, Scalar(-2));
  const Scalar _tmp161 = _tmp160 * _tmp71;
  const Scalar _tmp162 = _tmp161 * _tmp85;
  const Scalar _tmp163 =
      _tmp136 - _tmp150 * _tmp162 + _tmp155 * _tmp86 +
      _tmp159 * (-_tmp135 * _tmp78 - _tmp136 * _tmp84 - _tmp137 + _tmp138 - _tmp144 +
                 _tmp145 * _tmp81 + _tmp149 - _tmp150 * _tmp151 + _tmp158 * _tmp82);
  const Scalar _tmp164 = _tmp53 / _tmp56;
  const Scalar _tmp165 = _tmp146 * _tmp164;
  const Scalar _tmp166 = _tmp46 * _tmp87;
  const Scalar _tmp167 = _tmp63 * _tmp87;
  const Scalar _tmp168 = -_tmp127 * _tmp92 - _tmp127 + _tmp157 * _tmp167 - _tmp163 * _tmp88;
  const Scalar _tmp169 = _tmp31 * _tmp99;
  const Scalar _tmp170 = _tmp111 * _tmp72;
  const Scalar _tmp171 = _tmp101 * _tmp58;
  const Scalar _tmp172 = _tmp46 * _tmp80;
  const Scalar _tmp173 = _tmp127 * _tmp172;
  const Scalar _tmp174 = _tmp112 * _tmp63;
  const Scalar _tmp175 = Scalar(1.0) * _tmp160;
  const Scalar _tmp176 = _tmp150 * _tmp175;
  const Scalar _tmp177 = _tmp114 * _tmp31;
  const Scalar _tmp178 = _tmp106 * _tmp63;
  const Scalar _tmp179 = _tmp104 * _tmp161;
  const Scalar _tmp180 =
      -_tmp101 * _tmp154 * _tmp69 - Scalar(1.0) * _tmp102 * _tmp147 + Scalar(1.0) * _tmp152;
  const Scalar _tmp181 = _tmp103 * _tmp83;
  const Scalar _tmp182 = _tmp105 * _tmp155 - _tmp150 * _tmp179 +
                         _tmp159 * (-_tmp101 * _tmp145 + _tmp103 * _tmp158 + Scalar(1.0) * _tmp148 -
                                    _tmp150 * _tmp181 - _tmp180 * _tmp84) +
                         _tmp180;
  const Scalar _tmp183 = -_tmp107 * _tmp127 + _tmp157 * _tmp178 - _tmp182 * _tmp88;
  const Scalar _tmp184 = _tmp108 * _tmp164;
  const Scalar _tmp185 = _tmp106 * _tmp46;
  const Scalar _tmp186 = _tmp110 * _tmp31;
  const Scalar _tmp187 = _tmp117 * _tmp46;
  const Scalar _tmp188 = _tmp117 * _tmp88;
  const Scalar _tmp189 = _tmp120 * _tmp31;
  const Scalar _tmp190 = _tmp121 * _tmp72;
  const Scalar _tmp191 = _tmp110 * _tmp65;
  const Scalar _tmp192 = _tmp65 * _tmp99;
  const Scalar _tmp193 = _tmp112 * _tmp114;
  const Scalar _tmp194 = _tmp117 * _tmp120;
  const Scalar _tmp195 = _tmp194 * _tmp83;
  const Scalar _tmp196 =
      std::exp(-_tmp108 * _tmp191 - _tmp192 * _tmp89 + _tmp193 * _tmp66 + _tmp195 * _tmp66);
  const Scalar _tmp197 = _tmp157 * _tmp194;
  const Scalar _tmp198 = _tmp101 * _tmp114;
  const Scalar _tmp199 = _tmp114 * _tmp176;
  const Scalar _tmp200 = _tmp194 * _tmp88;
  const Scalar _tmp201 = _tmp195 * _tmp46;
  const Scalar _tmp202 = _tmp108 * _tmp110;
  const Scalar _tmp203 = _tmp83 * _tmp99;
  const Scalar _tmp204 = _tmp110 * _tmp83;
  const Scalar _tmp205 = std::exp(-_tmp106 * _tmp204 - _tmp193 - _tmp195 - _tmp203 * _tmp87);
  const Scalar _tmp206 = _tmp106 * _tmp110;
  const Scalar _tmp207 = _tmp87 * _tmp99;
  const Scalar _tmp208 = _tmp31 * (-_tmp141 * _tmp143 + _tmp142 * _tmp28 - _tmp73);
  const Scalar _tmp209 = -_tmp139 * _tmp50 + _tmp208 * _tmp58;
  const Scalar _tmp210 = _tmp132 * _tmp17;
  const Scalar _tmp211 = _tmp210 * _tmp58;
  const Scalar _tmp212 = _tmp211 * _tmp63;
  const Scalar _tmp213 = _tmp17 * _tmp65;
  const Scalar _tmp214 = _tmp213 * _tmp78;
  const Scalar _tmp215 = _tmp138 * _tmp50;
  const Scalar _tmp216 =
      _tmp208 * _tmp46 - _tmp209 * _tmp66 - _tmp212 * _tmp78 + _tmp214 * _tmp46 - _tmp215 * _tmp46;
  const Scalar _tmp217 = _tmp213 * _tmp70;
  const Scalar _tmp218 = _tmp17 * _tmp47;
  const Scalar _tmp219 = _tmp213 * _tmp62;
  const Scalar _tmp220 =
      -_tmp212 * _tmp70 + _tmp217 * _tmp46 -
      _tmp69 * (-_tmp113 * _tmp218 - _tmp212 * _tmp62 + _tmp218 * _tmp46 + _tmp219 * _tmp46);
  const Scalar _tmp221 = _tmp156 * _tmp220;
  const Scalar _tmp222 = _tmp221 * _tmp79;
  const Scalar _tmp223 = Scalar(1.0) * _tmp211;
  const Scalar _tmp224 = _tmp102 * _tmp223 + _tmp171 * _tmp218 * _tmp69 - _tmp223 * _tmp70;
  const Scalar _tmp225 = _tmp105 * _tmp220 +
                         _tmp159 * (-_tmp101 * _tmp209 + _tmp103 * _tmp222 - _tmp181 * _tmp216 -
                                    _tmp223 * _tmp78 - _tmp224 * _tmp84) -
                         _tmp179 * _tmp216 + _tmp224;
  const Scalar _tmp226 = _tmp107 * _tmp17 + _tmp178 * _tmp221 - _tmp225 * _tmp88;
  const Scalar _tmp227 = _tmp175 * _tmp216;
  const Scalar _tmp228 = _tmp164 * _tmp210;
  const Scalar _tmp229 = _tmp17 * _tmp172;
  const Scalar _tmp230 = _tmp210 * _tmp89;
  const Scalar _tmp231 =
      _tmp152 - _tmp217 - _tmp69 * (_tmp128 * _tmp59 + _tmp153 - _tmp218 - _tmp219);
  const Scalar _tmp232 = _tmp159 * (_tmp148 - _tmp151 * _tmp216 - _tmp208 + _tmp209 * _tmp81 -
                                    _tmp214 + _tmp215 + _tmp222 * _tmp82 - _tmp231 * _tmp84) -
                         _tmp162 * _tmp216 + _tmp220 * _tmp86 + _tmp231;
  const Scalar _tmp233 = _tmp167 * _tmp221 + _tmp17 * _tmp92 + _tmp17 - _tmp232 * _tmp88;
  const Scalar _tmp234 = _tmp114 * _tmp227;
  const Scalar _tmp235 = _tmp194 * _tmp221;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp122 *
      (-_tmp100 * _tmp125 - _tmp111 * _tmp125 - _tmp115 * _tmp125 - _tmp121 * _tmp125 + _tmp123 +
       _tmp126 -
       _tmp169 * (-_tmp157 * _tmp166 + _tmp163 * _tmp91 - _tmp165 * _tmp89 + _tmp168 * _tmp90) +
       _tmp170 -
       _tmp177 * (_tmp113 * _tmp176 + _tmp165 * _tmp174 - _tmp171 * _tmp173 - _tmp176 * _tmp46) -
       _tmp186 * (-_tmp146 * _tmp184 - _tmp157 * _tmp185 + _tmp182 * _tmp91 + _tmp183 * _tmp90) -
       _tmp189 * (-_tmp118 * _tmp127 * _tmp90 + _tmp119 * _tmp157 - _tmp157 * _tmp187 +
                  _tmp165 * _tmp188) +
       _tmp190);
  _res(2, 0) =
      -_tmp196 * (-_tmp128 * _tmp201 + _tmp147 * _tmp193 * _tmp63 + _tmp147 * _tmp200 -
                  _tmp147 * _tmp202 - _tmp147 * _tmp89 * _tmp99 + _tmp168 * _tmp192 -
                  _tmp173 * _tmp198 + _tmp183 * _tmp191 + _tmp197 * _tmp66 + _tmp199 * _tmp66);
  _res(3, 0) = -_tmp205 * (-_tmp157 * _tmp206 - _tmp157 * _tmp207 + _tmp163 * _tmp203 +
                           _tmp182 * _tmp204 - _tmp197 - _tmp199);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp122 *
      (_tmp123 * _tmp50 + _tmp126 * _tmp50 -
       _tmp169 * (_tmp164 * _tmp230 - _tmp166 * _tmp221 + _tmp232 * _tmp91 + _tmp233 * _tmp90) +
       _tmp170 * _tmp50 -
       _tmp177 * (_tmp113 * _tmp227 + _tmp171 * _tmp229 - _tmp174 * _tmp228 - _tmp227 * _tmp46) -
       _tmp186 * (_tmp184 * _tmp210 - _tmp185 * _tmp221 + _tmp225 * _tmp91 + _tmp226 * _tmp90) -
       _tmp189 * (_tmp118 * _tmp213 * _tmp58 + _tmp119 * _tmp221 - _tmp187 * _tmp221 -
                  _tmp188 * _tmp228) +
       _tmp190 * _tmp50);
  _res(2, 1) =
      -_tmp196 * (_tmp191 * _tmp226 + _tmp192 * _tmp233 - _tmp193 * _tmp212 + _tmp198 * _tmp229 -
                  _tmp200 * _tmp211 + _tmp201 * _tmp213 + _tmp202 * _tmp211 +
                  _tmp230 * _tmp58 * _tmp99 + _tmp234 * _tmp66 + _tmp235 * _tmp66);
  _res(3, 1) = -_tmp205 * (_tmp203 * _tmp232 + _tmp204 * _tmp225 - _tmp206 * _tmp221 -
                           _tmp207 * _tmp221 - _tmp234 - _tmp235);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym