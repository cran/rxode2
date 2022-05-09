#include <time.h>
#include <stdlib.h>
unsigned long int __timeId=0;
void writeHeader(const char *md5, const char *extra) {
sAppend(&sbOut, "#define _getRxSolve_ _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define simeps _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define simeta _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _solveData _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _assign_ptr _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _rxRmModelLib _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _rxGetModelLib _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _old_c _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _ptrid _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _rxIsCurrentC _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _sumPS _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _prodPS _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _prodType _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _sumType _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _update_par_ptr _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _getParCov _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define linCmtA _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define linCmtC _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define linCmtB _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _rxode2_rxAssignPtr _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _rxQr _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define phi _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define logit _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define expit _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define gammap _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define gammaq _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define lowergamma _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define uppergamma _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define gammapInv _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define gammapDer _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define gammapInva _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define gammaqInv _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define gammaqInva _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxnorm _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxnormV _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxbinom _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxcauchy _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxchisq _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxexp _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxf _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxgeom _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxgamma _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxbeta _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxpois _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxt_ _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxunif _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rxweibull _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rinorm _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rinormV _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define ribinom _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define ricauchy _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define richisq _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define riexp _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rif _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rigeom _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rigamma _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define ribeta _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define ripois _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define rit_ _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define riunif _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define riweibull _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _compareFactorVal _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _sum _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _sign _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _prod _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _max _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _min _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _transit4P _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _transit3P _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _assignFuns0 _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _assignFuns _rx%s%s%ld\n", extra, md5, __timeId++);
sAppend(&sbOut, "#define _rxord _rx%s%s%ld\n", extra, md5, __timeId++);
}
void writeBody() {
sAppendN(&sbOut, "_getRxSolve_t _getRxSolve_;\n", 28);
sAppendN(&sbOut, "_simfun simeps;\n", 16);
sAppendN(&sbOut, "_simfun simeta;\n", 16);
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
sAppendN(&sbOut, "linCmtA_p linCmtC;\n", 19);
sAppendN(&sbOut, "linCmtB_p linCmtB;\n", 19);
sAppendN(&sbOut, "_rx_asgn _rxode2_rxAssignPtr=NULL;\n", 35);
sAppendN(&sbOut, "_rx_asgn _rxQr=NULL;\n", 21);
sAppendN(&sbOut, "rxode2_fn phi;\n", 15);
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
sAppendN(&sbOut, "rxode2i_fn2 rxnormV;\n", 21);
sAppendN(&sbOut, "rxode2i_rxbinom rxbinom;\n", 25);
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
sAppendN(&sbOut, "rxode2i2_fn2 rinormV;\n", 22);
sAppendN(&sbOut, "rxode2i2_ribinom ribinom;\n", 26);
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
sAppendN(&sbOut, "rxode2_compareFactorVal_fn _compareFactorVal;\n", 46);
sAppendN(&sbOut, "double _prod(double *input, double *p, int type, int n, ...){\n", 62);
sAppendN(&sbOut, "  va_list valist;\n", 18);
sAppendN(&sbOut, "  va_start(valist, n);\n", 23);
sAppendN(&sbOut, "  for (unsigned int i = 0; i < n; i++){\n", 40);
sAppendN(&sbOut, "    input[i] = va_arg(valist, double);\n", 39);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  va_end(valist);\n", 18);
sAppendN(&sbOut, "  return _prodPS(input, p, n, type);\n", 37);
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
sAppendN(&sbOut, "  va_list valist;\n", 18);
sAppendN(&sbOut, "  va_start(valist, n);\n", 23);
sAppendN(&sbOut, "  double ret = 0.0;\n", 20);
sAppendN(&sbOut, "  double p = 0.0;\n", 18);
sAppendN(&sbOut, "  double u = rxunif(&_solveData->subjects[_cSub], 0.0, 1.0);\n", 61);
sAppendN(&sbOut, "  for (unsigned int i = 0; i < n; i++) {\n", 41);
sAppendN(&sbOut, "    p += va_arg(valist, double);\n", 33);
sAppendN(&sbOut, "    if (ret < 1e-6) {\n", 22);
sAppendN(&sbOut, "      if (u < p) {\n", 19);
sAppendN(&sbOut, "        ret = (double)(i+1);\n", 29);
sAppendN(&sbOut, "      }\n", 8);
sAppendN(&sbOut, "    }\n", 6);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "  if (p >= 1) ret = NA_REAL;\n", 29);
sAppendN(&sbOut, "  else if (ret < 1e-6) ret = (double)(n+1);\n", 44);
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
sAppendN(&sbOut, "  if (ISNA(tlast)) tlast = 0.0;\n", 32);
sAppendN(&sbOut, "  double tad = (t-tlast);\n", 26);
sAppendN(&sbOut, "  return exp(_safe_log(bio*(_solveData->subjects[id].curDoseS[cmt]))+lktr+n*(lktr+_safe_log(tad))-ktr*(tad)-lgamma1p(nd));\n", 123);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "double _transit3P(int cmt, double t, unsigned int id, double n, double mtt){\n", 77);
sAppendN(&sbOut, "  double nd = (double) n;\n", 26);
sAppendN(&sbOut, "  double ktr = (nd+1)/mtt;\n", 27);
sAppendN(&sbOut, "  double lktr = _safe_log(nd+1)-_safe_log(mtt);\n", 48);
sAppendN(&sbOut, "  double tlast = _solveData->subjects[id].tlastS[cmt];\n", 55);
sAppendN(&sbOut, "  if (ISNA(tlast)) tlast = 0.0;\n", 32);
sAppendN(&sbOut, "  double tad = t-tlast;\n", 24);
sAppendN(&sbOut, "  double podo = _solveData->subjects[id].curDoseS[cmt];\n", 56);
sAppendN(&sbOut, "  return exp(_safe_log(podo)+lktr+n*(lktr+_safe_log(tad))-ktr*(tad)-lgamma1p(nd));\n", 83);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "void _assignFuns0() {\n", 22);
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
sAppendN(&sbOut, "  linCmtA=(linCmtA_p)R_GetCCallable(\"rxode2\", \"linCmtA\");\n", 58);
sAppendN(&sbOut, "  linCmtB=(linCmtB_p)R_GetCCallable(\"rxode2\", \"linCmtB\");\n", 58);
sAppendN(&sbOut, "  linCmtC=(linCmtA_p)R_GetCCallable(\"rxode2\", \"linCmtC\");\n", 58);
sAppendN(&sbOut, "    \n", 5);
sAppendN(&sbOut, "  rxnorm = (rxode2i_fn2)R_GetCCallable(\"rxode2\", \"rxnorm\");\n", 60);
sAppendN(&sbOut, "  rxnormV = (rxode2i_fn2)R_GetCCallable(\"rxode2\", \"rxnormV\");\n", 62);
sAppendN(&sbOut, "  rxbinom = (rxode2i_rxbinom)R_GetCCallable(\"rxode2\",\"rxbinom\") ;\n", 66);
sAppendN(&sbOut, "  rxcauchy = (rxode2i_fn2)R_GetCCallable(\"rxode2\",\"rxcauchy\") ;\n", 64);
sAppendN(&sbOut, "  rxchisq = (rxode2i_fn)R_GetCCallable(\"rxode2\",\"rxchisq\") ;\n", 61);
sAppendN(&sbOut, "  rxexp = (rxode2i_fn)R_GetCCallable(\"rxode2\",\"rxexp\");\n", 56);
sAppendN(&sbOut, "  rxf = (rxode2i_fn2)R_GetCCallable(\"rxode2\",\"rxf\") ;\n", 54);
sAppendN(&sbOut, "  rxgeom = (rxode2i_ifn)R_GetCCallable(\"rxode2\",\"rxgeom\") ;\n", 60);
sAppendN(&sbOut, "  rxgamma = (rxode2i_fn2)R_GetCCallable(\"rxode2\",\"rxgamma\") ;\n", 62);
sAppendN(&sbOut, "  rxbeta = (rxode2i_fn2)R_GetCCallable(\"rxode2\",\"rxbeta\") ;\n", 60);
sAppendN(&sbOut, "  rxpois = (rxode2i_ifn)R_GetCCallable(\"rxode2\",\"rxpois\") ;\n", 60);
sAppendN(&sbOut, "  rxt_ = (rxode2i_fn)R_GetCCallable(\"rxode2\",\"rxt_\") ;\n", 55);
sAppendN(&sbOut, "  rxunif = (rxode2i_fn2)R_GetCCallable(\"rxode2\",\"rxunif\") ;\n", 60);
sAppendN(&sbOut, "  rxweibull = (rxode2i_fn2)R_GetCCallable(\"rxode2\",\"rxweibull\");\n", 65);
sAppendN(&sbOut, "  rinorm = (rxode2i2_fn2)R_GetCCallable(\"rxode2\", \"rinorm\");\n", 61);
sAppendN(&sbOut, "  rinormV = (rxode2i2_fn2)R_GetCCallable(\"rxode2\", \"rinormV\");\n", 63);
sAppendN(&sbOut, "  ribinom = (rxode2i2_ribinom)R_GetCCallable(\"rxode2\",\"ribinom\") ;\n", 67);
sAppendN(&sbOut, "  ricauchy = (rxode2i2_fn2)R_GetCCallable(\"rxode2\",\"ricauchy\") ;\n", 65);
sAppendN(&sbOut, "  richisq = (rxode2i2_fn)R_GetCCallable(\"rxode2\",\"richisq\") ;\n", 62);
sAppendN(&sbOut, "  riexp = (rxode2i2_fn)R_GetCCallable(\"rxode2\",\"riexp\");\n", 57);
sAppendN(&sbOut, "  rif = (rxode2i2_fn2)R_GetCCallable(\"rxode2\",\"rif\") ;\n", 55);
sAppendN(&sbOut, "  rigeom = (rxode2i2_ifn)R_GetCCallable(\"rxode2\",\"rigeom\") ;\n", 61);
sAppendN(&sbOut, "  rigamma = (rxode2i2_fn2)R_GetCCallable(\"rxode2\",\"rigamma\") ;\n", 63);
sAppendN(&sbOut, "  ribeta = (rxode2i2_fn2)R_GetCCallable(\"rxode2\",\"ribeta\") ;\n", 61);
sAppendN(&sbOut, "  ripois = (rxode2i2_ifn)R_GetCCallable(\"rxode2\",\"ripois\") ;\n", 61);
sAppendN(&sbOut, "  rit_ = (rxode2i2_fn)R_GetCCallable(\"rxode2\",\"rit_\") ;\n", 56);
sAppendN(&sbOut, "  riunif = (rxode2i2_fn2)R_GetCCallable(\"rxode2\",\"riunif\") ;\n", 61);
sAppendN(&sbOut, "  riweibull = (rxode2i2_fn2)R_GetCCallable(\"rxode2\",\"riweibull\");\n", 66);
sAppendN(&sbOut, "    \n", 5);
sAppendN(&sbOut, "  phi = (rxode2_fn)R_GetCCallable(\"rxode2\",\"phi\");\n", 51);
sAppendN(&sbOut, "  gammap = (rxode2_fn2) R_GetCCallable(\"rxode2\",\"gammap\");\n", 59);
sAppendN(&sbOut, "  gammaq = (rxode2_fn2) R_GetCCallable(\"rxode2\",\"gammaq\");\n", 59);
sAppendN(&sbOut, "  gammapInv = (rxode2_fn2) R_GetCCallable(\"rxode2\",\"gammapInv\");\n", 65);
sAppendN(&sbOut, "  gammapInva = (rxode2_fn2) R_GetCCallable(\"rxode2\",\"gammapInva\");\n", 67);
sAppendN(&sbOut, "  gammaqInv = (rxode2_fn2) R_GetCCallable(\"rxode2\",\"gammaqInv\");\n", 65);
sAppendN(&sbOut, "  gammaqInva = (rxode2_fn2) R_GetCCallable(\"rxode2\",\"gammaqInva\");\n", 67);
sAppendN(&sbOut, "  uppergamma = (rxode2_fn2) R_GetCCallable(\"rxode2\",\"uppergamma\");\n", 67);
sAppendN(&sbOut, "  lowergamma = (rxode2_fn2) R_GetCCallable(\"rxode2\",\"lowergamma\");\n", 67);
sAppendN(&sbOut, "  gammapDer  = (rxode2_fn2) R_GetCCallable(\"rxode2\",\"gammapDer\");\n", 66);
sAppendN(&sbOut, "  logit = (rxode2_fn3) R_GetCCallable(\"rxode2\", \"logit\");\n", 58);
sAppendN(&sbOut, "  expit = (rxode2_fn3) R_GetCCallable(\"rxode2\", \"expit\");\n", 58);
sAppendN(&sbOut, "  simeta =(_simfun) R_GetCCallable(\"rxode2\", \"simeta\");\n", 56);
sAppendN(&sbOut, "  simeps =(_simfun) R_GetCCallable(\"rxode2\", \"simeps\");\n", 56);
sAppendN(&sbOut, "  _compareFactorVal=(rxode2_compareFactorVal_fn) R_GetCCallable(\"rxode2\", \"compareFactorVal\");\n", 95);
sAppendN(&sbOut, "  _update_par_ptr = (_update_par_ptr_p) R_GetCCallable(\"rxode2\",\"_update_par_ptr\");\n", 84);
sAppendN(&sbOut, "  _getParCov = (_getParCov_p) R_GetCCallable(\"rxode2\",\"_getParCov\");\n", 69);
sAppendN(&sbOut, "  _solveData = _getRxSolve_();\n", 31);
sAppendN(&sbOut, "}\n", 2);
sAppendN(&sbOut, "void _assignFuns() {\n", 21);
sAppendN(&sbOut, "  if (_assign_ptr == NULL){\n", 28);
sAppendN(&sbOut, "    _assignFuns0();\n", 20);
sAppendN(&sbOut, "  }\n", 4);
sAppendN(&sbOut, "}\n", 2);
}
void writeFooter() {
sAppendN(&sbOut, "#undef _getRxSolve_\n", 20);
sAppendN(&sbOut, "#undef simeps\n", 14);
sAppendN(&sbOut, "#undef simeta\n", 14);
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
sAppendN(&sbOut, "#undef linCmtA\n", 15);
sAppendN(&sbOut, "#undef linCmtC\n", 15);
sAppendN(&sbOut, "#undef linCmtB\n", 15);
sAppendN(&sbOut, "#undef _rxode2_rxAssignPtr\n", 27);
sAppendN(&sbOut, "#undef _rxQr\n", 13);
sAppendN(&sbOut, "#undef phi\n", 11);
sAppendN(&sbOut, "#undef logit\n", 13);
sAppendN(&sbOut, "#undef expit\n", 13);
sAppendN(&sbOut, "#undef gammap\n", 14);
sAppendN(&sbOut, "#undef gammaq\n", 14);
sAppendN(&sbOut, "#undef lowergamma\n", 18);
sAppendN(&sbOut, "#undef uppergamma\n", 18);
sAppendN(&sbOut, "#undef gammapInv\n", 17);
sAppendN(&sbOut, "#undef gammapDer\n", 17);
sAppendN(&sbOut, "#undef gammapInva\n", 18);
sAppendN(&sbOut, "#undef gammaqInv\n", 17);
sAppendN(&sbOut, "#undef gammaqInva\n", 18);
sAppendN(&sbOut, "#undef rxnorm\n", 14);
sAppendN(&sbOut, "#undef rxnormV\n", 15);
sAppendN(&sbOut, "#undef rxbinom\n", 15);
sAppendN(&sbOut, "#undef rxcauchy\n", 16);
sAppendN(&sbOut, "#undef rxchisq\n", 15);
sAppendN(&sbOut, "#undef rxexp\n", 13);
sAppendN(&sbOut, "#undef rxf\n", 11);
sAppendN(&sbOut, "#undef rxgeom\n", 14);
sAppendN(&sbOut, "#undef rxgamma\n", 15);
sAppendN(&sbOut, "#undef rxbeta\n", 14);
sAppendN(&sbOut, "#undef rxpois\n", 14);
sAppendN(&sbOut, "#undef rxt_\n", 12);
sAppendN(&sbOut, "#undef rxunif\n", 14);
sAppendN(&sbOut, "#undef rxweibull\n", 17);
sAppendN(&sbOut, "#undef rinorm\n", 14);
sAppendN(&sbOut, "#undef rinormV\n", 15);
sAppendN(&sbOut, "#undef ribinom\n", 15);
sAppendN(&sbOut, "#undef ricauchy\n", 16);
sAppendN(&sbOut, "#undef richisq\n", 15);
sAppendN(&sbOut, "#undef riexp\n", 13);
sAppendN(&sbOut, "#undef rif\n", 11);
sAppendN(&sbOut, "#undef rigeom\n", 14);
sAppendN(&sbOut, "#undef rigamma\n", 15);
sAppendN(&sbOut, "#undef ribeta\n", 14);
sAppendN(&sbOut, "#undef ripois\n", 14);
sAppendN(&sbOut, "#undef rit_\n", 12);
sAppendN(&sbOut, "#undef riunif\n", 14);
sAppendN(&sbOut, "#undef riweibull\n", 17);
sAppendN(&sbOut, "#undef _compareFactorVal\n", 25);
sAppendN(&sbOut, "#undef _sum\n", 12);
sAppendN(&sbOut, "#undef _sign\n", 13);
sAppendN(&sbOut, "#undef _prod\n", 13);
sAppendN(&sbOut, "#undef _max\n", 12);
sAppendN(&sbOut, "#undef _min\n", 12);
sAppendN(&sbOut, "#undef _transit4P\n", 18);
sAppendN(&sbOut, "#undef _transit3P\n", 18);
sAppendN(&sbOut, "#undef _assignFuns0\n", 20);
sAppendN(&sbOut, "#undef _assignFuns\n", 19);
sAppendN(&sbOut, "#undef _rxord\n", 14);
}
