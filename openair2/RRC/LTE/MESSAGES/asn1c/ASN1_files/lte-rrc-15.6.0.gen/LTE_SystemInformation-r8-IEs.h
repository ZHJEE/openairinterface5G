/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SystemInformation_r8_IEs_H_
#define	_LTE_SystemInformation_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "LTE_SystemInformationBlockType2.h"
#include "LTE_SystemInformationBlockType3.h"
#include "LTE_SystemInformationBlockType4.h"
#include "LTE_SystemInformationBlockType5.h"
#include "LTE_SystemInformationBlockType6.h"
#include "LTE_SystemInformationBlockType7.h"
#include "LTE_SystemInformationBlockType8.h"
#include "LTE_SystemInformationBlockType9.h"
#include "LTE_SystemInformationBlockType10.h"
#include "LTE_SystemInformationBlockType11.h"
#include "LTE_SystemInformationBlockType12-r9.h"
#include "LTE_SystemInformationBlockType13-r9.h"
#include "LTE_SystemInformationBlockType14-r11.h"
#include "LTE_SystemInformationBlockType15-r11.h"
#include "LTE_SystemInformationBlockType16-r11.h"
#include "LTE_SystemInformationBlockType17-r12.h"
#include "LTE_SystemInformationBlockType18-r12.h"
#include "LTE_SystemInformationBlockType19-r12.h"
#include "LTE_SystemInformationBlockType20-r13.h"
#include "LTE_SystemInformationBlockType21-r14.h"
#include "LTE_SystemInformationBlockType24-r15.h"
#include "LTE_SystemInformationBlockType25-r15.h"
#include "LTE_SystemInformationBlockType26-r15.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR {
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_NOTHING,	/* No components present */
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib2,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib3,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib4,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib5,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib6,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib7,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib8,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib9,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib10,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib11,
	/* Extensions may appear below */
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib12_v920,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib13_v920,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib14_v1130,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib15_v1130,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib16_v1130,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib17_v1250,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib18_v1250,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib19_v1250,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib20_v1310,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib21_v1430,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib24_v1530,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib25_v1530,
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib26_v1530
} LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR;

/* Forward declarations */
struct LTE_SystemInformation_v8a0_IEs;

/* Forward definitions */
typedef struct LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member {
	LTE_SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR present;
	union LTE_SystemInformation_r8_IEs__LTE_sib_TypeAndInfo__LTE_Member_u {
		LTE_SystemInformationBlockType2_t	 sib2;
		LTE_SystemInformationBlockType3_t	 sib3;
		LTE_SystemInformationBlockType4_t	 sib4;
		LTE_SystemInformationBlockType5_t	 sib5;
		LTE_SystemInformationBlockType6_t	 sib6;
		LTE_SystemInformationBlockType7_t	 sib7;
		LTE_SystemInformationBlockType8_t	 sib8;
		LTE_SystemInformationBlockType9_t	 sib9;
		LTE_SystemInformationBlockType10_t	 sib10;
		LTE_SystemInformationBlockType11_t	 sib11;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		LTE_SystemInformationBlockType12_r9_t	 sib12_v920;
		LTE_SystemInformationBlockType13_r9_t	 sib13_v920;
		LTE_SystemInformationBlockType14_r11_t	 sib14_v1130;
		LTE_SystemInformationBlockType15_r11_t	 sib15_v1130;
		LTE_SystemInformationBlockType16_r11_t	 sib16_v1130;
		LTE_SystemInformationBlockType17_r12_t	 sib17_v1250;
		LTE_SystemInformationBlockType18_r12_t	 sib18_v1250;
		LTE_SystemInformationBlockType19_r12_t	 sib19_v1250;
		LTE_SystemInformationBlockType20_r13_t	 sib20_v1310;
		LTE_SystemInformationBlockType21_r14_t	 sib21_v1430;
		LTE_SystemInformationBlockType24_r15_t	 sib24_v1530;
		LTE_SystemInformationBlockType25_r15_t	 sib25_v1530;
		LTE_SystemInformationBlockType26_r15_t	 sib26_v1530;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_r8_IEs__sib_TypeAndInfo__Member;

/* LTE_SystemInformation-r8-IEs */
typedef struct LTE_SystemInformation_r8_IEs {
	struct LTE_SystemInformation_r8_IEs__sib_TypeAndInfo {
		A_SEQUENCE_OF(SystemInformation_r8_IEs__sib_TypeAndInfo__Member) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sib_TypeAndInfo;
	struct LTE_SystemInformation_v8a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformation_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformation_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformation_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformation_r8_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SystemInformation-v8a0-IEs.h"

#endif	/* _LTE_SystemInformation_r8_IEs_H_ */
#include <asn_internal.h>
