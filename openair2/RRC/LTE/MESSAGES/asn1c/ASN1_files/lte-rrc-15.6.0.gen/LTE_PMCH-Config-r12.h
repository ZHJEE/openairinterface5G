/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_PMCH_Config_r12_H_
#define	_LTE_PMCH_Config_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PMCH_Config_r12__dataMCS_r12_PR {
	LTE_PMCH_Config_r12__dataMCS_r12_PR_NOTHING,	/* No components present */
	LTE_PMCH_Config_r12__dataMCS_r12_PR_normal_r12,
	LTE_PMCH_Config_r12__dataMCS_r12_PR_higerOrder_r12
} LTE_PMCH_Config_r12__dataMCS_r12_PR;
typedef enum LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12 {
	LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12_rf4	= 0,
	LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12_rf8	= 1,
	LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12_rf16	= 2,
	LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12_rf32	= 3,
	LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12_rf64	= 4,
	LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12_rf128	= 5,
	LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12_rf256	= 6,
	LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12_rf512	= 7,
	LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12_rf1024	= 8
} e_LTE_PMCH_Config_r12__mch_SchedulingPeriod_r12;
typedef enum LTE_PMCH_Config_r12__ext1__mch_SchedulingPeriod_v1430 {
	LTE_PMCH_Config_r12__ext1__mch_SchedulingPeriod_v1430_rf1	= 0,
	LTE_PMCH_Config_r12__ext1__mch_SchedulingPeriod_v1430_rf2	= 1
} e_LTE_PMCH_Config_r12__ext1__mch_SchedulingPeriod_v1430;

/* LTE_PMCH-Config-r12 */
typedef struct LTE_PMCH_Config_r12 {
	long	 sf_AllocEnd_r12;
	struct LTE_PMCH_Config_r12__dataMCS_r12 {
		LTE_PMCH_Config_r12__dataMCS_r12_PR present;
		union LTE_PMCH_Config_r12__LTE_dataMCS_r12_u {
			long	 normal_r12;
			long	 higerOrder_r12;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} dataMCS_r12;
	long	 mch_SchedulingPeriod_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_PMCH_Config_r12__ext1 {
		long	*mch_SchedulingPeriod_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PMCH_Config_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mch_SchedulingPeriod_r12_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mch_SchedulingPeriod_v1430_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PMCH_Config_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PMCH_Config_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PMCH_Config_r12_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PMCH_Config_r12_H_ */
#include <asn_internal.h>
