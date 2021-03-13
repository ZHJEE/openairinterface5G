/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_ThresholdEUTRA_H_
#define	_LTE_ThresholdEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RSRP-Range.h"
#include "LTE_RSRQ-Range.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_ThresholdEUTRA_PR {
	LTE_ThresholdEUTRA_PR_NOTHING,	/* No components present */
	LTE_ThresholdEUTRA_PR_threshold_RSRP,
	LTE_ThresholdEUTRA_PR_threshold_RSRQ
} LTE_ThresholdEUTRA_PR;

/* LTE_ThresholdEUTRA */
typedef struct LTE_ThresholdEUTRA {
	LTE_ThresholdEUTRA_PR present;
	union LTE_ThresholdEUTRA_u {
		LTE_RSRP_Range_t	 threshold_RSRP;
		LTE_RSRQ_Range_t	 threshold_RSRQ;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ThresholdEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ThresholdEUTRA;
extern asn_CHOICE_specifics_t asn_SPC_LTE_ThresholdEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ThresholdEUTRA_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_ThresholdEUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_ThresholdEUTRA_H_ */
#include <asn_internal.h>
