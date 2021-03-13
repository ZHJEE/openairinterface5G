/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_UplinkPowerControlCommonPSCell-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_p0_NominalPUCCH_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= -96)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_deltaF_PUCCH_Format3_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_deltaF_PUCCH_Format1bCS_r12_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p0_NominalPUCCH_r12_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -127, -96 }	/* (-127..-96) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_deltaF_PUCCH_Format3_r12_value2enum_2[] = {
	{ 0,	8,	"deltaF-1" },
	{ 1,	7,	"deltaF0" },
	{ 2,	7,	"deltaF1" },
	{ 3,	7,	"deltaF2" },
	{ 4,	7,	"deltaF3" },
	{ 5,	7,	"deltaF4" },
	{ 6,	7,	"deltaF5" },
	{ 7,	7,	"deltaF6" }
};
static const unsigned int asn_MAP_LTE_deltaF_PUCCH_Format3_r12_enum2value_2[] = {
	0,	/* deltaF-1(0) */
	1,	/* deltaF0(1) */
	2,	/* deltaF1(2) */
	3,	/* deltaF2(3) */
	4,	/* deltaF3(4) */
	5,	/* deltaF4(5) */
	6,	/* deltaF5(6) */
	7	/* deltaF6(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_deltaF_PUCCH_Format3_r12_specs_2 = {
	asn_MAP_LTE_deltaF_PUCCH_Format3_r12_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_deltaF_PUCCH_Format3_r12_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_deltaF_PUCCH_Format3_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_deltaF_PUCCH_Format3_r12_2 = {
	"deltaF-PUCCH-Format3-r12",
	"deltaF-PUCCH-Format3-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_deltaF_PUCCH_Format3_r12_tags_2,
	sizeof(asn_DEF_LTE_deltaF_PUCCH_Format3_r12_tags_2)
		/sizeof(asn_DEF_LTE_deltaF_PUCCH_Format3_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_deltaF_PUCCH_Format3_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_deltaF_PUCCH_Format3_r12_tags_2)
		/sizeof(asn_DEF_LTE_deltaF_PUCCH_Format3_r12_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_deltaF_PUCCH_Format3_r12_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_deltaF_PUCCH_Format3_r12_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_deltaF_PUCCH_Format1bCS_r12_value2enum_11[] = {
	{ 0,	7,	"deltaF1" },
	{ 1,	7,	"deltaF2" },
	{ 2,	6,	"spare2" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_deltaF_PUCCH_Format1bCS_r12_enum2value_11[] = {
	0,	/* deltaF1(0) */
	1,	/* deltaF2(1) */
	3,	/* spare1(3) */
	2	/* spare2(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_deltaF_PUCCH_Format1bCS_r12_specs_11 = {
	asn_MAP_LTE_deltaF_PUCCH_Format1bCS_r12_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_deltaF_PUCCH_Format1bCS_r12_enum2value_11,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_deltaF_PUCCH_Format1bCS_r12_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_deltaF_PUCCH_Format1bCS_r12_11 = {
	"deltaF-PUCCH-Format1bCS-r12",
	"deltaF-PUCCH-Format1bCS-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_deltaF_PUCCH_Format1bCS_r12_tags_11,
	sizeof(asn_DEF_LTE_deltaF_PUCCH_Format1bCS_r12_tags_11)
		/sizeof(asn_DEF_LTE_deltaF_PUCCH_Format1bCS_r12_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_deltaF_PUCCH_Format1bCS_r12_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_deltaF_PUCCH_Format1bCS_r12_tags_11)
		/sizeof(asn_DEF_LTE_deltaF_PUCCH_Format1bCS_r12_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_deltaF_PUCCH_Format1bCS_r12_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_deltaF_PUCCH_Format1bCS_r12_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UplinkPowerControlCommonPSCell_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UplinkPowerControlCommonPSCell_r12, deltaF_PUCCH_Format3_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_deltaF_PUCCH_Format3_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaF-PUCCH-Format3-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UplinkPowerControlCommonPSCell_r12, deltaF_PUCCH_Format1bCS_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_deltaF_PUCCH_Format1bCS_r12_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaF-PUCCH-Format1bCS-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UplinkPowerControlCommonPSCell_r12, p0_NominalPUCCH_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p0_NominalPUCCH_r12_constr_16,  memb_LTE_p0_NominalPUCCH_r12_constraint_1 },
		0, 0, /* No default value */
		"p0-NominalPUCCH-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UplinkPowerControlCommonPSCell_r12, deltaFList_PUCCH_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DeltaFList_PUCCH,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaFList-PUCCH-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_UplinkPowerControlCommonPSCell_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UplinkPowerControlCommonPSCell_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaF-PUCCH-Format3-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deltaF-PUCCH-Format1bCS-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p0-NominalPUCCH-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* deltaFList-PUCCH-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UplinkPowerControlCommonPSCell_r12_specs_1 = {
	sizeof(struct LTE_UplinkPowerControlCommonPSCell_r12),
	offsetof(struct LTE_UplinkPowerControlCommonPSCell_r12, _asn_ctx),
	asn_MAP_LTE_UplinkPowerControlCommonPSCell_r12_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UplinkPowerControlCommonPSCell_r12 = {
	"UplinkPowerControlCommonPSCell-r12",
	"UplinkPowerControlCommonPSCell-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UplinkPowerControlCommonPSCell_r12_tags_1,
	sizeof(asn_DEF_LTE_UplinkPowerControlCommonPSCell_r12_tags_1)
		/sizeof(asn_DEF_LTE_UplinkPowerControlCommonPSCell_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_UplinkPowerControlCommonPSCell_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UplinkPowerControlCommonPSCell_r12_tags_1)
		/sizeof(asn_DEF_LTE_UplinkPowerControlCommonPSCell_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UplinkPowerControlCommonPSCell_r12_1,
	4,	/* Elements count */
	&asn_SPC_LTE_UplinkPowerControlCommonPSCell_r12_specs_1	/* Additional specs */
};

