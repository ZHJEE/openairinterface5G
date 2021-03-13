/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_Cell-ToAddMod-r12.h"

static asn_TYPE_member_t asn_MBR_LTE_cellIdentification_r12_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_Cell_ToAddMod_r12__cellIdentification_r12, physCellId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_Cell_ToAddMod_r12__cellIdentification_r12, dl_CarrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_cellIdentification_r12_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_cellIdentification_r12_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-CarrierFreq-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_cellIdentification_r12_specs_3 = {
	sizeof(struct LTE_Cell_ToAddMod_r12__cellIdentification_r12),
	offsetof(struct LTE_Cell_ToAddMod_r12__cellIdentification_r12, _asn_ctx),
	asn_MAP_LTE_cellIdentification_r12_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cellIdentification_r12_3 = {
	"cellIdentification-r12",
	"cellIdentification-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_cellIdentification_r12_tags_3,
	sizeof(asn_DEF_LTE_cellIdentification_r12_tags_3)
		/sizeof(asn_DEF_LTE_cellIdentification_r12_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_cellIdentification_r12_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_cellIdentification_r12_tags_3)
		/sizeof(asn_DEF_LTE_cellIdentification_r12_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_cellIdentification_r12_3,
	2,	/* Elements count */
	&asn_SPC_LTE_cellIdentification_r12_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_measResultCellToAdd_r12_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_Cell_ToAddMod_r12__measResultCellToAdd_r12, rsrpResult_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResult-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_Cell_ToAddMod_r12__measResultCellToAdd_r12, rsrqResult_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_measResultCellToAdd_r12_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_measResultCellToAdd_r12_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResult-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsrqResult-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_measResultCellToAdd_r12_specs_6 = {
	sizeof(struct LTE_Cell_ToAddMod_r12__measResultCellToAdd_r12),
	offsetof(struct LTE_Cell_ToAddMod_r12__measResultCellToAdd_r12, _asn_ctx),
	asn_MAP_LTE_measResultCellToAdd_r12_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_measResultCellToAdd_r12_6 = {
	"measResultCellToAdd-r12",
	"measResultCellToAdd-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_measResultCellToAdd_r12_tags_6,
	sizeof(asn_DEF_LTE_measResultCellToAdd_r12_tags_6)
		/sizeof(asn_DEF_LTE_measResultCellToAdd_r12_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_measResultCellToAdd_r12_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_measResultCellToAdd_r12_tags_6)
		/sizeof(asn_DEF_LTE_measResultCellToAdd_r12_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_measResultCellToAdd_r12_6,
	2,	/* Elements count */
	&asn_SPC_LTE_measResultCellToAdd_r12_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_measResultCellToAdd_v1310_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_Cell_ToAddMod_r12__ext1__measResultCellToAdd_v1310, rs_sinr_Result_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RS_SINR_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-sinr-Result-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_measResultCellToAdd_v1310_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_measResultCellToAdd_v1310_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rs-sinr-Result-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_measResultCellToAdd_v1310_specs_12 = {
	sizeof(struct LTE_Cell_ToAddMod_r12__ext1__measResultCellToAdd_v1310),
	offsetof(struct LTE_Cell_ToAddMod_r12__ext1__measResultCellToAdd_v1310, _asn_ctx),
	asn_MAP_LTE_measResultCellToAdd_v1310_tag2el_12,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_measResultCellToAdd_v1310_12 = {
	"measResultCellToAdd-v1310",
	"measResultCellToAdd-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_measResultCellToAdd_v1310_tags_12,
	sizeof(asn_DEF_LTE_measResultCellToAdd_v1310_tags_12)
		/sizeof(asn_DEF_LTE_measResultCellToAdd_v1310_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_measResultCellToAdd_v1310_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_measResultCellToAdd_v1310_tags_12)
		/sizeof(asn_DEF_LTE_measResultCellToAdd_v1310_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_measResultCellToAdd_v1310_12,
	1,	/* Elements count */
	&asn_SPC_LTE_measResultCellToAdd_v1310_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_10[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_Cell_ToAddMod_r12__ext1, sCellIndex_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCellIndex_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellIndex-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_Cell_ToAddMod_r12__ext1, measResultCellToAdd_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_measResultCellToAdd_v1310_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultCellToAdd-v1310"
		},
};
static const int asn_MAP_LTE_ext1_oms_10[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellIndex-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultCellToAdd-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_10 = {
	sizeof(struct LTE_Cell_ToAddMod_r12__ext1),
	offsetof(struct LTE_Cell_ToAddMod_r12__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_10,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_10 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_10,
	sizeof(asn_DEF_LTE_ext1_tags_10)
		/sizeof(asn_DEF_LTE_ext1_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_10)
		/sizeof(asn_DEF_LTE_ext1_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_10,
	2,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_Cell_ToAddMod_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_Cell_ToAddMod_r12, sCellIndex_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCellIndex_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellIndex-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_Cell_ToAddMod_r12, cellIdentification_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_cellIdentification_r12_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentification-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_Cell_ToAddMod_r12, measResultCellToAdd_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_measResultCellToAdd_r12_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultCellToAdd-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_Cell_ToAddMod_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext1_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_Cell_ToAddMod_r12_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_Cell_ToAddMod_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_Cell_ToAddMod_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellIndex-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellIdentification-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultCellToAdd-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_Cell_ToAddMod_r12_specs_1 = {
	sizeof(struct LTE_Cell_ToAddMod_r12),
	offsetof(struct LTE_Cell_ToAddMod_r12, _asn_ctx),
	asn_MAP_LTE_Cell_ToAddMod_r12_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_Cell_ToAddMod_r12_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_Cell_ToAddMod_r12 = {
	"Cell-ToAddMod-r12",
	"Cell-ToAddMod-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_Cell_ToAddMod_r12_tags_1,
	sizeof(asn_DEF_LTE_Cell_ToAddMod_r12_tags_1)
		/sizeof(asn_DEF_LTE_Cell_ToAddMod_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_Cell_ToAddMod_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_Cell_ToAddMod_r12_tags_1)
		/sizeof(asn_DEF_LTE_Cell_ToAddMod_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_Cell_ToAddMod_r12_1,
	4,	/* Elements count */
	&asn_SPC_LTE_Cell_ToAddMod_r12_specs_1	/* Additional specs */
};

