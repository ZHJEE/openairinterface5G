/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_ShortTTI-r15.h"

asn_TYPE_member_t asn_MBR_LTE_ShortTTI_r15_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_ShortTTI_r15, dl_STTI_Length_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ShortTTI_Length_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-STTI-Length-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_ShortTTI_r15, ul_STTI_Length_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ShortTTI_Length_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-STTI-Length-r15"
		},
};
static const int asn_MAP_LTE_ShortTTI_r15_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ShortTTI_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ShortTTI_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-STTI-Length-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-STTI-Length-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_ShortTTI_r15_specs_1 = {
	sizeof(struct LTE_ShortTTI_r15),
	offsetof(struct LTE_ShortTTI_r15, _asn_ctx),
	asn_MAP_LTE_ShortTTI_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ShortTTI_r15_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_ShortTTI_r15 = {
	"ShortTTI-r15",
	"ShortTTI-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ShortTTI_r15_tags_1,
	sizeof(asn_DEF_LTE_ShortTTI_r15_tags_1)
		/sizeof(asn_DEF_LTE_ShortTTI_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_ShortTTI_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_ShortTTI_r15_tags_1)
		/sizeof(asn_DEF_LTE_ShortTTI_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ShortTTI_r15_1,
	2,	/* Elements count */
	&asn_SPC_LTE_ShortTTI_r15_specs_1	/* Additional specs */
};

