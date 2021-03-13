/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v1250_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v1250_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhyLayerParameters_v1250;
struct LTE_RF_Parameters_v1250;
struct LTE_RLC_Parameters_r12;
struct LTE_UE_BasedNetwPerfMeasParameters_v1250;
struct LTE_WLAN_IW_Parameters_r12;
struct LTE_MeasParameters_v1250;
struct LTE_DC_Parameters_r12;
struct LTE_MBMS_Parameters_v1250;
struct LTE_MAC_Parameters_r12;
struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1250;
struct LTE_SL_Parameters_r12;
struct LTE_UE_EUTRA_Capability_v1260_IEs;

/* LTE_UE-EUTRA-Capability-v1250-IEs */
typedef struct LTE_UE_EUTRA_Capability_v1250_IEs {
	struct LTE_PhyLayerParameters_v1250	*phyLayerParameters_v1250;	/* OPTIONAL */
	struct LTE_RF_Parameters_v1250	*rf_Parameters_v1250;	/* OPTIONAL */
	struct LTE_RLC_Parameters_r12	*rlc_Parameters_r12;	/* OPTIONAL */
	struct LTE_UE_BasedNetwPerfMeasParameters_v1250	*ue_BasedNetwPerfMeasParameters_v1250;	/* OPTIONAL */
	long	*ue_CategoryDL_r12;	/* OPTIONAL */
	long	*ue_CategoryUL_r12;	/* OPTIONAL */
	struct LTE_WLAN_IW_Parameters_r12	*wlan_IW_Parameters_r12;	/* OPTIONAL */
	struct LTE_MeasParameters_v1250	*measParameters_v1250;	/* OPTIONAL */
	struct LTE_DC_Parameters_r12	*dc_Parameters_r12;	/* OPTIONAL */
	struct LTE_MBMS_Parameters_v1250	*mbms_Parameters_v1250;	/* OPTIONAL */
	struct LTE_MAC_Parameters_r12	*mac_Parameters_r12;	/* OPTIONAL */
	struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1250	*fdd_Add_UE_EUTRA_Capabilities_v1250;	/* OPTIONAL */
	struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1250	*tdd_Add_UE_EUTRA_Capabilities_v1250;	/* OPTIONAL */
	struct LTE_SL_Parameters_r12	*sl_Parameters_r12;	/* OPTIONAL */
	struct LTE_UE_EUTRA_Capability_v1260_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v1250_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1250_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1250_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1250_IEs_1[15];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhyLayerParameters-v1250.h"
#include "LTE_RF-Parameters-v1250.h"
#include "LTE_RLC-Parameters-r12.h"
#include "LTE_UE-BasedNetwPerfMeasParameters-v1250.h"
#include "LTE_WLAN-IW-Parameters-r12.h"
#include "LTE_MeasParameters-v1250.h"
#include "LTE_DC-Parameters-r12.h"
#include "LTE_MBMS-Parameters-v1250.h"
#include "LTE_MAC-Parameters-r12.h"
#include "LTE_UE-EUTRA-CapabilityAddXDD-Mode-v1250.h"
#include "LTE_SL-Parameters-r12.h"
#include "LTE_UE-EUTRA-Capability-v1260-IEs.h"

#endif	/* _LTE_UE_EUTRA_Capability_v1250_IEs_H_ */
#include <asn_internal.h>
