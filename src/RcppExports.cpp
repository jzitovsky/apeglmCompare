// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// betabinGLM
Rcpp::List betabinGLM(Rcpp::NumericMatrix x, Rcpp::NumericMatrix Y, Rcpp::NumericMatrix sizes, Rcpp::NumericVector thetas, Rcpp::NumericMatrix weights, double sigma2, double S2, Rcpp::NumericVector no_shrink, Rcpp::NumericVector shrink, Rcpp::NumericVector init, Rcpp::NumericVector cnst, double tol, double lbd, double ubd);
RcppExport SEXP _apeglm_betabinGLM(SEXP xSEXP, SEXP YSEXP, SEXP sizesSEXP, SEXP thetasSEXP, SEXP weightsSEXP, SEXP sigma2SEXP, SEXP S2SEXP, SEXP no_shrinkSEXP, SEXP shrinkSEXP, SEXP initSEXP, SEXP cnstSEXP, SEXP tolSEXP, SEXP lbdSEXP, SEXP ubdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type sizes(sizesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< double >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type no_shrink(no_shrinkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type shrink(shrinkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type init(initSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type cnst(cnstSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type lbd(lbdSEXP);
    Rcpp::traits::input_parameter< double >::type ubd(ubdSEXP);
    rcpp_result_gen = Rcpp::wrap(betabinGLM(x, Y, sizes, thetas, weights, sigma2, S2, no_shrink, shrink, init, cnst, tol, lbd, ubd));
    return rcpp_result_gen;
END_RCPP
}
// nbinomGLM
Rcpp::List nbinomGLM(Rcpp::NumericMatrix x, Rcpp::NumericMatrix Y, Rcpp::NumericVector size, Rcpp::NumericMatrix weights, Rcpp::NumericMatrix offset, double sigma2, double S2, Rcpp::NumericVector no_shrink, Rcpp::NumericVector shrink, Rcpp::NumericVector init, Rcpp::NumericVector cnst);
RcppExport SEXP _apeglm_nbinomGLM(SEXP xSEXP, SEXP YSEXP, SEXP sizeSEXP, SEXP weightsSEXP, SEXP offsetSEXP, SEXP sigma2SEXP, SEXP S2SEXP, SEXP no_shrinkSEXP, SEXP shrinkSEXP, SEXP initSEXP, SEXP cnstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< double >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type no_shrink(no_shrinkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type shrink(shrinkSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type init(initSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type cnst(cnstSEXP);
    rcpp_result_gen = Rcpp::wrap(nbinomGLM(x, Y, size, weights, offset, sigma2, S2, no_shrink, shrink, init, cnst));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_apeglm_betabinGLM", (DL_FUNC) &_apeglm_betabinGLM, 14},
    {"_apeglm_nbinomGLM", (DL_FUNC) &_apeglm_nbinomGLM, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_apeglm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
