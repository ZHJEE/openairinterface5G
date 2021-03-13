/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_RF-Parameters-v14b0.h"

asn_TYPE_member_t asn_MBR_LTE_RF_Parameters_v14b0_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_RF_Parameters_v14b0, supportedBandCombination_v14b0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SupportedBandCombination_v14b0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombination-v14b0"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RF_Parameters_v14b0, supportedBandCombinationAdd_v14b0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SupportedBandCombinationAdd_v14b0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationAdd-v14b0"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RF_Parameters_v14b0, supportedBandCombinationReduced_v14b0),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SupportedBandCombinationReduced_v14b0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationReduced-v14b0"
		},
};
static const int asn_MAP_LTE_RF_Parameters_v14b0_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_RF_Parameters_v14b0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RF_Parameters_v14b0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandCombination-v14b0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedBandCombinationAdd-v14b0 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* supportedBandCombinationReduced-v14b0 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RF_Parameters_v14b0_specs_1 = {
	sizeof(struct LTE_RF_Parameters_v14b0),
	offsetof(struct LTE_RF_Parameters_v14b0, _asn_ctx),
	asn_MAP_LTE_RF_Parameters_v14b0_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_RF_Parameters_v14b0_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RF_Parameters_v14b0 = {
	"RF-Parameters-v14b0",
	"RF-Parameters-v14b0",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RF_Parameters_v14b0_tags_1,
	sizeof(asn_DEF_LTE_RF_Parameters_v14b0_tags_1)
		/sizeof(asn_DEF_LTE_RF_Parameters_v14b0_tags_1[0]), /* 1 */
	asn_DEF_LTE_RF_Parameters_v14b0_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RF_Parameters_v14b0_tags_1)
		/sizeof(asn_DEF_LTE_RF_Parameters_v14b0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RF_Parameters_v14b0_1,
	3,	/* Elements count */
	&asn_SPC_LTE_RF_Parameters_v14b0_specs_1	/* Additional specs */
};

