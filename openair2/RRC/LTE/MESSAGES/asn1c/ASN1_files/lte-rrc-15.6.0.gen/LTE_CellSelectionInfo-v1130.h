/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_CellSelectionInfo_v1130_H_
#define	_LTE_CellSelectionInfo_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_Q-QualMin-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CellSelectionInfo-v1130 */
typedef struct LTE_CellSelectionInfo_v1130 {
	LTE_Q_QualMin_r9_t	 q_QualMinWB_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellSelectionInfo_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellSelectionInfo_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CellSelectionInfo_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellSelectionInfo_v1130_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CellSelectionInfo_v1130_H_ */
#include <asn_internal.h>
