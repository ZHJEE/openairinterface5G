/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UEPagingCoverageInformation_H_
#define	_LTE_UEPagingCoverageInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_UEPagingCoverageInformation-r13-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UEPagingCoverageInformation__criticalExtensions_PR {
	LTE_UEPagingCoverageInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_UEPagingCoverageInformation__criticalExtensions_PR_c1,
	LTE_UEPagingCoverageInformation__criticalExtensions_PR_criticalExtensionsFuture
} LTE_UEPagingCoverageInformation__criticalExtensions_PR;
typedef enum LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR {
	LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR_uePagingCoverageInformation_r13,
	LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR_spare7,
	LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR_spare6,
	LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR_spare5,
	LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR_spare4,
	LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR_spare3,
	LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR_spare2,
	LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR_spare1
} LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR;

/* LTE_UEPagingCoverageInformation */
typedef struct LTE_UEPagingCoverageInformation {
	struct LTE_UEPagingCoverageInformation__criticalExtensions {
		LTE_UEPagingCoverageInformation__criticalExtensions_PR present;
		union LTE_UEPagingCoverageInformation__LTE_criticalExtensions_u {
			struct LTE_UEPagingCoverageInformation__criticalExtensions__c1 {
				LTE_UEPagingCoverageInformation__criticalExtensions__c1_PR present;
				union LTE_UEPagingCoverageInformation__LTE_criticalExtensions__LTE_c1_u {
					LTE_UEPagingCoverageInformation_r13_IEs_t	 uePagingCoverageInformation_r13;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LTE_UEPagingCoverageInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UEPagingCoverageInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UEPagingCoverageInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UEPagingCoverageInformation_H_ */
#include <asn_internal.h>
