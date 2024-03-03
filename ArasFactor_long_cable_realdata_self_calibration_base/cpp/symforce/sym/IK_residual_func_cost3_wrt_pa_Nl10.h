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
 * Symbolic function: IK_residual_func_cost3_wrt_pa_Nl10
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPaNl10(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 659

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (216)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = _tmp2 * _tmp4;
  const Scalar _tmp12 = _tmp0 * _tmp5;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp18 =
      -Scalar(0.010999999999999999) * _tmp3 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp19 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp20 = _tmp1 * _tmp5;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp19 - Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = _tmp18 + _tmp21;
  const Scalar _tmp23 = _tmp17 + _tmp22;
  const Scalar _tmp24 = _tmp23 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp26 =
      -Scalar(0.010999999999999999) * _tmp11 + Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = _tmp25 + _tmp28;
  const Scalar _tmp30 = _tmp29 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp31 = std::pow(Scalar(std::pow(_tmp24, Scalar(2)) + std::pow(_tmp30, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp32 = _tmp24 * _tmp31;
  const Scalar _tmp33 = -_tmp17;
  const Scalar _tmp34 = _tmp18 - _tmp21;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = _tmp35 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp37 = std::pow(_tmp36, Scalar(2));
  const Scalar _tmp38 = -_tmp25;
  const Scalar _tmp39 = _tmp26 - _tmp27;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp40 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp42 = std::pow(_tmp41, Scalar(2));
  const Scalar _tmp43 = _tmp37 + _tmp42;
  const Scalar _tmp44 = std::pow(_tmp43, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp45 = -_tmp7;
  const Scalar _tmp46 = _tmp10 - _tmp13 + _tmp45;
  const Scalar _tmp47 = _tmp44 * _tmp46;
  const Scalar _tmp48 = _tmp14 + _tmp45;
  const Scalar _tmp49 = _tmp44 * _tmp48;
  const Scalar _tmp50 = _tmp36 * _tmp49;
  const Scalar _tmp51 = -_tmp36 * _tmp47 + _tmp50;
  const Scalar _tmp52 = _tmp22 + _tmp33;
  const Scalar _tmp53 = _tmp52 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp55 = _tmp25 + _tmp39;
  const Scalar _tmp56 = _tmp55 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp57 = _tmp54 * _tmp56;
  const Scalar _tmp58 = _tmp44 * _tmp57;
  const Scalar _tmp59 = _tmp41 * _tmp44;
  const Scalar _tmp60 = _tmp36 * _tmp58 - _tmp59;
  const Scalar _tmp61 = Scalar(1.0) / (_tmp60);
  const Scalar _tmp62 = _tmp30 * _tmp31;
  const Scalar _tmp63 = _tmp32 * _tmp57 - _tmp62;
  const Scalar _tmp64 = _tmp61 * _tmp63;
  const Scalar _tmp65 = _tmp32 * _tmp48;
  const Scalar _tmp66 = _tmp46 * _tmp59 - _tmp50 * _tmp57;
  const Scalar _tmp67 = Scalar(1.0) * _tmp55;
  const Scalar _tmp68 = Scalar(1.0) * _tmp52;
  const Scalar _tmp69 = (-_tmp35 + _tmp68) / (_tmp40 - _tmp67);
  const Scalar _tmp70 = -_tmp15 * _tmp32 - _tmp51 * _tmp64 + _tmp65 -
                        _tmp69 * (_tmp15 * _tmp62 - _tmp57 * _tmp65 - _tmp64 * _tmp66);
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp67 * _tmp69 + _tmp68;
  const Scalar _tmp73 = 0;
  const Scalar _tmp74 = _tmp71 * _tmp73;
  const Scalar _tmp75 = _tmp36 * _tmp44;
  const Scalar _tmp76 = _tmp64 * _tmp75;
  const Scalar _tmp77 = _tmp32 * _tmp71;
  const Scalar _tmp78 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp79 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))));
  const Scalar _tmp80 = _tmp54 * _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp79);
  const Scalar _tmp83 = _tmp80 * (_tmp52 * _tmp56 * _tmp82 - _tmp53 * _tmp55 * _tmp82);
  const Scalar _tmp84 = _tmp44 * _tmp83;
  const Scalar _tmp85 = _tmp40 * _tmp44;
  const Scalar _tmp86 = -_tmp35 * _tmp59 + _tmp36 * _tmp84 + _tmp36 * _tmp85;
  const Scalar _tmp87 = -_tmp23 * _tmp62 + _tmp29 * _tmp32 + _tmp32 * _tmp83 - _tmp64 * _tmp86;
  const Scalar _tmp88 = Scalar(1.0) * _tmp61;
  const Scalar _tmp89 = _tmp69 * _tmp88;
  const Scalar _tmp90 = -_tmp51 * _tmp88 + _tmp66 * _tmp89;
  const Scalar _tmp91 = _tmp71 * _tmp90;
  const Scalar _tmp92 = -_tmp86 * _tmp88 - _tmp87 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp94 = _tmp70 * _tmp93;
  const Scalar _tmp95 = _tmp90 + _tmp92 * _tmp94;
  const Scalar _tmp96 = _tmp63 * _tmp71;
  const Scalar _tmp97 = -_tmp95 * _tmp96 + Scalar(1.0);
  const Scalar _tmp98 = _tmp44 * _tmp61;
  const Scalar _tmp99 = _tmp97 * _tmp98;
  const Scalar _tmp100 = _tmp17 + _tmp34;
  const Scalar _tmp101 = _tmp100 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp102 = _tmp28 + _tmp38;
  const Scalar _tmp103 = _tmp102 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp104 =
      std::pow(Scalar(std::pow(_tmp101, Scalar(2)) + std::pow(_tmp103, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp105 = _tmp103 * _tmp104;
  const Scalar _tmp106 = _tmp105 * fh1;
  const Scalar _tmp107 = _tmp106 * _tmp80;
  const Scalar _tmp108 = _tmp57 * _tmp61;
  const Scalar _tmp109 = _tmp48 * _tmp57;
  const Scalar _tmp110 = _tmp108 * _tmp51 - _tmp48 - _tmp69 * (_tmp108 * _tmp66 + _tmp109);
  const Scalar _tmp111 = _tmp110 * _tmp71;
  const Scalar _tmp112 = _tmp108 * _tmp86 - _tmp111 * _tmp87 - _tmp83;
  const Scalar _tmp113 = _tmp110 + _tmp112 * _tmp94;
  const Scalar _tmp114 = -_tmp113 * _tmp96 - _tmp57;
  const Scalar _tmp115 = _tmp114 * _tmp98;
  const Scalar _tmp116 = _tmp101 * _tmp104;
  const Scalar _tmp117 = _tmp116 * fh1;
  const Scalar _tmp118 = _tmp117 * _tmp80;
  const Scalar _tmp119 = Scalar(1.0) * _tmp93;
  const Scalar _tmp120 = fh1 * (_tmp100 * _tmp105 - _tmp102 * _tmp116);
  const Scalar _tmp121 = _tmp120 * _tmp80;
  const Scalar _tmp122 = std::exp(_tmp107 * (_tmp36 * _tmp99 + _tmp77 * _tmp95) +
                                  _tmp118 * (_tmp113 * _tmp77 + _tmp115 * _tmp36 + Scalar(1.0)) +
                                  _tmp121 * (_tmp119 * _tmp32 - _tmp119 * _tmp76) +
                                  _tmp81 * (_tmp73 * _tmp77 - _tmp74 * _tmp76));
  const Scalar _tmp123 = std::pow(_tmp43, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp124 = _tmp123 * _tmp37;
  const Scalar _tmp125 = _tmp124 * _tmp64;
  const Scalar _tmp126 = _tmp123 * _tmp36 * _tmp41;
  const Scalar _tmp127 = _tmp124 * _tmp57 - _tmp126 - _tmp58;
  const Scalar _tmp128 = std::pow(_tmp60, Scalar(-2));
  const Scalar _tmp129 = _tmp128 * _tmp63;
  const Scalar _tmp130 = _tmp127 * _tmp129;
  const Scalar _tmp131 = _tmp124 * _tmp40 + _tmp124 * _tmp83 - _tmp126 * _tmp35 - _tmp84 - _tmp85;
  const Scalar _tmp132 = _tmp130 * _tmp86 - _tmp131 * _tmp64;
  const Scalar _tmp133 = std::pow(_tmp87, Scalar(-2));
  const Scalar _tmp134 = Scalar(1.0) * _tmp133;
  const Scalar _tmp135 = _tmp132 * _tmp134;
  const Scalar _tmp136 = _tmp44 * _tmp64;
  const Scalar _tmp137 = _tmp119 * _tmp75;
  const Scalar _tmp138 = _tmp124 * _tmp48;
  const Scalar _tmp139 = -_tmp124 * _tmp46 + _tmp138 + _tmp47 - _tmp49;
  const Scalar _tmp140 = _tmp126 * _tmp46;
  const Scalar _tmp141 = -_tmp138 * _tmp57 + _tmp140 + _tmp49 * _tmp57;
  const Scalar _tmp142 =
      _tmp130 * _tmp51 - _tmp139 * _tmp64 - _tmp69 * (_tmp130 * _tmp66 - _tmp141 * _tmp64);
  const Scalar _tmp143 = std::pow(_tmp70, Scalar(-2));
  const Scalar _tmp144 = _tmp142 * _tmp143;
  const Scalar _tmp145 = _tmp73 * _tmp76;
  const Scalar _tmp146 = _tmp127 * _tmp128;
  const Scalar _tmp147 = _tmp73 * _tmp75 * _tmp96;
  const Scalar _tmp148 = _tmp144 * _tmp32;
  const Scalar _tmp149 = _tmp146 * _tmp57;
  const Scalar _tmp150 = _tmp127 * _tmp51;
  const Scalar _tmp151 = _tmp128 * _tmp57;
  const Scalar _tmp152 =
      _tmp108 * _tmp139 - _tmp150 * _tmp151 - _tmp69 * (_tmp108 * _tmp141 - _tmp149 * _tmp66);
  const Scalar _tmp153 = _tmp71 * _tmp87;
  const Scalar _tmp154 = _tmp144 * _tmp87;
  const Scalar _tmp155 = _tmp133 * _tmp70;
  const Scalar _tmp156 = _tmp112 * _tmp155;
  const Scalar _tmp157 = _tmp112 * _tmp93;
  const Scalar _tmp158 = -_tmp132 * _tmp156 + _tmp142 * _tmp157 + _tmp152 +
                         _tmp94 * (_tmp108 * _tmp131 + _tmp110 * _tmp154 - _tmp111 * _tmp132 -
                                   _tmp149 * _tmp86 - _tmp152 * _tmp153);
  const Scalar _tmp159 = _tmp114 * _tmp75;
  const Scalar _tmp160 = _tmp124 * _tmp61;
  const Scalar _tmp161 = _tmp113 * _tmp63;
  const Scalar _tmp162 = _tmp144 * _tmp161 - _tmp158 * _tmp96;
  const Scalar _tmp163 = _tmp36 * _tmp98;
  const Scalar _tmp164 = _tmp146 * _tmp97;
  const Scalar _tmp165 = _tmp155 * _tmp92;
  const Scalar _tmp166 = _tmp92 * _tmp93;
  const Scalar _tmp167 = Scalar(1.0) * _tmp128;
  const Scalar _tmp168 = _tmp167 * _tmp66 * _tmp69;
  const Scalar _tmp169 =
      -_tmp127 * _tmp168 - _tmp139 * _tmp88 + _tmp141 * _tmp89 + _tmp150 * _tmp167;
  const Scalar _tmp170 = _tmp167 * _tmp86;
  const Scalar _tmp171 = -_tmp132 * _tmp165 + _tmp142 * _tmp166 + _tmp169 +
                         _tmp94 * (_tmp127 * _tmp170 - _tmp131 * _tmp88 - _tmp132 * _tmp91 -
                                   _tmp153 * _tmp169 + _tmp154 * _tmp90);
  const Scalar _tmp172 = _tmp63 * _tmp95;
  const Scalar _tmp173 = _tmp144 * _tmp172 - _tmp171 * _tmp96;
  const Scalar _tmp174 = _tmp114 * _tmp61;
  const Scalar _tmp175 = _tmp119 * _tmp120;
  const Scalar _tmp176 = _tmp73 * _tmp78;
  const Scalar _tmp177 = _tmp176 * _tmp71;
  const Scalar _tmp178 = _tmp61 * _tmp97;
  const Scalar _tmp179 =
      std::exp(-_tmp106 * _tmp178 - _tmp117 * _tmp174 + _tmp175 * _tmp64 + _tmp177 * _tmp64);
  const Scalar _tmp180 = _tmp120 * _tmp135;
  const Scalar _tmp181 = _tmp144 * _tmp176;
  const Scalar _tmp182 = _tmp117 * _tmp61;
  const Scalar _tmp183 = _tmp114 * _tmp117;
  const Scalar _tmp184 = _tmp176 * _tmp96;
  const Scalar _tmp185 = _tmp106 * _tmp61;
  const Scalar _tmp186 = _tmp117 * _tmp71;
  const Scalar _tmp187 = _tmp106 * _tmp71;
  const Scalar _tmp188 = std::exp(-_tmp113 * _tmp186 - _tmp175 - _tmp177 - _tmp187 * _tmp95);
  const Scalar _tmp189 = _tmp106 * _tmp95;
  const Scalar _tmp190 = _tmp113 * _tmp117;
  const Scalar _tmp191 = _tmp123 * _tmp42;
  const Scalar _tmp192 = -_tmp109 * _tmp126 + _tmp191 * _tmp46 - _tmp47;
  const Scalar _tmp193 = _tmp126 * _tmp57 - _tmp191 + _tmp44;
  const Scalar _tmp194 = _tmp129 * _tmp193;
  const Scalar _tmp195 = _tmp193 * _tmp51;
  const Scalar _tmp196 = _tmp126 * _tmp48 - _tmp140;
  const Scalar _tmp197 =
      _tmp129 * _tmp195 - _tmp196 * _tmp64 - _tmp69 * (-_tmp192 * _tmp64 + _tmp194 * _tmp66);
  const Scalar _tmp198 = _tmp151 * _tmp193;
  const Scalar _tmp199 =
      _tmp108 * _tmp196 - _tmp151 * _tmp195 - _tmp69 * (_tmp108 * _tmp192 - _tmp198 * _tmp66);
  const Scalar _tmp200 = _tmp143 * _tmp197;
  const Scalar _tmp201 = _tmp200 * _tmp87;
  const Scalar _tmp202 = _tmp126 * _tmp40 + _tmp126 * _tmp83 - _tmp191 * _tmp35 + _tmp35 * _tmp44;
  const Scalar _tmp203 = _tmp194 * _tmp86 - _tmp202 * _tmp64;
  const Scalar _tmp204 = -_tmp156 * _tmp203 + _tmp157 * _tmp197 + _tmp199 +
                         _tmp94 * (_tmp108 * _tmp202 + _tmp110 * _tmp201 - _tmp111 * _tmp203 -
                                   _tmp153 * _tmp199 - _tmp198 * _tmp86);
  const Scalar _tmp205 = _tmp128 * _tmp193;
  const Scalar _tmp206 = _tmp161 * _tmp200 - _tmp204 * _tmp96;
  const Scalar _tmp207 = _tmp200 * _tmp32;
  const Scalar _tmp208 = _tmp134 * _tmp203;
  const Scalar _tmp209 = _tmp126 * _tmp64;
  const Scalar _tmp210 =
      _tmp167 * _tmp195 - _tmp168 * _tmp193 + _tmp192 * _tmp89 - _tmp196 * _tmp88;
  const Scalar _tmp211 = -_tmp165 * _tmp203 + _tmp166 * _tmp197 + _tmp210 +
                         _tmp94 * (-_tmp153 * _tmp210 + _tmp170 * _tmp193 + _tmp201 * _tmp90 -
                                   _tmp202 * _tmp88 - _tmp203 * _tmp91);
  const Scalar _tmp212 = _tmp172 * _tmp200 - _tmp211 * _tmp96;
  const Scalar _tmp213 = _tmp205 * _tmp97;
  const Scalar _tmp214 = _tmp176 * _tmp200;
  const Scalar _tmp215 = _tmp120 * _tmp208;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp122 * (-_tmp107 * (-_tmp148 * _tmp95 + _tmp160 * _tmp97 + _tmp163 * _tmp173 -
                                       _tmp164 * _tmp75 + _tmp171 * _tmp77 - _tmp99) -
                           _tmp118 * (-_tmp113 * _tmp148 + _tmp114 * _tmp160 - _tmp115 -
                                      _tmp146 * _tmp159 + _tmp158 * _tmp77 + _tmp162 * _tmp163) -
                           _tmp121 * (-_tmp119 * _tmp125 + _tmp119 * _tmp136 + _tmp130 * _tmp137 -
                                      _tmp135 * _tmp32 + _tmp135 * _tmp76) -
                           _tmp81 * (-_tmp125 * _tmp74 + _tmp136 * _tmp74 + _tmp144 * _tmp145 +
                                     _tmp146 * _tmp147 - _tmp148 * _tmp73));
  _res(2, 0) =
      -_tmp179 * (-_tmp106 * _tmp164 + _tmp130 * _tmp175 - _tmp146 * _tmp183 + _tmp146 * _tmp184 +
                  _tmp162 * _tmp182 + _tmp173 * _tmp185 + _tmp180 * _tmp64 + _tmp181 * _tmp64);
  _res(3, 0) = -_tmp188 * (-_tmp144 * _tmp189 - _tmp144 * _tmp190 + _tmp158 * _tmp186 +
                           _tmp171 * _tmp187 - _tmp180 - _tmp181);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp122 *
      (-_tmp107 * (_tmp126 * _tmp178 + _tmp163 * _tmp212 - _tmp207 * _tmp95 + _tmp211 * _tmp77 -
                   _tmp213 * _tmp75) -
       _tmp118 * (-_tmp113 * _tmp207 + _tmp126 * _tmp174 - _tmp159 * _tmp205 + _tmp163 * _tmp206 +
                  _tmp204 * _tmp77) -
       _tmp121 * (-_tmp119 * _tmp209 + _tmp137 * _tmp194 - _tmp208 * _tmp32 + _tmp208 * _tmp76) -
       _tmp81 * (_tmp145 * _tmp200 + _tmp147 * _tmp205 - _tmp207 * _tmp73 - _tmp209 * _tmp74));
  _res(2, 1) =
      -_tmp179 * (-_tmp106 * _tmp213 + _tmp175 * _tmp194 + _tmp182 * _tmp206 - _tmp183 * _tmp205 +
                  _tmp184 * _tmp205 + _tmp185 * _tmp212 + _tmp214 * _tmp64 + _tmp215 * _tmp64);
  _res(3, 1) = -_tmp188 * (_tmp186 * _tmp204 + _tmp187 * _tmp211 - _tmp189 * _tmp200 -
                           _tmp190 * _tmp200 - _tmp214 - _tmp215);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym