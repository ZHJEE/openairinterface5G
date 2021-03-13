/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "R14/m2ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m2ap-14.0.0.gen/`
 */

#include "M2AP_CauseRadioNetwork.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_M2AP_CauseRadioNetwork_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_M2AP_CauseRadioNetwork_value2enum_1[] = {
	{ 0,	45,	"unknown-or-already-allocated-MCE-MBMS-M2AP-ID" },
	{ 1,	45,	"unknown-or-already-allocated-eNB-MBMS-M2AP-ID" },
	{ 2,	45,	"unknown-or-inconsistent-pair-of-MBMS-M2AP-IDs" },
	{ 3,	29,	"radio-resources-not-available" },
	{ 4,	32,	"interaction-with-other-procedure" },
	{ 5,	11,	"unspecified" },
	{ 6,	23,	"invalid-QoS-combination" },
	{ 7,	23,	"not-supported-QCI-value" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_M2AP_CauseRadioNetwork_enum2value_1[] = {
	4,	/* interaction-with-other-procedure(4) */
	6,	/* invalid-QoS-combination(6) */
	7,	/* not-supported-QCI-value(7) */
	3,	/* radio-resources-not-available(3) */
	0,	/* unknown-or-already-allocated-MCE-MBMS-M2AP-ID(0) */
	1,	/* unknown-or-already-allocated-eNB-MBMS-M2AP-ID(1) */
	2,	/* unknown-or-inconsistent-pair-of-MBMS-M2AP-IDs(2) */
	5	/* unspecified(5) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_M2AP_CauseRadioNetwork_specs_1 = {
	asn_MAP_M2AP_CauseRadioNetwork_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_M2AP_CauseRadioNetwork_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_M2AP_CauseRadioNetwork_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M2AP_CauseRadioNetwork = {
	"CauseRadioNetwork",
	"CauseRadioNetwork",
	&asn_OP_NativeEnumerated,
	asn_DEF_M2AP_CauseRadioNetwork_tags_1,
	sizeof(asn_DEF_M2AP_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_M2AP_CauseRadioNetwork_tags_1[0]), /* 1 */
	asn_DEF_M2AP_CauseRadioNetwork_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_M2AP_CauseRadioNetwork_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_M2AP_CauseRadioNetwork_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_M2AP_CauseRadioNetwork_specs_1	/* Additional specs */
};

