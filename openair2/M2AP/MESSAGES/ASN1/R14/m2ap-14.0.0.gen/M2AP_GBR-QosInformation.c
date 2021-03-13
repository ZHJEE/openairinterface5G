/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "R14/m2ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m2ap-14.0.0.gen/`
 */

#include "M2AP_GBR-QosInformation.h"

#include "M2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_M2AP_GBR_QosInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_GBR_QosInformation, mBMS_E_RAB_MaximumBitrateDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_BitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mBMS-E-RAB-MaximumBitrateDL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_GBR_QosInformation, mBMS_E_RAB_GuaranteedBitrateDL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_BitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mBMS-E-RAB-GuaranteedBitrateDL"
		},
	{ ATF_POINTER, 1, offsetof(struct M2AP_GBR_QosInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_ProtocolExtensionContainer_1871P10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_M2AP_GBR_QosInformation_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_M2AP_GBR_QosInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_GBR_QosInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mBMS-E-RAB-MaximumBitrateDL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mBMS-E-RAB-GuaranteedBitrateDL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_M2AP_GBR_QosInformation_specs_1 = {
	sizeof(struct M2AP_GBR_QosInformation),
	offsetof(struct M2AP_GBR_QosInformation, _asn_ctx),
	asn_MAP_M2AP_GBR_QosInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_M2AP_GBR_QosInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M2AP_GBR_QosInformation = {
	"GBR-QosInformation",
	"GBR-QosInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_GBR_QosInformation_tags_1,
	sizeof(asn_DEF_M2AP_GBR_QosInformation_tags_1)
		/sizeof(asn_DEF_M2AP_GBR_QosInformation_tags_1[0]), /* 1 */
	asn_DEF_M2AP_GBR_QosInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_GBR_QosInformation_tags_1)
		/sizeof(asn_DEF_M2AP_GBR_QosInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_GBR_QosInformation_1,
	3,	/* Elements count */
	&asn_SPC_M2AP_GBR_QosInformation_specs_1	/* Additional specs */
};

