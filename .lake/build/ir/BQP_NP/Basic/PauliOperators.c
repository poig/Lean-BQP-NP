// Lean compiler output
// Module: BQP_NP.Basic.PauliOperators
// Imports: public import Init public import Mathlib.Data.Complex.Basic public import Mathlib.LinearAlgebra.Matrix.Trace public import Mathlib.Data.Finset.Card public import Mathlib.LinearAlgebra.Matrix.Kronecker public import Mathlib.Logic.Equiv.Fin.Basic public import Mathlib.Data.Fintype.Basic public import Mathlib.Data.Fintype.List
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
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_I_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexZeroUnique;
LEAN_EXPORT uint8_t lp_bqp__np_Pauli_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* lp_bqp__np_Pauli_toMatrix___closed__2;
LEAN_EXPORT lean_object* lp_bqp__np_PauliString_weight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Z_elim___redArg(lean_object*);
static lean_object* lp_bqp__np_instReprPauli___closed__0;
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Y_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_cases___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* lp_bqp__np_instReprPauli_repr___closed__3;
LEAN_EXPORT lean_object* lp_bqp__np_instDecidableEqPauli___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_PauliString_weight___lam__0___boxed(lean_object*, lean_object*);
static lean_object* lp_bqp__np_instReprPauli_repr___closed__2;
LEAN_EXPORT uint8_t lp_bqp__np_kronIndexDecEq(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_filter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_mul___boxed(lean_object*, lean_object*);
static lean_object* lp_bqp__np_instReprPauli_repr___closed__7;
static lean_object* lp_bqp__np_instFintypePauli___closed__1;
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_kronIndexDecEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* lp_bqp__np_kronIndexFintype___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_bqp__np_instReprPauli;
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexFintype___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* lp_bqp__np_instReprPauli_repr___closed__5;
static lean_object* lp_bqp__np_instFintypePauli___closed__3;
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexFintype___lam__0___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Z_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexDecEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexFintype(lean_object*);
static lean_object* lp_bqp__np_instReprPauli_repr___closed__9;
lean_object* l_Nat_recCompiled___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* lp_bqp__np_instReprPauli_repr___closed__8;
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Y_elim___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* lp_bqp__np_kronIndexDecEq___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Y_elim(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lp_mathlib_Complex_ofReal(lean_object*);
extern lean_object* lp_mathlib_Real_definition_00___x40_Mathlib_Data_Real_Basic_1279875089____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Z_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__1(lean_object*, lean_object*);
static lean_object* lp_bqp__np_instReprPauli_repr___closed__4;
static lean_object* lp_bqp__np_instFintypePauli___closed__0;
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorElim___redArg___boxed(lean_object*);
lean_object* lp_mathlib_List_dedup___redArg(lean_object*, lean_object*);
extern lean_object* lp_mathlib_Real_definition_00___x40_Mathlib_Data_Real_Basic_1850581184____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_instReprPauli_repr___boxed(lean_object*, lean_object*);
static lean_object* lp_bqp__np_instReprPauli_repr___closed__6;
LEAN_EXPORT uint8_t lp_bqp__np_PauliString_weight___lam__0(lean_object*, lean_object*);
static lean_object* lp_bqp__np_instReprPauli_repr___closed__1;
LEAN_EXPORT uint8_t lp_bqp__np_Pauli_mul(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_X_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_I_elim___redArg___boxed(lean_object*);
extern lean_object* lp_mathlib_PUnit_fintype;
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexFintype___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_product___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_instDecidableEqPauli(uint8_t, uint8_t);
static lean_object* lp_bqp__np_instFintypePauli___closed__2;
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ofNat___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix(uint8_t, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_X_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_I_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_X_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorIdx___boxed(lean_object*);
static lean_object* lp_bqp__np_Pauli_toMatrix___closed__1;
lean_object* l_instDecidableEqFin___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Z_elim___redArg___boxed(lean_object*);
static lean_object* lp_bqp__np_Pauli_toMatrix___closed__0;
lean_object* l_List_finRange(lean_object*);
lean_object* lp_mathlib_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexDecEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__2(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqPUnit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_X_elim(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Y_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_I_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_instReprPauli_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_instFintypePauli;
static lean_object* lp_bqp__np_instReprPauli_repr___closed__0;
static lean_object* lp_bqp__np_instFintypePauli___closed__4;
extern lean_object* lp_mathlib_Complex_I;
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorIdx(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(1u);
return x_3;
}
case 2:
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(2u);
return x_4;
}
default: 
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(3u);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorIdx___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
x_3 = lp_bqp__np_Pauli_ctorIdx(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toCtorIdx(uint8_t x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_bqp__np_Pauli_ctorIdx(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toCtorIdx___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
x_3 = lp_bqp__np_Pauli_toCtorIdx(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorElim(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_inc(x_5);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorElim___redArg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorElim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
x_7 = lp_bqp__np_Pauli_ctorElim(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ctorElim___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_bqp__np_Pauli_ctorElim___redArg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_I_elim(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_I_elim___redArg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_I_elim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = lp_bqp__np_Pauli_I_elim(x_1, x_5, x_3, x_4);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_I_elim___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_bqp__np_Pauli_I_elim___redArg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_X_elim(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_X_elim___redArg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_X_elim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = lp_bqp__np_Pauli_X_elim(x_1, x_5, x_3, x_4);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_X_elim___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_bqp__np_Pauli_X_elim___redArg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Y_elim(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Y_elim___redArg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Y_elim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = lp_bqp__np_Pauli_Y_elim(x_1, x_5, x_3, x_4);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Y_elim___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_bqp__np_Pauli_Y_elim___redArg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Z_elim(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Z_elim___redArg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Z_elim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = lp_bqp__np_Pauli_Z_elim(x_1, x_5, x_3, x_4);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_Z_elim___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_bqp__np_Pauli_Z_elim___redArg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_Pauli_ofNat(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_dec_le(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_dec_le(x_1, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 3;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 2;
return x_7;
}
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_le(x_1, x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_ofNat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lp_bqp__np_Pauli_ofNat(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_instDecidableEqPauli(uint8_t x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lp_bqp__np_Pauli_ctorIdx(x_1);
x_4 = lp_bqp__np_Pauli_ctorIdx(x_2);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_instDecidableEqPauli___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = lp_bqp__np_instDecidableEqPauli(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli_repr___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Pauli.I", 7, 7);
return x_1;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli_repr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lp_bqp__np_instReprPauli_repr___closed__0;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli_repr___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Pauli.X", 7, 7);
return x_1;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli_repr___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lp_bqp__np_instReprPauli_repr___closed__2;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli_repr___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Pauli.Y", 7, 7);
return x_1;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli_repr___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lp_bqp__np_instReprPauli_repr___closed__4;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli_repr___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Pauli.Z", 7, 7);
return x_1;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli_repr___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lp_bqp__np_instReprPauli_repr___closed__6;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli_repr___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli_repr___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_instReprPauli_repr(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_10; lean_object* x_17; lean_object* x_24; 
switch (x_1) {
case 0:
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_unsigned_to_nat(1024u);
x_32 = lean_nat_dec_le(x_31, x_2);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lp_bqp__np_instReprPauli_repr___closed__8;
x_3 = x_33;
goto block_9;
}
else
{
lean_object* x_34; 
x_34 = lp_bqp__np_instReprPauli_repr___closed__9;
x_3 = x_34;
goto block_9;
}
}
case 1:
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_unsigned_to_nat(1024u);
x_36 = lean_nat_dec_le(x_35, x_2);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = lp_bqp__np_instReprPauli_repr___closed__8;
x_10 = x_37;
goto block_16;
}
else
{
lean_object* x_38; 
x_38 = lp_bqp__np_instReprPauli_repr___closed__9;
x_10 = x_38;
goto block_16;
}
}
case 2:
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_unsigned_to_nat(1024u);
x_40 = lean_nat_dec_le(x_39, x_2);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lp_bqp__np_instReprPauli_repr___closed__8;
x_17 = x_41;
goto block_23;
}
else
{
lean_object* x_42; 
x_42 = lp_bqp__np_instReprPauli_repr___closed__9;
x_17 = x_42;
goto block_23;
}
}
default: 
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_unsigned_to_nat(1024u);
x_44 = lean_nat_dec_le(x_43, x_2);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lp_bqp__np_instReprPauli_repr___closed__8;
x_24 = x_45;
goto block_30;
}
else
{
lean_object* x_46; 
x_46 = lp_bqp__np_instReprPauli_repr___closed__9;
x_24 = x_46;
goto block_30;
}
}
}
block_9:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lp_bqp__np_instReprPauli_repr___closed__1;
x_5 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = 0;
x_7 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*1, x_6);
x_8 = l_Repr_addAppParen(x_7, x_2);
return x_8;
}
block_16:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lp_bqp__np_instReprPauli_repr___closed__3;
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = 0;
x_14 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_13);
x_15 = l_Repr_addAppParen(x_14, x_2);
return x_15;
}
block_23:
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lp_bqp__np_instReprPauli_repr___closed__5;
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = 0;
x_21 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*1, x_20);
x_22 = l_Repr_addAppParen(x_21, x_2);
return x_22;
}
block_30:
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lp_bqp__np_instReprPauli_repr___closed__7;
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = 0;
x_28 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set_uint8(x_28, sizeof(void*)*1, x_27);
x_29 = l_Repr_addAppParen(x_28, x_2);
return x_29;
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_instReprPauli_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
x_4 = lp_bqp__np_instReprPauli_repr(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(lp_bqp__np_instReprPauli_repr___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_lp_bqp__np_instReprPauli() {
_start:
{
lean_object* x_1; 
x_1 = lp_bqp__np_instReprPauli___closed__0;
return x_1;
}
}
static lean_object* _init_lp_bqp__np_instFintypePauli___closed__0() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 3;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
static lean_object* _init_lp_bqp__np_instFintypePauli___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lp_bqp__np_instFintypePauli___closed__0;
x_2 = 2;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
static lean_object* _init_lp_bqp__np_instFintypePauli___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lp_bqp__np_instFintypePauli___closed__1;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
static lean_object* _init_lp_bqp__np_instFintypePauli___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lp_bqp__np_instFintypePauli___closed__2;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
static lean_object* _init_lp_bqp__np_instFintypePauli___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lp_bqp__np_instFintypePauli___closed__3;
x_2 = lean_alloc_closure((void*)(lp_bqp__np_instDecidableEqPauli___boxed), 2, 0);
x_3 = lp_mathlib_List_dedup___redArg(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_bqp__np_instFintypePauli() {
_start:
{
lean_object* x_1; 
x_1 = lp_bqp__np_instFintypePauli___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__0(lean_object* x_1) {
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Fin_cases___redArg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Fin_cases___redArg(x_1, x_2, x_3);
x_6 = lean_apply_1(x_5, x_4);
return x_6;
}
}
static lean_object* _init_lp_bqp__np_Pauli_toMatrix___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lp_mathlib_Equiv_refl(lean_box(0));
return x_1;
}
}
static lean_object* _init_lp_bqp__np_Pauli_toMatrix___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lp_mathlib_Real_definition_00___x40_Mathlib_Data_Real_Basic_1279875089____hygCtx___hyg_8_;
x_2 = lp_mathlib_Complex_ofReal(x_1);
return x_2;
}
}
static lean_object* _init_lp_bqp__np_Pauli_toMatrix___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lp_mathlib_Real_definition_00___x40_Mathlib_Data_Real_Basic_1850581184____hygCtx___hyg_8_;
x_2 = lp_mathlib_Complex_ofReal(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__0___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_bqp__np_Pauli_toMatrix___lam__0(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_bqp__np_Pauli_toMatrix___lam__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_bqp__np_Pauli_toMatrix___lam__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec_ref(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___lam__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_bqp__np_Pauli_toMatrix___lam__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_4 = lp_bqp__np_Pauli_toMatrix___closed__0;
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__0___boxed), 1, 0);
x_7 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__1___boxed), 2, 0);
x_8 = lp_bqp__np_Pauli_toMatrix___closed__1;
lean_inc_ref(x_6);
x_9 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_6);
x_10 = lp_bqp__np_Pauli_toMatrix___closed__2;
x_11 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_7);
x_13 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_13, 0, x_10);
lean_closure_set(x_13, 1, x_6);
x_14 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_14, 0, x_8);
lean_closure_set(x_14, 1, x_13);
x_15 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_15, 0, x_14);
lean_closure_set(x_15, 1, x_12);
x_16 = lean_apply_3(x_5, x_15, x_2, x_3);
return x_16;
}
case 1:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_17 = lp_bqp__np_Pauli_toMatrix___closed__0;
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__1___boxed), 2, 0);
x_20 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__0___boxed), 1, 0);
x_21 = lp_bqp__np_Pauli_toMatrix___closed__2;
lean_inc_ref(x_20);
x_22 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_22, 0, x_21);
lean_closure_set(x_22, 1, x_20);
x_23 = lp_bqp__np_Pauli_toMatrix___closed__1;
x_24 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_24, 0, x_23);
lean_closure_set(x_24, 1, x_22);
x_25 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_25, 0, x_24);
lean_closure_set(x_25, 1, x_19);
x_26 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_26, 0, x_23);
lean_closure_set(x_26, 1, x_20);
x_27 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_27, 0, x_21);
lean_closure_set(x_27, 1, x_26);
x_28 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_28, 0, x_27);
lean_closure_set(x_28, 1, x_25);
x_29 = lean_apply_3(x_18, x_28, x_2, x_3);
return x_29;
}
case 2:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lp_mathlib_Complex_I;
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
x_33 = lp_bqp__np_Pauli_toMatrix___closed__0;
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
lean_dec(x_36);
x_37 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__0___boxed), 1, 0);
x_38 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__1___boxed), 2, 0);
x_39 = lp_bqp__np_Pauli_toMatrix___closed__2;
lean_inc_ref(x_37);
x_40 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_40, 0, x_39);
lean_closure_set(x_40, 1, x_37);
x_41 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_41, 0, x_30);
lean_closure_set(x_41, 1, x_40);
x_42 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_42, 0, x_41);
lean_closure_set(x_42, 1, x_38);
x_43 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_), 2, 1);
lean_closure_set(x_43, 0, x_31);
x_44 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_), 2, 1);
lean_closure_set(x_44, 0, x_32);
lean_ctor_set(x_33, 1, x_44);
lean_ctor_set(x_33, 0, x_43);
x_45 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_45, 0, x_33);
lean_closure_set(x_45, 1, x_37);
x_46 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_46, 0, x_39);
lean_closure_set(x_46, 1, x_45);
x_47 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_47, 0, x_46);
lean_closure_set(x_47, 1, x_42);
x_48 = lean_apply_3(x_35, x_47, x_2, x_3);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_49 = lean_ctor_get(x_33, 0);
lean_inc(x_49);
lean_dec(x_33);
x_50 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__0___boxed), 1, 0);
x_51 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__1___boxed), 2, 0);
x_52 = lp_bqp__np_Pauli_toMatrix___closed__2;
lean_inc_ref(x_50);
x_53 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_53, 0, x_52);
lean_closure_set(x_53, 1, x_50);
x_54 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_54, 0, x_30);
lean_closure_set(x_54, 1, x_53);
x_55 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_55, 0, x_54);
lean_closure_set(x_55, 1, x_51);
x_56 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_), 2, 1);
lean_closure_set(x_56, 0, x_31);
x_57 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_), 2, 1);
lean_closure_set(x_57, 0, x_32);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_59, 0, x_58);
lean_closure_set(x_59, 1, x_50);
x_60 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_60, 0, x_52);
lean_closure_set(x_60, 1, x_59);
x_61 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_61, 0, x_60);
lean_closure_set(x_61, 1, x_55);
x_62 = lean_apply_3(x_49, x_61, x_2, x_3);
return x_62;
}
}
default: 
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_63 = lp_bqp__np_Pauli_toMatrix___closed__1;
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
x_66 = lp_bqp__np_Pauli_toMatrix___closed__0;
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_68 = lean_ctor_get(x_66, 0);
x_69 = lean_ctor_get(x_66, 1);
lean_dec(x_69);
x_70 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__0___boxed), 1, 0);
x_71 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__1___boxed), 2, 0);
x_72 = lp_bqp__np_Pauli_toMatrix___closed__2;
lean_inc_ref(x_70);
x_73 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_73, 0, x_72);
lean_closure_set(x_73, 1, x_70);
x_74 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_74, 0, x_63);
lean_closure_set(x_74, 1, x_73);
x_75 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_), 2, 1);
lean_closure_set(x_75, 0, x_64);
x_76 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_), 2, 1);
lean_closure_set(x_76, 0, x_65);
lean_ctor_set(x_66, 1, x_76);
lean_ctor_set(x_66, 0, x_75);
x_77 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_77, 0, x_66);
lean_closure_set(x_77, 1, x_70);
x_78 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_78, 0, x_72);
lean_closure_set(x_78, 1, x_77);
x_79 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_79, 0, x_78);
lean_closure_set(x_79, 1, x_71);
x_80 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_80, 0, x_74);
lean_closure_set(x_80, 1, x_79);
x_81 = lean_apply_3(x_68, x_80, x_2, x_3);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_82 = lean_ctor_get(x_66, 0);
lean_inc(x_82);
lean_dec(x_66);
x_83 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__0___boxed), 1, 0);
x_84 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__1___boxed), 2, 0);
x_85 = lp_bqp__np_Pauli_toMatrix___closed__2;
lean_inc_ref(x_83);
x_86 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_86, 0, x_85);
lean_closure_set(x_86, 1, x_83);
x_87 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_87, 0, x_63);
lean_closure_set(x_87, 1, x_86);
x_88 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_), 2, 1);
lean_closure_set(x_88, 0, x_64);
x_89 = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_), 2, 1);
lean_closure_set(x_89, 0, x_65);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_91, 0, x_90);
lean_closure_set(x_91, 1, x_83);
x_92 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__2___boxed), 3, 2);
lean_closure_set(x_92, 0, x_85);
lean_closure_set(x_92, 1, x_91);
x_93 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_93, 0, x_92);
lean_closure_set(x_93, 1, x_84);
x_94 = lean_alloc_closure((void*)(lp_bqp__np_Pauli_toMatrix___lam__4___boxed), 4, 2);
lean_closure_set(x_94, 0, x_87);
lean_closure_set(x_94, 1, x_93);
x_95 = lean_apply_3(x_82, x_94, x_2, x_3);
return x_95;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_toMatrix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
x_5 = lp_bqp__np_Pauli_toMatrix(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_5, x_12);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter___redArg(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_2);
x_8 = lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter(x_1, x_7, x_3, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
x_7 = lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__instReprPauli_repr_match__1_splitter___redArg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
static lean_object* _init_lp_bqp__np_kronIndexDecEq___lam__0___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_alloc_closure((void*)(l_instDecidableEqFin___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_kronIndexDecEq___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lp_bqp__np_kronIndexDecEq___lam__0___closed__0;
x_6 = l_instDecidableEqProd___redArg(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexDecEq___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lp_bqp__np_kronIndexDecEq___lam__0(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_kronIndexDecEq(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_alloc_closure((void*)(lp_bqp__np_kronIndexDecEq___lam__0___boxed), 4, 0);
x_5 = lean_alloc_closure((void*)(l_instDecidableEqPUnit___boxed), 2, 0);
x_6 = l_Nat_recCompiled___redArg(x_5, x_4, x_1);
lean_dec_ref(x_5);
x_7 = lean_apply_2(x_6, x_2, x_3);
x_8 = lean_unbox(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexDecEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_bqp__np_kronIndexDecEq(x_1, x_2, x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_lp_bqp__np_kronIndexFintype___lam__0___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_List_finRange(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexFintype___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lp_bqp__np_kronIndexFintype___lam__0___closed__0;
x_4 = lp_mathlib_Multiset_product___redArg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexFintype___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_bqp__np_kronIndexFintype___lam__0(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexFintype(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(lp_bqp__np_kronIndexFintype___lam__0___boxed), 2, 0);
x_3 = lp_mathlib_PUnit_fintype;
x_4 = l_Nat_recCompiled___redArg(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_kronIndexFintype___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_bqp__np_kronIndexFintype(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_lp_bqp__np_kronIndexZeroUnique() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 1)
{
lean_object* x_7; 
lean_dec(x_4);
x_7 = lean_apply_1(x_3, x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
x_10 = lean_apply_2(x_4, x_9, x_2);
return x_10;
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter___redArg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_bqp__np___private_BQP__NP_Basic_PauliOperators_0__PauliString_toMatrixProd_match__1_splitter___redArg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_PauliString_weight___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; uint8_t x_5; uint8_t x_6; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = 0;
x_5 = lean_unbox(x_3);
x_6 = lp_bqp__np_instDecidableEqPauli(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_PauliString_weight___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_bqp__np_PauliString_weight___lam__0(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_PauliString_weight(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(lp_bqp__np_PauliString_weight___lam__0___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_List_finRange(x_1);
x_5 = lp_mathlib_Multiset_filter___redArg(x_3, x_4);
x_6 = l_List_lengthTR___redArg(x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_Pauli_mul(uint8_t x_1, uint8_t x_2) {
_start:
{
switch (x_1) {
case 0:
{
return x_2;
}
case 1:
{
switch (x_2) {
case 0:
{
return x_1;
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
return x_1;
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
return x_1;
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
LEAN_EXPORT lean_object* lp_bqp__np_Pauli_mul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = lp_bqp__np_Pauli_mul(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Complex_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Trace(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Finset_Card(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Kronecker(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Logic_Equiv_Fin_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Fintype_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Fintype_List(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_bqp__np_BQP__NP_Basic_PauliOperators(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Complex_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Finset_Card(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Kronecker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Logic_Equiv_Fin_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Fintype_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Fintype_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_bqp__np_instReprPauli_repr___closed__0 = _init_lp_bqp__np_instReprPauli_repr___closed__0();
lean_mark_persistent(lp_bqp__np_instReprPauli_repr___closed__0);
lp_bqp__np_instReprPauli_repr___closed__1 = _init_lp_bqp__np_instReprPauli_repr___closed__1();
lean_mark_persistent(lp_bqp__np_instReprPauli_repr___closed__1);
lp_bqp__np_instReprPauli_repr___closed__2 = _init_lp_bqp__np_instReprPauli_repr___closed__2();
lean_mark_persistent(lp_bqp__np_instReprPauli_repr___closed__2);
lp_bqp__np_instReprPauli_repr___closed__3 = _init_lp_bqp__np_instReprPauli_repr___closed__3();
lean_mark_persistent(lp_bqp__np_instReprPauli_repr___closed__3);
lp_bqp__np_instReprPauli_repr___closed__4 = _init_lp_bqp__np_instReprPauli_repr___closed__4();
lean_mark_persistent(lp_bqp__np_instReprPauli_repr___closed__4);
lp_bqp__np_instReprPauli_repr___closed__5 = _init_lp_bqp__np_instReprPauli_repr___closed__5();
lean_mark_persistent(lp_bqp__np_instReprPauli_repr___closed__5);
lp_bqp__np_instReprPauli_repr___closed__6 = _init_lp_bqp__np_instReprPauli_repr___closed__6();
lean_mark_persistent(lp_bqp__np_instReprPauli_repr___closed__6);
lp_bqp__np_instReprPauli_repr___closed__7 = _init_lp_bqp__np_instReprPauli_repr___closed__7();
lean_mark_persistent(lp_bqp__np_instReprPauli_repr___closed__7);
lp_bqp__np_instReprPauli_repr___closed__8 = _init_lp_bqp__np_instReprPauli_repr___closed__8();
lean_mark_persistent(lp_bqp__np_instReprPauli_repr___closed__8);
lp_bqp__np_instReprPauli_repr___closed__9 = _init_lp_bqp__np_instReprPauli_repr___closed__9();
lean_mark_persistent(lp_bqp__np_instReprPauli_repr___closed__9);
lp_bqp__np_instReprPauli___closed__0 = _init_lp_bqp__np_instReprPauli___closed__0();
lean_mark_persistent(lp_bqp__np_instReprPauli___closed__0);
lp_bqp__np_instReprPauli = _init_lp_bqp__np_instReprPauli();
lean_mark_persistent(lp_bqp__np_instReprPauli);
lp_bqp__np_instFintypePauli___closed__0 = _init_lp_bqp__np_instFintypePauli___closed__0();
lean_mark_persistent(lp_bqp__np_instFintypePauli___closed__0);
lp_bqp__np_instFintypePauli___closed__1 = _init_lp_bqp__np_instFintypePauli___closed__1();
lean_mark_persistent(lp_bqp__np_instFintypePauli___closed__1);
lp_bqp__np_instFintypePauli___closed__2 = _init_lp_bqp__np_instFintypePauli___closed__2();
lean_mark_persistent(lp_bqp__np_instFintypePauli___closed__2);
lp_bqp__np_instFintypePauli___closed__3 = _init_lp_bqp__np_instFintypePauli___closed__3();
lean_mark_persistent(lp_bqp__np_instFintypePauli___closed__3);
lp_bqp__np_instFintypePauli___closed__4 = _init_lp_bqp__np_instFintypePauli___closed__4();
lean_mark_persistent(lp_bqp__np_instFintypePauli___closed__4);
lp_bqp__np_instFintypePauli = _init_lp_bqp__np_instFintypePauli();
lean_mark_persistent(lp_bqp__np_instFintypePauli);
lp_bqp__np_Pauli_toMatrix___closed__0 = _init_lp_bqp__np_Pauli_toMatrix___closed__0();
lean_mark_persistent(lp_bqp__np_Pauli_toMatrix___closed__0);
lp_bqp__np_Pauli_toMatrix___closed__1 = _init_lp_bqp__np_Pauli_toMatrix___closed__1();
lean_mark_persistent(lp_bqp__np_Pauli_toMatrix___closed__1);
lp_bqp__np_Pauli_toMatrix___closed__2 = _init_lp_bqp__np_Pauli_toMatrix___closed__2();
lean_mark_persistent(lp_bqp__np_Pauli_toMatrix___closed__2);
lp_bqp__np_kronIndexDecEq___lam__0___closed__0 = _init_lp_bqp__np_kronIndexDecEq___lam__0___closed__0();
lean_mark_persistent(lp_bqp__np_kronIndexDecEq___lam__0___closed__0);
lp_bqp__np_kronIndexFintype___lam__0___closed__0 = _init_lp_bqp__np_kronIndexFintype___lam__0___closed__0();
lean_mark_persistent(lp_bqp__np_kronIndexFintype___lam__0___closed__0);
lp_bqp__np_kronIndexZeroUnique = _init_lp_bqp__np_kronIndexZeroUnique();
lean_mark_persistent(lp_bqp__np_kronIndexZeroUnique);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
