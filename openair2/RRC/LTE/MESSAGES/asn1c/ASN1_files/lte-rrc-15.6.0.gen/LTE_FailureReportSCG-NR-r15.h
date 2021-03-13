/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_FailureReportSCG_NR_r15_H_
#define	_LTE_FailureReportSCG_NR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_FailureReportSCG_NR_r15__failureType_r15 {
	LTE_FailureReportSCG_NR_r15__failureType_r15_t310_Expiry	= 0,
	LTE_FailureReportSCG_NR_r15__failureType_r15_randomAccessProblem	= 1,
	LTE_FailureReportSCG_NR_r15__failureType_r15_rlc_MaxNumRetx	= 2,
	LTE_FailureReportSCG_NR_r15__failureType_r15_synchReconfigFailureSCG	= 3,
	LTE_FailureReportSCG_NR_r15__failureType_r15_scg_reconfigFailure	= 4,
	LTE_FailureReportSCG_NR_r15__failureType_r15_srb3_IntegrityFailure	= 5
} e_LTE_FailureReportSCG_NR_r15__failureType_r15;

/* Forward declarations */
struct LTE_MeasResultFreqListFailNR_r15;

/* LTE_FailureReportSCG-NR-r15 */
typedef struct LTE_FailureReportSCG_NR_r15 {
	long	 failureType_r15;
	struct LTE_MeasResultFreqListFailNR_r15	*measResultFreqListNR_r15;	/* OPTIONAL */
	OCTET_STRING_t	*measResultSCG_r15;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_FailureReportSCG_NR_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_failureType_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_FailureReportSCG_NR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_FailureReportSCG_NR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_FailureReportSCG_NR_r15_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasResultFreqListFailNR-r15.h"

#endif	/* _LTE_FailureReportSCG_NR_r15_H_ */
#include <asn_internal.h>
