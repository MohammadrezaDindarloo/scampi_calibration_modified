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
 * Symbolic function: IK_residual_func_cost3_wrt_pa_Nl11
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPaNl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 570

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (184)
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
  const Scalar _tmp7 = 2 * _tmp0;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp2 * _tmp9;
  const Scalar _tmp11 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp12 = 2 * _tmp2 * _tmp6;
  const Scalar _tmp13 = _tmp0 * _tmp9;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp5;
  const Scalar _tmp17 = _tmp16 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp18 = std::pow(_tmp17, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = _tmp2 * _tmp7;
  const Scalar _tmp22 = _tmp6 * _tmp9;
  const Scalar _tmp23 =
      -Scalar(0.010999999999999999) * _tmp21 + Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp24 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp26 = _tmp23 - _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp29 = std::pow(_tmp28, Scalar(2));
  const Scalar _tmp30 = _tmp18 + _tmp29;
  const Scalar _tmp31 = std::pow(_tmp30, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp32 =
      -Scalar(0.010999999999999999) * _tmp24 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp33 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp34 = -_tmp33;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp36 = _tmp32 + _tmp34 - _tmp35;
  const Scalar _tmp37 = _tmp31 * _tmp36;
  const Scalar _tmp38 = _tmp11 + _tmp14;
  const Scalar _tmp39 = _tmp38 + _tmp5;
  const Scalar _tmp40 = _tmp39 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = _tmp23 + _tmp25;
  const Scalar _tmp43 = _tmp20 + _tmp42;
  const Scalar _tmp44 = _tmp43 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp45 = _tmp41 * _tmp44;
  const Scalar _tmp46 = _tmp31 * _tmp45;
  const Scalar _tmp47 = _tmp28 * _tmp31;
  const Scalar _tmp48 = _tmp17 * _tmp46 - _tmp47;
  const Scalar _tmp49 = _tmp38 + _tmp4;
  const Scalar _tmp50 = _tmp49 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp51 = _tmp19 + _tmp42;
  const Scalar _tmp52 = _tmp51 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp50, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp50 * _tmp53;
  const Scalar _tmp55 = _tmp52 * _tmp53;
  const Scalar _tmp56 = Scalar(1.0) / (_tmp45 * _tmp54 - _tmp55);
  const Scalar _tmp57 = _tmp32 + _tmp35;
  const Scalar _tmp58 = _tmp34 + _tmp57;
  const Scalar _tmp59 = _tmp54 * _tmp58;
  const Scalar _tmp60 = _tmp33 + _tmp57;
  const Scalar _tmp61 = _tmp56 * (-_tmp45 * _tmp59 + _tmp55 * _tmp60);
  const Scalar _tmp62 = _tmp31 * _tmp58;
  const Scalar _tmp63 = _tmp17 * _tmp62;
  const Scalar _tmp64 = Scalar(1.0) * _tmp43;
  const Scalar _tmp65 = Scalar(1.0) * _tmp39;
  const Scalar _tmp66 = (-_tmp49 + _tmp65) / (_tmp51 - _tmp64);
  const Scalar _tmp67 = _tmp56 * (-_tmp54 * _tmp60 + _tmp59);
  const Scalar _tmp68 = -_tmp17 * _tmp37 - _tmp48 * _tmp67 + _tmp63 -
                        _tmp66 * (_tmp36 * _tmp47 - _tmp45 * _tmp63 - _tmp48 * _tmp61);
  const Scalar _tmp69 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp44, Scalar(2))));
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp41 * _tmp69;
  const Scalar _tmp72 = _tmp71 * (_tmp39 * _tmp44 * _tmp70 - _tmp40 * _tmp43 * _tmp70);
  const Scalar _tmp73 = _tmp56 * (-_tmp49 * _tmp55 + _tmp51 * _tmp54 + _tmp54 * _tmp72);
  const Scalar _tmp74 = _tmp17 * _tmp31;
  const Scalar _tmp75 = _tmp27 * _tmp31;
  const Scalar _tmp76 = -_tmp16 * _tmp47 + _tmp17 * _tmp75 - _tmp48 * _tmp73 + _tmp72 * _tmp74;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp76);
  const Scalar _tmp78 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp79 = Scalar(1.0) * _tmp61 * _tmp66 - Scalar(1.0) * _tmp67;
  const Scalar _tmp80 = _tmp78 * _tmp79;
  const Scalar _tmp81 = -Scalar(1.0) * _tmp73 - _tmp76 * _tmp80;
  const Scalar _tmp82 = _tmp77 * _tmp81;
  const Scalar _tmp83 = _tmp68 * _tmp82 + _tmp79;
  const Scalar _tmp84 = _tmp48 * _tmp78;
  const Scalar _tmp85 = -_tmp83 * _tmp84 + Scalar(1.0);
  const Scalar _tmp86 = _tmp54 * _tmp56;
  const Scalar _tmp87 = _tmp78 * _tmp83;
  const Scalar _tmp88 = _tmp31 * _tmp87;
  const Scalar _tmp89 = _tmp15 + _tmp4;
  const Scalar _tmp90 = _tmp89 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp91 = _tmp19 + _tmp26;
  const Scalar _tmp92 = _tmp91 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp93 = std::pow(Scalar(std::pow(_tmp90, Scalar(2)) + std::pow(_tmp92, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp94 = _tmp92 * _tmp93;
  const Scalar _tmp95 = _tmp94 * fh1;
  const Scalar _tmp96 = _tmp71 * _tmp95;
  const Scalar _tmp97 = _tmp45 * _tmp58;
  const Scalar _tmp98 = _tmp45 * _tmp67 - _tmp58 - _tmp66 * (_tmp45 * _tmp61 + _tmp97);
  const Scalar _tmp99 = _tmp78 * _tmp98;
  const Scalar _tmp100 = _tmp45 * _tmp73 - _tmp72 - _tmp76 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp77;
  const Scalar _tmp102 = _tmp101 * _tmp68 + _tmp98;
  const Scalar _tmp103 = _tmp102 * _tmp78;
  const Scalar _tmp104 = _tmp103 * _tmp31;
  const Scalar _tmp105 = -_tmp102 * _tmp84 - _tmp45;
  const Scalar _tmp106 = _tmp90 * _tmp93;
  const Scalar _tmp107 = _tmp106 * fh1;
  const Scalar _tmp108 = _tmp107 * _tmp71;
  const Scalar _tmp109 = _tmp64 * _tmp66 + _tmp65;
  const Scalar _tmp110 = 0;
  const Scalar _tmp111 = _tmp110 * _tmp86;
  const Scalar _tmp112 = _tmp110 * _tmp78;
  const Scalar _tmp113 = _tmp112 * _tmp31;
  const Scalar _tmp114 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp115 = _tmp114 * _tmp71;
  const Scalar _tmp116 = Scalar(1.0) * _tmp77;
  const Scalar _tmp117 = _tmp116 * _tmp86;
  const Scalar _tmp118 = _tmp116 * _tmp31;
  const Scalar _tmp119 = fh1 * (-_tmp106 * _tmp91 + _tmp89 * _tmp94);
  const Scalar _tmp120 = _tmp119 * _tmp71;
  const Scalar _tmp121 = std::exp(_tmp108 * (_tmp104 * _tmp17 + _tmp105 * _tmp86 + Scalar(1.0)) +
                                  _tmp115 * (-_tmp111 * _tmp84 + _tmp113 * _tmp17) +
                                  _tmp120 * (-_tmp117 * _tmp48 + _tmp118 * _tmp17) +
                                  _tmp96 * (_tmp17 * _tmp88 + _tmp85 * _tmp86));
  const Scalar _tmp122 = std::pow(_tmp30, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp123 = _tmp122 * _tmp18;
  const Scalar _tmp124 = _tmp122 * _tmp17 * _tmp28;
  const Scalar _tmp125 = _tmp123 * _tmp45 - _tmp124 - _tmp46;
  const Scalar _tmp126 = _tmp123 * _tmp58;
  const Scalar _tmp127 = _tmp124 * _tmp36;
  const Scalar _tmp128 =
      -_tmp123 * _tmp36 - _tmp125 * _tmp67 + _tmp126 + _tmp37 - _tmp62 -
      _tmp66 * (-_tmp125 * _tmp61 - _tmp126 * _tmp45 + _tmp127 + _tmp45 * _tmp62);
  const Scalar _tmp129 = std::pow(_tmp68, Scalar(-2));
  const Scalar _tmp130 = _tmp128 * _tmp129;
  const Scalar _tmp131 = _tmp110 * _tmp74;
  const Scalar _tmp132 = _tmp112 * _tmp86;
  const Scalar _tmp133 = _tmp111 * _tmp48;
  const Scalar _tmp134 = _tmp123 * _tmp27 + _tmp123 * _tmp72 - _tmp124 * _tmp16 - _tmp125 * _tmp73 -
                         _tmp31 * _tmp72 - _tmp75;
  const Scalar _tmp135 = _tmp130 * _tmp76;
  const Scalar _tmp136 = _tmp68 * _tmp77;
  const Scalar _tmp137 = std::pow(_tmp76, Scalar(-2));
  const Scalar _tmp138 = _tmp137 * _tmp68;
  const Scalar _tmp139 = _tmp134 * _tmp138;
  const Scalar _tmp140 =
      -_tmp100 * _tmp139 + _tmp101 * _tmp128 + _tmp136 * (-_tmp134 * _tmp99 + _tmp135 * _tmp98);
  const Scalar _tmp141 = _tmp74 * _tmp78;
  const Scalar _tmp142 = _tmp102 * _tmp74;
  const Scalar _tmp143 = _tmp102 * _tmp48;
  const Scalar _tmp144 = -_tmp103 * _tmp125 + _tmp130 * _tmp143 - _tmp140 * _tmp84;
  const Scalar _tmp145 =
      _tmp128 * _tmp82 + _tmp136 * (-_tmp134 * _tmp80 + _tmp135 * _tmp79) - _tmp139 * _tmp81;
  const Scalar _tmp146 = _tmp74 * _tmp83;
  const Scalar _tmp147 = _tmp48 * _tmp83;
  const Scalar _tmp148 = -_tmp125 * _tmp87 + _tmp130 * _tmp147 - _tmp145 * _tmp84;
  const Scalar _tmp149 = Scalar(1.0) * _tmp137;
  const Scalar _tmp150 = _tmp149 * _tmp48 * _tmp86;
  const Scalar _tmp151 = _tmp149 * _tmp74;
  const Scalar _tmp152 = _tmp116 * _tmp119;
  const Scalar _tmp153 = _tmp48 * _tmp56;
  const Scalar _tmp154 = _tmp56 * fh1;
  const Scalar _tmp155 = _tmp106 * _tmp154;
  const Scalar _tmp156 = _tmp154 * _tmp94;
  const Scalar _tmp157 = _tmp110 * _tmp114;
  const Scalar _tmp158 = std::exp(-_tmp105 * _tmp155 + _tmp152 * _tmp153 - _tmp156 * _tmp85 +
                                  _tmp157 * _tmp56 * _tmp84);
  const Scalar _tmp159 = _tmp112 * _tmp114;
  const Scalar _tmp160 = _tmp159 * _tmp56;
  const Scalar _tmp161 = _tmp130 * _tmp157;
  const Scalar _tmp162 = _tmp152 * _tmp56;
  const Scalar _tmp163 = _tmp119 * _tmp149;
  const Scalar _tmp164 = _tmp134 * _tmp163;
  const Scalar _tmp165 = std::exp(-_tmp103 * _tmp107 - _tmp152 - _tmp159 - _tmp87 * _tmp95);
  const Scalar _tmp166 = _tmp78 * fh1;
  const Scalar _tmp167 = _tmp106 * _tmp166;
  const Scalar _tmp168 = _tmp83 * _tmp95;
  const Scalar _tmp169 = _tmp102 * _tmp107;
  const Scalar _tmp170 = _tmp122 * _tmp29;
  const Scalar _tmp171 = _tmp124 * _tmp45 - _tmp170 + _tmp31;
  const Scalar _tmp172 =
      _tmp124 * _tmp27 + _tmp124 * _tmp72 - _tmp16 * _tmp170 + _tmp16 * _tmp31 - _tmp171 * _tmp73;
  const Scalar _tmp173 =
      _tmp124 * _tmp58 - _tmp127 - _tmp171 * _tmp67 -
      _tmp66 * (-_tmp124 * _tmp97 + _tmp170 * _tmp36 - _tmp171 * _tmp61 - _tmp37);
  const Scalar _tmp174 = _tmp129 * _tmp173;
  const Scalar _tmp175 = _tmp174 * _tmp76;
  const Scalar _tmp176 = _tmp138 * _tmp172;
  const Scalar _tmp177 =
      _tmp136 * (-_tmp172 * _tmp80 + _tmp175 * _tmp79) + _tmp173 * _tmp82 - _tmp176 * _tmp81;
  const Scalar _tmp178 = _tmp147 * _tmp174 - _tmp171 * _tmp87 - _tmp177 * _tmp84;
  const Scalar _tmp179 = _tmp177 * _tmp78;
  const Scalar _tmp180 =
      -_tmp100 * _tmp176 + _tmp101 * _tmp173 + _tmp136 * (-_tmp172 * _tmp99 + _tmp175 * _tmp98);
  const Scalar _tmp181 = -_tmp103 * _tmp171 + _tmp143 * _tmp174 - _tmp180 * _tmp84;
  const Scalar _tmp182 = _tmp157 * _tmp174;
  const Scalar _tmp183 = _tmp163 * _tmp172;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp121 * (-_tmp108 * (_tmp103 * _tmp123 - _tmp104 - _tmp130 * _tmp142 +
                                       _tmp140 * _tmp141 + _tmp144 * _tmp86) -
                           _tmp115 * (_tmp112 * _tmp123 - _tmp113 - _tmp125 * _tmp132 -
                                      _tmp130 * _tmp131 + _tmp130 * _tmp133) -
                           _tmp120 * (_tmp116 * _tmp123 - _tmp117 * _tmp125 - _tmp118 +
                                      _tmp134 * _tmp150 - _tmp134 * _tmp151) -
                           _tmp96 * (_tmp123 * _tmp87 - _tmp130 * _tmp146 + _tmp141 * _tmp145 +
                                     _tmp148 * _tmp86 - _tmp88));
  _res(2, 0) = -_tmp158 * (-_tmp125 * _tmp160 - _tmp125 * _tmp162 + _tmp144 * _tmp155 +
                           _tmp148 * _tmp156 + _tmp153 * _tmp161 + _tmp153 * _tmp164);
  _res(3, 0) = -_tmp165 * (-_tmp130 * _tmp168 - _tmp130 * _tmp169 + _tmp140 * _tmp167 +
                           _tmp145 * _tmp166 * _tmp94 - _tmp161 - _tmp164);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp121 *
      (-_tmp108 * (_tmp103 * _tmp124 + _tmp141 * _tmp180 - _tmp142 * _tmp174 + _tmp181 * _tmp86) -
       _tmp115 * (_tmp112 * _tmp124 - _tmp131 * _tmp174 - _tmp132 * _tmp171 + _tmp133 * _tmp174) -
       _tmp120 * (_tmp116 * _tmp124 - _tmp117 * _tmp171 + _tmp150 * _tmp172 - _tmp151 * _tmp172) -
       _tmp96 * (_tmp124 * _tmp87 - _tmp146 * _tmp174 + _tmp178 * _tmp86 + _tmp179 * _tmp74));
  _res(2, 1) = -_tmp158 * (_tmp153 * _tmp182 + _tmp153 * _tmp183 + _tmp155 * _tmp181 +
                           _tmp156 * _tmp178 - _tmp160 * _tmp171 - _tmp162 * _tmp171);
  _res(3, 1) = -_tmp165 * (_tmp167 * _tmp180 - _tmp168 * _tmp174 - _tmp169 * _tmp174 +
                           _tmp179 * _tmp95 - _tmp182 - _tmp183);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
