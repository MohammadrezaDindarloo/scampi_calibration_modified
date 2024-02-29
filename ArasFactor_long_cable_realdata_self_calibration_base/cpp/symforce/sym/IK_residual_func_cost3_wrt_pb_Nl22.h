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
 * Symbolic function: IK_residual_func_cost3_wrt_pb_Nl22
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPbNl22(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 564

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (185)
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
  const Scalar _tmp8 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = 2 * _tmp0;
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp12 = _tmp0 * _tmp6;
  const Scalar _tmp13 = 2 * _tmp2 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp18 = _tmp2 * _tmp9;
  const Scalar _tmp19 = _tmp6 * _tmp8;
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp24 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = std::pow(_tmp17, Scalar(2));
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp30 =
      -Scalar(0.010999999999999999) * _tmp18 + Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp31 = -_tmp29 + _tmp30;
  const Scalar _tmp32 = _tmp28 + _tmp31;
  const Scalar _tmp33 = _tmp32 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 = _tmp27 + _tmp34;
  const Scalar _tmp36 = std::pow(_tmp35, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = _tmp26 * _tmp36;
  const Scalar _tmp38 = _tmp11 + _tmp14;
  const Scalar _tmp39 = _tmp38 + _tmp4;
  const Scalar _tmp40 = _tmp39 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = _tmp29 + _tmp30;
  const Scalar _tmp43 = _tmp28 + _tmp42;
  const Scalar _tmp44 = _tmp43 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp45 = _tmp41 * _tmp44;
  const Scalar _tmp46 = _tmp36 * _tmp45;
  const Scalar _tmp47 = _tmp17 * _tmp46 - _tmp33 * _tmp36;
  const Scalar _tmp48 = -_tmp28;
  const Scalar _tmp49 = _tmp31 + _tmp48;
  const Scalar _tmp50 = _tmp49 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp51 = -_tmp4;
  const Scalar _tmp52 = _tmp15 + _tmp51;
  const Scalar _tmp53 = _tmp52 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp50, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp50 * _tmp54;
  const Scalar _tmp56 = _tmp53 * _tmp54;
  const Scalar _tmp57 = Scalar(1.0) / (_tmp45 * _tmp56 - _tmp55);
  const Scalar _tmp58 = _tmp21 + _tmp23 - _tmp24;
  const Scalar _tmp59 = _tmp20 + _tmp25;
  const Scalar _tmp60 = _tmp56 * _tmp59;
  const Scalar _tmp61 = -_tmp56 * _tmp58 + _tmp60;
  const Scalar _tmp62 = _tmp57 * _tmp61;
  const Scalar _tmp63 = _tmp36 * _tmp59;
  const Scalar _tmp64 = _tmp17 * _tmp63;
  const Scalar _tmp65 = -_tmp45 * _tmp60 + _tmp55 * _tmp58;
  const Scalar _tmp66 = _tmp57 * _tmp65;
  const Scalar _tmp67 = Scalar(1.0) * _tmp39;
  const Scalar _tmp68 = Scalar(1.0) * _tmp43;
  const Scalar _tmp69 = (-_tmp52 + _tmp67) / (_tmp49 - _tmp68);
  const Scalar _tmp70 = -_tmp17 * _tmp37 - _tmp47 * _tmp62 + _tmp64 -
                        _tmp69 * (_tmp33 * _tmp37 - _tmp45 * _tmp64 - _tmp47 * _tmp66);
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp47 * _tmp71;
  const Scalar _tmp73 = _tmp67 + _tmp68 * _tmp69;
  const Scalar _tmp74 = 0;
  const Scalar _tmp75 = _tmp56 * _tmp57;
  const Scalar _tmp76 = _tmp74 * _tmp75;
  const Scalar _tmp77 = _tmp71 * _tmp74;
  const Scalar _tmp78 = _tmp36 * _tmp77;
  const Scalar _tmp79 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp80 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp44, Scalar(2))));
  const Scalar _tmp81 = _tmp41 * _tmp80;
  const Scalar _tmp82 = _tmp79 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp84 = _tmp81 * (_tmp39 * _tmp44 * _tmp83 - _tmp40 * _tmp43 * _tmp83);
  const Scalar _tmp85 = _tmp49 * _tmp56 - _tmp52 * _tmp55 + _tmp56 * _tmp84;
  const Scalar _tmp86 = _tmp57 * _tmp85;
  const Scalar _tmp87 = _tmp16 * _tmp36;
  const Scalar _tmp88 = _tmp32 * _tmp36;
  const Scalar _tmp89 = _tmp17 * _tmp36;
  const Scalar _tmp90 = _tmp17 * _tmp88 - _tmp33 * _tmp87 - _tmp47 * _tmp86 + _tmp84 * _tmp89;
  const Scalar _tmp91 = -Scalar(1.0) * _tmp62 + Scalar(1.0) * _tmp66 * _tmp69;
  const Scalar _tmp92 = _tmp71 * _tmp91;
  const Scalar _tmp93 = -Scalar(1.0) * _tmp86 - _tmp90 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp95 = _tmp70 * _tmp94;
  const Scalar _tmp96 = _tmp91 + _tmp93 * _tmp95;
  const Scalar _tmp97 = _tmp71 * _tmp96;
  const Scalar _tmp98 = _tmp36 * _tmp97;
  const Scalar _tmp99 = -_tmp47 * _tmp97 + Scalar(1.0);
  const Scalar _tmp100 = _tmp38 + _tmp51;
  const Scalar _tmp101 = _tmp100 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp102 = _tmp42 + _tmp48;
  const Scalar _tmp103 = _tmp102 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp104 =
      std::pow(Scalar(std::pow(_tmp101, Scalar(2)) + std::pow(_tmp103, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp105 = _tmp103 * _tmp104;
  const Scalar _tmp106 = _tmp105 * fh1;
  const Scalar _tmp107 = _tmp106 * _tmp81;
  const Scalar _tmp108 = Scalar(1.0) * _tmp94;
  const Scalar _tmp109 = _tmp47 * _tmp75;
  const Scalar _tmp110 = _tmp108 * _tmp36;
  const Scalar _tmp111 = _tmp101 * _tmp104;
  const Scalar _tmp112 = fh1 * (_tmp100 * _tmp105 - _tmp102 * _tmp111);
  const Scalar _tmp113 = _tmp112 * _tmp81;
  const Scalar _tmp114 = _tmp45 * _tmp59;
  const Scalar _tmp115 = _tmp45 * _tmp62 - _tmp59 - _tmp69 * (_tmp114 + _tmp45 * _tmp66);
  const Scalar _tmp116 = _tmp115 * _tmp71;
  const Scalar _tmp117 = -_tmp116 * _tmp90 + _tmp45 * _tmp86 - _tmp84;
  const Scalar _tmp118 = _tmp115 + _tmp117 * _tmp95;
  const Scalar _tmp119 = _tmp118 * _tmp71;
  const Scalar _tmp120 = _tmp119 * _tmp36;
  const Scalar _tmp121 = -_tmp119 * _tmp47 - _tmp45;
  const Scalar _tmp122 = _tmp111 * fh1;
  const Scalar _tmp123 = _tmp122 * _tmp81;
  const Scalar _tmp124 = std::exp(_tmp107 * (_tmp17 * _tmp98 + _tmp75 * _tmp99) +
                                  _tmp113 * (-_tmp108 * _tmp109 + _tmp110 * _tmp17) +
                                  _tmp123 * (_tmp120 * _tmp17 + _tmp121 * _tmp75 + Scalar(1.0)) +
                                  _tmp82 * (_tmp17 * _tmp78 - _tmp72 * _tmp76));
  const Scalar _tmp125 = std::pow(_tmp35, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp126 = _tmp125 * _tmp17 * _tmp33;
  const Scalar _tmp127 = _tmp125 * _tmp27;
  const Scalar _tmp128 = -_tmp126 + _tmp127 * _tmp45 - _tmp46;
  const Scalar _tmp129 = _tmp128 * _tmp75;
  const Scalar _tmp130 = _tmp127 * _tmp59;
  const Scalar _tmp131 = _tmp126 * _tmp26;
  const Scalar _tmp132 =
      -_tmp127 * _tmp26 - _tmp128 * _tmp62 + _tmp130 + _tmp37 - _tmp63 -
      _tmp69 * (-_tmp128 * _tmp66 - _tmp130 * _tmp45 + _tmp131 + _tmp45 * _tmp63);
  const Scalar _tmp133 = std::pow(_tmp70, Scalar(-2));
  const Scalar _tmp134 = _tmp133 * _tmp47;
  const Scalar _tmp135 = _tmp132 * _tmp134;
  const Scalar _tmp136 = _tmp132 * _tmp133;
  const Scalar _tmp137 = _tmp136 * _tmp89;
  const Scalar _tmp138 = _tmp132 * _tmp94;
  const Scalar _tmp139 = -_tmp126 * _tmp16 + _tmp127 * _tmp32 + _tmp127 * _tmp84 -
                         _tmp128 * _tmp86 - _tmp36 * _tmp84 - _tmp88;
  const Scalar _tmp140 = _tmp133 * _tmp90;
  const Scalar _tmp141 = _tmp132 * _tmp140;
  const Scalar _tmp142 = std::pow(_tmp90, Scalar(-2));
  const Scalar _tmp143 = _tmp142 * _tmp70;
  const Scalar _tmp144 = _tmp139 * _tmp143;
  const Scalar _tmp145 =
      _tmp117 * _tmp138 - _tmp117 * _tmp144 + _tmp95 * (_tmp115 * _tmp141 - _tmp116 * _tmp139);
  const Scalar _tmp146 = _tmp71 * _tmp89;
  const Scalar _tmp147 = _tmp118 * _tmp135 - _tmp119 * _tmp128 - _tmp145 * _tmp72;
  const Scalar _tmp148 =
      _tmp138 * _tmp93 - _tmp144 * _tmp93 + _tmp95 * (-_tmp139 * _tmp92 + _tmp141 * _tmp91);
  const Scalar _tmp149 = -_tmp128 * _tmp97 + _tmp135 * _tmp96 - _tmp148 * _tmp72;
  const Scalar _tmp150 = Scalar(1.0) * _tmp142;
  const Scalar _tmp151 = _tmp139 * _tmp150;
  const Scalar _tmp152 = _tmp122 * _tmp57;
  const Scalar _tmp153 = _tmp108 * _tmp112;
  const Scalar _tmp154 = _tmp47 * _tmp57;
  const Scalar _tmp155 = _tmp106 * _tmp57;
  const Scalar _tmp156 = _tmp74 * _tmp79;
  const Scalar _tmp157 = _tmp156 * _tmp57;
  const Scalar _tmp158 =
      std::exp(-_tmp121 * _tmp152 + _tmp153 * _tmp154 - _tmp155 * _tmp99 + _tmp157 * _tmp72);
  const Scalar _tmp159 = _tmp77 * _tmp79;
  const Scalar _tmp160 = _tmp128 * _tmp57;
  const Scalar _tmp161 = _tmp112 * _tmp151;
  const Scalar _tmp162 = std::exp(-_tmp106 * _tmp97 - _tmp119 * _tmp122 - _tmp153 - _tmp159);
  const Scalar _tmp163 = _tmp118 * _tmp122;
  const Scalar _tmp164 = _tmp106 * _tmp96;
  const Scalar _tmp165 = _tmp122 * _tmp71;
  const Scalar _tmp166 = _tmp125 * _tmp34;
  const Scalar _tmp167 = _tmp126 * _tmp45 - _tmp166 + _tmp36;
  const Scalar _tmp168 = _tmp167 * _tmp57;
  const Scalar _tmp169 =
      _tmp126 * _tmp32 + _tmp126 * _tmp84 - _tmp16 * _tmp166 - _tmp168 * _tmp85 + _tmp87;
  const Scalar _tmp170 = _tmp150 * _tmp169;
  const Scalar _tmp171 = _tmp168 * _tmp56;
  const Scalar _tmp172 =
      _tmp126 * _tmp59 - _tmp131 - _tmp168 * _tmp61 -
      _tmp69 * (-_tmp114 * _tmp126 + _tmp166 * _tmp26 - _tmp168 * _tmp65 - _tmp37);
  const Scalar _tmp173 = _tmp172 * _tmp94;
  const Scalar _tmp174 = _tmp143 * _tmp169;
  const Scalar _tmp175 = _tmp140 * _tmp172;
  const Scalar _tmp176 =
      _tmp117 * _tmp173 - _tmp117 * _tmp174 + _tmp95 * (_tmp115 * _tmp175 - _tmp116 * _tmp169);
  const Scalar _tmp177 = _tmp133 * _tmp172;
  const Scalar _tmp178 = _tmp177 * _tmp89;
  const Scalar _tmp179 = _tmp134 * _tmp172;
  const Scalar _tmp180 = _tmp118 * _tmp179 - _tmp119 * _tmp167 - _tmp176 * _tmp72;
  const Scalar _tmp181 =
      _tmp173 * _tmp93 - _tmp174 * _tmp93 + _tmp95 * (-_tmp169 * _tmp92 + _tmp175 * _tmp91);
  const Scalar _tmp182 = _tmp181 * _tmp71;
  const Scalar _tmp183 = -_tmp167 * _tmp97 + _tmp179 * _tmp96 - _tmp181 * _tmp72;
  const Scalar _tmp184 = _tmp112 * _tmp170;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp124 * (-_tmp107 * (_tmp127 * _tmp97 - _tmp137 * _tmp96 + _tmp146 * _tmp148 +
                                       _tmp149 * _tmp75 - _tmp98) -
                           _tmp113 * (_tmp108 * _tmp127 - _tmp108 * _tmp129 + _tmp109 * _tmp151 -
                                      _tmp110 - _tmp151 * _tmp89) -
                           _tmp123 * (-_tmp118 * _tmp137 + _tmp119 * _tmp127 - _tmp120 +
                                      _tmp145 * _tmp146 + _tmp147 * _tmp75) -
                           _tmp82 * (_tmp127 * _tmp77 - _tmp129 * _tmp77 + _tmp135 * _tmp76 -
                                     _tmp137 * _tmp74 - _tmp78));
  _res(2, 0) = -_tmp158 * (_tmp135 * _tmp157 + _tmp147 * _tmp152 + _tmp149 * _tmp155 -
                           _tmp153 * _tmp160 + _tmp154 * _tmp161 - _tmp159 * _tmp160);
  _res(3, 0) = -_tmp162 * (_tmp106 * _tmp148 * _tmp71 - _tmp136 * _tmp156 - _tmp136 * _tmp163 -
                           _tmp136 * _tmp164 + _tmp145 * _tmp165 - _tmp161);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp124 *
      (-_tmp107 * (_tmp126 * _tmp97 - _tmp178 * _tmp96 + _tmp182 * _tmp89 + _tmp183 * _tmp75) -
       _tmp113 * (_tmp108 * _tmp126 - _tmp108 * _tmp171 + _tmp109 * _tmp170 - _tmp170 * _tmp89) -
       _tmp123 * (-_tmp118 * _tmp178 + _tmp119 * _tmp126 + _tmp146 * _tmp176 + _tmp180 * _tmp75) -
       _tmp82 * (_tmp126 * _tmp77 - _tmp171 * _tmp77 - _tmp178 * _tmp74 + _tmp179 * _tmp76));
  _res(2, 1) = -_tmp158 * (_tmp152 * _tmp180 - _tmp153 * _tmp168 + _tmp154 * _tmp184 +
                           _tmp155 * _tmp183 + _tmp157 * _tmp179 - _tmp159 * _tmp168);
  _res(3, 1) = -_tmp162 * (_tmp106 * _tmp182 - _tmp156 * _tmp177 - _tmp163 * _tmp177 -
                           _tmp164 * _tmp177 + _tmp165 * _tmp176 - _tmp184);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
