/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UE_Capability_NB_v1530_IEs_H_
#define	_LTE_UE_Capability_NB_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_RLC-Parameters-NB-r15.h"
#include "LTE_MAC-Parameters-NB-v1530.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UE_Capability_NB_v1530_IEs__earlyData_UP_r15 {
	LTE_UE_Capability_NB_v1530_IEs__earlyData_UP_r15_supported	= 0
} e_LTE_UE_Capability_NB_v1530_IEs__earlyData_UP_r15;

/* Forward declarations */
struct LTE_PhyLayerParameters_NB_v1530;
struct LTE_TDD_UE_Capability_NB_r15;

/* LTE_UE-Capability-NB-v1530-IEs */
typedef struct LTE_UE_Capability_NB_v1530_IEs {
	long	*earlyData_UP_r15;	/* OPTIONAL */
	LTE_RLC_Parameters_NB_r15_t	 rlc_Parameters_r15;
	LTE_MAC_Parameters_NB_v1530_t	 mac_Parameters_v1530;
	struct LTE_PhyLayerParameters_NB_v1530	*phyLayerParameters_v1530;	/* OPTIONAL */
	struct LTE_TDD_UE_Capability_NB_r15	*tdd_UE_Capability_r15;	/* OPTIONAL */
	struct LTE_UE_Capability_NB_v1530_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_Capability_NB_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_earlyData_UP_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_Capability_NB_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_Capability_NB_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_Capability_NB_v1530_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhyLayerParameters-NB-v1530.h"
#include "LTE_TDD-UE-Capability-NB-r15.h"

#endif	/* _LTE_UE_Capability_NB_v1530_IEs_H_ */
#include <asn_internal.h>
