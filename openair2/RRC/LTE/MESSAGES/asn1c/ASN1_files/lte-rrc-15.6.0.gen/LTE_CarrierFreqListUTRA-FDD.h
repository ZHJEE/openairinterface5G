/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_CarrierFreqListUTRA_FDD_H_
#define	_LTE_CarrierFreqListUTRA_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CarrierFreqUTRA_FDD;

/* LTE_CarrierFreqListUTRA-FDD */
typedef struct LTE_CarrierFreqListUTRA_FDD {
	A_SEQUENCE_OF(struct LTE_CarrierFreqUTRA_FDD) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CarrierFreqListUTRA_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CarrierFreqListUTRA_FDD;
extern asn_SET_OF_specifics_t asn_SPC_LTE_CarrierFreqListUTRA_FDD_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CarrierFreqListUTRA_FDD_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_CarrierFreqListUTRA_FDD_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CarrierFreqUTRA-FDD.h"

#endif	/* _LTE_CarrierFreqListUTRA_FDD_H_ */
#include <asn_internal.h>
