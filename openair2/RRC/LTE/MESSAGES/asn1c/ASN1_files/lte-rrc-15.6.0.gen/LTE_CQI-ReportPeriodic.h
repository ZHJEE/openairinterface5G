/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_CQI_ReportPeriodic_H_
#define	_LTE_CQI_ReportPeriodic_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CQI_ReportPeriodic_PR {
	LTE_CQI_ReportPeriodic_PR_NOTHING,	/* No components present */
	LTE_CQI_ReportPeriodic_PR_release,
	LTE_CQI_ReportPeriodic_PR_setup
} LTE_CQI_ReportPeriodic_PR;
typedef enum LTE_CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR {
	LTE_CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR_NOTHING,	/* No components present */
	LTE_CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR_widebandCQI,
	LTE_CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR_subbandCQI
} LTE_CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR;

/* LTE_CQI-ReportPeriodic */
typedef struct LTE_CQI_ReportPeriodic {
	LTE_CQI_ReportPeriodic_PR present;
	union LTE_CQI_ReportPeriodic_u {
		NULL_t	 release;
		struct LTE_CQI_ReportPeriodic__setup {
			long	 cqi_PUCCH_ResourceIndex;
			long	 cqi_pmi_ConfigIndex;
			struct LTE_CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic {
				LTE_CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR present;
				union LTE_CQI_ReportPeriodic__LTE_setup__LTE_cqi_FormatIndicatorPeriodic_u {
					NULL_t	 widebandCQI;
					struct LTE_CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic__subbandCQI {
						long	 k;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} subbandCQI;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} cqi_FormatIndicatorPeriodic;
			long	*ri_ConfigIndex;	/* OPTIONAL */
			BOOLEAN_t	 simultaneousAckNackAndCQI;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportPeriodic_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportPeriodic;
extern asn_CHOICE_specifics_t asn_SPC_LTE_CQI_ReportPeriodic_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportPeriodic_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_CQI_ReportPeriodic_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CQI_ReportPeriodic_H_ */
#include <asn_internal.h>
