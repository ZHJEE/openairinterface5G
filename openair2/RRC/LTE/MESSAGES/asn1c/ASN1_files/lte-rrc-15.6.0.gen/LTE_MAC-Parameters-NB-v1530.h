/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MAC_Parameters_NB_v1530_H_
#define	_LTE_MAC_Parameters_NB_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MAC_Parameters_NB_v1530__sr_SPS_BSR_r15 {
	LTE_MAC_Parameters_NB_v1530__sr_SPS_BSR_r15_supported	= 0
} e_LTE_MAC_Parameters_NB_v1530__sr_SPS_BSR_r15;

/* LTE_MAC-Parameters-NB-v1530 */
typedef struct LTE_MAC_Parameters_NB_v1530 {
	long	*sr_SPS_BSR_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MAC_Parameters_NB_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sr_SPS_BSR_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MAC_Parameters_NB_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MAC_Parameters_NB_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MAC_Parameters_NB_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MAC_Parameters_NB_v1530_H_ */
#include <asn_internal.h>
