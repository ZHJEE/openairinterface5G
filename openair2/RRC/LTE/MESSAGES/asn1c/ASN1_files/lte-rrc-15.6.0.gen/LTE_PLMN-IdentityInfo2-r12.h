/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_PLMN_IdentityInfo2_r12_H_
#define	_LTE_PLMN_IdentityInfo2_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_PLMN-Identity.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PLMN_IdentityInfo2_r12_PR {
	LTE_PLMN_IdentityInfo2_r12_PR_NOTHING,	/* No components present */
	LTE_PLMN_IdentityInfo2_r12_PR_plmn_Index_r12,
	LTE_PLMN_IdentityInfo2_r12_PR_plmnIdentity_r12
} LTE_PLMN_IdentityInfo2_r12_PR;

/* LTE_PLMN-IdentityInfo2-r12 */
typedef struct LTE_PLMN_IdentityInfo2_r12 {
	LTE_PLMN_IdentityInfo2_r12_PR present;
	union LTE_PLMN_IdentityInfo2_r12_u {
		long	 plmn_Index_r12;
		LTE_PLMN_Identity_t	 plmnIdentity_r12;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PLMN_IdentityInfo2_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PLMN_IdentityInfo2_r12;
extern asn_CHOICE_specifics_t asn_SPC_LTE_PLMN_IdentityInfo2_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PLMN_IdentityInfo2_r12_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_PLMN_IdentityInfo2_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PLMN_IdentityInfo2_r12_H_ */
#include <asn_internal.h>
