/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SPDCCH_Config_r15_H_
#define	_LTE_SPDCCH_Config_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SPDCCH_Config_r15_PR {
	LTE_SPDCCH_Config_r15_PR_NOTHING,	/* No components present */
	LTE_SPDCCH_Config_r15_PR_release,
	LTE_SPDCCH_Config_r15_PR_setup
} LTE_SPDCCH_Config_r15_PR;
typedef enum LTE_SPDCCH_Config_r15__setup__spdcch_L1_ReuseIndication_r15 {
	LTE_SPDCCH_Config_r15__setup__spdcch_L1_ReuseIndication_r15_n0	= 0,
	LTE_SPDCCH_Config_r15__setup__spdcch_L1_ReuseIndication_r15_n1	= 1,
	LTE_SPDCCH_Config_r15__setup__spdcch_L1_ReuseIndication_r15_n2	= 2
} e_LTE_SPDCCH_Config_r15__setup__spdcch_L1_ReuseIndication_r15;

/* Forward declarations */
struct LTE_SPDCCH_Set_r15;

/* LTE_SPDCCH-Config-r15 */
typedef struct LTE_SPDCCH_Config_r15 {
	LTE_SPDCCH_Config_r15_PR present;
	union LTE_SPDCCH_Config_r15_u {
		NULL_t	 release;
		struct LTE_SPDCCH_Config_r15__setup {
			long	*spdcch_L1_ReuseIndication_r15;	/* OPTIONAL */
			struct LTE_SPDCCH_Set_r15	*spdcch_SetConfig_r15;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SPDCCH_Config_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_spdcch_L1_ReuseIndication_r15_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SPDCCH_Config_r15;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SPDCCH_Config_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SPDCCH_Config_r15_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SPDCCH_Config_r15_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SPDCCH-Set-r15.h"

#endif	/* _LTE_SPDCCH_Config_r15_H_ */
#include <asn_internal.h>
