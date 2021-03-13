/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v1470_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v1470_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MBMS_Parameters_v1470;
struct LTE_PhyLayerParameters_v1470;
struct LTE_RF_Parameters_v1470;
struct LTE_UE_EUTRA_Capability_v14a0_IEs;

/* LTE_UE-EUTRA-Capability-v1470-IEs */
typedef struct LTE_UE_EUTRA_Capability_v1470_IEs {
	struct LTE_MBMS_Parameters_v1470	*mbms_Parameters_v1470;	/* OPTIONAL */
	struct LTE_PhyLayerParameters_v1470	*phyLayerParameters_v1470;	/* OPTIONAL */
	struct LTE_RF_Parameters_v1470	*rf_Parameters_v1470;	/* OPTIONAL */
	struct LTE_UE_EUTRA_Capability_v14a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v1470_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1470_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1470_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1470_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MBMS-Parameters-v1470.h"
#include "LTE_PhyLayerParameters-v1470.h"
#include "LTE_RF-Parameters-v1470.h"
#include "LTE_UE-EUTRA-Capability-v14a0-IEs.h"

#endif	/* _LTE_UE_EUTRA_Capability_v1470_IEs_H_ */
#include <asn_internal.h>
