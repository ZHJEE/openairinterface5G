/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_SystemInformationBlockType1-MBMS-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_systemInfoValueTag_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_LTE_cellAccessRelatedInfoList_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 5)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_si_WindowLength_r14_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_cellAccessRelatedInfoList_r14_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_systemInfoValueTag_r14_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_cellAccessRelatedInfoList_r14_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_cellAccessRelatedInfo_r14_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfo_r14, plmn_IdentityList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PLMN_IdentityList_MBMS_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfo_r14, trackingAreaCode_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_TrackingAreaCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaCode-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfo_r14, cellIdentity_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_cellAccessRelatedInfo_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_cellAccessRelatedInfo_r14_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellIdentity-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_cellAccessRelatedInfo_r14_specs_2 = {
	sizeof(struct LTE_SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfo_r14),
	offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfo_r14, _asn_ctx),
	asn_MAP_LTE_cellAccessRelatedInfo_r14_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cellAccessRelatedInfo_r14_2 = {
	"cellAccessRelatedInfo-r14",
	"cellAccessRelatedInfo-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_cellAccessRelatedInfo_r14_tags_2,
	sizeof(asn_DEF_LTE_cellAccessRelatedInfo_r14_tags_2)
		/sizeof(asn_DEF_LTE_cellAccessRelatedInfo_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_cellAccessRelatedInfo_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_cellAccessRelatedInfo_r14_tags_2)
		/sizeof(asn_DEF_LTE_cellAccessRelatedInfo_r14_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_cellAccessRelatedInfo_r14_2,
	3,	/* Elements count */
	&asn_SPC_LTE_cellAccessRelatedInfo_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_si_WindowLength_r14_value2enum_9[] = {
	{ 0,	3,	"ms1" },
	{ 1,	3,	"ms2" },
	{ 2,	3,	"ms5" },
	{ 3,	4,	"ms10" },
	{ 4,	4,	"ms15" },
	{ 5,	4,	"ms20" },
	{ 6,	4,	"ms40" },
	{ 7,	4,	"ms80" }
};
static const unsigned int asn_MAP_LTE_si_WindowLength_r14_enum2value_9[] = {
	0,	/* ms1(0) */
	3,	/* ms10(3) */
	4,	/* ms15(4) */
	1,	/* ms2(1) */
	5,	/* ms20(5) */
	6,	/* ms40(6) */
	2,	/* ms5(2) */
	7	/* ms80(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_si_WindowLength_r14_specs_9 = {
	asn_MAP_LTE_si_WindowLength_r14_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_si_WindowLength_r14_enum2value_9,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_si_WindowLength_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_si_WindowLength_r14_9 = {
	"si-WindowLength-r14",
	"si-WindowLength-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_si_WindowLength_r14_tags_9,
	sizeof(asn_DEF_LTE_si_WindowLength_r14_tags_9)
		/sizeof(asn_DEF_LTE_si_WindowLength_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_si_WindowLength_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_si_WindowLength_r14_tags_9)
		/sizeof(asn_DEF_LTE_si_WindowLength_r14_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_si_WindowLength_r14_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_si_WindowLength_r14_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_cellAccessRelatedInfoList_r14_22[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_CellAccessRelatedInfo_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_cellAccessRelatedInfoList_r14_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_cellAccessRelatedInfoList_r14_specs_22 = {
	sizeof(struct LTE_SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfoList_r14),
	offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfoList_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cellAccessRelatedInfoList_r14_22 = {
	"cellAccessRelatedInfoList-r14",
	"cellAccessRelatedInfoList-r14",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_cellAccessRelatedInfoList_r14_tags_22,
	sizeof(asn_DEF_LTE_cellAccessRelatedInfoList_r14_tags_22)
		/sizeof(asn_DEF_LTE_cellAccessRelatedInfoList_r14_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_cellAccessRelatedInfoList_r14_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_cellAccessRelatedInfoList_r14_tags_22)
		/sizeof(asn_DEF_LTE_cellAccessRelatedInfoList_r14_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_cellAccessRelatedInfoList_r14_constr_22, SEQUENCE_OF_constraint },
	asn_MBR_LTE_cellAccessRelatedInfoList_r14_22,
	1,	/* Single element */
	&asn_SPC_LTE_cellAccessRelatedInfoList_r14_specs_22	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_24 = {
	sizeof(struct LTE_SystemInformationBlockType1_MBMS_r14__nonCriticalExtension),
	offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_24 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_24,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_24)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_24[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_24,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_24)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_24[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_nonCriticalExtension_specs_24	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_MBMS_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, cellAccessRelatedInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_cellAccessRelatedInfo_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellAccessRelatedInfo-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, freqBandIndicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FreqBandIndicator_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandIndicator-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, multiBandInfoList_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MultiBandInfoList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiBandInfoList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, schedulingInfoList_MBMS_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SchedulingInfoList_MBMS_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingInfoList-MBMS-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, si_WindowLength_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_si_WindowLength_r14_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si-WindowLength-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, systemInfoValueTag_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_systemInfoValueTag_r14_constr_18,  memb_LTE_systemInfoValueTag_r14_constraint_1 },
		0, 0, /* No default value */
		"systemInfoValueTag-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, nonMBSFN_SubframeConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NonMBSFN_SubframeConfig_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonMBSFN-SubframeConfig-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, pdsch_ConfigCommon_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDSCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ConfigCommon-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, systemInformationBlockType13_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SystemInformationBlockType13_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInformationBlockType13-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, cellAccessRelatedInfoList_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_LTE_cellAccessRelatedInfoList_r14_22,
		0,
		{ 0, &asn_PER_memb_LTE_cellAccessRelatedInfoList_r14_constr_22,  memb_LTE_cellAccessRelatedInfoList_r14_constraint_1 },
		0, 0, /* No default value */
		"cellAccessRelatedInfoList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType1_MBMS_r14_oms_1[] = { 2, 6, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType1_MBMS_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType1_MBMS_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellAccessRelatedInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* freqBandIndicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* multiBandInfoList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* schedulingInfoList-MBMS-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* si-WindowLength-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* systemInfoValueTag-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* nonMBSFN-SubframeConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pdsch-ConfigCommon-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* systemInformationBlockType13-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cellAccessRelatedInfoList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_MBMS_r14_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType1_MBMS_r14),
	offsetof(struct LTE_SystemInformationBlockType1_MBMS_r14, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType1_MBMS_r14_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType1_MBMS_r14_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_MBMS_r14 = {
	"SystemInformationBlockType1-MBMS-r14",
	"SystemInformationBlockType1-MBMS-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType1_MBMS_r14_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType1_MBMS_r14_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType1_MBMS_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType1_MBMS_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType1_MBMS_r14_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType1_MBMS_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformationBlockType1_MBMS_r14_1,
	11,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType1_MBMS_r14_specs_1	/* Additional specs */
};

