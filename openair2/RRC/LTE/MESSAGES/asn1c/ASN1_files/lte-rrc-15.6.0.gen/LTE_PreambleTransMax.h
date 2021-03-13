/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_PreambleTransMax_H_
#define	_LTE_PreambleTransMax_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PreambleTransMax {
	LTE_PreambleTransMax_n3	= 0,
	LTE_PreambleTransMax_n4	= 1,
	LTE_PreambleTransMax_n5	= 2,
	LTE_PreambleTransMax_n6	= 3,
	LTE_PreambleTransMax_n7	= 4,
	LTE_PreambleTransMax_n8	= 5,
	LTE_PreambleTransMax_n10	= 6,
	LTE_PreambleTransMax_n20	= 7,
	LTE_PreambleTransMax_n50	= 8,
	LTE_PreambleTransMax_n100	= 9,
	LTE_PreambleTransMax_n200	= 10
} e_LTE_PreambleTransMax;

/* LTE_PreambleTransMax */
typedef long	 LTE_PreambleTransMax_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_PreambleTransMax_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_PreambleTransMax;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_PreambleTransMax_specs_1;
asn_struct_free_f LTE_PreambleTransMax_free;
asn_struct_print_f LTE_PreambleTransMax_print;
asn_constr_check_f LTE_PreambleTransMax_constraint;
ber_type_decoder_f LTE_PreambleTransMax_decode_ber;
der_type_encoder_f LTE_PreambleTransMax_encode_der;
xer_type_decoder_f LTE_PreambleTransMax_decode_xer;
xer_type_encoder_f LTE_PreambleTransMax_encode_xer;
per_type_decoder_f LTE_PreambleTransMax_decode_uper;
per_type_encoder_f LTE_PreambleTransMax_encode_uper;
per_type_decoder_f LTE_PreambleTransMax_decode_aper;
per_type_encoder_f LTE_PreambleTransMax_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PreambleTransMax_H_ */
#include <asn_internal.h>
