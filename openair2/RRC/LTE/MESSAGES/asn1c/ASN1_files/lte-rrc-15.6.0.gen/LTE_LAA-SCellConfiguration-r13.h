/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_LAA_SCellConfiguration_r13_H_
#define	_LTE_LAA_SCellConfiguration_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_LAA_SCellConfiguration_r13__subframeStartPosition_r13 {
	LTE_LAA_SCellConfiguration_r13__subframeStartPosition_r13_s0	= 0,
	LTE_LAA_SCellConfiguration_r13__subframeStartPosition_r13_s07	= 1
} e_LTE_LAA_SCellConfiguration_r13__subframeStartPosition_r13;

/* LTE_LAA-SCellConfiguration-r13 */
typedef struct LTE_LAA_SCellConfiguration_r13 {
	long	 subframeStartPosition_r13;
	BIT_STRING_t	 laa_SCellSubframeConfig_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_LAA_SCellConfiguration_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_subframeStartPosition_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_LAA_SCellConfiguration_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_LAA_SCellConfiguration_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_LAA_SCellConfiguration_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_LAA_SCellConfiguration_r13_H_ */
#include <asn_internal.h>
