// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_getBits
unsigned int cpp_getBits();
RcppExport SEXP _IFC_cpp_getBits() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_getBits());
    return rcpp_result_gen;
END_RCPP
}
// cpp_align
Rcpp::NumericMatrix cpp_align(const Rcpp::NumericMatrix mat, const double dx, const double dy);
RcppExport SEXP _IFC_cpp_align(SEXP matSEXP, SEXP dxSEXP, SEXP dySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const double >::type dx(dxSEXP);
    Rcpp::traits::input_parameter< const double >::type dy(dySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_align(mat, dx, dy));
    return rcpp_result_gen;
END_RCPP
}
// cpp_assert
Rcpp::LogicalVector cpp_assert(const RObject x, const Rcpp::Nullable<Rcpp::IntegerVector> len, const Rcpp::Nullable<Rcpp::CharacterVector> cla, const Rcpp::Nullable<Rcpp::CharacterVector> typ, const RObject alw, const Rcpp::CharacterVector fun);
RcppExport SEXP _IFC_cpp_assert(SEXP xSEXP, SEXP lenSEXP, SEXP claSEXP, SEXP typSEXP, SEXP alwSEXP, SEXP funSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector> >::type len(lenSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::CharacterVector> >::type cla(claSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::CharacterVector> >::type typ(typSEXP);
    Rcpp::traits::input_parameter< const RObject >::type alw(alwSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector >::type fun(funSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_assert(x, len, cla, typ, alw, fun));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ell_coord
Rcpp::NumericVector cpp_ell_coord(const Rcpp::NumericVector bound_x, const Rcpp::NumericVector bound_y);
RcppExport SEXP _IFC_cpp_ell_coord(SEXP bound_xSEXP, SEXP bound_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type bound_x(bound_xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type bound_y(bound_ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ell_coord(bound_x, bound_y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_pnt_in_gate
Rcpp::LogicalVector cpp_pnt_in_gate(const Rcpp::NumericMatrix pnts, const Rcpp::NumericMatrix gate, const int algorithm, const double epsilon);
RcppExport SEXP _IFC_cpp_pnt_in_gate(SEXP pntsSEXP, SEXP gateSEXP, SEXP algorithmSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type pnts(pntsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type gate(gateSEXP);
    Rcpp::traits::input_parameter< const int >::type algorithm(algorithmSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_pnt_in_gate(pnts, gate, algorithm, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// cpp_mpfmatch
bool cpp_mpfmatch(const Rcpp::Nullable<Rcpp::CharacterVector> x, const Rcpp::Nullable<Rcpp::CharacterVector> pattern);
RcppExport SEXP _IFC_cpp_mpfmatch(SEXP xSEXP, SEXP patternSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::CharacterVector> >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::CharacterVector> >::type pattern(patternSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_mpfmatch(x, pattern));
    return rcpp_result_gen;
END_RCPP
}
// cpp_seqmatch
R_len_t cpp_seqmatch(const Rcpp::StringVector x, const Rcpp::StringVector y);
RcppExport SEXP _IFC_cpp_seqmatch(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::StringVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_seqmatch(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_fast_rowAny
Rcpp::Nullable<Rcpp::LogicalVector> cpp_fast_rowAny(const Rcpp::Nullable<Rcpp::LogicalVector> M_);
RcppExport SEXP _IFC_cpp_fast_rowAny(SEXP M_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::LogicalVector> >::type M_(M_SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_fast_rowAny(M_));
    return rcpp_result_gen;
END_RCPP
}
// cpp_fast_listAny
Rcpp::Nullable<Rcpp::LogicalVector> cpp_fast_listAny(const Rcpp::Nullable<Rcpp::List> L_);
RcppExport SEXP _IFC_cpp_fast_listAny(SEXP L_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::List> >::type L_(L_SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_fast_listAny(L_));
    return rcpp_result_gen;
END_RCPP
}
// cpp_fast_range
Rcpp::NumericVector cpp_fast_range(const Rcpp::Nullable<Rcpp::NumericVector> x_);
RcppExport SEXP _IFC_cpp_fast_range(SEXP x_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector> >::type x_(x_SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_fast_range(x_));
    return rcpp_result_gen;
END_RCPP
}
// cpp_fast_sample
Rcpp::IntegerVector cpp_fast_sample(const R_len_t n, const R_len_t size, const bool replace);
RcppExport SEXP _IFC_cpp_fast_sample(SEXP nSEXP, SEXP sizeSEXP, SEXP replaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const R_len_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< const R_len_t >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< const bool >::type replace(replaceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_fast_sample(n, size, replace));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_bytes_order
Rcpp::Nullable<Rcpp::IntegerVector> cpp_get_bytes_order(const R_len_t obj, const Rcpp::Nullable<Rcpp::IntegerVector> byt_, const Rcpp::Nullable<Rcpp::IntegerVector> ord_, const bool rev);
RcppExport SEXP _IFC_cpp_get_bytes_order(SEXP objSEXP, SEXP byt_SEXP, SEXP ord_SEXP, SEXP revSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const R_len_t >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector> >::type byt_(byt_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector> >::type ord_(ord_SEXP);
    Rcpp::traits::input_parameter< const bool >::type rev(revSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_bytes_order(obj, byt_, ord_, rev));
    return rcpp_result_gen;
END_RCPP
}
// cpp_replace_non_finite
Rcpp::Nullable<Rcpp::NumericVector> cpp_replace_non_finite(const Rcpp::Nullable<Rcpp::NumericVector> V_, const double by);
RcppExport SEXP _IFC_cpp_replace_non_finite(SEXP V_SEXP, SEXP bySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector> >::type V_(V_SEXP);
    Rcpp::traits::input_parameter< const double >::type by(bySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_replace_non_finite(V_, by));
    return rcpp_result_gen;
END_RCPP
}
// cpp_computeGamma
double cpp_computeGamma(const Rcpp::NumericVector V);
RcppExport SEXP _IFC_cpp_computeGamma(SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_computeGamma(V));
    return rcpp_result_gen;
END_RCPP
}
// cpp_base64_encode
std::string cpp_base64_encode(const Rcpp::RawVector x);
RcppExport SEXP _IFC_cpp_base64_encode(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::RawVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_base64_encode(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_writeBMP
Rcpp::RawVector cpp_writeBMP(const Rcpp::NumericVector image);
RcppExport SEXP _IFC_cpp_writeBMP(SEXP imageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type image(imageSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_writeBMP(image));
    return rcpp_result_gen;
END_RCPP
}
// cpp_checkTIFF
std::string cpp_checkTIFF(const std::string fname);
RcppExport SEXP _IFC_cpp_checkTIFF(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_checkTIFF(fname));
    return rcpp_result_gen;
END_RCPP
}
// cpp_getoffsets_noid
Rcpp::NumericVector cpp_getoffsets_noid(const std::string fname, const R_len_t obj_count, const bool display_progress, const Rcpp::Nullable<Rcpp::List> pb, const bool verbose);
RcppExport SEXP _IFC_cpp_getoffsets_noid(SEXP fnameSEXP, SEXP obj_countSEXP, SEXP display_progressSEXP, SEXP pbSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< const R_len_t >::type obj_count(obj_countSEXP);
    Rcpp::traits::input_parameter< const bool >::type display_progress(display_progressSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::List> >::type pb(pbSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_getoffsets_noid(fname, obj_count, display_progress, pb, verbose));
    return rcpp_result_gen;
END_RCPP
}
// cpp_getTAGS
Rcpp::List cpp_getTAGS(const std::string fname, const std::size_t offset, const bool verbose, const uint8_t trunc_bytes, const bool force_trunc);
RcppExport SEXP _IFC_cpp_getTAGS(SEXP fnameSEXP, SEXP offsetSEXP, SEXP verboseSEXP, SEXP trunc_bytesSEXP, SEXP force_truncSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const uint8_t >::type trunc_bytes(trunc_bytesSEXP);
    Rcpp::traits::input_parameter< const bool >::type force_trunc(force_truncSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_getTAGS(fname, offset, verbose, trunc_bytes, force_trunc));
    return rcpp_result_gen;
END_RCPP
}
// cpp_fastTAGS
Rcpp::List cpp_fastTAGS(const std::string fname, const std::size_t offset, const bool swap);
RcppExport SEXP _IFC_cpp_fastTAGS(SEXP fnameSEXP, SEXP offsetSEXP, SEXP swapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const bool >::type swap(swapSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_fastTAGS(fname, offset, swap));
    return rcpp_result_gen;
END_RCPP
}
// cpp_getoffsets_wid
Rcpp::List cpp_getoffsets_wid(const std::string fname, const R_len_t obj_count, const bool display_progress, const Rcpp::Nullable<Rcpp::List> pb, const bool verbose);
RcppExport SEXP _IFC_cpp_getoffsets_wid(SEXP fnameSEXP, SEXP obj_countSEXP, SEXP display_progressSEXP, SEXP pbSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< const R_len_t >::type obj_count(obj_countSEXP);
    Rcpp::traits::input_parameter< const bool >::type display_progress(display_progressSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::List> >::type pb(pbSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_getoffsets_wid(fname, obj_count, display_progress, pb, verbose));
    return rcpp_result_gen;
END_RCPP
}
// cpp_checksum
std::size_t cpp_checksum(const std::string fname);
RcppExport SEXP _IFC_cpp_checksum(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_checksum(fname));
    return rcpp_result_gen;
END_RCPP
}
// cpp_M_HSV2RGB
Rcpp::NumericVector cpp_M_HSV2RGB(const Rcpp::NumericMatrix mat, const double h, const double s);
RcppExport SEXP _IFC_cpp_M_HSV2RGB(SEXP matSEXP, SEXP hSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_M_HSV2RGB(mat, h, s));
    return rcpp_result_gen;
END_RCPP
}
// cpp_smoothLinLog
Rcpp::NumericVector cpp_smoothLinLog(const Rcpp::NumericVector x, const double hyper, const double base, const double lin_comp);
RcppExport SEXP _IFC_cpp_smoothLinLog(SEXP xSEXP, SEXP hyperSEXP, SEXP baseSEXP, SEXP lin_compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type hyper(hyperSEXP);
    Rcpp::traits::input_parameter< const double >::type base(baseSEXP);
    Rcpp::traits::input_parameter< const double >::type lin_comp(lin_compSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_smoothLinLog(x, hyper, base, lin_comp));
    return rcpp_result_gen;
END_RCPP
}
// cpp_inv_smoothLinLog
Rcpp::NumericVector cpp_inv_smoothLinLog(const Rcpp::NumericVector x, const double hyper, const double base, const double lin_comp);
RcppExport SEXP _IFC_cpp_inv_smoothLinLog(SEXP xSEXP, SEXP hyperSEXP, SEXP baseSEXP, SEXP lin_compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type hyper(hyperSEXP);
    Rcpp::traits::input_parameter< const double >::type base(baseSEXP);
    Rcpp::traits::input_parameter< const double >::type lin_comp(lin_compSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_inv_smoothLinLog(x, hyper, base, lin_comp));
    return rcpp_result_gen;
END_RCPP
}
// cpp_uint32_to_raw
Rcpp::RawVector cpp_uint32_to_raw(const uint32_t x);
RcppExport SEXP _IFC_cpp_uint32_to_raw(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const uint32_t >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_uint32_to_raw(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_int32_to_uint32
uint32_t cpp_int32_to_uint32(const int32_t x);
RcppExport SEXP _IFC_cpp_int32_to_uint32(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int32_t >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_int32_to_uint32(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_offset_to_raw
Rcpp::RawVector cpp_offset_to_raw(const double x, const bool swap);
RcppExport SEXP _IFC_cpp_offset_to_raw(SEXP xSEXP, SEXP swapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const bool >::type swap(swapSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_offset_to_raw(x, swap));
    return rcpp_result_gen;
END_RCPP
}
// cpp_raw_to_offset
double cpp_raw_to_offset(const Rcpp::RawVector x, const bool swap);
RcppExport SEXP _IFC_cpp_raw_to_offset(SEXP xSEXP, SEXP swapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const bool >::type swap(swapSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_raw_to_offset(x, swap));
    return rcpp_result_gen;
END_RCPP
}
// cpp_uint32_to_int32
int32_t cpp_uint32_to_int32(const uint32_t x);
RcppExport SEXP _IFC_cpp_uint32_to_int32(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const uint32_t >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_uint32_to_int32(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_int64_to_uint64
uint64_t cpp_int64_to_uint64(const int64_t x);
RcppExport SEXP _IFC_cpp_int64_to_uint64(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int64_t >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_int64_to_uint64(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_uint64_to_int64
int64_t cpp_uint64_to_int64(const uint64_t x);
RcppExport SEXP _IFC_cpp_uint64_to_int64(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const uint64_t >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_uint64_to_int64(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_v_int32_to_uint32
Rcpp::Nullable<Rcpp::NumericVector> cpp_v_int32_to_uint32(Rcpp::Nullable<Rcpp::NumericVector> V);
RcppExport SEXP _IFC_cpp_v_int32_to_uint32(SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_v_int32_to_uint32(V));
    return rcpp_result_gen;
END_RCPP
}
// cpp_v_int64_to_uint64
Rcpp::Nullable<Rcpp::NumericVector> cpp_v_int64_to_uint64(Rcpp::Nullable<Rcpp::NumericVector> V);
RcppExport SEXP _IFC_cpp_v_int64_to_uint64(SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_v_int64_to_uint64(V));
    return rcpp_result_gen;
END_RCPP
}
// cpp_scanFirst
std::size_t cpp_scanFirst(const std::string fname, const Rcpp::RawVector raw, const std::size_t start, const std::size_t end, const uint8_t buf_size);
RcppExport SEXP _IFC_cpp_scanFirst(SEXP fnameSEXP, SEXP rawSEXP, SEXP startSEXP, SEXP endSEXP, SEXP buf_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::RawVector >::type raw(rawSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type start(startSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type end(endSEXP);
    Rcpp::traits::input_parameter< const uint8_t >::type buf_size(buf_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_scanFirst(fname, raw, start, end, buf_size));
    return rcpp_result_gen;
END_RCPP
}
// cpp_fast_factor
SEXP cpp_fast_factor(SEXP x, const bool handleNA);
RcppExport SEXP _IFC_cpp_fast_factor(SEXP xSEXP, SEXP handleNASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const bool >::type handleNA(handleNASEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_fast_factor(x, handleNA));
    return rcpp_result_gen;
END_RCPP
}
// cpp_group_df
Rcpp::IntegerVector cpp_group_df(const Rcpp::DataFrame df);
RcppExport SEXP _IFC_cpp_group_df(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_group_df(df));
    return rcpp_result_gen;
END_RCPP
}
// cpp_coord_to_px
Rcpp::IntegerMatrix cpp_coord_to_px(const Rcpp::NumericVector x, const Rcpp::NumericVector y, const Rcpp::NumericVector param);
RcppExport SEXP _IFC_cpp_coord_to_px(SEXP xSEXP, SEXP ySEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type param(paramSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_coord_to_px(x, y, param));
    return rcpp_result_gen;
END_RCPP
}
// cpp_as_nativeRaster
Rcpp::IntegerMatrix cpp_as_nativeRaster(const Rcpp::IntegerVector x);
RcppExport SEXP _IFC_cpp_as_nativeRaster(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_as_nativeRaster(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_draw
Rcpp::IntegerVector cpp_draw(const Rcpp::IntegerVector img, const Rcpp::IntegerMatrix coords, const Rcpp::LogicalMatrix mask, const Rcpp::IntegerMatrix color, const R_len_t blur_size, const double blur_sd);
RcppExport SEXP _IFC_cpp_draw(SEXP imgSEXP, SEXP coordsSEXP, SEXP maskSEXP, SEXP colorSEXP, SEXP blur_sizeSEXP, SEXP blur_sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type img(imgSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalMatrix >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix >::type color(colorSEXP);
    Rcpp::traits::input_parameter< const R_len_t >::type blur_size(blur_sizeSEXP);
    Rcpp::traits::input_parameter< const double >::type blur_sd(blur_sdSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_draw(img, coords, mask, color, blur_size, blur_sd));
    return rcpp_result_gen;
END_RCPP
}
// cpp_raster
Rcpp::IntegerVector cpp_raster(const uint16_t width, const uint16_t height, const Rcpp::List obj, const Rcpp::Nullable <Rcpp::IntegerVector> bg_);
RcppExport SEXP _IFC_cpp_raster(SEXP widthSEXP, SEXP heightSEXP, SEXP objSEXP, SEXP bg_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const uint16_t >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type height(heightSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable <Rcpp::IntegerVector> >::type bg_(bg_SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_raster(width, height, obj, bg_));
    return rcpp_result_gen;
END_RCPP
}
// cpp_crop
Rcpp::NumericMatrix cpp_crop(Rcpp::NumericMatrix mat, const R_len_t new_height, const R_len_t new_width);
RcppExport SEXP _IFC_cpp_crop(SEXP matSEXP, SEXP new_heightSEXP, SEXP new_widthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const R_len_t >::type new_height(new_heightSEXP);
    Rcpp::traits::input_parameter< const R_len_t >::type new_width(new_widthSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_crop(mat, new_height, new_width));
    return rcpp_result_gen;
END_RCPP
}
// cpp_resize
Rcpp::NumericMatrix cpp_resize(const Rcpp::NumericMatrix mat, const R_len_t new_height, const R_len_t new_width, const bool add_noise, const double bg, const double sd);
RcppExport SEXP _IFC_cpp_resize(SEXP matSEXP, SEXP new_heightSEXP, SEXP new_widthSEXP, SEXP add_noiseSEXP, SEXP bgSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const R_len_t >::type new_height(new_heightSEXP);
    Rcpp::traits::input_parameter< const R_len_t >::type new_width(new_widthSEXP);
    Rcpp::traits::input_parameter< const bool >::type add_noise(add_noiseSEXP);
    Rcpp::traits::input_parameter< const double >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< const double >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_resize(mat, new_height, new_width, add_noise, bg, sd));
    return rcpp_result_gen;
END_RCPP
}
// cpp_decomp
Rcpp::List cpp_decomp(const std::string fname, const std::size_t offset, const uint32_t nbytes, const uint32_t imgWidth, const uint32_t imgHeight, const uint32_t nb_channels, const uint8_t removal, const uint32_t compression, const bool verbose);
RcppExport SEXP _IFC_cpp_decomp(SEXP fnameSEXP, SEXP offsetSEXP, SEXP nbytesSEXP, SEXP imgWidthSEXP, SEXP imgHeightSEXP, SEXP nb_channelsSEXP, SEXP removalSEXP, SEXP compressionSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type nbytes(nbytesSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type imgWidth(imgWidthSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type imgHeight(imgHeightSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type nb_channels(nb_channelsSEXP);
    Rcpp::traits::input_parameter< const uint8_t >::type removal(removalSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type compression(compressionSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_decomp(fname, offset, nbytes, imgWidth, imgHeight, nb_channels, removal, compression, verbose));
    return rcpp_result_gen;
END_RCPP
}
// cpp_rawdecomp
Rcpp::RawVector cpp_rawdecomp(const std::string fname, const std::size_t offset, const uint32_t nbytes, const uint32_t imgWidth, const uint32_t imgHeight, const uint32_t compression, const uint8_t bits, const bool swap, const bool verbose);
RcppExport SEXP _IFC_cpp_rawdecomp(SEXP fnameSEXP, SEXP offsetSEXP, SEXP nbytesSEXP, SEXP imgWidthSEXP, SEXP imgHeightSEXP, SEXP compressionSEXP, SEXP bitsSEXP, SEXP swapSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type nbytes(nbytesSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type imgWidth(imgWidthSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type imgHeight(imgHeightSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type compression(compressionSEXP);
    Rcpp::traits::input_parameter< const uint8_t >::type bits(bitsSEXP);
    Rcpp::traits::input_parameter< const bool >::type swap(swapSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_rawdecomp(fname, offset, nbytes, imgWidth, imgHeight, compression, bits, swap, verbose));
    return rcpp_result_gen;
END_RCPP
}
// cpp_normalize
Rcpp::NumericMatrix cpp_normalize(const Rcpp::NumericMatrix mat, const Rcpp::NumericVector input_range, const bool full_range, const bool force_range, const double gamma);
RcppExport SEXP _IFC_cpp_normalize(SEXP matSEXP, SEXP input_rangeSEXP, SEXP full_rangeSEXP, SEXP force_rangeSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type input_range(input_rangeSEXP);
    Rcpp::traits::input_parameter< const bool >::type full_range(full_rangeSEXP);
    Rcpp::traits::input_parameter< const bool >::type force_range(force_rangeSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_normalize(mat, input_range, full_range, force_range, gamma));
    return rcpp_result_gen;
END_RCPP
}
// cpp_cleanse
Rcpp::NumericMatrix cpp_cleanse(const Rcpp::NumericMatrix mat, const Rcpp::IntegerMatrix msk, const bool add_noise, const double bg, const double sd);
RcppExport SEXP _IFC_cpp_cleanse(SEXP matSEXP, SEXP mskSEXP, SEXP add_noiseSEXP, SEXP bgSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix >::type msk(mskSEXP);
    Rcpp::traits::input_parameter< const bool >::type add_noise(add_noiseSEXP);
    Rcpp::traits::input_parameter< const double >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< const double >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_cleanse(mat, msk, add_noise, bg, sd));
    return rcpp_result_gen;
END_RCPP
}
// cpp_mask
Rcpp::NumericMatrix cpp_mask(const Rcpp::NumericMatrix A, const Rcpp::NumericMatrix B, const Rcpp::NumericMatrix mask);
RcppExport SEXP _IFC_cpp_mask(SEXP ASEXP, SEXP BSEXP, SEXP maskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type mask(maskSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_mask(A, B, mask));
    return rcpp_result_gen;
END_RCPP
}
// cpp_mark
Rcpp::NumericMatrix cpp_mark(const Rcpp::NumericMatrix A, const Rcpp::NumericMatrix B, const Rcpp::NumericMatrix mask, const R_len_t xoff, const R_len_t yoff, const bool invert);
RcppExport SEXP _IFC_cpp_mark(SEXP ASEXP, SEXP BSEXP, SEXP maskSEXP, SEXP xoffSEXP, SEXP yoffSEXP, SEXP invertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< const R_len_t >::type xoff(xoffSEXP);
    Rcpp::traits::input_parameter< const R_len_t >::type yoff(yoffSEXP);
    Rcpp::traits::input_parameter< const bool >::type invert(invertSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_mark(A, B, mask, xoff, yoff, invert));
    return rcpp_result_gen;
END_RCPP
}
// cpp_transform
Rcpp::NumericVector cpp_transform(const Rcpp::NumericMatrix mat, const Rcpp::NumericVector color, const Rcpp::IntegerMatrix msk, const Rcpp::IntegerVector size, const std::string mode, const uint16_t type, const Rcpp::NumericVector input_range, const bool add_noise, const double bg, const double sd, const bool full_range, const bool force_range, const double gamma, const double spatialX, const double spatialY);
RcppExport SEXP _IFC_cpp_transform(SEXP matSEXP, SEXP colorSEXP, SEXP mskSEXP, SEXP sizeSEXP, SEXP modeSEXP, SEXP typeSEXP, SEXP input_rangeSEXP, SEXP add_noiseSEXP, SEXP bgSEXP, SEXP sdSEXP, SEXP full_rangeSEXP, SEXP force_rangeSEXP, SEXP gammaSEXP, SEXP spatialXSEXP, SEXP spatialYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type color(colorSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix >::type msk(mskSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< const std::string >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type input_range(input_rangeSEXP);
    Rcpp::traits::input_parameter< const bool >::type add_noise(add_noiseSEXP);
    Rcpp::traits::input_parameter< const double >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< const double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< const bool >::type full_range(full_rangeSEXP);
    Rcpp::traits::input_parameter< const bool >::type force_range(force_rangeSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type spatialX(spatialXSEXP);
    Rcpp::traits::input_parameter< const double >::type spatialY(spatialYSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_transform(mat, color, msk, size, mode, type, input_range, add_noise, bg, sd, full_range, force_range, gamma, spatialX, spatialY));
    return rcpp_result_gen;
END_RCPP
}
// cpp_extract
Rcpp::List cpp_extract(const std::string fname, const Rcpp::List ifd, const Rcpp::List colors, const Rcpp::CharacterVector physicalChannel, const Rcpp::NumericVector xmin, const Rcpp::NumericVector xmax, const Rcpp::NumericVector spatialX, const Rcpp::NumericVector spatialY, const Rcpp::IntegerVector removal, const Rcpp::LogicalVector add_noise, const Rcpp::LogicalVector full_range, const Rcpp::LogicalVector force_range, const Rcpp::NumericVector gamma, const Rcpp::IntegerVector chan_to_extract, const uint8_t extract_msk, const std::string mode, const Rcpp::IntegerVector size, const bool verbose);
RcppExport SEXP _IFC_cpp_extract(SEXP fnameSEXP, SEXP ifdSEXP, SEXP colorsSEXP, SEXP physicalChannelSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP spatialXSEXP, SEXP spatialYSEXP, SEXP removalSEXP, SEXP add_noiseSEXP, SEXP full_rangeSEXP, SEXP force_rangeSEXP, SEXP gammaSEXP, SEXP chan_to_extractSEXP, SEXP extract_mskSEXP, SEXP modeSEXP, SEXP sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type ifd(ifdSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type colors(colorsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector >::type physicalChannel(physicalChannelSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type spatialX(spatialXSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type spatialY(spatialYSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type removal(removalSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector >::type add_noise(add_noiseSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector >::type full_range(full_rangeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector >::type force_range(force_rangeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type chan_to_extract(chan_to_extractSEXP);
    Rcpp::traits::input_parameter< const uint8_t >::type extract_msk(extract_mskSEXP);
    Rcpp::traits::input_parameter< const std::string >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_extract(fname, ifd, colors, physicalChannel, xmin, xmax, spatialX, spatialY, removal, add_noise, full_range, force_range, gamma, chan_to_extract, extract_msk, mode, size, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_IFC_cpp_getBits", (DL_FUNC) &_IFC_cpp_getBits, 0},
    {"_IFC_cpp_align", (DL_FUNC) &_IFC_cpp_align, 3},
    {"_IFC_cpp_assert", (DL_FUNC) &_IFC_cpp_assert, 6},
    {"_IFC_cpp_ell_coord", (DL_FUNC) &_IFC_cpp_ell_coord, 2},
    {"_IFC_cpp_pnt_in_gate", (DL_FUNC) &_IFC_cpp_pnt_in_gate, 4},
    {"_IFC_cpp_mpfmatch", (DL_FUNC) &_IFC_cpp_mpfmatch, 2},
    {"_IFC_cpp_seqmatch", (DL_FUNC) &_IFC_cpp_seqmatch, 2},
    {"_IFC_cpp_fast_rowAny", (DL_FUNC) &_IFC_cpp_fast_rowAny, 1},
    {"_IFC_cpp_fast_listAny", (DL_FUNC) &_IFC_cpp_fast_listAny, 1},
    {"_IFC_cpp_fast_range", (DL_FUNC) &_IFC_cpp_fast_range, 1},
    {"_IFC_cpp_fast_sample", (DL_FUNC) &_IFC_cpp_fast_sample, 3},
    {"_IFC_cpp_get_bytes_order", (DL_FUNC) &_IFC_cpp_get_bytes_order, 4},
    {"_IFC_cpp_replace_non_finite", (DL_FUNC) &_IFC_cpp_replace_non_finite, 2},
    {"_IFC_cpp_computeGamma", (DL_FUNC) &_IFC_cpp_computeGamma, 1},
    {"_IFC_cpp_base64_encode", (DL_FUNC) &_IFC_cpp_base64_encode, 1},
    {"_IFC_cpp_writeBMP", (DL_FUNC) &_IFC_cpp_writeBMP, 1},
    {"_IFC_cpp_checkTIFF", (DL_FUNC) &_IFC_cpp_checkTIFF, 1},
    {"_IFC_cpp_getoffsets_noid", (DL_FUNC) &_IFC_cpp_getoffsets_noid, 5},
    {"_IFC_cpp_getTAGS", (DL_FUNC) &_IFC_cpp_getTAGS, 5},
    {"_IFC_cpp_fastTAGS", (DL_FUNC) &_IFC_cpp_fastTAGS, 3},
    {"_IFC_cpp_getoffsets_wid", (DL_FUNC) &_IFC_cpp_getoffsets_wid, 5},
    {"_IFC_cpp_checksum", (DL_FUNC) &_IFC_cpp_checksum, 1},
    {"_IFC_cpp_M_HSV2RGB", (DL_FUNC) &_IFC_cpp_M_HSV2RGB, 3},
    {"_IFC_cpp_smoothLinLog", (DL_FUNC) &_IFC_cpp_smoothLinLog, 4},
    {"_IFC_cpp_inv_smoothLinLog", (DL_FUNC) &_IFC_cpp_inv_smoothLinLog, 4},
    {"_IFC_cpp_uint32_to_raw", (DL_FUNC) &_IFC_cpp_uint32_to_raw, 1},
    {"_IFC_cpp_int32_to_uint32", (DL_FUNC) &_IFC_cpp_int32_to_uint32, 1},
    {"_IFC_cpp_offset_to_raw", (DL_FUNC) &_IFC_cpp_offset_to_raw, 2},
    {"_IFC_cpp_raw_to_offset", (DL_FUNC) &_IFC_cpp_raw_to_offset, 2},
    {"_IFC_cpp_uint32_to_int32", (DL_FUNC) &_IFC_cpp_uint32_to_int32, 1},
    {"_IFC_cpp_int64_to_uint64", (DL_FUNC) &_IFC_cpp_int64_to_uint64, 1},
    {"_IFC_cpp_uint64_to_int64", (DL_FUNC) &_IFC_cpp_uint64_to_int64, 1},
    {"_IFC_cpp_v_int32_to_uint32", (DL_FUNC) &_IFC_cpp_v_int32_to_uint32, 1},
    {"_IFC_cpp_v_int64_to_uint64", (DL_FUNC) &_IFC_cpp_v_int64_to_uint64, 1},
    {"_IFC_cpp_scanFirst", (DL_FUNC) &_IFC_cpp_scanFirst, 5},
    {"_IFC_cpp_fast_factor", (DL_FUNC) &_IFC_cpp_fast_factor, 2},
    {"_IFC_cpp_group_df", (DL_FUNC) &_IFC_cpp_group_df, 1},
    {"_IFC_cpp_coord_to_px", (DL_FUNC) &_IFC_cpp_coord_to_px, 3},
    {"_IFC_cpp_as_nativeRaster", (DL_FUNC) &_IFC_cpp_as_nativeRaster, 1},
    {"_IFC_cpp_draw", (DL_FUNC) &_IFC_cpp_draw, 6},
    {"_IFC_cpp_raster", (DL_FUNC) &_IFC_cpp_raster, 4},
    {"_IFC_cpp_crop", (DL_FUNC) &_IFC_cpp_crop, 3},
    {"_IFC_cpp_resize", (DL_FUNC) &_IFC_cpp_resize, 6},
    {"_IFC_cpp_decomp", (DL_FUNC) &_IFC_cpp_decomp, 9},
    {"_IFC_cpp_rawdecomp", (DL_FUNC) &_IFC_cpp_rawdecomp, 9},
    {"_IFC_cpp_normalize", (DL_FUNC) &_IFC_cpp_normalize, 5},
    {"_IFC_cpp_cleanse", (DL_FUNC) &_IFC_cpp_cleanse, 5},
    {"_IFC_cpp_mask", (DL_FUNC) &_IFC_cpp_mask, 3},
    {"_IFC_cpp_mark", (DL_FUNC) &_IFC_cpp_mark, 6},
    {"_IFC_cpp_transform", (DL_FUNC) &_IFC_cpp_transform, 15},
    {"_IFC_cpp_extract", (DL_FUNC) &_IFC_cpp_extract, 18},
    {NULL, NULL, 0}
};

RcppExport void R_init_IFC(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}