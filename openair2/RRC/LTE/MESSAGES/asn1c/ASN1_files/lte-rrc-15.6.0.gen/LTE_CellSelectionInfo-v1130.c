/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_CellSelectionInfo-v1130.h"

asn_TYPE_member_t asn_MBR_LTE_CellSelectionInfo_v1130_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CellSelectionInfo_v1130, q_QualMinWB_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_QualMin_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMinWB-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_CellSelectionInfo_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CellSelectionInfo_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* q-QualMinWB-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CellSelectionInfo_v1130_specs_1 = {
	sizeof(struct LTE_CellSelectionInfo_v1130),
	offsetof(struct LTE_CellSelectionInfo_v1130, _asn_ctx),
	asn_MAP_LTE_CellSelectionInfo_v1130_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CellSelectionInfo_v1130 = {
	"CellSelectionInfo-v1130",
	"CellSelectionInfo-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CellSelectionInfo_v1130_tags_1,
	sizeof(asn_DEF_LTE_CellSelectionInfo_v1130_tags_1)
		/sizeof(asn_DEF_LTE_CellSelectionInfo_v1130_tags_1[0]), /* 1 */
	asn_DEF_LTE_CellSelectionInfo_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CellSelectionInfo_v1130_tags_1)
		/sizeof(asn_DEF_LTE_CellSelectionInfo_v1130_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CellSelectionInfo_v1130_1,
	1,	/* Elements count */
	&asn_SPC_LTE_CellSelectionInfo_v1130_specs_1	/* Additional specs */
};

