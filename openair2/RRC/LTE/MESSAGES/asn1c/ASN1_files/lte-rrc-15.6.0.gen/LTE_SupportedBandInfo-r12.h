/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SupportedBandInfo_r12_H_
#define	_LTE_SupportedBandInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SupportedBandInfo_r12__support_r12 {
	LTE_SupportedBandInfo_r12__support_r12_supported	= 0
} e_LTE_SupportedBandInfo_r12__support_r12;

/* LTE_SupportedBandInfo-r12 */
typedef struct LTE_SupportedBandInfo_r12 {
	long	*support_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SupportedBandInfo_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_support_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SupportedBandInfo_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SupportedBandInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SupportedBandInfo_r12_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SupportedBandInfo_r12_H_ */
#include <asn_internal.h>
