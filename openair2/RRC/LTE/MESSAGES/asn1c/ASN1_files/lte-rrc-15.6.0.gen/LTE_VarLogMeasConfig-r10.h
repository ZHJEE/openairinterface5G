/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_VarLogMeasConfig_r10_H_
#define	_LTE_VarLogMeasConfig_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_LoggingDuration-r10.h"
#include "LTE_LoggingInterval-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_AreaConfiguration_r10;

/* LTE_VarLogMeasConfig-r10 */
typedef struct LTE_VarLogMeasConfig_r10 {
	struct LTE_AreaConfiguration_r10	*areaConfiguration_r10;	/* OPTIONAL */
	LTE_LoggingDuration_r10_t	 loggingDuration_r10;
	LTE_LoggingInterval_r10_t	 loggingInterval_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarLogMeasConfig_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarLogMeasConfig_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_AreaConfiguration-r10.h"

#endif	/* _LTE_VarLogMeasConfig_r10_H_ */
#include <asn_internal.h>
