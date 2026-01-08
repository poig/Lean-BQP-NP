// Lean compiler output
// Module: BQP_NP.MainTheorem.BQP_ne_NP
// Imports: public import Init public import BQP_NP.Year1.SpectralGap public import BQP_NP.Year1.CurvatureExplosion public import BQP_NP.Year2.Localization public import BQP_NP.Year2.SpectralBridge public import BQP_NP.Year3.Reduction public import BQP_NP.Year4.ComplexityGeometry public import BQP_NP.Lemmas.CommutatorAvalanche
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
lean_object* initialize_bqp__np_BQP__NP_Year1_SpectralGap(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Year1_CurvatureExplosion(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Year2_Localization(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Year2_SpectralBridge(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Year3_Reduction(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Year4_ComplexityGeometry(uint8_t builtin);
lean_object* initialize_bqp__np_BQP__NP_Lemmas_CommutatorAvalanche(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_bqp__np_BQP__NP_MainTheorem_BQP__ne__NP(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Year1_SpectralGap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Year1_CurvatureExplosion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Year2_Localization(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Year2_SpectralBridge(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Year3_Reduction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Year4_ComplexityGeometry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_bqp__np_BQP__NP_Lemmas_CommutatorAvalanche(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
