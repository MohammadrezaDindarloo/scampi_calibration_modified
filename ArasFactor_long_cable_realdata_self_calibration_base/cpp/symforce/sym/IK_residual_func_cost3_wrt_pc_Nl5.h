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
 * Symbolic function: IK_residual_func_cost3_wrt_pc_Nl5
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPcNl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 656

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (210)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp2 * _tmp5;
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = -Scalar(0.010999999999999999) * _tmp6 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp10 = 2 * _tmp0;
  const Scalar _tmp11 = _tmp10 * _tmp5;
  const Scalar _tmp12 = _tmp2 * _tmp7;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp13 + _tmp9;
  const Scalar _tmp15 = _tmp14 + _tmp4;
  const Scalar _tmp16 = _tmp15 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp17 = -_tmp4;
  const Scalar _tmp18 = _tmp14 + _tmp17;
  const Scalar _tmp19 = _tmp18 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp10 * _tmp2;
  const Scalar _tmp23 = _tmp5 * _tmp7;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 + Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp27 = _tmp24 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp30 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp29, Scalar(2))));
  const Scalar _tmp31 = Scalar(1.0) / (_tmp30);
  const Scalar _tmp32 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp33 = _tmp30 * _tmp32;
  const Scalar _tmp34 = _tmp33 * (_tmp18 * _tmp29 * _tmp31 - _tmp19 * _tmp28 * _tmp31);
  const Scalar _tmp35 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp36 = _tmp20 + _tmp27;
  const Scalar _tmp37 = _tmp36 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp38 = std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = std::pow(_tmp39, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp34 * _tmp40;
  const Scalar _tmp42 = _tmp36 * _tmp40;
  const Scalar _tmp43 = _tmp37 * _tmp40;
  const Scalar _tmp44 = -_tmp15 * _tmp43 + _tmp16 * _tmp41 + _tmp16 * _tmp42;
  const Scalar _tmp45 = _tmp29 * _tmp32;
  const Scalar _tmp46 = _tmp40 * _tmp45;
  const Scalar _tmp47 = _tmp16 * _tmp46 - _tmp43;
  const Scalar _tmp48 = Scalar(1.0) / (_tmp47);
  const Scalar _tmp49 = _tmp45 * _tmp48;
  const Scalar _tmp50 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp51 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp25 + Scalar(-0.010999999999999999);
  const Scalar _tmp52 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp53 = _tmp51 + _tmp52;
  const Scalar _tmp54 = _tmp50 + _tmp53;
  const Scalar _tmp55 = _tmp40 * _tmp54;
  const Scalar _tmp56 = -_tmp50 + _tmp53;
  const Scalar _tmp57 = _tmp40 * _tmp56;
  const Scalar _tmp58 = _tmp16 * _tmp57;
  const Scalar _tmp59 = -_tmp16 * _tmp55 + _tmp58;
  const Scalar _tmp60 = _tmp45 * _tmp56;
  const Scalar _tmp61 = _tmp43 * _tmp54 - _tmp45 * _tmp58;
  const Scalar _tmp62 = Scalar(1.0) * _tmp28;
  const Scalar _tmp63 = Scalar(1.0) * _tmp18;
  const Scalar _tmp64 = (-_tmp15 + _tmp63) / (_tmp36 - _tmp62);
  const Scalar _tmp65 = _tmp49 * _tmp59 - _tmp56 - _tmp64 * (_tmp49 * _tmp61 + _tmp60);
  const Scalar _tmp66 = -_tmp13 + _tmp9;
  const Scalar _tmp67 = _tmp4 + _tmp66;
  const Scalar _tmp68 = _tmp67 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp69 = _tmp24 - _tmp26;
  const Scalar _tmp70 = _tmp20 + _tmp69;
  const Scalar _tmp71 = _tmp70 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp72 = std::pow(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp71, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp73 = _tmp68 * _tmp72;
  const Scalar _tmp74 = _tmp50 + _tmp51 - _tmp52;
  const Scalar _tmp75 = _tmp71 * _tmp72;
  const Scalar _tmp76 = _tmp45 * _tmp73 - _tmp75;
  const Scalar _tmp77 = _tmp48 * _tmp76;
  const Scalar _tmp78 = _tmp56 * _tmp73 - _tmp59 * _tmp77 -
                        _tmp64 * (-_tmp60 * _tmp73 - _tmp61 * _tmp77 + _tmp74 * _tmp75) -
                        _tmp73 * _tmp74;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp78);
  const Scalar _tmp80 = _tmp34 * _tmp73 - _tmp44 * _tmp77 - _tmp67 * _tmp75 + _tmp70 * _tmp73;
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = -_tmp34 + _tmp44 * _tmp49 - _tmp65 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp84 = _tmp78 * _tmp83;
  const Scalar _tmp85 = _tmp65 + _tmp82 * _tmp84;
  const Scalar _tmp86 = _tmp76 * _tmp79;
  const Scalar _tmp87 = -_tmp45 - _tmp85 * _tmp86;
  const Scalar _tmp88 = _tmp40 * _tmp48;
  const Scalar _tmp89 = _tmp87 * _tmp88;
  const Scalar _tmp90 = _tmp73 * _tmp79;
  const Scalar _tmp91 = _tmp17 + _tmp66;
  const Scalar _tmp92 = _tmp91 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp93 = _tmp21 + _tmp69;
  const Scalar _tmp94 = _tmp93 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp95 = std::pow(Scalar(std::pow(_tmp92, Scalar(2)) + std::pow(_tmp94, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp96 = _tmp92 * _tmp95;
  const Scalar _tmp97 = _tmp96 * fh1;
  const Scalar _tmp98 = _tmp33 * _tmp97;
  const Scalar _tmp99 = _tmp16 * _tmp40;
  const Scalar _tmp100 = Scalar(1.0) * _tmp83;
  const Scalar _tmp101 = _tmp100 * _tmp77;
  const Scalar _tmp102 = _tmp94 * _tmp95;
  const Scalar _tmp103 = fh1 * (_tmp102 * _tmp91 - _tmp93 * _tmp96);
  const Scalar _tmp104 = _tmp103 * _tmp33;
  const Scalar _tmp105 = Scalar(1.0) * _tmp48;
  const Scalar _tmp106 = _tmp105 * _tmp64;
  const Scalar _tmp107 = -_tmp105 * _tmp59 + _tmp106 * _tmp61;
  const Scalar _tmp108 = -_tmp105 * _tmp44 - _tmp107 * _tmp81;
  const Scalar _tmp109 = _tmp107 + _tmp108 * _tmp84;
  const Scalar _tmp110 = -_tmp109 * _tmp86 + Scalar(1.0);
  const Scalar _tmp111 = _tmp110 * _tmp88;
  const Scalar _tmp112 = _tmp102 * fh1;
  const Scalar _tmp113 = _tmp112 * _tmp33;
  const Scalar _tmp114 = _tmp62 * _tmp64 + _tmp63;
  const Scalar _tmp115 = 0;
  const Scalar _tmp116 = _tmp115 * _tmp79;
  const Scalar _tmp117 = _tmp16 * _tmp88;
  const Scalar _tmp118 = _tmp115 * _tmp86;
  const Scalar _tmp119 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp120 = _tmp119 * _tmp33;
  const Scalar _tmp121 = std::exp(_tmp104 * (_tmp100 * _tmp73 - _tmp101 * _tmp99) +
                                  _tmp113 * (_tmp109 * _tmp90 + _tmp111 * _tmp16) +
                                  _tmp120 * (_tmp116 * _tmp73 - _tmp117 * _tmp118) +
                                  _tmp98 * (_tmp16 * _tmp89 + _tmp85 * _tmp90 + Scalar(1.0)));
  const Scalar _tmp122 = std::pow(_tmp47, Scalar(-2));
  const Scalar _tmp123 = std::pow(_tmp39, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp124 = _tmp123 * _tmp16 * _tmp37;
  const Scalar _tmp125 = _tmp123 * _tmp35;
  const Scalar _tmp126 = _tmp122 * (-_tmp124 + _tmp125 * _tmp45 - _tmp46);
  const Scalar _tmp127 = _tmp87 * _tmp99;
  const Scalar _tmp128 = _tmp125 * _tmp56;
  const Scalar _tmp129 = -_tmp125 * _tmp54 + _tmp128 + _tmp55 - _tmp57;
  const Scalar _tmp130 = _tmp126 * _tmp76;
  const Scalar _tmp131 = _tmp124 * _tmp54;
  const Scalar _tmp132 = -_tmp128 * _tmp45 + _tmp131 + _tmp45 * _tmp57;
  const Scalar _tmp133 =
      -_tmp129 * _tmp77 + _tmp130 * _tmp59 - _tmp64 * (_tmp130 * _tmp61 - _tmp132 * _tmp77);
  const Scalar _tmp134 = std::pow(_tmp78, Scalar(-2));
  const Scalar _tmp135 = _tmp133 * _tmp134;
  const Scalar _tmp136 = _tmp135 * _tmp73;
  const Scalar _tmp137 = _tmp133 * _tmp83;
  const Scalar _tmp138 = _tmp126 * _tmp44;
  const Scalar _tmp139 = -_tmp124 * _tmp15 + _tmp125 * _tmp34 + _tmp125 * _tmp36 - _tmp41 - _tmp42;
  const Scalar _tmp140 = _tmp138 * _tmp76 - _tmp139 * _tmp77;
  const Scalar _tmp141 = std::pow(_tmp80, Scalar(-2));
  const Scalar _tmp142 = _tmp141 * _tmp78;
  const Scalar _tmp143 = _tmp142 * _tmp82;
  const Scalar _tmp144 = _tmp135 * _tmp80;
  const Scalar _tmp145 = _tmp140 * _tmp79;
  const Scalar _tmp146 = _tmp45 * _tmp61;
  const Scalar _tmp147 = _tmp45 * _tmp59;
  const Scalar _tmp148 =
      -_tmp126 * _tmp147 + _tmp129 * _tmp49 - _tmp64 * (-_tmp126 * _tmp146 + _tmp132 * _tmp49);
  const Scalar _tmp149 = _tmp137 * _tmp82 - _tmp140 * _tmp143 + _tmp148 +
                         _tmp84 * (-_tmp138 * _tmp45 + _tmp139 * _tmp49 + _tmp144 * _tmp65 -
                                   _tmp145 * _tmp65 - _tmp148 * _tmp81);
  const Scalar _tmp150 = _tmp125 * _tmp48;
  const Scalar _tmp151 = _tmp134 * _tmp76;
  const Scalar _tmp152 = _tmp133 * _tmp151;
  const Scalar _tmp153 = -_tmp149 * _tmp86 + _tmp152 * _tmp85;
  const Scalar _tmp154 = _tmp118 * _tmp99;
  const Scalar _tmp155 = _tmp77 * _tmp99;
  const Scalar _tmp156 = _tmp115 * _tmp155;
  const Scalar _tmp157 = Scalar(1.0) * _tmp141;
  const Scalar _tmp158 = _tmp155 * _tmp157;
  const Scalar _tmp159 = _tmp157 * _tmp73;
  const Scalar _tmp160 = _tmp100 * _tmp99;
  const Scalar _tmp161 = _tmp108 * _tmp142;
  const Scalar _tmp162 = Scalar(1.0) * _tmp61 * _tmp64;
  const Scalar _tmp163 = Scalar(1.0) * _tmp59;
  const Scalar _tmp164 =
      -_tmp105 * _tmp129 + _tmp106 * _tmp132 - _tmp126 * _tmp162 + _tmp126 * _tmp163;
  const Scalar _tmp165 = _tmp108 * _tmp137 - _tmp140 * _tmp161 + _tmp164 +
                         _tmp84 * (-_tmp105 * _tmp139 + _tmp107 * _tmp144 - _tmp107 * _tmp145 +
                                   Scalar(1.0) * _tmp138 - _tmp164 * _tmp81);
  const Scalar _tmp166 = _tmp109 * _tmp152 - _tmp165 * _tmp86;
  const Scalar _tmp167 = _tmp110 * _tmp126;
  const Scalar _tmp168 = _tmp100 * _tmp103;
  const Scalar _tmp169 = _tmp48 * fh1;
  const Scalar _tmp170 = _tmp169 * _tmp96;
  const Scalar _tmp171 = _tmp102 * _tmp169;
  const Scalar _tmp172 = _tmp115 * _tmp119;
  const Scalar _tmp173 = _tmp172 * _tmp86;
  const Scalar _tmp174 =
      std::exp(-_tmp110 * _tmp171 + _tmp168 * _tmp77 - _tmp170 * _tmp87 + _tmp173 * _tmp48);
  const Scalar _tmp175 = _tmp103 * _tmp157;
  const Scalar _tmp176 = _tmp140 * _tmp175;
  const Scalar _tmp177 = _tmp87 * _tmp97;
  const Scalar _tmp178 = _tmp135 * _tmp172;
  const Scalar _tmp179 = _tmp79 * fh1;
  const Scalar _tmp180 = _tmp179 * _tmp96;
  const Scalar _tmp181 = _tmp102 * _tmp179;
  const Scalar _tmp182 =
      std::exp(-_tmp109 * _tmp181 - _tmp116 * _tmp119 - _tmp168 - _tmp180 * _tmp85);
  const Scalar _tmp183 = _tmp109 * _tmp112;
  const Scalar _tmp184 = _tmp85 * _tmp97;
  const Scalar _tmp185 = _tmp124 * _tmp48;
  const Scalar _tmp186 = _tmp124 * _tmp56 - _tmp131;
  const Scalar _tmp187 = _tmp123 * _tmp38;
  const Scalar _tmp188 = _tmp122 * (_tmp124 * _tmp45 - _tmp187 + _tmp40);
  const Scalar _tmp189 = _tmp188 * _tmp76;
  const Scalar _tmp190 = -_tmp124 * _tmp60 + _tmp187 * _tmp54 - _tmp55;
  const Scalar _tmp191 =
      -_tmp186 * _tmp77 + _tmp189 * _tmp59 - _tmp64 * (_tmp189 * _tmp61 - _tmp190 * _tmp77);
  const Scalar _tmp192 = _tmp191 * _tmp83;
  const Scalar _tmp193 = _tmp124 * _tmp34 + _tmp124 * _tmp36 - _tmp15 * _tmp187 + _tmp15 * _tmp40;
  const Scalar _tmp194 = _tmp189 * _tmp44 - _tmp193 * _tmp77;
  const Scalar _tmp195 = _tmp134 * _tmp191;
  const Scalar _tmp196 = _tmp195 * _tmp80;
  const Scalar _tmp197 = _tmp188 * _tmp44;
  const Scalar _tmp198 = _tmp194 * _tmp79;
  const Scalar _tmp199 =
      -_tmp105 * _tmp186 + _tmp106 * _tmp190 - _tmp162 * _tmp188 + _tmp163 * _tmp188;
  const Scalar _tmp200 = _tmp108 * _tmp192 - _tmp161 * _tmp194 + _tmp199 +
                         _tmp84 * (-_tmp105 * _tmp193 + _tmp107 * _tmp196 - _tmp107 * _tmp198 +
                                   Scalar(1.0) * _tmp197 - _tmp199 * _tmp81);
  const Scalar _tmp201 = _tmp195 * _tmp73;
  const Scalar _tmp202 = _tmp110 * _tmp188;
  const Scalar _tmp203 = _tmp151 * _tmp191;
  const Scalar _tmp204 = _tmp109 * _tmp203 - _tmp200 * _tmp86;
  const Scalar _tmp205 =
      -_tmp147 * _tmp188 + _tmp186 * _tmp49 - _tmp64 * (-_tmp146 * _tmp188 + _tmp190 * _tmp49);
  const Scalar _tmp206 = -_tmp143 * _tmp194 + _tmp192 * _tmp82 + _tmp205 +
                         _tmp84 * (_tmp193 * _tmp49 + _tmp196 * _tmp65 - _tmp197 * _tmp45 -
                                   _tmp198 * _tmp65 - _tmp205 * _tmp81);
  const Scalar _tmp207 = _tmp203 * _tmp85 - _tmp206 * _tmp86;
  const Scalar _tmp208 = _tmp172 * _tmp195;
  const Scalar _tmp209 = _tmp175 * _tmp194;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp121 * (-_tmp104 * (-_tmp101 * _tmp125 + _tmp101 * _tmp40 + _tmp130 * _tmp160 +
                                       _tmp140 * _tmp158 - _tmp140 * _tmp159) -
                           _tmp113 * (-_tmp109 * _tmp136 + _tmp110 * _tmp150 - _tmp111 +
                                      _tmp117 * _tmp166 + _tmp165 * _tmp90 - _tmp167 * _tmp99) -
                           _tmp120 * (-_tmp115 * _tmp136 - _tmp118 * _tmp150 + _tmp118 * _tmp88 +
                                      _tmp126 * _tmp154 + _tmp135 * _tmp156) -
                           _tmp98 * (_tmp117 * _tmp153 - _tmp126 * _tmp127 - _tmp136 * _tmp85 +
                                     _tmp149 * _tmp90 + _tmp150 * _tmp87 - _tmp89));
  _res(2, 0) =
      -_tmp174 * (-_tmp112 * _tmp167 + _tmp126 * _tmp173 - _tmp126 * _tmp177 + _tmp130 * _tmp168 +
                  _tmp153 * _tmp170 + _tmp166 * _tmp171 + _tmp176 * _tmp77 + _tmp178 * _tmp77);
  _res(3, 0) = -_tmp182 * (-_tmp135 * _tmp183 - _tmp135 * _tmp184 + _tmp149 * _tmp180 +
                           _tmp165 * _tmp181 - _tmp176 - _tmp178);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp121 *
      (-_tmp104 * (-_tmp101 * _tmp124 + _tmp158 * _tmp194 - _tmp159 * _tmp194 + _tmp160 * _tmp189) -
       _tmp113 * (-_tmp109 * _tmp201 + _tmp110 * _tmp185 + _tmp117 * _tmp204 + _tmp200 * _tmp90 -
                  _tmp202 * _tmp99) -
       _tmp120 * (-_tmp115 * _tmp201 - _tmp118 * _tmp185 + _tmp154 * _tmp188 + _tmp156 * _tmp195) -
       _tmp98 * (_tmp117 * _tmp207 - _tmp127 * _tmp188 + _tmp185 * _tmp87 - _tmp201 * _tmp85 +
                 _tmp206 * _tmp90));
  _res(2, 1) =
      -_tmp174 * (-_tmp112 * _tmp202 + _tmp168 * _tmp189 + _tmp170 * _tmp207 + _tmp171 * _tmp204 +
                  _tmp173 * _tmp188 - _tmp177 * _tmp188 + _tmp208 * _tmp77 + _tmp209 * _tmp77);
  _res(3, 1) = -_tmp182 * (_tmp180 * _tmp206 + _tmp181 * _tmp200 - _tmp183 * _tmp195 -
                           _tmp184 * _tmp195 - _tmp208 - _tmp209);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym