/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "R14/m2ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m2ap-14.0.0.gen/`
 */

#ifndef	_M2AP_MBMS_Session_ID_H_
#define	_M2AP_MBMS_Session_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* M2AP_MBMS-Session-ID */
typedef OCTET_STRING_t	 M2AP_MBMS_Session_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M2AP_MBMS_Session_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M2AP_MBMS_Session_ID;
asn_struct_free_f M2AP_MBMS_Session_ID_free;
asn_struct_print_f M2AP_MBMS_Session_ID_print;
asn_constr_check_f M2AP_MBMS_Session_ID_constraint;
ber_type_decoder_f M2AP_MBMS_Session_ID_decode_ber;
der_type_encoder_f M2AP_MBMS_Session_ID_encode_der;
xer_type_decoder_f M2AP_MBMS_Session_ID_decode_xer;
xer_type_encoder_f M2AP_MBMS_Session_ID_encode_xer;
per_type_decoder_f M2AP_MBMS_Session_ID_decode_uper;
per_type_encoder_f M2AP_MBMS_Session_ID_encode_uper;
per_type_decoder_f M2AP_MBMS_Session_ID_decode_aper;
per_type_encoder_f M2AP_MBMS_Session_ID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_MBMS_Session_ID_H_ */
#include <asn_internal.h>
