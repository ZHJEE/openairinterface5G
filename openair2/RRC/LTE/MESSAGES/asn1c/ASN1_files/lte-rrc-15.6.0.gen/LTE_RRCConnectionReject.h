/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_RRCConnectionReject_H_
#define	_LTE_RRCConnectionReject_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRCConnectionReject-r8-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionReject__criticalExtensions_PR {
	LTE_RRCConnectionReject__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_RRCConnectionReject__criticalExtensions_PR_c1,
	LTE_RRCConnectionReject__criticalExtensions_PR_criticalExtensionsFuture
} LTE_RRCConnectionReject__criticalExtensions_PR;
typedef enum LTE_RRCConnectionReject__criticalExtensions__c1_PR {
	LTE_RRCConnectionReject__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LTE_RRCConnectionReject__criticalExtensions__c1_PR_rrcConnectionReject_r8,
	LTE_RRCConnectionReject__criticalExtensions__c1_PR_spare3,
	LTE_RRCConnectionReject__criticalExtensions__c1_PR_spare2,
	LTE_RRCConnectionReject__criticalExtensions__c1_PR_spare1
} LTE_RRCConnectionReject__criticalExtensions__c1_PR;

/* LTE_RRCConnectionReject */
typedef struct LTE_RRCConnectionReject {
	struct LTE_RRCConnectionReject__criticalExtensions {
		LTE_RRCConnectionReject__criticalExtensions_PR present;
		union LTE_RRCConnectionReject__LTE_criticalExtensions_u {
			struct LTE_RRCConnectionReject__criticalExtensions__c1 {
				LTE_RRCConnectionReject__criticalExtensions__c1_PR present;
				union LTE_RRCConnectionReject__LTE_criticalExtensions__LTE_c1_u {
					LTE_RRCConnectionReject_r8_IEs_t	 rrcConnectionReject_r8;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LTE_RRCConnectionReject__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReject_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReject;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReject_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReject_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionReject_H_ */
#include <asn_internal.h>
