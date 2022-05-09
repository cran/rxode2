#ifndef __RXDATA_H__
#define __RXDATA_H__

#if defined(__cplusplus)
extern "C" {
#endif

  double get_fkeep(int col, int id, rx_solving_options_ind *ind);
  SEXP get_fkeepn();
  void cliAlert(const char *format, ...);
  void setZeroMatrix(int which);
  double * getAol(int n, double atol);
  double * getRol(int n, double rtol);
  void gFree();
  double *rxGetErrs();
  int rxGetErrsNcol();
  int rxGetErrsNrow();
  void rxSolveFreeC();
  void sortIds(rx_solve* rx, int ini);
  void setupRxInd(rx_solving_options_ind* ind, int first);
  SEXP rxGetModelLib(const char *s);
  void rxRmModelLib(const char* s);
  void rxAssignPtrC(SEXP obj);
  SEXP rxModelVarsC(char *ptr);
  SEXP rxStateNames(char *ptr);
  SEXP rxLhsNames(char *ptr);
  SEXP rxParamNames(char *ptr);
  int rxIsCurrentC(SEXP obj);
  int Rcat(char *msg);
  int isRstudio();
  int isProgSupported();
  
#if defined(__cplusplus)
}
#endif
#endif // __RXDATA_H__
