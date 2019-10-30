/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef __SZ_DB_H__
#define __SZ_DB_H__

EXTERN S16 szProtIE_Cont_HovrReqdIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_HovrCmmdIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_HovrPrepFailIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_HovrRqstIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_HovrRqstAckgIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_HovrFailIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_HovrNtfyIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_PathSwRqstIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_PathSwRqstAckgIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_PathSwRqstFailIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_HovrCancelIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_HovrCancelAckgIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_E_RABSetupRqstIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_E_RABSetupRespIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_E_RABMdfyRqstIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_E_RABMdfyRespIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_E_RABRlsCmmdIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_E_RABRlsRespIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_E_RABRlsIndIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_InitCntxtSetupRqstIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_InitCntxtSetupRespIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_InitCntxtSetupFailIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_PagIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UECntxtRlsRqst_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UECntxtRlsCmmd_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UECntxtRlsComplete_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UECntxtModificationRqstIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UECntxtModificationRespIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UECntxtModificationFailIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UERadioCapbltyMatchRqstIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UERadioCapbltyMatchRespIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_DlnkNASTport_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_InitUEMsg_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UlnkNASTport_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_NASNonDlvryInd_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_ResetIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_ResetAckgIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_ErrIndIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_S1SetupRqstIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_S1SetupRespIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_S1SetupFailIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_ENBConfigUpdIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_ENBConfigUpdAckgIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_ENBConfigUpdFailIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_MMEConfigUpdIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_MMEConfigUpdAckgIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_MMEConfigUpdFailIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_DlnkS1cdma2000tunnelingIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UlnkS1cdma2000tunnelingIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UECapbltyInfoIndIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_ENBStatusTfrIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_MMEStatusTfrIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_TraceStartIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_TraceFailIndIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_DeactvTraceIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_CellTrafficTraceIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_LocRprtngCntrlIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_LocRprtngFailIndIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_LocReportIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_OverloadStartIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_OverloadStopIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_WriteReplaceWarningRqstIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_WriteReplaceWarningRespIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_ENBDirectInformTfrIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_MMEDirectInformTfrIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_ENBConfigTfrIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_MMEConfigTfrIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szPrivIE_Cont_PrivMsgIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_KillRqstIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_KillRespIEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_DlnkUEAssociatedLPPaTport_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UlnkUEAssociatedLPPaTport_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_DlnkNonUEAssociatedLPPaTport_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
EXTERN S16 szProtIE_Cont_UlnkNonUEAssociatedLPPaTport_IEsValidate ARGS((CmPAsnMsgCp *msgCp));
#endif
