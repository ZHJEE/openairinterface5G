/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UE_BasedNetwPerfMeasParameters_r10_H_
#define	_LTE_UE_BasedNetwPerfMeasParameters_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UE_BasedNetwPerfMeasParameters_r10__loggedMeasurementsIdle_r10 {
	LTE_UE_BasedNetwPerfMeasParameters_r10__loggedMeasurementsIdle_r10_supported	= 0
} e_LTE_UE_BasedNetwPerfMeasParameters_r10__loggedMeasurementsIdle_r10;
typedef enum LTE_UE_BasedNetwPerfMeasParameters_r10__standaloneGNSS_Location_r10 {
	LTE_UE_BasedNetwPerfMeasParameters_r10__standaloneGNSS_Location_r10_supported	= 0
} e_LTE_UE_BasedNetwPerfMeasParameters_r10__standaloneGNSS_Location_r10;

/* LTE_UE-BasedNetwPerfMeasParameters-r10 */
typedef struct LTE_UE_BasedNetwPerfMeasParameters_r10 {
	long	*loggedMeasurementsIdle_r10;	/* OPTIONAL */
	long	*standaloneGNSS_Location_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_BasedNetwPerfMeasParameters_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_loggedMeasurementsIdle_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_standaloneGNSS_Location_r10_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_BasedNetwPerfMeasParameters_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_BasedNetwPerfMeasParameters_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UE_BasedNetwPerfMeasParameters_r10_H_ */
#include <asn_internal.h>
