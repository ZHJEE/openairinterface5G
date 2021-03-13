/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#ifndef	_F1AP_QoS_Characteristics_H_
#define	_F1AP_QoS_Characteristics_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_QoS_Characteristics_PR {
	F1AP_QoS_Characteristics_PR_NOTHING,	/* No components present */
	F1AP_QoS_Characteristics_PR_non_Dynamic_5QI,
	F1AP_QoS_Characteristics_PR_dynamic_5QI,
	F1AP_QoS_Characteristics_PR_choice_extension
	/* Extensions may appear below */
	
} F1AP_QoS_Characteristics_PR;

/* Forward declarations */
struct F1AP_NonDynamic5QIDescriptor;
struct F1AP_Dynamic5QIDescriptor;
struct F1AP_ProtocolExtensionContainer;

/* F1AP_QoS-Characteristics */
typedef struct F1AP_QoS_Characteristics {
	F1AP_QoS_Characteristics_PR present;
	union F1AP_QoS_Characteristics_u {
		struct F1AP_NonDynamic5QIDescriptor	*non_Dynamic_5QI;
		struct F1AP_Dynamic5QIDescriptor	*dynamic_5QI;
		struct F1AP_ProtocolExtensionContainer	*choice_extension;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_QoS_Characteristics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_QoS_Characteristics;
extern asn_CHOICE_specifics_t asn_SPC_F1AP_QoS_Characteristics_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_QoS_Characteristics_1[3];
extern asn_per_constraints_t asn_PER_type_F1AP_QoS_Characteristics_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_QoS_Characteristics_H_ */
#include <asn_internal.h>
