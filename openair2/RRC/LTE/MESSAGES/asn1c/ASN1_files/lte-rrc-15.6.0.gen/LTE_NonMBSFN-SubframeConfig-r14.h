/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_NonMBSFN_SubframeConfig_r14_H_
#define	_LTE_NonMBSFN_SubframeConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14 {
	LTE_NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf4	= 0,
	LTE_NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf8	= 1,
	LTE_NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf16	= 2,
	LTE_NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf32	= 3,
	LTE_NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf64	= 4,
	LTE_NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf128	= 5,
	LTE_NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14_rf512	= 6
} e_LTE_NonMBSFN_SubframeConfig_r14__radioFrameAllocationPeriod_r14;

/* LTE_NonMBSFN-SubframeConfig-r14 */
typedef struct LTE_NonMBSFN_SubframeConfig_r14 {
	long	 radioFrameAllocationPeriod_r14;
	long	 radioFrameAllocationOffset_r14;
	BIT_STRING_t	 subframeAllocation_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NonMBSFN_SubframeConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_radioFrameAllocationPeriod_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NonMBSFN_SubframeConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NonMBSFN_SubframeConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NonMBSFN_SubframeConfig_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NonMBSFN_SubframeConfig_r14_H_ */
#include <asn_internal.h>
