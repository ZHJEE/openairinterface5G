/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_PDCP_Parameters_v1530_H_
#define	_LTE_PDCP_Parameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PDCP_Parameters_v1530__pdcp_Duplication_r15 {
	LTE_PDCP_Parameters_v1530__pdcp_Duplication_r15_supported	= 0
} e_LTE_PDCP_Parameters_v1530__pdcp_Duplication_r15;

/* Forward declarations */
struct LTE_SupportedUDC_r15;

/* LTE_PDCP-Parameters-v1530 */
typedef struct LTE_PDCP_Parameters_v1530 {
	struct LTE_SupportedUDC_r15	*supportedUDC_r15;	/* OPTIONAL */
	long	*pdcp_Duplication_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PDCP_Parameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pdcp_Duplication_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PDCP_Parameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PDCP_Parameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PDCP_Parameters_v1530_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SupportedUDC-r15.h"

#endif	/* _LTE_PDCP_Parameters_v1530_H_ */
#include <asn_internal.h>
