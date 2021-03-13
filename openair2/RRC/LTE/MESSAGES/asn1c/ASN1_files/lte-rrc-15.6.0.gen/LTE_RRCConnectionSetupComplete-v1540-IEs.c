/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_RRCConnectionSetupComplete-v1540-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_gummei_Type_v1540_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_guami_Type_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_gummei_Type_v1540_value2enum_2[] = {
	{ 0,	12,	"mappedFrom5G" }
};
static const unsigned int asn_MAP_LTE_gummei_Type_v1540_enum2value_2[] = {
	0	/* mappedFrom5G(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_gummei_Type_v1540_specs_2 = {
	asn_MAP_LTE_gummei_Type_v1540_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_gummei_Type_v1540_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_gummei_Type_v1540_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_gummei_Type_v1540_2 = {
	"gummei-Type-v1540",
	"gummei-Type-v1540",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_gummei_Type_v1540_tags_2,
	sizeof(asn_DEF_LTE_gummei_Type_v1540_tags_2)
		/sizeof(asn_DEF_LTE_gummei_Type_v1540_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_gummei_Type_v1540_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_gummei_Type_v1540_tags_2)
		/sizeof(asn_DEF_LTE_gummei_Type_v1540_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_gummei_Type_v1540_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_gummei_Type_v1540_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_guami_Type_r15_value2enum_4[] = {
	{ 0,	6,	"native" },
	{ 1,	6,	"mapped" }
};
static const unsigned int asn_MAP_LTE_guami_Type_r15_enum2value_4[] = {
	1,	/* mapped(1) */
	0	/* native(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_guami_Type_r15_specs_4 = {
	asn_MAP_LTE_guami_Type_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_guami_Type_r15_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_guami_Type_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_guami_Type_r15_4 = {
	"guami-Type-r15",
	"guami-Type-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_guami_Type_r15_tags_4,
	sizeof(asn_DEF_LTE_guami_Type_r15_tags_4)
		/sizeof(asn_DEF_LTE_guami_Type_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_guami_Type_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_guami_Type_r15_tags_4)
		/sizeof(asn_DEF_LTE_guami_Type_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_guami_Type_r15_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_guami_Type_r15_specs_4	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_7 = {
	sizeof(struct LTE_RRCConnectionSetupComplete_v1540_IEs__nonCriticalExtension),
	offsetof(struct LTE_RRCConnectionSetupComplete_v1540_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_7 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_7,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_nonCriticalExtension_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionSetupComplete_v1540_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_RRCConnectionSetupComplete_v1540_IEs, gummei_Type_v1540),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_gummei_Type_v1540_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gummei-Type-v1540"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionSetupComplete_v1540_IEs, guami_Type_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_guami_Type_r15_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"guami-Type-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionSetupComplete_v1540_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_RRCConnectionSetupComplete_v1540_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionSetupComplete_v1540_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionSetupComplete_v1540_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gummei-Type-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* guami-Type-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionSetupComplete_v1540_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionSetupComplete_v1540_IEs),
	offsetof(struct LTE_RRCConnectionSetupComplete_v1540_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionSetupComplete_v1540_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionSetupComplete_v1540_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionSetupComplete_v1540_IEs = {
	"RRCConnectionSetupComplete-v1540-IEs",
	"RRCConnectionSetupComplete-v1540-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionSetupComplete_v1540_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_v1540_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_v1540_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionSetupComplete_v1540_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_v1540_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_v1540_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionSetupComplete_v1540_IEs_1,
	3,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionSetupComplete_v1540_IEs_specs_1	/* Additional specs */
};

