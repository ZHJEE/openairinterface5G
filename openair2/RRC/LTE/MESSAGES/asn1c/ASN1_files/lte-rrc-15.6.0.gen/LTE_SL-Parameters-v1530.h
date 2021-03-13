/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SL_Parameters_v1530_H_
#define	_LTE_SL_Parameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_Parameters_v1530__slss_SupportedTxFreq_r15 {
	LTE_SL_Parameters_v1530__slss_SupportedTxFreq_r15_single	= 0,
	LTE_SL_Parameters_v1530__slss_SupportedTxFreq_r15_multiple	= 1
} e_LTE_SL_Parameters_v1530__slss_SupportedTxFreq_r15;
typedef enum LTE_SL_Parameters_v1530__sl_64QAM_Tx_r15 {
	LTE_SL_Parameters_v1530__sl_64QAM_Tx_r15_supported	= 0
} e_LTE_SL_Parameters_v1530__sl_64QAM_Tx_r15;
typedef enum LTE_SL_Parameters_v1530__sl_TxDiversity_r15 {
	LTE_SL_Parameters_v1530__sl_TxDiversity_r15_supported	= 0
} e_LTE_SL_Parameters_v1530__sl_TxDiversity_r15;

/* Forward declarations */
struct LTE_UE_CategorySL_r15;
struct LTE_V2X_SupportedBandCombination_v1530;

/* LTE_SL-Parameters-v1530 */
typedef struct LTE_SL_Parameters_v1530 {
	long	*slss_SupportedTxFreq_r15;	/* OPTIONAL */
	long	*sl_64QAM_Tx_r15;	/* OPTIONAL */
	long	*sl_TxDiversity_r15;	/* OPTIONAL */
	struct LTE_UE_CategorySL_r15	*ue_CategorySL_r15;	/* OPTIONAL */
	struct LTE_V2X_SupportedBandCombination_v1530	*v2x_SupportedBandCombinationList_v1530;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_Parameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_slss_SupportedTxFreq_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sl_64QAM_Tx_r15_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sl_TxDiversity_r15_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_Parameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_Parameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_Parameters_v1530_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_UE-CategorySL-r15.h"
#include "LTE_V2X-SupportedBandCombination-v1530.h"

#endif	/* _LTE_SL_Parameters_v1530_H_ */
#include <asn_internal.h>
