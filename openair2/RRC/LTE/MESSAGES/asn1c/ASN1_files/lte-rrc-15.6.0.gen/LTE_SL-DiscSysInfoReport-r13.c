/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_SL-DiscSysInfoReport-r13.h"

static int
memb_LTE_q_RxLevMinOffset_r13_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
static int
memb_LTE_referenceSignalPower_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= 50)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_q_RxLevMinOffset_r13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_q_Hyst_r13_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_ul_Bandwidth_r13_constr_35 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_referenceSignalPower_r13_constr_44 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -60,  50 }	/* (-60..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_discCellSelectionInfo_r13_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_DiscSysInfoReport_r13__discCellSelectionInfo_r13, q_RxLevMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_DiscSysInfoReport_r13__discCellSelectionInfo_r13, q_RxLevMinOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_q_RxLevMinOffset_r13_constr_11,  memb_LTE_q_RxLevMinOffset_r13_constraint_9 },
		0, 0, /* No default value */
		"q-RxLevMinOffset-r13"
		},
};
static const int asn_MAP_LTE_discCellSelectionInfo_r13_oms_9[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_discCellSelectionInfo_r13_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_discCellSelectionInfo_r13_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMin-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* q-RxLevMinOffset-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_discCellSelectionInfo_r13_specs_9 = {
	sizeof(struct LTE_SL_DiscSysInfoReport_r13__discCellSelectionInfo_r13),
	offsetof(struct LTE_SL_DiscSysInfoReport_r13__discCellSelectionInfo_r13, _asn_ctx),
	asn_MAP_LTE_discCellSelectionInfo_r13_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_discCellSelectionInfo_r13_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discCellSelectionInfo_r13_9 = {
	"discCellSelectionInfo-r13",
	"discCellSelectionInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_discCellSelectionInfo_r13_tags_9,
	sizeof(asn_DEF_LTE_discCellSelectionInfo_r13_tags_9)
		/sizeof(asn_DEF_LTE_discCellSelectionInfo_r13_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_discCellSelectionInfo_r13_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_discCellSelectionInfo_r13_tags_9)
		/sizeof(asn_DEF_LTE_discCellSelectionInfo_r13_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_discCellSelectionInfo_r13_9,
	2,	/* Elements count */
	&asn_SPC_LTE_discCellSelectionInfo_r13_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_q_Hyst_r13_value2enum_13[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB1" },
	{ 2,	3,	"dB2" },
	{ 3,	3,	"dB3" },
	{ 4,	3,	"dB4" },
	{ 5,	3,	"dB5" },
	{ 6,	3,	"dB6" },
	{ 7,	3,	"dB8" },
	{ 8,	4,	"dB10" },
	{ 9,	4,	"dB12" },
	{ 10,	4,	"dB14" },
	{ 11,	4,	"dB16" },
	{ 12,	4,	"dB18" },
	{ 13,	4,	"dB20" },
	{ 14,	4,	"dB22" },
	{ 15,	4,	"dB24" }
};
static const unsigned int asn_MAP_LTE_q_Hyst_r13_enum2value_13[] = {
	0,	/* dB0(0) */
	1,	/* dB1(1) */
	8,	/* dB10(8) */
	9,	/* dB12(9) */
	10,	/* dB14(10) */
	11,	/* dB16(11) */
	12,	/* dB18(12) */
	2,	/* dB2(2) */
	13,	/* dB20(13) */
	14,	/* dB22(14) */
	15,	/* dB24(15) */
	3,	/* dB3(3) */
	4,	/* dB4(4) */
	5,	/* dB5(5) */
	6,	/* dB6(6) */
	7	/* dB8(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_q_Hyst_r13_specs_13 = {
	asn_MAP_LTE_q_Hyst_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_q_Hyst_r13_enum2value_13,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_q_Hyst_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_q_Hyst_r13_13 = {
	"q-Hyst-r13",
	"q-Hyst-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_q_Hyst_r13_tags_13,
	sizeof(asn_DEF_LTE_q_Hyst_r13_tags_13)
		/sizeof(asn_DEF_LTE_q_Hyst_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_q_Hyst_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_q_Hyst_r13_tags_13)
		/sizeof(asn_DEF_LTE_q_Hyst_r13_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_q_Hyst_r13_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_q_Hyst_r13_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_cellReselectionInfo_r13_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13, q_Hyst_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_q_Hyst_r13_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-Hyst-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13, q_RxLevMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13, t_ReselectionEUTRA_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_T_Reselection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionEUTRA-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_cellReselectionInfo_r13_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_cellReselectionInfo_r13_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-Hyst-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-RxLevMin-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* t-ReselectionEUTRA-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_cellReselectionInfo_r13_specs_12 = {
	sizeof(struct LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13),
	offsetof(struct LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13, _asn_ctx),
	asn_MAP_LTE_cellReselectionInfo_r13_tag2el_12,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cellReselectionInfo_r13_12 = {
	"cellReselectionInfo-r13",
	"cellReselectionInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_cellReselectionInfo_r13_tags_12,
	sizeof(asn_DEF_LTE_cellReselectionInfo_r13_tags_12)
		/sizeof(asn_DEF_LTE_cellReselectionInfo_r13_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_cellReselectionInfo_r13_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_cellReselectionInfo_r13_tags_12)
		/sizeof(asn_DEF_LTE_cellReselectionInfo_r13_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_cellReselectionInfo_r13_12,
	3,	/* Elements count */
	&asn_SPC_LTE_cellReselectionInfo_r13_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ul_Bandwidth_r13_value2enum_35[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_LTE_ul_Bandwidth_r13_enum2value_35[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ul_Bandwidth_r13_specs_35 = {
	asn_MAP_LTE_ul_Bandwidth_r13_value2enum_35,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ul_Bandwidth_r13_enum2value_35,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ul_Bandwidth_r13_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ul_Bandwidth_r13_35 = {
	"ul-Bandwidth-r13",
	"ul-Bandwidth-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ul_Bandwidth_r13_tags_35,
	sizeof(asn_DEF_LTE_ul_Bandwidth_r13_tags_35)
		/sizeof(asn_DEF_LTE_ul_Bandwidth_r13_tags_35[0]) - 1, /* 1 */
	asn_DEF_LTE_ul_Bandwidth_r13_tags_35,	/* Same as above */
	sizeof(asn_DEF_LTE_ul_Bandwidth_r13_tags_35)
		/sizeof(asn_DEF_LTE_ul_Bandwidth_r13_tags_35[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ul_Bandwidth_r13_constr_35, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ul_Bandwidth_r13_specs_35	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_freqInfo_r13_33[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_SL_DiscSysInfoReport_r13__freqInfo_r13, ul_CarrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CarrierFreq-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_DiscSysInfoReport_r13__freqInfo_r13, ul_Bandwidth_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ul_Bandwidth_r13_35,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-Bandwidth-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_DiscSysInfoReport_r13__freqInfo_r13, additionalSpectrumEmission_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission-r13"
		},
};
static const int asn_MAP_LTE_freqInfo_r13_oms_33[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_freqInfo_r13_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_freqInfo_r13_tag2el_33[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CarrierFreq-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-Bandwidth-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* additionalSpectrumEmission-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_freqInfo_r13_specs_33 = {
	sizeof(struct LTE_SL_DiscSysInfoReport_r13__freqInfo_r13),
	offsetof(struct LTE_SL_DiscSysInfoReport_r13__freqInfo_r13, _asn_ctx),
	asn_MAP_LTE_freqInfo_r13_tag2el_33,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_freqInfo_r13_oms_33,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_freqInfo_r13_33 = {
	"freqInfo-r13",
	"freqInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_freqInfo_r13_tags_33,
	sizeof(asn_DEF_LTE_freqInfo_r13_tags_33)
		/sizeof(asn_DEF_LTE_freqInfo_r13_tags_33[0]) - 1, /* 1 */
	asn_DEF_LTE_freqInfo_r13_tags_33,	/* Same as above */
	sizeof(asn_DEF_LTE_freqInfo_r13_tags_33)
		/sizeof(asn_DEF_LTE_freqInfo_r13_tags_33[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_freqInfo_r13_33,
	3,	/* Elements count */
	&asn_SPC_LTE_freqInfo_r13_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_freqInfo_v1370_47[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_DiscSysInfoReport_r13__ext1__freqInfo_v1370, additionalSpectrumEmission_v1370),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AdditionalSpectrumEmission_v10l0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission-v1370"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_freqInfo_v1370_tags_47[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_freqInfo_v1370_tag2el_47[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* additionalSpectrumEmission-v1370 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_freqInfo_v1370_specs_47 = {
	sizeof(struct LTE_SL_DiscSysInfoReport_r13__ext1__freqInfo_v1370),
	offsetof(struct LTE_SL_DiscSysInfoReport_r13__ext1__freqInfo_v1370, _asn_ctx),
	asn_MAP_LTE_freqInfo_v1370_tag2el_47,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_freqInfo_v1370_47 = {
	"freqInfo-v1370",
	"freqInfo-v1370",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_freqInfo_v1370_tags_47,
	sizeof(asn_DEF_LTE_freqInfo_v1370_tags_47)
		/sizeof(asn_DEF_LTE_freqInfo_v1370_tags_47[0]) - 1, /* 1 */
	asn_DEF_LTE_freqInfo_v1370_tags_47,	/* Same as above */
	sizeof(asn_DEF_LTE_freqInfo_v1370_tags_47)
		/sizeof(asn_DEF_LTE_freqInfo_v1370_tags_47[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_freqInfo_v1370_47,
	1,	/* Elements count */
	&asn_SPC_LTE_freqInfo_v1370_specs_47	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_46[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_DiscSysInfoReport_r13__ext1, freqInfo_v1370),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_freqInfo_v1370_47,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqInfo-v1370"
		},
};
static const int asn_MAP_LTE_ext1_oms_46[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_46[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_46[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* freqInfo-v1370 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_46 = {
	sizeof(struct LTE_SL_DiscSysInfoReport_r13__ext1),
	offsetof(struct LTE_SL_DiscSysInfoReport_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_46,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_46,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_46 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_46,
	sizeof(asn_DEF_LTE_ext1_tags_46)
		/sizeof(asn_DEF_LTE_ext1_tags_46[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_46,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_46)
		/sizeof(asn_DEF_LTE_ext1_tags_46[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_46,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_46	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_DiscSysInfoReport_r13_1[] = {
	{ ATF_POINTER, 14, offsetof(struct LTE_SL_DiscSysInfoReport_r13, plmn_IdentityList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PLMN_IdentityList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r13"
		},
	{ ATF_POINTER, 13, offsetof(struct LTE_SL_DiscSysInfoReport_r13, cellIdentity_13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity-13"
		},
	{ ATF_POINTER, 12, offsetof(struct LTE_SL_DiscSysInfoReport_r13, carrierFreqInfo_13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreqInfo-13"
		},
	{ ATF_POINTER, 11, offsetof(struct LTE_SL_DiscSysInfoReport_r13, discRxResources_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscRxPoolList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discRxResources-r13"
		},
	{ ATF_POINTER, 10, offsetof(struct LTE_SL_DiscSysInfoReport_r13, discTxPoolCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscTxPoolList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxPoolCommon-r13"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_SL_DiscSysInfoReport_r13, discTxPowerInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscTxPowerInfoList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxPowerInfo-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_SL_DiscSysInfoReport_r13, discSyncConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_SyncConfigNFreq_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discSyncConfig-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_SL_DiscSysInfoReport_r13, discCellSelectionInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_discCellSelectionInfo_r13_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discCellSelectionInfo-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_SL_DiscSysInfoReport_r13, cellReselectionInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_LTE_cellReselectionInfo_r13_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionInfo-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SL_DiscSysInfoReport_r13, tdd_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_TDD_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SL_DiscSysInfoReport_r13, freqInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_LTE_freqInfo_r13_33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqInfo-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SL_DiscSysInfoReport_r13, p_Max_r13),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_DiscSysInfoReport_r13, referenceSignalPower_r13),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_referenceSignalPower_r13_constr_44,  memb_LTE_referenceSignalPower_r13_constraint_1 },
		0, 0, /* No default value */
		"referenceSignalPower-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_DiscSysInfoReport_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_LTE_ext1_46,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_SL_DiscSysInfoReport_r13_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_DiscSysInfoReport_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_DiscSysInfoReport_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellIdentity-13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* carrierFreqInfo-13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* discRxResources-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* discTxPoolCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* discTxPowerInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* discSyncConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* discCellSelectionInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* cellReselectionInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* tdd-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* freqInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* p-Max-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* referenceSignalPower-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_DiscSysInfoReport_r13_specs_1 = {
	sizeof(struct LTE_SL_DiscSysInfoReport_r13),
	offsetof(struct LTE_SL_DiscSysInfoReport_r13, _asn_ctx),
	asn_MAP_LTE_SL_DiscSysInfoReport_r13_tag2el_1,
	14,	/* Count of tags in the map */
	asn_MAP_LTE_SL_DiscSysInfoReport_r13_oms_1,	/* Optional members */
	13, 1,	/* Root/Additions */
	13,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_DiscSysInfoReport_r13 = {
	"SL-DiscSysInfoReport-r13",
	"SL-DiscSysInfoReport-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_DiscSysInfoReport_r13_tags_1,
	sizeof(asn_DEF_LTE_SL_DiscSysInfoReport_r13_tags_1)
		/sizeof(asn_DEF_LTE_SL_DiscSysInfoReport_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_DiscSysInfoReport_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_DiscSysInfoReport_r13_tags_1)
		/sizeof(asn_DEF_LTE_SL_DiscSysInfoReport_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_DiscSysInfoReport_r13_1,
	14,	/* Elements count */
	&asn_SPC_LTE_SL_DiscSysInfoReport_r13_specs_1	/* Additional specs */
};

