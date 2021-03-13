/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_PowerPrefIndicationConfig-r11.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_powerPrefIndicationTimer_r11_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_PowerPrefIndicationConfig_r11_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_powerPrefIndicationTimer_r11_value2enum_4[] = {
	{ 0,	2,	"s0" },
	{ 1,	6,	"s0dot5" },
	{ 2,	2,	"s1" },
	{ 3,	2,	"s2" },
	{ 4,	2,	"s5" },
	{ 5,	3,	"s10" },
	{ 6,	3,	"s20" },
	{ 7,	3,	"s30" },
	{ 8,	3,	"s60" },
	{ 9,	3,	"s90" },
	{ 10,	4,	"s120" },
	{ 11,	4,	"s300" },
	{ 12,	4,	"s600" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_powerPrefIndicationTimer_r11_enum2value_4[] = {
	0,	/* s0(0) */
	1,	/* s0dot5(1) */
	2,	/* s1(2) */
	5,	/* s10(5) */
	10,	/* s120(10) */
	3,	/* s2(3) */
	6,	/* s20(6) */
	7,	/* s30(7) */
	11,	/* s300(11) */
	4,	/* s5(4) */
	8,	/* s60(8) */
	12,	/* s600(12) */
	9,	/* s90(9) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13	/* spare3(13) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_powerPrefIndicationTimer_r11_specs_4 = {
	asn_MAP_LTE_powerPrefIndicationTimer_r11_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_powerPrefIndicationTimer_r11_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_powerPrefIndicationTimer_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_powerPrefIndicationTimer_r11_4 = {
	"powerPrefIndicationTimer-r11",
	"powerPrefIndicationTimer-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_powerPrefIndicationTimer_r11_tags_4,
	sizeof(asn_DEF_LTE_powerPrefIndicationTimer_r11_tags_4)
		/sizeof(asn_DEF_LTE_powerPrefIndicationTimer_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_powerPrefIndicationTimer_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_powerPrefIndicationTimer_r11_tags_4)
		/sizeof(asn_DEF_LTE_powerPrefIndicationTimer_r11_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_powerPrefIndicationTimer_r11_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_powerPrefIndicationTimer_r11_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PowerPrefIndicationConfig_r11__setup, powerPrefIndicationTimer_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_powerPrefIndicationTimer_r11_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerPrefIndicationTimer-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* powerPrefIndicationTimer-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_PowerPrefIndicationConfig_r11__setup),
	offsetof(struct LTE_PowerPrefIndicationConfig_r11__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_3,
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_3,
	1,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PowerPrefIndicationConfig_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PowerPrefIndicationConfig_r11, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PowerPrefIndicationConfig_r11, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PowerPrefIndicationConfig_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_PowerPrefIndicationConfig_r11_specs_1 = {
	sizeof(struct LTE_PowerPrefIndicationConfig_r11),
	offsetof(struct LTE_PowerPrefIndicationConfig_r11, _asn_ctx),
	offsetof(struct LTE_PowerPrefIndicationConfig_r11, present),
	sizeof(((struct LTE_PowerPrefIndicationConfig_r11 *)0)->present),
	asn_MAP_LTE_PowerPrefIndicationConfig_r11_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PowerPrefIndicationConfig_r11 = {
	"PowerPrefIndicationConfig-r11",
	"PowerPrefIndicationConfig-r11",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_PowerPrefIndicationConfig_r11_constr_1, CHOICE_constraint },
	asn_MBR_LTE_PowerPrefIndicationConfig_r11_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PowerPrefIndicationConfig_r11_specs_1	/* Additional specs */
};

