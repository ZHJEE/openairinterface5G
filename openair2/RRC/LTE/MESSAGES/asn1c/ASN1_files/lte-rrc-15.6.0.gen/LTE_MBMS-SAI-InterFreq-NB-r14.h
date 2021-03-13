/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MBMS_SAI_InterFreq_NB_r14_H_
#define	_LTE_MBMS_SAI_InterFreq_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CarrierFreq-NB-r13.h"
#include "LTE_MBMS-SAI-List-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_AdditionalBandInfoList_NB_r14;

/* LTE_MBMS-SAI-InterFreq-NB-r14 */
typedef struct LTE_MBMS_SAI_InterFreq_NB_r14 {
	LTE_CarrierFreq_NB_r13_t	 dl_CarrierFreq_r14;
	LTE_MBMS_SAI_List_r11_t	 mbms_SAI_List_r14;
	struct LTE_AdditionalBandInfoList_NB_r14	*multiBandInfoList_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MBMS_SAI_InterFreq_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MBMS_SAI_InterFreq_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMS_SAI_InterFreq_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MBMS_SAI_InterFreq_NB_r14_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_AdditionalBandInfoList-NB-r14.h"

#endif	/* _LTE_MBMS_SAI_InterFreq_NB_r14_H_ */
#include <asn_internal.h>
