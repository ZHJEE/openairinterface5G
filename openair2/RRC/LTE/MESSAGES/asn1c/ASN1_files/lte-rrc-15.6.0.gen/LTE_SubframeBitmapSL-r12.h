/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SubframeBitmapSL_r12_H_
#define	_LTE_SubframeBitmapSL_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SubframeBitmapSL_r12_PR {
	LTE_SubframeBitmapSL_r12_PR_NOTHING,	/* No components present */
	LTE_SubframeBitmapSL_r12_PR_bs4_r12,
	LTE_SubframeBitmapSL_r12_PR_bs8_r12,
	LTE_SubframeBitmapSL_r12_PR_bs12_r12,
	LTE_SubframeBitmapSL_r12_PR_bs16_r12,
	LTE_SubframeBitmapSL_r12_PR_bs30_r12,
	LTE_SubframeBitmapSL_r12_PR_bs40_r12,
	LTE_SubframeBitmapSL_r12_PR_bs42_r12
} LTE_SubframeBitmapSL_r12_PR;

/* LTE_SubframeBitmapSL-r12 */
typedef struct LTE_SubframeBitmapSL_r12 {
	LTE_SubframeBitmapSL_r12_PR present;
	union LTE_SubframeBitmapSL_r12_u {
		BIT_STRING_t	 bs4_r12;
		BIT_STRING_t	 bs8_r12;
		BIT_STRING_t	 bs12_r12;
		BIT_STRING_t	 bs16_r12;
		BIT_STRING_t	 bs30_r12;
		BIT_STRING_t	 bs40_r12;
		BIT_STRING_t	 bs42_r12;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SubframeBitmapSL_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SubframeBitmapSL_r12;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SubframeBitmapSL_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SubframeBitmapSL_r12_1[7];
extern asn_per_constraints_t asn_PER_type_LTE_SubframeBitmapSL_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SubframeBitmapSL_r12_H_ */
#include <asn_internal.h>
