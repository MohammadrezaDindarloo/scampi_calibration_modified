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
 * Symbolic function: IK_residual_func_cost3_wrt_pa_Nl9
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPaNl9(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 567

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
  const Scalar _tmp17 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp20 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp21 = _tmp5 * _tmp8;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 + Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = _tmp19 + _tmp22;
  const Scalar _tmp24 = _tmp18 + _tmp23;
  const Scalar _tmp25 = _tmp24 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp26 =
      std::sqrt(Scalar(std::pow(_tmp16, Scalar(2)) + std::pow(_tmp25, Scalar(2))));
  const Scalar _tmp27 = Scalar(1.0) / (_tmp26);
  const Scalar _tmp28 = Scalar(1.0) / (_tmp16);
  const Scalar _tmp29 = _tmp26 * _tmp28;
  const Scalar _tmp30 = _tmp29 * (_tmp15 * _tmp25 * _tmp27 - _tmp16 * _tmp24 * _tmp27);
  const Scalar _tmp31 = -_tmp4;
  const Scalar _tmp32 = _tmp10 - _tmp13;
  const Scalar _tmp33 = _tmp31 + _tmp32;
  const Scalar _tmp34 = _tmp33 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp35 = std::pow(_tmp34, Scalar(2));
  const Scalar _tmp36 = -_tmp18;
  const Scalar _tmp37 = -_tmp19 + _tmp22;
  const Scalar _tmp38 = _tmp36 + _tmp37;
  const Scalar _tmp39 = _tmp38 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp40 = std::pow(_tmp39, Scalar(2));
  const Scalar _tmp41 = _tmp35 + _tmp40;
  const Scalar _tmp42 = std::pow(_tmp41, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp34 * _tmp42;
  const Scalar _tmp44 = _tmp39 * _tmp42;
  const Scalar _tmp45 = _tmp25 * _tmp28;
  const Scalar _tmp46 = _tmp42 * _tmp45;
  const Scalar _tmp47 = _tmp34 * _tmp46 - _tmp44;
  const Scalar _tmp48 = _tmp14 + _tmp31;
  const Scalar _tmp49 = _tmp48 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp50 = _tmp18 + _tmp37;
  const Scalar _tmp51 = _tmp50 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp52 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp51, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp49 * _tmp52;
  const Scalar _tmp54 = _tmp51 * _tmp52;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp45 * _tmp53 - _tmp54);
  const Scalar _tmp56 = _tmp55 * (_tmp30 * _tmp53 - _tmp48 * _tmp54 + _tmp50 * _tmp53);
  const Scalar _tmp57 = _tmp38 * _tmp42;
  const Scalar _tmp58 = _tmp30 * _tmp43 - _tmp33 * _tmp44 + _tmp34 * _tmp57 - _tmp47 * _tmp56;
  const Scalar _tmp59 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp60 = -_tmp59;
  const Scalar _tmp61 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp17 + Scalar(-0.010999999999999999);
  const Scalar _tmp62 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp63 = _tmp61 + _tmp62;
  const Scalar _tmp64 = _tmp60 + _tmp63;
  const Scalar _tmp65 = _tmp59 + _tmp63;
  const Scalar _tmp66 = _tmp45 * _tmp65;
  const Scalar _tmp67 = _tmp55 * (-_tmp53 * _tmp66 + _tmp54 * _tmp64);
  const Scalar _tmp68 = _tmp42 * _tmp65;
  const Scalar _tmp69 = _tmp34 * _tmp68;
  const Scalar _tmp70 = _tmp60 + _tmp61 - _tmp62;
  const Scalar _tmp71 = Scalar(1.0) * _tmp24;
  const Scalar _tmp72 = Scalar(1.0) * _tmp15;
  const Scalar _tmp73 = (-_tmp48 + _tmp72) / (_tmp50 - _tmp71);
  const Scalar _tmp74 = _tmp42 * _tmp70;
  const Scalar _tmp75 = _tmp55 * (-_tmp53 * _tmp64 + _tmp53 * _tmp65);
  const Scalar _tmp76 = -_tmp34 * _tmp74 - _tmp47 * _tmp75 + _tmp69 -
                        _tmp73 * (_tmp44 * _tmp70 - _tmp45 * _tmp69 - _tmp47 * _tmp67);
  const Scalar _tmp77 = Scalar(1.0) / (_tmp76);
  const Scalar _tmp78 = Scalar(1.0) * _tmp67 * _tmp73 - Scalar(1.0) * _tmp75;
  const Scalar _tmp79 = _tmp77 * _tmp78;
  const Scalar _tmp80 = -Scalar(1.0) * _tmp56 - _tmp58 * _tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp82 = _tmp76 * _tmp81;
  const Scalar _tmp83 = _tmp78 + _tmp80 * _tmp82;
  const Scalar _tmp84 = _tmp47 * _tmp77;
  const Scalar _tmp85 = -_tmp83 * _tmp84 + Scalar(1.0);
  const Scalar _tmp86 = _tmp53 * _tmp55;
  const Scalar _tmp87 = _tmp77 * _tmp83;
  const Scalar _tmp88 = _tmp42 * _tmp87;
  const Scalar _tmp89 = _tmp32 + _tmp4;
  const Scalar _tmp90 = _tmp89 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp91 = _tmp23 + _tmp36;
  const Scalar _tmp92 = _tmp91 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp93 = std::pow(Scalar(std::pow(_tmp90, Scalar(2)) + std::pow(_tmp92, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp94 = _tmp92 * _tmp93;
  const Scalar _tmp95 = _tmp94 * fh1;
  const Scalar _tmp96 = _tmp29 * _tmp95;
  const Scalar _tmp97 = _tmp45 * _tmp75 - _tmp65 - _tmp73 * (_tmp45 * _tmp67 + _tmp66);
  const Scalar _tmp98 = _tmp77 * _tmp97;
  const Scalar _tmp99 = -_tmp30 + _tmp45 * _tmp56 - _tmp58 * _tmp98;
  const Scalar _tmp100 = _tmp82 * _tmp99 + _tmp97;
  const Scalar _tmp101 = _tmp100 * _tmp77;
  const Scalar _tmp102 = _tmp101 * _tmp42;
  const Scalar _tmp103 = -_tmp100 * _tmp84 - _tmp45;
  const Scalar _tmp104 = _tmp90 * _tmp93;
  const Scalar _tmp105 = _tmp104 * fh1;
  const Scalar _tmp106 = _tmp105 * _tmp29;
  const Scalar _tmp107 = _tmp71 * _tmp73 + _tmp72;
  const Scalar _tmp108 = 0;
  const Scalar _tmp109 = _tmp108 * _tmp86;
  const Scalar _tmp110 = _tmp108 * _tmp77;
  const Scalar _tmp111 = _tmp110 * _tmp42;
  const Scalar _tmp112 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp113 = _tmp112 * _tmp29;
  const Scalar _tmp114 = Scalar(1.0) * _tmp81;
  const Scalar _tmp115 = _tmp114 * _tmp42;
  const Scalar _tmp116 = _tmp114 * _tmp86;
  const Scalar _tmp117 = fh1 * (-_tmp104 * _tmp91 + _tmp89 * _tmp94);
  const Scalar _tmp118 = _tmp117 * _tmp29;
  const Scalar _tmp119 = std::exp(_tmp106 * (_tmp102 * _tmp34 + _tmp103 * _tmp86 + Scalar(1.0)) +
                                  _tmp113 * (-_tmp109 * _tmp84 + _tmp111 * _tmp34) +
                                  _tmp118 * (_tmp115 * _tmp34 - _tmp116 * _tmp47) +
                                  _tmp96 * (_tmp34 * _tmp88 + _tmp85 * _tmp86));
  const Scalar _tmp120 = std::pow(_tmp41, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp121 = _tmp120 * _tmp35;
  const Scalar _tmp122 = _tmp121 * _tmp65;
  const Scalar _tmp123 = _tmp120 * _tmp34 * _tmp39;
  const Scalar _tmp124 = _tmp121 * _tmp45 - _tmp123 - _tmp46;
  const Scalar _tmp125 = _tmp123 * _tmp70;
  const Scalar _tmp126 =
      -_tmp121 * _tmp70 + _tmp122 - _tmp124 * _tmp75 - _tmp68 -
      _tmp73 * (-_tmp122 * _tmp45 - _tmp124 * _tmp67 + _tmp125 + _tmp45 * _tmp68) + _tmp74;
  const Scalar _tmp127 = _tmp126 * _tmp81;
  const Scalar _tmp128 = _tmp121 * _tmp30 + _tmp121 * _tmp38 - _tmp123 * _tmp33 - _tmp124 * _tmp56 -
                         _tmp30 * _tmp42 - _tmp57;
  const Scalar _tmp129 = std::pow(_tmp76, Scalar(-2));
  const Scalar _tmp130 = _tmp126 * _tmp129;
  const Scalar _tmp131 = _tmp58 * _tmp78;
  const Scalar _tmp132 = std::pow(_tmp58, Scalar(-2));
  const Scalar _tmp133 = _tmp132 * _tmp76;
  const Scalar _tmp134 = _tmp128 * _tmp133;
  const Scalar _tmp135 =
      _tmp127 * _tmp80 - _tmp134 * _tmp80 + _tmp82 * (-_tmp128 * _tmp79 + _tmp130 * _tmp131);
  const Scalar _tmp136 = _tmp43 * _tmp77;
  const Scalar _tmp137 = _tmp130 * _tmp43;
  const Scalar _tmp138 = _tmp130 * _tmp47;
  const Scalar _tmp139 = -_tmp124 * _tmp87 - _tmp135 * _tmp84 + _tmp138 * _tmp83;
  const Scalar _tmp140 = _tmp58 * _tmp97;
  const Scalar _tmp141 =
      _tmp127 * _tmp99 - _tmp134 * _tmp99 + _tmp82 * (-_tmp128 * _tmp98 + _tmp130 * _tmp140);
  const Scalar _tmp142 = _tmp100 * _tmp138 - _tmp101 * _tmp124 - _tmp141 * _tmp84;
  const Scalar _tmp143 = Scalar(1.0) * _tmp132;
  const Scalar _tmp144 = _tmp128 * _tmp143;
  const Scalar _tmp145 = _tmp47 * _tmp86;
  const Scalar _tmp146 = _tmp108 * _tmp112;
  const Scalar _tmp147 = _tmp146 * _tmp55;
  const Scalar _tmp148 = _tmp55 * fh1;
  const Scalar _tmp149 = _tmp148 * _tmp94;
  const Scalar _tmp150 = _tmp114 * _tmp117;
  const Scalar _tmp151 = _tmp150 * _tmp55;
  const Scalar _tmp152 = _tmp104 * _tmp148;
  const Scalar _tmp153 =
      std::exp(-_tmp103 * _tmp152 + _tmp147 * _tmp84 - _tmp149 * _tmp85 + _tmp151 * _tmp47);
  const Scalar _tmp154 = _tmp117 * _tmp144;
  const Scalar _tmp155 = _tmp47 * _tmp55;
  const Scalar _tmp156 = _tmp110 * _tmp112;
  const Scalar _tmp157 = _tmp156 * _tmp55;
  const Scalar _tmp158 = std::exp(-_tmp101 * _tmp105 - _tmp150 - _tmp156 - _tmp87 * _tmp95);
  const Scalar _tmp159 = _tmp105 * _tmp77;
  const Scalar _tmp160 = _tmp83 * _tmp95;
  const Scalar _tmp161 = _tmp100 * _tmp105;
  const Scalar _tmp162 = _tmp120 * _tmp40;
  const Scalar _tmp163 = _tmp123 * _tmp45 - _tmp162 + _tmp42;
  const Scalar _tmp164 =
      _tmp123 * _tmp65 - _tmp125 - _tmp163 * _tmp75 -
      _tmp73 * (-_tmp123 * _tmp66 + _tmp162 * _tmp70 - _tmp163 * _tmp67 - _tmp74);
  const Scalar _tmp165 = _tmp129 * _tmp164;
  const Scalar _tmp166 = _tmp165 * _tmp43;
  const Scalar _tmp167 = _tmp165 * _tmp47;
  const Scalar _tmp168 =
      _tmp123 * _tmp30 + _tmp123 * _tmp38 - _tmp162 * _tmp33 - _tmp163 * _tmp56 + _tmp33 * _tmp42;
  const Scalar _tmp169 = _tmp133 * _tmp168;
  const Scalar _tmp170 = _tmp164 * _tmp81;
  const Scalar _tmp171 =
      -_tmp169 * _tmp80 + _tmp170 * _tmp80 + _tmp82 * (_tmp131 * _tmp165 - _tmp168 * _tmp79);
  const Scalar _tmp172 = -_tmp163 * _tmp87 + _tmp167 * _tmp83 - _tmp171 * _tmp84;
  const Scalar _tmp173 = _tmp171 * _tmp77;
  const Scalar _tmp174 = _tmp143 * _tmp168;
  const Scalar _tmp175 = _tmp163 * _tmp86;
  const Scalar _tmp176 =
      -_tmp169 * _tmp99 + _tmp170 * _tmp99 + _tmp82 * (_tmp140 * _tmp165 - _tmp168 * _tmp98);
  const Scalar _tmp177 = _tmp100 * _tmp167 - _tmp101 * _tmp163 - _tmp176 * _tmp84;
  const Scalar _tmp178 = _tmp146 * _tmp165;
  const Scalar _tmp179 = _tmp117 * _tmp174;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp119 * (-_tmp106 * (-_tmp100 * _tmp137 + _tmp101 * _tmp121 - _tmp102 +
                                       _tmp136 * _tmp141 + _tmp142 * _tmp86) -
                           _tmp113 * (-_tmp108 * _tmp137 + _tmp109 * _tmp138 + _tmp110 * _tmp121 -
                                      _tmp110 * _tmp124 * _tmp86 - _tmp111) -
                           _tmp118 * (_tmp114 * _tmp121 - _tmp115 - _tmp116 * _tmp124 +
                                      _tmp144 * _tmp145 - _tmp144 * _tmp43) -
                           _tmp96 * (_tmp121 * _tmp87 + _tmp135 * _tmp136 - _tmp137 * _tmp83 +
                                     _tmp139 * _tmp86 - _tmp88));
  _res(2, 0) = -_tmp153 * (-_tmp124 * _tmp151 - _tmp124 * _tmp157 + _tmp138 * _tmp147 +
                           _tmp139 * _tmp149 + _tmp142 * _tmp152 + _tmp154 * _tmp155);
  _res(3, 0) = -_tmp158 * (-_tmp130 * _tmp146 - _tmp130 * _tmp160 - _tmp130 * _tmp161 +
                           _tmp135 * _tmp77 * _tmp95 + _tmp141 * _tmp159 - _tmp154);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp119 *
      (-_tmp106 * (-_tmp100 * _tmp166 + _tmp101 * _tmp123 + _tmp136 * _tmp176 + _tmp177 * _tmp86) -
       _tmp113 * (-_tmp108 * _tmp166 + _tmp109 * _tmp167 + _tmp110 * _tmp123 - _tmp110 * _tmp175) -
       _tmp118 * (_tmp114 * _tmp123 - _tmp114 * _tmp175 + _tmp145 * _tmp174 - _tmp174 * _tmp43) -
       _tmp96 * (_tmp123 * _tmp87 - _tmp166 * _tmp83 + _tmp172 * _tmp86 + _tmp173 * _tmp43));
  _res(2, 1) = -_tmp153 * (_tmp149 * _tmp172 - _tmp151 * _tmp163 + _tmp152 * _tmp177 +
                           _tmp155 * _tmp178 + _tmp155 * _tmp179 - _tmp157 * _tmp163);
  _res(3, 1) = -_tmp158 * (_tmp159 * _tmp176 - _tmp160 * _tmp165 - _tmp161 * _tmp165 +
                           _tmp173 * _tmp95 - _tmp178 - _tmp179);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
