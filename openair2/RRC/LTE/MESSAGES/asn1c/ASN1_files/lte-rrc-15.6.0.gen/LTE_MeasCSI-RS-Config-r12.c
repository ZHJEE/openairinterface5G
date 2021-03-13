/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_MeasCSI-RS-Config-r12.h"

static int
memb_LTE_physCellId_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 503)) {
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
memb_LTE_scramblingIdentity_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 503)) {
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
memb_LTE_resourceConfig_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_LTE_subframeOffset_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_physCellId_r12_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_scramblingIdentity_r12_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_resourceConfig_r12_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_subframeOffset_r12_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_MeasCSI_RS_Config_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasCSI_RS_Config_r12, measCSI_RS_Id_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasCSI_RS_Id_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measCSI-RS-Id-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasCSI_RS_Config_r12, physCellId_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_physCellId_r12_constr_3,  memb_LTE_physCellId_r12_constraint_1 },
		0, 0, /* No default value */
		"physCellId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasCSI_RS_Config_r12, scramblingIdentity_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_scramblingIdentity_r12_constr_4,  memb_LTE_scramblingIdentity_r12_constraint_1 },
		0, 0, /* No default value */
		"scramblingIdentity-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasCSI_RS_Config_r12, resourceConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_resourceConfig_r12_constr_5,  memb_LTE_resourceConfig_r12_constraint_1 },
		0, 0, /* No default value */
		"resourceConfig-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasCSI_RS_Config_r12, subframeOffset_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_subframeOffset_r12_constr_6,  memb_LTE_subframeOffset_r12_constraint_1 },
		0, 0, /* No default value */
		"subframeOffset-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasCSI_RS_Config_r12, csi_RS_IndividualOffset_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_OffsetRange,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-IndividualOffset-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_MeasCSI_RS_Config_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MeasCSI_RS_Config_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measCSI-RS-Id-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physCellId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* scramblingIdentity-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* resourceConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* subframeOffset-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* csi-RS-IndividualOffset-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasCSI_RS_Config_r12_specs_1 = {
	sizeof(struct LTE_MeasCSI_RS_Config_r12),
	offsetof(struct LTE_MeasCSI_RS_Config_r12, _asn_ctx),
	asn_MAP_LTE_MeasCSI_RS_Config_r12_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasCSI_RS_Config_r12 = {
	"MeasCSI-RS-Config-r12",
	"MeasCSI-RS-Config-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MeasCSI_RS_Config_r12_tags_1,
	sizeof(asn_DEF_LTE_MeasCSI_RS_Config_r12_tags_1)
		/sizeof(asn_DEF_LTE_MeasCSI_RS_Config_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_MeasCSI_RS_Config_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MeasCSI_RS_Config_r12_tags_1)
		/sizeof(asn_DEF_LTE_MeasCSI_RS_Config_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MeasCSI_RS_Config_r12_1,
	6,	/* Elements count */
	&asn_SPC_LTE_MeasCSI_RS_Config_r12_specs_1	/* Additional specs */
};

