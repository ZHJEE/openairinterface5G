/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SL_PSSCH_TxConfig_r14_H_
#define	_LTE_SL_PSSCH_TxConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-TypeTxSync-r14.h"
#include <NativeEnumerated.h>
#include "LTE_SL-PSSCH-TxParameters-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14 {
	LTE_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph60	= 0,
	LTE_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph80	= 1,
	LTE_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph100	= 2,
	LTE_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph120	= 3,
	LTE_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph140	= 4,
	LTE_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph160	= 5,
	LTE_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph180	= 6,
	LTE_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph200	= 7
} e_LTE_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14;

/* Forward declarations */
struct LTE_SL_PSSCH_TxParameters_v1530;

/* LTE_SL-PSSCH-TxConfig-r14 */
typedef struct LTE_SL_PSSCH_TxConfig_r14 {
	LTE_SL_TypeTxSync_r14_t	*typeTxSync_r14;	/* OPTIONAL */
	long	 thresUE_Speed_r14;
	LTE_SL_PSSCH_TxParameters_r14_t	 parametersAboveThres_r14;
	LTE_SL_PSSCH_TxParameters_r14_t	 parametersBelowThres_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SL_PSSCH_TxConfig_r14__ext1 {
		struct LTE_SL_PSSCH_TxParameters_v1530	*parametersAboveThres_v1530;	/* OPTIONAL */
		struct LTE_SL_PSSCH_TxParameters_v1530	*parametersBelowThres_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_PSSCH_TxConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_thresUE_Speed_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_PSSCH_TxConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_PSSCH_TxConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_PSSCH_TxConfig_r14_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-PSSCH-TxParameters-v1530.h"

#endif	/* _LTE_SL_PSSCH_TxConfig_r14_H_ */
#include <asn_internal.h>
