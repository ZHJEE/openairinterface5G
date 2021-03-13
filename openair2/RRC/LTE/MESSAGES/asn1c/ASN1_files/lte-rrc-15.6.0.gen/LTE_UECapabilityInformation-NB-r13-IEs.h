/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UECapabilityInformation_NB_r13_IEs_H_
#define	_LTE_UECapabilityInformation_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_UE-Capability-NB-r13.h"
#include "LTE_UE-RadioPagingInfo-NB-r13.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_UECapabilityInformation_NB_Ext_r14_IEs;

/* LTE_UECapabilityInformation-NB-r13-IEs */
typedef struct LTE_UECapabilityInformation_NB_r13_IEs {
	LTE_UE_Capability_NB_r13_t	 ue_Capability_r13;
	LTE_UE_RadioPagingInfo_NB_r13_t	 ue_RadioPagingInfo_r13;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_UECapabilityInformation_NB_Ext_r14_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UECapabilityInformation_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UECapabilityInformation_NB_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UECapabilityInformation_NB_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UECapabilityInformation_NB_r13_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_UECapabilityInformation-NB-Ext-r14-IEs.h"

#endif	/* _LTE_UECapabilityInformation_NB_r13_IEs_H_ */
#include <asn_internal.h>
