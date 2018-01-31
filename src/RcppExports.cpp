// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pairwise_hamming
std::vector<int> pairwise_hamming(const std::vector<std::string>& strs);
RcppExport SEXP _dropEstAnalysis_pairwise_hamming(SEXP strsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type strs(strsSEXP);
    rcpp_result_gen = Rcpp::wrap(pairwise_hamming(strs));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dropEstAnalysis_pairwise_hamming", (DL_FUNC) &_dropEstAnalysis_pairwise_hamming, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_dropEstAnalysis(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
