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
 * Symbolic function: IK_residual_func_cost3_wrt_pc_Nl21
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPcNl21(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 661

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (221)
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
  const Scalar _tmp8 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp9 = _tmp1 * _tmp5;
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp12 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = _tmp15 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp17 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp18 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp21 = _tmp2 * _tmp4;
  const Scalar _tmp22 = _tmp0 * _tmp5;
  const Scalar _tmp23 =
      -Scalar(0.010999999999999999) * _tmp21 + Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = _tmp20 + _tmp23;
  const Scalar _tmp25 = _tmp19 + _tmp24;
  const Scalar _tmp26 = _tmp25 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp27 = std::pow(_tmp26, Scalar(2));
  const Scalar _tmp28 = _tmp17 + _tmp27;
  const Scalar _tmp29 = std::pow(_tmp28, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp30 = _tmp25 * _tmp29;
  const Scalar _tmp31 = _tmp26 * _tmp29;
  const Scalar _tmp32 = -_tmp7;
  const Scalar _tmp33 = _tmp14 + _tmp32;
  const Scalar _tmp34 = _tmp33 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp35 = -_tmp19;
  const Scalar _tmp36 = _tmp24 + _tmp35;
  const Scalar _tmp37 = _tmp36 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp38 =
      std::sqrt(Scalar(std::pow(_tmp34, Scalar(2)) + std::pow(_tmp37, Scalar(2))));
  const Scalar _tmp39 = Scalar(1.0) / (_tmp38);
  const Scalar _tmp40 = Scalar(1.0) / (_tmp34);
  const Scalar _tmp41 = _tmp38 * _tmp40;
  const Scalar _tmp42 = _tmp41 * (_tmp33 * _tmp37 * _tmp39 - _tmp34 * _tmp36 * _tmp39);
  const Scalar _tmp43 = _tmp29 * _tmp42;
  const Scalar _tmp44 = -_tmp15 * _tmp31 + _tmp16 * _tmp30 + _tmp16 * _tmp43;
  const Scalar _tmp45 = _tmp37 * _tmp40;
  const Scalar _tmp46 = _tmp29 * _tmp45;
  const Scalar _tmp47 = _tmp16 * _tmp46 - _tmp31;
  const Scalar _tmp48 = Scalar(1.0) / (_tmp47);
  const Scalar _tmp49 = Scalar(1.0) * _tmp48;
  const Scalar _tmp50 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp51 = -Scalar(0.010999999999999999) * _tmp11 -
                        Scalar(0.010999999999999999) * _tmp18 + Scalar(-0.010999999999999999);
  const Scalar _tmp52 = Scalar(0.20999999999999999) * _tmp8 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp53 = _tmp51 + _tmp52;
  const Scalar _tmp54 = _tmp50 + _tmp53;
  const Scalar _tmp55 = _tmp29 * _tmp54;
  const Scalar _tmp56 = -_tmp50;
  const Scalar _tmp57 = _tmp53 + _tmp56;
  const Scalar _tmp58 = _tmp29 * _tmp57;
  const Scalar _tmp59 = _tmp16 * _tmp58;
  const Scalar _tmp60 = -_tmp16 * _tmp55 + _tmp59;
  const Scalar _tmp61 = _tmp31 * _tmp54 - _tmp45 * _tmp59;
  const Scalar _tmp62 = Scalar(1.0) * _tmp36;
  const Scalar _tmp63 = Scalar(1.0) * _tmp33;
  const Scalar _tmp64 = (-_tmp15 + _tmp63) / (_tmp25 - _tmp62);
  const Scalar _tmp65 = _tmp49 * _tmp64;
  const Scalar _tmp66 = -_tmp49 * _tmp60 + _tmp61 * _tmp65;
  const Scalar _tmp67 = _tmp51 - _tmp52 + _tmp56;
  const Scalar _tmp68 = _tmp10 - _tmp13;
  const Scalar _tmp69 = _tmp32 + _tmp68;
  const Scalar _tmp70 = _tmp69 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp71 = -_tmp20 + _tmp23;
  const Scalar _tmp72 = _tmp35 + _tmp71;
  const Scalar _tmp73 = _tmp72 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp74 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp73, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp75 = _tmp70 * _tmp74;
  const Scalar _tmp76 = _tmp73 * _tmp74;
  const Scalar _tmp77 = _tmp45 * _tmp75 - _tmp76;
  const Scalar _tmp78 = _tmp48 * _tmp77;
  const Scalar _tmp79 = _tmp57 * _tmp75;
  const Scalar _tmp80 = -_tmp60 * _tmp78 -
                        _tmp64 * (-_tmp45 * _tmp79 - _tmp61 * _tmp78 + _tmp67 * _tmp76) -
                        _tmp67 * _tmp75 + _tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp42 * _tmp75 - _tmp44 * _tmp78 - _tmp69 * _tmp76 + _tmp72 * _tmp75;
  const Scalar _tmp83 = _tmp81 * _tmp82;
  const Scalar _tmp84 = -_tmp44 * _tmp49 - _tmp66 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp86 = _tmp80 * _tmp85;
  const Scalar _tmp87 = _tmp66 + _tmp84 * _tmp86;
  const Scalar _tmp88 = _tmp77 * _tmp81;
  const Scalar _tmp89 = -_tmp87 * _tmp88 + Scalar(1.0);
  const Scalar _tmp90 = _tmp29 * _tmp48;
  const Scalar _tmp91 = _tmp89 * _tmp90;
  const Scalar _tmp92 = _tmp75 * _tmp81;
  const Scalar _tmp93 = _tmp68 + _tmp7;
  const Scalar _tmp94 = _tmp93 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp95 = _tmp19 + _tmp71;
  const Scalar _tmp96 = _tmp95 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp97 = std::pow(Scalar(std::pow(_tmp94, Scalar(2)) + std::pow(_tmp96, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp98 = _tmp96 * _tmp97;
  const Scalar _tmp99 = _tmp98 * fh1;
  const Scalar _tmp100 = _tmp41 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) * _tmp85;
  const Scalar _tmp102 = _tmp29 * _tmp78;
  const Scalar _tmp103 = _tmp101 * _tmp102;
  const Scalar _tmp104 = _tmp94 * _tmp97;
  const Scalar _tmp105 = fh1 * (-_tmp104 * _tmp95 + _tmp93 * _tmp98);
  const Scalar _tmp106 = _tmp105 * _tmp41;
  const Scalar _tmp107 = _tmp62 * _tmp64 + _tmp63;
  const Scalar _tmp108 = 0;
  const Scalar _tmp109 = _tmp108 * _tmp81;
  const Scalar _tmp110 = _tmp102 * _tmp109;
  const Scalar _tmp111 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp112 = _tmp111 * _tmp41;
  const Scalar _tmp113 = _tmp45 * _tmp48;
  const Scalar _tmp114 = _tmp45 * _tmp57;
  const Scalar _tmp115 = _tmp113 * _tmp60 - _tmp57 - _tmp64 * (_tmp113 * _tmp61 + _tmp114);
  const Scalar _tmp116 = _tmp113 * _tmp44 - _tmp115 * _tmp83 - _tmp42;
  const Scalar _tmp117 = _tmp115 + _tmp116 * _tmp86;
  const Scalar _tmp118 = -_tmp117 * _tmp88 - _tmp45;
  const Scalar _tmp119 = _tmp118 * _tmp90;
  const Scalar _tmp120 = _tmp104 * fh1;
  const Scalar _tmp121 = _tmp120 * _tmp41;
  const Scalar _tmp122 = std::exp(_tmp100 * (_tmp16 * _tmp91 + _tmp87 * _tmp92) +
                                  _tmp106 * (_tmp101 * _tmp75 - _tmp103 * _tmp16) +
                                  _tmp112 * (_tmp108 * _tmp92 - _tmp110 * _tmp16) +
                                  _tmp121 * (_tmp117 * _tmp92 + _tmp119 * _tmp16 + Scalar(1.0)));
  const Scalar _tmp123 = std::pow(_tmp28, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp124 = _tmp123 * _tmp16 * _tmp26;
  const Scalar _tmp125 = _tmp123 * _tmp17;
  const Scalar _tmp126 = -_tmp124 + _tmp125 * _tmp45 - _tmp46;
  const Scalar _tmp127 = std::pow(_tmp47, Scalar(-2));
  const Scalar _tmp128 = _tmp127 * _tmp77;
  const Scalar _tmp129 = _tmp126 * _tmp128;
  const Scalar _tmp130 = -_tmp124 * _tmp15 + _tmp125 * _tmp25 + _tmp125 * _tmp42 - _tmp30 - _tmp43;
  const Scalar _tmp131 = _tmp129 * _tmp44 - _tmp130 * _tmp78;
  const Scalar _tmp132 = std::pow(_tmp82, Scalar(-2));
  const Scalar _tmp133 = Scalar(1.0) * _tmp132;
  const Scalar _tmp134 = _tmp131 * _tmp133;
  const Scalar _tmp135 = _tmp102 * _tmp16;
  const Scalar _tmp136 = _tmp125 * _tmp78;
  const Scalar _tmp137 = _tmp16 * _tmp29;
  const Scalar _tmp138 = Scalar(1.0) * _tmp127;
  const Scalar _tmp139 = _tmp126 * _tmp138;
  const Scalar _tmp140 = _tmp77 * _tmp85;
  const Scalar _tmp141 = _tmp139 * _tmp140;
  const Scalar _tmp142 = _tmp125 * _tmp48;
  const Scalar _tmp143 = _tmp124 * _tmp54;
  const Scalar _tmp144 = _tmp125 * _tmp57;
  const Scalar _tmp145 = _tmp143 - _tmp144 * _tmp45 + _tmp45 * _tmp58;
  const Scalar _tmp146 = -_tmp125 * _tmp54 + _tmp144 + _tmp55 - _tmp58;
  const Scalar _tmp147 = _tmp126 * _tmp60;
  const Scalar _tmp148 =
      _tmp128 * _tmp147 - _tmp146 * _tmp78 - _tmp64 * (_tmp129 * _tmp61 - _tmp145 * _tmp78);
  const Scalar _tmp149 = std::pow(_tmp80, Scalar(-2));
  const Scalar _tmp150 = _tmp148 * _tmp149;
  const Scalar _tmp151 = _tmp150 * _tmp75;
  const Scalar _tmp152 = _tmp137 * _tmp89;
  const Scalar _tmp153 = _tmp126 * _tmp127;
  const Scalar _tmp154 = _tmp132 * _tmp80;
  const Scalar _tmp155 = _tmp131 * _tmp154;
  const Scalar _tmp156 = _tmp84 * _tmp85;
  const Scalar _tmp157 = _tmp66 * _tmp81;
  const Scalar _tmp158 = _tmp138 * _tmp44;
  const Scalar _tmp159 = _tmp149 * _tmp82;
  const Scalar _tmp160 = _tmp148 * _tmp159;
  const Scalar _tmp161 = _tmp61 * _tmp64;
  const Scalar _tmp162 =
      _tmp138 * _tmp147 - _tmp139 * _tmp161 + _tmp145 * _tmp65 - _tmp146 * _tmp49;
  const Scalar _tmp163 = _tmp148 * _tmp156 - _tmp155 * _tmp84 + _tmp162 +
                         _tmp86 * (_tmp126 * _tmp158 - _tmp130 * _tmp49 - _tmp131 * _tmp157 +
                                   _tmp160 * _tmp66 - _tmp162 * _tmp83);
  const Scalar _tmp164 = _tmp150 * _tmp77;
  const Scalar _tmp165 = -_tmp163 * _tmp88 + _tmp164 * _tmp87;
  const Scalar _tmp166 = _tmp16 * _tmp90;
  const Scalar _tmp167 = _tmp108 * _tmp137 * _tmp88;
  const Scalar _tmp168 = _tmp108 * _tmp135;
  const Scalar _tmp169 = _tmp118 * _tmp153;
  const Scalar _tmp170 = _tmp115 * _tmp81;
  const Scalar _tmp171 = _tmp127 * _tmp45;
  const Scalar _tmp172 = _tmp126 * _tmp171;
  const Scalar _tmp173 =
      _tmp113 * _tmp146 - _tmp147 * _tmp171 - _tmp64 * (_tmp113 * _tmp145 - _tmp172 * _tmp61);
  const Scalar _tmp174 = _tmp116 * _tmp85;
  const Scalar _tmp175 = -_tmp116 * _tmp155 + _tmp148 * _tmp174 + _tmp173 +
                         _tmp86 * (_tmp113 * _tmp130 + _tmp115 * _tmp160 - _tmp131 * _tmp170 -
                                   _tmp172 * _tmp44 - _tmp173 * _tmp83);
  const Scalar _tmp176 = _tmp117 * _tmp164 - _tmp175 * _tmp88;
  const Scalar _tmp177 = _tmp48 * _tmp99;
  const Scalar _tmp178 = _tmp108 * _tmp111;
  const Scalar _tmp179 = _tmp178 * _tmp81;
  const Scalar _tmp180 = _tmp120 * _tmp48;
  const Scalar _tmp181 = _tmp101 * _tmp105;
  const Scalar _tmp182 =
      std::exp(-_tmp118 * _tmp180 - _tmp177 * _tmp89 + _tmp179 * _tmp78 + _tmp181 * _tmp78);
  const Scalar _tmp183 = _tmp89 * _tmp99;
  const Scalar _tmp184 = _tmp150 * _tmp178;
  const Scalar _tmp185 = _tmp105 * _tmp134;
  const Scalar _tmp186 = _tmp81 * _tmp99;
  const Scalar _tmp187 = _tmp120 * _tmp81;
  const Scalar _tmp188 = std::exp(-_tmp117 * _tmp187 - _tmp179 - _tmp181 - _tmp186 * _tmp87);
  const Scalar _tmp189 = _tmp117 * _tmp120;
  const Scalar _tmp190 = _tmp87 * _tmp99;
  const Scalar _tmp191 = _tmp124 * _tmp78;
  const Scalar _tmp192 = _tmp123 * _tmp27;
  const Scalar _tmp193 = _tmp124 * _tmp45 - _tmp192 + _tmp29;
  const Scalar _tmp194 = _tmp127 * _tmp193;
  const Scalar _tmp195 = _tmp193 * _tmp60;
  const Scalar _tmp196 = _tmp124 * _tmp57 - _tmp143;
  const Scalar _tmp197 = _tmp128 * _tmp193;
  const Scalar _tmp198 = -_tmp114 * _tmp124 + _tmp192 * _tmp54 - _tmp55;
  const Scalar _tmp199 =
      _tmp128 * _tmp195 - _tmp196 * _tmp78 - _tmp64 * (_tmp197 * _tmp61 - _tmp198 * _tmp78);
  const Scalar _tmp200 = _tmp149 * _tmp199;
  const Scalar _tmp201 = _tmp200 * _tmp75;
  const Scalar _tmp202 = _tmp124 * _tmp25 + _tmp124 * _tmp42 - _tmp15 * _tmp192 + _tmp15 * _tmp29;
  const Scalar _tmp203 = _tmp197 * _tmp44 - _tmp202 * _tmp78;
  const Scalar _tmp204 = _tmp133 * _tmp203;
  const Scalar _tmp205 = _tmp138 * _tmp193;
  const Scalar _tmp206 = _tmp140 * _tmp205;
  const Scalar _tmp207 = _tmp154 * _tmp203;
  const Scalar _tmp208 = _tmp159 * _tmp199;
  const Scalar _tmp209 =
      _tmp138 * _tmp195 - _tmp161 * _tmp205 - _tmp196 * _tmp49 + _tmp198 * _tmp65;
  const Scalar _tmp210 = _tmp156 * _tmp199 - _tmp207 * _tmp84 + _tmp209 +
                         _tmp86 * (-_tmp157 * _tmp203 + _tmp158 * _tmp193 - _tmp202 * _tmp49 +
                                   _tmp208 * _tmp66 - _tmp209 * _tmp83);
  const Scalar _tmp211 = _tmp200 * _tmp77;
  const Scalar _tmp212 = -_tmp210 * _tmp88 + _tmp211 * _tmp87;
  const Scalar _tmp213 = _tmp124 * _tmp48;
  const Scalar _tmp214 = _tmp171 * _tmp193;
  const Scalar _tmp215 =
      _tmp113 * _tmp196 - _tmp171 * _tmp195 - _tmp64 * (_tmp113 * _tmp198 - _tmp214 * _tmp61);
  const Scalar _tmp216 = -_tmp116 * _tmp207 + _tmp174 * _tmp199 + _tmp215 +
                         _tmp86 * (_tmp113 * _tmp202 + _tmp115 * _tmp208 - _tmp170 * _tmp203 -
                                   _tmp214 * _tmp44 - _tmp215 * _tmp83);
  const Scalar _tmp217 = _tmp118 * _tmp194;
  const Scalar _tmp218 = _tmp117 * _tmp211 - _tmp216 * _tmp88;
  const Scalar _tmp219 = _tmp178 * _tmp200;
  const Scalar _tmp220 = _tmp105 * _tmp204;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp122 * (-_tmp100 * (_tmp142 * _tmp89 - _tmp151 * _tmp87 - _tmp152 * _tmp153 +
                                       _tmp163 * _tmp92 + _tmp165 * _tmp166 - _tmp91) -
                           _tmp106 * (-_tmp101 * _tmp136 + _tmp103 + _tmp134 * _tmp135 -
                                      _tmp134 * _tmp75 + _tmp137 * _tmp141) -
                           _tmp112 * (-_tmp108 * _tmp151 - _tmp109 * _tmp136 + _tmp110 +
                                      _tmp150 * _tmp168 + _tmp153 * _tmp167) -
                           _tmp121 * (-_tmp117 * _tmp151 + _tmp118 * _tmp142 - _tmp119 -
                                      _tmp137 * _tmp169 + _tmp166 * _tmp176 + _tmp175 * _tmp92));
  _res(2, 0) =
      -_tmp182 * (_tmp105 * _tmp141 - _tmp120 * _tmp169 + _tmp129 * _tmp179 - _tmp153 * _tmp183 +
                  _tmp165 * _tmp177 + _tmp176 * _tmp180 + _tmp184 * _tmp78 + _tmp185 * _tmp78);
  _res(3, 0) = -_tmp188 * (-_tmp150 * _tmp189 - _tmp150 * _tmp190 + _tmp163 * _tmp186 +
                           _tmp175 * _tmp187 - _tmp184 - _tmp185);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp122 *
      (-_tmp100 * (-_tmp152 * _tmp194 + _tmp166 * _tmp212 - _tmp201 * _tmp87 + _tmp210 * _tmp92 +
                   _tmp213 * _tmp89) -
       _tmp106 * (-_tmp101 * _tmp191 + _tmp135 * _tmp204 + _tmp137 * _tmp206 - _tmp204 * _tmp75) -
       _tmp112 * (-_tmp108 * _tmp201 - _tmp109 * _tmp191 + _tmp167 * _tmp194 + _tmp168 * _tmp200) -
       _tmp121 * (-_tmp117 * _tmp201 + _tmp118 * _tmp213 - _tmp137 * _tmp217 + _tmp166 * _tmp218 +
                  _tmp216 * _tmp92));
  _res(2, 1) =
      -_tmp182 * (_tmp105 * _tmp206 - _tmp120 * _tmp217 + _tmp177 * _tmp212 + _tmp179 * _tmp197 +
                  _tmp180 * _tmp218 - _tmp183 * _tmp194 + _tmp219 * _tmp78 + _tmp220 * _tmp78);
  _res(3, 1) = -_tmp188 * (_tmp186 * _tmp210 + _tmp187 * _tmp216 - _tmp189 * _tmp200 -
                           _tmp190 * _tmp200 - _tmp219 - _tmp220);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
