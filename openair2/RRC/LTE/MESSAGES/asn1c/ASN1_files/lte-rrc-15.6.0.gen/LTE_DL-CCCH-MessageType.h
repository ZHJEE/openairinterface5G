/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_DL_CCCH_MessageType_H_
#define	_LTE_DL_CCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRCConnectionReestablishment.h"
#include "LTE_RRCConnectionReestablishmentReject.h"
#include "LTE_RRCConnectionReject.h"
#include "LTE_RRCConnectionSetup.h"
#include <constr_CHOICE.h>
#include "LTE_RRCEarlyDataComplete-r15.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DL_CCCH_MessageType_PR {
	LTE_DL_CCCH_MessageType_PR_NOTHING,	/* No components present */
	LTE_DL_CCCH_MessageType_PR_c1,
	LTE_DL_CCCH_MessageType_PR_messageClassExtension
} LTE_DL_CCCH_MessageType_PR;
typedef enum LTE_DL_CCCH_MessageType__c1_PR {
	LTE_DL_CCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	LTE_DL_CCCH_MessageType__c1_PR_rrcConnectionReestablishment,
	LTE_DL_CCCH_MessageType__c1_PR_rrcConnectionReestablishmentReject,
	LTE_DL_CCCH_MessageType__c1_PR_rrcConnectionReject,
	LTE_DL_CCCH_MessageType__c1_PR_rrcConnectionSetup
} LTE_DL_CCCH_MessageType__c1_PR;
typedef enum LTE_DL_CCCH_MessageType__messageClassExtension_PR {
	LTE_DL_CCCH_MessageType__messageClassExtension_PR_NOTHING,	/* No components present */
	LTE_DL_CCCH_MessageType__messageClassExtension_PR_c2,
	LTE_DL_CCCH_MessageType__messageClassExtension_PR_messageClassExtensionFuture_r15
} LTE_DL_CCCH_MessageType__messageClassExtension_PR;
typedef enum LTE_DL_CCCH_MessageType__messageClassExtension__c2_PR {
	LTE_DL_CCCH_MessageType__messageClassExtension__c2_PR_NOTHING,	/* No components present */
	LTE_DL_CCCH_MessageType__messageClassExtension__c2_PR_rrcEarlyDataComplete_r15,
	LTE_DL_CCCH_MessageType__messageClassExtension__c2_PR_spare3,
	LTE_DL_CCCH_MessageType__messageClassExtension__c2_PR_spare2,
	LTE_DL_CCCH_MessageType__messageClassExtension__c2_PR_spare1
} LTE_DL_CCCH_MessageType__messageClassExtension__c2_PR;

/* LTE_DL-CCCH-MessageType */
typedef struct LTE_DL_CCCH_MessageType {
	LTE_DL_CCCH_MessageType_PR present;
	union LTE_DL_CCCH_MessageType_u {
		struct LTE_DL_CCCH_MessageType__c1 {
			LTE_DL_CCCH_MessageType__c1_PR present;
			union LTE_DL_CCCH_MessageType__LTE_c1_u {
				LTE_RRCConnectionReestablishment_t	 rrcConnectionReestablishment;
				LTE_RRCConnectionReestablishmentReject_t	 rrcConnectionReestablishmentReject;
				LTE_RRCConnectionReject_t	 rrcConnectionReject;
				LTE_RRCConnectionSetup_t	 rrcConnectionSetup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct LTE_DL_CCCH_MessageType__messageClassExtension {
			LTE_DL_CCCH_MessageType__messageClassExtension_PR present;
			union LTE_DL_CCCH_MessageType__LTE_messageClassExtension_u {
				struct LTE_DL_CCCH_MessageType__messageClassExtension__c2 {
					LTE_DL_CCCH_MessageType__messageClassExtension__c2_PR present;
					union LTE_DL_CCCH_MessageType__LTE_messageClassExtension__LTE_c2_u {
						LTE_RRCEarlyDataComplete_r15_t	 rrcEarlyDataComplete_r15;
						NULL_t	 spare3;
						NULL_t	 spare2;
						NULL_t	 spare1;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} c2;
				struct LTE_DL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r15 {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} messageClassExtensionFuture_r15;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DL_CCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DL_CCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_LTE_DL_CCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DL_CCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_DL_CCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DL_CCCH_MessageType_H_ */
#include <asn_internal.h>
