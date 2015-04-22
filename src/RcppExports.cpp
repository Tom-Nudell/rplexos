// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// expand_tkey
Rcpp::DataFrame expand_tkey(Rcpp::DataFrame tkey);
RcppExport SEXP rplexos_expand_tkey(SEXP tkeySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type tkey(tkeySEXP);
    __result = Rcpp::wrap(expand_tkey(tkey));
    return __result;
END_RCPP
}
// process_xml
Rcpp::List process_xml(Rcpp::CharacterVector xml);
RcppExport SEXP rplexos_process_xml(SEXP xmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type xml(xmlSEXP);
    __result = Rcpp::wrap(process_xml(xml));
    return __result;
END_RCPP
}
// zip_buffer
std::string zip_buffer(const std::string& zip_path, const std::string& pattern);
RcppExport SEXP rplexos_zip_buffer(SEXP zip_pathSEXP, SEXP patternSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type zip_path(zip_pathSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type pattern(patternSEXP);
    __result = Rcpp::wrap(zip_buffer(zip_path, pattern));
    return __result;
END_RCPP
}
