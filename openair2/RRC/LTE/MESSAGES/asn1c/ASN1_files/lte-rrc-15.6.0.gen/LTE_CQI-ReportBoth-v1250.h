/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_CQI_ReportBoth_v1250_H_
#define	_LTE_CQI_ReportBoth_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CSI-IM-ConfigId-v1250.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CSI_IM_ConfigExt_r12;

/* LTE_CQI-ReportBoth-v1250 */
typedef struct LTE_CQI_ReportBoth_v1250 {
	LTE_CSI_IM_ConfigId_v1250_t	*csi_IM_ConfigToReleaseListExt_r12;	/* OPTIONAL */
	struct LTE_CSI_IM_ConfigExt_r12	*csi_IM_ConfigToAddModListExt_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportBoth_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportBoth_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportBoth_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportBoth_v1250_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CSI-IM-ConfigExt-r12.h"

#endif	/* _LTE_CQI_ReportBoth_v1250_H_ */
#include <asn_internal.h>
