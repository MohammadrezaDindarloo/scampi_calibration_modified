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
 * Symbolic function: FK_residual_func_cost5_wrt_DeltaRot
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     uwb_measure: Matrix41
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost5WrtDeltarot(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 4, 1>& uwb_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const Eigen::Matrix<Scalar, 3, 1>& position_vector,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 518

  // Unused inputs
  (void)fh1;
  (void)fv1;
  (void)uwb_measure;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (228)
  const Scalar _tmp0 = _DeltaRot[1] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[0];
  const Scalar _tmp2 = _DeltaRot[2] * _Rot_init[2];
  const Scalar _tmp3 = _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp4 = -Scalar(1) / Scalar(2) * _tmp0 - Scalar(1) / Scalar(2) * _tmp1 -
                       Scalar(1) / Scalar(2) * _tmp2 + (Scalar(1) / Scalar(2)) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[1] * _Rot_init[2];
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3];
  const Scalar _tmp7 = _DeltaRot[2] * _Rot_init[1];
  const Scalar _tmp8 = _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp9 = -_tmp5 + _tmp6 + _tmp7 + _tmp8;
  const Scalar _tmp10 = Scalar(0.83999999999999997) * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp4;
  const Scalar _tmp12 = _DeltaRot[1] * _Rot_init[3];
  const Scalar _tmp13 = (Scalar(1) / Scalar(2)) * _tmp12;
  const Scalar _tmp14 = _DeltaRot[0] * _Rot_init[2];
  const Scalar _tmp15 = (Scalar(1) / Scalar(2)) * _tmp14;
  const Scalar _tmp16 = _DeltaRot[2] * _Rot_init[0];
  const Scalar _tmp17 = (Scalar(1) / Scalar(2)) * _tmp16;
  const Scalar _tmp18 = _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp19 = (Scalar(1) / Scalar(2)) * _tmp18;
  const Scalar _tmp20 = -_tmp13 - _tmp15 + _tmp17 - _tmp19;
  const Scalar _tmp21 = _tmp12 + _tmp14 - _tmp16 + _tmp18;
  const Scalar _tmp22 = Scalar(0.021999999999999999) * _tmp21;
  const Scalar _tmp23 = _tmp20 * _tmp22;
  const Scalar _tmp24 = _DeltaRot[1] * _Rot_init[0];
  const Scalar _tmp25 = (Scalar(1) / Scalar(2)) * _tmp24;
  const Scalar _tmp26 = _DeltaRot[0] * _Rot_init[1];
  const Scalar _tmp27 = (Scalar(1) / Scalar(2)) * _tmp26;
  const Scalar _tmp28 = _DeltaRot[2] * _Rot_init[3];
  const Scalar _tmp29 = (Scalar(1) / Scalar(2)) * _tmp28;
  const Scalar _tmp30 = _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp31 = (Scalar(1) / Scalar(2)) * _tmp30;
  const Scalar _tmp32 = _tmp25 - _tmp27 + _tmp29 + _tmp31;
  const Scalar _tmp33 = _tmp24 - _tmp26 + _tmp28 + _tmp30;
  const Scalar _tmp34 = Scalar(0.021999999999999999) * _tmp33;
  const Scalar _tmp35 = (Scalar(1) / Scalar(2)) * _tmp5;
  const Scalar _tmp36 = (Scalar(1) / Scalar(2)) * _tmp6;
  const Scalar _tmp37 = (Scalar(1) / Scalar(2)) * _tmp7;
  const Scalar _tmp38 = (Scalar(1) / Scalar(2)) * _tmp8;
  const Scalar _tmp39 = _tmp35 - _tmp36 - _tmp37 - _tmp38;
  const Scalar _tmp40 = Scalar(0.021999999999999999) * _tmp9;
  const Scalar _tmp41 = -_tmp0 - _tmp1 - _tmp2 + _tmp3;
  const Scalar _tmp42 = Scalar(0.021999999999999999) * _tmp41;
  const Scalar _tmp43 = _tmp4 * _tmp42;
  const Scalar _tmp44 = _tmp23 + _tmp32 * _tmp34 - _tmp39 * _tmp40 - _tmp43;
  const Scalar _tmp45 = -_tmp11 + _tmp44;
  const Scalar _tmp46 = Scalar(0.83999999999999997) * _tmp33;
  const Scalar _tmp47 = _tmp20 * _tmp46;
  const Scalar _tmp48 = -_tmp47;
  const Scalar _tmp49 = Scalar(0.41999999999999998) * _tmp41;
  const Scalar _tmp50 = _tmp20 * _tmp49;
  const Scalar _tmp51 = _tmp48 + _tmp50;
  const Scalar _tmp52 = Scalar(0.41999999999999998) * _tmp9;
  const Scalar _tmp53 = _tmp32 * _tmp52;
  const Scalar _tmp54 = Scalar(0.41999999999999998) * _tmp21;
  const Scalar _tmp55 = _tmp4 * _tmp54;
  const Scalar _tmp56 = Scalar(0.41999999999999998) * _tmp33;
  const Scalar _tmp57 = _tmp39 * _tmp56;
  const Scalar _tmp58 = _tmp55 + _tmp57;
  const Scalar _tmp59 = _tmp53 + _tmp58;
  const Scalar _tmp60 = 2 * _tmp21;
  const Scalar _tmp61 = _tmp60 * _tmp9;
  const Scalar _tmp62 = 2 * _tmp41;
  const Scalar _tmp63 = _tmp33 * _tmp62;
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp61 + Scalar(0.20999999999999999) * _tmp63;
  const Scalar _tmp65 = -_tmp64;
  const Scalar _tmp66 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp67 = 1 - 2 * std::pow(_tmp33, Scalar(2));
  const Scalar _tmp68 = Scalar(0.20999999999999999) * _tmp66 + Scalar(0.20999999999999999) * _tmp67;
  const Scalar _tmp69 = _tmp33 * _tmp60;
  const Scalar _tmp70 = _tmp62 * _tmp9;
  const Scalar _tmp71 = -Scalar(0.010999999999999999) * _tmp69 +
                        Scalar(0.010999999999999999) * _tmp70 + position_vector(1, 0);
  const Scalar _tmp72 = -_tmp68 + _tmp71;
  const Scalar _tmp73 = -_tmp65 - _tmp72 + p_a(1, 0);
  const Scalar _tmp74 = 2 * _tmp73;
  const Scalar _tmp75 = _tmp20 * _tmp54;
  const Scalar _tmp76 = _tmp4 * _tmp49;
  const Scalar _tmp77 = _tmp75 + _tmp76;
  const Scalar _tmp78 = _tmp4 * _tmp56;
  const Scalar _tmp79 = _tmp20 * _tmp52;
  const Scalar _tmp80 = _tmp78 + _tmp79;
  const Scalar _tmp81 = _tmp77 + _tmp80;
  const Scalar _tmp82 = _tmp32 * _tmp56;
  const Scalar _tmp83 = _tmp39 * _tmp52;
  const Scalar _tmp84 = Scalar(0.043999999999999997) * _tmp21;
  const Scalar _tmp85 = Scalar(0.043999999999999997) * _tmp9;
  const Scalar _tmp86 = -_tmp32 * _tmp84 - _tmp4 * _tmp85;
  const Scalar _tmp87 = _tmp82 + _tmp83 + _tmp86;
  const Scalar _tmp88 = _tmp39 * _tmp54;
  const Scalar _tmp89 = _tmp32 * _tmp49;
  const Scalar _tmp90 = -_tmp88 - _tmp89;
  const Scalar _tmp91 = Scalar(0.20999999999999999) * _tmp69 + Scalar(0.20999999999999999) * _tmp70;
  const Scalar _tmp92 = -_tmp91;
  const Scalar _tmp93 = 2 * _tmp33 * _tmp9;
  const Scalar _tmp94 = _tmp21 * _tmp62;
  const Scalar _tmp95 = Scalar(0.20999999999999999) * _tmp93 - Scalar(0.20999999999999999) * _tmp94;
  const Scalar _tmp96 = -2 * std::pow(_tmp21, Scalar(2));
  const Scalar _tmp97 = -Scalar(0.010999999999999999) * _tmp66 -
                        Scalar(0.010999999999999999) * _tmp96 + position_vector(2, 0) +
                        Scalar(-0.010999999999999999);
  const Scalar _tmp98 = -_tmp95 + _tmp97;
  const Scalar _tmp99 = -_tmp92 - _tmp98 + p_a(2, 0);
  const Scalar _tmp100 = 2 * _tmp99;
  const Scalar _tmp101 = -_tmp50;
  const Scalar _tmp102 = _tmp101 + _tmp48;
  const Scalar _tmp103 = -_tmp57;
  const Scalar _tmp104 = _tmp103 + _tmp53 + _tmp55;
  const Scalar _tmp105 = Scalar(0.83999999999999997) * _tmp21;
  const Scalar _tmp106 = _tmp105 * _tmp32;
  const Scalar _tmp107 = _tmp34 * _tmp4;
  const Scalar _tmp108 = _tmp20 * _tmp40;
  const Scalar _tmp109 = _tmp107 + _tmp108 + _tmp22 * _tmp39 + _tmp32 * _tmp42;
  const Scalar _tmp110 = -_tmp106 + _tmp109;
  const Scalar _tmp111 =
      Scalar(0.20999999999999999) * _tmp67 + Scalar(0.20999999999999999) * _tmp96;
  const Scalar _tmp112 = -_tmp111;
  const Scalar _tmp113 =
      Scalar(0.20999999999999999) * _tmp61 - Scalar(0.20999999999999999) * _tmp63;
  const Scalar _tmp114 = -Scalar(0.010999999999999999) * _tmp93 -
                         Scalar(0.010999999999999999) * _tmp94 + position_vector(0, 0);
  const Scalar _tmp115 = -_tmp113 + _tmp114;
  const Scalar _tmp116 = -_tmp112 - _tmp115 + p_a(0, 0);
  const Scalar _tmp117 = 2 * _tmp116;
  const Scalar _tmp118 = (Scalar(1) / Scalar(2)) / std::sqrt(Scalar(std::pow(_tmp116, Scalar(2)) +
                                                                    std::pow(_tmp73, Scalar(2)) +
                                                                    std::pow(_tmp99, Scalar(2))));
  const Scalar _tmp119 = -_tmp78 - _tmp79;
  const Scalar _tmp120 = _tmp119 + _tmp77;
  const Scalar _tmp121 = _tmp88 + _tmp89;
  const Scalar _tmp122 = _tmp95 + _tmp97;
  const Scalar _tmp123 = -_tmp122 - _tmp92 + p_b(2, 0);
  const Scalar _tmp124 = 2 * _tmp123;
  const Scalar _tmp125 = _tmp101 + _tmp47;
  const Scalar _tmp126 = _tmp106 + _tmp109;
  const Scalar _tmp127 = -_tmp111 - _tmp115 + p_b(0, 0);
  const Scalar _tmp128 = 2 * _tmp127;
  const Scalar _tmp129 = -_tmp53;
  const Scalar _tmp130 = -_tmp55;
  const Scalar _tmp131 = _tmp103 + _tmp130;
  const Scalar _tmp132 = _tmp129 + _tmp131;
  const Scalar _tmp133 = -_tmp64 - _tmp72 + p_b(1, 0);
  const Scalar _tmp134 = 2 * _tmp133;
  const Scalar _tmp135 = (Scalar(1) / Scalar(2)) / std::sqrt(Scalar(std::pow(_tmp123, Scalar(2)) +
                                                                    std::pow(_tmp127, Scalar(2)) +
                                                                    std::pow(_tmp133, Scalar(2))));
  const Scalar _tmp136 = _tmp11 + _tmp44;
  const Scalar _tmp137 = _tmp68 + _tmp71;
  const Scalar _tmp138 = -_tmp137 - _tmp64 + p_c(1, 0);
  const Scalar _tmp139 = 2 * _tmp138;
  const Scalar _tmp140 = -_tmp76;
  const Scalar _tmp141 = _tmp140 - _tmp75;
  const Scalar _tmp142 = _tmp119 + _tmp141;
  const Scalar _tmp143 = -_tmp83;
  const Scalar _tmp144 = _tmp143 - _tmp82 + _tmp86;
  const Scalar _tmp145 = -_tmp122 - _tmp91 + p_c(2, 0);
  const Scalar _tmp146 = 2 * _tmp145;
  const Scalar _tmp147 = _tmp47 + _tmp50;
  const Scalar _tmp148 = _tmp129 + _tmp130 + _tmp57;
  const Scalar _tmp149 = _tmp113 + _tmp114;
  const Scalar _tmp150 = -_tmp111 - _tmp149 + p_c(0, 0);
  const Scalar _tmp151 = 2 * _tmp150;
  const Scalar _tmp152 = (Scalar(1) / Scalar(2)) / std::sqrt(Scalar(std::pow(_tmp138, Scalar(2)) +
                                                                    std::pow(_tmp145, Scalar(2)) +
                                                                    std::pow(_tmp150, Scalar(2))));
  const Scalar _tmp153 = _tmp141 + _tmp80;
  const Scalar _tmp154 = -_tmp91 - _tmp98 + p_d(2, 0);
  const Scalar _tmp155 = 2 * _tmp154;
  const Scalar _tmp156 = -_tmp112 - _tmp149 + p_d(0, 0);
  const Scalar _tmp157 = 2 * _tmp156;
  const Scalar _tmp158 = -_tmp137 - _tmp65 + p_d(1, 0);
  const Scalar _tmp159 = 2 * _tmp158;
  const Scalar _tmp160 = (Scalar(1) / Scalar(2)) / std::sqrt(Scalar(std::pow(_tmp154, Scalar(2)) +
                                                                    std::pow(_tmp156, Scalar(2)) +
                                                                    std::pow(_tmp158, Scalar(2))));
  const Scalar _tmp161 = -_tmp35 + _tmp36 + _tmp37 + _tmp38;
  const Scalar _tmp162 = _tmp161 * _tmp54;
  const Scalar _tmp163 = -_tmp25 + _tmp27 - _tmp29 - _tmp31;
  const Scalar _tmp164 = _tmp163 * _tmp49;
  const Scalar _tmp165 = _tmp162 + _tmp164;
  const Scalar _tmp166 = Scalar(0.41999999999999998) * _tmp163;
  const Scalar _tmp167 = _tmp166 * _tmp33;
  const Scalar _tmp168 = _tmp161 * _tmp52;
  const Scalar _tmp169 = -_tmp163 * _tmp85 - _tmp4 * _tmp84;
  const Scalar _tmp170 = _tmp167 + _tmp168 + _tmp169;
  const Scalar _tmp171 = _tmp105 * _tmp4;
  const Scalar _tmp172 = _tmp161 * _tmp40 + _tmp163 * _tmp34 + _tmp23 + _tmp43;
  const Scalar _tmp173 = -_tmp171 + _tmp172;
  const Scalar _tmp174 = _tmp166 * _tmp21;
  const Scalar _tmp175 = _tmp4 * _tmp52;
  const Scalar _tmp176 = _tmp174 + _tmp175;
  const Scalar _tmp177 = _tmp161 * _tmp46;
  const Scalar _tmp178 = -_tmp177;
  const Scalar _tmp179 = _tmp20 * _tmp56;
  const Scalar _tmp180 = _tmp161 * _tmp49;
  const Scalar _tmp181 = -_tmp179 - _tmp180;
  const Scalar _tmp182 = _tmp178 + _tmp181;
  const Scalar _tmp183 = _tmp179 + _tmp180;
  const Scalar _tmp184 = _tmp178 + _tmp183;
  const Scalar _tmp185 = _tmp10 * _tmp163;
  const Scalar _tmp186 = _tmp107 - _tmp108 + _tmp161 * _tmp22 - _tmp163 * _tmp42;
  const Scalar _tmp187 = -_tmp185 + _tmp186;
  const Scalar _tmp188 = _tmp171 + _tmp172;
  const Scalar _tmp189 = _tmp176 + _tmp177;
  const Scalar _tmp190 = -_tmp175;
  const Scalar _tmp191 = -_tmp174;
  const Scalar _tmp192 = _tmp190 + _tmp191;
  const Scalar _tmp193 = -_tmp167;
  const Scalar _tmp194 = -_tmp168 + _tmp169 + _tmp193;
  const Scalar _tmp195 = -_tmp162 - _tmp164;
  const Scalar _tmp196 = _tmp177 + _tmp192;
  const Scalar _tmp197 = _tmp185 + _tmp186;
  const Scalar _tmp198 = _tmp140 + _tmp193;
  const Scalar _tmp199 = _tmp4 * _tmp46;
  const Scalar _tmp200 = -_tmp199;
  const Scalar _tmp201 = _tmp13 + _tmp15 - _tmp17 + _tmp19;
  const Scalar _tmp202 = _tmp201 * _tmp54;
  const Scalar _tmp203 = _tmp202 + _tmp83;
  const Scalar _tmp204 = _tmp200 + _tmp203;
  const Scalar _tmp205 = _tmp105 * _tmp39;
  const Scalar _tmp206 = _tmp163 * _tmp22 + _tmp201 * _tmp34 + _tmp39 * _tmp42 + _tmp4 * _tmp40;
  const Scalar _tmp207 = -_tmp205 + _tmp206;
  const Scalar _tmp208 = _tmp10 * _tmp201;
  const Scalar _tmp209 = -_tmp208;
  const Scalar _tmp210 = _tmp167 + _tmp76;
  const Scalar _tmp211 = -_tmp163 * _tmp40 - _tmp201 * _tmp42 + _tmp22 * _tmp4 + _tmp34 * _tmp39;
  const Scalar _tmp212 = _tmp210 + _tmp211;
  const Scalar _tmp213 = _tmp166 * _tmp9;
  const Scalar _tmp214 = _tmp201 * _tmp49;
  const Scalar _tmp215 = _tmp213 + _tmp214 + _tmp58;
  const Scalar _tmp216 = _tmp201 * _tmp56;
  const Scalar _tmp217 = _tmp39 * _tmp49;
  const Scalar _tmp218 = -_tmp201 * _tmp85 - _tmp39 * _tmp84;
  const Scalar _tmp219 = _tmp175 + _tmp191 + _tmp216 - _tmp217 + _tmp218;
  const Scalar _tmp220 = _tmp199 + _tmp203;
  const Scalar _tmp221 = _tmp205 + _tmp206;
  const Scalar _tmp222 = _tmp174 + _tmp190 - _tmp216 + _tmp217 + _tmp218;
  const Scalar _tmp223 = _tmp143 - _tmp202;
  const Scalar _tmp224 = _tmp200 + _tmp223;
  const Scalar _tmp225 = _tmp198 + _tmp211;
  const Scalar _tmp226 = _tmp199 + _tmp223;
  const Scalar _tmp227 = _tmp131 - _tmp213 - _tmp214;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) =
      _tmp118 * (_tmp100 * (_tmp81 + _tmp87 + _tmp90) + _tmp117 * (_tmp102 + _tmp104 + _tmp110) +
                 _tmp74 * (_tmp45 + _tmp51 + _tmp59));
  _res(1, 0) =
      _tmp135 * (_tmp124 * (_tmp120 + _tmp121 + _tmp87) + _tmp128 * (_tmp104 + _tmp125 + _tmp126) +
                 _tmp134 * (_tmp102 + _tmp132 + _tmp45));
  _res(2, 0) =
      _tmp152 * (_tmp139 * (_tmp125 + _tmp132 + _tmp136) + _tmp146 * (_tmp121 + _tmp142 + _tmp144) +
                 _tmp151 * (_tmp126 + _tmp147 + _tmp148));
  _res(3, 0) =
      _tmp160 * (_tmp155 * (_tmp144 + _tmp153 + _tmp90) + _tmp157 * (_tmp110 + _tmp148 + _tmp51) +
                 _tmp159 * (_tmp136 + _tmp147 + _tmp59));
  _res(0, 1) =
      _tmp118 * (_tmp100 * (_tmp153 + _tmp165 + _tmp170) + _tmp117 * (_tmp173 + _tmp176 + _tmp182) +
                 _tmp74 * (_tmp176 + _tmp184 + _tmp187));
  _res(1, 1) =
      _tmp135 * (_tmp124 * (_tmp165 + _tmp194 + _tmp81) + _tmp128 * (_tmp181 + _tmp188 + _tmp189) +
                 _tmp134 * (_tmp182 + _tmp187 + _tmp192));
  _res(2, 1) =
      _tmp152 * (_tmp139 * (_tmp181 + _tmp196 + _tmp197) + _tmp146 * (_tmp120 + _tmp194 + _tmp195) +
                 _tmp151 * (_tmp183 + _tmp188 + _tmp196));
  _res(3, 1) =
      _tmp160 * (_tmp155 * (_tmp142 + _tmp170 + _tmp195) + _tmp157 * (_tmp173 + _tmp184 + _tmp192) +
                 _tmp159 * (_tmp183 + _tmp189 + _tmp197));
  _res(0, 2) = _tmp118 * (_tmp100 * (_tmp215 + _tmp219) + _tmp117 * (_tmp198 + _tmp204 + _tmp207) +
                          _tmp74 * (_tmp204 + _tmp209 + _tmp212));
  _res(1, 2) = _tmp135 * (_tmp124 * (_tmp215 + _tmp222) + _tmp128 * (_tmp198 + _tmp220 + _tmp221) +
                          _tmp134 * (_tmp209 + _tmp224 + _tmp225));
  _res(2, 2) = _tmp152 * (_tmp139 * (_tmp208 + _tmp225 + _tmp226) + _tmp146 * (_tmp222 + _tmp227) +
                          _tmp151 * (_tmp210 + _tmp221 + _tmp226));
  _res(3, 2) = _tmp160 * (_tmp155 * (_tmp219 + _tmp227) + _tmp157 * (_tmp207 + _tmp210 + _tmp224) +
                          _tmp159 * (_tmp208 + _tmp212 + _tmp220));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym