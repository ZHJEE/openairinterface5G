/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SystemInformationBlockType26_r15_H_
#define	_LTE_SystemInformationBlockType26_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType26_r15__slss_TxMultiFreq_r15 {
	LTE_SystemInformationBlockType26_r15__slss_TxMultiFreq_r15_true	= 0
} e_LTE_SystemInformationBlockType26_r15__slss_TxMultiFreq_r15;

/* Forward declarations */
struct LTE_SL_InterFreqInfoListV2X_r14;
struct LTE_SL_CBR_PPPP_TxConfigList_r15;
struct LTE_SL_V2X_PacketDuplicationConfig_r15;
struct LTE_SL_V2X_SyncFreqList_r15;
struct LTE_SL_V2X_FreqSelectionConfigList_r15;

/* LTE_SystemInformationBlockType26-r15 */
typedef struct LTE_SystemInformationBlockType26_r15 {
	struct LTE_SL_InterFreqInfoListV2X_r14	*v2x_InterFreqInfoList_r15;	/* OPTIONAL */
	struct LTE_SL_CBR_PPPP_TxConfigList_r15	*cbr_pssch_TxConfigList_r15;	/* OPTIONAL */
	struct LTE_SL_V2X_PacketDuplicationConfig_r15	*v2x_PacketDuplicationConfig_r15;	/* OPTIONAL */
	struct LTE_SL_V2X_SyncFreqList_r15	*syncFreqList_r15;	/* OPTIONAL */
	long	*slss_TxMultiFreq_r15;	/* OPTIONAL */
	struct LTE_SL_V2X_FreqSelectionConfigList_r15	*v2x_FreqSelectionConfigList_r15;	/* OPTIONAL */
	long	*threshS_RSSI_CBR_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType26_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_slss_TxMultiFreq_r15_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType26_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType26_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType26_r15_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-InterFreqInfoListV2X-r14.h"
#include "LTE_SL-CBR-PPPP-TxConfigList-r15.h"
#include "LTE_SL-V2X-PacketDuplicationConfig-r15.h"
#include "LTE_SL-V2X-SyncFreqList-r15.h"
#include "LTE_SL-V2X-FreqSelectionConfigList-r15.h"

#endif	/* _LTE_SystemInformationBlockType26_r15_H_ */
#include <asn_internal.h>
