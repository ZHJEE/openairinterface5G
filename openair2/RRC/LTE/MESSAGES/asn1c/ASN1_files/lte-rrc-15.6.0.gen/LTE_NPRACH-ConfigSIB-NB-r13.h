/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_NPRACH_ConfigSIB_NB_r13_H_
#define	_LTE_NPRACH_ConfigSIB_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_NPRACH-ParametersList-NB-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_NPRACH_ConfigSIB_NB_r13__nprach_CP_Length_r13 {
	LTE_NPRACH_ConfigSIB_NB_r13__nprach_CP_Length_r13_us66dot7	= 0,
	LTE_NPRACH_ConfigSIB_NB_r13__nprach_CP_Length_r13_us266dot7	= 1
} e_LTE_NPRACH_ConfigSIB_NB_r13__nprach_CP_Length_r13;

/* Forward declarations */
struct LTE_RSRP_ThresholdsNPRACH_InfoList_NB_r13;

/* LTE_NPRACH-ConfigSIB-NB-r13 */
typedef struct LTE_NPRACH_ConfigSIB_NB_r13 {
	long	 nprach_CP_Length_r13;
	struct LTE_RSRP_ThresholdsNPRACH_InfoList_NB_r13	*rsrp_ThresholdsPrachInfoList_r13;	/* OPTIONAL */
	LTE_NPRACH_ParametersList_NB_r13_t	 nprach_ParametersList_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NPRACH_ConfigSIB_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_nprach_CP_Length_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NPRACH_ConfigSIB_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NPRACH_ConfigSIB_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NPRACH_ConfigSIB_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RSRP-ThresholdsNPRACH-InfoList-NB-r13.h"

#endif	/* _LTE_NPRACH_ConfigSIB_NB_r13_H_ */
#include <asn_internal.h>
