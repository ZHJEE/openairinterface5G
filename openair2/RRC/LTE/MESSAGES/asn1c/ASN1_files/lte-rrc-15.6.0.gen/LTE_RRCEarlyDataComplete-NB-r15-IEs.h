/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_RRCEarlyDataComplete_NB_r15_IEs_H_
#define	_LTE_RRCEarlyDataComplete_NB_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_DedicatedInfoNAS.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_RedirectedCarrierInfo_NB_r13;
struct LTE_RedirectedCarrierInfo_NB_v1430;

/* LTE_RRCEarlyDataComplete-NB-r15-IEs */
typedef struct LTE_RRCEarlyDataComplete_NB_r15_IEs {
	LTE_DedicatedInfoNAS_t	*dedicatedInfoNAS_r15;	/* OPTIONAL */
	long	*extendedWaitTime_r15;	/* OPTIONAL */
	struct LTE_RedirectedCarrierInfo_NB_r13	*redirectedCarrierInfo_r15;	/* OPTIONAL */
	struct LTE_RedirectedCarrierInfo_NB_v1430	*redirectedCarrierInfoExt_r15;	/* OPTIONAL */
	struct LTE_RRCEarlyDataComplete_NB_r15_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCEarlyDataComplete_NB_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCEarlyDataComplete_NB_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCEarlyDataComplete_NB_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCEarlyDataComplete_NB_r15_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RedirectedCarrierInfo-NB-r13.h"
#include "LTE_RedirectedCarrierInfo-NB-v1430.h"

#endif	/* _LTE_RRCEarlyDataComplete_NB_r15_IEs_H_ */
#include <asn_internal.h>
