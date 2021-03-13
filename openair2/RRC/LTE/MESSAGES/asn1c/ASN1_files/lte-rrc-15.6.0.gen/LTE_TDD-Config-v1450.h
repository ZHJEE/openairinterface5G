/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_TDD_Config_v1450_H_
#define	_LTE_TDD_Config_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_TDD_Config_v1450__specialSubframePatterns_v1450 {
	LTE_TDD_Config_v1450__specialSubframePatterns_v1450_ssp10_CRS_LessDwPTS	= 0
} e_LTE_TDD_Config_v1450__specialSubframePatterns_v1450;

/* LTE_TDD-Config-v1450 */
typedef struct LTE_TDD_Config_v1450 {
	long	 specialSubframePatterns_v1450;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_TDD_Config_v1450_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_specialSubframePatterns_v1450_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_TDD_Config_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_TDD_Config_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_TDD_Config_v1450_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_TDD_Config_v1450_H_ */
#include <asn_internal.h>
