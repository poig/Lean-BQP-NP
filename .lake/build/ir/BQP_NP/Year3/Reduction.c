// Lean compiler output
// Module: BQP_NP.Year3.Reduction
// Imports: public import Init public import BQP_NP.Basic.LieAlgebra public import BQP_NP.Basic.PauliBasis public import Mathlib.Data.Finset.Basic
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
static lean_object* lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__1;
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__2;
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___boxed(lean_object*, lean_object*);
static lean_object* lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__0;
static lean_object* _init_lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_nat_mod(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_mod(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_mod(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; uint8_t x_17; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_4);
lean_dec_ref(x_1);
x_27 = lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__2;
lean_inc_ref(x_3);
x_28 = lean_apply_1(x_3, x_27);
lean_inc_ref(x_2);
x_29 = lean_apply_1(x_2, x_28);
lean_inc_ref(x_4);
x_30 = lean_apply_1(x_4, x_27);
x_31 = lean_unbox(x_29);
if (x_31 == 0)
{
uint8_t x_32; 
x_32 = lean_unbox(x_30);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = 1;
x_17 = x_33;
goto block_26;
}
else
{
uint8_t x_34; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_34 = lean_unbox(x_30);
return x_34;
}
}
else
{
uint8_t x_35; 
x_35 = lean_unbox(x_30);
if (x_35 == 0)
{
uint8_t x_36; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_36 = lean_unbox(x_29);
return x_36;
}
else
{
uint8_t x_37; 
x_37 = lean_unbox(x_30);
x_17 = x_37;
goto block_26;
}
}
block_16:
{
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_6 = 1;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__0;
x_8 = lean_apply_1(x_3, x_7);
x_9 = lean_apply_1(x_2, x_8);
x_10 = lean_apply_1(x_4, x_7);
x_11 = lean_unbox(x_9);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = lean_unbox(x_10);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_unbox(x_10);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_unbox(x_9);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
}
block_26:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__1;
lean_inc_ref(x_3);
x_19 = lean_apply_1(x_3, x_18);
lean_inc_ref(x_2);
x_20 = lean_apply_1(x_2, x_19);
lean_inc_ref(x_4);
x_21 = lean_apply_1(x_4, x_18);
x_22 = lean_unbox(x_20);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = lean_unbox(x_21);
if (x_23 == 0)
{
x_5 = x_17;
goto block_16;
}
else
{
uint8_t x_24; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_24 = lean_unbox(x_21);
return x_24;
}
}
else
{
uint8_t x_25; 
x_25 = lean_unbox(x_21);
x_5 = x_25;
goto block_16;
}
}
}
}
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied(x_1, x_2, x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Basic_LieAlgebra(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Basic_PauliBasis(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Finset_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_bqp__np_BQP__NP_Year3_Reduction(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Basic_LieAlgebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Basic_PauliBasis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Finset_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__0 = _init_lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__0();
lean_mark_persistent(lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__0);
lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__1 = _init_lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__1();
lean_mark_persistent(lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__1);
lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__2 = _init_lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__2();
lean_mark_persistent(lp_bqp__np_BQP__NP_Year3_Clause_isSatisfied___redArg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
