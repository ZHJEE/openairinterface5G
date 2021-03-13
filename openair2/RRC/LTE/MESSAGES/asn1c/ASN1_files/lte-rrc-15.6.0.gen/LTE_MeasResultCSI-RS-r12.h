/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MeasResultCSI_RS_r12_H_
#define	_LTE_MeasResultCSI_RS_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MeasCSI-RS-Id-r12.h"
#include "LTE_CSI-RSRP-Range-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_MeasResultCSI-RS-r12 */
typedef struct LTE_MeasResultCSI_RS_r12 {
	LTE_MeasCSI_RS_Id_r12_t	 measCSI_RS_Id_r12;
	LTE_CSI_RSRP_Range_r12_t	 csi_RSRP_Result_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResultCSI_RS_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultCSI_RS_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResultCSI_RS_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasResultCSI_RS_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasResultCSI_RS_r12_H_ */
#include <asn_internal.h>
