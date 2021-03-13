/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#ifndef	_F1AP_SliceSupportList_H_
#define	_F1AP_SliceSupportList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_SliceSupportItem;

/* F1AP_SliceSupportList */
typedef struct F1AP_SliceSupportList {
	A_SEQUENCE_OF(struct F1AP_SliceSupportItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_SliceSupportList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_SliceSupportList;
extern asn_SET_OF_specifics_t asn_SPC_F1AP_SliceSupportList_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_SliceSupportList_1[1];
extern asn_per_constraints_t asn_PER_type_F1AP_SliceSupportList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_SliceSupportList_H_ */
#include <asn_internal.h>
