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
 * Symbolic function: IK_residual_func_cost3_wrt_pd_Nl2
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPdNl2(
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

  // Intermediate terms (183)
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
  const Scalar _tmp18 = std::pow(_tmp17, Scalar(2));
  const Scalar _tmp19 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp19 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp21 = _tmp0 * _tmp11;
  const Scalar _tmp22 = _tmp6 * _tmp8;
  const Scalar _tmp23 =
      -Scalar(0.010999999999999999) * _tmp21 + Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = _tmp20 + _tmp25;
  const Scalar _tmp27 = _tmp26 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp28 = std::pow(_tmp27, Scalar(2));
  const Scalar _tmp29 = _tmp18 + _tmp28;
  const Scalar _tmp30 = std::pow(_tmp29, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp15 + _tmp4;
  const Scalar _tmp32 = _tmp31 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp33 = _tmp23 + _tmp24;
  const Scalar _tmp34 = _tmp20 + _tmp33;
  const Scalar _tmp35 = _tmp34 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp36 =
      std::sqrt(Scalar(std::pow(_tmp32, Scalar(2)) + std::pow(_tmp35, Scalar(2))));
  const Scalar _tmp37 = Scalar(1.0) / (_tmp36);
  const Scalar _tmp38 = Scalar(1.0) / (_tmp32);
  const Scalar _tmp39 = _tmp36 * _tmp38;
  const Scalar _tmp40 = _tmp39 * (_tmp31 * _tmp35 * _tmp37 - _tmp32 * _tmp34 * _tmp37);
  const Scalar _tmp41 = _tmp17 * _tmp30;
  const Scalar _tmp42 = _tmp35 * _tmp38;
  const Scalar _tmp43 = _tmp30 * _tmp42;
  const Scalar _tmp44 = _tmp17 * _tmp43 - _tmp27 * _tmp30;
  const Scalar _tmp45 = _tmp10 - _tmp14;
  const Scalar _tmp46 = _tmp4 + _tmp45;
  const Scalar _tmp47 = _tmp46 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp48 = -_tmp20;
  const Scalar _tmp49 = _tmp33 + _tmp48;
  const Scalar _tmp50 = _tmp49 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp51 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp50, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp52 = _tmp50 * _tmp51;
  const Scalar _tmp53 = _tmp47 * _tmp51;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp42 * _tmp53 - _tmp52);
  const Scalar _tmp55 = _tmp54 * (_tmp40 * _tmp53 - _tmp46 * _tmp52 + _tmp49 * _tmp53);
  const Scalar _tmp56 = _tmp16 * _tmp30;
  const Scalar _tmp57 = _tmp26 * _tmp30;
  const Scalar _tmp58 = _tmp17 * _tmp57 - _tmp27 * _tmp56 + _tmp40 * _tmp41 - _tmp44 * _tmp55;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp60 = Scalar(1.0) * _tmp59;
  const Scalar _tmp61 = _tmp30 * _tmp60;
  const Scalar _tmp62 = _tmp53 * _tmp54;
  const Scalar _tmp63 = _tmp60 * _tmp62;
  const Scalar _tmp64 = _tmp25 + _tmp48;
  const Scalar _tmp65 = _tmp45 + _tmp5;
  const Scalar _tmp66 = _tmp65 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp67 = _tmp64 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp68 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp67, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp69 = _tmp66 * _tmp68;
  const Scalar _tmp70 = _tmp67 * _tmp68;
  const Scalar _tmp71 = fh1 * (-_tmp64 * _tmp69 + _tmp65 * _tmp70);
  const Scalar _tmp72 = _tmp39 * _tmp71;
  const Scalar _tmp73 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp74 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp75 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp76 = _tmp74 + _tmp75;
  const Scalar _tmp77 = _tmp73 + _tmp76;
  const Scalar _tmp78 = _tmp30 * _tmp77;
  const Scalar _tmp79 = _tmp17 * _tmp78;
  const Scalar _tmp80 = -_tmp73 + _tmp76;
  const Scalar _tmp81 = _tmp30 * _tmp80;
  const Scalar _tmp82 = _tmp73 + _tmp74 - _tmp75;
  const Scalar _tmp83 = _tmp53 * _tmp77;
  const Scalar _tmp84 = _tmp54 * (-_tmp53 * _tmp82 + _tmp83);
  const Scalar _tmp85 = _tmp54 * (-_tmp42 * _tmp83 + _tmp52 * _tmp82);
  const Scalar _tmp86 = Scalar(1.0) * _tmp34;
  const Scalar _tmp87 = Scalar(1.0) * _tmp31;
  const Scalar _tmp88 = (-_tmp46 + _tmp87) / (_tmp49 - _tmp86);
  const Scalar _tmp89 = -_tmp17 * _tmp81 - _tmp44 * _tmp84 + _tmp79 -
                        _tmp88 * (_tmp27 * _tmp81 - _tmp42 * _tmp79 - _tmp44 * _tmp85);
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp86 * _tmp88 + _tmp87;
  const Scalar _tmp92 = 0;
  const Scalar _tmp93 = _tmp90 * _tmp92;
  const Scalar _tmp94 = _tmp30 * _tmp93;
  const Scalar _tmp95 = _tmp44 * _tmp90;
  const Scalar _tmp96 = _tmp62 * _tmp92;
  const Scalar _tmp97 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp98 = _tmp39 * _tmp97;
  const Scalar _tmp99 = _tmp42 * _tmp77;
  const Scalar _tmp100 = _tmp42 * _tmp84 - _tmp77 - _tmp88 * (_tmp42 * _tmp85 + _tmp99);
  const Scalar _tmp101 = _tmp58 * _tmp90;
  const Scalar _tmp102 = -_tmp100 * _tmp101 - _tmp40 + _tmp42 * _tmp55;
  const Scalar _tmp103 = _tmp59 * _tmp89;
  const Scalar _tmp104 = _tmp100 + _tmp102 * _tmp103;
  const Scalar _tmp105 = -_tmp104 * _tmp95 - _tmp42;
  const Scalar _tmp106 = _tmp104 * _tmp90;
  const Scalar _tmp107 = _tmp106 * _tmp30;
  const Scalar _tmp108 = _tmp69 * fh1;
  const Scalar _tmp109 = _tmp108 * _tmp39;
  const Scalar _tmp110 = -Scalar(1.0) * _tmp84 + Scalar(1.0) * _tmp85 * _tmp88;
  const Scalar _tmp111 = -_tmp101 * _tmp110 - Scalar(1.0) * _tmp55;
  const Scalar _tmp112 = _tmp103 * _tmp111 + _tmp110;
  const Scalar _tmp113 = -_tmp112 * _tmp95 + Scalar(1.0);
  const Scalar _tmp114 = _tmp112 * _tmp90;
  const Scalar _tmp115 = _tmp114 * _tmp30;
  const Scalar _tmp116 = _tmp70 * fh1;
  const Scalar _tmp117 = _tmp116 * _tmp39;
  const Scalar _tmp118 = std::exp(_tmp109 * (_tmp105 * _tmp62 + _tmp107 * _tmp17 + Scalar(1.0)) +
                                  _tmp117 * (_tmp113 * _tmp62 + _tmp115 * _tmp17) +
                                  _tmp72 * (_tmp17 * _tmp61 - _tmp44 * _tmp63) +
                                  _tmp98 * (_tmp17 * _tmp94 - _tmp95 * _tmp96));
  const Scalar _tmp119 = std::pow(_tmp29, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp120 = _tmp119 * _tmp18;
  const Scalar _tmp121 = _tmp119 * _tmp17 * _tmp27;
  const Scalar _tmp122 = _tmp120 * _tmp42 - _tmp121 - _tmp43;
  const Scalar _tmp123 = _tmp120 * _tmp26 + _tmp120 * _tmp40 - _tmp121 * _tmp16 - _tmp122 * _tmp55 -
                         _tmp30 * _tmp40 - _tmp57;
  const Scalar _tmp124 = std::pow(_tmp58, Scalar(-2));
  const Scalar _tmp125 = Scalar(1.0) * _tmp124;
  const Scalar _tmp126 = _tmp125 * _tmp41;
  const Scalar _tmp127 = _tmp125 * _tmp44 * _tmp62;
  const Scalar _tmp128 = _tmp121 * _tmp80;
  const Scalar _tmp129 =
      _tmp120 * _tmp77 - _tmp120 * _tmp80 - _tmp122 * _tmp84 - _tmp78 + _tmp81 -
      _tmp88 * (-_tmp120 * _tmp99 - _tmp122 * _tmp85 + _tmp128 + _tmp42 * _tmp78);
  const Scalar _tmp130 = std::pow(_tmp89, Scalar(-2));
  const Scalar _tmp131 = _tmp129 * _tmp130;
  const Scalar _tmp132 = _tmp104 * _tmp44;
  const Scalar _tmp133 = _tmp123 * _tmp90;
  const Scalar _tmp134 = _tmp130 * _tmp58;
  const Scalar _tmp135 = _tmp100 * _tmp134;
  const Scalar _tmp136 = _tmp129 * _tmp59;
  const Scalar _tmp137 = _tmp124 * _tmp89;
  const Scalar _tmp138 = _tmp123 * _tmp137;
  const Scalar _tmp139 =
      _tmp102 * _tmp136 - _tmp102 * _tmp138 + _tmp103 * (-_tmp100 * _tmp133 + _tmp129 * _tmp135);
  const Scalar _tmp140 = -_tmp106 * _tmp122 + _tmp131 * _tmp132 - _tmp139 * _tmp95;
  const Scalar _tmp141 = _tmp131 * _tmp41;
  const Scalar _tmp142 = _tmp41 * _tmp90;
  const Scalar _tmp143 = _tmp112 * _tmp44;
  const Scalar _tmp144 = _tmp110 * _tmp134;
  const Scalar _tmp145 =
      _tmp103 * (-_tmp110 * _tmp133 + _tmp129 * _tmp144) + _tmp111 * _tmp136 - _tmp111 * _tmp138;
  const Scalar _tmp146 = -_tmp114 * _tmp122 + _tmp131 * _tmp143 - _tmp145 * _tmp95;
  const Scalar _tmp147 = _tmp62 * _tmp93;
  const Scalar _tmp148 = _tmp44 * _tmp96;
  const Scalar _tmp149 = _tmp41 * _tmp92;
  const Scalar _tmp150 = _tmp60 * _tmp71;
  const Scalar _tmp151 = _tmp150 * _tmp54;
  const Scalar _tmp152 = _tmp54 * fh1;
  const Scalar _tmp153 = _tmp152 * _tmp69;
  const Scalar _tmp154 = _tmp152 * _tmp70;
  const Scalar _tmp155 = _tmp92 * _tmp97;
  const Scalar _tmp156 = std::exp(-_tmp105 * _tmp153 - _tmp113 * _tmp154 + _tmp151 * _tmp44 +
                                  _tmp155 * _tmp54 * _tmp95);
  const Scalar _tmp157 = _tmp93 * _tmp97;
  const Scalar _tmp158 = _tmp157 * _tmp54;
  const Scalar _tmp159 = _tmp125 * _tmp71;
  const Scalar _tmp160 = _tmp123 * _tmp159;
  const Scalar _tmp161 = _tmp44 * _tmp54;
  const Scalar _tmp162 = _tmp131 * _tmp155;
  const Scalar _tmp163 = std::exp(-_tmp106 * _tmp108 - _tmp114 * _tmp116 - _tmp150 - _tmp157);
  const Scalar _tmp164 = _tmp116 * _tmp90;
  const Scalar _tmp165 = _tmp104 * _tmp108;
  const Scalar _tmp166 = _tmp112 * _tmp116;
  const Scalar _tmp167 = _tmp119 * _tmp28;
  const Scalar _tmp168 = _tmp121 * _tmp42 - _tmp167 + _tmp30;
  const Scalar _tmp169 =
      _tmp121 * _tmp77 - _tmp128 - _tmp168 * _tmp84 -
      _tmp88 * (-_tmp121 * _tmp99 + _tmp167 * _tmp80 - _tmp168 * _tmp85 - _tmp81);
  const Scalar _tmp170 = _tmp130 * _tmp169;
  const Scalar _tmp171 =
      _tmp121 * _tmp26 + _tmp121 * _tmp40 - _tmp16 * _tmp167 - _tmp168 * _tmp55 + _tmp56;
  const Scalar _tmp172 = _tmp171 * _tmp90;
  const Scalar _tmp173 = _tmp169 * _tmp59;
  const Scalar _tmp174 = _tmp137 * _tmp171;
  const Scalar _tmp175 =
      _tmp102 * _tmp173 - _tmp102 * _tmp174 + _tmp103 * (-_tmp100 * _tmp172 + _tmp135 * _tmp169);
  const Scalar _tmp176 = -_tmp106 * _tmp168 + _tmp132 * _tmp170 - _tmp175 * _tmp95;
  const Scalar _tmp177 = _tmp170 * _tmp41;
  const Scalar _tmp178 = _tmp175 * _tmp90;
  const Scalar _tmp179 =
      _tmp103 * (-_tmp110 * _tmp172 + _tmp144 * _tmp169) + _tmp111 * _tmp173 - _tmp111 * _tmp174;
  const Scalar _tmp180 = -_tmp114 * _tmp168 + _tmp143 * _tmp170 - _tmp179 * _tmp95;
  const Scalar _tmp181 = _tmp155 * _tmp170;
  const Scalar _tmp182 = _tmp159 * _tmp171;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp118 * (-_tmp109 * (-_tmp104 * _tmp141 + _tmp106 * _tmp120 - _tmp107 +
                                       _tmp139 * _tmp142 + _tmp140 * _tmp62) -
                           _tmp117 * (-_tmp112 * _tmp141 + _tmp114 * _tmp120 - _tmp115 +
                                      _tmp142 * _tmp145 + _tmp146 * _tmp62) -
                           _tmp72 * (_tmp120 * _tmp60 - _tmp122 * _tmp63 - _tmp123 * _tmp126 +
                                     _tmp123 * _tmp127 - _tmp61) -
                           _tmp98 * (_tmp120 * _tmp93 - _tmp122 * _tmp147 + _tmp131 * _tmp148 -
                                     _tmp131 * _tmp149 - _tmp94));
  _res(2, 0) = -_tmp156 * (-_tmp122 * _tmp151 - _tmp122 * _tmp158 + _tmp140 * _tmp153 +
                           _tmp146 * _tmp154 + _tmp160 * _tmp161 + _tmp161 * _tmp162);
  _res(3, 0) = -_tmp163 * (_tmp108 * _tmp139 * _tmp90 - _tmp131 * _tmp165 - _tmp131 * _tmp166 +
                           _tmp145 * _tmp164 - _tmp160 - _tmp162);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp118 *
      (-_tmp109 * (-_tmp104 * _tmp177 + _tmp106 * _tmp121 + _tmp176 * _tmp62 + _tmp178 * _tmp41) -
       _tmp117 * (-_tmp112 * _tmp177 + _tmp114 * _tmp121 + _tmp142 * _tmp179 + _tmp180 * _tmp62) -
       _tmp72 * (_tmp121 * _tmp60 - _tmp126 * _tmp171 + _tmp127 * _tmp171 - _tmp168 * _tmp63) -
       _tmp98 * (_tmp121 * _tmp93 - _tmp147 * _tmp168 + _tmp148 * _tmp170 - _tmp149 * _tmp170));
  _res(2, 1) = -_tmp156 * (-_tmp151 * _tmp168 + _tmp153 * _tmp176 + _tmp154 * _tmp180 -
                           _tmp158 * _tmp168 + _tmp161 * _tmp181 + _tmp161 * _tmp182);
  _res(3, 1) = -_tmp163 * (_tmp108 * _tmp178 + _tmp164 * _tmp179 - _tmp165 * _tmp170 -
                           _tmp166 * _tmp170 - _tmp181 - _tmp182);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
