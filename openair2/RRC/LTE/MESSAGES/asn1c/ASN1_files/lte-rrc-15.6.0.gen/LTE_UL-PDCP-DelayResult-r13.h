/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UL_PDCP_DelayResult_r13_H_
#define	_LTE_UL_PDCP_DelayResult_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UL_PDCP_DelayResult_r13__qci_Id_r13 {
	LTE_UL_PDCP_DelayResult_r13__qci_Id_r13_qci1	= 0,
	LTE_UL_PDCP_DelayResult_r13__qci_Id_r13_qci2	= 1,
	LTE_UL_PDCP_DelayResult_r13__qci_Id_r13_qci3	= 2,
	LTE_UL_PDCP_DelayResult_r13__qci_Id_r13_qci4	= 3,
	LTE_UL_PDCP_DelayResult_r13__qci_Id_r13_spare4	= 4,
	LTE_UL_PDCP_DelayResult_r13__qci_Id_r13_spare3	= 5,
	LTE_UL_PDCP_DelayResult_r13__qci_Id_r13_spare2	= 6,
	LTE_UL_PDCP_DelayResult_r13__qci_Id_r13_spare1	= 7
} e_LTE_UL_PDCP_DelayResult_r13__qci_Id_r13;

/* LTE_UL-PDCP-DelayResult-r13 */
typedef struct LTE_UL_PDCP_DelayResult_r13 {
	long	 qci_Id_r13;
	long	 excessDelay_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UL_PDCP_DelayResult_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_qci_Id_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UL_PDCP_DelayResult_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UL_PDCP_DelayResult_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UL_PDCP_DelayResult_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UL_PDCP_DelayResult_r13_H_ */
#include <asn_internal.h>
