// Lean compiler output
// Module: BQP_NP.Year2.AdjointGraph
// Imports: public import Init public import BQP_NP.Basic.PauliBasis public import BQP_NP.Basic.LieAlgebra public import Mathlib.Combinatorics.SimpleGraph.Basic public import Mathlib.Combinatorics.SimpleGraph.AdjMatrix public import Mathlib.Analysis.Complex.Basic
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
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_adjointGraph___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_adjointGraph(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_adjointGraph(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_adjointGraph___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_bqp__np_BQP__NP_Year2_adjointGraph(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Basic_PauliBasis(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Basic_LieAlgebra(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_AdjMatrix(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Analysis_Complex_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_bqp__np_BQP__NP_Year2_AdjointGraph(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Basic_PauliBasis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Basic_LieAlgebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_AdjMatrix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Analysis_Complex_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
