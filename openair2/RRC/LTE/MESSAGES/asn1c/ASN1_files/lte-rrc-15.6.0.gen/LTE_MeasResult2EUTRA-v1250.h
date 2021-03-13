/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MeasResult2EUTRA_v1250_H_
#define	_LTE_MeasResult2EUTRA_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_RSRQ_Type_r12;

/* LTE_MeasResult2EUTRA-v1250 */
typedef struct LTE_MeasResult2EUTRA_v1250 {
	struct LTE_RSRQ_Type_r12	*rsrq_Type_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResult2EUTRA_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResult2EUTRA_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResult2EUTRA_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasResult2EUTRA_v1250_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RSRQ-Type-r12.h"

#endif	/* _LTE_MeasResult2EUTRA_v1250_H_ */
#include <asn_internal.h>
