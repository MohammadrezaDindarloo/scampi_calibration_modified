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
 * Symbolic function: IK_residual_func_cost3_wrt_pc_Nl23
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPcNl23(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 714

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (241)
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
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp1 * _tmp7;
  const Scalar _tmp9 = _tmp0 * _tmp4;
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp12 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp6;
  const Scalar _tmp16 = _tmp15 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp17 = Scalar(1.0) / (_tmp16);
  const Scalar _tmp18 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp19 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp22 = _tmp0 * _tmp7;
  const Scalar _tmp23 = _tmp1 * _tmp4;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 + Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp21 + _tmp24;
  const Scalar _tmp26 = _tmp20 + _tmp25;
  const Scalar _tmp27 = _tmp26 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp28 = std::pow(_tmp27, Scalar(2));
  const Scalar _tmp29 = _tmp18 + _tmp28;
  const Scalar _tmp30 = std::sqrt(_tmp29);
  const Scalar _tmp31 = _tmp17 * _tmp30;
  const Scalar _tmp32 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp33 = -_tmp6;
  const Scalar _tmp34 = _tmp14 + _tmp33;
  const Scalar _tmp35 = _tmp34 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp36 = std::pow(_tmp35, Scalar(2));
  const Scalar _tmp37 = -_tmp20;
  const Scalar _tmp38 = _tmp25 + _tmp37;
  const Scalar _tmp39 = _tmp38 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp40 = _tmp36 + std::pow(_tmp39, Scalar(2));
  const Scalar _tmp41 = std::pow(_tmp40, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp39 * _tmp41;
  const Scalar _tmp43 = _tmp17 * _tmp27;
  const Scalar _tmp44 = _tmp35 * _tmp41;
  const Scalar _tmp45 = _tmp43 * _tmp44;
  const Scalar _tmp46 = -_tmp42 + _tmp45;
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = _tmp44 * _tmp47;
  const Scalar _tmp49 = Scalar(1.0) * _tmp26;
  const Scalar _tmp50 = Scalar(1.0) * _tmp15;
  const Scalar _tmp51 = (-_tmp34 + _tmp50) / (_tmp38 - _tmp49);
  const Scalar _tmp52 = _tmp49 * _tmp51 + _tmp50;
  const Scalar _tmp53 = 0;
  const Scalar _tmp54 = -Scalar(0.010999999999999999) * _tmp11 -
                        Scalar(0.010999999999999999) * _tmp19 + Scalar(-0.010999999999999999);
  const Scalar _tmp55 = Scalar(0.20999999999999999) * _tmp8 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp56 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp57 = -_tmp56;
  const Scalar _tmp58 = _tmp54 - _tmp55 + _tmp57;
  const Scalar _tmp59 = _tmp10 - _tmp13;
  const Scalar _tmp60 = _tmp33 + _tmp59;
  const Scalar _tmp61 = _tmp60 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp62 = -_tmp21 + _tmp24;
  const Scalar _tmp63 = _tmp37 + _tmp62;
  const Scalar _tmp64 = _tmp63 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp61, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp61 * _tmp65;
  const Scalar _tmp67 = _tmp54 + _tmp55;
  const Scalar _tmp68 = _tmp56 + _tmp67;
  const Scalar _tmp69 = _tmp57 + _tmp67;
  const Scalar _tmp70 = _tmp43 * _tmp68;
  const Scalar _tmp71 = _tmp42 * _tmp69 - _tmp44 * _tmp70;
  const Scalar _tmp72 = _tmp64 * _tmp65;
  const Scalar _tmp73 = _tmp43 * _tmp66 - _tmp72;
  const Scalar _tmp74 = _tmp47 * _tmp73;
  const Scalar _tmp75 = _tmp44 * _tmp68;
  const Scalar _tmp76 = -_tmp44 * _tmp69 + _tmp75;
  const Scalar _tmp77 = -_tmp51 * (_tmp58 * _tmp72 - _tmp66 * _tmp70 - _tmp71 * _tmp74) -
                        _tmp58 * _tmp66 + _tmp66 * _tmp68 - _tmp74 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp79 = _tmp73 * _tmp78;
  const Scalar _tmp80 = _tmp53 * _tmp79;
  const Scalar _tmp81 = _tmp53 * _tmp78;
  const Scalar _tmp82 = _tmp66 * _tmp81;
  const Scalar _tmp83 = _tmp32 * (-_tmp48 * _tmp80 + _tmp82);
  const Scalar _tmp84 = Scalar(1.0) / (_tmp30);
  const Scalar _tmp85 = _tmp26 * _tmp84;
  const Scalar _tmp86 = _tmp15 * _tmp84;
  const Scalar _tmp87 = -_tmp16 * _tmp85 + _tmp27 * _tmp86;
  const Scalar _tmp88 = _tmp30 * _tmp87;
  const Scalar _tmp89 = _tmp17 * _tmp88;
  const Scalar _tmp90 = -_tmp34 * _tmp42 + _tmp38 * _tmp44 + _tmp44 * _tmp89;
  const Scalar _tmp91 = Scalar(1.0) * _tmp47;
  const Scalar _tmp92 = _tmp51 * _tmp71;
  const Scalar _tmp93 = -_tmp76 * _tmp91 + _tmp91 * _tmp92;
  const Scalar _tmp94 = -_tmp60 * _tmp72 + _tmp63 * _tmp66 + _tmp66 * _tmp89 - _tmp74 * _tmp90;
  const Scalar _tmp95 = _tmp78 * _tmp94;
  const Scalar _tmp96 = -_tmp90 * _tmp91 - _tmp93 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp98 = _tmp77 * _tmp97;
  const Scalar _tmp99 = _tmp93 + _tmp96 * _tmp98;
  const Scalar _tmp100 = -_tmp79 * _tmp99 + Scalar(1.0);
  const Scalar _tmp101 = _tmp66 * _tmp78;
  const Scalar _tmp102 = _tmp101 * _tmp99;
  const Scalar _tmp103 = _tmp59 + _tmp6;
  const Scalar _tmp104 = _tmp103 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp105 = _tmp20 + _tmp62;
  const Scalar _tmp106 = _tmp105 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp107 =
      std::pow(Scalar(std::pow(_tmp104, Scalar(2)) + std::pow(_tmp106, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp108 = _tmp106 * _tmp107;
  const Scalar _tmp109 = _tmp108 * fh1;
  const Scalar _tmp110 = _tmp109 * (_tmp100 * _tmp48 + _tmp102);
  const Scalar _tmp111 = Scalar(1.0) * _tmp97;
  const Scalar _tmp112 = _tmp111 * _tmp66;
  const Scalar _tmp113 = _tmp44 * _tmp74;
  const Scalar _tmp114 = _tmp104 * _tmp107;
  const Scalar _tmp115 = fh1 * (_tmp103 * _tmp108 - _tmp105 * _tmp114);
  const Scalar _tmp116 = _tmp115 * (-_tmp111 * _tmp113 + _tmp112);
  const Scalar _tmp117 = _tmp43 * _tmp47;
  const Scalar _tmp118 = _tmp117 * _tmp76 - _tmp51 * (_tmp117 * _tmp71 + _tmp70) - _tmp68;
  const Scalar _tmp119 = _tmp47 * _tmp90;
  const Scalar _tmp120 = -_tmp118 * _tmp95 + _tmp119 * _tmp43 - _tmp89;
  const Scalar _tmp121 = _tmp118 + _tmp120 * _tmp98;
  const Scalar _tmp122 = -_tmp121 * _tmp79 - _tmp43;
  const Scalar _tmp123 = _tmp101 * _tmp121;
  const Scalar _tmp124 = _tmp114 * fh1;
  const Scalar _tmp125 = _tmp124 * (_tmp122 * _tmp48 + _tmp123 + Scalar(1.0));
  const Scalar _tmp126 =
      std::exp(_tmp110 * _tmp31 + _tmp116 * _tmp31 + _tmp125 * _tmp31 + _tmp31 * _tmp83);
  const Scalar _tmp127 = _tmp125 * _tmp84;
  const Scalar _tmp128 = Scalar(1.0) / (_tmp18);
  const Scalar _tmp129 = _tmp128 * _tmp30;
  const Scalar _tmp130 = _tmp83 * _tmp84;
  const Scalar _tmp131 = _tmp128 * _tmp27;
  const Scalar _tmp132 = std::pow(_tmp46, Scalar(-2));
  const Scalar _tmp133 = _tmp132 * _tmp44;
  const Scalar _tmp134 = _tmp133 * _tmp90;
  const Scalar _tmp135 = _tmp131 * _tmp134;
  const Scalar _tmp136 = std::pow(_tmp29, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp137 = _tmp136 * _tmp26;
  const Scalar _tmp138 = _tmp136 * _tmp15;
  const Scalar _tmp139 = _tmp16 * _tmp27;
  const Scalar _tmp140 = _tmp31 * (-_tmp137 * _tmp18 + _tmp138 * _tmp139 + _tmp85);
  const Scalar _tmp141 = _tmp128 * _tmp88;
  const Scalar _tmp142 = _tmp84 * _tmp87;
  const Scalar _tmp143 = _tmp140 * _tmp44 + _tmp141 * _tmp44 - _tmp142 * _tmp44;
  const Scalar _tmp144 = _tmp119 * _tmp131;
  const Scalar _tmp145 = _tmp142 * _tmp66;
  const Scalar _tmp146 = _tmp135 * _tmp73 + _tmp140 * _tmp66 + _tmp141 * _tmp66 - _tmp143 * _tmp74 -
                         _tmp144 * _tmp66 - _tmp145;
  const Scalar _tmp147 = std::pow(_tmp94, Scalar(-2));
  const Scalar _tmp148 = _tmp147 * _tmp77;
  const Scalar _tmp149 = _tmp146 * _tmp148;
  const Scalar _tmp150 = _tmp78 * _tmp93;
  const Scalar _tmp151 = _tmp131 * _tmp47;
  const Scalar _tmp152 = _tmp151 * _tmp76;
  const Scalar _tmp153 = _tmp133 * _tmp76;
  const Scalar _tmp154 = _tmp131 * _tmp153;
  const Scalar _tmp155 = _tmp133 * _tmp71;
  const Scalar _tmp156 = _tmp131 * _tmp155;
  const Scalar _tmp157 = _tmp131 * _tmp68;
  const Scalar _tmp158 = _tmp151 * _tmp71;
  const Scalar _tmp159 =
      -_tmp152 * _tmp66 + _tmp154 * _tmp73 -
      _tmp51 * (_tmp113 * _tmp157 + _tmp156 * _tmp73 - _tmp157 * _tmp66 - _tmp158 * _tmp66);
  const Scalar _tmp160 = std::pow(_tmp77, Scalar(-2));
  const Scalar _tmp161 = _tmp159 * _tmp160;
  const Scalar _tmp162 = _tmp161 * _tmp94;
  const Scalar _tmp163 = _tmp131 * _tmp133;
  const Scalar _tmp164 = _tmp44 * _tmp91;
  const Scalar _tmp165 = _tmp164 * _tmp51;
  const Scalar _tmp166 = Scalar(1.0) * _tmp76;
  const Scalar _tmp167 = -_tmp157 * _tmp165 + _tmp163 * _tmp166 - Scalar(1.0) * _tmp163 * _tmp92;
  const Scalar _tmp168 = _tmp96 * _tmp97;
  const Scalar _tmp169 = -_tmp149 * _tmp96 + _tmp159 * _tmp168 + _tmp167 +
                         _tmp98 * (Scalar(1.0) * _tmp135 - _tmp143 * _tmp91 - _tmp146 * _tmp150 +
                                   _tmp162 * _tmp93 - _tmp167 * _tmp95);
  const Scalar _tmp170 = _tmp36 / _tmp40;
  const Scalar _tmp171 = _tmp131 * _tmp132;
  const Scalar _tmp172 = _tmp170 * _tmp171;
  const Scalar _tmp173 = _tmp73 * _tmp99;
  const Scalar _tmp174 = -_tmp102 * _tmp131 + _tmp161 * _tmp173 - _tmp169 * _tmp79;
  const Scalar _tmp175 = _tmp161 * _tmp66;
  const Scalar _tmp176 = _tmp109 * _tmp31;
  const Scalar _tmp177 = _tmp116 * _tmp84;
  const Scalar _tmp178 = Scalar(1.0) * _tmp147;
  const Scalar _tmp179 = _tmp146 * _tmp178;
  const Scalar _tmp180 = _tmp111 * _tmp73;
  const Scalar _tmp181 = _tmp131 * _tmp66 * _tmp97;
  const Scalar _tmp182 = _tmp115 * _tmp31;
  const Scalar _tmp183 = _tmp120 * _tmp97;
  const Scalar _tmp184 = _tmp118 * _tmp78;
  const Scalar _tmp185 = _tmp28 / [&]() {
    const Scalar base = _tmp16;
    return base * base * base;
  }();
  const Scalar _tmp186 =
      _tmp152 - _tmp153 * _tmp185 -
      _tmp51 * (-_tmp155 * _tmp185 + _tmp157 + _tmp158 - _tmp185 * _tmp47 * _tmp75);
  const Scalar _tmp187 =
      -_tmp120 * _tmp149 + _tmp159 * _tmp183 + _tmp186 +
      _tmp98 * (_tmp117 * _tmp143 + _tmp118 * _tmp162 - _tmp134 * _tmp185 - _tmp140 - _tmp141 +
                _tmp142 + _tmp144 - _tmp146 * _tmp184 - _tmp186 * _tmp95);
  const Scalar _tmp188 = _tmp121 * _tmp73;
  const Scalar _tmp189 = -_tmp123 * _tmp131 - _tmp131 + _tmp161 * _tmp188 - _tmp187 * _tmp79;
  const Scalar _tmp190 = _tmp122 * _tmp170;
  const Scalar _tmp191 = _tmp124 * _tmp31;
  const Scalar _tmp192 = _tmp113 * _tmp53;
  const Scalar _tmp193 = _tmp44 * _tmp82;
  const Scalar _tmp194 = _tmp31 * _tmp32;
  const Scalar _tmp195 = _tmp110 * _tmp84;
  const Scalar _tmp196 = _tmp109 * _tmp47;
  const Scalar _tmp197 = _tmp124 * _tmp47;
  const Scalar _tmp198 = _tmp32 * _tmp53;
  const Scalar _tmp199 = _tmp198 * _tmp79;
  const Scalar _tmp200 = _tmp111 * _tmp115;
  const Scalar _tmp201 =
      std::exp(-_tmp100 * _tmp196 - _tmp122 * _tmp197 + _tmp199 * _tmp47 + _tmp200 * _tmp74);
  const Scalar _tmp202 = _tmp115 * _tmp179;
  const Scalar _tmp203 = _tmp122 * _tmp124;
  const Scalar _tmp204 = _tmp32 * _tmp81;
  const Scalar _tmp205 = _tmp204 * _tmp66;
  const Scalar _tmp206 = _tmp161 * _tmp198;
  const Scalar _tmp207 = _tmp109 * _tmp78;
  const Scalar _tmp208 = _tmp124 * _tmp78;
  const Scalar _tmp209 = std::exp(-_tmp121 * _tmp208 - _tmp200 - _tmp204 - _tmp207 * _tmp99);
  const Scalar _tmp210 = _tmp121 * _tmp124;
  const Scalar _tmp211 = _tmp109 * _tmp99;
  const Scalar _tmp212 = _tmp31 * (-_tmp137 * _tmp139 + _tmp138 * _tmp28 - _tmp86);
  const Scalar _tmp213 = -_tmp142 * _tmp45 + _tmp212 * _tmp44;
  const Scalar _tmp214 = _tmp17 * _tmp47;
  const Scalar _tmp215 = _tmp214 * _tmp90;
  const Scalar _tmp216 = _tmp132 * _tmp17;
  const Scalar _tmp217 = _tmp216 * _tmp44;
  const Scalar _tmp218 = _tmp217 * _tmp73;
  const Scalar _tmp219 =
      -_tmp145 * _tmp43 + _tmp212 * _tmp66 - _tmp213 * _tmp74 + _tmp215 * _tmp66 - _tmp218 * _tmp90;
  const Scalar _tmp220 = _tmp178 * _tmp219;
  const Scalar _tmp221 = _tmp112 * _tmp214;
  const Scalar _tmp222 = _tmp170 * _tmp216;
  const Scalar _tmp223 = _tmp17 * _tmp68;
  const Scalar _tmp224 = _tmp214 * _tmp71;
  const Scalar _tmp225 = _tmp214 * _tmp76;
  const Scalar _tmp226 =
      -_tmp218 * _tmp76 + _tmp225 * _tmp66 -
      _tmp51 * (-_tmp113 * _tmp223 - _tmp218 * _tmp71 + _tmp223 * _tmp66 + _tmp224 * _tmp66);
  const Scalar _tmp227 = _tmp160 * _tmp226;
  const Scalar _tmp228 = _tmp227 * _tmp66;
  const Scalar _tmp229 = _tmp100 * _tmp216;
  const Scalar _tmp230 = Scalar(1.0) * _tmp217;
  const Scalar _tmp231 = _tmp165 * _tmp223 - _tmp166 * _tmp217 + _tmp230 * _tmp92;
  const Scalar _tmp232 = _tmp227 * _tmp94;
  const Scalar _tmp233 = _tmp148 * _tmp219;
  const Scalar _tmp234 = _tmp168 * _tmp226 + _tmp231 - _tmp233 * _tmp96 +
                         _tmp98 * (-_tmp150 * _tmp219 - _tmp213 * _tmp91 - _tmp230 * _tmp90 -
                                   _tmp231 * _tmp95 + _tmp232 * _tmp93);
  const Scalar _tmp235 = _tmp102 * _tmp17 + _tmp173 * _tmp227 - _tmp234 * _tmp79;
  const Scalar _tmp236 =
      _tmp154 - _tmp225 - _tmp51 * (_tmp156 + _tmp157 * _tmp48 - _tmp223 - _tmp224);
  const Scalar _tmp237 =
      -_tmp120 * _tmp233 + _tmp183 * _tmp226 + _tmp236 +
      _tmp98 * (_tmp117 * _tmp213 + _tmp118 * _tmp232 + _tmp135 + _tmp142 * _tmp43 -
                _tmp184 * _tmp219 - _tmp212 - _tmp215 - _tmp236 * _tmp95);
  const Scalar _tmp238 = _tmp123 * _tmp17 + _tmp17 + _tmp188 * _tmp227 - _tmp237 * _tmp79;
  const Scalar _tmp239 = _tmp198 * _tmp227;
  const Scalar _tmp240 = _tmp115 * _tmp220;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp126 *
      (-_tmp110 * _tmp129 - _tmp116 * _tmp129 - _tmp125 * _tmp129 + _tmp127 - _tmp129 * _tmp83 +
       _tmp130 -
       _tmp176 * (-_tmp100 * _tmp172 + _tmp101 * _tmp169 + _tmp174 * _tmp48 - _tmp175 * _tmp99) +
       _tmp177 -
       _tmp182 * (_tmp113 * _tmp179 - _tmp164 * _tmp181 + _tmp172 * _tmp180 - _tmp179 * _tmp66) -
       _tmp191 * (_tmp101 * _tmp187 - _tmp121 * _tmp175 - _tmp171 * _tmp190 + _tmp189 * _tmp48) -
       _tmp194 * (-_tmp151 * _tmp193 + _tmp161 * _tmp192 + _tmp172 * _tmp80 - _tmp175 * _tmp53) +
       _tmp195);
  _res(2, 0) =
      -_tmp201 * (-_tmp100 * _tmp109 * _tmp163 - _tmp115 * _tmp181 * _tmp91 - _tmp151 * _tmp205 +
                  _tmp163 * _tmp199 + _tmp163 * _tmp200 * _tmp73 - _tmp163 * _tmp203 +
                  _tmp174 * _tmp196 + _tmp189 * _tmp197 + _tmp202 * _tmp74 + _tmp206 * _tmp74);
  _res(3, 0) = -_tmp209 * (-_tmp161 * _tmp210 - _tmp161 * _tmp211 + _tmp169 * _tmp207 +
                           _tmp187 * _tmp208 - _tmp202 - _tmp206);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp126 *
      (_tmp127 * _tmp43 + _tmp130 * _tmp43 -
       _tmp176 * (_tmp101 * _tmp234 + _tmp170 * _tmp229 - _tmp228 * _tmp99 + _tmp235 * _tmp48) +
       _tmp177 * _tmp43 -
       _tmp182 * (_tmp113 * _tmp220 - _tmp180 * _tmp222 - _tmp220 * _tmp66 + _tmp221 * _tmp44) -
       _tmp191 * (_tmp101 * _tmp237 - _tmp121 * _tmp228 + _tmp190 * _tmp216 + _tmp238 * _tmp48) -
       _tmp194 * (_tmp192 * _tmp227 + _tmp193 * _tmp214 - _tmp222 * _tmp80 - _tmp228 * _tmp53) +
       _tmp195 * _tmp43);
  _res(2, 1) =
      -_tmp201 * (_tmp109 * _tmp229 * _tmp44 + _tmp115 * _tmp221 + _tmp196 * _tmp235 +
                  _tmp197 * _tmp238 - _tmp199 * _tmp217 - _tmp200 * _tmp218 + _tmp203 * _tmp217 +
                  _tmp205 * _tmp214 + _tmp239 * _tmp74 + _tmp240 * _tmp74);
  _res(3, 1) = -_tmp209 * (_tmp207 * _tmp234 + _tmp208 * _tmp237 - _tmp210 * _tmp227 -
                           _tmp211 * _tmp227 - _tmp239 - _tmp240);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
