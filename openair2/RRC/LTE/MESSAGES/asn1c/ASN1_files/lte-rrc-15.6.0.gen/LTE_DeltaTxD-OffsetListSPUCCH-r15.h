/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_DeltaTxD_OffsetListSPUCCH_r15_H_
#define	_LTE_DeltaTxD_OffsetListSPUCCH_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1_r15 {
	LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1_r15_dB0	= 0,
	LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1_r15_dB_2	= 1
} e_LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1_r15;
typedef enum LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1a_r15 {
	LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1a_r15_dB0	= 0,
	LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1a_r15_dB_2	= 1
} e_LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1a_r15;
typedef enum LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1b_r15 {
	LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1b_r15_dB0	= 0,
	LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1b_r15_dB_2	= 1
} e_LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1b_r15;
typedef enum LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format3_r15 {
	LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format3_r15_dB0	= 0,
	LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format3_r15_dB_2	= 1
} e_LTE_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format3_r15;

/* LTE_DeltaTxD-OffsetListSPUCCH-r15 */
typedef struct LTE_DeltaTxD_OffsetListSPUCCH_r15 {
	long	 deltaTxD_OffsetSPUCCH_Format1_r15;
	long	 deltaTxD_OffsetSPUCCH_Format1a_r15;
	long	 deltaTxD_OffsetSPUCCH_Format1b_r15;
	long	 deltaTxD_OffsetSPUCCH_Format3_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DeltaTxD_OffsetListSPUCCH_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaTxD_OffsetSPUCCH_Format1_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaTxD_OffsetSPUCCH_Format1a_r15_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaTxD_OffsetSPUCCH_Format1b_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaTxD_OffsetSPUCCH_Format3_r15_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DeltaTxD_OffsetListSPUCCH_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_DeltaTxD_OffsetListSPUCCH_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DeltaTxD_OffsetListSPUCCH_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DeltaTxD_OffsetListSPUCCH_r15_H_ */
#include <asn_internal.h>
