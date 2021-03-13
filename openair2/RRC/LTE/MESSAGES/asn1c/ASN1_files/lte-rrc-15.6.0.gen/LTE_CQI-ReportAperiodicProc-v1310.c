/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_CQI-ReportAperiodicProc-v1310.h"

asn_TYPE_member_t asn_MBR_LTE_CQI_ReportAperiodicProc_v1310_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_v1310, trigger001_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trigger001-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_v1310, trigger010_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trigger010-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_v1310, trigger011_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trigger011-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_v1310, trigger100_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trigger100-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_v1310, trigger101_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trigger101-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_v1310, trigger110_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trigger110-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_v1310, trigger111_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trigger111-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_CQI_ReportAperiodicProc_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CQI_ReportAperiodicProc_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trigger001-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trigger010-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trigger011-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trigger100-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* trigger101-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* trigger110-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* trigger111-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportAperiodicProc_v1310_specs_1 = {
	sizeof(struct LTE_CQI_ReportAperiodicProc_v1310),
	offsetof(struct LTE_CQI_ReportAperiodicProc_v1310, _asn_ctx),
	asn_MAP_LTE_CQI_ReportAperiodicProc_v1310_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportAperiodicProc_v1310 = {
	"CQI-ReportAperiodicProc-v1310",
	"CQI-ReportAperiodicProc-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CQI_ReportAperiodicProc_v1310_tags_1,
	sizeof(asn_DEF_LTE_CQI_ReportAperiodicProc_v1310_tags_1)
		/sizeof(asn_DEF_LTE_CQI_ReportAperiodicProc_v1310_tags_1[0]), /* 1 */
	asn_DEF_LTE_CQI_ReportAperiodicProc_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CQI_ReportAperiodicProc_v1310_tags_1)
		/sizeof(asn_DEF_LTE_CQI_ReportAperiodicProc_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CQI_ReportAperiodicProc_v1310_1,
	7,	/* Elements count */
	&asn_SPC_LTE_CQI_ReportAperiodicProc_v1310_specs_1	/* Additional specs */
};

