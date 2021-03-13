/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_ReselectionInfoRelay_r13_H_
#define	_LTE_ReselectionInfoRelay_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_Q-RxLevMin.h"
#include "LTE_FilterCoefficient.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_ReselectionInfoRelay_r13__minHyst_r13 {
	LTE_ReselectionInfoRelay_r13__minHyst_r13_dB0	= 0,
	LTE_ReselectionInfoRelay_r13__minHyst_r13_dB3	= 1,
	LTE_ReselectionInfoRelay_r13__minHyst_r13_dB6	= 2,
	LTE_ReselectionInfoRelay_r13__minHyst_r13_dB9	= 3,
	LTE_ReselectionInfoRelay_r13__minHyst_r13_dB12	= 4,
	LTE_ReselectionInfoRelay_r13__minHyst_r13_dBinf	= 5
} e_LTE_ReselectionInfoRelay_r13__minHyst_r13;

/* LTE_ReselectionInfoRelay-r13 */
typedef struct LTE_ReselectionInfoRelay_r13 {
	LTE_Q_RxLevMin_t	 q_RxLevMin_r13;
	LTE_FilterCoefficient_t	 filterCoefficient_r13;
	long	*minHyst_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ReselectionInfoRelay_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_minHyst_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ReselectionInfoRelay_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ReselectionInfoRelay_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ReselectionInfoRelay_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_ReselectionInfoRelay_r13_H_ */
#include <asn_internal.h>
