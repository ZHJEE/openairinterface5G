/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UL_DCCH_MessageType_H_
#define	_LTE_UL_DCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CSFBParametersRequestCDMA2000.h"
#include "LTE_MeasurementReport.h"
#include "LTE_RRCConnectionReconfigurationComplete.h"
#include "LTE_RRCConnectionReestablishmentComplete.h"
#include "LTE_RRCConnectionSetupComplete.h"
#include "LTE_SecurityModeComplete.h"
#include "LTE_SecurityModeFailure.h"
#include "LTE_UECapabilityInformation.h"
#include "LTE_ULHandoverPreparationTransfer.h"
#include "LTE_ULInformationTransfer.h"
#include "LTE_CounterCheckResponse.h"
#include "LTE_UEInformationResponse-r9.h"
#include "LTE_ProximityIndication-r9.h"
#include "LTE_RNReconfigurationComplete-r10.h"
#include "LTE_MBMSCountingResponse-r10.h"
#include "LTE_InterFreqRSTDMeasurementIndication-r10.h"
#include <constr_CHOICE.h>
#include "LTE_UEAssistanceInformation-r11.h"
#include "LTE_InDeviceCoexIndication-r11.h"
#include "LTE_MBMSInterestIndication-r11.h"
#include "LTE_SCGFailureInformation-r12.h"
#include "LTE_SidelinkUEInformation-r12.h"
#include "LTE_WLANConnectionStatusReport-r13.h"
#include "LTE_RRCConnectionResumeComplete-r13.h"
#include "LTE_ULInformationTransferMRDC-r15.h"
#include "LTE_SCGFailureInformationNR-r15.h"
#include "LTE_MeasReportAppLayer-r15.h"
#include "LTE_FailureInformation-r15.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UL_DCCH_MessageType_PR {
	LTE_UL_DCCH_MessageType_PR_NOTHING,	/* No components present */
	LTE_UL_DCCH_MessageType_PR_c1,
	LTE_UL_DCCH_MessageType_PR_messageClassExtension
} LTE_UL_DCCH_MessageType_PR;
typedef enum LTE_UL_DCCH_MessageType__c1_PR {
	LTE_UL_DCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	LTE_UL_DCCH_MessageType__c1_PR_csfbParametersRequestCDMA2000,
	LTE_UL_DCCH_MessageType__c1_PR_measurementReport,
	LTE_UL_DCCH_MessageType__c1_PR_rrcConnectionReconfigurationComplete,
	LTE_UL_DCCH_MessageType__c1_PR_rrcConnectionReestablishmentComplete,
	LTE_UL_DCCH_MessageType__c1_PR_rrcConnectionSetupComplete,
	LTE_UL_DCCH_MessageType__c1_PR_securityModeComplete,
	LTE_UL_DCCH_MessageType__c1_PR_securityModeFailure,
	LTE_UL_DCCH_MessageType__c1_PR_ueCapabilityInformation,
	LTE_UL_DCCH_MessageType__c1_PR_ulHandoverPreparationTransfer,
	LTE_UL_DCCH_MessageType__c1_PR_ulInformationTransfer,
	LTE_UL_DCCH_MessageType__c1_PR_counterCheckResponse,
	LTE_UL_DCCH_MessageType__c1_PR_ueInformationResponse_r9,
	LTE_UL_DCCH_MessageType__c1_PR_proximityIndication_r9,
	LTE_UL_DCCH_MessageType__c1_PR_rnReconfigurationComplete_r10,
	LTE_UL_DCCH_MessageType__c1_PR_mbmsCountingResponse_r10,
	LTE_UL_DCCH_MessageType__c1_PR_interFreqRSTDMeasurementIndication_r10
} LTE_UL_DCCH_MessageType__c1_PR;
typedef enum LTE_UL_DCCH_MessageType__messageClassExtension_PR {
	LTE_UL_DCCH_MessageType__messageClassExtension_PR_NOTHING,	/* No components present */
	LTE_UL_DCCH_MessageType__messageClassExtension_PR_c2,
	LTE_UL_DCCH_MessageType__messageClassExtension_PR_messageClassExtensionFuture_r11
} LTE_UL_DCCH_MessageType__messageClassExtension_PR;
typedef enum LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR {
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_NOTHING,	/* No components present */
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_ueAssistanceInformation_r11,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_inDeviceCoexIndication_r11,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_mbmsInterestIndication_r11,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_scgFailureInformation_r12,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_sidelinkUEInformation_r12,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_wlanConnectionStatusReport_r13,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_rrcConnectionResumeComplete_r13,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_ulInformationTransferMRDC_r15,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_scgFailureInformationNR_r15,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_measReportAppLayer_r15,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_failureInformation_r15,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare5,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare4,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare3,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare2,
	LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare1
} LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR;

