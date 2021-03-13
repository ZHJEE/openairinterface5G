/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_VarPendingRnaUpdate-r15.h"

static asn_TYPE_member_t asn_MBR_LTE_VarPendingRnaUpdate_r15_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_VarPendingRnaUpdate_r15, pendingRnaUpdate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pendingRnaUpdate"
		},
};
static const int asn_MAP_LTE_VarPendingRnaUpdate_r15_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_VarPendingRnaUpdate_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_VarPendingRnaUpdate_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pendingRnaUpdate */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_VarPendingRnaUpdate_r15_specs_1 = {
	sizeof(struct LTE_VarPendingRnaUpdate_r15),
	offsetof(struct LTE_VarPendingRnaUpdate_r15, _asn_ctx),
	asn_MAP_LTE_VarPendingRnaUpdate_r15_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_VarPendingRnaUpdate_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_VarPendingRnaUpdate_r15 = {
	"VarPendingRnaUpdate-r15",
	"VarPendingRnaUpdate-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_VarPendingRnaUpdate_r15_tags_1,
	sizeof(asn_DEF_LTE_VarPendingRnaUpdate_r15_tags_1)
		/sizeof(asn_DEF_LTE_VarPendingRnaUpdate_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_VarPendingRnaUpdate_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_VarPendingRnaUpdate_r15_tags_1)
		/sizeof(asn_DEF_LTE_VarPendingRnaUpdate_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_VarPendingRnaUpdate_r15_1,
	1,	/* Elements count */
	&asn_SPC_LTE_VarPendingRnaUpdate_r15_specs_1	/* Additional specs */
};

