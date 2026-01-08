// Lean compiler output
// Module: BQP_NP.Complexity.CompileCorrect
// Imports: public import Init public import BQP_NP.Complexity.SafeExpr public import BQP_NP.Complexity.SafeToCircuit public import BQP_NP.Complexity.BooleanCircuit
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
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeExpr_eval_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_bqp__np_CompileCorrect_gateValue(lean_object*, lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_gateValues(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeToCircuit_compile_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeToCircuit_compile_match__11_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_gateValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_decodeBuses___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_List_foldl___at___00CompileCorrect_gateValues_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_List_mapTR_loop___at___00CompileCorrect_evalBus_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeToCircuit_compile_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeToCircuit_compile_match__11_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeExpr_eval_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_decodeBuses___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_evalBus(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_decodeBuses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_bqp__np_List_foldl___at___00CompileCorrect_gateValues_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec_ref(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_14; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_6 = x_3;
} else {
 lean_dec_ref(x_3);
 x_6 = lean_box(0);
}
x_14 = lean_ctor_get(x_4, 0);
switch (lean_obj_tag(x_14)) {
case 0:
{
uint8_t x_15; 
lean_inc_ref(x_14);
lean_dec(x_4);
x_15 = lean_ctor_get_uint8(x_14, 0);
lean_dec_ref(x_14);
x_7 = x_15;
goto block_13;
}
case 1:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_inc_ref(x_14);
lean_dec(x_4);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec_ref(x_14);
lean_inc_ref(x_1);
x_17 = lean_apply_1(x_1, x_16);
x_18 = lean_unbox(x_17);
x_7 = x_18;
goto block_13;
}
case 2:
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_dec(x_4);
if (lean_obj_tag(x_19) == 1)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 1);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec_ref(x_19);
x_22 = l_List_get_x3fInternal___redArg(x_2, x_21);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = 1;
x_7 = x_23;
goto block_13;
}
else
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec_ref(x_22);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = 1;
x_7 = x_26;
goto block_13;
}
else
{
uint8_t x_27; 
x_27 = 0;
x_7 = x_27;
goto block_13;
}
}
}
else
{
uint8_t x_28; 
lean_dec_ref(x_19);
x_28 = 0;
x_7 = x_28;
goto block_13;
}
}
else
{
uint8_t x_29; 
lean_dec(x_19);
x_29 = 0;
x_7 = x_29;
goto block_13;
}
}
case 3:
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_4, 1);
lean_inc(x_30);
lean_dec(x_4);
if (lean_obj_tag(x_30) == 1)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 1)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 1);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_30, 0);
lean_inc(x_33);
lean_dec_ref(x_30);
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
lean_dec_ref(x_31);
x_35 = l_List_get_x3fInternal___redArg(x_2, x_33);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; 
lean_dec(x_34);
x_36 = 0;
x_7 = x_36;
goto block_13;
}
else
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec_ref(x_35);
x_38 = lean_unbox(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_34);
x_39 = lean_unbox(x_37);
lean_dec(x_37);
x_7 = x_39;
goto block_13;
}
else
{
lean_object* x_40; 
lean_dec(x_37);
x_40 = l_List_get_x3fInternal___redArg(x_2, x_34);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = 0;
x_7 = x_41;
goto block_13;
}
else
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_40, 0);
lean_inc(x_42);
lean_dec_ref(x_40);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
x_7 = x_43;
goto block_13;
}
}
}
}
else
{
uint8_t x_44; 
lean_dec_ref(x_31);
lean_dec_ref(x_30);
x_44 = 0;
x_7 = x_44;
goto block_13;
}
}
else
{
uint8_t x_45; 
lean_dec(x_31);
lean_dec_ref(x_30);
x_45 = 0;
x_7 = x_45;
goto block_13;
}
}
else
{
uint8_t x_46; 
lean_dec(x_30);
x_46 = 0;
x_7 = x_46;
goto block_13;
}
}
default: 
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_4, 1);
lean_inc(x_47);
lean_dec(x_4);
if (lean_obj_tag(x_47) == 1)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 1)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
lean_dec_ref(x_47);
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec_ref(x_48);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_57; 
x_57 = l_List_get_x3fInternal___redArg(x_2, x_49);
if (lean_obj_tag(x_57) == 0)
{
goto block_56;
}
else
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
lean_dec_ref(x_57);
x_59 = lean_unbox(x_58);
if (x_59 == 0)
{
lean_dec(x_58);
goto block_56;
}
else
{
uint8_t x_60; 
lean_dec(x_50);
x_60 = lean_unbox(x_58);
lean_dec(x_58);
x_7 = x_60;
goto block_13;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
x_61 = 0;
x_7 = x_61;
goto block_13;
}
block_56:
{
lean_object* x_52; 
x_52 = l_List_get_x3fInternal___redArg(x_2, x_50);
if (lean_obj_tag(x_52) == 0)
{
uint8_t x_53; 
x_53 = 0;
x_7 = x_53;
goto block_13;
}
else
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
lean_dec_ref(x_52);
x_55 = lean_unbox(x_54);
lean_dec(x_54);
x_7 = x_55;
goto block_13;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_48);
lean_dec_ref(x_47);
x_62 = 0;
x_7 = x_62;
goto block_13;
}
}
else
{
uint8_t x_63; 
lean_dec(x_47);
x_63 = 0;
x_7 = x_63;
goto block_13;
}
}
}
block_13:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_box(0);
x_9 = lean_box(x_7);
if (lean_is_scalar(x_6)) {
 x_10 = lean_alloc_ctor(1, 2, 0);
} else {
 x_10 = x_6;
}
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = l_List_appendTR___redArg(x_2, x_10);
x_2 = x_11;
x_3 = x_5;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_gateValues(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lp_bqp__np_List_foldl___at___00CompileCorrect_gateValues_spec__0(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_bqp__np_CompileCorrect_gateValue(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lp_bqp__np_CompileCorrect_gateValues(x_1, x_2);
x_5 = l_List_get_x3fInternal___redArg(x_4, x_3);
lean_dec(x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec_ref(x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_gateValue___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_bqp__np_CompileCorrect_gateValue(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_List_mapTR_loop___at___00CompileCorrect_evalBus_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec_ref(x_2);
lean_dec(x_1);
x_5 = l_List_reverse___redArg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_2);
lean_inc(x_1);
x_9 = lp_bqp__np_CompileCorrect_gateValue(x_1, x_2, x_7);
x_10 = lean_box(x_9);
lean_ctor_set(x_3, 1, x_4);
lean_ctor_set(x_3, 0, x_10);
{
lean_object* _tmp_2 = x_8;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc_ref(x_2);
lean_inc(x_1);
x_14 = lp_bqp__np_CompileCorrect_gateValue(x_1, x_2, x_12);
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
x_3 = x_13;
x_4 = x_16;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_evalBus(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lp_bqp__np_List_mapTR_loop___at___00CompileCorrect_evalBus_spec__0(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_decodeBuses___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_3, x_4);
x_6 = lp_bqp__np_CompileCorrect_evalBus(x_1, x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_decodeBuses(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_bqp__np_CompileCorrect_decodeBuses___redArg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np_CompileCorrect_decodeBuses___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_bqp__np_CompileCorrect_decodeBuses(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeToCircuit_compile_match__11_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_14; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_apply_2(x_6, x_4, x_5);
return x_14;
}
case 1:
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_ctor_get_uint8(x_3, 0);
lean_dec_ref(x_3);
x_16 = lean_box(x_15);
x_17 = lean_apply_3(x_7, x_16, x_4, x_5);
return x_17;
}
case 2:
{
lean_object* x_18; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_apply_2(x_8, x_4, x_5);
return x_18;
}
case 3:
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_19 = lean_ctor_get(x_3, 2);
lean_inc(x_19);
lean_dec_ref(x_3);
x_20 = lean_apply_5(x_9, x_1, x_2, x_19, x_4, x_5);
return x_20;
}
case 4:
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_21 = lean_ctor_get(x_3, 2);
lean_inc(x_21);
lean_dec_ref(x_3);
x_22 = lean_apply_5(x_10, x_1, x_2, x_21, x_4, x_5);
return x_22;
}
case 5:
{
uint8_t x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_ctor_get_uint8(x_3, 0);
lean_dec_ref(x_3);
x_24 = lean_box(x_23);
x_25 = lean_apply_3(x_11, x_24, x_4, x_5);
return x_25;
}
case 6:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_26 = lean_ctor_get(x_3, 2);
lean_inc(x_26);
x_27 = lean_ctor_get(x_3, 3);
lean_inc(x_27);
x_28 = lean_ctor_get(x_3, 4);
lean_inc_ref(x_28);
x_29 = lean_ctor_get(x_3, 5);
lean_inc_ref(x_29);
x_30 = lean_ctor_get(x_3, 6);
lean_inc(x_30);
lean_dec_ref(x_3);
x_31 = lean_apply_9(x_12, x_1, x_2, x_26, x_27, x_28, x_29, x_30, x_4, x_5);
return x_31;
}
default: 
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_32 = lean_ctor_get(x_3, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_3, 2);
lean_inc(x_33);
x_34 = lean_ctor_get(x_3, 3);
lean_inc_ref(x_34);
lean_dec_ref(x_3);
x_35 = lean_apply_6(x_13, x_1, x_32, x_33, x_34, x_4, x_5);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeToCircuit_compile_match__11_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeToCircuit_compile_match__11_splitter___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeExpr_eval_match__3_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_14; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_apply_2(x_6, x_4, x_5);
return x_14;
}
case 1:
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_ctor_get_uint8(x_3, 0);
lean_dec_ref(x_3);
x_16 = lean_box(x_15);
x_17 = lean_apply_3(x_7, x_16, x_4, x_5);
return x_17;
}
case 2:
{
lean_object* x_18; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_apply_2(x_8, x_4, x_5);
return x_18;
}
case 3:
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_19 = lean_ctor_get(x_3, 2);
lean_inc(x_19);
lean_dec_ref(x_3);
x_20 = lean_apply_5(x_9, x_1, x_2, x_19, x_4, x_5);
return x_20;
}
case 4:
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_21 = lean_ctor_get(x_3, 2);
lean_inc(x_21);
lean_dec_ref(x_3);
x_22 = lean_apply_5(x_10, x_1, x_2, x_21, x_4, x_5);
return x_22;
}
case 5:
{
uint8_t x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_ctor_get_uint8(x_3, 0);
lean_dec_ref(x_3);
x_24 = lean_box(x_23);
x_25 = lean_apply_3(x_11, x_24, x_4, x_5);
return x_25;
}
case 6:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_26 = lean_ctor_get(x_3, 2);
lean_inc(x_26);
x_27 = lean_ctor_get(x_3, 3);
lean_inc(x_27);
x_28 = lean_ctor_get(x_3, 4);
lean_inc_ref(x_28);
x_29 = lean_ctor_get(x_3, 5);
lean_inc_ref(x_29);
x_30 = lean_ctor_get(x_3, 6);
lean_inc(x_30);
lean_dec_ref(x_3);
x_31 = lean_apply_9(x_12, x_1, x_2, x_26, x_27, x_28, x_29, x_30, x_4, x_5);
return x_31;
}
default: 
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_32 = lean_ctor_get(x_3, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_3, 2);
lean_inc(x_33);
x_34 = lean_ctor_get(x_3, 3);
lean_inc_ref(x_34);
lean_dec_ref(x_3);
x_35 = lean_apply_6(x_13, x_1, x_32, x_33, x_34, x_4, x_5);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeExpr_eval_match__3_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeExpr_eval_match__3_splitter___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeToCircuit_compile_match__3_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec_ref(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeToCircuit_compile_match__3_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_bqp__np___private_BQP__NP_Complexity_CompileCorrect_0__SafeToCircuit_compile_match__3_splitter___redArg(x_2, x_3, x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Complexity_SafeExpr(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Complexity_SafeToCircuit(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Complexity_BooleanCircuit(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_bqp__np_BQP__NP_Complexity_CompileCorrect(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Complexity_SafeExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Complexity_SafeToCircuit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Complexity_BooleanCircuit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
