/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_CellInfoGERAN_r9_H_
#define	_LTE_CellInfoGERAN_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhysCellIdGERAN.h"
#include "LTE_CarrierFreqGERAN.h"
#include "LTE_SystemInfoListGERAN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CellInfoGERAN-r9 */
typedef struct LTE_CellInfoGERAN_r9 {
	LTE_PhysCellIdGERAN_t	 physCellId_r9;
	LTE_CarrierFreqGERAN_t	 carrierFreq_r9;
	LTE_SystemInfoListGERAN_t	 systemInformation_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellInfoGERAN_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellInfoGERAN_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CellInfoGERAN_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellInfoGERAN_r9_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CellInfoGERAN_r9_H_ */
#include <asn_internal.h>
