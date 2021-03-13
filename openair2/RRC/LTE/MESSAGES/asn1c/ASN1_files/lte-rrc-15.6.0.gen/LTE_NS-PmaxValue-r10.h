/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_NS_PmaxValue_r10_H_
#define	_LTE_NS_PmaxValue_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_P-Max.h"
#include "LTE_AdditionalSpectrumEmission.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_NS-PmaxValue-r10 */
typedef struct LTE_NS_PmaxValue_r10 {
	LTE_P_Max_t	*additionalPmax_r10;	/* OPTIONAL */
	LTE_AdditionalSpectrumEmission_t	 additionalSpectrumEmission;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NS_PmaxValue_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NS_PmaxValue_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NS_PmaxValue_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NS_PmaxValue_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NS_PmaxValue_r10_H_ */
#include <asn_internal.h>
