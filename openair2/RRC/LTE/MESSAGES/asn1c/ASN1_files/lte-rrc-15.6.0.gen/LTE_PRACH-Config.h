/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_PRACH_Config_H_
#define	_LTE_PRACH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PRACH_ConfigInfo;

/* LTE_PRACH-Config */
typedef struct LTE_PRACH_Config {
	long	 rootSequenceIndex;
	struct LTE_PRACH_ConfigInfo	*prach_ConfigInfo;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PRACH_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PRACH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PRACH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PRACH_Config_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PRACH-ConfigInfo.h"

#endif	/* _LTE_PRACH_Config_H_ */
#include <asn_internal.h>
