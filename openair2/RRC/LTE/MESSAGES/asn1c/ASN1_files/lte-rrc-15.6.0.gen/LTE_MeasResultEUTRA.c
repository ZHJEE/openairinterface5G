/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_MeasResultEUTRA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_cgi_Info_5GC_r15_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 6)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_primaryPLMN_Suitable_r12_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_freqBandIndicatorPriority_r13_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_cgi_Info_5GC_r15_constr_27 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_cgi_Info_5GC_r15_constr_27 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_cgi_Info_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultEUTRA__cgi_Info, cellGlobalId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellGlobalIdEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellGlobalId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultEUTRA__cgi_Info, trackingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_TrackingAreaCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaCode"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasResultEUTRA__cgi_Info, plmn_IdentityList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PLMN_IdentityList2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList"
		},
};
static const int asn_MAP_LTE_cgi_Info_oms_3[] = { 2 };
static const ber_tlv_tag_t asn_DEF_LTE_cgi_Info_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_cgi_Info_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* plmn-IdentityList */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_cgi_Info_specs_3 = {
	sizeof(struct LTE_MeasResultEUTRA__cgi_Info),
	offsetof(struct LTE_MeasResultEUTRA__cgi_Info, _asn_ctx),
	asn_MAP_LTE_cgi_Info_tag2el_3,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_cgi_Info_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cgi_Info_3 = {
	"cgi-Info",
	"cgi-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_cgi_Info_tags_3,
	sizeof(asn_DEF_LTE_cgi_Info_tags_3)
		/sizeof(asn_DEF_LTE_cgi_Info_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_cgi_Info_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_cgi_Info_tags_3)
		/sizeof(asn_DEF_LTE_cgi_Info_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_cgi_Info_3,
	3,	/* Elements count */
	&asn_SPC_LTE_cgi_Info_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_11[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasResultEUTRA__measResult__ext1, additionalSI_Info_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AdditionalSI_Info_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSI-Info-r9"
		},
};
static const int asn_MAP_LTE_ext1_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* additionalSI-Info-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_11 = {
	sizeof(struct LTE_MeasResultEUTRA__measResult__ext1),
	offsetof(struct LTE_MeasResultEUTRA__measResult__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_11 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_11,
	sizeof(asn_DEF_LTE_ext1_tags_11)
		/sizeof(asn_DEF_LTE_ext1_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_11)
		/sizeof(asn_DEF_LTE_ext1_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_11,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_primaryPLMN_Suitable_r12_value2enum_14[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_primaryPLMN_Suitable_r12_enum2value_14[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_primaryPLMN_Suitable_r12_specs_14 = {
	asn_MAP_LTE_primaryPLMN_Suitable_r12_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_primaryPLMN_Suitable_r12_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_primaryPLMN_Suitable_r12_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_primaryPLMN_Suitable_r12_14 = {
	"primaryPLMN-Suitable-r12",
	"primaryPLMN-Suitable-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_primaryPLMN_Suitable_r12_tags_14,
	sizeof(asn_DEF_LTE_primaryPLMN_Suitable_r12_tags_14)
		/sizeof(asn_DEF_LTE_primaryPLMN_Suitable_r12_tags_14[0]) - 1, /* 1 */
	asn_DEF_LTE_primaryPLMN_Suitable_r12_tags_14,	/* Same as above */
	sizeof(asn_DEF_LTE_primaryPLMN_Suitable_r12_tags_14)
		/sizeof(asn_DEF_LTE_primaryPLMN_Suitable_r12_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_primaryPLMN_Suitable_r12_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_primaryPLMN_Suitable_r12_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_13[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasResultEUTRA__measResult__ext2, primaryPLMN_Suitable_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_primaryPLMN_Suitable_r12_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primaryPLMN-Suitable-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasResultEUTRA__measResult__ext2, measResult_v1250),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRQ_Range_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResult-v1250"
		},
};
static const int asn_MAP_LTE_ext2_oms_13[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* primaryPLMN-Suitable-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResult-v1250 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_13 = {
	sizeof(struct LTE_MeasResultEUTRA__measResult__ext2),
	offsetof(struct LTE_MeasResultEUTRA__measResult__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_13,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_13,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_13 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_13,
	sizeof(asn_DEF_LTE_ext2_tags_13)
		/sizeof(asn_DEF_LTE_ext2_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_13)
		/sizeof(asn_DEF_LTE_ext2_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_13,
	2,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_freqBandIndicatorPriority_r13_value2enum_22[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_freqBandIndicatorPriority_r13_enum2value_22[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_freqBandIndicatorPriority_r13_specs_22 = {
	asn_MAP_LTE_freqBandIndicatorPriority_r13_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_freqBandIndicatorPriority_r13_enum2value_22,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_freqBandIndicatorPriority_r13_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_freqBandIndicatorPriority_r13_22 = {
	"freqBandIndicatorPriority-r13",
	"freqBandIndicatorPriority-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_freqBandIndicatorPriority_r13_tags_22,
	sizeof(asn_DEF_LTE_freqBandIndicatorPriority_r13_tags_22)
		/sizeof(asn_DEF_LTE_freqBandIndicatorPriority_r13_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_freqBandIndicatorPriority_r13_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_freqBandIndicatorPriority_r13_tags_22)
		/sizeof(asn_DEF_LTE_freqBandIndicatorPriority_r13_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_freqBandIndicatorPriority_r13_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_freqBandIndicatorPriority_r13_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_cgi_Info_v1310_19[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_MeasResultEUTRA__measResult__ext3__cgi_Info_v1310, freqBandIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FreqBandIndicator_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandIndicator-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasResultEUTRA__measResult__ext3__cgi_Info_v1310, multiBandInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MultiBandInfoList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiBandInfoList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasResultEUTRA__measResult__ext3__cgi_Info_v1310, freqBandIndicatorPriority_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_freqBandIndicatorPriority_r13_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandIndicatorPriority-r13"
		},
};
static const int asn_MAP_LTE_cgi_Info_v1310_oms_19[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_cgi_Info_v1310_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_cgi_Info_v1310_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freqBandIndicator-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multiBandInfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* freqBandIndicatorPriority-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_cgi_Info_v1310_specs_19 = {
	sizeof(struct LTE_MeasResultEUTRA__measResult__ext3__cgi_Info_v1310),
	offsetof(struct LTE_MeasResultEUTRA__measResult__ext3__cgi_Info_v1310, _asn_ctx),
	asn_MAP_LTE_cgi_Info_v1310_tag2el_19,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_cgi_Info_v1310_oms_19,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cgi_Info_v1310_19 = {
	"cgi-Info-v1310",
	"cgi-Info-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_cgi_Info_v1310_tags_19,
	sizeof(asn_DEF_LTE_cgi_Info_v1310_tags_19)
		/sizeof(asn_DEF_LTE_cgi_Info_v1310_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_cgi_Info_v1310_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_cgi_Info_v1310_tags_19)
		/sizeof(asn_DEF_LTE_cgi_Info_v1310_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_cgi_Info_v1310_19,
	3,	/* Elements count */
	&asn_SPC_LTE_cgi_Info_v1310_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_17[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasResultEUTRA__measResult__ext3, rs_sinr_Result_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RS_SINR_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-sinr-Result-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasResultEUTRA__measResult__ext3, cgi_Info_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_cgi_Info_v1310_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cgi-Info-v1310"
		},
};
static const int asn_MAP_LTE_ext3_oms_17[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rs-sinr-Result-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cgi-Info-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_17 = {
	sizeof(struct LTE_MeasResultEUTRA__measResult__ext3),
	offsetof(struct LTE_MeasResultEUTRA__measResult__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_17,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_17,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_17 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_17,
	sizeof(asn_DEF_LTE_ext3_tags_17)
		/sizeof(asn_DEF_LTE_ext3_tags_17[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_17,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_17)
		/sizeof(asn_DEF_LTE_ext3_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_17,
	2,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext4_24[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasResultEUTRA__measResult__ext4, measResult_v1360),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRP_Range_v1360,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResult-v1360"
		},
};
static const int asn_MAP_LTE_ext4_oms_24[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext4_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext4_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measResult-v1360 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext4_specs_24 = {
	sizeof(struct LTE_MeasResultEUTRA__measResult__ext4),
	offsetof(struct LTE_MeasResultEUTRA__measResult__ext4, _asn_ctx),
	asn_MAP_LTE_ext4_tag2el_24,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext4_oms_24,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext4_24 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext4_tags_24,
	sizeof(asn_DEF_LTE_ext4_tags_24)
		/sizeof(asn_DEF_LTE_ext4_tags_24[0]) - 1, /* 1 */
	asn_DEF_LTE_ext4_tags_24,	/* Same as above */
	sizeof(asn_DEF_LTE_ext4_tags_24)
		/sizeof(asn_DEF_LTE_ext4_tags_24[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext4_24,
	1,	/* Elements count */
	&asn_SPC_LTE_ext4_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_cgi_Info_5GC_r15_27[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_CellAccessRelatedInfo_5GC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_cgi_Info_5GC_r15_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_cgi_Info_5GC_r15_specs_27 = {
	sizeof(struct LTE_MeasResultEUTRA__measResult__ext5__cgi_Info_5GC_r15),
	offsetof(struct LTE_MeasResultEUTRA__measResult__ext5__cgi_Info_5GC_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cgi_Info_5GC_r15_27 = {
	"cgi-Info-5GC-r15",
	"cgi-Info-5GC-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_cgi_Info_5GC_r15_tags_27,
	sizeof(asn_DEF_LTE_cgi_Info_5GC_r15_tags_27)
		/sizeof(asn_DEF_LTE_cgi_Info_5GC_r15_tags_27[0]) - 1, /* 1 */
	asn_DEF_LTE_cgi_Info_5GC_r15_tags_27,	/* Same as above */
	sizeof(asn_DEF_LTE_cgi_Info_5GC_r15_tags_27)
		/sizeof(asn_DEF_LTE_cgi_Info_5GC_r15_tags_27[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_cgi_Info_5GC_r15_constr_27, SEQUENCE_OF_constraint },
	asn_MBR_LTE_cgi_Info_5GC_r15_27,
	1,	/* Single element */
	&asn_SPC_LTE_cgi_Info_5GC_r15_specs_27	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext5_26[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasResultEUTRA__measResult__ext5, cgi_Info_5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_cgi_Info_5GC_r15_27,
		0,
		{ 0, &asn_PER_memb_LTE_cgi_Info_5GC_r15_constr_27,  memb_LTE_cgi_Info_5GC_r15_constraint_26 },
		0, 0, /* No default value */
		"cgi-Info-5GC-r15"
		},
};
static const int asn_MAP_LTE_ext5_oms_26[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext5_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext5_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cgi-Info-5GC-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext5_specs_26 = {
	sizeof(struct LTE_MeasResultEUTRA__measResult__ext5),
	offsetof(struct LTE_MeasResultEUTRA__measResult__ext5, _asn_ctx),
	asn_MAP_LTE_ext5_tag2el_26,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext5_oms_26,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext5_26 = {
	"ext5",
	"ext5",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext5_tags_26,
	sizeof(asn_DEF_LTE_ext5_tags_26)
		/sizeof(asn_DEF_LTE_ext5_tags_26[0]) - 1, /* 1 */
	asn_DEF_LTE_ext5_tags_26,	/* Same as above */
	sizeof(asn_DEF_LTE_ext5_tags_26)
		/sizeof(asn_DEF_LTE_ext5_tags_26[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext5_26,
	1,	/* Elements count */
	&asn_SPC_LTE_ext5_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_measResult_7[] = {
	{ ATF_POINTER, 7, offsetof(struct LTE_MeasResultEUTRA__measResult, rsrpResult),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResult"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_MeasResultEUTRA__measResult, rsrqResult),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_MeasResultEUTRA__measResult, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_ext1_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_MeasResultEUTRA__measResult, ext2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext2_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MeasResultEUTRA__measResult, ext3),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext3_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasResultEUTRA__measResult, ext4),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext4_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext4"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasResultEUTRA__measResult, ext5),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext5_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext5"
		},
};
static const int asn_MAP_LTE_measResult_oms_7[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_LTE_measResult_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_measResult_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResult */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrqResult */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext4 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext5 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_measResult_specs_7 = {
	sizeof(struct LTE_MeasResultEUTRA__measResult),
	offsetof(struct LTE_MeasResultEUTRA__measResult, _asn_ctx),
	asn_MAP_LTE_measResult_tag2el_7,
	7,	/* Count of tags in the map */
	asn_MAP_LTE_measResult_oms_7,	/* Optional members */
	2, 5,	/* Root/Additions */
	2,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_measResult_7 = {
	"measResult",
	"measResult",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_measResult_tags_7,
	sizeof(asn_DEF_LTE_measResult_tags_7)
		/sizeof(asn_DEF_LTE_measResult_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_measResult_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_measResult_tags_7)
		/sizeof(asn_DEF_LTE_measResult_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_measResult_7,
	7,	/* Elements count */
	&asn_SPC_LTE_measResult_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MeasResultEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultEUTRA, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasResultEUTRA, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_cgi_Info_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cgi-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultEUTRA, measResult),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_measResult_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResult"
		},
};
static const int asn_MAP_LTE_MeasResultEUTRA_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_MeasResultEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MeasResultEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cgi-Info */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResult */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResultEUTRA_specs_1 = {
	sizeof(struct LTE_MeasResultEUTRA),
	offsetof(struct LTE_MeasResultEUTRA, _asn_ctx),
	asn_MAP_LTE_MeasResultEUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_MeasResultEUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultEUTRA = {
	"MeasResultEUTRA",
	"MeasResultEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MeasResultEUTRA_tags_1,
	sizeof(asn_DEF_LTE_MeasResultEUTRA_tags_1)
		/sizeof(asn_DEF_LTE_MeasResultEUTRA_tags_1[0]), /* 1 */
	asn_DEF_LTE_MeasResultEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MeasResultEUTRA_tags_1)
		/sizeof(asn_DEF_LTE_MeasResultEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MeasResultEUTRA_1,
	3,	/* Elements count */
	&asn_SPC_LTE_MeasResultEUTRA_specs_1	/* Additional specs */
};

