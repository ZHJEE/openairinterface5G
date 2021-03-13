/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MeasResultRSSI_SCG_r13_H_
#define	_LTE_MeasResultRSSI_SCG_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ServCellIndex-r13.h"
#include "LTE_MeasResultForRSSI-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_MeasResultRSSI-SCG-r13 */
typedef struct LTE_MeasResultRSSI_SCG_r13 {
	LTE_ServCellIndex_r13_t	 servCellId_r13;
	LTE_MeasResultForRSSI_r13_t	 measResultForRSSI_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResultRSSI_SCG_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultRSSI_SCG_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResultRSSI_SCG_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasResultRSSI_SCG_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasResultRSSI_SCG_r13_H_ */
#include <asn_internal.h>
