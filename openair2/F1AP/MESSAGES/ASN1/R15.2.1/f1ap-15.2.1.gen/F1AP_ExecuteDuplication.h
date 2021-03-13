/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#ifndef	_F1AP_ExecuteDuplication_H_
#define	_F1AP_ExecuteDuplication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_ExecuteDuplication {
	F1AP_ExecuteDuplication_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_ExecuteDuplication;

/* F1AP_ExecuteDuplication */
typedef long	 F1AP_ExecuteDuplication_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_ExecuteDuplication_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_ExecuteDuplication;
extern const asn_INTEGER_specifics_t asn_SPC_F1AP_ExecuteDuplication_specs_1;
asn_struct_free_f F1AP_ExecuteDuplication_free;
asn_struct_print_f F1AP_ExecuteDuplication_print;
asn_constr_check_f F1AP_ExecuteDuplication_constraint;
ber_type_decoder_f F1AP_ExecuteDuplication_decode_ber;
der_type_encoder_f F1AP_ExecuteDuplication_encode_der;
xer_type_decoder_f F1AP_ExecuteDuplication_decode_xer;
xer_type_encoder_f F1AP_ExecuteDuplication_encode_xer;
per_type_decoder_f F1AP_ExecuteDuplication_decode_uper;
per_type_encoder_f F1AP_ExecuteDuplication_encode_uper;
per_type_decoder_f F1AP_ExecuteDuplication_decode_aper;
per_type_encoder_f F1AP_ExecuteDuplication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_ExecuteDuplication_H_ */
#include <asn_internal.h>
