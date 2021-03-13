/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_InterFreqCarrierFreqInfo_NB_r13_H_
#define	_LTE_InterFreqCarrierFreqInfo_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CarrierFreq-NB-r13.h"
#include "LTE_Q-RxLevMin.h"
#include "LTE_Q-QualMin-r9.h"
#include "LTE_P-Max.h"
#include "LTE_Q-OffsetRange.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__powerClass14dBm_Offset_r14 {
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__powerClass14dBm_Offset_r14_dB_6	= 0,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__powerClass14dBm_Offset_r14_dB_3	= 1,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__powerClass14dBm_Offset_r14_dB3	= 2,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__powerClass14dBm_Offset_r14_dB6	= 3,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__powerClass14dBm_Offset_r14_dB9	= 4,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__powerClass14dBm_Offset_r14_dB12	= 5
} e_LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__powerClass14dBm_Offset_r14;
typedef enum LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__ce_AuthorisationOffset_r14 {
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__ce_AuthorisationOffset_r14_dB5	= 0,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__ce_AuthorisationOffset_r14_dB10	= 1,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__ce_AuthorisationOffset_r14_dB15	= 2,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__ce_AuthorisationOffset_r14_dB20	= 3,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__ce_AuthorisationOffset_r14_dB25	= 4,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__ce_AuthorisationOffset_r14_dB30	= 5,
	LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__ce_AuthorisationOffset_r14_dB35	= 6
} e_LTE_InterFreqCarrierFreqInfo_NB_r13__ext2__ce_AuthorisationOffset_r14;

/* Forward declarations */
struct LTE_InterFreqNeighCellList_NB_r13;
struct LTE_InterFreqBlackCellList_NB_r13;
struct LTE_MultiBandInfoList_NB_r13;
struct LTE_NSSS_RRM_Config_NB_r15;
struct LTE_InterFreqNeighCellList_NB_v1530;
struct LTE_CarrierFreq_NB_v1550;

/* LTE_InterFreqCarrierFreqInfo-NB-r13 */
typedef struct LTE_InterFreqCarrierFreqInfo_NB_r13 {
	LTE_CarrierFreq_NB_r13_t	 dl_CarrierFreq_r13;
	LTE_Q_RxLevMin_t	 q_RxLevMin_r13;
	LTE_Q_QualMin_r9_t	*q_QualMin_r13;	/* OPTIONAL */
	LTE_P_Max_t	*p_Max_r13;	/* OPTIONAL */
	LTE_Q_OffsetRange_t	*q_OffsetFreq_r13;	/* DEFAULT 15 */
	struct LTE_InterFreqNeighCellList_NB_r13	*interFreqNeighCellList_r13;	/* OPTIONAL */
	struct LTE_InterFreqBlackCellList_NB_r13	*interFreqBlackCellList_r13;	/* OPTIONAL */
	struct LTE_MultiBandInfoList_NB_r13	*multiBandInfoList_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_InterFreqCarrierFreqInfo_NB_r13__ext1 {
		long	*delta_RxLevMin_v1350;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_InterFreqCarrierFreqInfo_NB_r13__ext2 {
		long	*powerClass14dBm_Offset_r14;	/* OPTIONAL */
		long	*ce_AuthorisationOffset_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_InterFreqCarrierFreqInfo_NB_r13__ext3 {
		struct LTE_NSSS_RRM_Config_NB_r15	*nsss_RRM_Config_r15;	/* OPTIONAL */
		struct LTE_InterFreqNeighCellList_NB_v1530	*interFreqNeighCellList_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_InterFreqCarrierFreqInfo_NB_r13__ext4 {
		struct LTE_CarrierFreq_NB_v1550	*dl_CarrierFreq_v1550;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_InterFreqCarrierFreqInfo_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_powerClass14dBm_Offset_r14_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ce_AuthorisationOffset_r14_21;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_InterFreqCarrierFreqInfo_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_InterFreqCarrierFreqInfo_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_InterFreqCarrierFreqInfo_NB_r13_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_InterFreqNeighCellList-NB-r13.h"
#include "LTE_InterFreqBlackCellList-NB-r13.h"
#include "LTE_MultiBandInfoList-NB-r13.h"
#include "LTE_NSSS-RRM-Config-NB-r15.h"
#include "LTE_InterFreqNeighCellList-NB-v1530.h"
#include "LTE_CarrierFreq-NB-v1550.h"

#endif	/* _LTE_InterFreqCarrierFreqInfo_NB_r13_H_ */
#include <asn_internal.h>
