/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SystemInformationBlockType18_r12_H_
#define	_LTE_SystemInformationBlockType18_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "LTE_SL-CommRxPoolList-r12.h"
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType18_r12__ext1__commTxResourceUC_ReqAllowed_r13 {
	LTE_SystemInformationBlockType18_r12__ext1__commTxResourceUC_ReqAllowed_r13_true	= 0
} e_LTE_SystemInformationBlockType18_r12__ext1__commTxResourceUC_ReqAllowed_r13;
typedef enum LTE_SystemInformationBlockType18_r12__ext1__commTxAllowRelayCommon_r13 {
	LTE_SystemInformationBlockType18_r12__ext1__commTxAllowRelayCommon_r13_true	= 0
} e_LTE_SystemInformationBlockType18_r12__ext1__commTxAllowRelayCommon_r13;

/* Forward declarations */
struct LTE_SL_CommTxPoolList_r12;
struct LTE_SL_SyncConfigList_r12;
struct LTE_SL_CommTxPoolListExt_r13;

/* LTE_SystemInformationBlockType18-r12 */
typedef struct LTE_SystemInformationBlockType18_r12 {
	struct LTE_SystemInformationBlockType18_r12__commConfig_r12 {
		LTE_SL_CommRxPoolList_r12_t	 commRxPool_r12;
		struct LTE_SL_CommTxPoolList_r12	*commTxPoolNormalCommon_r12;	/* OPTIONAL */
		struct LTE_SL_CommTxPoolList_r12	*commTxPoolExceptional_r12;	/* OPTIONAL */
		struct LTE_SL_SyncConfigList_r12	*commSyncConfig_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *commConfig_r12;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SystemInformationBlockType18_r12__ext1 {
		struct LTE_SL_CommTxPoolListExt_r13	*commTxPoolNormalCommonExt_r13;	/* OPTIONAL */
		long	*commTxResourceUC_ReqAllowed_r13;	/* OPTIONAL */
		long	*commTxAllowRelayCommon_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType18_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_commTxResourceUC_ReqAllowed_r13_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_commTxAllowRelayCommon_r13_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType18_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType18_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType18_r12_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-CommTxPoolList-r12.h"
#include "LTE_SL-SyncConfigList-r12.h"
#include "LTE_SL-CommTxPoolListExt-r13.h"

#endif	/* _LTE_SystemInformationBlockType18_r12_H_ */
#include <asn_internal.h>
