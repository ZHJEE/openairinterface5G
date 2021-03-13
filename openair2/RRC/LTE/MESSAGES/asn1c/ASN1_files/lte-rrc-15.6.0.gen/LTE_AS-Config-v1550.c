/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_AS-Config-v1550.h"

static int
memb_LTE_harq_Offset_r15_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_harq_Offset_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_tdm_PatternConfig_r15_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_AS_Config_v1550__tdm_PatternConfig_r15, subframeAssignment_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SubframeAssignment_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeAssignment-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_AS_Config_v1550__tdm_PatternConfig_r15, harq_Offset_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_harq_Offset_r15_constr_4,  memb_LTE_harq_Offset_r15_constraint_2 },
		0, 0, /* No default value */
		"harq-Offset-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_tdm_PatternConfig_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_tdm_PatternConfig_r15_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subframeAssignment-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* harq-Offset-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_tdm_PatternConfig_r15_specs_2 = {
	sizeof(struct LTE_AS_Config_v1550__tdm_PatternConfig_r15),
	offsetof(struct LTE_AS_Config_v1550__tdm_PatternConfig_r15, _asn_ctx),
	asn_MAP_LTE_tdm_PatternConfig_r15_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_tdm_PatternConfig_r15_2 = {
	"tdm-PatternConfig-r15",
	"tdm-PatternConfig-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_tdm_PatternConfig_r15_tags_2,
	sizeof(asn_DEF_LTE_tdm_PatternConfig_r15_tags_2)
		/sizeof(asn_DEF_LTE_tdm_PatternConfig_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_tdm_PatternConfig_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_tdm_PatternConfig_r15_tags_2)
		/sizeof(asn_DEF_LTE_tdm_PatternConfig_r15_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_tdm_PatternConfig_r15_2,
	2,	/* Elements count */
	&asn_SPC_LTE_tdm_PatternConfig_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_AS_Config_v1550_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_AS_Config_v1550, tdm_PatternConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_tdm_PatternConfig_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdm-PatternConfig-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_AS_Config_v1550, p_MaxEUTRA_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-MaxEUTRA-r15"
		},
};
static const int asn_MAP_LTE_AS_Config_v1550_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_AS_Config_v1550_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_AS_Config_v1550_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdm-PatternConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* p-MaxEUTRA-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_AS_Config_v1550_specs_1 = {
	sizeof(struct LTE_AS_Config_v1550),
	offsetof(struct LTE_AS_Config_v1550, _asn_ctx),
	asn_MAP_LTE_AS_Config_v1550_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_AS_Config_v1550_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_AS_Config_v1550 = {
	"AS-Config-v1550",
	"AS-Config-v1550",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_AS_Config_v1550_tags_1,
	sizeof(asn_DEF_LTE_AS_Config_v1550_tags_1)
		/sizeof(asn_DEF_LTE_AS_Config_v1550_tags_1[0]), /* 1 */
	asn_DEF_LTE_AS_Config_v1550_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_AS_Config_v1550_tags_1)
		/sizeof(asn_DEF_LTE_AS_Config_v1550_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_AS_Config_v1550_1,
	2,	/* Elements count */
	&asn_SPC_LTE_AS_Config_v1550_specs_1	/* Additional specs */
};

