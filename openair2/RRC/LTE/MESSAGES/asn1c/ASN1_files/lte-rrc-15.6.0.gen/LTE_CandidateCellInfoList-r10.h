/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_CandidateCellInfoList_r10_H_
#define	_LTE_CandidateCellInfoList_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CandidateCellInfo_r10;

/* LTE_CandidateCellInfoList-r10 */
typedef struct LTE_CandidateCellInfoList_r10 {
	A_SEQUENCE_OF(struct LTE_CandidateCellInfo_r10) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CandidateCellInfoList_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CandidateCellInfoList_r10;
extern asn_SET_OF_specifics_t asn_SPC_LTE_CandidateCellInfoList_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CandidateCellInfoList_r10_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_CandidateCellInfoList_r10_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CandidateCellInfo-r10.h"

#endif	/* _LTE_CandidateCellInfoList_r10_H_ */
#include <asn_internal.h>
