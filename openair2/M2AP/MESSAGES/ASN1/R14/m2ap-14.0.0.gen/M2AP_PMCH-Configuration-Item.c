/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-PDU-Contents"
 * 	found in "R14/m2ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m2ap-14.0.0.gen/`
 */

#include "M2AP_PMCH-Configuration-Item.h"

#include "M2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_M2AP_PMCH_Configuration_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_PMCH_Configuration_Item, pmch_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_PMCH_Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pmch-Configuration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_PMCH_Configuration_Item, mbms_Session_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_MBMSsessionListPerPMCH_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-Session-List"
		},
	{ ATF_POINTER, 1, offsetof(struct M2AP_PMCH_Configuration_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_ProtocolExtensionContainer_1871P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_M2AP_PMCH_Configuration_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_M2AP_PMCH_Configuration_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_PMCH_Configuration_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pmch-Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-Session-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_M2AP_PMCH_Configuration_Item_specs_1 = {
	sizeof(struct M2AP_PMCH_Configuration_Item),
	offsetof(struct M2AP_PMCH_Configuration_Item, _asn_ctx),
	asn_MAP_M2AP_PMCH_Configuration_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_M2AP_PMCH_Configuration_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M2AP_PMCH_Configuration_Item = {
	"PMCH-Configuration-Item",
	"PMCH-Configuration-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_PMCH_Configuration_Item_tags_1,
	sizeof(asn_DEF_M2AP_PMCH_Configuration_Item_tags_1)
		/sizeof(asn_DEF_M2AP_PMCH_Configuration_Item_tags_1[0]), /* 1 */
	asn_DEF_M2AP_PMCH_Configuration_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_PMCH_Configuration_Item_tags_1)
		/sizeof(asn_DEF_M2AP_PMCH_Configuration_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_PMCH_Configuration_Item_1,
	3,	/* Elements count */
	&asn_SPC_M2AP_PMCH_Configuration_Item_specs_1	/* Additional specs */
};

