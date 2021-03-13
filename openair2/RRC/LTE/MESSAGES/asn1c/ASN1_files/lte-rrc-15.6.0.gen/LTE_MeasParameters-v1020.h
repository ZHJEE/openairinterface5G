/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MeasParameters_v1020_H_
#define	_LTE_MeasParameters_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_BandCombinationListEUTRA-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_MeasParameters-v1020 */
typedef struct LTE_MeasParameters_v1020 {
	LTE_BandCombinationListEUTRA_r10_t	 bandCombinationListEUTRA_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasParameters_v1020_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasParameters_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasParameters_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasParameters_v1020_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasParameters_v1020_H_ */
#include <asn_internal.h>
