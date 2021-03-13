/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_BCCH-DL-SCH-MessageType-NB.h"

static asn_per_constraints_t asn_PER_type_LTE_c1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_BCCH_DL_SCH_MessageType_NB_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_c1_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BCCH_DL_SCH_MessageType_NB__c1, choice.systemInformation_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SystemInformation_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInformation-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BCCH_DL_SCH_MessageType_NB__c1, choice.systemInformationBlockType1_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SystemInformationBlockType1_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInformationBlockType1-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemInformation-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* systemInformationBlockType1-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_c1_specs_2 = {
	sizeof(struct LTE_BCCH_DL_SCH_MessageType_NB__c1),
	offsetof(struct LTE_BCCH_DL_SCH_MessageType_NB__c1, _asn_ctx),
	offsetof(struct LTE_BCCH_DL_SCH_MessageType_NB__c1, present),
	sizeof(((struct LTE_BCCH_DL_SCH_MessageType_NB__c1 *)0)->present),
	asn_MAP_LTE_c1_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_c1_2 = {
	"c1",
	"c1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_c1_constr_2, CHOICE_constraint },
	asn_MBR_LTE_c1_2,
	2,	/* Elements count */
	&asn_SPC_LTE_c1_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_messageClassExtension_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_messageClassExtension_specs_5 = {
	sizeof(struct LTE_BCCH_DL_SCH_MessageType_NB__messageClassExtension),
	offsetof(struct LTE_BCCH_DL_SCH_MessageType_NB__messageClassExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_messageClassExtension_5 = {
	"messageClassExtension",
	"messageClassExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_messageClassExtension_tags_5,
	sizeof(asn_DEF_LTE_messageClassExtension_tags_5)
		/sizeof(asn_DEF_LTE_messageClassExtension_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_messageClassExtension_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_messageClassExtension_tags_5)
		/sizeof(asn_DEF_LTE_messageClassExtension_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_messageClassExtension_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_BCCH_DL_SCH_MessageType_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BCCH_DL_SCH_MessageType_NB, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_c1_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BCCH_DL_SCH_MessageType_NB, choice.messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_messageClassExtension_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BCCH_DL_SCH_MessageType_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
asn_CHOICE_specifics_t asn_SPC_LTE_BCCH_DL_SCH_MessageType_NB_specs_1 = {
	sizeof(struct LTE_BCCH_DL_SCH_MessageType_NB),
	offsetof(struct LTE_BCCH_DL_SCH_MessageType_NB, _asn_ctx),
	offsetof(struct LTE_BCCH_DL_SCH_MessageType_NB, present),
	sizeof(((struct LTE_BCCH_DL_SCH_MessageType_NB *)0)->present),
	asn_MAP_LTE_BCCH_DL_SCH_MessageType_NB_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BCCH_DL_SCH_MessageType_NB = {
	"BCCH-DL-SCH-MessageType-NB",
	"BCCH-DL-SCH-MessageType-NB",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_BCCH_DL_SCH_MessageType_NB_constr_1, CHOICE_constraint },
	asn_MBR_LTE_BCCH_DL_SCH_MessageType_NB_1,
	2,	/* Elements count */
	&asn_SPC_LTE_BCCH_DL_SCH_MessageType_NB_specs_1	/* Additional specs */
};

