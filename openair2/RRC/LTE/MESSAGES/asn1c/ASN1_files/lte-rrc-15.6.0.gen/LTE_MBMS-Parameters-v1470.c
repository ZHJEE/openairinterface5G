/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_MBMS-Parameters-v1470.h"

static int
memb_LTE_explicitValue_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 20)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_memb_LTE_explicitValue_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  2,  20 }	/* (2..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mbms_MaxBW_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mbms_ScalingFactor1dot25_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mbms_ScalingFactor7dot5_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_mbms_MaxBW_r14_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14, choice.implicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"implicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_explicitValue_constr_4,  memb_LTE_explicitValue_constraint_2 },
		0, 0, /* No default value */
		"explicitValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_mbms_MaxBW_r14_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* implicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* explicitValue */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_mbms_MaxBW_r14_specs_2 = {
	sizeof(struct LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14),
	offsetof(struct LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14, _asn_ctx),
	offsetof(struct LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14, present),
	sizeof(((struct LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14 *)0)->present),
	asn_MAP_LTE_mbms_MaxBW_r14_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mbms_MaxBW_r14_2 = {
	"mbms-MaxBW-r14",
	"mbms-MaxBW-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_mbms_MaxBW_r14_constr_2, CHOICE_constraint },
	asn_MBR_LTE_mbms_MaxBW_r14_2,
	2,	/* Elements count */
	&asn_SPC_LTE_mbms_MaxBW_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_mbms_ScalingFactor1dot25_r14_value2enum_5[] = {
	{ 0,	2,	"n3" },
	{ 1,	2,	"n6" },
	{ 2,	2,	"n9" },
	{ 3,	3,	"n12" }
};
static const unsigned int asn_MAP_LTE_mbms_ScalingFactor1dot25_r14_enum2value_5[] = {
	3,	/* n12(3) */
	0,	/* n3(0) */
	1,	/* n6(1) */
	2	/* n9(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mbms_ScalingFactor1dot25_r14_specs_5 = {
	asn_MAP_LTE_mbms_ScalingFactor1dot25_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mbms_ScalingFactor1dot25_r14_enum2value_5,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mbms_ScalingFactor1dot25_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mbms_ScalingFactor1dot25_r14_5 = {
	"mbms-ScalingFactor1dot25-r14",
	"mbms-ScalingFactor1dot25-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mbms_ScalingFactor1dot25_r14_tags_5,
	sizeof(asn_DEF_LTE_mbms_ScalingFactor1dot25_r14_tags_5)
		/sizeof(asn_DEF_LTE_mbms_ScalingFactor1dot25_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_mbms_ScalingFactor1dot25_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_mbms_ScalingFactor1dot25_r14_tags_5)
		/sizeof(asn_DEF_LTE_mbms_ScalingFactor1dot25_r14_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mbms_ScalingFactor1dot25_r14_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mbms_ScalingFactor1dot25_r14_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_mbms_ScalingFactor7dot5_r14_value2enum_10[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" }
};
static const unsigned int asn_MAP_LTE_mbms_ScalingFactor7dot5_r14_enum2value_10[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3	/* n4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mbms_ScalingFactor7dot5_r14_specs_10 = {
	asn_MAP_LTE_mbms_ScalingFactor7dot5_r14_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mbms_ScalingFactor7dot5_r14_enum2value_10,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mbms_ScalingFactor7dot5_r14_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mbms_ScalingFactor7dot5_r14_10 = {
	"mbms-ScalingFactor7dot5-r14",
	"mbms-ScalingFactor7dot5-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mbms_ScalingFactor7dot5_r14_tags_10,
	sizeof(asn_DEF_LTE_mbms_ScalingFactor7dot5_r14_tags_10)
		/sizeof(asn_DEF_LTE_mbms_ScalingFactor7dot5_r14_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_mbms_ScalingFactor7dot5_r14_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_mbms_ScalingFactor7dot5_r14_tags_10)
		/sizeof(asn_DEF_LTE_mbms_ScalingFactor7dot5_r14_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mbms_ScalingFactor7dot5_r14_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mbms_ScalingFactor7dot5_r14_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MBMS_Parameters_v1470_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBMS_Parameters_v1470, mbms_MaxBW_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_mbms_MaxBW_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-MaxBW-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MBMS_Parameters_v1470, mbms_ScalingFactor1dot25_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mbms_ScalingFactor1dot25_r14_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-ScalingFactor1dot25-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MBMS_Parameters_v1470, mbms_ScalingFactor7dot5_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mbms_ScalingFactor7dot5_r14_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-ScalingFactor7dot5-r14"
		},
};
static const int asn_MAP_LTE_MBMS_Parameters_v1470_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_MBMS_Parameters_v1470_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MBMS_Parameters_v1470_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-MaxBW-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-ScalingFactor1dot25-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* mbms-ScalingFactor7dot5-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMS_Parameters_v1470_specs_1 = {
	sizeof(struct LTE_MBMS_Parameters_v1470),
	offsetof(struct LTE_MBMS_Parameters_v1470, _asn_ctx),
	asn_MAP_LTE_MBMS_Parameters_v1470_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_MBMS_Parameters_v1470_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MBMS_Parameters_v1470 = {
	"MBMS-Parameters-v1470",
	"MBMS-Parameters-v1470",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MBMS_Parameters_v1470_tags_1,
	sizeof(asn_DEF_LTE_MBMS_Parameters_v1470_tags_1)
		/sizeof(asn_DEF_LTE_MBMS_Parameters_v1470_tags_1[0]), /* 1 */
	asn_DEF_LTE_MBMS_Parameters_v1470_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MBMS_Parameters_v1470_tags_1)
		/sizeof(asn_DEF_LTE_MBMS_Parameters_v1470_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MBMS_Parameters_v1470_1,
	3,	/* Elements count */
	&asn_SPC_LTE_MBMS_Parameters_v1470_specs_1	/* Additional specs */
};

