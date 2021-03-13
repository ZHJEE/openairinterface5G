/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_MeasConfig.h"

static int
memb_LTE_setup_constraint_42(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_LTE_speedStatePars_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_measScaleFactor_r12_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_setup_constr_44 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_heightThreshRef_r15_constr_42 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_setup_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasConfig__speedStatePars__setup, mobilityStateParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MobilityStateParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityStateParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasConfig__speedStatePars__setup, timeToTrigger_SF),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SpeedStateScaleFactors,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger-SF"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mobilityStateParameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timeToTrigger-SF */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_14 = {
	sizeof(struct LTE_MeasConfig__speedStatePars__setup),
	offsetof(struct LTE_MeasConfig__speedStatePars__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_14 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_14,
	sizeof(asn_DEF_LTE_setup_tags_14)
		/sizeof(asn_DEF_LTE_setup_tags_14[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_14,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_14)
		/sizeof(asn_DEF_LTE_setup_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_14,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_speedStatePars_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasConfig__speedStatePars, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasConfig__speedStatePars, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_speedStatePars_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_speedStatePars_specs_12 = {
	sizeof(struct LTE_MeasConfig__speedStatePars),
	offsetof(struct LTE_MeasConfig__speedStatePars, _asn_ctx),
	offsetof(struct LTE_MeasConfig__speedStatePars, present),
	sizeof(((struct LTE_MeasConfig__speedStatePars *)0)->present),
	asn_MAP_LTE_speedStatePars_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_speedStatePars_12 = {
	"speedStatePars",
	"speedStatePars",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_speedStatePars_constr_12, CHOICE_constraint },
	asn_MBR_LTE_speedStatePars_12,
	2,	/* Elements count */
	&asn_SPC_LTE_speedStatePars_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_18[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasConfig__ext1, measObjectToAddModList_v9e0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasObjectToAddModList_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectToAddModList-v9e0"
		},
};
static const int asn_MAP_LTE_ext1_oms_18[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measObjectToAddModList-v9e0 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_18 = {
	sizeof(struct LTE_MeasConfig__ext1),
	offsetof(struct LTE_MeasConfig__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_18,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_18,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_18 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_18,
	sizeof(asn_DEF_LTE_ext1_tags_18)
		/sizeof(asn_DEF_LTE_ext1_tags_18[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_18,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_18)
		/sizeof(asn_DEF_LTE_ext1_tags_18[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_18,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_20[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasConfig__ext2, allowInterruptions_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowInterruptions-r11"
		},
};
static const int asn_MAP_LTE_ext2_oms_20[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* allowInterruptions-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_20 = {
	sizeof(struct LTE_MeasConfig__ext2),
	offsetof(struct LTE_MeasConfig__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_20,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_20,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_20 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_20,
	sizeof(asn_DEF_LTE_ext2_tags_20)
		/sizeof(asn_DEF_LTE_ext2_tags_20[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_20,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_20)
		/sizeof(asn_DEF_LTE_ext2_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_20,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_measScaleFactor_r12_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasConfig__ext3__measScaleFactor_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasConfig__ext3__measScaleFactor_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasScaleFactor_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_measScaleFactor_r12_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_measScaleFactor_r12_specs_23 = {
	sizeof(struct LTE_MeasConfig__ext3__measScaleFactor_r12),
	offsetof(struct LTE_MeasConfig__ext3__measScaleFactor_r12, _asn_ctx),
	offsetof(struct LTE_MeasConfig__ext3__measScaleFactor_r12, present),
	sizeof(((struct LTE_MeasConfig__ext3__measScaleFactor_r12 *)0)->present),
	asn_MAP_LTE_measScaleFactor_r12_tag2el_23,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_measScaleFactor_r12_23 = {
	"measScaleFactor-r12",
	"measScaleFactor-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_measScaleFactor_r12_constr_23, CHOICE_constraint },
	asn_MBR_LTE_measScaleFactor_r12_23,
	2,	/* Elements count */
	&asn_SPC_LTE_measScaleFactor_r12_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_22[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_MeasConfig__ext3, measScaleFactor_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_measScaleFactor_r12_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measScaleFactor-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MeasConfig__ext3, measIdToRemoveListExt_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdToRemoveListExt_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdToRemoveListExt-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasConfig__ext3, measIdToAddModListExt_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdToAddModListExt_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdToAddModListExt-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasConfig__ext3, measRSRQ_OnAllSymbols_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measRSRQ-OnAllSymbols-r12"
		},
};
static const int asn_MAP_LTE_ext3_oms_22[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measScaleFactor-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measIdToRemoveListExt-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measIdToAddModListExt-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measRSRQ-OnAllSymbols-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_22 = {
	sizeof(struct LTE_MeasConfig__ext3),
	offsetof(struct LTE_MeasConfig__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_22,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_22,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_22 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_22,
	sizeof(asn_DEF_LTE_ext3_tags_22)
		/sizeof(asn_DEF_LTE_ext3_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_22)
		/sizeof(asn_DEF_LTE_ext3_tags_22[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_22,
	4,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext4_29[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_MeasConfig__ext4, measObjectToRemoveListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasObjectToRemoveListExt_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectToRemoveListExt-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MeasConfig__ext4, measObjectToAddModListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasObjectToAddModListExt_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectToAddModListExt-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasConfig__ext4, measIdToAddModList_v1310),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdToAddModList_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdToAddModList-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasConfig__ext4, measIdToAddModListExt_v1310),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdToAddModListExt_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdToAddModListExt-v1310"
		},
};
static const int asn_MAP_LTE_ext4_oms_29[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_ext4_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext4_tag2el_29[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectToRemoveListExt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measObjectToAddModListExt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measIdToAddModList-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measIdToAddModListExt-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext4_specs_29 = {
	sizeof(struct LTE_MeasConfig__ext4),
	offsetof(struct LTE_MeasConfig__ext4, _asn_ctx),
	asn_MAP_LTE_ext4_tag2el_29,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_ext4_oms_29,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext4_29 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext4_tags_29,
	sizeof(asn_DEF_LTE_ext4_tags_29)
		/sizeof(asn_DEF_LTE_ext4_tags_29[0]) - 1, /* 1 */
	asn_DEF_LTE_ext4_tags_29,	/* Same as above */
	sizeof(asn_DEF_LTE_ext4_tags_29)
		/sizeof(asn_DEF_LTE_ext4_tags_29[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext4_29,
	4,	/* Elements count */
	&asn_SPC_LTE_ext4_specs_29	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext5_34[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasConfig__ext5, measGapConfigPerCC_List_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_MeasGapConfigPerCC_List_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapConfigPerCC-List-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasConfig__ext5, measGapSharingConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_MeasGapSharingConfig_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapSharingConfig-r14"
		},
};
static const int asn_MAP_LTE_ext5_oms_34[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext5_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext5_tag2el_34[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measGapConfigPerCC-List-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measGapSharingConfig-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext5_specs_34 = {
	sizeof(struct LTE_MeasConfig__ext5),
	offsetof(struct LTE_MeasConfig__ext5, _asn_ctx),
	asn_MAP_LTE_ext5_tag2el_34,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext5_oms_34,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext5_34 = {
	"ext5",
	"ext5",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext5_tags_34,
	sizeof(asn_DEF_LTE_ext5_tags_34)
		/sizeof(asn_DEF_LTE_ext5_tags_34[0]) - 1, /* 1 */
	asn_DEF_LTE_ext5_tags_34,	/* Same as above */
	sizeof(asn_DEF_LTE_ext5_tags_34)
		/sizeof(asn_DEF_LTE_ext5_tags_34[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext5_34,
	2,	/* Elements count */
	&asn_SPC_LTE_ext5_specs_34	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext6_37[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasConfig__ext6, fr1_Gap_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr1-Gap-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasConfig__ext6, mgta_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mgta-r15"
		},
};
static const int asn_MAP_LTE_ext6_oms_37[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext6_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext6_tag2el_37[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fr1-Gap-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mgta-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext6_specs_37 = {
	sizeof(struct LTE_MeasConfig__ext6),
	offsetof(struct LTE_MeasConfig__ext6, _asn_ctx),
	asn_MAP_LTE_ext6_tag2el_37,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext6_oms_37,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext6_37 = {
	"ext6",
	"ext6",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext6_tags_37,
	sizeof(asn_DEF_LTE_ext6_tags_37)
		/sizeof(asn_DEF_LTE_ext6_tags_37[0]) - 1, /* 1 */
	asn_DEF_LTE_ext6_tags_37,	/* Same as above */
	sizeof(asn_DEF_LTE_ext6_tags_37)
		/sizeof(asn_DEF_LTE_ext6_tags_37[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext6_37,
	2,	/* Elements count */
	&asn_SPC_LTE_ext6_specs_37	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_heightThreshRef_r15_42[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasConfig__ext7__heightThreshRef_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasConfig__ext7__heightThreshRef_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_setup_constr_44,  memb_LTE_setup_constraint_42 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_heightThreshRef_r15_tag2el_42[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_heightThreshRef_r15_specs_42 = {
	sizeof(struct LTE_MeasConfig__ext7__heightThreshRef_r15),
	offsetof(struct LTE_MeasConfig__ext7__heightThreshRef_r15, _asn_ctx),
	offsetof(struct LTE_MeasConfig__ext7__heightThreshRef_r15, present),
	sizeof(((struct LTE_MeasConfig__ext7__heightThreshRef_r15 *)0)->present),
	asn_MAP_LTE_heightThreshRef_r15_tag2el_42,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_heightThreshRef_r15_42 = {
	"heightThreshRef-r15",
	"heightThreshRef-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_heightThreshRef_r15_constr_42, CHOICE_constraint },
	asn_MBR_LTE_heightThreshRef_r15_42,
	2,	/* Elements count */
	&asn_SPC_LTE_heightThreshRef_r15_specs_42	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext7_40[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasConfig__ext7, measGapConfigDensePRS_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_MeasGapConfigDensePRS_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapConfigDensePRS-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasConfig__ext7, heightThreshRef_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_heightThreshRef_r15_42,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"heightThreshRef-r15"
		},
};
static const int asn_MAP_LTE_ext7_oms_40[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext7_tags_40[] = {
	(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext7_tag2el_40[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measGapConfigDensePRS-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* heightThreshRef-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext7_specs_40 = {
	sizeof(struct LTE_MeasConfig__ext7),
	offsetof(struct LTE_MeasConfig__ext7, _asn_ctx),
	asn_MAP_LTE_ext7_tag2el_40,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext7_oms_40,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext7_40 = {
	"ext7",
	"ext7",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext7_tags_40,
	sizeof(asn_DEF_LTE_ext7_tags_40)
		/sizeof(asn_DEF_LTE_ext7_tags_40[0]) - 1, /* 1 */
	asn_DEF_LTE_ext7_tags_40,	/* Same as above */
	sizeof(asn_DEF_LTE_ext7_tags_40)
		/sizeof(asn_DEF_LTE_ext7_tags_40[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext7_40,
	2,	/* Elements count */
	&asn_SPC_LTE_ext7_specs_40	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MeasConfig_1[] = {
	{ ATF_POINTER, 18, offsetof(struct LTE_MeasConfig, measObjectToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasObjectToRemoveList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectToRemoveList"
		},
	{ ATF_POINTER, 17, offsetof(struct LTE_MeasConfig, measObjectToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasObjectToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectToAddModList"
		},
	{ ATF_POINTER, 16, offsetof(struct LTE_MeasConfig, reportConfigToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReportConfigToRemoveList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportConfigToRemoveList"
		},
	{ ATF_POINTER, 15, offsetof(struct LTE_MeasConfig, reportConfigToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReportConfigToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportConfigToAddModList"
		},
	{ ATF_POINTER, 14, offsetof(struct LTE_MeasConfig, measIdToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdToRemoveList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdToRemoveList"
		},
	{ ATF_POINTER, 13, offsetof(struct LTE_MeasConfig, measIdToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdToAddModList"
		},
	{ ATF_POINTER, 12, offsetof(struct LTE_MeasConfig, quantityConfig),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfig"
		},
	{ ATF_POINTER, 11, offsetof(struct LTE_MeasConfig, measGapConfig),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_MeasGapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapConfig"
		},
	{ ATF_POINTER, 10, offsetof(struct LTE_MeasConfig, s_Measure),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-Measure"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_MeasConfig, preRegistrationInfoHRPD),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PreRegistrationInfoHRPD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preRegistrationInfoHRPD"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_MeasConfig, speedStatePars),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_speedStatePars_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedStatePars"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_MeasConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_LTE_ext1_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_MeasConfig, ext2),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_LTE_ext2_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_MeasConfig, ext3),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_LTE_ext3_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_MeasConfig, ext4),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		0,
		&asn_DEF_LTE_ext4_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext4"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MeasConfig, ext5),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		0,
		&asn_DEF_LTE_ext5_34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext5"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasConfig, ext6),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		0,
		&asn_DEF_LTE_ext6_37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext6"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasConfig, ext7),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		0,
		&asn_DEF_LTE_ext7_40,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext7"
		},
};
static const int asn_MAP_LTE_MeasConfig_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 };
static const ber_tlv_tag_t asn_DEF_LTE_MeasConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MeasConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measObjectToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportConfigToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reportConfigToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measIdToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measIdToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* quantityConfig */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* measGapConfig */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* s-Measure */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* preRegistrationInfoHRPD */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* speedStatePars */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* ext4 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* ext5 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* ext6 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 } /* ext7 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasConfig_specs_1 = {
	sizeof(struct LTE_MeasConfig),
	offsetof(struct LTE_MeasConfig, _asn_ctx),
	asn_MAP_LTE_MeasConfig_tag2el_1,
	18,	/* Count of tags in the map */
	asn_MAP_LTE_MeasConfig_oms_1,	/* Optional members */
	11, 7,	/* Root/Additions */
	11,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasConfig = {
	"MeasConfig",
	"MeasConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MeasConfig_tags_1,
	sizeof(asn_DEF_LTE_MeasConfig_tags_1)
		/sizeof(asn_DEF_LTE_MeasConfig_tags_1[0]), /* 1 */
	asn_DEF_LTE_MeasConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MeasConfig_tags_1)
		/sizeof(asn_DEF_LTE_MeasConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MeasConfig_1,
	18,	/* Elements count */
	&asn_SPC_LTE_MeasConfig_specs_1	/* Additional specs */
};

