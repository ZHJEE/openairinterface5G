/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_MeasResult2UTRA_r9_H_
#define	_LTE_MeasResult2UTRA_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueUTRA.h"
#include "LTE_MeasResultListUTRA.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_MeasResult2UTRA-r9 */
typedef struct LTE_MeasResult2UTRA_r9 {
	LTE_ARFCN_ValueUTRA_t	 carrierFreq_r9;
	LTE_MeasResultListUTRA_t	 measResultList_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResult2UTRA_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResult2UTRA_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResult2UTRA_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasResult2UTRA_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasResult2UTRA_r9_H_ */
#include <asn_internal.h>
