/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_CSI_RS_Config_v1530_H_
#define	_LTE_CSI_RS_Config_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CSI_RS_ConfigEMIMO_v1530;

/* LTE_CSI-RS-Config-v1530 */
typedef struct LTE_CSI_RS_Config_v1530 {
	struct LTE_CSI_RS_ConfigEMIMO_v1530	*eMIMO_Type_v1530;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_Config_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_Config_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_RS_Config_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_Config_v1530_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CSI-RS-ConfigEMIMO-v1530.h"

#endif	/* _LTE_CSI_RS_Config_v1530_H_ */
#include <asn_internal.h>
