/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_CFI_Config_r15_H_
#define	_LTE_CFI_Config_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CFI-Config-r15 */
typedef struct LTE_CFI_Config_r15 {
	long	*cfi_SubframeNonMBSFN_r15;	/* OPTIONAL */
	long	*cfi_SlotSubslotNonMBSFN_r15;	/* OPTIONAL */
	long	*cfi_SubframeMBSFN_r15;	/* OPTIONAL */
	long	*cfi_SlotSubslotMBSFN_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CFI_Config_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CFI_Config_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CFI_Config_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CFI_Config_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CFI_Config_r15_H_ */
#include <asn_internal.h>
