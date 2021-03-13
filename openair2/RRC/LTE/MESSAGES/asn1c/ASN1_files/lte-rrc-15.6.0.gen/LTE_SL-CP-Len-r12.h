/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SL_CP_Len_r12_H_
#define	_LTE_SL_CP_Len_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_CP_Len_r12 {
	LTE_SL_CP_Len_r12_normal	= 0,
	LTE_SL_CP_Len_r12_extended	= 1
} e_LTE_SL_CP_Len_r12;

/* LTE_SL-CP-Len-r12 */
typedef long	 LTE_SL_CP_Len_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_SL_CP_Len_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_CP_Len_r12;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_SL_CP_Len_r12_specs_1;
asn_struct_free_f LTE_SL_CP_Len_r12_free;
asn_struct_print_f LTE_SL_CP_Len_r12_print;
asn_constr_check_f LTE_SL_CP_Len_r12_constraint;
ber_type_decoder_f LTE_SL_CP_Len_r12_decode_ber;
der_type_encoder_f LTE_SL_CP_Len_r12_encode_der;
xer_type_decoder_f LTE_SL_CP_Len_r12_decode_xer;
xer_type_encoder_f LTE_SL_CP_Len_r12_encode_xer;
per_type_decoder_f LTE_SL_CP_Len_r12_decode_uper;
per_type_encoder_f LTE_SL_CP_Len_r12_encode_uper;
per_type_decoder_f LTE_SL_CP_Len_r12_decode_aper;
per_type_encoder_f LTE_SL_CP_Len_r12_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_CP_Len_r12_H_ */
#include <asn_internal.h>
