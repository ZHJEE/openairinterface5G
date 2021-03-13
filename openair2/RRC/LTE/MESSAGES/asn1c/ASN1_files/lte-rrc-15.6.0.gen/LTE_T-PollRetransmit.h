/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_T_PollRetransmit_H_
#define	_LTE_T_PollRetransmit_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_T_PollRetransmit {
	LTE_T_PollRetransmit_ms5	= 0,
	LTE_T_PollRetransmit_ms10	= 1,
	LTE_T_PollRetransmit_ms15	= 2,
	LTE_T_PollRetransmit_ms20	= 3,
	LTE_T_PollRetransmit_ms25	= 4,
	LTE_T_PollRetransmit_ms30	= 5,
	LTE_T_PollRetransmit_ms35	= 6,
	LTE_T_PollRetransmit_ms40	= 7,
	LTE_T_PollRetransmit_ms45	= 8,
	LTE_T_PollRetransmit_ms50	= 9,
	LTE_T_PollRetransmit_ms55	= 10,
	LTE_T_PollRetransmit_ms60	= 11,
	LTE_T_PollRetransmit_ms65	= 12,
	LTE_T_PollRetransmit_ms70	= 13,
	LTE_T_PollRetransmit_ms75	= 14,
	LTE_T_PollRetransmit_ms80	= 15,
	LTE_T_PollRetransmit_ms85	= 16,
	LTE_T_PollRetransmit_ms90	= 17,
	LTE_T_PollRetransmit_ms95	= 18,
	LTE_T_PollRetransmit_ms100	= 19,
	LTE_T_PollRetransmit_ms105	= 20,
	LTE_T_PollRetransmit_ms110	= 21,
	LTE_T_PollRetransmit_ms115	= 22,
	LTE_T_PollRetransmit_ms120	= 23,
	LTE_T_PollRetransmit_ms125	= 24,
	LTE_T_PollRetransmit_ms130	= 25,
	LTE_T_PollRetransmit_ms135	= 26,
	LTE_T_PollRetransmit_ms140	= 27,
	LTE_T_PollRetransmit_ms145	= 28,
	LTE_T_PollRetransmit_ms150	= 29,
	LTE_T_PollRetransmit_ms155	= 30,
	LTE_T_PollRetransmit_ms160	= 31,
	LTE_T_PollRetransmit_ms165	= 32,
	LTE_T_PollRetransmit_ms170	= 33,
	LTE_T_PollRetransmit_ms175	= 34,
	LTE_T_PollRetransmit_ms180	= 35,
	LTE_T_PollRetransmit_ms185	= 36,
	LTE_T_PollRetransmit_ms190	= 37,
	LTE_T_PollRetransmit_ms195	= 38,
	LTE_T_PollRetransmit_ms200	= 39,
	LTE_T_PollRetransmit_ms205	= 40,
	LTE_T_PollRetransmit_ms210	= 41,
	LTE_T_PollRetransmit_ms215	= 42,
	LTE_T_PollRetransmit_ms220	= 43,
	LTE_T_PollRetransmit_ms225	= 44,
	LTE_T_PollRetransmit_ms230	= 45,
	LTE_T_PollRetransmit_ms235	= 46,
	LTE_T_PollRetransmit_ms240	= 47,
	LTE_T_PollRetransmit_ms245	= 48,
	LTE_T_PollRetransmit_ms250	= 49,
	LTE_T_PollRetransmit_ms300	= 50,
	LTE_T_PollRetransmit_ms350	= 51,
	LTE_T_PollRetransmit_ms400	= 52,
	LTE_T_PollRetransmit_ms450	= 53,
	LTE_T_PollRetransmit_ms500	= 54,
	LTE_T_PollRetransmit_ms800_v1310	= 55,
	LTE_T_PollRetransmit_ms1000_v1310	= 56,
	LTE_T_PollRetransmit_ms2000_v1310	= 57,
	LTE_T_PollRetransmit_ms4000_v1310	= 58,
	LTE_T_PollRetransmit_spare5	= 59,
	LTE_T_PollRetransmit_spare4	= 60,
	LTE_T_PollRetransmit_spare3	= 61,
	LTE_T_PollRetransmit_spare2	= 62,
	LTE_T_PollRetransmit_spare1	= 63
} e_LTE_T_PollRetransmit;

/* LTE_T-PollRetransmit */
typedef long	 LTE_T_PollRetransmit_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_T_PollRetransmit_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_T_PollRetransmit;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_T_PollRetransmit_specs_1;
asn_struct_free_f LTE_T_PollRetransmit_free;
asn_struct_print_f LTE_T_PollRetransmit_print;
asn_constr_check_f LTE_T_PollRetransmit_constraint;
ber_type_decoder_f LTE_T_PollRetransmit_decode_ber;
der_type_encoder_f LTE_T_PollRetransmit_encode_der;
xer_type_decoder_f LTE_T_PollRetransmit_decode_xer;
xer_type_encoder_f LTE_T_PollRetransmit_encode_xer;
per_type_decoder_f LTE_T_PollRetransmit_decode_uper;
per_type_encoder_f LTE_T_PollRetransmit_encode_uper;
per_type_decoder_f LTE_T_PollRetransmit_decode_aper;
per_type_encoder_f LTE_T_PollRetransmit_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_T_PollRetransmit_H_ */
#include <asn_internal.h>
