/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_PhysicalConfigDedicated_v13c0_H_
#define	_LTE_PhysicalConfigDedicated_v13c0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PUCCH-ConfigDedicated-v13c0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_PhysicalConfigDedicated-v13c0 */
typedef struct LTE_PhysicalConfigDedicated_v13c0 {
	LTE_PUCCH_ConfigDedicated_v13c0_t	 pucch_ConfigDedicated_v13c0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PhysicalConfigDedicated_v13c0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PhysicalConfigDedicated_v13c0;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PhysicalConfigDedicated_v13c0_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PhysicalConfigDedicated_v13c0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PhysicalConfigDedicated_v13c0_H_ */
#include <asn_internal.h>
