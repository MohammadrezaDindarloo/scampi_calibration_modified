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
 * Symbolic function: IK_residual_func_cost1_wrt_pd_Nl9
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPdNl9(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1164

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (362)
  const Scalar _tmp0 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp1 * _tmp9;
  const Scalar _tmp11 = -_tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp1 * _tmp6;
  const Scalar _tmp14 = _tmp3 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = Scalar(1.0) * _tmp17;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = _tmp12 - _tmp15;
  const Scalar _tmp21 = _tmp20 + _tmp5;
  const Scalar _tmp22 = Scalar(1.0) / (_tmp19 + _tmp21);
  const Scalar _tmp23 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = _tmp1 * _tmp7;
  const Scalar _tmp27 = _tmp6 * _tmp9;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp31 = _tmp29 + _tmp30;
  const Scalar _tmp32 = _tmp25 + _tmp31;
  const Scalar _tmp33 = _tmp24 + _tmp31;
  const Scalar _tmp34 = Scalar(1.0) * _tmp33;
  const Scalar _tmp35 = _tmp22 * (-_tmp32 + _tmp34);
  const Scalar _tmp36 = _tmp18 * _tmp35 + _tmp34;
  const Scalar _tmp37 = 0;
  const Scalar _tmp38 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp39 = _tmp38 - p_d(1, 0);
  const Scalar _tmp40 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp41 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp23 + Scalar(-0.010999999999999999);
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp26 - Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp43 = _tmp41 - _tmp42;
  const Scalar _tmp44 = _tmp40 + _tmp43;
  const Scalar _tmp45 = _tmp32 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 - p_d(0, 0);
  const Scalar _tmp47 = std::pow(_tmp46, Scalar(2));
  const Scalar _tmp48 = std::pow(_tmp39, Scalar(2));
  const Scalar _tmp49 = _tmp47 + _tmp48;
  const Scalar _tmp50 = std::pow(_tmp49, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp44 * _tmp50;
  const Scalar _tmp52 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 - p_c(0, 0);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp55 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_c(1, 0);
  const Scalar _tmp57 = _tmp54 * _tmp56;
  const Scalar _tmp58 = _tmp41 + _tmp42;
  const Scalar _tmp59 = _tmp40 + _tmp58;
  const Scalar _tmp60 = _tmp50 * _tmp59;
  const Scalar _tmp61 = _tmp46 * _tmp60;
  const Scalar _tmp62 = _tmp39 * _tmp51 - _tmp57 * _tmp61;
  const Scalar _tmp63 = _tmp39 * _tmp50;
  const Scalar _tmp64 = _tmp50 * _tmp57;
  const Scalar _tmp65 = _tmp46 * _tmp64 - _tmp63;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = -_tmp5;
  const Scalar _tmp68 = _tmp20 + _tmp67;
  const Scalar _tmp69 = _tmp68 + position_vector(1, 0);
  const Scalar _tmp70 = _tmp69 - p_a(1, 0);
  const Scalar _tmp71 = _tmp29 - _tmp30;
  const Scalar _tmp72 = _tmp25 + _tmp71;
  const Scalar _tmp73 = _tmp72 + position_vector(0, 0);
  const Scalar _tmp74 = _tmp73 - p_a(0, 0);
  const Scalar _tmp75 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp74, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp70 * _tmp75;
  const Scalar _tmp77 = _tmp74 * _tmp75;
  const Scalar _tmp78 = _tmp57 * _tmp77 - _tmp76;
  const Scalar _tmp79 = _tmp66 * _tmp78;
  const Scalar _tmp80 = _tmp59 * _tmp77;
  const Scalar _tmp81 = -_tmp40;
  const Scalar _tmp82 = _tmp43 + _tmp81;
  const Scalar _tmp83 = -_tmp57 * _tmp80 - _tmp62 * _tmp79 + _tmp76 * _tmp82;
  const Scalar _tmp84 = -_tmp46 * _tmp51 + _tmp61;
  const Scalar _tmp85 = -_tmp35 * _tmp83 - _tmp77 * _tmp82 - _tmp79 * _tmp84 + _tmp80;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = _tmp83 * _tmp86;
  const Scalar _tmp88 = _tmp19 + _tmp68;
  const Scalar _tmp89 = _tmp35 * _tmp88;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp34 - _tmp72 - _tmp89);
  const Scalar _tmp91 = _tmp36 * _tmp90;
  const Scalar _tmp92 = _tmp19 - _tmp37 * _tmp87 - _tmp88 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) * _tmp22;
  const Scalar _tmp94 = Scalar(1.0) * _tmp90;
  const Scalar _tmp95 = _tmp22 * _tmp88;
  const Scalar _tmp96 = _tmp24 + _tmp71;
  const Scalar _tmp97 = _tmp96 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp98 = _tmp16 + _tmp67;
  const Scalar _tmp99 = _tmp98 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp100 = std::pow(Scalar(std::pow(_tmp97, Scalar(2)) + std::pow(_tmp99, Scalar(2))),
                                  Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp101 = _tmp100 * _tmp97;
  const Scalar _tmp102 = fh1 * (_tmp58 + _tmp81);
  const Scalar _tmp103 = _tmp101 * _tmp102 + Scalar(40.024799999999999) * _tmp28 + _tmp96 * fv1;
  const Scalar _tmp104 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))));
  const Scalar _tmp105 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp106 = _tmp104 * _tmp54;
  const Scalar _tmp107 = _tmp106 * (-_tmp105 * _tmp17 * _tmp53 + _tmp105 * _tmp33 * _tmp56);
  const Scalar _tmp108 = _tmp107 * _tmp50;
  const Scalar _tmp109 = _tmp21 * _tmp50;
  const Scalar _tmp110 = _tmp108 * _tmp46 + _tmp109 * _tmp46 - _tmp32 * _tmp63;
  const Scalar _tmp111 = _tmp107 * _tmp77 - _tmp110 * _tmp79 + _tmp68 * _tmp77 - _tmp72 * _tmp76;
  const Scalar _tmp112 = Scalar(1.0) / (_tmp111);
  const Scalar _tmp113 = _tmp57 * _tmp66;
  const Scalar _tmp114 = _tmp57 * _tmp59;
  const Scalar _tmp115 = _tmp113 * _tmp62 + _tmp114;
  const Scalar _tmp116 = _tmp113 * _tmp84 - _tmp115 * _tmp35 - _tmp59;
  const Scalar _tmp117 = _tmp111 * _tmp86;
  const Scalar _tmp118 = -_tmp107 + _tmp110 * _tmp113 - _tmp116 * _tmp117;
  const Scalar _tmp119 = _tmp112 * _tmp118;
  const Scalar _tmp120 = _tmp119 * _tmp85;
  const Scalar _tmp121 = _tmp116 + _tmp120;
  const Scalar _tmp122 = _tmp121 * _tmp86;
  const Scalar _tmp123 = _tmp88 * _tmp90;
  const Scalar _tmp124 = _tmp115 + _tmp120 * _tmp123 - _tmp122 * _tmp83;
  const Scalar _tmp125 = _tmp101 * fh1;
  const Scalar _tmp126 = Scalar(1.0) * _tmp125;
  const Scalar _tmp127 = _tmp112 * _tmp85;
  const Scalar _tmp128 = _tmp127 * _tmp94;
  const Scalar _tmp129 = Scalar(1.0) * _tmp112;
  const Scalar _tmp130 = _tmp128 * _tmp88 - _tmp129 * _tmp83;
  const Scalar _tmp131 = _tmp100 * _tmp99;
  const Scalar _tmp132 = fh1 * (-_tmp101 * _tmp98 + _tmp131 * _tmp96);
  const Scalar _tmp133 = Scalar(1.0) * _tmp132;
  const Scalar _tmp134 = Scalar(1.0) * _tmp66;
  const Scalar _tmp135 = _tmp134 * _tmp62;
  const Scalar _tmp136 = -_tmp134 * _tmp84 + _tmp135 * _tmp35;
  const Scalar _tmp137 = -_tmp110 * _tmp134 - _tmp117 * _tmp136;
  const Scalar _tmp138 = _tmp112 * _tmp137;
  const Scalar _tmp139 = _tmp138 * _tmp85;
  const Scalar _tmp140 = _tmp136 + _tmp139;
  const Scalar _tmp141 = _tmp123 * _tmp139 - _tmp135 - _tmp140 * _tmp87;
  const Scalar _tmp142 = _tmp131 * fh1;
  const Scalar _tmp143 = Scalar(1.0) * _tmp142;
  const Scalar _tmp144 = -_tmp102 * _tmp131 - Scalar(40.024799999999999) * _tmp11 - _tmp98 * fv1;
  const Scalar _tmp145 = _tmp89 * _tmp94 + Scalar(1.0);
  const Scalar _tmp146 = _tmp35 * _tmp94;
  const Scalar _tmp147 = Scalar(1.0) * _tmp0 * (-_tmp36 * _tmp94 - _tmp92 * _tmp93 + Scalar(1.0)) +
                         Scalar(1.0) * _tmp103 * (_tmp94 * _tmp95 - _tmp94) +
                         _tmp126 * (_tmp120 * _tmp94 - _tmp124 * _tmp93) +
                         _tmp133 * (_tmp128 - _tmp130 * _tmp93) +
                         _tmp143 * (_tmp139 * _tmp94 - _tmp141 * _tmp93) +
                         Scalar(1.0) * _tmp144 * (-_tmp145 * _tmp93 + _tmp146);
  const Scalar _tmp148 = _tmp78 * _tmp86;
  const Scalar _tmp149 = -_tmp140 * _tmp148 + Scalar(1.0);
  const Scalar _tmp150 = _tmp50 * _tmp66;
  const Scalar _tmp151 = _tmp149 * _tmp150;
  const Scalar _tmp152 = _tmp140 * _tmp86;
  const Scalar _tmp153 = _tmp106 * _tmp142;
  const Scalar _tmp154 = -_tmp122 * _tmp78 - _tmp57;
  const Scalar _tmp155 = _tmp150 * _tmp154;
  const Scalar _tmp156 = _tmp106 * _tmp125;
  const Scalar _tmp157 = _tmp37 * _tmp86;
  const Scalar _tmp158 = _tmp46 * _tmp50;
  const Scalar _tmp159 = _tmp158 * _tmp79;
  const Scalar _tmp160 = _tmp0 * _tmp106;
  const Scalar _tmp161 = _tmp106 * _tmp132;
  const Scalar _tmp162 = -_tmp153 * (_tmp151 * _tmp46 + _tmp152 * _tmp77) -
                         _tmp156 * (_tmp122 * _tmp77 + _tmp155 * _tmp46 + Scalar(1.0)) -
                         _tmp160 * (-_tmp157 * _tmp159 + _tmp157 * _tmp77) -
                         _tmp161 * (-_tmp129 * _tmp159 + _tmp129 * _tmp77);
  const Scalar _tmp163 = Scalar(1.0) / (_tmp162);
  const Scalar _tmp164 = std::asinh(_tmp147 * _tmp163);
  const Scalar _tmp165 = Scalar(1.0) * _tmp164;
  const Scalar _tmp166 = Scalar(1.0) * std::sinh(_tmp165);
  const Scalar _tmp167 = std::pow(_tmp162, Scalar(-2));
  const Scalar _tmp168 =
      std::pow(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp167 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp169 = std::pow(_tmp49, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp170 = _tmp169 * _tmp47;
  const Scalar _tmp171 = _tmp169 * _tmp39 * _tmp46;
  const Scalar _tmp172 =
      _tmp107 * _tmp170 - _tmp108 - _tmp109 + _tmp170 * _tmp21 - _tmp171 * _tmp32;
  const Scalar _tmp173 = std::pow(_tmp65, Scalar(-2));
  const Scalar _tmp174 = _tmp173 * (_tmp170 * _tmp57 - _tmp171 - _tmp64);
  const Scalar _tmp175 = _tmp110 * _tmp174;
  const Scalar _tmp176 = -_tmp172 * _tmp79 + _tmp175 * _tmp78;
  const Scalar _tmp177 = std::pow(_tmp111, Scalar(-2));
  const Scalar _tmp178 = _tmp176 * _tmp177;
  const Scalar _tmp179 = _tmp118 * _tmp85;
  const Scalar _tmp180 = _tmp178 * _tmp179;
  const Scalar _tmp181 = _tmp62 * _tmp78;
  const Scalar _tmp182 = _tmp170 * _tmp59;
  const Scalar _tmp183 = _tmp171 * _tmp44;
  const Scalar _tmp184 = -_tmp182 * _tmp57 + _tmp183 + _tmp57 * _tmp60;
  const Scalar _tmp185 = _tmp174 * _tmp181 - _tmp184 * _tmp79;
  const Scalar _tmp186 = -_tmp170 * _tmp44 + _tmp182 + _tmp51 - _tmp60;
  const Scalar _tmp187 = _tmp174 * _tmp84;
  const Scalar _tmp188 = -_tmp185 * _tmp35 - _tmp186 * _tmp79 + _tmp187 * _tmp78;
  const Scalar _tmp189 = _tmp119 * _tmp188;
  const Scalar _tmp190 = std::pow(_tmp85, Scalar(-2));
  const Scalar _tmp191 = _tmp188 * _tmp190;
  const Scalar _tmp192 = _tmp191 * _tmp83;
  const Scalar _tmp193 = _tmp111 * _tmp116;
  const Scalar _tmp194 = _tmp57 * _tmp62;
  const Scalar _tmp195 = _tmp113 * _tmp184 - _tmp174 * _tmp194;
  const Scalar _tmp196 = _tmp113 * _tmp186 - _tmp187 * _tmp57 - _tmp195 * _tmp35;
  const Scalar _tmp197 = _tmp176 * _tmp86;
  const Scalar _tmp198 = _tmp127 * (_tmp113 * _tmp172 - _tmp116 * _tmp197 - _tmp117 * _tmp196 -
                                    _tmp175 * _tmp57 + _tmp191 * _tmp193);
  const Scalar _tmp199 = _tmp86 * (-_tmp180 + _tmp189 + _tmp196 + _tmp198);
  const Scalar _tmp200 = _tmp121 * _tmp192 - _tmp122 * _tmp185 - _tmp123 * _tmp180 +
                         _tmp123 * _tmp189 + _tmp123 * _tmp198 + _tmp195 - _tmp199 * _tmp83;
  const Scalar _tmp201 = -_tmp157 * _tmp185 + _tmp192 * _tmp37;
  const Scalar _tmp202 = _tmp0 * _tmp93;
  const Scalar _tmp203 = _tmp85 * _tmp94;
  const Scalar _tmp204 = _tmp178 * _tmp203;
  const Scalar _tmp205 = _tmp112 * _tmp94;
  const Scalar _tmp206 = _tmp188 * _tmp205;
  const Scalar _tmp207 = Scalar(1.0) * _tmp83;
  const Scalar _tmp208 =
      -_tmp129 * _tmp185 + _tmp178 * _tmp207 - _tmp204 * _tmp88 + _tmp206 * _tmp88;
  const Scalar _tmp209 = Scalar(1.0) * _tmp62;
  const Scalar _tmp210 = _tmp174 * _tmp209;
  const Scalar _tmp211 = _tmp134 * _tmp184;
  const Scalar _tmp212 =
      -_tmp134 * _tmp186 + Scalar(1.0) * _tmp187 - _tmp210 * _tmp35 + _tmp211 * _tmp35;
  const Scalar _tmp213 = _tmp111 * _tmp136;
  const Scalar _tmp214 = _tmp127 * (-_tmp117 * _tmp212 - _tmp134 * _tmp172 - _tmp136 * _tmp197 +
                                    Scalar(1.0) * _tmp175 + _tmp191 * _tmp213);
  const Scalar _tmp215 = _tmp137 * _tmp85;
  const Scalar _tmp216 = _tmp178 * _tmp215;
  const Scalar _tmp217 = _tmp138 * _tmp188;
  const Scalar _tmp218 = _tmp212 + _tmp214 - _tmp216 + _tmp217;
  const Scalar _tmp219 = _tmp123 * _tmp214 - _tmp123 * _tmp216 + _tmp123 * _tmp217 +
                         _tmp140 * _tmp192 - _tmp152 * _tmp185 + _tmp210 - _tmp211 -
                         _tmp218 * _tmp87;
  const Scalar _tmp220 = _tmp174 * _tmp78;
  const Scalar _tmp221 = _tmp157 * _tmp158;
  const Scalar _tmp222 = _tmp191 * _tmp77;
  const Scalar _tmp223 = _tmp50 * _tmp79;
  const Scalar _tmp224 = _tmp170 * _tmp79;
  const Scalar _tmp225 = _tmp159 * _tmp37;
  const Scalar _tmp226 = _tmp170 * _tmp66;
  const Scalar _tmp227 = _tmp149 * _tmp174;
  const Scalar _tmp228 = _tmp77 * _tmp86;
  const Scalar _tmp229 = _tmp191 * _tmp78;
  const Scalar _tmp230 = _tmp140 * _tmp229 - _tmp148 * _tmp218;
  const Scalar _tmp231 = _tmp150 * _tmp46;
  const Scalar _tmp232 = Scalar(1.0) * _tmp77;
  const Scalar _tmp233 = _tmp129 * _tmp158;
  const Scalar _tmp234 = _tmp134 * _tmp78;
  const Scalar _tmp235 = _tmp178 * _tmp234;
  const Scalar _tmp236 = _tmp121 * _tmp229 - _tmp199 * _tmp78;
  const Scalar _tmp237 = _tmp154 * _tmp174;
  const Scalar _tmp238 = -_tmp153 * (-_tmp140 * _tmp222 + _tmp149 * _tmp226 - _tmp151 -
                                     _tmp158 * _tmp227 + _tmp218 * _tmp228 + _tmp230 * _tmp231) -
                         _tmp156 * (-_tmp121 * _tmp222 + _tmp154 * _tmp226 - _tmp155 -
                                    _tmp158 * _tmp237 + _tmp199 * _tmp77 + _tmp231 * _tmp236) -
                         _tmp160 * (_tmp157 * _tmp223 - _tmp157 * _tmp224 + _tmp191 * _tmp225 +
                                    _tmp220 * _tmp221 - _tmp222 * _tmp37) -
                         _tmp161 * (_tmp129 * _tmp223 - _tmp129 * _tmp224 + _tmp158 * _tmp235 -
                                    _tmp178 * _tmp232 + _tmp220 * _tmp233);
  const Scalar _tmp239 = _tmp147 * _tmp167;
  const Scalar _tmp240 =
      _tmp168 *
      (_tmp163 *
           (_tmp126 * (-_tmp180 * _tmp94 + _tmp189 * _tmp94 + _tmp198 * _tmp94 - _tmp200 * _tmp93) +
            _tmp133 * (-_tmp204 + _tmp206 - _tmp208 * _tmp93) +
            _tmp143 * (_tmp214 * _tmp94 - _tmp216 * _tmp94 + _tmp217 * _tmp94 - _tmp219 * _tmp93) -
            _tmp201 * _tmp202) -
       _tmp238 * _tmp239);
  const Scalar _tmp241 = Scalar(1.4083112389913199) * _tmp164;
  const Scalar _tmp242 = Scalar(1.4083112389913199) * _tmp162;
  const Scalar _tmp243 = Scalar(0.71007031138673404) * _tmp163;
  const Scalar _tmp244 =
      -_tmp162 * _tmp241 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp245 = Scalar(0.71007031138673404) * _tmp167;
  const Scalar _tmp246 = _tmp238 * _tmp245;
  const Scalar _tmp247 = _tmp243 * _tmp244;
  const Scalar _tmp248 = std::sinh(_tmp247);
  const Scalar _tmp249 = Scalar(1.4083112389913199) * _tmp243 * p_c(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp165) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp247);
  const Scalar _tmp250 = _tmp142 * _tmp66;
  const Scalar _tmp251 = _tmp129 * _tmp132;
  const Scalar _tmp252 = _tmp0 * _tmp157;
  const Scalar _tmp253 = _tmp0 * _tmp37;
  const Scalar _tmp254 = _tmp191 * _tmp253;
  const Scalar _tmp255 = _tmp125 * _tmp66;
  const Scalar _tmp256 = -_tmp125 * _tmp237 + _tmp132 * _tmp235 - _tmp142 * _tmp227 +
                         _tmp220 * _tmp251 + _tmp220 * _tmp252 + _tmp230 * _tmp250 +
                         _tmp236 * _tmp255 + _tmp254 * _tmp79;
  const Scalar _tmp257 = _tmp125 * _tmp22;
  const Scalar _tmp258 = _tmp103 * _tmp94;
  const Scalar _tmp259 = _tmp0 * _tmp22;
  const Scalar _tmp260 = _tmp142 * _tmp22;
  const Scalar _tmp261 = _tmp132 * _tmp22;
  const Scalar _tmp262 = _tmp124 * _tmp257 + _tmp130 * _tmp261 + _tmp141 * _tmp260 +
                         _tmp144 * _tmp145 * _tmp22 - _tmp258 * _tmp95 + _tmp259 * _tmp92;
  const Scalar _tmp263 =
      _tmp149 * _tmp250 + _tmp154 * _tmp255 - _tmp251 * _tmp79 - _tmp252 * _tmp79;
  const Scalar _tmp264 = std::pow(_tmp263, Scalar(-2));
  const Scalar _tmp265 = _tmp262 * _tmp264;
  const Scalar _tmp266 = Scalar(1.0) / (_tmp263);
  const Scalar _tmp267 =
      std::pow(Scalar(std::pow(_tmp262, Scalar(2)) * _tmp264 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp268 =
      _tmp267 * (-_tmp256 * _tmp265 + _tmp266 * (_tmp200 * _tmp257 + _tmp201 * _tmp259 +
                                                 _tmp208 * _tmp261 + _tmp219 * _tmp260));
  const Scalar _tmp269 = std::asinh(_tmp262 * _tmp266);
  const Scalar _tmp270 = Scalar(1.0) * _tmp269;
  const Scalar _tmp271 = Scalar(1.0) * std::sinh(_tmp270);
  const Scalar _tmp272 = -_tmp38 + p_d(1, 0);
  const Scalar _tmp273 = -_tmp45 + p_d(0, 0);
  const Scalar _tmp274 =
      std::sqrt(Scalar(std::pow(_tmp272, Scalar(2)) + std::pow(_tmp273, Scalar(2))));
  const Scalar _tmp275 = Scalar(1.4083112389913199) * _tmp269;
  const Scalar _tmp276 = -_tmp263 * _tmp275 - _tmp274;
  const Scalar _tmp277 = Scalar(0.71007031138673404) * _tmp266;
  const Scalar _tmp278 = _tmp276 * _tmp277;
  const Scalar _tmp279 = std::sinh(_tmp278);
  const Scalar _tmp280 = Scalar(1.4083112389913199) * _tmp263;
  const Scalar _tmp281 = Scalar(1.0) / (_tmp274);
  const Scalar _tmp282 = Scalar(0.71007031138673404) * _tmp264;
  const Scalar _tmp283 = _tmp276 * _tmp282;
  const Scalar _tmp284 = _tmp282 * p_d(2, 0);
  const Scalar _tmp285 = Scalar(1.4083112389913199) * _tmp277 * p_d(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp270) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp278);
  const Scalar _tmp286 = _tmp121 * _tmp125;
  const Scalar _tmp287 = _tmp140 * _tmp142;
  const Scalar _tmp288 = _tmp125 * _tmp199 - _tmp133 * _tmp178 + _tmp142 * _tmp218 * _tmp86 -
                         _tmp191 * _tmp286 - _tmp191 * _tmp287 - _tmp254;
  const Scalar _tmp289 = _tmp122 * _tmp125 + _tmp142 * _tmp152 + _tmp251 + _tmp252;
  const Scalar _tmp290 = std::pow(_tmp289, Scalar(-2));
  const Scalar _tmp291 = Scalar(0.71007031138673404) * _tmp290;
  const Scalar _tmp292 = _tmp291 * p_a(2, 0);
  const Scalar _tmp293 = _tmp125 * _tmp90;
  const Scalar _tmp294 = _tmp142 * _tmp90;
  const Scalar _tmp295 = _tmp0 * _tmp91 - _tmp120 * _tmp293 - _tmp128 * _tmp132 -
                         _tmp139 * _tmp294 - _tmp144 * _tmp146 + _tmp258;
  const Scalar _tmp296 = Scalar(1.0) / (_tmp289);
  const Scalar _tmp297 = std::asinh(_tmp295 * _tmp296);
  const Scalar _tmp298 = Scalar(1.4083112389913199) * _tmp297;
  const Scalar _tmp299 = Scalar(1.4083112389913199) * _tmp289;
  const Scalar _tmp300 =
      std::pow(Scalar(_tmp290 * std::pow(_tmp295, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp301 = _tmp290 * _tmp295;
  const Scalar _tmp302 =
      _tmp300 *
      (-_tmp288 * _tmp301 +
       _tmp296 * (_tmp132 * _tmp204 - _tmp132 * _tmp206 + _tmp180 * _tmp293 - _tmp189 * _tmp293 -
                  _tmp198 * _tmp293 - _tmp214 * _tmp294 + _tmp216 * _tmp294 - _tmp217 * _tmp294));
  const Scalar _tmp303 = Scalar(0.71007031138673404) * _tmp296;
  const Scalar _tmp304 =
      -_tmp289 * _tmp298 - std::sqrt(Scalar(std::pow(Scalar(-_tmp69 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp73 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp305 = _tmp291 * _tmp304;
  const Scalar _tmp306 = _tmp303 * _tmp304;
  const Scalar _tmp307 = std::sinh(_tmp306);
  const Scalar _tmp308 = Scalar(1.0) * _tmp297;
  const Scalar _tmp309 = Scalar(1.0) * std::sinh(_tmp308);
  const Scalar _tmp310 = Scalar(1.4083112389913199) * _tmp303 * p_a(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp306) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp308);
  const Scalar _tmp311 = _tmp169 * _tmp48;
  const Scalar _tmp312 = _tmp107 * _tmp171 + _tmp171 * _tmp21 - _tmp311 * _tmp32 + _tmp32 * _tmp50;
  const Scalar _tmp313 = _tmp173 * (_tmp171 * _tmp57 - _tmp311 + _tmp50);
  const Scalar _tmp314 = _tmp313 * _tmp78;
  const Scalar _tmp315 = _tmp110 * _tmp314 - _tmp312 * _tmp79;
  const Scalar _tmp316 = _tmp177 * _tmp315;
  const Scalar _tmp317 = _tmp171 * _tmp79;
  const Scalar _tmp318 = _tmp234 * _tmp316;
  const Scalar _tmp319 = _tmp158 * _tmp313;
  const Scalar _tmp320 = _tmp171 * _tmp59 - _tmp183;
  const Scalar _tmp321 = -_tmp114 * _tmp171 + _tmp311 * _tmp44 - _tmp51;
  const Scalar _tmp322 = _tmp181 * _tmp313 - _tmp321 * _tmp79;
  const Scalar _tmp323 = _tmp314 * _tmp84 - _tmp320 * _tmp79 - _tmp322 * _tmp35;
  const Scalar _tmp324 = _tmp119 * _tmp323;
  const Scalar _tmp325 = _tmp179 * _tmp316;
  const Scalar _tmp326 = _tmp313 * _tmp57;
  const Scalar _tmp327 = _tmp113 * _tmp321 - _tmp194 * _tmp313;
  const Scalar _tmp328 = _tmp113 * _tmp320 - _tmp326 * _tmp84 - _tmp327 * _tmp35;
  const Scalar _tmp329 = _tmp315 * _tmp86;
  const Scalar _tmp330 = _tmp190 * _tmp323;
  const Scalar _tmp331 = _tmp127 * (-_tmp110 * _tmp326 + _tmp113 * _tmp312 - _tmp116 * _tmp329 -
                                    _tmp117 * _tmp328 + _tmp193 * _tmp330);
  const Scalar _tmp332 = _tmp324 - _tmp325 + _tmp328 + _tmp331;
  const Scalar _tmp333 = _tmp330 * _tmp77;
  const Scalar _tmp334 = _tmp171 * _tmp66;
  const Scalar _tmp335 = _tmp330 * _tmp78;
  const Scalar _tmp336 = _tmp121 * _tmp335 - _tmp148 * _tmp332;
  const Scalar _tmp337 = _tmp215 * _tmp316;
  const Scalar _tmp338 = _tmp138 * _tmp323;
  const Scalar _tmp339 = _tmp209 * _tmp313;
  const Scalar _tmp340 = _tmp134 * _tmp321;
  const Scalar _tmp341 = Scalar(1.0) * _tmp313;
  const Scalar _tmp342 =
      -_tmp134 * _tmp320 - _tmp339 * _tmp35 + _tmp340 * _tmp35 + _tmp341 * _tmp84;
  const Scalar _tmp343 = _tmp127 * (_tmp110 * _tmp341 - _tmp117 * _tmp342 - _tmp134 * _tmp312 -
                                    _tmp136 * _tmp329 + _tmp213 * _tmp330);
  const Scalar _tmp344 = _tmp86 * (-_tmp337 + _tmp338 + _tmp342 + _tmp343);
  const Scalar _tmp345 = _tmp140 * _tmp335 - _tmp344 * _tmp78;
  const Scalar _tmp346 =
      -_tmp153 * (-_tmp140 * _tmp333 - _tmp149 * _tmp319 + _tmp149 * _tmp334 + _tmp231 * _tmp345 +
                  _tmp344 * _tmp77) -
      _tmp156 * (-_tmp121 * _tmp333 - _tmp154 * _tmp319 + _tmp154 * _tmp334 + _tmp228 * _tmp332 +
                 _tmp231 * _tmp336) -
      _tmp160 * (-_tmp157 * _tmp317 + _tmp221 * _tmp314 + _tmp225 * _tmp330 - _tmp333 * _tmp37) -
      _tmp161 * (-_tmp129 * _tmp317 + _tmp158 * _tmp318 - _tmp232 * _tmp316 + _tmp233 * _tmp314);
  const Scalar _tmp347 = _tmp245 * _tmp346;
  const Scalar _tmp348 = _tmp330 * _tmp83;
  const Scalar _tmp349 = _tmp121 * _tmp348 - _tmp122 * _tmp322 + _tmp123 * _tmp324 -
                         _tmp123 * _tmp325 + _tmp123 * _tmp331 + _tmp327 - _tmp332 * _tmp87;
  const Scalar _tmp350 = _tmp203 * _tmp316;
  const Scalar _tmp351 = _tmp205 * _tmp323;
  const Scalar _tmp352 =
      -_tmp129 * _tmp322 + _tmp207 * _tmp316 - _tmp350 * _tmp88 + _tmp351 * _tmp88;
  const Scalar _tmp353 = _tmp322 * _tmp86;
  const Scalar _tmp354 = -_tmp123 * _tmp337 + _tmp123 * _tmp338 + _tmp123 * _tmp343 +
                         _tmp140 * _tmp348 - _tmp140 * _tmp353 + _tmp339 - _tmp340 -
                         _tmp344 * _tmp83;
  const Scalar _tmp355 = _tmp348 * _tmp37 - _tmp353 * _tmp37;
  const Scalar _tmp356 =
      _tmp168 *
      (_tmp163 *
           (_tmp126 * (_tmp324 * _tmp94 - _tmp325 * _tmp94 + _tmp331 * _tmp94 - _tmp349 * _tmp93) +
            _tmp133 * (-_tmp350 + _tmp351 - _tmp352 * _tmp93) +
            _tmp143 * (-_tmp337 * _tmp94 + _tmp338 * _tmp94 + _tmp343 * _tmp94 - _tmp354 * _tmp93) -
            _tmp202 * _tmp355) -
       _tmp239 * _tmp346);
  const Scalar _tmp357 = _tmp253 * _tmp330;
  const Scalar _tmp358 = -_tmp125 * _tmp154 * _tmp313 + _tmp132 * _tmp318 -
                         _tmp142 * _tmp149 * _tmp313 + _tmp250 * _tmp345 + _tmp251 * _tmp314 +
                         _tmp252 * _tmp314 + _tmp255 * _tmp336 + _tmp357 * _tmp79;
  const Scalar _tmp359 =
      _tmp267 * (-_tmp265 * _tmp358 + _tmp266 * (_tmp257 * _tmp349 + _tmp259 * _tmp355 +
                                                 _tmp260 * _tmp354 + _tmp261 * _tmp352));
  const Scalar _tmp360 = _tmp125 * _tmp332 * _tmp86 - _tmp133 * _tmp316 + _tmp142 * _tmp344 -
                         _tmp286 * _tmp330 - _tmp287 * _tmp330 - _tmp357;
  const Scalar _tmp361 =
      _tmp300 *
      (_tmp296 * (_tmp132 * _tmp350 - _tmp132 * _tmp351 - _tmp293 * _tmp324 + _tmp293 * _tmp325 -
                  _tmp293 * _tmp331 + _tmp294 * _tmp337 - _tmp294 * _tmp338 - _tmp294 * _tmp343) -
       _tmp301 * _tmp360);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp238 * _tmp249 -
      _tmp242 *
          (_tmp166 * _tmp240 - _tmp246 * p_c(2, 0) -
           _tmp248 * (_tmp243 * (-_tmp238 * _tmp241 - _tmp240 * _tmp242) - _tmp244 * _tmp246));
  _res(2, 0) =
      -_tmp256 * _tmp285 -
      _tmp280 * (-_tmp256 * _tmp284 + _tmp268 * _tmp271 -
                 _tmp279 * (-_tmp256 * _tmp283 + _tmp277 * (-_tmp256 * _tmp275 - _tmp268 * _tmp280 -
                                                            _tmp273 * _tmp281)));
  _res(3, 0) =
      -_tmp288 * _tmp310 -
      _tmp299 *
          (-_tmp288 * _tmp292 + _tmp302 * _tmp309 -
           _tmp307 * (-_tmp288 * _tmp305 + _tmp303 * (-_tmp288 * _tmp298 - _tmp299 * _tmp302)));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp242 *
          (_tmp166 * _tmp356 -
           _tmp248 * (_tmp243 * (-_tmp241 * _tmp346 - _tmp242 * _tmp356) - _tmp244 * _tmp347) -
           _tmp347 * p_c(2, 0)) -
      _tmp249 * _tmp346;
  _res(2, 1) =
      -_tmp280 *
          (_tmp271 * _tmp359 -
           _tmp279 * (_tmp277 * (-_tmp272 * _tmp281 - _tmp275 * _tmp358 - _tmp280 * _tmp359) -
                      _tmp283 * _tmp358) -
           _tmp284 * _tmp358) -
      _tmp285 * _tmp358;
  _res(3, 1) =
      -_tmp299 *
          (-_tmp292 * _tmp360 -
           _tmp307 * (_tmp303 * (-_tmp298 * _tmp360 - _tmp299 * _tmp361) - _tmp305 * _tmp360) +
           _tmp309 * _tmp361) -
      _tmp310 * _tmp360;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = Scalar(-1.0);
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
