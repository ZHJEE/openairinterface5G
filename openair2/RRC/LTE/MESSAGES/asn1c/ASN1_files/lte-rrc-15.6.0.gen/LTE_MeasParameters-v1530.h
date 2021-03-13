/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MeasParameters_v1530_H_
#define	_LTE_MeasParameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasParameters_v1530__qoe_MeasReport_r15 {
	LTE_MeasParameters_v1530__qoe_MeasReport_r15_supported	= 0
} e_LTE_MeasParameters_v1530__qoe_MeasReport_r15;
typedef enum LTE_MeasParameters_v1530__qoe_MTSI_MeasReport_r15 {
	LTE_MeasParameters_v1530__qoe_MTSI_MeasReport_r15_supported	= 0
} e_LTE_MeasParameters_v1530__qoe_MTSI_MeasReport_r15;
typedef enum LTE_MeasParameters_v1530__ca_IdleModeMeasurements_r15 {
	LTE_MeasParameters_v1530__ca_IdleModeMeasurements_r15_supported	= 0
} e_LTE_MeasParameters_v1530__ca_IdleModeMeasurements_r15;
typedef enum LTE_MeasParameters_v1530__ca_IdleModeValidityArea_r15 {
	LTE_MeasParameters_v1530__ca_IdleModeValidityArea_r15_supported	= 0
} e_LTE_MeasParameters_v1530__ca_IdleModeValidityArea_r15;
typedef enum LTE_MeasParameters_v1530__heightMeas_r15 {
	LTE_MeasParameters_v1530__heightMeas_r15_supported	= 0
} e_LTE_MeasParameters_v1530__heightMeas_r15;
typedef enum LTE_MeasParameters_v1530__multipleCellsMeasExtension_r15 {
	LTE_MeasParameters_v1530__multipleCellsMeasExtension_r15_supported	= 0
} e_LTE_MeasParameters_v1530__multipleCellsMeasExtension_r15;

/* LTE_MeasParameters-v1530 */
typedef struct LTE_MeasParameters_v1530 {
	long	*qoe_MeasReport_r15;	/* OPTIONAL */
	long	*qoe_MTSI_MeasReport_r15;	/* OPTIONAL */
	long	*ca_IdleModeMeasurements_r15;	/* OPTIONAL */
	long	*ca_IdleModeValidityArea_r15;	/* OPTIONAL */
	long	*heightMeas_r15;	/* OPTIONAL */
	long	*multipleCellsMeasExtension_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasParameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_qoe_MeasReport_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_qoe_MTSI_MeasReport_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ca_IdleModeMeasurements_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ca_IdleModeValidityArea_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_heightMeas_r15_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_multipleCellsMeasExtension_r15_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasParameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasParameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasParameters_v1530_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasParameters_v1530_H_ */
#include <asn_internal.h>
