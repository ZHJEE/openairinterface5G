/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_LoggedMeasurementConfiguration-v1130-IEs.h"

asn_TYPE_member_t asn_MBR_LTE_LoggedMeasurementConfiguration_v1130_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_LoggedMeasurementConfiguration_v1130_IEs, plmn_IdentityList_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PLMN_IdentityList3_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_LoggedMeasurementConfiguration_v1130_IEs, areaConfiguration_v1130),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AreaConfiguration_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"areaConfiguration-v1130"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_LoggedMeasurementConfiguration_v1130_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_LoggedMeasurementConfiguration_v1250_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_LoggedMeasurementConfiguration_v1130_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_LoggedMeasurementConfiguration_v1130_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_LoggedMeasurementConfiguration_v1130_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* areaConfiguration-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_LoggedMeasurementConfiguration_v1130_IEs_specs_1 = {
	sizeof(struct LTE_LoggedMeasurementConfiguration_v1130_IEs),
	offsetof(struct LTE_LoggedMeasurementConfiguration_v1130_IEs, _asn_ctx),
	asn_MAP_LTE_LoggedMeasurementConfiguration_v1130_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_LoggedMeasurementConfiguration_v1130_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_LoggedMeasurementConfiguration_v1130_IEs = {
	"LoggedMeasurementConfiguration-v1130-IEs",
	"LoggedMeasurementConfiguration-v1130-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_LoggedMeasurementConfiguration_v1130_IEs_tags_1,
	sizeof(asn_DEF_LTE_LoggedMeasurementConfiguration_v1130_IEs_tags_1)
		/sizeof(asn_DEF_LTE_LoggedMeasurementConfiguration_v1130_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_LoggedMeasurementConfiguration_v1130_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_LoggedMeasurementConfiguration_v1130_IEs_tags_1)
		/sizeof(asn_DEF_LTE_LoggedMeasurementConfiguration_v1130_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_LoggedMeasurementConfiguration_v1130_IEs_1,
	3,	/* Elements count */
	&asn_SPC_LTE_LoggedMeasurementConfiguration_v1130_IEs_specs_1	/* Additional specs */
};

