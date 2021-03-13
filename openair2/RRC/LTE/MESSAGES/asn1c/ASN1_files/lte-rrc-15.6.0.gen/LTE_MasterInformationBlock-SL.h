/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MasterInformationBlock_SL_H_
#define	_LTE_MasterInformationBlock_SL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_TDD-ConfigSL-r12.h"
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MasterInformationBlock_SL__sl_Bandwidth_r12 {
	LTE_MasterInformationBlock_SL__sl_Bandwidth_r12_n6	= 0,
	LTE_MasterInformationBlock_SL__sl_Bandwidth_r12_n15	= 1,
	LTE_MasterInformationBlock_SL__sl_Bandwidth_r12_n25	= 2,
	LTE_MasterInformationBlock_SL__sl_Bandwidth_r12_n50	= 3,
	LTE_MasterInformationBlock_SL__sl_Bandwidth_r12_n75	= 4,
	LTE_MasterInformationBlock_SL__sl_Bandwidth_r12_n100	= 5
} e_LTE_MasterInformationBlock_SL__sl_Bandwidth_r12;

/* LTE_MasterInformationBlock-SL */
typedef struct LTE_MasterInformationBlock_SL {
	long	 sl_Bandwidth_r12;
	LTE_TDD_ConfigSL_r12_t	 tdd_ConfigSL_r12;
	BIT_STRING_t	 directFrameNumber_r12;
	long	 directSubframeNumber_r12;
	BOOLEAN_t	 inCoverage_r12;
	BIT_STRING_t	 reserved_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MasterInformationBlock_SL_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sl_Bandwidth_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MasterInformationBlock_SL;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MasterInformationBlock_SL_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MasterInformationBlock_SL_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MasterInformationBlock_SL_H_ */
#include <asn_internal.h>
