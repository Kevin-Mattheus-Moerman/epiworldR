// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// db.cpp
cpp11::data_frame get_hist_total_cpp(SEXP model);
extern "C" SEXP _epiworldR_get_hist_total_cpp(SEXP model) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_hist_total_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model)));
  END_CPP11
}
// db.cpp
doubles get_transition_probability_cpp(SEXP model);
extern "C" SEXP _epiworldR_get_transition_probability_cpp(SEXP model) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_transition_probability_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model)));
  END_CPP11
}
// db.cpp
cpp11::data_frame get_reproductive_number_cpp(SEXP model);
extern "C" SEXP _epiworldR_get_reproductive_number_cpp(SEXP model) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_reproductive_number_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model)));
  END_CPP11
}
// epimodels.cpp
SEXP ModelSURV_cpp(std::string name, double prevalence, double efficacy_vax, double latent_period, double prob_symptoms, double prop_vaccinated, double prop_vax_redux_transm, double infect_period, double prop_vax_redux_infect, double surveillance_prob, double prob_transmission, double prob_death, double prob_noreinfect);
extern "C" SEXP _epiworldR_ModelSURV_cpp(SEXP name, SEXP prevalence, SEXP efficacy_vax, SEXP latent_period, SEXP prob_symptoms, SEXP prop_vaccinated, SEXP prop_vax_redux_transm, SEXP infect_period, SEXP prop_vax_redux_infect, SEXP surveillance_prob, SEXP prob_transmission, SEXP prob_death, SEXP prob_noreinfect) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSURV_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(efficacy_vax), cpp11::as_cpp<cpp11::decay_t<double>>(latent_period), cpp11::as_cpp<cpp11::decay_t<double>>(prob_symptoms), cpp11::as_cpp<cpp11::decay_t<double>>(prop_vaccinated), cpp11::as_cpp<cpp11::decay_t<double>>(prop_vax_redux_transm), cpp11::as_cpp<cpp11::decay_t<double>>(infect_period), cpp11::as_cpp<cpp11::decay_t<double>>(prop_vax_redux_infect), cpp11::as_cpp<cpp11::decay_t<double>>(surveillance_prob), cpp11::as_cpp<cpp11::decay_t<double>>(prob_transmission), cpp11::as_cpp<cpp11::decay_t<double>>(prob_death), cpp11::as_cpp<cpp11::decay_t<double>>(prob_noreinfect)));
  END_CPP11
}
// epimodels.cpp
    SEXP ModelSEIR_cpp(std::string name, double prevalence, double infectiousness, double incubation_days, double recovery);
