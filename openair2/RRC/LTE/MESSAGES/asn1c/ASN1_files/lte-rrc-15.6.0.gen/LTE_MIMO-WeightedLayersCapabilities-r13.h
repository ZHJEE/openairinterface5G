/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MIMO_WeightedLayersCapabilities_r13_H_
#define	_LTE_MIMO_WeightedLayersCapabilities_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MIMO_WeightedLayersCapabilities_r13__relWeightTwoLayers_r13 {
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightTwoLayers_r13_v1	= 0,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightTwoLayers_r13_v1dot25	= 1,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightTwoLayers_r13_v1dot5	= 2,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightTwoLayers_r13_v1dot75	= 3,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightTwoLayers_r13_v2	= 4,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightTwoLayers_r13_v2dot5	= 5,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightTwoLayers_r13_v3	= 6,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightTwoLayers_r13_v4	= 7
} e_LTE_MIMO_WeightedLayersCapabilities_r13__relWeightTwoLayers_r13;
typedef enum LTE_MIMO_WeightedLayersCapabilities_r13__relWeightFourLayers_r13 {
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightFourLayers_r13_v1	= 0,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightFourLayers_r13_v1dot25	= 1,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightFourLayers_r13_v1dot5	= 2,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightFourLayers_r13_v1dot75	= 3,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightFourLayers_r13_v2	= 4,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightFourLayers_r13_v2dot5	= 5,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightFourLayers_r13_v3	= 6,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightFourLayers_r13_v4	= 7
} e_LTE_MIMO_WeightedLayersCapabilities_r13__relWeightFourLayers_r13;
typedef enum LTE_MIMO_WeightedLayersCapabilities_r13__relWeightEightLayers_r13 {
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightEightLayers_r13_v1	= 0,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightEightLayers_r13_v1dot25	= 1,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightEightLayers_r13_v1dot5	= 2,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightEightLayers_r13_v1dot75	= 3,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightEightLayers_r13_v2	= 4,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightEightLayers_r13_v2dot5	= 5,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightEightLayers_r13_v3	= 6,
	LTE_MIMO_WeightedLayersCapabilities_r13__relWeightEightLayers_r13_v4	= 7
} e_LTE_MIMO_WeightedLayersCapabilities_r13__relWeightEightLayers_r13;

/* LTE_MIMO-WeightedLayersCapabilities-r13 */
typedef struct LTE_MIMO_WeightedLayersCapabilities_r13 {
	long	 relWeightTwoLayers_r13;
	long	*relWeightFourLayers_r13;	/* OPTIONAL */
	long	*relWeightEightLayers_r13;	/* OPTIONAL */
	long	 totalWeightedLayers_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MIMO_WeightedLayersCapabilities_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_relWeightTwoLayers_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_relWeightFourLayers_r13_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_relWeightEightLayers_r13_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MIMO_WeightedLayersCapabilities_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MIMO_WeightedLayersCapabilities_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MIMO_WeightedLayersCapabilities_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MIMO_WeightedLayersCapabilities_r13_H_ */
#include <asn_internal.h>
