/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_NPRACH_ProbabilityAnchor_NB_r14_H_
#define	_LTE_NPRACH_ProbabilityAnchor_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14 {
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_zero	= 0,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneSixteenth	= 1,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneFifteenth	= 2,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneFourteenth	= 3,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneThirteenth	= 4,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneTwelfth	= 5,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneEleventh	= 6,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneTenth	= 7,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneNinth	= 8,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneEighth	= 9,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneSeventh	= 10,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneSixth	= 11,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneFifth	= 12,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneFourth	= 13,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneThird	= 14,
	LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneHalf	= 15
} e_LTE_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14;

/* LTE_NPRACH-ProbabilityAnchor-NB-r14 */
typedef struct LTE_NPRACH_ProbabilityAnchor_NB_r14 {
	long	*nprach_ProbabilityAnchor_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NPRACH_ProbabilityAnchor_NB_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_nprach_ProbabilityAnchor_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NPRACH_ProbabilityAnchor_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NPRACH_ProbabilityAnchor_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NPRACH_ProbabilityAnchor_NB_r14_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NPRACH_ProbabilityAnchor_NB_r14_H_ */
#include <asn_internal.h>
