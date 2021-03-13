/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_RadioResourceConfigDedicatedPSCell_r12_H_
#define	_LTE_RadioResourceConfigDedicatedPSCell_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhysicalConfigDedicated;
struct LTE_SPS_Config;
struct LTE_NAICS_AssistanceInfo_r12;
struct LTE_NeighCellsCRS_Info_r13;
struct LTE_SPS_Config_v1430;
struct LTE_SPS_Config_v1530;
struct LTE_NeighCellsCRS_Info_r15;
struct LTE_SPS_Config_v1540;

/* LTE_RadioResourceConfigDedicatedPSCell-r12 */
typedef struct LTE_RadioResourceConfigDedicatedPSCell_r12 {
	struct LTE_PhysicalConfigDedicated	*physicalConfigDedicatedPSCell_r12;	/* OPTIONAL */
	struct LTE_SPS_Config	*sps_Config_r12;	/* OPTIONAL */
	struct LTE_NAICS_AssistanceInfo_r12	*naics_Info_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_RadioResourceConfigDedicatedPSCell_r12__ext1 {
		struct LTE_NeighCellsCRS_Info_r13	*neighCellsCRS_InfoPSCell_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_RadioResourceConfigDedicatedPSCell_r12__ext2 {
		struct LTE_SPS_Config_v1430	*sps_Config_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_RadioResourceConfigDedicatedPSCell_r12__ext3 {
		struct LTE_SPS_Config_v1530	*sps_Config_v1530;	/* OPTIONAL */
		BOOLEAN_t	*crs_IntfMitigEnabled_r15;	/* OPTIONAL */
		struct LTE_NeighCellsCRS_Info_r15	*neighCellsCRS_Info_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_RadioResourceConfigDedicatedPSCell_r12__ext4 {
		struct LTE_SPS_Config_v1540	*sps_Config_v1540;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RadioResourceConfigDedicatedPSCell_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RadioResourceConfigDedicatedPSCell_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RadioResourceConfigDedicatedPSCell_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RadioResourceConfigDedicatedPSCell_r12_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhysicalConfigDedicated.h"
#include "LTE_SPS-Config.h"
#include "LTE_NAICS-AssistanceInfo-r12.h"
#include "LTE_NeighCellsCRS-Info-r13.h"
#include "LTE_SPS-Config-v1430.h"
#include "LTE_SPS-Config-v1530.h"
#include "LTE_NeighCellsCRS-Info-r15.h"
#include "LTE_SPS-Config-v1540.h"

#endif	/* _LTE_RadioResourceConfigDedicatedPSCell_r12_H_ */
#include <asn_internal.h>
