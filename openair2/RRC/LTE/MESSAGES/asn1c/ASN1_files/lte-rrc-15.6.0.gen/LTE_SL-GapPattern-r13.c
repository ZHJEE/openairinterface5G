/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_SL-GapPattern-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_gapSubframeBitmap_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 10240)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_gapPeriod_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  14 }	/* (0..14) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_gapSubframeBitmap_r13_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  10240 }	/* (SIZE(1..10240)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_gapPeriod_r13_value2enum_2[] = {
	{ 0,	4,	"sf40" },
	{ 1,	4,	"sf60" },
	{ 2,	4,	"sf70" },
	{ 3,	4,	"sf80" },
	{ 4,	5,	"sf120" },
	{ 5,	5,	"sf140" },
	{ 6,	5,	"sf160" },
	{ 7,	5,	"sf240" },
	{ 8,	5,	"sf280" },
	{ 9,	5,	"sf320" },
	{ 10,	5,	"sf640" },
	{ 11,	6,	"sf1280" },
	{ 12,	6,	"sf2560" },
	{ 13,	6,	"sf5120" },
	{ 14,	7,	"sf10240" }
};
static const unsigned int asn_MAP_LTE_gapPeriod_r13_enum2value_2[] = {
	14,	/* sf10240(14) */
	4,	/* sf120(4) */
	11,	/* sf1280(11) */
	5,	/* sf140(5) */
	6,	/* sf160(6) */
	7,	/* sf240(7) */
	12,	/* sf2560(12) */
	8,	/* sf280(8) */
	9,	/* sf320(9) */
	0,	/* sf40(0) */
	13,	/* sf5120(13) */
	1,	/* sf60(1) */
	10,	/* sf640(10) */
	2,	/* sf70(2) */
	3	/* sf80(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_gapPeriod_r13_specs_2 = {
	asn_MAP_LTE_gapPeriod_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_gapPeriod_r13_enum2value_2,	/* N => "tag"; sorted by N */
	15,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_gapPeriod_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_gapPeriod_r13_2 = {
	"gapPeriod-r13",
	"gapPeriod-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_gapPeriod_r13_tags_2,
	sizeof(asn_DEF_LTE_gapPeriod_r13_tags_2)
		/sizeof(asn_DEF_LTE_gapPeriod_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_gapPeriod_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_gapPeriod_r13_tags_2)
		/sizeof(asn_DEF_LTE_gapPeriod_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_gapPeriod_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_gapPeriod_r13_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_GapPattern_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_GapPattern_r13, gapPeriod_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_gapPeriod_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapPeriod-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_GapPattern_r13, gapOffset_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicator_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapOffset-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_GapPattern_r13, gapSubframeBitmap_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_gapSubframeBitmap_r13_constr_19,  memb_LTE_gapSubframeBitmap_r13_constraint_1 },
		0, 0, /* No default value */
		"gapSubframeBitmap-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_SL_GapPattern_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_GapPattern_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gapPeriod-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gapOffset-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* gapSubframeBitmap-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_GapPattern_r13_specs_1 = {
	sizeof(struct LTE_SL_GapPattern_r13),
	offsetof(struct LTE_SL_GapPattern_r13, _asn_ctx),
	asn_MAP_LTE_SL_GapPattern_r13_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_GapPattern_r13 = {
	"SL-GapPattern-r13",
	"SL-GapPattern-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_GapPattern_r13_tags_1,
	sizeof(asn_DEF_LTE_SL_GapPattern_r13_tags_1)
		/sizeof(asn_DEF_LTE_SL_GapPattern_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_GapPattern_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_GapPattern_r13_tags_1)
		/sizeof(asn_DEF_LTE_SL_GapPattern_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_GapPattern_r13_1,
	3,	/* Elements count */
	&asn_SPC_LTE_SL_GapPattern_r13_specs_1	/* Additional specs */
};

