// Lean compiler output
// Module: BQP_NP.Year2.KillingEvaluation
// Imports: public import Init public import BQP_NP.Basic.PauliBasis public import BQP_NP.Basic.LieAlgebra public import Mathlib.LinearAlgebra.Matrix.Trace public import Mathlib.LinearAlgebra.Matrix.Kronecker public import Mathlib.Data.Complex.Basic public import Mathlib.Tactic
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
lean_object* l_List_lengthTR___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_trace__fin__two(lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Year2_commutes__single(uint8_t, uint8_t);
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Year2_antiCommutes__single(uint8_t, uint8_t);
static lean_object* lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__0;
lean_object* lp_mathlib_Multiset_filter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__1;
lean_object* lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_1138242547____hygCtx___hyg_8_(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_pmap___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_commutes__single___boxed(lean_object*, lean_object*);
uint8_t lp_bqp__np_instDecidableEqPauli(uint8_t, uint8_t);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_num__antiCommuting__slots(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__1(lean_object*, lean_object*);
lean_object* l_List_finRange(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_antiCommutes__single___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0(lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_mod(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_mod(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_trace__fin__two(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_2 = lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__0;
lean_inc_ref(x_1);
x_3 = lean_apply_2(x_1, x_2, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec_ref(x_3);
x_6 = lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__1;
x_7 = lean_apply_2(x_1, x_6, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_1138242547____hygCtx___hyg_8_), 3, 2);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_1138242547____hygCtx___hyg_8_), 3, 2);
lean_closure_set(x_12, 0, x_5);
lean_closure_set(x_12, 1, x_10);
lean_ctor_set(x_7, 1, x_12);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_1138242547____hygCtx___hyg_8_), 3, 2);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_13);
x_16 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_1138242547____hygCtx___hyg_8_), 3, 2);
lean_closure_set(x_16, 0, x_5);
lean_closure_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Year2_commutes__single(uint8_t x_1, uint8_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = lp_bqp__np_instDecidableEqPauli(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; uint8_t x_5; 
x_4 = 0;
x_5 = lp_bqp__np_instDecidableEqPauli(x_1, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lp_bqp__np_instDecidableEqPauli(x_2, x_4);
return x_6;
}
else
{
return x_5;
}
}
else
{
return x_3;
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_commutes__single___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = lp_bqp__np_BQP__NP_Year2_commutes__single(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Year2_antiCommutes__single(uint8_t x_1, uint8_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = lp_bqp__np_BQP__NP_Year2_commutes__single(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_antiCommutes__single___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = lp_bqp__np_BQP__NP_Year2_antiCommutes__single(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_unbox(x_4);
x_7 = lean_unbox(x_5);
x_8 = lp_bqp__np_BQP__NP_Year2_antiCommutes__single(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__0(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_alloc_closure((void*)(lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_closure((void*)(lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0___lam__1___boxed), 2, 0);
x_6 = l_List_finRange(x_3);
x_7 = lp_mathlib_Multiset_filter___redArg(x_4, x_6);
x_8 = lp_mathlib_Multiset_pmap___redArg(x_5, x_7);
x_9 = l_List_lengthTR___redArg(x_8);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year2_num__antiCommuting__slots(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_bqp__np_Fintype_card___at___00BQP__NP_Year2_num__antiCommuting__slots_spec__0(x_2, x_3, x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Basic_PauliBasis(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Basic_LieAlgebra(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Trace(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Kronecker(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Complex_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Tactic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_bqp__np_BQP__NP_Year2_KillingEvaluation(uint8_t builtin) {
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
res = initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Kronecker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Complex_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__0 = _init_lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__0();
lean_mark_persistent(lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__0);
lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__1 = _init_lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__1();
lean_mark_persistent(lp_bqp__np_BQP__NP_Year2_trace__fin__two___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
