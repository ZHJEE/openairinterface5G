/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_DL_DCCH_Message_H_
#define	_LTE_DL_DCCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_DL-DCCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_DL-DCCH-Message */
typedef struct LTE_DL_DCCH_Message {
	LTE_DL_DCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DL_DCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DL_DCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DL_DCCH_Message_H_ */
#include <asn_internal.h>
