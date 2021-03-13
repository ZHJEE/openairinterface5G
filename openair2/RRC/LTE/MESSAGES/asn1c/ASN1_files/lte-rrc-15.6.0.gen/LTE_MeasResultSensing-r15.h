/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MeasResultSensing_r15_H_
#define	_LTE_MeasResultSensing_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SensingResult_r15;

/* LTE_MeasResultSensing-r15 */
typedef struct LTE_MeasResultSensing_r15 {
	long	 sl_SubframeRef_r15;
	struct LTE_MeasResultSensing_r15__sensingResult_r15 {
		A_SEQUENCE_OF(struct LTE_SensingResult_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sensingResult_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResultSensing_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultSensing_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResultSensing_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasResultSensing_r15_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SensingResult-r15.h"

#endif	/* _LTE_MeasResultSensing_r15_H_ */
#include <asn_internal.h>
