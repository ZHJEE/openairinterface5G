/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_SCG-Configuration-r12.h"

static int
memb_LTE_scg_Counter_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_scg_Counter_r12_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_SCG_Configuration_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_scg_ConfigPartMCG_r12_4[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SCG_Configuration_r12__setup__scg_ConfigPartMCG_r12, scg_Counter_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_scg_Counter_r12_constr_5,  memb_LTE_scg_Counter_r12_constraint_4 },
		0, 0, /* No default value */
		"scg-Counter-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SCG_Configuration_r12__setup__scg_ConfigPartMCG_r12, powerCoordinationInfo_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PowerCoordinationInfo_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerCoordinationInfo-r12"
		},
};
static const int asn_MAP_LTE_scg_ConfigPartMCG_r12_oms_4[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_scg_ConfigPartMCG_r12_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_scg_ConfigPartMCG_r12_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scg-Counter-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* powerCoordinationInfo-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_scg_ConfigPartMCG_r12_specs_4 = {
	sizeof(struct LTE_SCG_Configuration_r12__setup__scg_ConfigPartMCG_r12),
	offsetof(struct LTE_SCG_Configuration_r12__setup__scg_ConfigPartMCG_r12, _asn_ctx),
	asn_MAP_LTE_scg_ConfigPartMCG_r12_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_scg_ConfigPartMCG_r12_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_scg_ConfigPartMCG_r12_4 = {
	"scg-ConfigPartMCG-r12",
	"scg-ConfigPartMCG-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_scg_ConfigPartMCG_r12_tags_4,
	sizeof(asn_DEF_LTE_scg_ConfigPartMCG_r12_tags_4)
		/sizeof(asn_DEF_LTE_scg_ConfigPartMCG_r12_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_scg_ConfigPartMCG_r12_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_scg_ConfigPartMCG_r12_tags_4)
		/sizeof(asn_DEF_LTE_scg_ConfigPartMCG_r12_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_scg_ConfigPartMCG_r12_4,
	2,	/* Elements count */
	&asn_SPC_LTE_scg_ConfigPartMCG_r12_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SCG_Configuration_r12__setup, scg_ConfigPartMCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_scg_ConfigPartMCG_r12_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scg-ConfigPartMCG-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SCG_Configuration_r12__setup, scg_ConfigPartSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCG_ConfigPartSCG_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scg-ConfigPartSCG-r12"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scg-ConfigPartMCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* scg-ConfigPartSCG-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_SCG_Configuration_r12__setup),
	offsetof(struct LTE_SCG_Configuration_r12__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_3,
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_3,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SCG_Configuration_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SCG_Configuration_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SCG_Configuration_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SCG_Configuration_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_SCG_Configuration_r12_specs_1 = {
	sizeof(struct LTE_SCG_Configuration_r12),
	offsetof(struct LTE_SCG_Configuration_r12, _asn_ctx),
	offsetof(struct LTE_SCG_Configuration_r12, present),
	sizeof(((struct LTE_SCG_Configuration_r12 *)0)->present),
	asn_MAP_LTE_SCG_Configuration_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SCG_Configuration_r12 = {
	"SCG-Configuration-r12",
	"SCG-Configuration-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_SCG_Configuration_r12_constr_1, CHOICE_constraint },
	asn_MBR_LTE_SCG_Configuration_r12_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SCG_Configuration_r12_specs_1	/* Additional specs */
};

