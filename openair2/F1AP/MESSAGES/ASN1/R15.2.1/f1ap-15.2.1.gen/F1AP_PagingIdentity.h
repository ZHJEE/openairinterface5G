/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#ifndef	_F1AP_PagingIdentity_H_
#define	_F1AP_PagingIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_PagingIdentity_PR {
	F1AP_PagingIdentity_PR_NOTHING,	/* No components present */
	F1AP_PagingIdentity_PR_rANUEPagingIdentity,
	F1AP_PagingIdentity_PR_cNUEPagingIdentity,
	F1AP_PagingIdentity_PR_choice_extension
	/* Extensions may appear below */
	
} F1AP_PagingIdentity_PR;

/* Forward declarations */
struct F1AP_RANUEPagingIdentity;
struct F1AP_CNUEPagingIdentity;
struct F1AP_ProtocolExtensionContainer;

/* F1AP_PagingIdentity */
typedef struct F1AP_PagingIdentity {
	F1AP_PagingIdentity_PR present;
	union F1AP_PagingIdentity_u {
		struct F1AP_RANUEPagingIdentity	*rANUEPagingIdentity;
		struct F1AP_CNUEPagingIdentity	*cNUEPagingIdentity;
		struct F1AP_ProtocolExtensionContainer	*choice_extension;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_PagingIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_PagingIdentity;
extern asn_CHOICE_specifics_t asn_SPC_F1AP_PagingIdentity_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_PagingIdentity_1[3];
extern asn_per_constraints_t asn_PER_type_F1AP_PagingIdentity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_PagingIdentity_H_ */
#include <asn_internal.h>
