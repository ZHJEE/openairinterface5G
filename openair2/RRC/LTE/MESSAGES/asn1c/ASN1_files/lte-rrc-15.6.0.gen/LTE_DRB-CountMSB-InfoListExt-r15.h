/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_DRB_CountMSB_InfoListExt_r15_H_
#define	_LTE_DRB_CountMSB_InfoListExt_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_DRB_CountMSB_Info;

/* LTE_DRB-CountMSB-InfoListExt-r15 */
typedef struct LTE_DRB_CountMSB_InfoListExt_r15 {
	A_SEQUENCE_OF(struct LTE_DRB_CountMSB_Info) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DRB_CountMSB_InfoListExt_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DRB_CountMSB_InfoListExt_r15;
extern asn_SET_OF_specifics_t asn_SPC_LTE_DRB_CountMSB_InfoListExt_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DRB_CountMSB_InfoListExt_r15_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_DRB_CountMSB_InfoListExt_r15_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_DRB-CountMSB-Info.h"

#endif	/* _LTE_DRB_CountMSB_InfoListExt_r15_H_ */
#include <asn_internal.h>
