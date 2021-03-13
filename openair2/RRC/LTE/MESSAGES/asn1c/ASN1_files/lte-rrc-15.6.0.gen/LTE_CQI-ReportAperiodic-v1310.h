/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_CQI_ReportAperiodic_v1310_H_
#define	_LTE_CQI_ReportAperiodic_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CQI_ReportAperiodic_v1310_PR {
	LTE_CQI_ReportAperiodic_v1310_PR_NOTHING,	/* No components present */
	LTE_CQI_ReportAperiodic_v1310_PR_release,
	LTE_CQI_ReportAperiodic_v1310_PR_setup
} LTE_CQI_ReportAperiodic_v1310_PR;
typedef enum LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13_PR {
	LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13_PR_NOTHING,	/* No components present */
	LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13_PR_release,
	LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13_PR_setup
} LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13_PR;

/* LTE_CQI-ReportAperiodic-v1310 */
typedef struct LTE_CQI_ReportAperiodic_v1310 {
	LTE_CQI_ReportAperiodic_v1310_PR present;
	union LTE_CQI_ReportAperiodic_v1310_u {
		NULL_t	 release;
		struct LTE_CQI_ReportAperiodic_v1310__setup {
			struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310 {
				BIT_STRING_t	 trigger1_r13;
				BIT_STRING_t	 trigger2_r13;
				BIT_STRING_t	 trigger3_r13;
				BIT_STRING_t	 trigger4_r13;
				BIT_STRING_t	 trigger5_r13;
				BIT_STRING_t	 trigger6_r13;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *aperiodicCSI_Trigger_v1310;
			struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13 {
				LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13_PR present;
				union LTE_CQI_ReportAperiodic_v1310__LTE_setup__LTE_aperiodicCSI_Trigger2_r13_u {
					NULL_t	 release;
					struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup {
						BIT_STRING_t	 trigger1_SubframeSetIndicator_r13;
						BIT_STRING_t	 trigger2_SubframeSetIndicator_r13;
						BIT_STRING_t	 trigger3_SubframeSetIndicator_r13;
						BIT_STRING_t	 trigger4_SubframeSetIndicator_r13;
						BIT_STRING_t	 trigger5_SubframeSetIndicator_r13;
						BIT_STRING_t	 trigger6_SubframeSetIndicator_r13;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} setup;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *aperiodicCSI_Trigger2_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportAperiodic_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportAperiodic_v1310;
extern asn_CHOICE_specifics_t asn_SPC_LTE_CQI_ReportAperiodic_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportAperiodic_v1310_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_CQI_ReportAperiodic_v1310_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CQI_ReportAperiodic_v1310_H_ */
#include <asn_internal.h>
