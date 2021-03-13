/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UEInformationResponse_v1250_IEs_H_
#define	_LTE_UEInformationResponse_v1250_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MobilityHistoryReport_r12;
struct LTE_UEInformationResponse_v1530_IEs;

/* LTE_UEInformationResponse-v1250-IEs */
typedef struct LTE_UEInformationResponse_v1250_IEs {
	struct LTE_MobilityHistoryReport_r12	*mobilityHistoryReport_r12;	/* OPTIONAL */
	struct LTE_UEInformationResponse_v1530_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UEInformationResponse_v1250_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UEInformationResponse_v1250_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UEInformationResponse_v1250_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UEInformationResponse_v1250_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MobilityHistoryReport-r12.h"
#include "LTE_UEInformationResponse-v1530-IEs.h"

#endif	/* _LTE_UEInformationResponse_v1250_IEs_H_ */
#include <asn_internal.h>
