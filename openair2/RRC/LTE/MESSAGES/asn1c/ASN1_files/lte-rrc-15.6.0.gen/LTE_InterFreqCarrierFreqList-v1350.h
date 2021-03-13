/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_InterFreqCarrierFreqList_v1350_H_
#define	_LTE_InterFreqCarrierFreqList_v1350_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_InterFreqCarrierFreqInfo_v1350;

/* LTE_InterFreqCarrierFreqList-v1350 */
typedef struct LTE_InterFreqCarrierFreqList_v1350 {
	A_SEQUENCE_OF(struct LTE_InterFreqCarrierFreqInfo_v1350) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_InterFreqCarrierFreqList_v1350_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_InterFreqCarrierFreqList_v1350;
extern asn_SET_OF_specifics_t asn_SPC_LTE_InterFreqCarrierFreqList_v1350_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_InterFreqCarrierFreqList_v1350_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_InterFreqCarrierFreqList_v1350_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_InterFreqCarrierFreqInfo-v1350.h"

#endif	/* _LTE_InterFreqCarrierFreqList_v1350_H_ */
#include <asn_internal.h>
