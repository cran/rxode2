#include <time.h>
#include <stdlib.h>
unsigned long int __timeId=0;
char *genRandomChar(void);
void writeHeader(const char *md5, const char *extra) {
sAppend(&sbOut, "#define _getRxSolve_ _rx%s%s%ld__getRxSolve__%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _evalUdf _rx%s%s%ld__evalUdf_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _solveData _rx%s%s%ld__solveData_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _assign_ptr _rx%s%s%ld__assign_ptr_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _rxRmModelLib _rx%s%s%ld__rxRmModelLib_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _rxGetModelLib _rx%s%s%ld__rxGetModelLib_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _old_c _rx%s%s%ld__old_c_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _ptrid _rx%s%s%ld__ptrid_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _rxIsCurrentC _rx%s%s%ld__rxIsCurrentC_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _sumPS _rx%s%s%ld__sumPS_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _prodPS _rx%s%s%ld__prodPS_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _prodType _rx%s%s%ld__prodType_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _sumType _rx%s%s%ld__sumType_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _update_par_ptr _rx%s%s%ld__update_par_ptr_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _getParCov _rx%s%s%ld__getParCov_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _rxode2_rxAssignPtr _rx%s%s%ld__rxode2_rxAssignPtr_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _rxQr _rx%s%s%ld__rxQr_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _compareFactorVal _rx%s%s%ld__compareFactorVal_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _sum _rx%s%s%ld__sum_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _udf _rx%s%s%ld__udf_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _sign _rx%s%s%ld__sign_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _prod _rx%s%s%ld__prod_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _max _rx%s%s%ld__max_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _min _rx%s%s%ld__min_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _transit4P _rx%s%s%ld__transit4P_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _transit3P _rx%s%s%ld__transit3P_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _assignFuns0 _rx%s%s%ld__assignFuns0_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _assignFuns _rx%s%s%ld__assignFuns_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define _rxord _rx%s%s%ld__rxord_%s\n", extra, md5, __timeId++, genRandomChar());
sAppend(&sbOut, "#define __assignFuns2 _rx%s%s%ld___assignFuns2_%s\n", extra, md5, __timeId++, genRandomChar());
}
void writeBody0(void) {
sAppendN(&sbOut, "_getRxSolve_t _getRxSolve_;\n", 28);
sAppendN(&sbOut, "_simfun simeps;\n", 16);
sAppendN(&sbOut, "_simfun simeta;\n", 16);
sAppendN(&sbOut, "_udf_type _evalUdf=NULL;\n", 25);
sAppendN(&sbOut, "rx_solve *_solveData=NULL;\n", 27);
sAppendN(&sbOut, "rxode2_assign_ptr _assign_ptr=NULL;\n", 36);
sAppendN(&sbOut, "_rxRmModelLibType _rxRmModelLib=NULL;\n", 38);
sAppendN(&sbOut, "_rxGetModelLibType _rxGetModelLib=NULL;\n", 40);
sAppendN(&sbOut, "rxode2_ode_solver_old_c _old_c=NULL;\n", 37);
sAppendN(&sbOut, "rxode2_fn0i _ptrid=NULL;\n", 25);
sAppendN(&sbOut, "_rxIsCurrentC_type _rxIsCurrentC=NULL;\n", 39);
sAppendN(&sbOut, "_rxSumType _sumPS=NULL;\n", 24);
sAppendN(&sbOut, "_rxProdType _prodPS=NULL;\n", 26);
sAppendN(&sbOut, "rxode2_fn0i _prodType=NULL;\n", 28);
sAppendN(&sbOut, "rxode2_fn0i _sumType=NULL;\n", 27);
sAppendN(&sbOut, "_update_par_ptr_p _update_par_ptr=NULL;\n", 40);
sAppendN(&sbOut, "_getParCov_p _getParCov=NULL;\n", 30);
sAppendN(&sbOut, "linCmtA_p linCmtA;\n", 19);
sAppendN(&sbOut, "linCmtB_p linCmtB;\n", 19);
sAppendN(&sbOut, "_rx_asgn _rxode2_rxAssignPtr=NULL;\n", 35);
sAppendN(&sbOut, "_rx_asgn _rxQr=NULL;\n", 21);
sAppendN(&sbOut, "rxode2_fn phi;\n", 15);
sAppendN(&sbOut, "rxode2_fn ReLU;\n", 16);
sAppendN(&sbOut, "rxode2_fn dReLU;\n", 17);
sAppendN(&sbOut, "rxode2_fn GELU;\n", 16);
sAppendN(&sbOut, "rxode2_fn dGELU;\n", 17);
sAppendN(&sbOut, "rxode2_fn d2GELU;\n", 18);
sAppendN(&sbOut, "rxode2_fn d3GELU;\n", 18);
sAppendN(&sbOut, "rxode2_fn d4GELU;\n", 18);
sAppendN(&sbOut, "rxode2_fn softplus;\n", 20);
sAppendN(&sbOut, "rxode2_fn dsoftplus;\n", 21);
sAppendN(&sbOut, "rxode2_fn d2softplus;\n", 22);
sAppendN(&sbOut, "rxode2_fn d3softplus;\n", 22);
sAppendN(&sbOut, "rxode2_fn d4softplus;\n", 22);
sAppendN(&sbOut, "rxode2_fn SELU;\n", 16);
sAppendN(&sbOut, "rxode2_fn dSELU;\n", 17);
sAppendN(&sbOut, "rxode2_fn lReLU;\n", 17);
sAppendN(&sbOut, "rxode2_fn dlReLU;\n", 18);
sAppendN(&sbOut, "rxode2_fn Swish;\n", 17);
sAppendN(&sbOut, "rxode2_fn dSwish;\n", 18);
sAppendN(&sbOut, "rxode2_fn2 PReLU;\n", 18);
sAppendN(&sbOut, "rxode2_fn2 dPReLU;\n", 19);
sAppendN(&sbOut, "rxode2_fn2 dPReLUa;\n", 20);
sAppendN(&sbOut, "rxode2_fn2 dPReLUa1;\n", 21);
sAppendN(&sbOut, "rxode2_fn2 ELU;\n", 16);
sAppendN(&sbOut, "rxode2_fn2 dELU;\n", 17);
sAppendN(&sbOut, "rxode2_fn2 d2ELU;\n", 18);
sAppendN(&sbOut, "rxode2_fn2 d2aELU;\n", 19);
sAppendN(&sbOut, "rxode2_fn2 dELUa;\n", 18);
sAppendN(&sbOut, "rxode2_fn2 d2ELUa;\n", 19);
sAppendN(&sbOut, "rxode2_fn3 logit;\n", 18);
sAppendN(&sbOut, "rxode2_fn3 expit;\n", 18);
sAppendN(&sbOut, "rxode2_fn2 gammap;\n", 19);
sAppendN(&sbOut, "rxode2_fn2 gammaq;\n", 19);
sAppendN(&sbOut, "rxode2_fn2 lowergamma;\n", 23);
sAppendN(&sbOut, "rxode2_fn2 uppergamma;\n", 23);
sAppendN(&sbOut, "rxode2_fn2 gammapInv;\n", 22);
sAppendN(&sbOut, "rxode2_fn2 gammapDer;\n", 22);
sAppendN(&sbOut, "rxode2_fn2 gammapInva;\n", 23);
sAppendN(&sbOut, "rxode2_fn2 gammaqInv;\n", 22);
sAppendN(&sbOut, "rxode2_fn2 gammaqInva;\n", 23);
sAppendN(&sbOut, "rxode2i_fn2 rxnorm;\n", 20);
sAppendN(&sbOut, "rxode2i_rxbinom rxbinom;\n", 25);
sAppendN(&sbOut, "rxode2i_rxbinom rxnbinom;\n", 26);
sAppendN(&sbOut, "rxode2i_rxbinom rxnbinomMu;\n", 28);
sAppendN(&sbOut, "rxode2i_fn2 rxcauchy;\n", 22);
sAppendN(&sbOut, "rxode2i_fn rxchisq;\n", 20);
sAppendN(&sbOut, "rxode2i_fn rxexp;\n", 18);
sAppendN(&sbOut, "rxode2i_fn2 rxf;\n", 17);
sAppendN(&sbOut, "rxode2i_ifn rxgeom;\n", 20);
sAppendN(&sbOut, "rxode2i_fn2 rxgamma;\n", 21);
sAppendN(&sbOut, "rxode2i_fn2 rxbeta;\n", 20);
sAppendN(&sbOut, "rxode2i_ifn rxpois;\n", 20);
sAppendN(&sbOut, "rxode2i_fn rxt_;\n", 17);
sAppendN(&sbOut, "rxode2i_fn2 rxunif;\n", 20);
sAppendN(&sbOut, "rxode2i_fn2 rxweibull;\n", 23);
sAppendN(&sbOut, "rxode2i2_fn2 rinorm;\n", 21);
sAppendN(&sbOut, "rxode2i2_ribinom ribinom;\n", 26);
sAppendN(&sbOut, "rxode2i2_ribinom rinbinom;\n", 27);
sAppendN(&sbOut, "rxode2i2_ribinom rinbinomMu;\n", 29);
sAppendN(&sbOut, "rxode2i2_fn2 ricauchy;\n", 23);
sAppendN(&sbOut, "rxode2i2_fn richisq;\n", 21);
sAppendN(&sbOut, "rxode2i2_fn riexp;\n", 19);
sAppendN(&sbOut, "rxode2i2_fn2 rif;\n", 18);
sAppendN(&sbOut, "rxode2i2_ifn rigeom;\n", 21);
sAppendN(&sbOut, "rxode2i2_fn2 rigamma;\n", 22);
sAppendN(&sbOut, "rxode2i2_fn2 ribeta;\n", 21);
sAppendN(&sbOut, "rxode2i2_ifn ripois;\n", 21);
sAppendN(&sbOut, "rxode2i2_fn rit_;\n", 18);
sAppendN(&sbOut, "rxode2i2_fn2 riunif;\n", 21);
sAppendN(&sbOut, "rxode2i2_fn2 riweibull;\n", 24);
sAppendN(&sbOut, "rxode2_llikNormFun _llikNorm;\n", 30);
sAppendN(&sbOut, "rxode2_llikNormFun _llikNormDmean;\n", 35);
sAppendN(&sbOut, "rxode2_llikNormFun _llikNormDsd;\n", 33);
sAppendN(&sbOut, "rxode2_llikPoisFun _llikPois;\n", 30);
sAppendN(&sbOut, "rxode2_llikPoisFun _llikPoisDlambda;\n", 37);
sAppendN(&sbOut, "rxode2_llikBinomFun _llikBinom;\n", 32);
sAppendN(&sbOut, "rxode2_llikBinomFun _llikBinomDprob;\n", 37);
sAppendN(&sbOut, "rxode2_llikBinomFun _llikNbinom;\n", 33);
sAppendN(&sbOut, "rxode2_llikBinomFun _llikNbinomDprob;\n", 38);
sAppendN(&sbOut, "rxode2_llikBinomFun _llikNbinomMu;\n", 35);
sAppendN(&sbOut, "rxode2_llikBinomFun _llikNbinomMuDmu;\n", 38);
sAppendN(&sbOut, "rxode2_llikBetaFun _llikBeta;\n", 30);
sAppendN(&sbOut, "rxode2_llikBetaFun _llikBetaDshape1;\n", 37);
sAppendN(&sbOut, "rxode2_llikBetaFun _llikBetaDshape2;\n", 37);
sAppendN(&sbOut, "rxode2_llikTFun _llikT;\n", 24);
sAppendN(&sbOut, "rxode2_llikTFun _llikTDdf;\n", 27);
sAppendN(&sbOut, "rxode2_llikTFun _llikTDmean;\n", 29);
sAppendN(&sbOut, "rxode2_llikTFun _llikTDsd;\n", 27);
sAppendN(&sbOut, "rxode2_llikChisqFun _llikChisq;\n", 32);
sAppendN(&sbOut, "rxode2_llikChisqFun _llikChisqDdf;\n", 35);
sAppendN(&sbOut, "rxode2_llikExpFun _llikExp;\n", 28);
sAppendN(&sbOut, "rxode2_llikExpFun _llikExpDrate;\n", 33);
sAppendN(&sbOut, "rxode2_llikFFun _llikF;\n", 24);
sAppendN(&sbOut, "rxode2_llikFFun _llikFDdf1;\n", 28);
sAppendN(&sbOut, "rxode2_llikFFun _llikFDdf2;\n", 28);
sAppendN(&sbOut, "rxode2_llikGeomFun _llikGeom;\n", 30);
sAppendN(&sbOut, "rxode2_llikGeomFun _llikGeomDp;\n", 32);
sAppendN(&sbOut, "rxode2_llikUnifFun _llikUnif;\n", 30);
sAppendN(&sbOut, "rxode2_llikUnifFun _llikUnifDalpha;\n", 36);
sAppendN(&sbOut, "rxode2_llikUnifFun _llikUnifDbeta;\n", 35);
sAppendN(&sbOut, "rxode2_llikWeibullFun _llikWeibull;\n", 36);
sAppendN(&sbOut, "rxode2_llikWeibullFun _llikWeibullDshape;\n", 42);
sAppendN(&sbOut, "rxode2_llikWeibullFun _llikWeibullDscale;\n", 42);
sAppendN(&sbOut, "rxode2_llikGammaFun _llikGamma;\n", 32);
sAppendN(&sbOut, "rxode2_llikGammaFun _llikGammaDshape;\n", 38);
sAppendN(&sbOut, "rxode2_llikGammaFun _llikGammaDrate;\n", 37);
sAppendN(&sbOut, "rxode2_llikCauchyFun _llikCauchy;\n", 34);
sAppendN(&sbOut, "rxode2_llikCauchyFun _llikCauchyDlocation;\n", 43);
sAppendN(&sbOut, "rxode2_llikCauchyFun _llikCauchyDscale;\n", 40);
sAppendN(&sbOut, "rxode2_compareFactorVal_fn _compareFactorVal;\n", 46);
}
void writeBody1(void) {
sAppendN(&sbOut, "double _prod(double *input, double *p, int type, int n, ...){\n", 62);
sAppendN(&sbOut, "  va_list valist;\n", 18);
sAppendN(&sbOut, "  va_start(valist, n);\n", 23);
sAppendN(&sbOut, "  for (unsigned int i = 0; i < n; i++){\n", 40);
sAppendN(&sbOut, "    input[i] = va_arg(valist, double);\n", 39);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  va_end(valist);\n", 18);
sAppendN(&sbOut, "  return _prodPS(input, p, n, type);\n", 37);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "double _udf(const char *funName, double *input, int n, ...) {\n", 62);
sAppendN(&sbOut, "  if (n == -42) Rf_error(\"%s\", \"this has a ui user function that cannot be called directly\");\n", 94);
sAppendN(&sbOut, "  va_list valist;\n", 18);
sAppendN(&sbOut, "  va_start(valist, n);\n", 23);
sAppendN(&sbOut, "  for (unsigned int i = 0; i < n; i++){\n", 40);
sAppendN(&sbOut, "    input[i] = va_arg(valist, double);\n", 39);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  va_end(valist);\n", 18);
sAppendN(&sbOut, "  return _evalUdf(funName, n, input);\n", 38);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "double _sum(double *input, double *pld, int m, int type, int n, ...){\n", 70);
sAppendN(&sbOut, "  va_list valist;\n", 18);
sAppendN(&sbOut, "  va_start(valist, n);\n", 23);
sAppendN(&sbOut, "  for (unsigned int i = 0; i < n; i++){\n", 40);
sAppendN(&sbOut, "    input[i] = va_arg(valist, double);\n", 39);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  va_end(valist);\n", 18);
sAppendN(&sbOut, "  double ret = _sumPS(input, n, pld, m, type);\n", 47);
sAppendN(&sbOut, "  if (type == 2 && m < 0){\n", 27);
sAppendN(&sbOut, "    for (int i = -m; i--;){\n", 28);
sAppendN(&sbOut, "      pld[i] = 0.0;\n", 20);
sAppendN(&sbOut, "    }\n", 6);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  return ret;\n", 14);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "double _sign(unsigned int n, ...) {\n", 36);
sAppendN(&sbOut, "  va_list valist;\n", 18);
sAppendN(&sbOut, "  va_start(valist, n);\n", 23);
sAppendN(&sbOut, "  double s = 1;\n", 16);
sAppendN(&sbOut, "  for (unsigned int i = 0; i < n; i++) {\n", 41);
sAppendN(&sbOut, "    s = sign(va_arg(valist, double))*s;\n", 40);
sAppendN(&sbOut, "    if (s == 0){\n", 17);
sAppendN(&sbOut, "      break;\n", 13);
sAppendN(&sbOut, "    }\n", 6);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  va_end(valist);\n", 18);
sAppendN(&sbOut, "  return s;\n", 12);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "double _rxord(int _cSub, unsigned int n,  ...) {\n", 49);
sAppendN(&sbOut, "  rx_solving_options_ind* ind = &(_solveData->subjects[_cSub]);\n", 64);
sAppendN(&sbOut, "  if (!ind->inLhs) {\n", 21);
sAppendN(&sbOut, "    return 1.0;\n", 16);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  va_list valist;\n", 18);
sAppendN(&sbOut, "  va_start(valist, n);\n", 23);
sAppendN(&sbOut, "  double ret = 1.0;\n", 20);
sAppendN(&sbOut, "  double p = 0.0;\n", 18);
sAppendN(&sbOut, "  double u = rxunif(ind, 0.0, 1.0);\n", 36);
sAppendN(&sbOut, "  int found = 0;\n", 17);
sAppendN(&sbOut, "  for (unsigned int i = 0; i < n; i++) {\n", 41);
sAppendN(&sbOut, "    p += va_arg(valist, double);\n", 33);
sAppendN(&sbOut, "    if (!found) {\n", 18);
sAppendN(&sbOut, "      if (u < p) {\n", 19);
sAppendN(&sbOut, "        ret = (double)(i+1);\n", 29);
sAppendN(&sbOut, "        found = 1;\n", 19);
sAppendN(&sbOut, "      }\n", 8);
sAppendN(&sbOut, "    }\n", 6);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  if (!found) ret =(double)(n+1);\n", 34);
sAppendN(&sbOut, "  va_end(valist);\n", 18);
sAppendN(&sbOut, "  return ret;\n", 14);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "double _max(unsigned int n, ...) {\n", 35);
sAppendN(&sbOut, "  va_list valist;\n", 18);
sAppendN(&sbOut, "  va_start(valist, n);\n", 23);
sAppendN(&sbOut, "  double mx = NA_REAL;\n", 23);
sAppendN(&sbOut, "  double tmp = 0;\n", 18);
sAppendN(&sbOut, "  if (n >= 1){\n", 15);
sAppendN(&sbOut, "    mx = va_arg(valist, double);\n", 33);
sAppendN(&sbOut, "    for (unsigned int i = 1; i < n; i++) {\n", 43);
sAppendN(&sbOut, "      tmp = va_arg(valist, double);\n", 36);
sAppendN(&sbOut, "      if (tmp>mx) mx=tmp;\n", 26);
sAppendN(&sbOut, "    }\n", 6);
sAppendN(&sbOut, "    va_end(valist);\n", 20);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  return mx;\n", 13);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "double _min(unsigned int n, ...){\n", 34);
sAppendN(&sbOut, "  va_list valist;\n", 18);
sAppendN(&sbOut, "  va_start(valist, n);\n", 23);
sAppendN(&sbOut, "  double mn = NA_REAL;\n", 23);
sAppendN(&sbOut, "  double tmp = 0;\n", 18);
sAppendN(&sbOut, "  if (n >= 1){\n", 15);
sAppendN(&sbOut, "    mn = va_arg(valist, double);\n", 33);
sAppendN(&sbOut, "    for (unsigned int i = 1; i < n; i++){\n", 42);
sAppendN(&sbOut, "      tmp = va_arg(valist, double);\n", 36);
sAppendN(&sbOut, "      if (tmp<mn) mn=tmp;\n", 26);
sAppendN(&sbOut, "    }\n", 6);
sAppendN(&sbOut, "    va_end(valist);\n", 20);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  return mn;\n", 13);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "double _transit4P(int cmt, double t, unsigned int id, double n, double mtt, double bio){\n", 89);
sAppendN(&sbOut, "  double nd = (double) n;\n", 26);
sAppendN(&sbOut, "  double ktr = (nd+1)/mtt;\n", 27);
sAppendN(&sbOut, "  double lktr = _safe_log(nd+1)-_safe_log(mtt);\n", 48);
sAppendN(&sbOut, "  double tlast = _solveData->subjects[id].tlastS[cmt];\n", 55);
sAppendN(&sbOut, "  double dose = _solveData->subjects[id].curDoseS[cmt];\n", 56);
sAppendN(&sbOut, "  if (ISNA(dose)) dose = 0.0;\n", 30);
sAppendN(&sbOut, "  if (ISNA(tlast)) tlast = 0.0;\n", 32);
sAppendN(&sbOut, "  double tad = (t-tlast);\n", 26);
sAppendN(&sbOut, "  return exp(_safe_log(bio*dose)+lktr+n*(lktr+_safe_log(tad))-ktr*(tad)-lgamma1p(nd));\n", 87);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "double _transit3P(int cmt, double t, unsigned int id, double n, double mtt){\n", 77);
sAppendN(&sbOut, "  double nd = (double) n;\n", 26);
sAppendN(&sbOut, "  double ktr = (nd+1)/mtt;\n", 27);
sAppendN(&sbOut, "  double lktr = _safe_log(nd+1)-_safe_log(mtt);\n", 48);
sAppendN(&sbOut, "  double tlast = _solveData->subjects[id].tlastS[cmt];\n", 55);
sAppendN(&sbOut, "  if (ISNA(tlast)) tlast = 0.0;\n", 32);
sAppendN(&sbOut, "  double tad = t-tlast;\n", 24);
sAppendN(&sbOut, "  double podo = _solveData->subjects[id].curDoseS[cmt];\n", 56);
sAppendN(&sbOut, "  if (ISNA(podo)) podo = 0.0;\n", 30);
sAppendN(&sbOut, "  return exp(_safe_log(podo)+lktr+n*(lktr+_safe_log(tad))-ktr*(tad)-lgamma1p(nd));\n", 83);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "void _assignFuns0(void) {\n", 26);
sAppendN(&sbOut, "  _evalUdf = (_udf_type) R_GetCCallable(\"rxode2\", \"_rxode2_evalUdf\");\n", 70);
sAppendN(&sbOut, "  _getRxSolve_ = (_getRxSolve_t) R_GetCCallable(\"rxode2\",\"getRxSolve_\");\n", 73);
sAppendN(&sbOut, "  _assign_ptr=(rxode2_assign_ptr) R_GetCCallable(\"rxode2\",\"rxode2_assign_fn_pointers\");\n", 88);
sAppendN(&sbOut, "  _rxRmModelLib=(_rxRmModelLibType) R_GetCCallable(\"rxode2\",\"rxRmModelLib\");\n", 77);
sAppendN(&sbOut, "  _rxGetModelLib=(_rxGetModelLibType) R_GetCCallable(\"rxode2\",\"rxGetModelLib\");\n", 80);
sAppendN(&sbOut, "  _rxode2_rxAssignPtr=(_rx_asgn)R_GetCCallable(\"rxode2\",\"_rxode2_rxAssignPtr\");\n", 80);
sAppendN(&sbOut, "  _rxQr=(_rx_asgn)R_GetCCallable(\"rxode2\",\"_rxode2_rxQr\");\n", 59);
sAppendN(&sbOut, "  _rxIsCurrentC = (_rxIsCurrentC_type)R_GetCCallable(\"rxode2\",\"rxIsCurrentC\");\n", 79);
sAppendN(&sbOut, "  _sumPS  = (_rxSumType) R_GetCCallable(\"PreciseSums\",\"PreciseSums_sum_r\");\n", 76);
sAppendN(&sbOut, "  _prodPS = (_rxProdType) R_GetCCallable(\"PreciseSums\",\"PreciseSums_prod_r\");\n", 78);
sAppendN(&sbOut, "  _prodType=(rxode2_fn0i)R_GetCCallable(\"PreciseSums\", \"PreciseSums_prod_get\");\n", 80);
sAppendN(&sbOut, "  _sumType=(rxode2_fn0i)R_GetCCallable(\"PreciseSums\", \"PreciseSums_sum_get\");\n", 78);
sAppendN(&sbOut, "  _ptrid=(rxode2_fn0i)R_GetCCallable(\"rxode2\", \"rxode2_current_fn_pointer_id\");\n", 80);
sAppendN(&sbOut, "  _compareFactorVal=(rxode2_compareFactorVal_fn) R_GetCCallable(\"rxode2\", \"compareFactorVal\");\n", 95);
sAppendN(&sbOut, "  _update_par_ptr = (_update_par_ptr_p) R_GetCCallable(\"rxode2\",\"_update_par_ptr\");\n", 84);
sAppendN(&sbOut, "  _getParCov = (_getParCov_p) R_GetCCallable(\"rxode2\",\"_getParCov\");\n", 69);
sAppendN(&sbOut, "  // dynamic start\n", 19);
}
void writeBody2(void) {
sAppendN(&sbOut, "  // dynamic stop\n", 18);
sAppendN(&sbOut, "  _solveData = _getRxSolve_();\n", 31);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "void _assignFuns(void) {\n", 25);
sAppendN(&sbOut, "  if (_assign_ptr == NULL){\n", 28);
sAppendN(&sbOut, "    _assignFuns0();\n", 20);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "void __assignFuns2(rx_solve rx,\n", 32);
sAppendN(&sbOut, "                   rx_solving_options op,\n", 42);
sAppendN(&sbOut, "                   t_F f,\n", 26);
sAppendN(&sbOut, "                   t_LAG lag,\n", 30);
sAppendN(&sbOut, "                   t_RATE rate,\n", 32);
sAppendN(&sbOut, "                   t_DUR dur,\n", 30);
sAppendN(&sbOut, "                   t_calc_mtime mtime,\n", 39);
sAppendN(&sbOut, "                   t_ME me,\n", 28);
sAppendN(&sbOut, "                   t_IndF indf,\n", 32);
sAppendN(&sbOut, "                   t_getTime gettime,\n", 38);
sAppendN(&sbOut, "                   t_locateTimeIndex timeindex,\n", 48);
sAppendN(&sbOut, "                   t_handle_evidL handleEvid,\n", 46);
sAppendN(&sbOut, "                   t_getDur getdur) {\n", 38);
sAppendN(&sbOut, "  // assign start\n", 18);
}
void writeBody3(void) {
sAppendN(&sbOut, "  // assign stop\n", 17);
sAppendN(&sbOut, "}\n", 2);
}
void writeFooter(void) {
sAppendN(&sbOut, "#undef _getRxSolve_\n", 20);
sAppendN(&sbOut, "#undef _evalUdf\n", 16);
sAppendN(&sbOut, "#undef _solveData\n", 18);
sAppendN(&sbOut, "#undef _assign_ptr\n", 19);
sAppendN(&sbOut, "#undef _rxRmModelLib\n", 21);
sAppendN(&sbOut, "#undef _rxGetModelLib\n", 22);
sAppendN(&sbOut, "#undef _old_c\n", 14);
sAppendN(&sbOut, "#undef _ptrid\n", 14);
sAppendN(&sbOut, "#undef _rxIsCurrentC\n", 21);
sAppendN(&sbOut, "#undef _sumPS\n", 14);
sAppendN(&sbOut, "#undef _prodPS\n", 15);
sAppendN(&sbOut, "#undef _prodType\n", 17);
sAppendN(&sbOut, "#undef _sumType\n", 16);
sAppendN(&sbOut, "#undef _update_par_ptr\n", 23);
sAppendN(&sbOut, "#undef _getParCov\n", 18);
sAppendN(&sbOut, "#undef _rxode2_rxAssignPtr\n", 27);
sAppendN(&sbOut, "#undef _rxQr\n", 13);
sAppendN(&sbOut, "#undef _compareFactorVal\n", 25);
sAppendN(&sbOut, "#undef _sum\n", 12);
sAppendN(&sbOut, "#undef _udf\n", 12);
sAppendN(&sbOut, "#undef _sign\n", 13);
sAppendN(&sbOut, "#undef _prod\n", 13);
sAppendN(&sbOut, "#undef _max\n", 12);
sAppendN(&sbOut, "#undef _min\n", 12);
sAppendN(&sbOut, "#undef _transit4P\n", 18);
sAppendN(&sbOut, "#undef _transit3P\n", 18);
sAppendN(&sbOut, "#undef _assignFuns0\n", 20);
sAppendN(&sbOut, "#undef _assignFuns\n", 19);
sAppendN(&sbOut, "#undef _rxord\n", 14);
sAppendN(&sbOut, "#undef __assignFuns2\n", 21);
}
