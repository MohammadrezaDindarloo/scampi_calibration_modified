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
 * Symbolic function: IK_residual_func_cost3_wrt_pc_Nl4
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPcNl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 568

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (180)
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
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp4;
  const Scalar _tmp16 = _tmp15 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp17 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp19 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp20 = _tmp5 * _tmp8;
  const Scalar _tmp21 =
      -Scalar(0.010999999999999999) * _tmp19 + Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp24 = _tmp21 + _tmp23;
  const Scalar _tmp25 = _tmp18 + _tmp24;
  const Scalar _tmp26 = _tmp25 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp27 = std::pow(_tmp26, Scalar(2));
  const Scalar _tmp28 = _tmp17 + _tmp27;
  const Scalar _tmp29 = std::pow(_tmp28, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp30 = -_tmp4;
  const Scalar _tmp31 = _tmp14 + _tmp30;
  const Scalar _tmp32 = _tmp31 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp33 = Scalar(1.0) / (_tmp32);
  const Scalar _tmp34 = -_tmp18;
  const Scalar _tmp35 = _tmp24 + _tmp34;
  const Scalar _tmp36 = _tmp35 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp37 = _tmp33 * _tmp36;
  const Scalar _tmp38 = _tmp29 * _tmp37;
  const Scalar _tmp39 = _tmp26 * _tmp29;
  const Scalar _tmp40 = _tmp16 * _tmp38 - _tmp39;
  const Scalar _tmp41 = _tmp10 - _tmp13;
  const Scalar _tmp42 = _tmp4 + _tmp41;
  const Scalar _tmp43 = _tmp42 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp44 = _tmp21 - _tmp23;
  const Scalar _tmp45 = _tmp18 + _tmp44;
  const Scalar _tmp46 = _tmp45 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp43 * _tmp47;
  const Scalar _tmp49 = _tmp46 * _tmp47;
  const Scalar _tmp50 = Scalar(1.0) / (_tmp37 * _tmp48 - _tmp49);
  const Scalar _tmp51 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp52 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp53 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp54 = _tmp51 + _tmp52 - _tmp53;
  const Scalar _tmp55 = _tmp51 + _tmp53;
  const Scalar _tmp56 = -_tmp52 + _tmp55;
  const Scalar _tmp57 = _tmp48 * _tmp56;
  const Scalar _tmp58 = _tmp50 * (-_tmp37 * _tmp57 + _tmp49 * _tmp54);
  const Scalar _tmp59 = _tmp29 * _tmp56;
  const Scalar _tmp60 = _tmp16 * _tmp59;
  const Scalar _tmp61 = _tmp52 + _tmp55;
  const Scalar _tmp62 = _tmp29 * _tmp61;
  const Scalar _tmp63 = Scalar(1.0) * _tmp31;
  const Scalar _tmp64 = Scalar(1.0) * _tmp35;
  const Scalar _tmp65 = (-_tmp42 + _tmp63) / (_tmp45 - _tmp64);
  const Scalar _tmp66 = _tmp50 * (-_tmp48 * _tmp54 + _tmp57);
  const Scalar _tmp67 = -_tmp16 * _tmp62 - _tmp40 * _tmp66 + _tmp60 -
                        _tmp65 * (_tmp26 * _tmp62 - _tmp37 * _tmp60 - _tmp40 * _tmp58);
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp40 * _tmp68;
  const Scalar _tmp70 = _tmp63 + _tmp64 * _tmp65;
  const Scalar _tmp71 = 0;
  const Scalar _tmp72 = _tmp48 * _tmp50;
  const Scalar _tmp73 = _tmp71 * _tmp72;
  const Scalar _tmp74 = _tmp68 * _tmp71;
  const Scalar _tmp75 = _tmp29 * _tmp74;
  const Scalar _tmp76 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp77 =
      std::sqrt(Scalar(std::pow(_tmp32, Scalar(2)) + std::pow(_tmp36, Scalar(2))));
  const Scalar _tmp78 = _tmp33 * _tmp77;
  const Scalar _tmp79 = _tmp76 * _tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp81 = _tmp78 * (_tmp31 * _tmp36 * _tmp80 - _tmp32 * _tmp35 * _tmp80);
  const Scalar _tmp82 = _tmp16 * _tmp29;
  const Scalar _tmp83 = _tmp25 * _tmp29;
  const Scalar _tmp84 = _tmp50 * (-_tmp42 * _tmp49 + _tmp45 * _tmp48 + _tmp48 * _tmp81);
  const Scalar _tmp85 = -_tmp15 * _tmp39 + _tmp16 * _tmp83 - _tmp40 * _tmp84 + _tmp81 * _tmp82;
  const Scalar _tmp86 = Scalar(1.0) * _tmp58 * _tmp65 - Scalar(1.0) * _tmp66;
  const Scalar _tmp87 = _tmp68 * _tmp86;
  const Scalar _tmp88 = -Scalar(1.0) * _tmp84 - _tmp85 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp90 = _tmp67 * _tmp89;
  const Scalar _tmp91 = _tmp86 + _tmp88 * _tmp90;
  const Scalar _tmp92 = -_tmp69 * _tmp91 + Scalar(1.0);
  const Scalar _tmp93 = _tmp68 * _tmp91;
  const Scalar _tmp94 = _tmp29 * _tmp93;
  const Scalar _tmp95 = _tmp34 + _tmp44;
  const Scalar _tmp96 = _tmp95 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp97 = _tmp30 + _tmp41;
  const Scalar _tmp98 = _tmp97 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp99 = std::pow(Scalar(std::pow(_tmp96, Scalar(2)) + std::pow(_tmp98, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp100 = _tmp96 * _tmp99;
  const Scalar _tmp101 = _tmp100 * fh1;
  const Scalar _tmp102 = _tmp101 * _tmp78;
  const Scalar _tmp103 = _tmp37 * _tmp56;
  const Scalar _tmp104 = _tmp37 * _tmp66 - _tmp56 - _tmp65 * (_tmp103 + _tmp37 * _tmp58);
  const Scalar _tmp105 = _tmp104 * _tmp68;
  const Scalar _tmp106 = -_tmp105 * _tmp85 + _tmp37 * _tmp84 - _tmp81;
  const Scalar _tmp107 = _tmp106 * _tmp89;
  const Scalar _tmp108 = _tmp104 + _tmp107 * _tmp67;
  const Scalar _tmp109 = _tmp108 * _tmp68;
  const Scalar _tmp110 = _tmp109 * _tmp29;
  const Scalar _tmp111 = -_tmp109 * _tmp40 - _tmp37;
  const Scalar _tmp112 = _tmp98 * _tmp99;
  const Scalar _tmp113 = _tmp112 * fh1;
  const Scalar _tmp114 = _tmp113 * _tmp78;
  const Scalar _tmp115 = Scalar(1.0) * _tmp89;
  const Scalar _tmp116 = _tmp115 * _tmp29;
  const Scalar _tmp117 = _tmp115 * _tmp72;
  const Scalar _tmp118 = fh1 * (_tmp100 * _tmp97 - _tmp112 * _tmp95);
  const Scalar _tmp119 = _tmp118 * _tmp78;
  const Scalar _tmp120 = std::exp(_tmp102 * (_tmp16 * _tmp94 + _tmp72 * _tmp92) +
                                  _tmp114 * (_tmp110 * _tmp16 + _tmp111 * _tmp72 + Scalar(1.0)) +
                                  _tmp119 * (_tmp116 * _tmp16 - _tmp117 * _tmp40) +
                                  _tmp79 * (_tmp16 * _tmp75 - _tmp69 * _tmp73));
  const Scalar _tmp121 = std::pow(_tmp28, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp122 = _tmp121 * _tmp16 * _tmp26;
  const Scalar _tmp123 = _tmp121 * _tmp17;
  const Scalar _tmp124 = -_tmp122 + _tmp123 * _tmp37 - _tmp38;
  const Scalar _tmp125 = _tmp122 * _tmp61;
  const Scalar _tmp126 = _tmp123 * _tmp56;
  const Scalar _tmp127 =
      -_tmp123 * _tmp61 - _tmp124 * _tmp66 + _tmp126 - _tmp59 + _tmp62 -
      _tmp65 * (-_tmp124 * _tmp58 + _tmp125 - _tmp126 * _tmp37 + _tmp37 * _tmp59);
  const Scalar _tmp128 = std::pow(_tmp67, Scalar(-2));
  const Scalar _tmp129 = _tmp127 * _tmp128;
  const Scalar _tmp130 = _tmp129 * _tmp82;
  const Scalar _tmp131 = _tmp129 * _tmp40;
  const Scalar _tmp132 = _tmp88 * _tmp89;
  const Scalar _tmp133 = -_tmp122 * _tmp15 + _tmp123 * _tmp25 + _tmp123 * _tmp81 -
                         _tmp124 * _tmp84 - _tmp29 * _tmp81 - _tmp83;
  const Scalar _tmp134 = std::pow(_tmp85, Scalar(-2));
  const Scalar _tmp135 = _tmp134 * _tmp67;
  const Scalar _tmp136 = _tmp133 * _tmp135;
  const Scalar _tmp137 = _tmp85 * _tmp86;
  const Scalar _tmp138 =
      _tmp127 * _tmp132 - _tmp136 * _tmp88 + _tmp90 * (_tmp129 * _tmp137 - _tmp133 * _tmp87);
  const Scalar _tmp139 = _tmp68 * _tmp82;
  const Scalar _tmp140 = -_tmp124 * _tmp93 + _tmp131 * _tmp91 - _tmp138 * _tmp69;
  const Scalar _tmp141 = Scalar(1.0) * _tmp134;
  const Scalar _tmp142 = _tmp141 * _tmp82;
  const Scalar _tmp143 = _tmp141 * _tmp40 * _tmp72;
  const Scalar _tmp144 = _tmp104 * _tmp85;
  const Scalar _tmp145 =
      -_tmp106 * _tmp136 + _tmp107 * _tmp127 + _tmp90 * (-_tmp105 * _tmp133 + _tmp129 * _tmp144);
  const Scalar _tmp146 = _tmp108 * _tmp131 - _tmp109 * _tmp124 - _tmp145 * _tmp69;
  const Scalar _tmp147 = _tmp145 * _tmp68;
  const Scalar _tmp148 = _tmp71 * _tmp76;
  const Scalar _tmp149 = _tmp148 * _tmp50;
  const Scalar _tmp150 = _tmp115 * _tmp118;
  const Scalar _tmp151 = _tmp150 * _tmp50;
  const Scalar _tmp152 = _tmp50 * fh1;
  const Scalar _tmp153 = _tmp112 * _tmp152;
  const Scalar _tmp154 = _tmp100 * _tmp152;
  const Scalar _tmp155 =
      std::exp(-_tmp111 * _tmp153 + _tmp149 * _tmp69 + _tmp151 * _tmp40 - _tmp154 * _tmp92);
  const Scalar _tmp156 = _tmp118 * _tmp141;
  const Scalar _tmp157 = _tmp133 * _tmp156;
  const Scalar _tmp158 = _tmp40 * _tmp50;
  const Scalar _tmp159 = _tmp74 * _tmp76;
  const Scalar _tmp160 = _tmp159 * _tmp50;
  const Scalar _tmp161 = std::exp(-_tmp101 * _tmp93 - _tmp109 * _tmp113 - _tmp150 - _tmp159);
  const Scalar _tmp162 = _tmp68 * fh1;
  const Scalar _tmp163 = _tmp100 * _tmp162;
  const Scalar _tmp164 = _tmp101 * _tmp91;
  const Scalar _tmp165 = _tmp108 * _tmp113;
  const Scalar _tmp166 = _tmp121 * _tmp27;
  const Scalar _tmp167 = _tmp122 * _tmp37 - _tmp166 + _tmp29;
  const Scalar _tmp168 =
      _tmp122 * _tmp25 + _tmp122 * _tmp81 - _tmp15 * _tmp166 + _tmp15 * _tmp29 - _tmp167 * _tmp84;
  const Scalar _tmp169 = _tmp167 * _tmp72;
  const Scalar _tmp170 =
      _tmp122 * _tmp56 - _tmp125 - _tmp167 * _tmp66 -
      _tmp65 * (-_tmp103 * _tmp122 + _tmp166 * _tmp61 - _tmp167 * _tmp58 - _tmp62);
  const Scalar _tmp171 = _tmp128 * _tmp170;
  const Scalar _tmp172 = _tmp135 * _tmp168;
  const Scalar _tmp173 =
      _tmp132 * _tmp170 - _tmp172 * _tmp88 + _tmp90 * (_tmp137 * _tmp171 - _tmp168 * _tmp87);
  const Scalar _tmp174 = _tmp171 * _tmp82;
  const Scalar _tmp175 = _tmp171 * _tmp40;
  const Scalar _tmp176 = -_tmp167 * _tmp93 - _tmp173 * _tmp69 + _tmp175 * _tmp91;
  const Scalar _tmp177 =
      -_tmp106 * _tmp172 + _tmp107 * _tmp170 + _tmp90 * (-_tmp105 * _tmp168 + _tmp144 * _tmp171);
  const Scalar _tmp178 = _tmp108 * _tmp175 - _tmp109 * _tmp167 - _tmp177 * _tmp69;
  const Scalar _tmp179 = _tmp156 * _tmp168;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp120 * (-_tmp102 * (_tmp123 * _tmp93 - _tmp130 * _tmp91 + _tmp138 * _tmp139 +
                                       _tmp140 * _tmp72 - _tmp94) -
                           _tmp114 * (-_tmp108 * _tmp130 + _tmp109 * _tmp123 - _tmp110 +
                                      _tmp146 * _tmp72 + _tmp147 * _tmp82) -
                           _tmp119 * (_tmp115 * _tmp123 - _tmp116 - _tmp117 * _tmp124 -
                                      _tmp133 * _tmp142 + _tmp133 * _tmp143) -
                           _tmp79 * (_tmp123 * _tmp74 - _tmp124 * _tmp72 * _tmp74 -
                                     _tmp130 * _tmp71 + _tmp131 * _tmp73 - _tmp75));
  _res(2, 0) = -_tmp155 * (-_tmp124 * _tmp151 - _tmp124 * _tmp160 + _tmp131 * _tmp149 +
                           _tmp140 * _tmp154 + _tmp146 * _tmp153 + _tmp157 * _tmp158);
  _res(3, 0) = -_tmp161 * (_tmp113 * _tmp147 - _tmp129 * _tmp148 - _tmp129 * _tmp164 -
                           _tmp129 * _tmp165 + _tmp138 * _tmp163 - _tmp157);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp120 *
      (-_tmp102 * (_tmp122 * _tmp93 + _tmp139 * _tmp173 - _tmp174 * _tmp91 + _tmp176 * _tmp72) -
       _tmp114 * (-_tmp108 * _tmp174 + _tmp109 * _tmp122 + _tmp139 * _tmp177 + _tmp178 * _tmp72) -
       _tmp119 * (_tmp115 * _tmp122 - _tmp115 * _tmp169 - _tmp142 * _tmp168 + _tmp143 * _tmp168) -
       _tmp79 * (_tmp122 * _tmp74 - _tmp169 * _tmp74 - _tmp174 * _tmp71 + _tmp175 * _tmp73));
  _res(2, 1) = -_tmp155 * (_tmp149 * _tmp175 - _tmp151 * _tmp167 + _tmp153 * _tmp178 +
                           _tmp154 * _tmp176 + _tmp158 * _tmp179 - _tmp160 * _tmp167);
  _res(3, 1) = -_tmp161 * (_tmp112 * _tmp162 * _tmp177 - _tmp148 * _tmp171 + _tmp163 * _tmp173 -
                           _tmp164 * _tmp171 - _tmp165 * _tmp171 - _tmp179);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym