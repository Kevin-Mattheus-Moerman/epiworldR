// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// db.cpp
data_frame get_hist_total_cpp(SEXP model, std::string model_class);
extern "C" SEXP _epiworldR_get_hist_total_cpp(SEXP model, SEXP model_class) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_hist_total_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model), cpp11::as_cpp<cpp11::decay_t<std::string>>(model_class)));
  END_CPP11
}
// db.cpp
doubles get_transition_probability_cpp(SEXP model, std::string model_class);
extern "C" SEXP _epiworldR_get_transition_probability_cpp(SEXP model, SEXP model_class) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_transition_probability_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model), cpp11::as_cpp<cpp11::decay_t<std::string>>(model_class)));
  END_CPP11
}
// db.cpp
cpp11::strings get_status_cpp(SEXP model, std::string model_class);
extern "C" SEXP _epiworldR_get_status_cpp(SEXP model, SEXP model_class) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_status_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model), cpp11::as_cpp<cpp11::decay_t<std::string>>(model_class)));
  END_CPP11
}
// db.cpp
cpp11::data_frame get_reproductive_number_cpp(SEXP model, std::string model_class);
extern "C" SEXP _epiworldR_get_reproductive_number_cpp(SEXP model, SEXP model_class) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_reproductive_number_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model), cpp11::as_cpp<cpp11::decay_t<std::string>>(model_class)));
  END_CPP11
}
// model_seir.cpp
SEXP ModelSEIR_cpp(std::string name, double prevalence, double infectiousness, double incubation_days, double recovery);
extern "C" SEXP _epiworldR_ModelSEIR_cpp(SEXP name, SEXP prevalence, SEXP infectiousness, SEXP incubation_days, SEXP recovery) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSEIR_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(infectiousness), cpp11::as_cpp<cpp11::decay_t<double>>(incubation_days), cpp11::as_cpp<cpp11::decay_t<double>>(recovery)));
  END_CPP11
}
// model_seir.cpp
int init_seir(SEXP m, int days, int seed);
extern "C" SEXP _epiworldR_init_seir(SEXP m, SEXP days, SEXP seed) {
  BEGIN_CPP11
    return cpp11::as_sexp(init_seir(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<int>>(days), cpp11::as_cpp<cpp11::decay_t<int>>(seed)));
  END_CPP11
}
// model_seir.cpp
int print_seir(SEXP m);
extern "C" SEXP _epiworldR_print_seir(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(print_seir(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}
// model_seir.cpp
int agents_smallworld_seir(SEXP m, unsigned int n, unsigned int k, bool d, double p);
extern "C" SEXP _epiworldR_agents_smallworld_seir(SEXP m, SEXP n, SEXP k, SEXP d, SEXP p) {
  BEGIN_CPP11
    return cpp11::as_sexp(agents_smallworld_seir(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(n), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(k), cpp11::as_cpp<cpp11::decay_t<bool>>(d), cpp11::as_cpp<cpp11::decay_t<double>>(p)));
  END_CPP11
}
// model_seir.cpp
int run_seir(SEXP m);
extern "C" SEXP _epiworldR_run_seir(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(run_seir(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}
// model_seirconn.cpp
SEXP ModelSEIRCONN_cpp(std::string name, unsigned int n, double prevalence, double reproductive_number, double prob_transmission, double incubation_days, double prob_recovery);
extern "C" SEXP _epiworldR_ModelSEIRCONN_cpp(SEXP name, SEXP n, SEXP prevalence, SEXP reproductive_number, SEXP prob_transmission, SEXP incubation_days, SEXP prob_recovery) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSEIRCONN_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(n), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(reproductive_number), cpp11::as_cpp<cpp11::decay_t<double>>(prob_transmission), cpp11::as_cpp<cpp11::decay_t<double>>(incubation_days), cpp11::as_cpp<cpp11::decay_t<double>>(prob_recovery)));
  END_CPP11
}
// model_seirconn.cpp
int init_seirconn(SEXP m, int days, int seed);
extern "C" SEXP _epiworldR_init_seirconn(SEXP m, SEXP days, SEXP seed) {
  BEGIN_CPP11
    return cpp11::as_sexp(init_seirconn(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<int>>(days), cpp11::as_cpp<cpp11::decay_t<int>>(seed)));
  END_CPP11
}
// model_seirconn.cpp
int print_seirconn(SEXP m);
extern "C" SEXP _epiworldR_print_seirconn(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(print_seirconn(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}
// model_seirconn.cpp
int run_seirconn(SEXP m);
extern "C" SEXP _epiworldR_run_seirconn(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(run_seirconn(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}
// model_sir.cpp
SEXP ModelSIR_cpp(std::string name, double prevalence, double infectiousness, double recovery);
extern "C" SEXP _epiworldR_ModelSIR_cpp(SEXP name, SEXP prevalence, SEXP infectiousness, SEXP recovery) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSIR_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(infectiousness), cpp11::as_cpp<cpp11::decay_t<double>>(recovery)));
  END_CPP11
}
// model_sir.cpp
int init_sir(SEXP m, int days, int seed);
extern "C" SEXP _epiworldR_init_sir(SEXP m, SEXP days, SEXP seed) {
  BEGIN_CPP11
    return cpp11::as_sexp(init_sir(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<int>>(days), cpp11::as_cpp<cpp11::decay_t<int>>(seed)));
  END_CPP11
}
// model_sir.cpp
int print_sir(SEXP m);
extern "C" SEXP _epiworldR_print_sir(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(print_sir(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}
// model_sir.cpp
int agents_smallworld_sir(SEXP m, unsigned int n, unsigned int k, bool d, double p);
extern "C" SEXP _epiworldR_agents_smallworld_sir(SEXP m, SEXP n, SEXP k, SEXP d, SEXP p) {
  BEGIN_CPP11
    return cpp11::as_sexp(agents_smallworld_sir(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(n), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(k), cpp11::as_cpp<cpp11::decay_t<bool>>(d), cpp11::as_cpp<cpp11::decay_t<double>>(p)));
  END_CPP11
}
// model_sir.cpp
int run_sir(SEXP m);
extern "C" SEXP _epiworldR_run_sir(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(run_sir(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}
// model_sirconn.cpp
SEXP ModelSIRCONN_cpp(std::string name, unsigned int n, double prevalence, double reproductive_number, double prob_transmission, double prob_recovery);
extern "C" SEXP _epiworldR_ModelSIRCONN_cpp(SEXP name, SEXP n, SEXP prevalence, SEXP reproductive_number, SEXP prob_transmission, SEXP prob_recovery) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSIRCONN_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(n), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(reproductive_number), cpp11::as_cpp<cpp11::decay_t<double>>(prob_transmission), cpp11::as_cpp<cpp11::decay_t<double>>(prob_recovery)));
  END_CPP11
}
// model_sirconn.cpp
int init_sirconn(SEXP m, int days, int seed);
extern "C" SEXP _epiworldR_init_sirconn(SEXP m, SEXP days, SEXP seed) {
  BEGIN_CPP11
    return cpp11::as_sexp(init_sirconn(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<int>>(days), cpp11::as_cpp<cpp11::decay_t<int>>(seed)));
  END_CPP11
}
// model_sirconn.cpp
int print_sirconn(SEXP m);
extern "C" SEXP _epiworldR_print_sirconn(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(print_sirconn(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}
// model_sirconn.cpp
int run_sirconn(SEXP m);
extern "C" SEXP _epiworldR_run_sirconn(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(run_sirconn(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}
// model_sis.cpp
SEXP ModelSIS_cpp(std::string name, double prevalence, double infectiousness, double recovery);
extern "C" SEXP _epiworldR_ModelSIS_cpp(SEXP name, SEXP prevalence, SEXP infectiousness, SEXP recovery) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSIS_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(infectiousness), cpp11::as_cpp<cpp11::decay_t<double>>(recovery)));
  END_CPP11
}
// model_sis.cpp
int init_sis(SEXP m, int days, int seed);
extern "C" SEXP _epiworldR_init_sis(SEXP m, SEXP days, SEXP seed) {
  BEGIN_CPP11
    return cpp11::as_sexp(init_sis(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<int>>(days), cpp11::as_cpp<cpp11::decay_t<int>>(seed)));
  END_CPP11
}
// model_sis.cpp
int print_sis(SEXP m);
extern "C" SEXP _epiworldR_print_sis(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(print_sis(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}
// model_sis.cpp
int agents_smallworld_sis(SEXP m, unsigned int n, unsigned int k, bool d, double p);
extern "C" SEXP _epiworldR_agents_smallworld_sis(SEXP m, SEXP n, SEXP k, SEXP d, SEXP p) {
  BEGIN_CPP11
    return cpp11::as_sexp(agents_smallworld_sis(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(n), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(k), cpp11::as_cpp<cpp11::decay_t<bool>>(d), cpp11::as_cpp<cpp11::decay_t<double>>(p)));
  END_CPP11
}
// model_sis.cpp
int run_sis(SEXP m);
extern "C" SEXP _epiworldR_run_sis(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(run_sis(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_epiworldR_ModelSEIRCONN_cpp",              (DL_FUNC) &_epiworldR_ModelSEIRCONN_cpp,              7},
    {"_epiworldR_ModelSEIR_cpp",                  (DL_FUNC) &_epiworldR_ModelSEIR_cpp,                  5},
    {"_epiworldR_ModelSIRCONN_cpp",               (DL_FUNC) &_epiworldR_ModelSIRCONN_cpp,               6},
    {"_epiworldR_ModelSIR_cpp",                   (DL_FUNC) &_epiworldR_ModelSIR_cpp,                   4},
    {"_epiworldR_ModelSIS_cpp",                   (DL_FUNC) &_epiworldR_ModelSIS_cpp,                   4},
    {"_epiworldR_agents_smallworld_seir",         (DL_FUNC) &_epiworldR_agents_smallworld_seir,         5},
    {"_epiworldR_agents_smallworld_sir",          (DL_FUNC) &_epiworldR_agents_smallworld_sir,          5},
    {"_epiworldR_agents_smallworld_sis",          (DL_FUNC) &_epiworldR_agents_smallworld_sis,          5},
    {"_epiworldR_get_hist_total_cpp",             (DL_FUNC) &_epiworldR_get_hist_total_cpp,             2},
    {"_epiworldR_get_reproductive_number_cpp",    (DL_FUNC) &_epiworldR_get_reproductive_number_cpp,    2},
    {"_epiworldR_get_status_cpp",                 (DL_FUNC) &_epiworldR_get_status_cpp,                 2},
    {"_epiworldR_get_transition_probability_cpp", (DL_FUNC) &_epiworldR_get_transition_probability_cpp, 2},
    {"_epiworldR_init_seir",                      (DL_FUNC) &_epiworldR_init_seir,                      3},
    {"_epiworldR_init_seirconn",                  (DL_FUNC) &_epiworldR_init_seirconn,                  3},
    {"_epiworldR_init_sir",                       (DL_FUNC) &_epiworldR_init_sir,                       3},
    {"_epiworldR_init_sirconn",                   (DL_FUNC) &_epiworldR_init_sirconn,                   3},
    {"_epiworldR_init_sis",                       (DL_FUNC) &_epiworldR_init_sis,                       3},
    {"_epiworldR_print_seir",                     (DL_FUNC) &_epiworldR_print_seir,                     1},
    {"_epiworldR_print_seirconn",                 (DL_FUNC) &_epiworldR_print_seirconn,                 1},
    {"_epiworldR_print_sir",                      (DL_FUNC) &_epiworldR_print_sir,                      1},
    {"_epiworldR_print_sirconn",                  (DL_FUNC) &_epiworldR_print_sirconn,                  1},
    {"_epiworldR_print_sis",                      (DL_FUNC) &_epiworldR_print_sis,                      1},
    {"_epiworldR_run_seir",                       (DL_FUNC) &_epiworldR_run_seir,                       1},
    {"_epiworldR_run_seirconn",                   (DL_FUNC) &_epiworldR_run_seirconn,                   1},
    {"_epiworldR_run_sir",                        (DL_FUNC) &_epiworldR_run_sir,                        1},
    {"_epiworldR_run_sirconn",                    (DL_FUNC) &_epiworldR_run_sirconn,                    1},
    {"_epiworldR_run_sis",                        (DL_FUNC) &_epiworldR_run_sis,                        1},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_epiworldR(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
