/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15_H_
#define	_LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15__sib_EUTRA_NumCRS_Ports_r15 {
	LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15__sib_EUTRA_NumCRS_Ports_r15_same	= 0,
	LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15__sib_EUTRA_NumCRS_Ports_r15_four	= 1
} e_LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15__sib_EUTRA_NumCRS_Ports_r15;

/* LTE_SIB-GuardbandInbandDiffPCI-TDD-NB-r15 */
typedef struct LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15 {
	long	 sib_EUTRA_NumCRS_Ports_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sib_EUTRA_NumCRS_Ports_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SIB_GuardbandInbandDiffPCI_TDD_NB_r15_H_ */
#include <asn_internal.h>
