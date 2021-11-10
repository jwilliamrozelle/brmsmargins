// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// integratemvn
arma::mat integratemvn(arma::mat X, int k, arma::vec sd, arma::mat chol);
RcppExport SEXP _brmsmargins_integratemvn(SEXP XSEXP, SEXP kSEXP, SEXP sdSEXP, SEXP cholSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type chol(cholSEXP);
    rcpp_result_gen = Rcpp::wrap(integratemvn(X, k, sd, chol));
    return rcpp_result_gen;
END_RCPP
}
// tab2mat
arma::mat tab2mat(arma::mat X, int index);
RcppExport SEXP _brmsmargins_tab2mat(SEXP XSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(tab2mat(X, index));
    return rcpp_result_gen;
END_RCPP
}
// integratere
arma::mat integratere(List obj);
RcppExport SEXP _brmsmargins_integratere(SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type obj(objSEXP);
    rcpp_result_gen = Rcpp::wrap(integratere(obj));
    return rcpp_result_gen;
END_RCPP
}
// rowBootMeans
NumericVector rowBootMeans(NumericMatrix x);
RcppExport SEXP _brmsmargins_rowBootMeans(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rowBootMeans(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_brmsmargins_integratemvn", (DL_FUNC) &_brmsmargins_integratemvn, 4},
    {"_brmsmargins_tab2mat", (DL_FUNC) &_brmsmargins_tab2mat, 2},
    {"_brmsmargins_integratere", (DL_FUNC) &_brmsmargins_integratere, 1},
    {"_brmsmargins_rowBootMeans", (DL_FUNC) &_brmsmargins_rowBootMeans, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_brmsmargins(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
