/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_BlackCellsToAddMod_H_
#define	_LTE_BlackCellsToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_PhysCellIdRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_BlackCellsToAddMod */
typedef struct LTE_BlackCellsToAddMod {
	long	 cellIndex;
	LTE_PhysCellIdRange_t	 physCellIdRange;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BlackCellsToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BlackCellsToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BlackCellsToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BlackCellsToAddMod_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BlackCellsToAddMod_H_ */
#include <asn_internal.h>
