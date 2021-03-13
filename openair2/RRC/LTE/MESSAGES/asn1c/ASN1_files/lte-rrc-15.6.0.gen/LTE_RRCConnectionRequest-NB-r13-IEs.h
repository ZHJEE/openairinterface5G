/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_RRCConnectionRequest_NB_r13_IEs_H_
#define	_LTE_RRCConnectionRequest_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_InitialUE-Identity.h"
#include "LTE_EstablishmentCause-NB-r13.h"
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include "LTE_CQI-NPDCCH-NB-r14.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionRequest_NB_r13_IEs__multiToneSupport_r13 {
	LTE_RRCConnectionRequest_NB_r13_IEs__multiToneSupport_r13_true	= 0
} e_LTE_RRCConnectionRequest_NB_r13_IEs__multiToneSupport_r13;
typedef enum LTE_RRCConnectionRequest_NB_r13_IEs__multiCarrierSupport_r13 {
	LTE_RRCConnectionRequest_NB_r13_IEs__multiCarrierSupport_r13_true	= 0
} e_LTE_RRCConnectionRequest_NB_r13_IEs__multiCarrierSupport_r13;

/* LTE_RRCConnectionRequest-NB-r13-IEs */
typedef struct LTE_RRCConnectionRequest_NB_r13_IEs {
	LTE_InitialUE_Identity_t	 ue_Identity_r13;
	LTE_EstablishmentCause_NB_r13_t	 establishmentCause_r13;
	long	*multiToneSupport_r13;	/* OPTIONAL */
	long	*multiCarrierSupport_r13;	/* OPTIONAL */
	BOOLEAN_t	 earlyContentionResolution_r14;
	LTE_CQI_NPDCCH_NB_r14_t	 cqi_NPDCCH_r14;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionRequest_NB_r13_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_multiToneSupport_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_multiCarrierSupport_r13_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionRequest_NB_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionRequest_NB_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionRequest_NB_r13_IEs_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionRequest_NB_r13_IEs_H_ */
#include <asn_internal.h>
