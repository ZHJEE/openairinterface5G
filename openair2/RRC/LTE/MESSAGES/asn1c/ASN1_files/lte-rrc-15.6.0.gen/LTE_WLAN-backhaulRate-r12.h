/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_WLAN_backhaulRate_r12_H_
#define	_LTE_WLAN_backhaulRate_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_WLAN_backhaulRate_r12 {
	LTE_WLAN_backhaulRate_r12_r0	= 0,
	LTE_WLAN_backhaulRate_r12_r4	= 1,
	LTE_WLAN_backhaulRate_r12_r8	= 2,
	LTE_WLAN_backhaulRate_r12_r16	= 3,
	LTE_WLAN_backhaulRate_r12_r32	= 4,
	LTE_WLAN_backhaulRate_r12_r64	= 5,
	LTE_WLAN_backhaulRate_r12_r128	= 6,
	LTE_WLAN_backhaulRate_r12_r256	= 7,
	LTE_WLAN_backhaulRate_r12_r512	= 8,
	LTE_WLAN_backhaulRate_r12_r1024	= 9,
	LTE_WLAN_backhaulRate_r12_r2048	= 10,
	LTE_WLAN_backhaulRate_r12_r4096	= 11,
	LTE_WLAN_backhaulRate_r12_r8192	= 12,
	LTE_WLAN_backhaulRate_r12_r16384	= 13,
	LTE_WLAN_backhaulRate_r12_r32768	= 14,
	LTE_WLAN_backhaulRate_r12_r65536	= 15,
	LTE_WLAN_backhaulRate_r12_r131072	= 16,
	LTE_WLAN_backhaulRate_r12_r262144	= 17,
	LTE_WLAN_backhaulRate_r12_r524288	= 18,
	LTE_WLAN_backhaulRate_r12_r1048576	= 19,
	LTE_WLAN_backhaulRate_r12_r2097152	= 20,
	LTE_WLAN_backhaulRate_r12_r4194304	= 21,
	LTE_WLAN_backhaulRate_r12_r8388608	= 22,
	LTE_WLAN_backhaulRate_r12_r16777216	= 23,
	LTE_WLAN_backhaulRate_r12_r33554432	= 24,
	LTE_WLAN_backhaulRate_r12_r67108864	= 25,
	LTE_WLAN_backhaulRate_r12_r134217728	= 26,
	LTE_WLAN_backhaulRate_r12_r268435456	= 27,
	LTE_WLAN_backhaulRate_r12_r536870912	= 28,
	LTE_WLAN_backhaulRate_r12_r1073741824	= 29,
	LTE_WLAN_backhaulRate_r12_r2147483648	= 30,
	LTE_WLAN_backhaulRate_r12_r4294967296	= 31
} e_LTE_WLAN_backhaulRate_r12;

/* LTE_WLAN-backhaulRate-r12 */
typedef long	 LTE_WLAN_backhaulRate_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_WLAN_backhaulRate_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_WLAN_backhaulRate_r12;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_WLAN_backhaulRate_r12_specs_1;
asn_struct_free_f LTE_WLAN_backhaulRate_r12_free;
asn_struct_print_f LTE_WLAN_backhaulRate_r12_print;
asn_constr_check_f LTE_WLAN_backhaulRate_r12_constraint;
ber_type_decoder_f LTE_WLAN_backhaulRate_r12_decode_ber;
der_type_encoder_f LTE_WLAN_backhaulRate_r12_encode_der;
xer_type_decoder_f LTE_WLAN_backhaulRate_r12_decode_xer;
xer_type_encoder_f LTE_WLAN_backhaulRate_r12_encode_xer;
per_type_decoder_f LTE_WLAN_backhaulRate_r12_decode_uper;
per_type_encoder_f LTE_WLAN_backhaulRate_r12_encode_uper;
per_type_decoder_f LTE_WLAN_backhaulRate_r12_decode_aper;
per_type_encoder_f LTE_WLAN_backhaulRate_r12_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_WLAN_backhaulRate_r12_H_ */
#include <asn_internal.h>
