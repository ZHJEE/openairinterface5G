/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_NeighCellsCRS_Info_r15_H_
#define	_LTE_NeighCellsCRS_Info_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_CRS-AssistanceInfoList-r15.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_NeighCellsCRS_Info_r15_PR {
	LTE_NeighCellsCRS_Info_r15_PR_NOTHING,	/* No components present */
	LTE_NeighCellsCRS_Info_r15_PR_release,
	LTE_NeighCellsCRS_Info_r15_PR_setup
} LTE_NeighCellsCRS_Info_r15_PR;

/* LTE_NeighCellsCRS-Info-r15 */
typedef struct LTE_NeighCellsCRS_Info_r15 {
	LTE_NeighCellsCRS_Info_r15_PR present;
	union LTE_NeighCellsCRS_Info_r15_u {
		NULL_t	 release;
		LTE_CRS_AssistanceInfoList_r15_t	 setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NeighCellsCRS_Info_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NeighCellsCRS_Info_r15;
extern asn_CHOICE_specifics_t asn_SPC_LTE_NeighCellsCRS_Info_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NeighCellsCRS_Info_r15_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_NeighCellsCRS_Info_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NeighCellsCRS_Info_r15_H_ */
#include <asn_internal.h>
