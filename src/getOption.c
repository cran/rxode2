#define USE_FC_LEN_T
#define STRICT_R_HEADERS
#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>
#include <Rmath.h>

int R_get_option(const char *option, int def) {
  SEXP s, t;
  int ret, pro=0;
  PROTECT(t = s = LCONS(R_NilValue, allocList(2)));pro++;
  SETCAR(t,  Rf_install("getOption")); t = CDR(t);
  SETCAR(t, Rf_mkString(option)); t = CDR(t);
  if (def){
    SETCAR(t, ScalarLogical(1));
  } else {
    SETCAR(t, ScalarLogical(0));
  }
  ret = INTEGER(eval(s,R_GlobalEnv))[0];
  UNPROTECT(pro);
  return ret;
}
