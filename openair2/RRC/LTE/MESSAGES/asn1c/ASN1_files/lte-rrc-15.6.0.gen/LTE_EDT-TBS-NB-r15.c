/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_EDT-TBS-NB-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_edt_TBS_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_edt_TBS_r15_value2enum_3[] = {
	{ 0,	4,	"b328" },
	{ 1,	4,	"b408" },
	{ 2,	4,	"b504" },
	{ 3,	4,	"b584" },
	{ 4,	4,	"b680" },
	{ 5,	4,	"b808" },
	{ 6,	4,	"b936" },
	{ 7,	5,	"b1000" }
};
static const unsigned int asn_MAP_LTE_edt_TBS_r15_enum2value_3[] = {
	7,	/* b1000(7) */
	0,	/* b328(0) */
	1,	/* b408(1) */
	2,	/* b504(2) */
	3,	/* b584(3) */
	4,	/* b680(4) */
	5,	/* b808(5) */
	6	/* b936(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_edt_TBS_r15_specs_3 = {
	asn_MAP_LTE_edt_TBS_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_edt_TBS_r15_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_edt_TBS_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_edt_TBS_r15_3 = {
	"edt-TBS-r15",
	"edt-TBS-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_edt_TBS_r15_tags_3,
	sizeof(asn_DEF_LTE_edt_TBS_r15_tags_3)
		/sizeof(asn_DEF_LTE_edt_TBS_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_edt_TBS_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_edt_TBS_r15_tags_3)
		/sizeof(asn_DEF_LTE_edt_TBS_r15_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_edt_TBS_r15_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_edt_TBS_r15_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_EDT_TBS_NB_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_EDT_TBS_NB_r15, edt_SmallTBS_Enabled_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"edt-SmallTBS-Enabled-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_EDT_TBS_NB_r15, edt_TBS_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_edt_TBS_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"edt-TBS-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_EDT_TBS_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_EDT_TBS_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* edt-SmallTBS-Enabled-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* edt-TBS-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_EDT_TBS_NB_r15_specs_1 = {
	sizeof(struct LTE_EDT_TBS_NB_r15),
	offsetof(struct LTE_EDT_TBS_NB_r15, _asn_ctx),
	asn_MAP_LTE_EDT_TBS_NB_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_EDT_TBS_NB_r15 = {
	"EDT-TBS-NB-r15",
	"EDT-TBS-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_EDT_TBS_NB_r15_tags_1,
	sizeof(asn_DEF_LTE_EDT_TBS_NB_r15_tags_1)
		/sizeof(asn_DEF_LTE_EDT_TBS_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_EDT_TBS_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_EDT_TBS_NB_r15_tags_1)
		/sizeof(asn_DEF_LTE_EDT_TBS_NB_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_EDT_TBS_NB_r15_1,
	2,	/* Elements count */
	&asn_SPC_LTE_EDT_TBS_NB_r15_specs_1	/* Additional specs */
};

