/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_MeasResultIdleEUTRA-r15.h"

static asn_TYPE_member_t asn_MBR_LTE_measResult_r15_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultIdleEUTRA_r15__measResult_r15, rsrpResult_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResult-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultIdleEUTRA_r15__measResult_r15, rsrqResult_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRQ_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_measResult_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_measResult_r15_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResult-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsrqResult-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_measResult_r15_specs_4 = {
	sizeof(struct LTE_MeasResultIdleEUTRA_r15__measResult_r15),
	offsetof(struct LTE_MeasResultIdleEUTRA_r15__measResult_r15, _asn_ctx),
	asn_MAP_LTE_measResult_r15_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_measResult_r15_4 = {
	"measResult-r15",
	"measResult-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_measResult_r15_tags_4,
	sizeof(asn_DEF_LTE_measResult_r15_tags_4)
		/sizeof(asn_DEF_LTE_measResult_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_measResult_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_measResult_r15_tags_4)
		/sizeof(asn_DEF_LTE_measResult_r15_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_measResult_r15_4,
	2,	/* Elements count */
	&asn_SPC_LTE_measResult_r15_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MeasResultIdleEUTRA_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultIdleEUTRA_r15, carrierFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultIdleEUTRA_r15, physCellId_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultIdleEUTRA_r15, measResult_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_measResult_r15_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResult-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_MeasResultIdleEUTRA_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MeasResultIdleEUTRA_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physCellId-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResult-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResultIdleEUTRA_r15_specs_1 = {
	sizeof(struct LTE_MeasResultIdleEUTRA_r15),
	offsetof(struct LTE_MeasResultIdleEUTRA_r15, _asn_ctx),
	asn_MAP_LTE_MeasResultIdleEUTRA_r15_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultIdleEUTRA_r15 = {
	"MeasResultIdleEUTRA-r15",
	"MeasResultIdleEUTRA-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MeasResultIdleEUTRA_r15_tags_1,
	sizeof(asn_DEF_LTE_MeasResultIdleEUTRA_r15_tags_1)
		/sizeof(asn_DEF_LTE_MeasResultIdleEUTRA_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_MeasResultIdleEUTRA_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MeasResultIdleEUTRA_r15_tags_1)
		/sizeof(asn_DEF_LTE_MeasResultIdleEUTRA_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MeasResultIdleEUTRA_r15_1,
	3,	/* Elements count */
	&asn_SPC_LTE_MeasResultIdleEUTRA_r15_specs_1	/* Additional specs */
};

