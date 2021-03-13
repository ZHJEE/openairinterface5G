/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#ifndef	_F1AP_SCell_ToBeSetupMod_Item_H_
#define	_F1AP_SCell_ToBeSetupMod_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_NRCGI.h"
#include "F1AP_SCellIndex.h"
#include "F1AP_CellULConfigured.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_SCell-ToBeSetupMod-Item */
typedef struct F1AP_SCell_ToBeSetupMod_Item {
	F1AP_NRCGI_t	 sCell_ID;
	F1AP_SCellIndex_t	 sCellIndex;
	F1AP_CellULConfigured_t	*sCellULConfigured;	/* OPTIONAL */
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_SCell_ToBeSetupMod_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_SCell_ToBeSetupMod_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_SCell_ToBeSetupMod_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_SCell_ToBeSetupMod_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_SCell_ToBeSetupMod_Item_H_ */
#include <asn_internal.h>
