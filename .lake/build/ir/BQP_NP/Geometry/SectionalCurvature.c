// Lean compiler output
// Module: BQP_NP.Geometry.SectionalCurvature
// Imports: public import Init public import Mathlib.Algebra.Lie.Basic public import Mathlib.Analysis.InnerProductSpace.Basic public import Mathlib.Analysis.InnerProductSpace.Adjoint public import Mathlib.Analysis.RCLike.Basic public import Mathlib.Topology.Algebra.Module.FiniteDimension public import Mathlib.Analysis.Normed.Module.FiniteDimension public import Mathlib.Analysis.InnerProductSpace.PiL2 public import Mathlib.Analysis.Matrix.Normed public import BQP_NP.Basic.LieAlgebra
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_Lie_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Analysis_InnerProductSpace_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Analysis_InnerProductSpace_Adjoint(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Analysis_RCLike_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Topology_Algebra_Module_FiniteDimension(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Analysis_Normed_Module_FiniteDimension(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Analysis_InnerProductSpace_PiL2(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Analysis_Matrix_Normed(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Basic_LieAlgebra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_bqp__np_BQP__NP_Geometry_SectionalCurvature(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_Lie_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Analysis_InnerProductSpace_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Analysis_InnerProductSpace_Adjoint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Analysis_RCLike_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Topology_Algebra_Module_FiniteDimension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Analysis_Normed_Module_FiniteDimension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Analysis_InnerProductSpace_PiL2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Analysis_Matrix_Normed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Basic_LieAlgebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
