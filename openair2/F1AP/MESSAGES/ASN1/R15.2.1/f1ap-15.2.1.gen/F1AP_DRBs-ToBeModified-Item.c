/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#include "F1AP_DRBs-ToBeModified-Item.h"

#include "F1AP_ULConfiguration.h"
#include "F1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_F1AP_DRBs_ToBeModified_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_DRBs_ToBeModified_Item, dRBID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_DRBID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_DRBs_ToBeModified_Item, qoSInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_F1AP_QoSInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qoSInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_DRBs_ToBeModified_Item, uLUPTNLInformation_ToBeSetup_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ULUPTNLInformation_ToBeSetup_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uLUPTNLInformation-ToBeSetup-List"
		},
	{ ATF_POINTER, 2, offsetof(struct F1AP_DRBs_ToBeModified_Item, uLConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ULConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uLConfiguration"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_DRBs_ToBeModified_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_160P30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_DRBs_ToBeModified_Item_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_F1AP_DRBs_ToBeModified_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_DRBs_ToBeModified_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRBID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* qoSInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uLUPTNLInformation-ToBeSetup-List */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uLConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_DRBs_ToBeModified_Item_specs_1 = {
	sizeof(struct F1AP_DRBs_ToBeModified_Item),
	offsetof(struct F1AP_DRBs_ToBeModified_Item, _asn_ctx),
	asn_MAP_F1AP_DRBs_ToBeModified_Item_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_F1AP_DRBs_ToBeModified_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_DRBs_ToBeModified_Item = {
	"DRBs-ToBeModified-Item",
	"DRBs-ToBeModified-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_DRBs_ToBeModified_Item_tags_1,
	sizeof(asn_DEF_F1AP_DRBs_ToBeModified_Item_tags_1)
		/sizeof(asn_DEF_F1AP_DRBs_ToBeModified_Item_tags_1[0]), /* 1 */
	asn_DEF_F1AP_DRBs_ToBeModified_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_DRBs_ToBeModified_Item_tags_1)
		/sizeof(asn_DEF_F1AP_DRBs_ToBeModified_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_DRBs_ToBeModified_Item_1,
	5,	/* Elements count */
	&asn_SPC_F1AP_DRBs_ToBeModified_Item_specs_1	/* Additional specs */
};

