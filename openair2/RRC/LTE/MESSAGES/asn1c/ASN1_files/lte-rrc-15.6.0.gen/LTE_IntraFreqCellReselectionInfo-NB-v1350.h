/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_IntraFreqCellReselectionInfo_NB_v1350_H_
#define	_LTE_IntraFreqCellReselectionInfo_NB_v1350_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_IntraFreqCellReselectionInfo-NB-v1350 */
typedef struct LTE_IntraFreqCellReselectionInfo_NB_v1350 {
	long	 delta_RxLevMin_v1350;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_IntraFreqCellReselectionInfo_NB_v1350_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_IntraFreqCellReselectionInfo_NB_v1350;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_IntraFreqCellReselectionInfo_NB_v1350_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_IntraFreqCellReselectionInfo_NB_v1350_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_IntraFreqCellReselectionInfo_NB_v1350_H_ */
#include <asn_internal.h>
