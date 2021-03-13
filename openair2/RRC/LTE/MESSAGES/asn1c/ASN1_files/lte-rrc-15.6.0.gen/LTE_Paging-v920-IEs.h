/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_Paging_v920_IEs_H_
#define	_LTE_Paging_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_Paging_v920_IEs__cmas_Indication_r9 {
	LTE_Paging_v920_IEs__cmas_Indication_r9_true	= 0
} e_LTE_Paging_v920_IEs__cmas_Indication_r9;

/* Forward declarations */
struct LTE_Paging_v1130_IEs;

/* LTE_Paging-v920-IEs */
typedef struct LTE_Paging_v920_IEs {
	long	*cmas_Indication_r9;	/* OPTIONAL */
	struct LTE_Paging_v1130_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_Paging_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cmas_Indication_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_Paging_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_Paging_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_Paging_v920_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_Paging-v1130-IEs.h"

#endif	/* _LTE_Paging_v920_IEs_H_ */
#include <asn_internal.h>
