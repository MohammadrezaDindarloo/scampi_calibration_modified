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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl7
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
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl7(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 616

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (211)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp5 = _tmp3 * _tmp4;
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = _tmp1 * _tmp4;
  const Scalar _tmp10 = _tmp8 - _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp13 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 +
                        Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999);
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp6;
  const Scalar _tmp17 = _tmp16 + position_vector(1, 0);
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = _tmp1 * _tmp7;
  const Scalar _tmp23 = _tmp0 * _tmp4;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(0, 0);
  const Scalar _tmp29 = Scalar(1.0) / (fh1);
  const Scalar _tmp30 = _tmp29 * fv1;
  const Scalar _tmp31 = std::asinh(_tmp30);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * _tmp31;
  const Scalar _tmp33 =
      -_tmp32 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp17 + p_b(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp28 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp34 = Scalar(0.71007031138673404) * _tmp29;
  const Scalar _tmp35 = _tmp33 * _tmp34;
  const Scalar _tmp36 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp36 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(1.0) * _tmp31;
  const Scalar _tmp39 = -_tmp21 + _tmp25;
  const Scalar _tmp40 = _tmp18 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 - p_d(0, 0);
  const Scalar _tmp43 = -_tmp6;
  const Scalar _tmp44 = _tmp11 + _tmp14;
  const Scalar _tmp45 = _tmp43 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp47 = _tmp46 - p_d(1, 0);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp42 * _tmp48;
  const Scalar _tmp50 = _tmp47 * _tmp48;
  const Scalar _tmp51 = _tmp19 + _tmp39;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 - p_a(0, 0);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp55 = _tmp15 + _tmp43;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 - p_a(1, 0);
  const Scalar _tmp58 = _tmp54 * _tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp49 * _tmp58 - _tmp50);
  const Scalar _tmp60 = _tmp44 + _tmp6;
  const Scalar _tmp61 = _tmp60 + position_vector(1, 0);
  const Scalar _tmp62 = _tmp61 - p_c(1, 0);
  const Scalar _tmp63 = _tmp18 + _tmp26;
  const Scalar _tmp64 = _tmp63 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 - p_c(0, 0);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp62 * _tmp66;
  const Scalar _tmp68 = _tmp65 * _tmp66;
  const Scalar _tmp69 = _tmp58 * _tmp68 - _tmp67;
  const Scalar _tmp70 = Scalar(1.0) * _tmp55;
  const Scalar _tmp71 = -_tmp70;
  const Scalar _tmp72 = Scalar(1.0) / (_tmp45 + _tmp71);
  const Scalar _tmp73 = Scalar(1.0) * _tmp51;
  const Scalar _tmp74 = _tmp72 * (-_tmp40 + _tmp73);
  const Scalar _tmp75 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp76 = -_tmp75;
  const Scalar _tmp77 =
      -Scalar(0.010999999999999999) * _tmp12 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp78 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp79 = _tmp77 + _tmp78;
  const Scalar _tmp80 = _tmp76 + _tmp79;
  const Scalar _tmp81 = _tmp77 - _tmp78;
  const Scalar _tmp82 = _tmp76 + _tmp81;
  const Scalar _tmp83 = _tmp49 * _tmp82;
  const Scalar _tmp84 = _tmp50 * _tmp80 - _tmp58 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) * _tmp59;
  const Scalar _tmp86 = _tmp84 * _tmp85;
  const Scalar _tmp87 = -_tmp49 * _tmp80 + _tmp83;
  const Scalar _tmp88 = _tmp74 * _tmp86 - _tmp85 * _tmp87;
  const Scalar _tmp89 = _tmp75 + _tmp79;
  const Scalar _tmp90 = _tmp58 * _tmp82;
  const Scalar _tmp91 = _tmp59 * _tmp69;
  const Scalar _tmp92 = _tmp67 * _tmp89 - _tmp68 * _tmp90 - _tmp84 * _tmp91;
  const Scalar _tmp93 = _tmp68 * _tmp82 - _tmp68 * _tmp89 - _tmp74 * _tmp92 - _tmp87 * _tmp91;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp54 * _tmp95;
  const Scalar _tmp98 = _tmp97 * (_tmp51 * _tmp57 * _tmp96 - _tmp53 * _tmp55 * _tmp96);
  const Scalar _tmp99 = -_tmp40 * _tmp50 + _tmp45 * _tmp49 + _tmp49 * _tmp98;
  const Scalar _tmp100 = _tmp60 * _tmp68 - _tmp63 * _tmp67 + _tmp68 * _tmp98 - _tmp91 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp94;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp93;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp88 - _tmp85 * _tmp99);
  const Scalar _tmp105 = _tmp94 * (_tmp104 + _tmp88);
  const Scalar _tmp106 = _tmp59 * (-_tmp105 * _tmp69 + Scalar(1.0));
  const Scalar _tmp107 = _tmp28 - p_b(0, 0);
  const Scalar _tmp108 = _tmp17 - p_b(1, 0);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp108 * _tmp109;
  const Scalar _tmp111 = _tmp110 * _tmp97 * (_tmp105 * _tmp68 + _tmp106 * _tmp49);
  const Scalar _tmp112 = _tmp107 * _tmp109;
  const Scalar _tmp113 = _tmp110 * _tmp27 - _tmp112 * _tmp16;
  const Scalar _tmp114 = Scalar(1.0) * _tmp102;
  const Scalar _tmp115 = _tmp49 * _tmp91;
  const Scalar _tmp116 = _tmp113 * _tmp97 * (-_tmp114 * _tmp115 + _tmp114 * _tmp68);
  const Scalar _tmp117 = _tmp58 * _tmp59;
  const Scalar _tmp118 = _tmp117 * _tmp84 + _tmp90;
  const Scalar _tmp119 = _tmp117 * _tmp87 - _tmp118 * _tmp74 - _tmp82;
  const Scalar _tmp120 = _tmp103 * (-_tmp101 * _tmp119 + _tmp117 * _tmp99 - _tmp98);
  const Scalar _tmp121 = _tmp94 * (_tmp119 + _tmp120);
  const Scalar _tmp122 = _tmp59 * (-_tmp121 * _tmp69 - _tmp58);
  const Scalar _tmp123 = _tmp112 * _tmp97 * (_tmp121 * _tmp68 + _tmp122 * _tmp49 + Scalar(1.0));
  const Scalar _tmp124 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp125 = _tmp70 * _tmp74 + _tmp73;
  const Scalar _tmp126 = 0;
  const Scalar _tmp127 = -_tmp111 * fh1 - _tmp116 * fh1 - _tmp123 * fh1 -
                         _tmp124 * _tmp97 * (-_tmp115 * _tmp126 + _tmp126 * _tmp68);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp60 + _tmp71;
  const Scalar _tmp130 = _tmp129 * _tmp74;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 - _tmp63 + _tmp73);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp129 * _tmp131;
  const Scalar _tmp134 = _tmp104 * _tmp133 - _tmp105 * _tmp92 - _tmp86;
  const Scalar _tmp135 = Scalar(1.0) * _tmp72;
  const Scalar _tmp136 = Scalar(1.0) * _tmp110 * (_tmp104 * _tmp132 - _tmp134 * _tmp135);
  const Scalar _tmp137 = _tmp75 + _tmp81;
  const Scalar _tmp138 = _tmp137 * fh1;
  const Scalar _tmp139 = _tmp112 * _tmp138 + Scalar(40.024799999999999) * _tmp24 + _tmp27 * fv1;
  const Scalar _tmp140 = _tmp129 * _tmp72;
  const Scalar _tmp141 = _tmp132 * _tmp140;
  const Scalar _tmp142 = -Scalar(1.0) * _tmp132 + Scalar(1.0) * _tmp141;
  const Scalar _tmp143 = _tmp103 * _tmp132;
  const Scalar _tmp144 = -_tmp114 * _tmp92 + _tmp129 * _tmp143;
  const Scalar _tmp145 = Scalar(1.0) * _tmp113 * (-_tmp135 * _tmp144 + _tmp143);
  const Scalar _tmp146 = _tmp125 * _tmp131;
  const Scalar _tmp147 = -_tmp126 * _tmp92 - _tmp129 * _tmp146 + _tmp71;
  const Scalar _tmp148 = -Scalar(40.024799999999999) * _tmp10 - _tmp110 * _tmp138 - _tmp16 * fv1;
  const Scalar _tmp149 = _tmp130 * _tmp132 + Scalar(1.0);
  const Scalar _tmp150 = _tmp132 * _tmp74;
  const Scalar _tmp151 = -Scalar(1.0) * _tmp135 * _tmp149 + Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = _tmp118 + _tmp120 * _tmp133 - _tmp121 * _tmp92;
  const Scalar _tmp153 = Scalar(1.0) * _tmp112 * (_tmp120 * _tmp132 - _tmp135 * _tmp152);
  const Scalar _tmp154 =
      Scalar(1.0) * _tmp124 * (-_tmp125 * _tmp132 - _tmp135 * _tmp147 + Scalar(1.0)) +
      _tmp136 * fh1 + _tmp139 * _tmp142 + _tmp145 * fh1 + _tmp148 * _tmp151 + _tmp153 * fh1;
  const Scalar _tmp155 = std::asinh(_tmp128 * _tmp154);
  const Scalar _tmp156 = Scalar(1.4083112389913199) * _tmp127;
  const Scalar _tmp157 =
      -_tmp155 * _tmp156 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp56 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp158 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp159 = -_tmp111 - _tmp116 - _tmp123;
  const Scalar _tmp160 = _tmp158 * _tmp159;
  const Scalar _tmp161 = Scalar(1.4083112389913199) * _tmp159;
  const Scalar _tmp162 = _tmp110 * _tmp137;
  const Scalar _tmp163 = _tmp112 * _tmp137;
  const Scalar _tmp164 =
      (_tmp128 * (_tmp136 + _tmp142 * _tmp163 + _tmp145 - _tmp151 * _tmp162 + _tmp153) -
       _tmp154 * _tmp160) /
      std::sqrt(Scalar(std::pow(_tmp154, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp165 = Scalar(0.71007031138673404) * _tmp128;
  const Scalar _tmp166 = _tmp157 * _tmp165;
  const Scalar _tmp167 = Scalar(1.0) * _tmp155;
  const Scalar _tmp168 = _tmp124 * _tmp126;
  const Scalar _tmp169 = _tmp113 * _tmp114;
  const Scalar _tmp170 = _tmp169 * fh1;
  const Scalar _tmp171 = _tmp112 * _tmp122;
  const Scalar _tmp172 = _tmp106 * _tmp110;
  const Scalar _tmp173 = -_tmp168 * _tmp91 - _tmp170 * _tmp91 + _tmp171 * fh1 + _tmp172 * fh1;
  const Scalar _tmp174 = Scalar(1.0) / (_tmp173);
  const Scalar _tmp175 = _tmp149 * _tmp72;
  const Scalar _tmp176 = _tmp132 * _tmp139;
  const Scalar _tmp177 = _tmp113 * _tmp144 * _tmp72;
  const Scalar _tmp178 = _tmp112 * _tmp152 * _tmp72;
  const Scalar _tmp179 = _tmp110 * _tmp134 * _tmp72;
  const Scalar _tmp180 = _tmp124 * _tmp147 * _tmp72 - _tmp140 * _tmp176 + _tmp148 * _tmp175 +
                         _tmp177 * fh1 + _tmp178 * fh1 + _tmp179 * fh1;
  const Scalar _tmp181 = std::asinh(_tmp174 * _tmp180);
  const Scalar _tmp182 = Scalar(1.4083112389913199) * _tmp173;
  const Scalar _tmp183 =
      -_tmp181 * _tmp182 - std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp46 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp184 = Scalar(0.71007031138673404) * _tmp174;
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = -_tmp169 * _tmp91 + _tmp171 + _tmp172;
  const Scalar _tmp187 = Scalar(1.4083112389913199) * _tmp186;
  const Scalar _tmp188 = std::pow(_tmp173, Scalar(-2));
  const Scalar _tmp189 = _tmp186 * _tmp188;
  const Scalar _tmp190 =
      (_tmp174 * (-_tmp141 * _tmp163 - _tmp162 * _tmp175 + _tmp177 + _tmp178 + _tmp179) -
       _tmp180 * _tmp189) /
      std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp188 + 1));
  const Scalar _tmp191 = Scalar(1.0) * _tmp181;
  const Scalar _tmp192 = _tmp105 * _tmp110;
  const Scalar _tmp193 = _tmp112 * _tmp121;
  const Scalar _tmp194 = _tmp168 + _tmp170 + _tmp192 * fh1 + _tmp193 * fh1;
  const Scalar _tmp195 = Scalar(1.0) / (_tmp194);
  const Scalar _tmp196 = _tmp112 * _tmp120 * _tmp131;
  const Scalar _tmp197 = _tmp113 * _tmp143;
  const Scalar _tmp198 = _tmp104 * _tmp110 * _tmp131;
  const Scalar _tmp199 = _tmp124 * _tmp146 - _tmp148 * _tmp150 + _tmp176 - _tmp196 * fh1 -
                         _tmp197 * fh1 - _tmp198 * fh1;
  const Scalar _tmp200 = std::asinh(_tmp195 * _tmp199);
  const Scalar _tmp201 = Scalar(1.0) * _tmp200;
  const Scalar _tmp202 = std::pow(_tmp194, Scalar(-2));
  const Scalar _tmp203 = _tmp169 + _tmp192 + _tmp193;
  const Scalar _tmp204 = _tmp202 * _tmp203;
  const Scalar _tmp205 =
      (_tmp195 * (_tmp132 * _tmp163 + _tmp150 * _tmp162 - _tmp196 - _tmp197 - _tmp198) -
       _tmp199 * _tmp204) /
      std::sqrt(Scalar(std::pow(_tmp199, Scalar(2)) * _tmp202 + 1));
  const Scalar _tmp206 = Scalar(1.4083112389913199) * _tmp194;
  const Scalar _tmp207 = Scalar(1.4083112389913199) * _tmp203;
  const Scalar _tmp208 = Scalar(0.71007031138673404) * _tmp195;
  const Scalar _tmp209 =
      -_tmp200 * _tmp206 - std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp64 + p_c(0, 0)), Scalar(2))));
  const Scalar _tmp210 = _tmp208 * _tmp209;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(1.4083112389913199) * fh1 *
                   (Scalar(1.0) * _tmp36 * _tmp37 * fv1 * std::cosh(_tmp38) -
                    (-Scalar(0.71007031138673404) * _tmp33 * _tmp36 +
                     _tmp34 * (Scalar(1.4083112389913199) * _tmp30 * _tmp37 - _tmp32)) *
                        std::cosh(_tmp35)) -
               Scalar(1.4083112389913199) * std::sinh(_tmp35) -
               Scalar(1.4083112389913199) * std::sinh(_tmp38);
  _res(1, 0) = _tmp156 * (-Scalar(1.0) * _tmp164 * std::cosh(_tmp167) -
                          (-Scalar(0.71007031138673404) * _tmp157 * _tmp160 +
                           _tmp165 * (-_tmp155 * _tmp161 - _tmp156 * _tmp164)) *
                              std::cosh(_tmp166)) +
               _tmp161 * (-std::sinh(_tmp166) - std::sinh(_tmp167));
  _res(2, 0) = _tmp182 * (-Scalar(1.0) * _tmp190 * std::cosh(_tmp191) -
                          (-Scalar(0.71007031138673404) * _tmp183 * _tmp189 +
                           _tmp184 * (-_tmp181 * _tmp187 - _tmp182 * _tmp190)) *
                              std::cosh(_tmp185)) +
               _tmp187 * (-std::sinh(_tmp185) - std::sinh(_tmp191));
  _res(3, 0) = _tmp206 * (-Scalar(1.0) * _tmp205 * std::cosh(_tmp201) -
                          (-Scalar(0.71007031138673404) * _tmp204 * _tmp209 +
                           _tmp208 * (-_tmp200 * _tmp207 - _tmp205 * _tmp206)) *
                              std::cosh(_tmp210)) +
               _tmp207 * (-std::sinh(_tmp201) - std::sinh(_tmp210));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
