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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl1
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 660

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (211)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * fv1;
  const Scalar _tmp2 = std::asinh(_tmp1);
  const Scalar _tmp3 = Scalar(1.0) * _tmp2;
  const Scalar _tmp4 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp8 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp8 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                        _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp12 = 2 * _tmp11;
  const Scalar _tmp13 = _tmp12 * _tmp5;
  const Scalar _tmp14 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp15 = _tmp14 * _tmp7;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp12 * _tmp7;
  const Scalar _tmp18 = _tmp14 * _tmp5;
  const Scalar _tmp19 = _tmp17 - _tmp18;
  const Scalar _tmp20 = -Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp21 = -_tmp16 + _tmp20;
  const Scalar _tmp22 = _tmp10 + _tmp21;
  const Scalar _tmp23 = _tmp22 + position_vector(1, 0);
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = 2 * _tmp5 * _tmp7;
  const Scalar _tmp27 = _tmp11 * _tmp14;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = 1 - 2 * std::pow(_tmp11, Scalar(2));
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp30 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp32 = _tmp29 - _tmp31;
  const Scalar _tmp33 = _tmp25 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp35 = Scalar(9.6622558468725703) * _tmp2;
  const Scalar _tmp36 =
      -Scalar(0.1034955) * _tmp35 * fh1 -
      Scalar(12.936937500000001) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp23 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp34 - 1), Scalar(2))));
  const Scalar _tmp37 = _tmp0 * _tmp36;
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp4 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp40 = _tmp16 + _tmp20;
  const Scalar _tmp41 = _tmp40 + _tmp9;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 + Scalar(-110.0);
  const Scalar _tmp44 = _tmp29 + _tmp31;
  const Scalar _tmp45 = _tmp24 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 + Scalar(-125.0);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp47 * _tmp48;
  const Scalar _tmp50 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp51 =
      -Scalar(0.010999999999999999) * _tmp30 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp52 = Scalar(0.20999999999999999) * _tmp26 - Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp53 = _tmp51 + _tmp52;
  const Scalar _tmp54 = _tmp50 + _tmp53;
  const Scalar _tmp55 = _tmp25 + _tmp44;
  const Scalar _tmp56 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 + Scalar(-125.0);
  const Scalar _tmp58 = Scalar(1.0) / (_tmp57);
  const Scalar _tmp59 = _tmp10 + _tmp40;
  const Scalar _tmp60 = _tmp59 + position_vector(1, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(110.0);
  const Scalar _tmp62 = _tmp58 * _tmp61;
  const Scalar _tmp63 = _tmp43 * _tmp48;
  const Scalar _tmp64 = _tmp49 * _tmp62 - _tmp63;
  const Scalar _tmp65 = _tmp51 - _tmp52;
  const Scalar _tmp66 = _tmp50 + _tmp65;
  const Scalar _tmp67 = _tmp24 + _tmp32;
  const Scalar _tmp68 = _tmp67 + position_vector(0, 0);
  const Scalar _tmp69 = _tmp68 + Scalar(125.0);
  const Scalar _tmp70 = _tmp21 + _tmp9;
  const Scalar _tmp71 = _tmp70 + position_vector(1, 0);
  const Scalar _tmp72 = _tmp71 + Scalar(-110.0);
  const Scalar _tmp73 = std::pow(Scalar(std::pow(_tmp69, Scalar(2)) + std::pow(_tmp72, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp74 = _tmp69 * _tmp73;
  const Scalar _tmp75 = -_tmp50;
  const Scalar _tmp76 = _tmp53 + _tmp75;
  const Scalar _tmp77 = _tmp72 * _tmp73;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp62 * _tmp74 - _tmp77);
  const Scalar _tmp79 = _tmp78 * (-_tmp66 * _tmp74 + _tmp74 * _tmp76);
  const Scalar _tmp80 = _tmp62 * _tmp76;
  const Scalar _tmp81 = _tmp78 * (_tmp66 * _tmp77 - _tmp74 * _tmp80);
  const Scalar _tmp82 = _tmp49 * _tmp76;
  const Scalar _tmp83 = _tmp54 * _tmp63 - _tmp62 * _tmp82 - _tmp64 * _tmp81;
  const Scalar _tmp84 = Scalar(1.0) * _tmp55;
  const Scalar _tmp85 = Scalar(1.0) * _tmp59;
  const Scalar _tmp86 = -_tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp70 + _tmp86);
  const Scalar _tmp88 = _tmp87 * (-_tmp67 + _tmp84);
  const Scalar _tmp89 = -_tmp49 * _tmp54 - _tmp64 * _tmp79 + _tmp82 - _tmp83 * _tmp88;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp84 + _tmp85 * _tmp88;
  const Scalar _tmp92 = 0;
  const Scalar _tmp93 = _tmp90 * _tmp92;
  const Scalar _tmp94 = _tmp64 * _tmp90;
  const Scalar _tmp95 = _tmp78 * _tmp92 * _tmp94;
  const Scalar _tmp96 =
      std::sqrt(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp97 = _tmp58 * _tmp96;
  const Scalar _tmp98 = _tmp23 + Scalar(110.0);
  const Scalar _tmp99 = _tmp34 + Scalar(125.0);
  const Scalar _tmp100 = std::pow(Scalar(std::pow(_tmp98, Scalar(2)) + std::pow(_tmp99, Scalar(2))),
                                  Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp101 = _tmp100 * _tmp98;
  const Scalar _tmp102 = _tmp100 * _tmp99;
  const Scalar _tmp103 = _tmp101 * _tmp33 - _tmp102 * _tmp22;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp105 = _tmp97 * (_tmp104 * _tmp55 * _tmp61 - _tmp104 * _tmp57 * _tmp59);
  const Scalar _tmp106 = _tmp78 * (_tmp105 * _tmp74 - _tmp67 * _tmp77 + _tmp70 * _tmp74);
  const Scalar _tmp107 = _tmp105 * _tmp49 - _tmp106 * _tmp64 + _tmp41 * _tmp49 - _tmp45 * _tmp63;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = Scalar(1.0) * _tmp108;
  const Scalar _tmp110 = _tmp64 * _tmp78;
  const Scalar _tmp111 = _tmp103 * _tmp97 * (-_tmp109 * _tmp110 * _tmp74 + _tmp109 * _tmp49);
  const Scalar _tmp112 = Scalar(1.0) * _tmp81;
  const Scalar _tmp113 = _tmp112 * _tmp88 - Scalar(1.0) * _tmp79;
  const Scalar _tmp114 = _tmp107 * _tmp90;
  const Scalar _tmp115 = _tmp108 * _tmp89;
  const Scalar _tmp116 = _tmp115 * (-Scalar(1.0) * _tmp106 - _tmp113 * _tmp114);
  const Scalar _tmp117 = _tmp113 + _tmp116;
  const Scalar _tmp118 = _tmp78 * (-_tmp117 * _tmp94 + Scalar(1.0));
  const Scalar _tmp119 = _tmp49 * _tmp90;
  const Scalar _tmp120 = _tmp101 * _tmp97 * (_tmp117 * _tmp119 + _tmp118 * _tmp74);
  const Scalar _tmp121 = _tmp62 * _tmp81 + _tmp80;
  const Scalar _tmp122 = -_tmp121 * _tmp88 + _tmp62 * _tmp79 - _tmp76;
  const Scalar _tmp123 = _tmp115 * (-_tmp105 + _tmp106 * _tmp62 - _tmp114 * _tmp122);
  const Scalar _tmp124 = _tmp122 + _tmp123;
  const Scalar _tmp125 = _tmp78 * (-_tmp124 * _tmp94 - _tmp62);
  const Scalar _tmp126 = _tmp102 * _tmp97 * (_tmp119 * _tmp124 + _tmp125 * _tmp74 + Scalar(1.0));
  const Scalar _tmp127 = -_tmp111 * fh1 - _tmp120 * fh1 - _tmp126 * fh1 -
                         _tmp39 * _tmp97 * (_tmp49 * _tmp93 - _tmp74 * _tmp95);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp65 + _tmp75;
  const Scalar _tmp130 = _tmp129 * fh1;
  const Scalar _tmp131 = _tmp102 * _tmp130 + Scalar(2.3544) * _tmp28 + _tmp33 * fv1;
  const Scalar _tmp132 = _tmp41 + _tmp86;
  const Scalar _tmp133 = _tmp132 * _tmp88;
  const Scalar _tmp134 = Scalar(1.0) / (-_tmp133 - _tmp45 + _tmp84);
  const Scalar _tmp135 = Scalar(1.0) * _tmp134;
  const Scalar _tmp136 = _tmp132 * _tmp87;
  const Scalar _tmp137 = Scalar(1.0) * _tmp135 * _tmp136 - Scalar(1.0) * _tmp135;
  const Scalar _tmp138 = _tmp83 * _tmp90;
  const Scalar _tmp139 = _tmp134 * _tmp91;
  const Scalar _tmp140 = -_tmp132 * _tmp139 - _tmp138 * _tmp92 + _tmp86;
  const Scalar _tmp141 = Scalar(1.0) * _tmp87;
  const Scalar _tmp142 = _tmp132 * _tmp134;
  const Scalar _tmp143 = _tmp121 + _tmp123 * _tmp142 - _tmp124 * _tmp138;
  const Scalar _tmp144 = Scalar(1.0) * _tmp102 * (_tmp123 * _tmp135 - _tmp141 * _tmp143);
  const Scalar _tmp145 = _tmp115 * _tmp135;
  const Scalar _tmp146 = -_tmp109 * _tmp83 + _tmp132 * _tmp145;
  const Scalar _tmp147 = Scalar(1.0) * _tmp103 * (-_tmp141 * _tmp146 + _tmp145);
  const Scalar _tmp148 = -_tmp101 * _tmp130 - Scalar(2.3544) * _tmp19 - _tmp22 * fv1;
  const Scalar _tmp149 = _tmp133 * _tmp135 + Scalar(1.0);
  const Scalar _tmp150 = _tmp135 * _tmp88;
  const Scalar _tmp151 = -Scalar(1.0) * _tmp141 * _tmp149 + Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = -_tmp112 + _tmp116 * _tmp142 - _tmp117 * _tmp138;
  const Scalar _tmp153 = Scalar(1.0) * _tmp101 * (_tmp116 * _tmp135 - _tmp141 * _tmp152);
  const Scalar _tmp154 =
      _tmp131 * _tmp137 + _tmp144 * fh1 + _tmp147 * fh1 + _tmp148 * _tmp151 + _tmp153 * fh1 +
      Scalar(1.0) * _tmp39 * (-_tmp135 * _tmp91 - _tmp140 * _tmp141 + Scalar(1.0));
  const Scalar _tmp155 = std::asinh(_tmp128 * _tmp154);
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp155;
  const Scalar _tmp157 =
      -_tmp127 * _tmp156 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp56), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp60 - 1), Scalar(2))));
  const Scalar _tmp158 = Scalar(0.1034955) * _tmp128;
  const Scalar _tmp159 = _tmp157 * _tmp158;
  const Scalar _tmp160 = Scalar(1.0) * _tmp155;
  const Scalar _tmp161 = -_tmp111 - _tmp120 - _tmp126;
  const Scalar _tmp162 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp163 = _tmp161 * _tmp162;
  const Scalar _tmp164 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp165 = _tmp101 * _tmp129;
  const Scalar _tmp166 = _tmp102 * _tmp129;
  const Scalar _tmp167 =
      (_tmp128 * (_tmp137 * _tmp166 + _tmp144 + _tmp147 - _tmp151 * _tmp165 + _tmp153) -
       _tmp154 * _tmp163) /
      std::sqrt(Scalar(std::pow(_tmp154, Scalar(2)) * _tmp162 + 1));
  const Scalar _tmp168 = _tmp102 * _tmp125;
  const Scalar _tmp169 = _tmp101 * _tmp118;
  const Scalar _tmp170 = _tmp103 * _tmp109;
  const Scalar _tmp171 = _tmp170 * fh1;
  const Scalar _tmp172 = -_tmp110 * _tmp171 + _tmp168 * fh1 + _tmp169 * fh1 - _tmp39 * _tmp95;
  const Scalar _tmp173 = Scalar(1.0) / (_tmp172);
  const Scalar _tmp174 = _tmp101 * _tmp152 * _tmp87;
  const Scalar _tmp175 = _tmp102 * _tmp87;
  const Scalar _tmp176 = _tmp143 * _tmp175;
  const Scalar _tmp177 = _tmp103 * _tmp146 * _tmp87;
  const Scalar _tmp178 = _tmp131 * _tmp135;
  const Scalar _tmp179 = _tmp149 * _tmp87;
  const Scalar _tmp180 = -_tmp136 * _tmp178 + _tmp140 * _tmp39 * _tmp87 + _tmp148 * _tmp179 +
                         _tmp174 * fh1 + _tmp176 * fh1 + _tmp177 * fh1;
  const Scalar _tmp181 = std::asinh(_tmp173 * _tmp180);
  const Scalar _tmp182 = Scalar(1.0) * _tmp181;
  const Scalar _tmp183 = std::pow(_tmp172, Scalar(-2));
  const Scalar _tmp184 = -_tmp110 * _tmp170 + _tmp168 + _tmp169;
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = (_tmp173 * (-_tmp129 * _tmp132 * _tmp135 * _tmp175 - _tmp165 * _tmp179 +
                                     _tmp174 + _tmp176 + _tmp177) -
                          _tmp180 * _tmp185) /
                         std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp183 + 1));
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp172;
  const Scalar _tmp188 =
      -_tmp181 * _tmp187 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp71), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp68 - 1), Scalar(2))));
  const Scalar _tmp189 = Scalar(0.1034955) * _tmp173;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 = Scalar(9.6622558468725703) * _tmp184;
  const Scalar _tmp192 = _tmp102 * _tmp124 * _tmp90;
  const Scalar _tmp193 = _tmp101 * _tmp117 * _tmp90;
  const Scalar _tmp194 = _tmp171 + _tmp192 * fh1 + _tmp193 * fh1 + _tmp39 * _tmp93;
  const Scalar _tmp195 = Scalar(1.0) / (_tmp194);
  const Scalar _tmp196 = _tmp101 * _tmp116 * _tmp134;
  const Scalar _tmp197 = _tmp103 * _tmp145;
  const Scalar _tmp198 = _tmp102 * _tmp123 * _tmp134;
  const Scalar _tmp199 = _tmp139 * _tmp39 - _tmp148 * _tmp150 + _tmp178 - _tmp196 * fh1 -
                         _tmp197 * fh1 - _tmp198 * fh1;
  const Scalar _tmp200 = std::asinh(_tmp195 * _tmp199);
  const Scalar _tmp201 = Scalar(9.6622558468725703) * _tmp194;
  const Scalar _tmp202 =
      -_tmp200 * _tmp201 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp42), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp46), Scalar(2))));
  const Scalar _tmp203 = Scalar(0.1034955) * _tmp195;
  const Scalar _tmp204 = _tmp202 * _tmp203;
  const Scalar _tmp205 = Scalar(1.0) * _tmp200;
  const Scalar _tmp206 = _tmp170 + _tmp192 + _tmp193;
  const Scalar _tmp207 = Scalar(9.6622558468725703) * _tmp206;
  const Scalar _tmp208 = std::pow(_tmp194, Scalar(-2));
  const Scalar _tmp209 = _tmp206 * _tmp208;
  const Scalar _tmp210 =
      (_tmp195 * (_tmp135 * _tmp166 + _tmp150 * _tmp165 - _tmp196 - _tmp197 - _tmp198) -
       _tmp199 * _tmp209) /
      std::sqrt(Scalar(std::pow(_tmp199, Scalar(2)) * _tmp208 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(48.000000000000007) * _tmp0 -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp38 * _tmp4 * fv1 * std::sinh(_tmp3) - Scalar(4.967784) * _tmp4 -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp1 * _tmp38 - _tmp35) -
            _tmp36 * _tmp4) *
               std::sinh(_tmp37)) -
      Scalar(9.6622558468725703) * std::cosh(_tmp3) +
      Scalar(9.6622558468725703) * std::cosh(_tmp37);
  _res(1, 0) = -Scalar(9.6622558468725703) * _tmp161 *
                   (Scalar(4.967784) * _tmp128 - std::cosh(_tmp159) + std::cosh(_tmp160)) -
               _tmp164 * (-Scalar(4.967784) * _tmp163 + Scalar(1.0) * _tmp167 * std::sinh(_tmp160) -
                          (-Scalar(0.1034955) * _tmp157 * _tmp163 +
                           _tmp158 * (-_tmp156 * _tmp161 - _tmp164 * _tmp167)) *
                              std::sinh(_tmp159));
  _res(2, 0) =
      -_tmp187 * (-Scalar(4.967784) * _tmp185 + Scalar(1.0) * _tmp186 * std::sinh(_tmp182) -
                  (-Scalar(0.1034955) * _tmp185 * _tmp188 +
                   _tmp189 * (-_tmp181 * _tmp191 - _tmp186 * _tmp187)) *
                      std::sinh(_tmp190)) -
      _tmp191 * (Scalar(4.967784) * _tmp173 + std::cosh(_tmp182) - std::cosh(_tmp190));
  _res(3, 0) =
      -_tmp201 * (-Scalar(4.967784) * _tmp209 + Scalar(1.0) * _tmp210 * std::sinh(_tmp205) -
                  (-Scalar(0.1034955) * _tmp202 * _tmp209 +
                   _tmp203 * (-_tmp200 * _tmp207 - _tmp201 * _tmp210)) *
                      std::sinh(_tmp204)) -
      _tmp207 * (Scalar(4.967784) * _tmp195 - std::cosh(_tmp204) + std::cosh(_tmp205));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
