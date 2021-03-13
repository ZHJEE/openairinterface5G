/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_E_CSFB_r9_H_
#define	_LTE_E_CSFB_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_E_CSFB_r9__mobilityCDMA2000_HRPD_r9 {
	LTE_E_CSFB_r9__mobilityCDMA2000_HRPD_r9_handover	= 0,
	LTE_E_CSFB_r9__mobilityCDMA2000_HRPD_r9_redirection	= 1
} e_LTE_E_CSFB_r9__mobilityCDMA2000_HRPD_r9;

/* Forward declarations */
struct LTE_CarrierFreqCDMA2000;

/* LTE_E-CSFB-r9 */
typedef struct LTE_E_CSFB_r9 {
	OCTET_STRING_t	*messageContCDMA2000_1XRTT_r9;	/* OPTIONAL */
	long	*mobilityCDMA2000_HRPD_r9;	/* OPTIONAL */
	OCTET_STRING_t	*messageContCDMA2000_HRPD_r9;	/* OPTIONAL */
	struct LTE_CarrierFreqCDMA2000	*redirectCarrierCDMA2000_HRPD_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_E_CSFB_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mobilityCDMA2000_HRPD_r9_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_E_CSFB_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_E_CSFB_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_E_CSFB_r9_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CarrierFreqCDMA2000.h"

#endif	/* _LTE_E_CSFB_r9_H_ */
#include <asn_internal.h>
