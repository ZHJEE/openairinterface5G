/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_IdleModeMobilityControlInfo_v9e0_H_
#define	_LTE_IdleModeMobilityControlInfo_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_FreqPriorityEUTRA_v9e0;

/* LTE_IdleModeMobilityControlInfo-v9e0 */
typedef struct LTE_IdleModeMobilityControlInfo_v9e0 {
	struct LTE_IdleModeMobilityControlInfo_v9e0__freqPriorityListEUTRA_v9e0 {
		A_SEQUENCE_OF(struct LTE_FreqPriorityEUTRA_v9e0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} freqPriorityListEUTRA_v9e0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_IdleModeMobilityControlInfo_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_IdleModeMobilityControlInfo_v9e0;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_IdleModeMobilityControlInfo_v9e0_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_IdleModeMobilityControlInfo_v9e0_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_FreqPriorityEUTRA-v9e0.h"

#endif	/* _LTE_IdleModeMobilityControlInfo_v9e0_H_ */
#include <asn_internal.h>
