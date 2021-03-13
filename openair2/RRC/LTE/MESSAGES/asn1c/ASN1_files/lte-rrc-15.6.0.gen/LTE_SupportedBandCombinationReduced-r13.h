/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SupportedBandCombinationReduced_r13_H_
#define	_LTE_SupportedBandCombinationReduced_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_BandCombinationParameters_r13;

/* LTE_SupportedBandCombinationReduced-r13 */
typedef struct LTE_SupportedBandCombinationReduced_r13 {
	A_SEQUENCE_OF(struct LTE_BandCombinationParameters_r13) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SupportedBandCombinationReduced_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SupportedBandCombinationReduced_r13;
extern asn_SET_OF_specifics_t asn_SPC_LTE_SupportedBandCombinationReduced_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SupportedBandCombinationReduced_r13_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_SupportedBandCombinationReduced_r13_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_BandCombinationParameters-r13.h"

#endif	/* _LTE_SupportedBandCombinationReduced_r13_H_ */
#include <asn_internal.h>
