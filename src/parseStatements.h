static inline int handleDvidStatement(nodeInfo ni, char *name, D_ParseNode *xpn, D_ParseNode *pn) {
  if (nodeHas(dvid_statementI)){
    if (tb.dvidn == 0){
      // dvid->cmt translation
      sb.o=0;sbDt.o=0; sbt.o=0;
      xpn = d_get_child(pn,2);
      char *v = (char*)rc_dup_str(xpn->start_loc.s, xpn->end);
      tb.dvid[0]=atoi(v);
      /* Free(v); */
      if (tb.dvid[0] == 0){
	updateSyntaxCol();
	trans_syntax_error_report_fn(ZERODVID);
      }
      sAppend(&sbt, "dvid(%d", tb.dvid[0]);
      xpn = d_get_child(pn,3);
      tb.dvidn = d_get_number_of_children(xpn)+1;
      D_ParseNode *xpn2;
      for (int i = 0; i < tb.dvidn-1; i++){
	xpn2 = d_get_child(xpn, i);
	v = (char*)rc_dup_str(xpn2->start_loc.s, xpn2->end);
	tb.dvid[i+1]=atoi(v+1);
	if (tb.dvid[i+1] == 0){
	  /* Free(v); */
	  updateSyntaxCol();
	  trans_syntax_error_report_fn(ZERODVID);
	}
	sAppend(&sbt, ",%d", tb.dvid[i+1]);
	/* Free(v); */
      }
      sAppend(&sbNrm, "%s);\n", sbt.s);
      addLine(&sbNrmL, "%s);\n", sbt.s);
      /* Free(v); */
      return 1;
    } else {
      updateSyntaxCol();
      trans_syntax_error_report_fn(ZERODVID);
    }
    return 1;
  }
  return 0;
}

static inline int handleRemainingAssignments(nodeInfo ni, char *name, int i, D_ParseNode *pn, D_ParseNode *xpn) {
  if (nodeHas(ini0f) && rx_syntax_allow_ini && i == 0){
    foundF0=1;
    aType(TF0);
    sb.o =0; sbDt.o=0; sbt.o = 0;
    char *v = (char*)rc_dup_str(xpn->start_loc.s, xpn->end);
    doDot2(&sb, &sbDt, v);
    sAppend(&sbt, "%s(0)",v);
  }

  if ((i==0 && (nodeHas(assignment) || nodeHas(ini) || nodeHas(ini0))) ||
      (i == 2 && nodeHas(mtime))){
    char *v = (char*)rc_dup_str(xpn->start_loc.s, xpn->end);
    int ret1 = handleRemainingAssignmentsCalcProps(ni, name, i, pn, xpn, v);
    if (nodeHas(ini0)){
      sbt.o=0;
      sAppend(&sbt,"%s(0)",v);
    } else if (nodeHas(mtime)){
      sbt.o=0;
      sAppend(&sbt, "mtime(%s)", v);
      needSort=1;
      aType(TMTIME);
      nmtime++;
    } else {
      sbt.o=0;
      sAppend(&sbt, "%s", v);
    }
    if (ret1) return 1;
  }
  return 0;
}

static inline int isLineAssignmentStatement(nodeInfo ni, char *name) {
  return nodeHas(assignment) || nodeHas(ini) || nodeHas(dfdy) ||
      nodeHas(ini0) || nodeHas(ini0f) || nodeHas(fbio) || nodeHas(alag) || nodeHas(rate) ||
    nodeHas(dur) || nodeHas(mtime);
}

static inline char * getLineAfterAssign(char *c) {
  while ((*c != '=') && (*c != '~')) {
    c++;
  }
  while ((*c == '=') || (*c == '~') || (*c == ' ')){
    c++;
  }
  return c;
}

static inline int isLineAssigmentProperty(nodeInfo ni, char *name, int *isDepot) {
  return (nodeHas(rate) || nodeHas(alag) || nodeHas(fbio) || nodeHas(dur)) &&
    ((*isDepot = (tb.depotN == tb.di[tb.curPropN])) ||
     (tb.centralN == tb.di[tb.curPropN]));
}

static inline int finalizeLineAssign(nodeInfo ni, char *name, D_ParseNode *pn) {
  if (isLineAssignmentStatement(ni, name)) {
    int isDepot;
    if (isLineAssigmentProperty(ni, name, &isDepot)) {
      char *c = getLineAfterAssign(sb.s);
      if (isDepot){
	curLineType(&depotLines, sbPm.lType[sbPm.n]);
	addLine(&depotLines, "%s", c);
      } else {
	curLineType(&centralLines, sbPm.lType[sbPm.n]);
	addLine(&centralLines, "%s", c);
      }
      /* RSprintf("c: %s, lType: %d\n", c, sbPm.lType[sbPm.n], isDepot); */
    } else {
      addLine(&sbNrmL, "%s;\n", sbt.s);
    }
    addLine(&sbPm,     "%s;\n", sb.s);
    addLine(&sbPmDt,   "%s;\n", sbDt.s);
    sAppend(&sbNrm, "%s;\n", sbt.s);
    ENDLINE;
    return 1;
  }
  return 0;
}

static inline int finalizeLinePower(nodeInfo ni, char *name) {
  if (nodeHas(power_expression)) {
    aAppendN(")", 1);
    return 1;
  }
  return 0;
}

static inline void finalizeLine(nodeInfo ni, char *name, D_ParseNode *pn, int isWhile, int i) {
  if (isWhile) {
    tb.nwhile--;
  }
  int tmp = finalizeLineAssign(ni, name, pn) ||
    finalizeLineMat(ni, name) ||
    finalizeLineDdt(ni, name) ||
    finalizeLineParam(ni, name) ||
    finalizeLineSelectionStatement(ni, name, isWhile) ||
    finalizeLinePower(ni, name);
  (void) tmp;
}
