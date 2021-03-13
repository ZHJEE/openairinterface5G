/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_RRCConnectionReestablishmentComplete-v1250-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_logMeasAvailableMBSFN_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_logMeasAvailableMBSFN_r12_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_logMeasAvailableMBSFN_r12_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_logMeasAvailableMBSFN_r12_specs_2 = {
	asn_MAP_LTE_logMeasAvailableMBSFN_r12_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_logMeasAvailableMBSFN_r12_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_logMeasAvailableMBSFN_r12_2 = {
	"logMeasAvailableMBSFN-r12",
	"logMeasAvailableMBSFN-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_2,
	sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_2)
		/sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_2)
		/sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_logMeasAvailableMBSFN_r12_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_logMeasAvailableMBSFN_r12_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionReestablishmentComplete_v1250_IEs, logMeasAvailableMBSFN_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_logMeasAvailableMBSFN_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasAvailableMBSFN-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionReestablishmentComplete_v1250_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionReestablishmentComplete_v1530_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* logMeasAvailableMBSFN-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionReestablishmentComplete_v1250_IEs),
	offsetof(struct LTE_RRCConnectionReestablishmentComplete_v1250_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReestablishmentComplete_v1250_IEs = {
	"RRCConnectionReestablishmentComplete-v1250-IEs",
	"RRCConnectionReestablishmentComplete-v1250-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_1,
	2,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionReestablishmentComplete_v1250_IEs_specs_1	/* Additional specs */
};

