/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SC_MCCH_Message_r13_H_
#define	_LTE_SC_MCCH_Message_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SC-MCCH-MessageType-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_SC-MCCH-Message-r13 */
typedef struct LTE_SC_MCCH_Message_r13 {
	LTE_SC_MCCH_MessageType_r13_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SC_MCCH_Message_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SC_MCCH_Message_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SC_MCCH_Message_r13_H_ */
#include <asn_internal.h>