extern "C" SEXP _epiworldR_ModelSEIR_cpp(SEXP name, SEXP prevalence, SEXP infectiousness, SEXP incubation_days, SEXP recovery) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSEIR_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(infectiousness), cpp11::as_cpp<cpp11::decay_t<double>>(incubation_days), cpp11::as_cpp<cpp11::decay_t<double>>(recovery)));
  END_CPP11
}
// epimodels.cpp
SEXP ModelSIS_cpp(std::string name, double prevalence, double infectiousness, double recovery);
extern "C" SEXP _epiworldR_ModelSIS_cpp(SEXP name, SEXP prevalence, SEXP infectiousness, SEXP recovery) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSIS_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(infectiousness), cpp11::as_cpp<cpp11::decay_t<double>>(recovery)));
  END_CPP11
}
// epimodels.cpp
SEXP ModelSIRCONN_cpp(std::string name, unsigned int n, double prevalence, double contact_rate, double prob_transmission, double prob_recovery);
extern "C" SEXP _epiworldR_ModelSIRCONN_cpp(SEXP name, SEXP n, SEXP prevalence, SEXP contact_rate, SEXP prob_transmission, SEXP prob_recovery) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSIRCONN_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(n), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(contact_rate), cpp11::as_cpp<cpp11::decay_t<double>>(prob_transmission), cpp11::as_cpp<cpp11::decay_t<double>>(prob_recovery)));
  END_CPP11
}
// epimodels.cpp
SEXP ModelSIR_cpp(std::string name, double prevalence, double infectiousness, double recovery);
extern "C" SEXP _epiworldR_ModelSIR_cpp(SEXP name, SEXP prevalence, SEXP infectiousness, SEXP recovery) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSIR_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(infectiousness), cpp11::as_cpp<cpp11::decay_t<double>>(recovery)));
  END_CPP11
}
// epimodels.cpp
SEXP ModelSEIRCONN_cpp(std::string name, unsigned int n, double prevalence, double contact_rate, double prob_transmission, double incubation_days, double prob_recovery);
extern "C" SEXP _epiworldR_ModelSEIRCONN_cpp(SEXP name, SEXP n, SEXP prevalence, SEXP contact_rate, SEXP prob_transmission, SEXP incubation_days, SEXP prob_recovery) {
  BEGIN_CPP11
    return cpp11::as_sexp(ModelSEIRCONN_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(n), cpp11::as_cpp<cpp11::decay_t<double>>(prevalence), cpp11::as_cpp<cpp11::decay_t<double>>(contact_rate), cpp11::as_cpp<cpp11::decay_t<double>>(prob_transmission), cpp11::as_cpp<cpp11::decay_t<double>>(incubation_days), cpp11::as_cpp<cpp11::decay_t<double>>(prob_recovery)));
  END_CPP11
}
// model.cpp
SEXP print_cpp(SEXP m);
extern "C" SEXP _epiworldR_print_cpp(SEXP m) {
  BEGIN_CPP11
    return cpp11::as_sexp(print_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m)));
  END_CPP11
}
// model.cpp
SEXP agents_smallworld_cpp(SEXP m, unsigned int n, unsigned int k, bool d, double p);
extern "C" SEXP _epiworldR_agents_smallworld_cpp(SEXP m, SEXP n, SEXP k, SEXP d, SEXP p) {
  BEGIN_CPP11
    return cpp11::as_sexp(agents_smallworld_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(n), cpp11::as_cpp<cpp11::decay_t<unsigned int>>(k), cpp11::as_cpp<cpp11::decay_t<bool>>(d), cpp11::as_cpp<cpp11::decay_t<double>>(p)));
  END_CPP11
}
// model.cpp
SEXP agents_from_edgelist_cpp(SEXP m, const std::vector<int> & source, const std::vector<int> & target, int size, bool directed);
extern "C" SEXP _epiworldR_agents_from_edgelist_cpp(SEXP m, SEXP source, SEXP target, SEXP size, SEXP directed) {
  BEGIN_CPP11
    return cpp11::as_sexp(agents_from_edgelist_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<const std::vector<int> &>>(source), cpp11::as_cpp<cpp11::decay_t<const std::vector<int> &>>(target), cpp11::as_cpp<cpp11::decay_t<int>>(size), cpp11::as_cpp<cpp11::decay_t<bool>>(directed)));
  END_CPP11
}
// model.cpp
SEXP run_cpp(SEXP m, int ndays, int seed);
extern "C" SEXP _epiworldR_run_cpp(SEXP m, SEXP ndays, SEXP seed) {
  BEGIN_CPP11
    return cpp11::as_sexp(run_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<int>>(ndays), cpp11::as_cpp<cpp11::decay_t<int>>(seed)));
  END_CPP11
}
// model.cpp
SEXP make_saver_cpp(std::string fn, bool total_hist, bool variant_info, bool variant_hist, bool tool_info, bool tool_hist, bool transmission, bool transition, bool reproductive, bool generation);
extern "C" SEXP _epiworldR_make_saver_cpp(SEXP fn, SEXP total_hist, SEXP variant_info, SEXP variant_hist, SEXP tool_info, SEXP tool_hist, SEXP transmission, SEXP transition, SEXP reproductive, SEXP generation) {
  BEGIN_CPP11
    return cpp11::as_sexp(make_saver_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(fn), cpp11::as_cpp<cpp11::decay_t<bool>>(total_hist), cpp11::as_cpp<cpp11::decay_t<bool>>(variant_info), cpp11::as_cpp<cpp11::decay_t<bool>>(variant_hist), cpp11::as_cpp<cpp11::decay_t<bool>>(tool_info), cpp11::as_cpp<cpp11::decay_t<bool>>(tool_hist), cpp11::as_cpp<cpp11::decay_t<bool>>(transmission), cpp11::as_cpp<cpp11::decay_t<bool>>(transition), cpp11::as_cpp<cpp11::decay_t<bool>>(reproductive), cpp11::as_cpp<cpp11::decay_t<bool>>(generation)));
  END_CPP11
}
// model.cpp
SEXP run_multiple_cpp(SEXP m, int ndays, int nsims, int seed, SEXP saver, bool reset, bool verbose, int nthreads);
extern "C" SEXP _epiworldR_run_multiple_cpp(SEXP m, SEXP ndays, SEXP nsims, SEXP seed, SEXP saver, SEXP reset, SEXP verbose, SEXP nthreads) {
  BEGIN_CPP11
    return cpp11::as_sexp(run_multiple_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<int>>(ndays), cpp11::as_cpp<cpp11::decay_t<int>>(nsims), cpp11::as_cpp<cpp11::decay_t<int>>(seed), cpp11::as_cpp<cpp11::decay_t<SEXP>>(saver), cpp11::as_cpp<cpp11::decay_t<bool>>(reset), cpp11::as_cpp<cpp11::decay_t<bool>>(verbose), cpp11::as_cpp<cpp11::decay_t<int>>(nthreads)));
  END_CPP11
}
// model.cpp
SEXP queuing_on_cpp(SEXP model);
extern "C" SEXP _epiworldR_queuing_on_cpp(SEXP model) {
  BEGIN_CPP11
    return cpp11::as_sexp(queuing_on_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model)));
  END_CPP11
}
// model.cpp
SEXP queuing_off_cpp(SEXP model);
extern "C" SEXP _epiworldR_queuing_off_cpp(SEXP model) {
  BEGIN_CPP11
    return cpp11::as_sexp(queuing_off_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model)));
  END_CPP11
}
// model.cpp
double get_param_cpp(SEXP model, std::string pname);
extern "C" SEXP _epiworldR_get_param_cpp(SEXP model, SEXP pname) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_param_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model), cpp11::as_cpp<cpp11::decay_t<std::string>>(pname)));
  END_CPP11
}
// model.cpp
SEXP set_param_cpp(SEXP model, std::string pname, double val);
extern "C" SEXP _epiworldR_set_param_cpp(SEXP model, SEXP pname, SEXP val) {
  BEGIN_CPP11
    return cpp11::as_sexp(set_param_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model), cpp11::as_cpp<cpp11::decay_t<std::string>>(pname), cpp11::as_cpp<cpp11::decay_t<double>>(val)));
  END_CPP11
}
// model.cpp
SEXP set_name_cpp(SEXP model, std::string mname);
extern "C" SEXP _epiworldR_set_name_cpp(SEXP model, SEXP mname) {
  BEGIN_CPP11
    return cpp11::as_sexp(set_name_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model), cpp11::as_cpp<cpp11::decay_t<std::string>>(mname)));
  END_CPP11
}
// model.cpp
std::string get_name_cpp(SEXP model);
extern "C" SEXP _epiworldR_get_name_cpp(SEXP model) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_name_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model)));
  END_CPP11
}
// model.cpp
cpp11::strings get_state_cpp(SEXP model);
extern "C" SEXP _epiworldR_get_state_cpp(SEXP model) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_state_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model)));
  END_CPP11
}
// model.cpp
SEXP verbose_on_cpp(SEXP model);
extern "C" SEXP _epiworldR_verbose_on_cpp(SEXP model) {
  BEGIN_CPP11
    return cpp11::as_sexp(verbose_on_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model)));
  END_CPP11
}
// model.cpp
SEXP verbose_off_cpp(SEXP model);
extern "C" SEXP _epiworldR_verbose_off_cpp(SEXP model) {
  BEGIN_CPP11
    return cpp11::as_sexp(verbose_off_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(model)));
  END_CPP11
}
// tool.cpp
SEXP tool_cpp(std::string name, double susceptibility_reduction, double transmission_reduction, double recovery_enhancer, double death_reduction);
extern "C" SEXP _epiworldR_tool_cpp(SEXP name, SEXP susceptibility_reduction, SEXP transmission_reduction, SEXP recovery_enhancer, SEXP death_reduction) {
  BEGIN_CPP11
    return cpp11::as_sexp(tool_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<double>>(susceptibility_reduction), cpp11::as_cpp<cpp11::decay_t<double>>(transmission_reduction), cpp11::as_cpp<cpp11::decay_t<double>>(recovery_enhancer), cpp11::as_cpp<cpp11::decay_t<double>>(death_reduction)));
  END_CPP11
}
// tool.cpp
int add_tool_cpp(SEXP m, SEXP t, double preval);
extern "C" SEXP _epiworldR_add_tool_cpp(SEXP m, SEXP t, SEXP preval) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_tool_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<SEXP>>(t), cpp11::as_cpp<cpp11::decay_t<double>>(preval)));
  END_CPP11
}
// tool.cpp
int add_tool_n_cpp(SEXP m, SEXP t, size_t preval);
extern "C" SEXP _epiworldR_add_tool_n_cpp(SEXP m, SEXP t, SEXP preval) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_tool_n_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<SEXP>>(t), cpp11::as_cpp<cpp11::decay_t<size_t>>(preval)));
  END_CPP11
}
// tool.cpp
SEXP rm_tool_cpp(SEXP m, size_t tool_pos);
extern "C" SEXP _epiworldR_rm_tool_cpp(SEXP m, SEXP tool_pos) {
  BEGIN_CPP11
    return cpp11::as_sexp(rm_tool_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<size_t>>(tool_pos)));
  END_CPP11
}
// virus.cpp
SEXP virus_cpp(std::string name, double post_immunity, double prob_infecting, double prob_recovery, double prob_death);
extern "C" SEXP _epiworldR_virus_cpp(SEXP name, SEXP post_immunity, SEXP prob_infecting, SEXP prob_recovery, SEXP prob_death) {
  BEGIN_CPP11
    return cpp11::as_sexp(virus_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<double>>(post_immunity), cpp11::as_cpp<cpp11::decay_t<double>>(prob_infecting), cpp11::as_cpp<cpp11::decay_t<double>>(prob_recovery), cpp11::as_cpp<cpp11::decay_t<double>>(prob_death)));
  END_CPP11
}
// virus.cpp
int virus_set_state_cpp(SEXP v, size_t init, size_t end, size_t removed);
extern "C" SEXP _epiworldR_virus_set_state_cpp(SEXP v, SEXP init, SEXP end, SEXP removed) {
  BEGIN_CPP11
    return cpp11::as_sexp(virus_set_state_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(v), cpp11::as_cpp<cpp11::decay_t<size_t>>(init), cpp11::as_cpp<cpp11::decay_t<size_t>>(end), cpp11::as_cpp<cpp11::decay_t<size_t>>(removed)));
  END_CPP11
}
// virus.cpp
int add_virus_cpp(SEXP m, SEXP v, double preval);
extern "C" SEXP _epiworldR_add_virus_cpp(SEXP m, SEXP v, SEXP preval) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_virus_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<SEXP>>(v), cpp11::as_cpp<cpp11::decay_t<double>>(preval)));
  END_CPP11
}
// virus.cpp
int add_virus_n_cpp(SEXP m, SEXP v, size_t preval);
extern "C" SEXP _epiworldR_add_virus_n_cpp(SEXP m, SEXP v, SEXP preval) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_virus_n_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<SEXP>>(v), cpp11::as_cpp<cpp11::decay_t<size_t>>(preval)));
  END_CPP11
}
// virus.cpp
SEXP rm_virus_cpp(SEXP m, size_t virus_pos);
extern "C" SEXP _epiworldR_rm_virus_cpp(SEXP m, SEXP virus_pos) {
  BEGIN_CPP11
    return cpp11::as_sexp(rm_virus_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(m), cpp11::as_cpp<cpp11::decay_t<size_t>>(virus_pos)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_epiworldR_ModelSEIRCONN_cpp",              (DL_FUNC) &_epiworldR_ModelSEIRCONN_cpp,               7},
    {"_epiworldR_ModelSEIR_cpp",                  (DL_FUNC) &_epiworldR_ModelSEIR_cpp,                   5},
    {"_epiworldR_ModelSIRCONN_cpp",               (DL_FUNC) &_epiworldR_ModelSIRCONN_cpp,                6},
    {"_epiworldR_ModelSIR_cpp",                   (DL_FUNC) &_epiworldR_ModelSIR_cpp,                    4},
    {"_epiworldR_ModelSIS_cpp",                   (DL_FUNC) &_epiworldR_ModelSIS_cpp,                    4},
    {"_epiworldR_ModelSURV_cpp",                  (DL_FUNC) &_epiworldR_ModelSURV_cpp,                  13},
    {"_epiworldR_add_tool_cpp",                   (DL_FUNC) &_epiworldR_add_tool_cpp,                    3},
    {"_epiworldR_add_tool_n_cpp",                 (DL_FUNC) &_epiworldR_add_tool_n_cpp,                  3},
    {"_epiworldR_add_virus_cpp",                  (DL_FUNC) &_epiworldR_add_virus_cpp,                   3},
    {"_epiworldR_add_virus_n_cpp",                (DL_FUNC) &_epiworldR_add_virus_n_cpp,                 3},
    {"_epiworldR_agents_from_edgelist_cpp",       (DL_FUNC) &_epiworldR_agents_from_edgelist_cpp,        5},
    {"_epiworldR_agents_smallworld_cpp",          (DL_FUNC) &_epiworldR_agents_smallworld_cpp,           5},
    {"_epiworldR_get_hist_total_cpp",             (DL_FUNC) &_epiworldR_get_hist_total_cpp,              1},
    {"_epiworldR_get_name_cpp",                   (DL_FUNC) &_epiworldR_get_name_cpp,                    1},
    {"_epiworldR_get_param_cpp",                  (DL_FUNC) &_epiworldR_get_param_cpp,                   2},
    {"_epiworldR_get_reproductive_number_cpp",    (DL_FUNC) &_epiworldR_get_reproductive_number_cpp,     1},
    {"_epiworldR_get_state_cpp",                  (DL_FUNC) &_epiworldR_get_state_cpp,                   1},
    {"_epiworldR_get_transition_probability_cpp", (DL_FUNC) &_epiworldR_get_transition_probability_cpp,  1},
    {"_epiworldR_make_saver_cpp",                 (DL_FUNC) &_epiworldR_make_saver_cpp,                 10},
    {"_epiworldR_print_cpp",                      (DL_FUNC) &_epiworldR_print_cpp,                       1},
    {"_epiworldR_queuing_off_cpp",                (DL_FUNC) &_epiworldR_queuing_off_cpp,                 1},
    {"_epiworldR_queuing_on_cpp",                 (DL_FUNC) &_epiworldR_queuing_on_cpp,                  1},
    {"_epiworldR_rm_tool_cpp",                    (DL_FUNC) &_epiworldR_rm_tool_cpp,                     2},
    {"_epiworldR_rm_virus_cpp",                   (DL_FUNC) &_epiworldR_rm_virus_cpp,                    2},
    {"_epiworldR_run_cpp",                        (DL_FUNC) &_epiworldR_run_cpp,                         3},
    {"_epiworldR_run_multiple_cpp",               (DL_FUNC) &_epiworldR_run_multiple_cpp,                8},
    {"_epiworldR_set_name_cpp",                   (DL_FUNC) &_epiworldR_set_name_cpp,                    2},
    {"_epiworldR_set_param_cpp",                  (DL_FUNC) &_epiworldR_set_param_cpp,                   3},
    {"_epiworldR_tool_cpp",                       (DL_FUNC) &_epiworldR_tool_cpp,                        5},
    {"_epiworldR_verbose_off_cpp",                (DL_FUNC) &_epiworldR_verbose_off_cpp,                 1},
    {"_epiworldR_verbose_on_cpp",                 (DL_FUNC) &_epiworldR_verbose_on_cpp,                  1},
    {"_epiworldR_virus_cpp",                      (DL_FUNC) &_epiworldR_virus_cpp,                       5},
    {"_epiworldR_virus_set_state_cpp",            (DL_FUNC) &_epiworldR_virus_set_state_cpp,             4},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_epiworldR(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
