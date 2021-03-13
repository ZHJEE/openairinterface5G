/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#include "F1AP_Pre-emptionCapability.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_F1AP_Pre_emptionCapability_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_Pre_emptionCapability_value2enum_1[] = {
	{ 0,	29,	"shall-not-trigger-pre-emption" },
	{ 1,	23,	"may-trigger-pre-emption" }
};
static const unsigned int asn_MAP_F1AP_Pre_emptionCapability_enum2value_1[] = {
	1,	/* may-trigger-pre-emption(1) */
	0	/* shall-not-trigger-pre-emption(0) */
};
const asn_INTEGER_specifics_t asn_SPC_F1AP_Pre_emptionCapability_specs_1 = {
	asn_MAP_F1AP_Pre_emptionCapability_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_Pre_emptionCapability_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_Pre_emptionCapability_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_Pre_emptionCapability = {
	"Pre-emptionCapability",
	"Pre-emptionCapability",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_Pre_emptionCapability_tags_1,
	sizeof(asn_DEF_F1AP_Pre_emptionCapability_tags_1)
		/sizeof(asn_DEF_F1AP_Pre_emptionCapability_tags_1[0]), /* 1 */
	asn_DEF_F1AP_Pre_emptionCapability_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_Pre_emptionCapability_tags_1)
		/sizeof(asn_DEF_F1AP_Pre_emptionCapability_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_F1AP_Pre_emptionCapability_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_Pre_emptionCapability_specs_1	/* Additional specs */
};