/* LTE_UL-DCCH-MessageType */
typedef struct LTE_UL_DCCH_MessageType {
	LTE_UL_DCCH_MessageType_PR present;
	union LTE_UL_DCCH_MessageType_u {
		struct LTE_UL_DCCH_MessageType__c1 {
			LTE_UL_DCCH_MessageType__c1_PR present;
			union LTE_UL_DCCH_MessageType__LTE_c1_u {
				LTE_CSFBParametersRequestCDMA2000_t	 csfbParametersRequestCDMA2000;
				LTE_MeasurementReport_t	 measurementReport;
				LTE_RRCConnectionReconfigurationComplete_t	 rrcConnectionReconfigurationComplete;
				LTE_RRCConnectionReestablishmentComplete_t	 rrcConnectionReestablishmentComplete;
				LTE_RRCConnectionSetupComplete_t	 rrcConnectionSetupComplete;
				LTE_SecurityModeComplete_t	 securityModeComplete;
				LTE_SecurityModeFailure_t	 securityModeFailure;
				LTE_UECapabilityInformation_t	 ueCapabilityInformation;
				LTE_ULHandoverPreparationTransfer_t	 ulHandoverPreparationTransfer;
				LTE_ULInformationTransfer_t	 ulInformationTransfer;
				LTE_CounterCheckResponse_t	 counterCheckResponse;
				LTE_UEInformationResponse_r9_t	 ueInformationResponse_r9;
				LTE_ProximityIndication_r9_t	 proximityIndication_r9;
				LTE_RNReconfigurationComplete_r10_t	 rnReconfigurationComplete_r10;
				LTE_MBMSCountingResponse_r10_t	 mbmsCountingResponse_r10;
				LTE_InterFreqRSTDMeasurementIndication_r10_t	 interFreqRSTDMeasurementIndication_r10;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct LTE_UL_DCCH_MessageType__messageClassExtension {
			LTE_UL_DCCH_MessageType__messageClassExtension_PR present;
			union LTE_UL_DCCH_MessageType__LTE_messageClassExtension_u {
				struct LTE_UL_DCCH_MessageType__messageClassExtension__c2 {
					LTE_UL_DCCH_MessageType__messageClassExtension__c2_PR present;
					union LTE_UL_DCCH_MessageType__LTE_messageClassExtension__LTE_c2_u {
						LTE_UEAssistanceInformation_r11_t	 ueAssistanceInformation_r11;
						LTE_InDeviceCoexIndication_r11_t	 inDeviceCoexIndication_r11;
						LTE_MBMSInterestIndication_r11_t	 mbmsInterestIndication_r11;
						LTE_SCGFailureInformation_r12_t	 scgFailureInformation_r12;
						LTE_SidelinkUEInformation_r12_t	 sidelinkUEInformation_r12;
						LTE_WLANConnectionStatusReport_r13_t	 wlanConnectionStatusReport_r13;
						LTE_RRCConnectionResumeComplete_r13_t	 rrcConnectionResumeComplete_r13;
						LTE_ULInformationTransferMRDC_r15_t	 ulInformationTransferMRDC_r15;
						LTE_SCGFailureInformationNR_r15_t	 scgFailureInformationNR_r15;
						LTE_MeasReportAppLayer_r15_t	 measReportAppLayer_r15;
						LTE_FailureInformation_r15_t	 failureInformation_r15;
						NULL_t	 spare5;
						NULL_t	 spare4;
						NULL_t	 spare3;
						NULL_t	 spare2;
						NULL_t	 spare1;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} c2;
				struct LTE_UL_DCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r11 {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} messageClassExtensionFuture_r11;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UL_DCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UL_DCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_LTE_UL_DCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UL_DCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_UL_DCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UL_DCCH_MessageType_H_ */
#include <asn_internal.h>
