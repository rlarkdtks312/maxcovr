// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// deg2rad_cpp
double deg2rad_cpp(double deg);
RcppExport SEXP maxcovr_deg2rad_cpp(SEXP degSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type deg(degSEXP);
    rcpp_result_gen = Rcpp::wrap(deg2rad_cpp(deg));
    return rcpp_result_gen;
END_RCPP
}
// spherical_distance_cpp
double spherical_distance_cpp(double lat1, double long1, double lat2, double long2);
RcppExport SEXP maxcovr_spherical_distance_cpp(SEXP lat1SEXP, SEXP long1SEXP, SEXP lat2SEXP, SEXP long2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< double >::type long1(long1SEXP);
    Rcpp::traits::input_parameter< double >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< double >::type long2(long2SEXP);
    rcpp_result_gen = Rcpp::wrap(spherical_distance_cpp(lat1, long1, lat2, long2));
    return rcpp_result_gen;
END_RCPP
}
// distance_matrix_cpp
NumericMatrix distance_matrix_cpp(NumericMatrix facility, NumericMatrix user);
RcppExport SEXP maxcovr_distance_matrix_cpp(SEXP facilitySEXP, SEXP userSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type facility(facilitySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type user(userSEXP);
    rcpp_result_gen = Rcpp::wrap(distance_matrix_cpp(facility, user));
    return rcpp_result_gen;
END_RCPP
}
// binary_matrix_cpp
IntegerMatrix binary_matrix_cpp(NumericMatrix facility, NumericMatrix user, double distance_cutoff);
RcppExport SEXP maxcovr_binary_matrix_cpp(SEXP facilitySEXP, SEXP userSEXP, SEXP distance_cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type facility(facilitySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type user(userSEXP);
    Rcpp::traits::input_parameter< double >::type distance_cutoff(distance_cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(binary_matrix_cpp(facility, user, distance_cutoff));
    return rcpp_result_gen;
END_RCPP
}
// nearest_facility_dist
NumericMatrix nearest_facility_dist(NumericMatrix facility, NumericMatrix user);
RcppExport SEXP maxcovr_nearest_facility_dist(SEXP facilitySEXP, SEXP userSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type facility(facilitySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type user(userSEXP);
    rcpp_result_gen = Rcpp::wrap(nearest_facility_dist(facility, user));
    return rcpp_result_gen;
END_RCPP
}
// spherical_distance_cpp_vec
NumericVector spherical_distance_cpp_vec(NumericVector lat1, NumericVector long1, NumericVector lat2, NumericVector long2);
RcppExport SEXP maxcovr_spherical_distance_cpp_vec(SEXP lat1SEXP, SEXP long1SEXP, SEXP lat2SEXP, SEXP long2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type long1(long1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type long2(long2SEXP);
    rcpp_result_gen = Rcpp::wrap(spherical_distance_cpp_vec(lat1, long1, lat2, long2));
    return rcpp_result_gen;
END_RCPP
}
