/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_BW-Preference-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_dl_Preference_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_ul_Preference_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_dl_Preference_r14_value2enum_2[] = {
	{ 0,	8,	"mhz1dot4" },
	{ 1,	4,	"mhz5" },
	{ 2,	5,	"mhz20" }
};
static const unsigned int asn_MAP_LTE_dl_Preference_r14_enum2value_2[] = {
	0,	/* mhz1dot4(0) */
	2,	/* mhz20(2) */
	1	/* mhz5(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_dl_Preference_r14_specs_2 = {
	asn_MAP_LTE_dl_Preference_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_dl_Preference_r14_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_dl_Preference_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dl_Preference_r14_2 = {
	"dl-Preference-r14",
	"dl-Preference-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_dl_Preference_r14_tags_2,
	sizeof(asn_DEF_LTE_dl_Preference_r14_tags_2)
		/sizeof(asn_DEF_LTE_dl_Preference_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_dl_Preference_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_dl_Preference_r14_tags_2)
		/sizeof(asn_DEF_LTE_dl_Preference_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_dl_Preference_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_dl_Preference_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ul_Preference_r14_value2enum_6[] = {
	{ 0,	8,	"mhz1dot4" },
	{ 1,	4,	"mhz5" }
};
static const unsigned int asn_MAP_LTE_ul_Preference_r14_enum2value_6[] = {
	0,	/* mhz1dot4(0) */
	1	/* mhz5(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ul_Preference_r14_specs_6 = {
	asn_MAP_LTE_ul_Preference_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ul_Preference_r14_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ul_Preference_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ul_Preference_r14_6 = {
	"ul-Preference-r14",
	"ul-Preference-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ul_Preference_r14_tags_6,
	sizeof(asn_DEF_LTE_ul_Preference_r14_tags_6)
		/sizeof(asn_DEF_LTE_ul_Preference_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_ul_Preference_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_ul_Preference_r14_tags_6)
		/sizeof(asn_DEF_LTE_ul_Preference_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ul_Preference_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ul_Preference_r14_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_BW_Preference_r14_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_BW_Preference_r14, dl_Preference_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_dl_Preference_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-Preference-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_BW_Preference_r14, ul_Preference_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ul_Preference_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-Preference-r14"
		},
};
static const int asn_MAP_LTE_BW_Preference_r14_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_BW_Preference_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BW_Preference_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-Preference-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-Preference-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_BW_Preference_r14_specs_1 = {
	sizeof(struct LTE_BW_Preference_r14),
	offsetof(struct LTE_BW_Preference_r14, _asn_ctx),
	asn_MAP_LTE_BW_Preference_r14_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_BW_Preference_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BW_Preference_r14 = {
	"BW-Preference-r14",
	"BW-Preference-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BW_Preference_r14_tags_1,
	sizeof(asn_DEF_LTE_BW_Preference_r14_tags_1)
		/sizeof(asn_DEF_LTE_BW_Preference_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_BW_Preference_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BW_Preference_r14_tags_1)
		/sizeof(asn_DEF_LTE_BW_Preference_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_BW_Preference_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_BW_Preference_r14_specs_1	/* Additional specs */
};

