/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "R15.2.1/F1AP-PDU-Contents.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#ifndef	_F1AP_Served_Cells_To_Modify_List_H_
#define	_F1AP_Served_Cells_To_Modify_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_ProtocolIE_SingleContainer;

/* F1AP_Served-Cells-To-Modify-List */
typedef struct F1AP_Served_Cells_To_Modify_List {
	A_SEQUENCE_OF(struct F1AP_ProtocolIE_SingleContainer) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_Served_Cells_To_Modify_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_Served_Cells_To_Modify_List;
extern asn_SET_OF_specifics_t asn_SPC_F1AP_Served_Cells_To_Modify_List_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_Served_Cells_To_Modify_List_1[1];
extern asn_per_constraints_t asn_PER_type_F1AP_Served_Cells_To_Modify_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_Served_Cells_To_Modify_List_H_ */
#include <asn_internal.h>
