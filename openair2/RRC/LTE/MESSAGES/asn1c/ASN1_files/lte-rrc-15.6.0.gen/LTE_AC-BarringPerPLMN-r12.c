/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_AC-BarringPerPLMN-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_plmn_IdentityIndex_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_ac_BarringSkipForMMTELVoice_r12_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_ac_BarringSkipForMMTELVideo_r12_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_ac_BarringSkipForSMS_r12_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_plmn_IdentityIndex_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_ac_BarringInfo_r12_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_AC_BarringPerPLMN_r12__ac_BarringInfo_r12, ac_BarringForEmergency_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringForEmergency-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_AC_BarringPerPLMN_r12__ac_BarringInfo_r12, ac_BarringForMO_Signalling_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AC_BarringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringForMO-Signalling-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_AC_BarringPerPLMN_r12__ac_BarringInfo_r12, ac_BarringForMO_Data_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AC_BarringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringForMO-Data-r12"
		},
};
static const int asn_MAP_LTE_ac_BarringInfo_r12_oms_3[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ac_BarringInfo_r12_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ac_BarringInfo_r12_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ac-BarringForEmergency-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ac-BarringForMO-Signalling-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ac-BarringForMO-Data-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ac_BarringInfo_r12_specs_3 = {
	sizeof(struct LTE_AC_BarringPerPLMN_r12__ac_BarringInfo_r12),
	offsetof(struct LTE_AC_BarringPerPLMN_r12__ac_BarringInfo_r12, _asn_ctx),
	asn_MAP_LTE_ac_BarringInfo_r12_tag2el_3,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ac_BarringInfo_r12_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringInfo_r12_3 = {
	"ac-BarringInfo-r12",
	"ac-BarringInfo-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ac_BarringInfo_r12_tags_3,
	sizeof(asn_DEF_LTE_ac_BarringInfo_r12_tags_3)
		/sizeof(asn_DEF_LTE_ac_BarringInfo_r12_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_ac_BarringInfo_r12_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_ac_BarringInfo_r12_tags_3)
		/sizeof(asn_DEF_LTE_ac_BarringInfo_r12_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ac_BarringInfo_r12_3,
	3,	/* Elements count */
	&asn_SPC_LTE_ac_BarringInfo_r12_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ac_BarringSkipForMMTELVoice_r12_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_ac_BarringSkipForMMTELVoice_r12_enum2value_7[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ac_BarringSkipForMMTELVoice_r12_specs_7 = {
	asn_MAP_LTE_ac_BarringSkipForMMTELVoice_r12_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ac_BarringSkipForMMTELVoice_r12_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ac_BarringSkipForMMTELVoice_r12_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringSkipForMMTELVoice_r12_7 = {
	"ac-BarringSkipForMMTELVoice-r12",
	"ac-BarringSkipForMMTELVoice-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ac_BarringSkipForMMTELVoice_r12_tags_7,
	sizeof(asn_DEF_LTE_ac_BarringSkipForMMTELVoice_r12_tags_7)
		/sizeof(asn_DEF_LTE_ac_BarringSkipForMMTELVoice_r12_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_ac_BarringSkipForMMTELVoice_r12_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_ac_BarringSkipForMMTELVoice_r12_tags_7)
		/sizeof(asn_DEF_LTE_ac_BarringSkipForMMTELVoice_r12_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ac_BarringSkipForMMTELVoice_r12_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ac_BarringSkipForMMTELVoice_r12_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ac_BarringSkipForMMTELVideo_r12_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_ac_BarringSkipForMMTELVideo_r12_enum2value_9[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ac_BarringSkipForMMTELVideo_r12_specs_9 = {
	asn_MAP_LTE_ac_BarringSkipForMMTELVideo_r12_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ac_BarringSkipForMMTELVideo_r12_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ac_BarringSkipForMMTELVideo_r12_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringSkipForMMTELVideo_r12_9 = {
	"ac-BarringSkipForMMTELVideo-r12",
	"ac-BarringSkipForMMTELVideo-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ac_BarringSkipForMMTELVideo_r12_tags_9,
	sizeof(asn_DEF_LTE_ac_BarringSkipForMMTELVideo_r12_tags_9)
		/sizeof(asn_DEF_LTE_ac_BarringSkipForMMTELVideo_r12_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_ac_BarringSkipForMMTELVideo_r12_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_ac_BarringSkipForMMTELVideo_r12_tags_9)
		/sizeof(asn_DEF_LTE_ac_BarringSkipForMMTELVideo_r12_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ac_BarringSkipForMMTELVideo_r12_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ac_BarringSkipForMMTELVideo_r12_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ac_BarringSkipForSMS_r12_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_ac_BarringSkipForSMS_r12_enum2value_11[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ac_BarringSkipForSMS_r12_specs_11 = {
	asn_MAP_LTE_ac_BarringSkipForSMS_r12_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ac_BarringSkipForSMS_r12_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ac_BarringSkipForSMS_r12_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringSkipForSMS_r12_11 = {
	"ac-BarringSkipForSMS-r12",
	"ac-BarringSkipForSMS-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ac_BarringSkipForSMS_r12_tags_11,
	sizeof(asn_DEF_LTE_ac_BarringSkipForSMS_r12_tags_11)
		/sizeof(asn_DEF_LTE_ac_BarringSkipForSMS_r12_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_ac_BarringSkipForSMS_r12_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_ac_BarringSkipForSMS_r12_tags_11)
		/sizeof(asn_DEF_LTE_ac_BarringSkipForSMS_r12_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ac_BarringSkipForSMS_r12_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ac_BarringSkipForSMS_r12_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_AC_BarringPerPLMN_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_AC_BarringPerPLMN_r12, plmn_IdentityIndex_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_plmn_IdentityIndex_r12_constr_2,  memb_LTE_plmn_IdentityIndex_r12_constraint_1 },
		0, 0, /* No default value */
		"plmn-IdentityIndex-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_AC_BarringPerPLMN_r12, ac_BarringInfo_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_ac_BarringInfo_r12_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringInfo-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_AC_BarringPerPLMN_r12, ac_BarringSkipForMMTELVoice_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ac_BarringSkipForMMTELVoice_r12_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringSkipForMMTELVoice-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_AC_BarringPerPLMN_r12, ac_BarringSkipForMMTELVideo_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ac_BarringSkipForMMTELVideo_r12_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringSkipForMMTELVideo-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_AC_BarringPerPLMN_r12, ac_BarringSkipForSMS_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ac_BarringSkipForSMS_r12_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringSkipForSMS-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_AC_BarringPerPLMN_r12, ac_BarringForCSFB_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AC_BarringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringForCSFB-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_AC_BarringPerPLMN_r12, ssac_BarringForMMTEL_Voice_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AC_BarringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssac-BarringForMMTEL-Voice-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_AC_BarringPerPLMN_r12, ssac_BarringForMMTEL_Video_r12),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AC_BarringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssac-BarringForMMTEL-Video-r12"
		},
};
static const int asn_MAP_LTE_AC_BarringPerPLMN_r12_oms_1[] = { 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_LTE_AC_BarringPerPLMN_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_AC_BarringPerPLMN_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityIndex-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ac-BarringInfo-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ac-BarringSkipForMMTELVoice-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ac-BarringSkipForMMTELVideo-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ac-BarringSkipForSMS-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ac-BarringForCSFB-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ssac-BarringForMMTEL-Voice-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ssac-BarringForMMTEL-Video-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_AC_BarringPerPLMN_r12_specs_1 = {
	sizeof(struct LTE_AC_BarringPerPLMN_r12),
	offsetof(struct LTE_AC_BarringPerPLMN_r12, _asn_ctx),
	asn_MAP_LTE_AC_BarringPerPLMN_r12_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_LTE_AC_BarringPerPLMN_r12_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_AC_BarringPerPLMN_r12 = {
	"AC-BarringPerPLMN-r12",
	"AC-BarringPerPLMN-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_AC_BarringPerPLMN_r12_tags_1,
	sizeof(asn_DEF_LTE_AC_BarringPerPLMN_r12_tags_1)
		/sizeof(asn_DEF_LTE_AC_BarringPerPLMN_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_AC_BarringPerPLMN_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_AC_BarringPerPLMN_r12_tags_1)
		/sizeof(asn_DEF_LTE_AC_BarringPerPLMN_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_AC_BarringPerPLMN_r12_1,
	8,	/* Elements count */
	&asn_SPC_LTE_AC_BarringPerPLMN_r12_specs_1	/* Additional specs */
};

