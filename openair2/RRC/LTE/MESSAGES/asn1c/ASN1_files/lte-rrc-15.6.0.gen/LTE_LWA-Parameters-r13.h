/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_LWA_Parameters_r13_H_
#define	_LTE_LWA_Parameters_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_LWA_Parameters_r13__lwa_r13 {
	LTE_LWA_Parameters_r13__lwa_r13_supported	= 0
} e_LTE_LWA_Parameters_r13__lwa_r13;
typedef enum LTE_LWA_Parameters_r13__lwa_SplitBearer_r13 {
	LTE_LWA_Parameters_r13__lwa_SplitBearer_r13_supported	= 0
} e_LTE_LWA_Parameters_r13__lwa_SplitBearer_r13;
typedef enum LTE_LWA_Parameters_r13__lwa_BufferSize_r13 {
	LTE_LWA_Parameters_r13__lwa_BufferSize_r13_supported	= 0
} e_LTE_LWA_Parameters_r13__lwa_BufferSize_r13;

/* LTE_LWA-Parameters-r13 */
typedef struct LTE_LWA_Parameters_r13 {
	long	*lwa_r13;	/* OPTIONAL */
	long	*lwa_SplitBearer_r13;	/* OPTIONAL */
	OCTET_STRING_t	*wlan_MAC_Address_r13;	/* OPTIONAL */
	long	*lwa_BufferSize_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_LWA_Parameters_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_lwa_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_lwa_SplitBearer_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_lwa_BufferSize_r13_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_LWA_Parameters_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_LWA_Parameters_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_LWA_Parameters_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_LWA_Parameters_r13_H_ */
#include <asn_internal.h>
