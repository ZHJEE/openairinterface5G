/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_BandCombinationParameters_r11_H_
#define	_LTE_BandCombinationParameters_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SupportedBandwidthCombinationSet-r10.h"
#include <NativeEnumerated.h>
#include "LTE_BandInfoEUTRA.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BandCombinationParameters_r11__multipleTimingAdvance_r11 {
	LTE_BandCombinationParameters_r11__multipleTimingAdvance_r11_supported	= 0
} e_LTE_BandCombinationParameters_r11__multipleTimingAdvance_r11;
typedef enum LTE_BandCombinationParameters_r11__simultaneousRx_Tx_r11 {
	LTE_BandCombinationParameters_r11__simultaneousRx_Tx_r11_supported	= 0
} e_LTE_BandCombinationParameters_r11__simultaneousRx_Tx_r11;

/* Forward declarations */
struct LTE_BandParameters_r11;

/* LTE_BandCombinationParameters-r11 */
typedef struct LTE_BandCombinationParameters_r11 {
	struct LTE_BandCombinationParameters_r11__bandParameterList_r11 {
		A_SEQUENCE_OF(struct LTE_BandParameters_r11) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bandParameterList_r11;
	LTE_SupportedBandwidthCombinationSet_r10_t	*supportedBandwidthCombinationSet_r11;	/* OPTIONAL */
	long	*multipleTimingAdvance_r11;	/* OPTIONAL */
	long	*simultaneousRx_Tx_r11;	/* OPTIONAL */
	LTE_BandInfoEUTRA_t	 bandInfoEUTRA_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandCombinationParameters_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_multipleTimingAdvance_r11_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_simultaneousRx_Tx_r11_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandCombinationParameters_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandCombinationParameters_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandCombinationParameters_r11_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_BandParameters-r11.h"

#endif	/* _LTE_BandCombinationParameters_r11_H_ */
#include <asn_internal.h>
