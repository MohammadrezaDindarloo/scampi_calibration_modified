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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl0
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
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl0(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 636

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (220)
  const Scalar _tmp0 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp1 = Scalar(0.71007031138673404) * _tmp0;
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp9 = 2 * _tmp8;
  const Scalar _tmp10 = _tmp4 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = _tmp11 * _tmp2;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp2 * _tmp9;
  const Scalar _tmp15 = _tmp11 * _tmp4;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp13 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp7;
  const Scalar _tmp20 = _tmp19 + position_vector(1, 0);
  const Scalar _tmp21 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp3 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = 2 * _tmp2 * _tmp4;
  const Scalar _tmp25 = _tmp11 * _tmp8;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(1.0) / (fh1);
  const Scalar _tmp33 = _tmp32 * fv1;
  const Scalar _tmp34 = std::asinh(_tmp33);
  const Scalar _tmp35 = Scalar(1.4083112389913199) * _tmp34;
  const Scalar _tmp36 =
      -_tmp35 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp20 + p_a(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp31 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp37 = Scalar(0.71007031138673404) * _tmp32;
  const Scalar _tmp38 = _tmp36 * _tmp37;
  const Scalar _tmp39 =
      std::pow(Scalar(_tmp0 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = Scalar(1.0) * _tmp34;
  const Scalar _tmp41 = _tmp27 + _tmp28;
  const Scalar _tmp42 = _tmp22 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp44 = _tmp43 - p_c(0, 0);
  const Scalar _tmp45 = _tmp13 + _tmp17;
  const Scalar _tmp46 = _tmp45 + _tmp6;
  const Scalar _tmp47 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp48 = _tmp47 - p_c(1, 0);
  const Scalar _tmp49 = std::pow(Scalar(std::pow(_tmp44, Scalar(2)) + std::pow(_tmp48, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp50 = _tmp44 * _tmp49;
  const Scalar _tmp51 = _tmp22 + _tmp29;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 - p_b(0, 0);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp55 = _tmp45 + _tmp7;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 - p_b(1, 0);
  const Scalar _tmp58 = _tmp54 * _tmp57;
  const Scalar _tmp59 = _tmp48 * _tmp49;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp50 * _tmp58 - _tmp59);
  const Scalar _tmp61 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp62 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp63 = _tmp54 * _tmp61;
  const Scalar _tmp64 = _tmp63 * (_tmp51 * _tmp57 * _tmp62 - _tmp53 * _tmp55 * _tmp62);
  const Scalar _tmp65 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp66 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp5;
  const Scalar _tmp67 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp68 = _tmp66 + _tmp67;
  const Scalar _tmp69 = _tmp65 + _tmp68;
  const Scalar _tmp70 = -_tmp65;
  const Scalar _tmp71 = _tmp68 + _tmp70;
  const Scalar _tmp72 = _tmp50 * _tmp71;
  const Scalar _tmp73 = -_tmp50 * _tmp69 + _tmp72;
  const Scalar _tmp74 = _tmp58 * _tmp60;
  const Scalar _tmp75 = -_tmp58 * _tmp72 + _tmp59 * _tmp69;
  const Scalar _tmp76 = _tmp58 * _tmp71 + _tmp74 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) * _tmp55;
  const Scalar _tmp78 = -_tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp46 + _tmp78);
  const Scalar _tmp80 = Scalar(1.0) * _tmp51;
  const Scalar _tmp81 = _tmp79 * (-_tmp42 + _tmp80);
  const Scalar _tmp82 = -_tmp71 + _tmp73 * _tmp74 - _tmp76 * _tmp81;
  const Scalar _tmp83 = _tmp66 - _tmp67;
  const Scalar _tmp84 = _tmp65 + _tmp83;
  const Scalar _tmp85 = _tmp23 + _tmp41;
  const Scalar _tmp86 = _tmp85 + position_vector(0, 0);
  const Scalar _tmp87 = _tmp86 - p_d(0, 0);
  const Scalar _tmp88 = _tmp18 + _tmp6;
  const Scalar _tmp89 = _tmp88 + position_vector(1, 0);
  const Scalar _tmp90 = _tmp89 - p_d(1, 0);
  const Scalar _tmp91 = std::pow(Scalar(std::pow(_tmp87, Scalar(2)) + std::pow(_tmp90, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp92 = _tmp87 * _tmp91;
  const Scalar _tmp93 = _tmp71 * _tmp92;
  const Scalar _tmp94 = _tmp90 * _tmp91;
  const Scalar _tmp95 = _tmp58 * _tmp92 - _tmp94;
  const Scalar _tmp96 = _tmp60 * _tmp95;
  const Scalar _tmp97 = -_tmp58 * _tmp93 - _tmp75 * _tmp96 + _tmp84 * _tmp94;
  const Scalar _tmp98 = -_tmp73 * _tmp96 - _tmp81 * _tmp97 - _tmp84 * _tmp92 + _tmp93;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp100 = -_tmp42 * _tmp59 + _tmp46 * _tmp50 + _tmp50 * _tmp64;
  const Scalar _tmp101 = -_tmp100 * _tmp96 + _tmp64 * _tmp92 - _tmp85 * _tmp94 + _tmp88 * _tmp92;
  const Scalar _tmp102 = _tmp101 * _tmp99;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp104 = _tmp103 * _tmp98;
  const Scalar _tmp105 = _tmp104 * (_tmp100 * _tmp74 - _tmp102 * _tmp82 - _tmp64);
  const Scalar _tmp106 = _tmp105 + _tmp82;
  const Scalar _tmp107 = _tmp95 * _tmp99;
  const Scalar _tmp108 = _tmp60 * (-_tmp106 * _tmp107 - _tmp58);
  const Scalar _tmp109 = _tmp92 * _tmp99;
  const Scalar _tmp110 = _tmp31 - p_a(0, 0);
  const Scalar _tmp111 = _tmp20 - p_a(1, 0);
  const Scalar _tmp112 =
      std::pow(Scalar(std::pow(_tmp110, Scalar(2)) + std::pow(_tmp111, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp113 * _tmp63 * (_tmp106 * _tmp109 + _tmp108 * _tmp50 + Scalar(1.0));
  const Scalar _tmp115 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp116 = _tmp77 * _tmp81 + _tmp80;
  const Scalar _tmp117 = 0;
  const Scalar _tmp118 = _tmp117 * _tmp99;
  const Scalar _tmp119 = _tmp50 * _tmp96;
  const Scalar _tmp120 = Scalar(1.0) * _tmp60;
  const Scalar _tmp121 = _tmp120 * _tmp75;
  const Scalar _tmp122 = -_tmp120 * _tmp73 + _tmp121 * _tmp81;
  const Scalar _tmp123 = _tmp104 * (-_tmp100 * _tmp120 - _tmp102 * _tmp122);
  const Scalar _tmp124 = _tmp122 + _tmp123;
  const Scalar _tmp125 = _tmp60 * (-_tmp107 * _tmp124 + Scalar(1.0));
  const Scalar _tmp126 = _tmp111 * _tmp112;
  const Scalar _tmp127 = _tmp126 * _tmp63 * (_tmp109 * _tmp124 + _tmp125 * _tmp50);
  const Scalar _tmp128 = -_tmp113 * _tmp19 + _tmp126 * _tmp30;
  const Scalar _tmp129 = Scalar(1.0) * _tmp103;
  const Scalar _tmp130 = _tmp128 * _tmp63 * (-_tmp119 * _tmp129 + _tmp129 * _tmp92);
  const Scalar _tmp131 = -_tmp114 * fh1 -
                         _tmp115 * _tmp63 * (-_tmp118 * _tmp119 + _tmp118 * _tmp92) -
                         _tmp127 * fh1 - _tmp130 * fh1;
  const Scalar _tmp132 = Scalar(1.0) / (_tmp131);
  const Scalar _tmp133 = _tmp70 + _tmp83;
  const Scalar _tmp134 = _tmp133 * fh1;
  const Scalar _tmp135 = _tmp113 * _tmp134 + Scalar(40.024799999999999) * _tmp26 + _tmp30 * fv1;
  const Scalar _tmp136 = _tmp78 + _tmp88;
  const Scalar _tmp137 = _tmp136 * _tmp81;
  const Scalar _tmp138 = Scalar(1.0) / (-_tmp137 + _tmp80 - _tmp85);
  const Scalar _tmp139 = Scalar(1.0) * _tmp138;
  const Scalar _tmp140 = _tmp136 * _tmp139;
  const Scalar _tmp141 = _tmp140 * _tmp79;
  const Scalar _tmp142 = -Scalar(1.0) * _tmp139 + Scalar(1.0) * _tmp141;
  const Scalar _tmp143 = _tmp97 * _tmp99;
  const Scalar _tmp144 = _tmp116 * _tmp138;
  const Scalar _tmp145 = -_tmp117 * _tmp143 - _tmp136 * _tmp144 + _tmp78;
  const Scalar _tmp146 = Scalar(1.0) * _tmp79;
  const Scalar _tmp147 = -_tmp126 * _tmp134 - Scalar(40.024799999999999) * _tmp16 - _tmp19 * fv1;
  const Scalar _tmp148 = _tmp137 * _tmp139 + Scalar(1.0);
  const Scalar _tmp149 = _tmp139 * _tmp81;
  const Scalar _tmp150 = -Scalar(1.0) * _tmp146 * _tmp148 + Scalar(1.0) * _tmp149;
  const Scalar _tmp151 = _tmp79 * (_tmp104 * _tmp140 - _tmp129 * _tmp97);
  const Scalar _tmp152 = _tmp104 * _tmp139;
  const Scalar _tmp153 = Scalar(1.0) * _tmp128;
  const Scalar _tmp154 = _tmp153 * (-Scalar(1.0) * _tmp151 + _tmp152);
  const Scalar _tmp155 = _tmp136 * _tmp138;
  const Scalar _tmp156 = -_tmp121 + _tmp123 * _tmp155 - _tmp124 * _tmp143;
  const Scalar _tmp157 = Scalar(1.0) * _tmp126 * (_tmp123 * _tmp139 - _tmp146 * _tmp156);
  const Scalar _tmp158 = _tmp105 * _tmp155 - _tmp106 * _tmp143 + _tmp76;
  const Scalar _tmp159 = Scalar(1.0) * _tmp113 * (_tmp105 * _tmp139 - _tmp146 * _tmp158);
  const Scalar _tmp160 =
      Scalar(1.0) * _tmp115 * (-_tmp116 * _tmp139 - _tmp145 * _tmp146 + Scalar(1.0)) +
      _tmp135 * _tmp142 + _tmp147 * _tmp150 + _tmp154 * fh1 + _tmp157 * fh1 + _tmp159 * fh1;
  const Scalar _tmp161 = std::asinh(_tmp132 * _tmp160);
  const Scalar _tmp162 = Scalar(1.0) * _tmp161;
  const Scalar _tmp163 = Scalar(1.4083112389913199) * _tmp131;
  const Scalar _tmp164 =
      -_tmp161 * _tmp163 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp56 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp165 = Scalar(0.71007031138673404) * _tmp132;
  const Scalar _tmp166 = _tmp164 * _tmp165;
  const Scalar _tmp167 = -_tmp114 - _tmp127 - _tmp130;
  const Scalar _tmp168 = Scalar(1.4083112389913199) * _tmp167;
  const Scalar _tmp169 = std::pow(_tmp131, Scalar(-2));
  const Scalar _tmp170 = _tmp167 * _tmp169;
  const Scalar _tmp171 = Scalar(0.71007031138673404) * _tmp170;
  const Scalar _tmp172 = _tmp126 * _tmp133;
  const Scalar _tmp173 = _tmp113 * _tmp133;
  const Scalar _tmp174 =
      (_tmp132 * (_tmp142 * _tmp173 - _tmp150 * _tmp172 + _tmp154 + _tmp157 + _tmp159) -
       _tmp160 * _tmp170) /
      std::sqrt(Scalar(std::pow(_tmp160, Scalar(2)) * _tmp169 + 1));
  const Scalar _tmp175 = _tmp125 * _tmp126;
  const Scalar _tmp176 = _tmp115 * _tmp118;
  const Scalar _tmp177 = _tmp108 * _tmp113;
  const Scalar _tmp178 = _tmp103 * _tmp153;
  const Scalar _tmp179 = _tmp178 * fh1;
  const Scalar _tmp180 = _tmp175 * fh1 - _tmp176 * _tmp96 + _tmp177 * fh1 - _tmp179 * _tmp96;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = _tmp113 * _tmp158 * _tmp79;
  const Scalar _tmp183 = _tmp126 * _tmp156 * _tmp79;
  const Scalar _tmp184 = _tmp148 * _tmp79;
  const Scalar _tmp185 = _tmp135 * _tmp139;
  const Scalar _tmp186 = _tmp128 * _tmp151;
  const Scalar _tmp187 = _tmp115 * _tmp145 * _tmp79 - _tmp136 * _tmp185 * _tmp79 +
                         _tmp147 * _tmp184 + _tmp182 * fh1 + _tmp183 * fh1 + _tmp186 * fh1;
  const Scalar _tmp188 = std::asinh(_tmp181 * _tmp187);
  const Scalar _tmp189 = Scalar(1.0) * _tmp188;
  const Scalar _tmp190 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp191 = _tmp175 + _tmp177 - _tmp178 * _tmp96;
  const Scalar _tmp192 = _tmp190 * _tmp191;
  const Scalar _tmp193 =
      (_tmp181 * (-_tmp141 * _tmp173 - _tmp172 * _tmp184 + _tmp182 + _tmp183 + _tmp186) -
       _tmp187 * _tmp192) /
      std::sqrt(Scalar(std::pow(_tmp187, Scalar(2)) * _tmp190 + 1));
  const Scalar _tmp194 = Scalar(0.71007031138673404) * _tmp192;
  const Scalar _tmp195 = Scalar(1.4083112389913199) * _tmp180;
  const Scalar _tmp196 =
      -_tmp188 * _tmp195 - std::sqrt(Scalar(std::pow(Scalar(-_tmp43 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp47 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp197 = Scalar(0.71007031138673404) * _tmp181;
  const Scalar _tmp198 = _tmp196 * _tmp197;
  const Scalar _tmp199 = Scalar(1.4083112389913199) * _tmp191;
  const Scalar _tmp200 = _tmp106 * _tmp113 * _tmp99;
  const Scalar _tmp201 = _tmp124 * _tmp126 * _tmp99;
  const Scalar _tmp202 = _tmp176 + _tmp179 + _tmp200 * fh1 + _tmp201 * fh1;
  const Scalar _tmp203 = Scalar(1.0) / (_tmp202);
  const Scalar _tmp204 = _tmp123 * _tmp126 * _tmp138;
  const Scalar _tmp205 = _tmp128 * _tmp152;
  const Scalar _tmp206 = _tmp105 * _tmp113 * _tmp138;
  const Scalar _tmp207 = _tmp115 * _tmp144 - _tmp147 * _tmp149 + _tmp185 - _tmp204 * fh1 -
                         _tmp205 * fh1 - _tmp206 * fh1;
  const Scalar _tmp208 = std::asinh(_tmp203 * _tmp207);
  const Scalar _tmp209 = Scalar(1.0) * _tmp208;
  const Scalar _tmp210 = Scalar(1.4083112389913199) * _tmp202;
  const Scalar _tmp211 =
      -_tmp208 * _tmp210 - std::sqrt(Scalar(std::pow(Scalar(-_tmp86 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp89 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp212 = Scalar(0.71007031138673404) * _tmp203;
  const Scalar _tmp213 = _tmp211 * _tmp212;
  const Scalar _tmp214 = _tmp178 + _tmp200 + _tmp201;
  const Scalar _tmp215 = Scalar(1.4083112389913199) * _tmp214;
  const Scalar _tmp216 = std::pow(_tmp202, Scalar(-2));
  const Scalar _tmp217 = _tmp214 * _tmp216;
  const Scalar _tmp218 = Scalar(0.71007031138673404) * _tmp217;
  const Scalar _tmp219 =
      (_tmp203 * (_tmp139 * _tmp173 + _tmp149 * _tmp172 - _tmp204 - _tmp205 - _tmp206) -
       _tmp207 * _tmp217) /
      std::sqrt(Scalar(std::pow(_tmp207, Scalar(2)) * _tmp216 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(1.4083112389913199) * _tmp37 * p_a(2, 0) -
      Scalar(1.4083112389913199) * fh1 *
          (-Scalar(1.0) * _tmp0 * _tmp39 * fv1 * std::sinh(_tmp40) - _tmp1 * p_a(2, 0) -
           (-_tmp1 * _tmp36 + _tmp37 * (Scalar(1.4083112389913199) * _tmp33 * _tmp39 - _tmp35)) *
               std::sinh(_tmp38)) +
      Scalar(1.4083112389913199) * std::cosh(_tmp38) -
      Scalar(1.4083112389913199) * std::cosh(_tmp40);
  _res(1, 0) =
      -_tmp163 * (-_tmp171 * p_b(2, 0) + Scalar(1.0) * _tmp174 * std::sinh(_tmp162) -
                  (-_tmp164 * _tmp171 + _tmp165 * (-_tmp161 * _tmp168 - _tmp163 * _tmp174)) *
                      std::sinh(_tmp166)) -
      _tmp168 * (_tmp165 * p_b(2, 0) + std::cosh(_tmp162) - std::cosh(_tmp166));
  _res(2, 0) =
      -_tmp195 * (Scalar(1.0) * _tmp193 * std::sinh(_tmp189) - _tmp194 * p_c(2, 0) -
                  (-_tmp194 * _tmp196 + _tmp197 * (-_tmp188 * _tmp199 - _tmp193 * _tmp195)) *
                      std::sinh(_tmp198)) -
      _tmp199 * (_tmp197 * p_c(2, 0) + std::cosh(_tmp189) - std::cosh(_tmp198));
  _res(3, 0) =
      -_tmp210 * (-_tmp218 * p_d(2, 0) + Scalar(1.0) * _tmp219 * std::sinh(_tmp209) -
                  (-_tmp211 * _tmp218 + _tmp212 * (-_tmp208 * _tmp215 - _tmp210 * _tmp219)) *
                      std::sinh(_tmp213)) -
      _tmp215 * (_tmp212 * p_d(2, 0) + std::cosh(_tmp209) - std::cosh(_tmp213));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
