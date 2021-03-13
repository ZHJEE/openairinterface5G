/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#ifndef	_F1AP_NRNRB_H_
#define	_F1AP_NRNRB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_NRNRB {
	F1AP_NRNRB_nrb11	= 0,
	F1AP_NRNRB_nrb18	= 1,
	F1AP_NRNRB_nrb24	= 2,
	F1AP_NRNRB_nrb25	= 3,
	F1AP_NRNRB_nrb31	= 4,
	F1AP_NRNRB_nrb32	= 5,
	F1AP_NRNRB_nrb38	= 6,
	F1AP_NRNRB_nrb51	= 7,
	F1AP_NRNRB_nrb52	= 8,
	F1AP_NRNRB_nrb65	= 9,
	F1AP_NRNRB_nrb66	= 10,
	F1AP_NRNRB_nrb78	= 11,
	F1AP_NRNRB_nrb79	= 12,
	F1AP_NRNRB_nrb93	= 13,
	F1AP_NRNRB_nrb106	= 14,
	F1AP_NRNRB_nrb107	= 15,
	F1AP_NRNRB_nrb121	= 16,
	F1AP_NRNRB_nrb132	= 17,
	F1AP_NRNRB_nrb133	= 18,
	F1AP_NRNRB_nrb135	= 19,
	F1AP_NRNRB_nrb160	= 20,
	F1AP_NRNRB_nrb162	= 21,
	F1AP_NRNRB_nrb189	= 22,
	F1AP_NRNRB_nrb216	= 23,
	F1AP_NRNRB_nrb217	= 24,
	F1AP_NRNRB_nrb245	= 25,
	F1AP_NRNRB_nrb264	= 26,
	F1AP_NRNRB_nrb270	= 27,
	F1AP_NRNRB_nrb273	= 28
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_NRNRB;

/* F1AP_NRNRB */
typedef long	 F1AP_NRNRB_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_NRNRB_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_NRNRB;
extern const asn_INTEGER_specifics_t asn_SPC_F1AP_NRNRB_specs_1;
asn_struct_free_f F1AP_NRNRB_free;
asn_struct_print_f F1AP_NRNRB_print;
asn_constr_check_f F1AP_NRNRB_constraint;
ber_type_decoder_f F1AP_NRNRB_decode_ber;
der_type_encoder_f F1AP_NRNRB_encode_der;
xer_type_decoder_f F1AP_NRNRB_decode_xer;
xer_type_encoder_f F1AP_NRNRB_encode_xer;
per_type_decoder_f F1AP_NRNRB_decode_uper;
per_type_encoder_f F1AP_NRNRB_encode_uper;
per_type_decoder_f F1AP_NRNRB_decode_aper;
per_type_encoder_f F1AP_NRNRB_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_NRNRB_H_ */
#include <asn_internal.h>
