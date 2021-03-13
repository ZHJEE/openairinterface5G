/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_BandParametersTxSL-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_v2x_eNB_Scheduled_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_v2x_HighPower_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_v2x_eNB_Scheduled_r14_value2enum_3[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_v2x_eNB_Scheduled_r14_enum2value_3[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_v2x_eNB_Scheduled_r14_specs_3 = {
	asn_MAP_LTE_v2x_eNB_Scheduled_r14_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_v2x_eNB_Scheduled_r14_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_v2x_eNB_Scheduled_r14_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_v2x_eNB_Scheduled_r14_3 = {
	"v2x-eNB-Scheduled-r14",
	"v2x-eNB-Scheduled-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_v2x_eNB_Scheduled_r14_tags_3,
	sizeof(asn_DEF_LTE_v2x_eNB_Scheduled_r14_tags_3)
		/sizeof(asn_DEF_LTE_v2x_eNB_Scheduled_r14_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_v2x_eNB_Scheduled_r14_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_v2x_eNB_Scheduled_r14_tags_3)
		/sizeof(asn_DEF_LTE_v2x_eNB_Scheduled_r14_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_v2x_eNB_Scheduled_r14_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_v2x_eNB_Scheduled_r14_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_v2x_HighPower_r14_value2enum_5[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_v2x_HighPower_r14_enum2value_5[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_v2x_HighPower_r14_specs_5 = {
	asn_MAP_LTE_v2x_HighPower_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_v2x_HighPower_r14_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_v2x_HighPower_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_v2x_HighPower_r14_5 = {
	"v2x-HighPower-r14",
	"v2x-HighPower-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_v2x_HighPower_r14_tags_5,
	sizeof(asn_DEF_LTE_v2x_HighPower_r14_tags_5)
		/sizeof(asn_DEF_LTE_v2x_HighPower_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_v2x_HighPower_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_v2x_HighPower_r14_tags_5)
		/sizeof(asn_DEF_LTE_v2x_HighPower_r14_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_v2x_HighPower_r14_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_v2x_HighPower_r14_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_BandParametersTxSL_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BandParametersTxSL_r14, v2x_BandwidthClassTxSL_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_V2X_BandwidthClassSL_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-BandwidthClassTxSL-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_BandParametersTxSL_r14, v2x_eNB_Scheduled_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_v2x_eNB_Scheduled_r14_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-eNB-Scheduled-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_BandParametersTxSL_r14, v2x_HighPower_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_v2x_HighPower_r14_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-HighPower-r14"
		},
};
static const int asn_MAP_LTE_BandParametersTxSL_r14_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_BandParametersTxSL_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BandParametersTxSL_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-BandwidthClassTxSL-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* v2x-eNB-Scheduled-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* v2x-HighPower-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_BandParametersTxSL_r14_specs_1 = {
	sizeof(struct LTE_BandParametersTxSL_r14),
	offsetof(struct LTE_BandParametersTxSL_r14, _asn_ctx),
	asn_MAP_LTE_BandParametersTxSL_r14_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_BandParametersTxSL_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BandParametersTxSL_r14 = {
	"BandParametersTxSL-r14",
	"BandParametersTxSL-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BandParametersTxSL_r14_tags_1,
	sizeof(asn_DEF_LTE_BandParametersTxSL_r14_tags_1)
		/sizeof(asn_DEF_LTE_BandParametersTxSL_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_BandParametersTxSL_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BandParametersTxSL_r14_tags_1)
		/sizeof(asn_DEF_LTE_BandParametersTxSL_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_BandParametersTxSL_r14_1,
	3,	/* Elements count */
	&asn_SPC_LTE_BandParametersTxSL_r14_specs_1	/* Additional specs */
};

