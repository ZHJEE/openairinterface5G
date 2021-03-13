/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_InDeviceCoexIndication_v11d0_IEs_H_
#define	_LTE_InDeviceCoexIndication_v11d0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_VictimSystemType-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_InDeviceCoexIndication_v1310_IEs;
struct LTE_AffectedCarrierFreqCombList_r11;

/* LTE_InDeviceCoexIndication-v11d0-IEs */
typedef struct LTE_InDeviceCoexIndication_v11d0_IEs {
	struct LTE_InDeviceCoexIndication_v11d0_IEs__ul_CA_AssistanceInfo_r11 {
		struct LTE_AffectedCarrierFreqCombList_r11	*affectedCarrierFreqCombList_r11;	/* OPTIONAL */
		LTE_VictimSystemType_r11_t	 victimSystemType_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_CA_AssistanceInfo_r11;
	struct LTE_InDeviceCoexIndication_v1310_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_InDeviceCoexIndication_v11d0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_InDeviceCoexIndication_v11d0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_InDeviceCoexIndication_v11d0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_InDeviceCoexIndication_v11d0_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_InDeviceCoexIndication-v1310-IEs.h"
#include "LTE_AffectedCarrierFreqCombList-r11.h"

#endif	/* _LTE_InDeviceCoexIndication_v11d0_IEs_H_ */
#include <asn_internal.h>
