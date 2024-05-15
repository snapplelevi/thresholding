// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// analysis
void analysis(std::string infile, Rcpp::NumericVector methods, std::string outfile_prefix, double lower, double upper, double increment, int window_size, int min_partition_size, int min_clique_size, double min_alpha, double max_alpha, double alpha_increment, int num_samples, double significance_alpha, bool bonferroni_corrected);
RcppExport SEXP _thresholding_analysis(SEXP infileSEXP, SEXP methodsSEXP, SEXP outfile_prefixSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP incrementSEXP, SEXP window_sizeSEXP, SEXP min_partition_sizeSEXP, SEXP min_clique_sizeSEXP, SEXP min_alphaSEXP, SEXP max_alphaSEXP, SEXP alpha_incrementSEXP, SEXP num_samplesSEXP, SEXP significance_alphaSEXP, SEXP bonferroni_correctedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type methods(methodsSEXP);
    Rcpp::traits::input_parameter< std::string >::type outfile_prefix(outfile_prefixSEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< double >::type increment(incrementSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type min_partition_size(min_partition_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type min_clique_size(min_clique_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type min_alpha(min_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type max_alpha(max_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_increment(alpha_incrementSEXP);
    Rcpp::traits::input_parameter< int >::type num_samples(num_samplesSEXP);
    Rcpp::traits::input_parameter< double >::type significance_alpha(significance_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type bonferroni_corrected(bonferroni_correctedSEXP);
    analysis(infile, methods, outfile_prefix, lower, upper, increment, window_size, min_partition_size, min_clique_size, min_alpha, max_alpha, alpha_increment, num_samples, significance_alpha, bonferroni_corrected);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_thresholding_analysis", (DL_FUNC) &_thresholding_analysis, 15},
    {NULL, NULL, 0}
};

RcppExport void R_init_thresholding(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
