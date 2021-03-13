/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MIMO_CA_ParametersPerBoBC_v1430_H_
#define	_LTE_MIMO_CA_ParametersPerBoBC_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MIMO_CA_ParametersPerBoBCPerTM_v1430;

/* LTE_MIMO-CA-ParametersPerBoBC-v1430 */
typedef struct LTE_MIMO_CA_ParametersPerBoBC_v1430 {
	struct LTE_MIMO_CA_ParametersPerBoBCPerTM_v1430	*parametersTM9_v1430;	/* OPTIONAL */
	struct LTE_MIMO_CA_ParametersPerBoBCPerTM_v1430	*parametersTM10_v1430;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MIMO_CA_ParametersPerBoBC_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MIMO_CA_ParametersPerBoBC_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MIMO_CA_ParametersPerBoBC_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MIMO_CA_ParametersPerBoBC_v1430_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MIMO-CA-ParametersPerBoBCPerTM-v1430.h"

#endif	/* _LTE_MIMO_CA_ParametersPerBoBC_v1430_H_ */
#include <asn_internal.h>
