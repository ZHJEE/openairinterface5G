/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_LoggingInterval_r10_H_
#define	_LTE_LoggingInterval_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_LoggingInterval_r10 {
	LTE_LoggingInterval_r10_ms1280	= 0,
	LTE_LoggingInterval_r10_ms2560	= 1,
	LTE_LoggingInterval_r10_ms5120	= 2,
	LTE_LoggingInterval_r10_ms10240	= 3,
	LTE_LoggingInterval_r10_ms20480	= 4,
	LTE_LoggingInterval_r10_ms30720	= 5,
	LTE_LoggingInterval_r10_ms40960	= 6,
	LTE_LoggingInterval_r10_ms61440	= 7
} e_LTE_LoggingInterval_r10;

/* LTE_LoggingInterval-r10 */
typedef long	 LTE_LoggingInterval_r10_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_LoggingInterval_r10_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_LoggingInterval_r10;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_LoggingInterval_r10_specs_1;
asn_struct_free_f LTE_LoggingInterval_r10_free;
asn_struct_print_f LTE_LoggingInterval_r10_print;
asn_constr_check_f LTE_LoggingInterval_r10_constraint;
ber_type_decoder_f LTE_LoggingInterval_r10_decode_ber;
der_type_encoder_f LTE_LoggingInterval_r10_encode_der;
xer_type_decoder_f LTE_LoggingInterval_r10_decode_xer;
xer_type_encoder_f LTE_LoggingInterval_r10_encode_xer;
per_type_decoder_f LTE_LoggingInterval_r10_decode_uper;
per_type_encoder_f LTE_LoggingInterval_r10_encode_uper;
per_type_decoder_f LTE_LoggingInterval_r10_decode_aper;
per_type_encoder_f LTE_LoggingInterval_r10_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_LoggingInterval_r10_H_ */
#include <asn_internal.h>
