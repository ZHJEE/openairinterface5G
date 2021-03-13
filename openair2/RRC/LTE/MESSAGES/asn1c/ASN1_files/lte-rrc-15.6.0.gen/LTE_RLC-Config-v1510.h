/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_RLC_Config_v1510_H_
#define	_LTE_RLC_Config_v1510_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RLC_Config_v1510__reestablishRLC_r15 {
	LTE_RLC_Config_v1510__reestablishRLC_r15_true	= 0
} e_LTE_RLC_Config_v1510__reestablishRLC_r15;

/* LTE_RLC-Config-v1510 */
typedef struct LTE_RLC_Config_v1510 {
	long	 reestablishRLC_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RLC_Config_v1510_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_reestablishRLC_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RLC_Config_v1510;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RLC_Config_v1510_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RLC_Config_v1510_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RLC_Config_v1510_H_ */
#include <asn_internal.h>
