/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#ifndef	_F1AP_RAT_FrequencyPriorityInformation_H_
#define	_F1AP_RAT_FrequencyPriorityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_SubscriberProfileIDforRFP.h"
#include "F1AP_RAT-FrequencySelectionPriority.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_RAT_FrequencyPriorityInformation_PR {
	F1AP_RAT_FrequencyPriorityInformation_PR_NOTHING,	/* No components present */
	F1AP_RAT_FrequencyPriorityInformation_PR_subscriberProfileIDforRFP,
	F1AP_RAT_FrequencyPriorityInformation_PR_rAT_FrequencySelectionPriority,
	F1AP_RAT_FrequencyPriorityInformation_PR_choice_extension
	/* Extensions may appear below */
	
} F1AP_RAT_FrequencyPriorityInformation_PR;

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_RAT-FrequencyPriorityInformation */
typedef struct F1AP_RAT_FrequencyPriorityInformation {
	F1AP_RAT_FrequencyPriorityInformation_PR present;
	union F1AP_RAT_FrequencyPriorityInformation_u {
		F1AP_SubscriberProfileIDforRFP_t	 subscriberProfileIDforRFP;
		F1AP_RAT_FrequencySelectionPriority_t	 rAT_FrequencySelectionPriority;
		struct F1AP_ProtocolExtensionContainer	*choice_extension;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_RAT_FrequencyPriorityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_RAT_FrequencyPriorityInformation;
extern asn_CHOICE_specifics_t asn_SPC_F1AP_RAT_FrequencyPriorityInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_RAT_FrequencyPriorityInformation_1[3];
extern asn_per_constraints_t asn_PER_type_F1AP_RAT_FrequencyPriorityInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_RAT_FrequencyPriorityInformation_H_ */
#include <asn_internal.h>
