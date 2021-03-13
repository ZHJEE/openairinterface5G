/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_C_RNTI_H_
#define	_LTE_C_RNTI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_C-RNTI */
typedef BIT_STRING_t	 LTE_C_RNTI_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_C_RNTI_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_C_RNTI;
asn_struct_free_f LTE_C_RNTI_free;
asn_struct_print_f LTE_C_RNTI_print;
asn_constr_check_f LTE_C_RNTI_constraint;
ber_type_decoder_f LTE_C_RNTI_decode_ber;
der_type_encoder_f LTE_C_RNTI_encode_der;
xer_type_decoder_f LTE_C_RNTI_decode_xer;
xer_type_encoder_f LTE_C_RNTI_encode_xer;
per_type_decoder_f LTE_C_RNTI_decode_uper;
per_type_encoder_f LTE_C_RNTI_encode_uper;
per_type_decoder_f LTE_C_RNTI_decode_aper;
per_type_encoder_f LTE_C_RNTI_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_C_RNTI_H_ */
#include <asn_internal.h>
