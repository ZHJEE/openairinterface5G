/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_NonMBSFN-SubframeConfig-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_radioFrameAllocationOffset_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_subframeAllocation_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_radioFrameAllocationPeriod_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_radioFrameAllocationOffset_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_subframeAllocation_r14_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  9,  9 }	/* (SIZE(9..9)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_radioFrameAllocationPeriod_r14_value2enum_2[] = {
	{ 0,	3,	"rf4" },
	{ 1,	3,	"rf8" },
	{ 2,	4,	"rf16" },
	{ 3,	4,	"rf32" },
	{ 4,	4,	"rf64" },
	{ 5,	5,	"rf128" },
	{ 6,	5,	"rf512" }
};
static const unsigned int asn_MAP_LTE_radioFrameAllocationPeriod_r14_enum2value_2[] = {
	5,	/* rf128(5) */
	2,	/* rf16(2) */
	3,	/* rf32(3) */
	0,	/* rf4(0) */
	6,	/* rf512(6) */
	4,	/* rf64(4) */
	1	/* rf8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_radioFrameAllocationPeriod_r14_specs_2 = {
	asn_MAP_LTE_radioFrameAllocationPeriod_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_radioFrameAllocationPeriod_r14_enum2value_2,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_radioFrameAllocationPeriod_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_radioFrameAllocationPeriod_r14_2 = {
	"radioFrameAllocationPeriod-r14",
	"radioFrameAllocationPeriod-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_radioFrameAllocationPeriod_r14_tags_2,
	sizeof(asn_DEF_LTE_radioFrameAllocationPeriod_r14_tags_2)
		/sizeof(asn_DEF_LTE_radioFrameAllocationPeriod_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_radioFrameAllocationPeriod_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_radioFrameAllocationPeriod_r14_tags_2)
		/sizeof(asn_DEF_LTE_radioFrameAllocationPeriod_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_radioFrameAllocationPeriod_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_radioFrameAllocationPeriod_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_NonMBSFN_SubframeConfig_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NonMBSFN_SubframeConfig_r14, radioFrameAllocationPeriod_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_radioFrameAllocationPeriod_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioFrameAllocationPeriod-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NonMBSFN_SubframeConfig_r14, radioFrameAllocationOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_radioFrameAllocationOffset_r14_constr_10,  memb_LTE_radioFrameAllocationOffset_r14_constraint_1 },
		0, 0, /* No default value */
		"radioFrameAllocationOffset-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NonMBSFN_SubframeConfig_r14, subframeAllocation_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_subframeAllocation_r14_constr_11,  memb_LTE_subframeAllocation_r14_constraint_1 },
		0, 0, /* No default value */
		"subframeAllocation-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_NonMBSFN_SubframeConfig_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_NonMBSFN_SubframeConfig_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioFrameAllocationPeriod-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* radioFrameAllocationOffset-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* subframeAllocation-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_NonMBSFN_SubframeConfig_r14_specs_1 = {
	sizeof(struct LTE_NonMBSFN_SubframeConfig_r14),
	offsetof(struct LTE_NonMBSFN_SubframeConfig_r14, _asn_ctx),
	asn_MAP_LTE_NonMBSFN_SubframeConfig_r14_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_NonMBSFN_SubframeConfig_r14 = {
	"NonMBSFN-SubframeConfig-r14",
	"NonMBSFN-SubframeConfig-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_NonMBSFN_SubframeConfig_r14_tags_1,
	sizeof(asn_DEF_LTE_NonMBSFN_SubframeConfig_r14_tags_1)
		/sizeof(asn_DEF_LTE_NonMBSFN_SubframeConfig_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_NonMBSFN_SubframeConfig_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_NonMBSFN_SubframeConfig_r14_tags_1)
		/sizeof(asn_DEF_LTE_NonMBSFN_SubframeConfig_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_NonMBSFN_SubframeConfig_r14_1,
	3,	/* Elements count */
	&asn_SPC_LTE_NonMBSFN_SubframeConfig_r14_specs_1	/* Additional specs */
};

