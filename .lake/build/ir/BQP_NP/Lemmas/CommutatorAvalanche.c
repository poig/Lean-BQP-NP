// Lean compiler output
// Module: BQP_NP.Lemmas.CommutatorAvalanche
// Imports: public import Init public import BQP_NP.Basic.PauliOperators public import BQP_NP.Basic.LieAlgebra public import Mathlib.Data.Finset.Card
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
lean_object* lp_bqp__np_PauliString_weight(lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_filter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_commutatorWeight(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Lemmas_pauliCommute(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Lemmas_commutatorWeight___lam__0(lean_object*, lean_object*, lean_object*);
uint8_t lp_mathlib_Nat_instDecidablePredEven(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_commutatorWeight___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Lemmas_pauliCommutatorResult(uint8_t, uint8_t);
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute(lean_object*, lean_object*, lean_object*);
uint8_t lp_bqp__np_Pauli_mul(uint8_t, uint8_t);
uint8_t lp_bqp__np_instDecidableEqPauli(uint8_t, uint8_t);
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_pauliCommute___boxed(lean_object*, lean_object*);
lean_object* l_List_finRange(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_pauliCommutatorResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Lemmas_pauliCommutatorResult(uint8_t x_1, uint8_t x_2) {
_start:
{
switch (x_1) {
case 0:
{
return x_1;
}
case 1:
{
switch (x_2) {
case 0:
{
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
case 2:
{
uint8_t x_4; 
x_4 = 3;
return x_4;
}
default: 
{
uint8_t x_5; 
x_5 = 2;
return x_5;
}
}
}
case 2:
{
switch (x_2) {
case 0:
{
return x_2;
}
case 1:
{
uint8_t x_6; 
x_6 = 3;
return x_6;
}
case 2:
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
default: 
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
default: 
{
switch (x_2) {
case 0:
{
return x_2;
}
case 1:
{
uint8_t x_9; 
x_9 = 2;
return x_9;
}
case 2:
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
default: 
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_pauliCommutatorResult___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = lp_bqp__np_BQP__NP_Lemmas_pauliCommutatorResult(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Lemmas_pauliCommute(uint8_t x_1, uint8_t x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; 
x_3 = lp_bqp__np_instDecidableEqPauli(x_1, x_2);
x_4 = 0;
x_5 = lp_bqp__np_instDecidableEqPauli(x_1, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lp_bqp__np_instDecidableEqPauli(x_2, x_4);
if (x_6 == 0)
{
return x_3;
}
else
{
return x_6;
}
}
else
{
if (x_5 == 0)
{
return x_3;
}
else
{
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_pauliCommute___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = lp_bqp__np_BQP__NP_Lemmas_pauliCommute(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_unbox(x_4);
x_7 = lean_unbox(x_5);
x_8 = lp_bqp__np_BQP__NP_Lemmas_pauliCommute(x_6, x_7);
if (x_8 == 0)
{
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
return x_8;
}
}
else
{
if (x_8 == 0)
{
return x_8;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute___lam__0(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_alloc_closure((void*)(lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute___lam__0___boxed), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = l_List_finRange(x_1);
x_6 = lp_mathlib_Multiset_filter___redArg(x_4, x_5);
x_7 = l_List_lengthTR___redArg(x_6);
lean_dec(x_6);
x_8 = lp_mathlib_Nat_instDecidablePredEven(x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_BQP__NP_Lemmas_commutatorWeight___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; 
lean_inc(x_3);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_unbox(x_4);
x_7 = lean_unbox(x_5);
x_8 = lp_bqp__np_Pauli_mul(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_commutatorWeight___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_bqp__np_BQP__NP_Lemmas_commutatorWeight___lam__0(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_BQP__NP_Lemmas_commutatorWeight(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
lean_inc_ref(x_3);
lean_inc_ref(x_2);
lean_inc(x_1);
x_4 = lp_bqp__np_BQP__NP_Lemmas_pauliStringCommute(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(lp_bqp__np_BQP__NP_Lemmas_commutatorWeight___lam__0___boxed), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = lp_bqp__np_PauliString_weight(x_1, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
x_7 = lean_unsigned_to_nat(0u);
return x_7;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Basic_PauliOperators(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Basic_LieAlgebra(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Finset_Card(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_bqp__np_BQP__NP_Lemmas_CommutatorAvalanche(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Basic_PauliOperators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Basic_LieAlgebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Finset_Card(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
