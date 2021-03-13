/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#ifndef	_F1AP_FiveGS_TAC_H_
#define	_F1AP_FiveGS_TAC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* F1AP_FiveGS-TAC */
typedef OCTET_STRING_t	 F1AP_FiveGS_TAC_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_FiveGS_TAC_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_FiveGS_TAC;
asn_struct_free_f F1AP_FiveGS_TAC_free;
asn_struct_print_f F1AP_FiveGS_TAC_print;
asn_constr_check_f F1AP_FiveGS_TAC_constraint;
ber_type_decoder_f F1AP_FiveGS_TAC_decode_ber;
der_type_encoder_f F1AP_FiveGS_TAC_encode_der;
xer_type_decoder_f F1AP_FiveGS_TAC_decode_xer;
xer_type_encoder_f F1AP_FiveGS_TAC_encode_xer;
per_type_decoder_f F1AP_FiveGS_TAC_decode_uper;
per_type_encoder_f F1AP_FiveGS_TAC_encode_uper;
per_type_decoder_f F1AP_FiveGS_TAC_decode_aper;
per_type_encoder_f F1AP_FiveGS_TAC_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_FiveGS_TAC_H_ */
#include <asn_internal.h>
