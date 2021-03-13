/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_PeriodicBSR_Timer_r12_H_
#define	_LTE_PeriodicBSR_Timer_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PeriodicBSR_Timer_r12 {
	LTE_PeriodicBSR_Timer_r12_sf5	= 0,
	LTE_PeriodicBSR_Timer_r12_sf10	= 1,
	LTE_PeriodicBSR_Timer_r12_sf16	= 2,
	LTE_PeriodicBSR_Timer_r12_sf20	= 3,
	LTE_PeriodicBSR_Timer_r12_sf32	= 4,
	LTE_PeriodicBSR_Timer_r12_sf40	= 5,
	LTE_PeriodicBSR_Timer_r12_sf64	= 6,
	LTE_PeriodicBSR_Timer_r12_sf80	= 7,
	LTE_PeriodicBSR_Timer_r12_sf128	= 8,
	LTE_PeriodicBSR_Timer_r12_sf160	= 9,
	LTE_PeriodicBSR_Timer_r12_sf320	= 10,
	LTE_PeriodicBSR_Timer_r12_sf640	= 11,
	LTE_PeriodicBSR_Timer_r12_sf1280	= 12,
	LTE_PeriodicBSR_Timer_r12_sf2560	= 13,
	LTE_PeriodicBSR_Timer_r12_infinity	= 14,
	LTE_PeriodicBSR_Timer_r12_spare1	= 15
} e_LTE_PeriodicBSR_Timer_r12;

/* LTE_PeriodicBSR-Timer-r12 */
typedef long	 LTE_PeriodicBSR_Timer_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_PeriodicBSR_Timer_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_PeriodicBSR_Timer_r12;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_PeriodicBSR_Timer_r12_specs_1;
asn_struct_free_f LTE_PeriodicBSR_Timer_r12_free;
asn_struct_print_f LTE_PeriodicBSR_Timer_r12_print;
asn_constr_check_f LTE_PeriodicBSR_Timer_r12_constraint;
ber_type_decoder_f LTE_PeriodicBSR_Timer_r12_decode_ber;
der_type_encoder_f LTE_PeriodicBSR_Timer_r12_encode_der;
xer_type_decoder_f LTE_PeriodicBSR_Timer_r12_decode_xer;
xer_type_encoder_f LTE_PeriodicBSR_Timer_r12_encode_xer;
per_type_decoder_f LTE_PeriodicBSR_Timer_r12_decode_uper;
per_type_encoder_f LTE_PeriodicBSR_Timer_r12_encode_uper;
per_type_decoder_f LTE_PeriodicBSR_Timer_r12_decode_aper;
per_type_encoder_f LTE_PeriodicBSR_Timer_r12_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PeriodicBSR_Timer_r12_H_ */
#include <asn_internal.h>
