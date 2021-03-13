/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_PUCCH_ConfigDedicated_v1530_H_
#define	_LTE_PUCCH_ConfigDedicated_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUCCH_ConfigDedicated_v1530__codebooksizeDeterminationSTTI_r15 {
	LTE_PUCCH_ConfigDedicated_v1530__codebooksizeDeterminationSTTI_r15_dai	= 0,
	LTE_PUCCH_ConfigDedicated_v1530__codebooksizeDeterminationSTTI_r15_cc	= 1
} e_LTE_PUCCH_ConfigDedicated_v1530__codebooksizeDeterminationSTTI_r15;

/* LTE_PUCCH-ConfigDedicated-v1530 */
typedef struct LTE_PUCCH_ConfigDedicated_v1530 {
	long	*n1PUCCH_AN_SPT_r15;	/* OPTIONAL */
	long	*codebooksizeDeterminationSTTI_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUCCH_ConfigDedicated_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_codebooksizeDeterminationSTTI_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUCCH_ConfigDedicated_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUCCH_ConfigDedicated_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUCCH_ConfigDedicated_v1530_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUCCH_ConfigDedicated_v1530_H_ */
#include <asn_internal.h>
