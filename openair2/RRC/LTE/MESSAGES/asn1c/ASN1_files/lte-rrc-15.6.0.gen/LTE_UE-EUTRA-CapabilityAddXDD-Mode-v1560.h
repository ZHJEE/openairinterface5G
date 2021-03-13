/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1560_H_
#define	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1560_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PDCP-ParametersNR-v1560.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_UE-EUTRA-CapabilityAddXDD-Mode-v1560 */
typedef struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1560 {
	LTE_PDCP_ParametersNR_v1560_t	 pdcp_ParametersNR_v1560;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1560_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1560_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1560_H_ */
#include <asn_internal.h>
