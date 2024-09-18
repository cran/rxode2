#pragma once
#ifndef __rxode2_control_H__
#define __rxode2_control_H__
#include "rxode2parse_control.h"
#define Rxc_scale 0
#define Rxc_method 1
#define Rxc_atol 2
#define Rxc_rtol 3
#define Rxc_maxsteps 4
#define Rxc_hmin 5
#define Rxc_hmax 6
#define Rxc_hini 7
#define Rxc_maxordn 8
#define Rxc_maxords 9
#define Rxc_covsInterpolation 10
#define Rxc_addCov 11
#define Rxc_returnType 12
#define Rxc_sigma 13
#define Rxc_sigmaDf 14
#define Rxc_nCoresRV 15
#define Rxc_sigmaIsChol 16
#define Rxc_sigmaSeparation 17
#define Rxc_sigmaXform 18
#define Rxc_nDisplayProgress 19
#define Rxc_amountUnits 20
#define Rxc_timeUnits 21
#define Rxc_addDosing 22
#define Rxc_stateTrim 23
#define Rxc_updateObject 24
#define Rxc_omega 25
#define Rxc_omegaDf 26
#define Rxc_omegaIsChol 27
#define Rxc_omegaSeparation 28
#define Rxc_omegaXform 29
#define Rxc_nSub 30
#define Rxc_thetaMat 31
#define Rxc_thetaDf 32
#define Rxc_thetaIsChol 33
#define Rxc_nStud 34
#define Rxc_dfSub 35
#define Rxc_dfObs 36
#define Rxc_seed 37
#define Rxc_nsim 38
#define Rxc_minSS 39
#define Rxc_maxSS 40
#define Rxc_strictSS 41
#define Rxc_infSSstep 42
#define Rxc_istateReset 43
#define Rxc_subsetNonmem 44
#define Rxc_hmaxSd 45
#define Rxc_maxAtolRtolFactor 46
#define Rxc_from 47
#define Rxc_to 48
#define Rxc_by 49
#define Rxc_length_out 50
#define Rxc_iCov 51
#define Rxc_keep 52
#define Rxc_keepF 53
#define Rxc_drop 54
#define Rxc_warnDrop 55
#define Rxc_omegaLower 56
#define Rxc_omegaUpper 57
#define Rxc_sigmaLower 58
#define Rxc_sigmaUpper 59
#define Rxc_thetaLower 60
#define Rxc_thetaUpper 61
#define Rxc_indLinPhiM 62
#define Rxc_indLinPhiTol 63
#define Rxc_indLinMatExpType 64
#define Rxc_indLinMatExpOrder 65
#define Rxc_idFactor 66
#define Rxc_mxhnil 67
#define Rxc_hmxi 68
#define Rxc_warnIdSort 69
#define Rxc_ssAtol 70
#define Rxc_ssRtol 71
#define Rxc_safeZero 72
#define Rxc_sumType 73
#define Rxc_prodType 74
#define Rxc_sensType 75
#define Rxc_linDiff 76
#define Rxc_linDiffCentral 77
#define Rxc_resample 78
#define Rxc_resampleID 79
#define Rxc_maxwhile 80
#define Rxc_cores 81
#define Rxc_atolSens 82
#define Rxc_rtolSens 83
#define Rxc_ssAtolSens 84
#define Rxc_ssRtolSens 85
#define Rxc_simVariability 86
#define Rxc_nLlikAlloc 87
#define Rxc_useStdPow 88
#define Rxc_naTimeHandle 89
#define Rxc_addlKeepsCov 90
#define Rxc_addlDropSs 91
#define Rxc_ssAtDoseTime 92
#define Rxc_ss2cancelAllPending 93
#define Rxc_naInterpolation 94
#define Rxc_keepInterpolation 95
#define Rxc_safeLog 96
#define Rxc_safePow 97
#define Rxc__zeros 98
#endif // __rxode2_control_H__
