/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_RegisteredAMF_r15_H_
#define	_LTE_RegisteredAMF_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_AMF-Identifier-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PLMN_Identity;

/* LTE_RegisteredAMF-r15 */
typedef struct LTE_RegisteredAMF_r15 {
	struct LTE_PLMN_Identity	*plmn_Identity_r15;	/* OPTIONAL */
	LTE_AMF_Identifier_r15_t	 amf_Identifier_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RegisteredAMF_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RegisteredAMF_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RegisteredAMF_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RegisteredAMF_r15_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PLMN-Identity.h"

#endif	/* _LTE_RegisteredAMF_r15_H_ */
#include <asn_internal.h>
