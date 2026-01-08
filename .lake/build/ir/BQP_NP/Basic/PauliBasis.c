// Lean compiler output
// Module: BQP_NP.Basic.PauliBasis
// Imports: public import Init public import BQP_NP.Basic.PauliOperators public import Mathlib.Data.Fintype.Prod public import Mathlib.Data.Fintype.Pi public import Mathlib.LinearAlgebra.LinearIndependent.Defs public import Mathlib.LinearAlgebra.Matrix.Trace
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
LEAN_EXPORT lean_object* lp_bqp__np_instFintypePauliString___lam__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lp_bqp__np_Pauli_mul(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_bqp__np_instFintypePauliString___lam__0___boxed(lean_object*, lean_object*);
uint8_t lp_bqp__np_instDecidableEqPauli(uint8_t, uint8_t);
lean_object* lp_mathlib_Pi_instFintype___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqFin___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_instFintypePauliString(lean_object*);
lean_object* l_List_finRange(lean_object*);
uint8_t l_Nat_decidableExistsFin___redArg(lean_object*, lean_object*);
extern lean_object* lp_bqp__np_instFintypePauli;
LEAN_EXPORT uint8_t lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_instFintypePauliString___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_instFintypePauliString___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_bqp__np_instFintypePauliString___lam__0(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_instFintypePauliString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lp_bqp__np_instFintypePauli;
x_3 = lean_alloc_closure((void*)(lp_bqp__np_instFintypePauliString___lam__0___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_instDecidableEqFin___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_List_finRange(x_1);
x_6 = lp_mathlib_Pi_instFintype___redArg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_unbox(x_4);
x_7 = lean_unbox(x_5);
x_8 = lp_bqp__np_Pauli_mul(x_6, x_7);
x_9 = lean_unbox(x_5);
x_10 = lean_unbox(x_4);
x_11 = lp_bqp__np_Pauli_mul(x_9, x_10);
x_12 = lp_bqp__np_instDecidableEqPauli(x_8, x_11);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul___lam__0(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_alloc_closure((void*)(lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul___lam__0___boxed), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = l_Nat_decidableExistsFin___redArg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_bqp__np_instDecidableRelPauliStringExistsFinNePauliMul(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Basic_PauliOperators(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Fintype_Prod(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Fintype_Pi(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_LinearIndependent_Defs(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Trace(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_bqp__np_BQP__NP_Basic_PauliBasis(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Basic_PauliOperators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Fintype_Prod(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Fintype_Pi(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_LinearAlgebra_LinearIndependent_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
