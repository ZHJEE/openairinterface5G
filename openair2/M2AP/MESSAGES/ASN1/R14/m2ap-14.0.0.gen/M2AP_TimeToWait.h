/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "R14/m2ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m2ap-14.0.0.gen/`
 */

#ifndef	_M2AP_TimeToWait_H_
#define	_M2AP_TimeToWait_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M2AP_TimeToWait {
	M2AP_TimeToWait_v1s	= 0,
	M2AP_TimeToWait_v2s	= 1,
	M2AP_TimeToWait_v5s	= 2,
	M2AP_TimeToWait_v10s	= 3,
	M2AP_TimeToWait_v20s	= 4,
	M2AP_TimeToWait_v60s	= 5
	/*
	 * Enumeration is extensible
	 */
} e_M2AP_TimeToWait;

/* M2AP_TimeToWait */
typedef long	 M2AP_TimeToWait_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M2AP_TimeToWait_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M2AP_TimeToWait;
extern const asn_INTEGER_specifics_t asn_SPC_M2AP_TimeToWait_specs_1;
asn_struct_free_f M2AP_TimeToWait_free;
asn_struct_print_f M2AP_TimeToWait_print;
asn_constr_check_f M2AP_TimeToWait_constraint;
ber_type_decoder_f M2AP_TimeToWait_decode_ber;
der_type_encoder_f M2AP_TimeToWait_encode_der;
xer_type_decoder_f M2AP_TimeToWait_decode_xer;
xer_type_encoder_f M2AP_TimeToWait_encode_xer;
per_type_decoder_f M2AP_TimeToWait_decode_uper;
per_type_encoder_f M2AP_TimeToWait_encode_uper;
per_type_decoder_f M2AP_TimeToWait_decode_aper;
per_type_encoder_f M2AP_TimeToWait_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_TimeToWait_H_ */
#include <asn_internal.h>
