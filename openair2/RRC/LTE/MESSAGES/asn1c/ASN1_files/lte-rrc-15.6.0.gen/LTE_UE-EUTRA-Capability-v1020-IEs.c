/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_UE-EUTRA-Capability-v1020-IEs.h"

static int
memb_LTE_ue_Category_v1020_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 6 && value <= 8)) {
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
memb_LTE_featureGroupIndRel10_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_ue_Category_v1020_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  6,  8 }	/* (6..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_featureGroupIndRel10_r10_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1020_IEs_1[] = {
	{ ATF_POINTER, 9, offsetof(struct LTE_UE_EUTRA_Capability_v1020_IEs, ue_Category_v1020),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_ue_Category_v1020_constr_2,  memb_LTE_ue_Category_v1020_constraint_1 },
		0, 0, /* No default value */
		"ue-Category-v1020"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_UE_EUTRA_Capability_v1020_IEs, phyLayerParameters_v1020),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhyLayerParameters_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1020"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_UE_EUTRA_Capability_v1020_IEs, rf_Parameters_v1020),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RF_Parameters_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Parameters-v1020"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_UE_EUTRA_Capability_v1020_IEs, measParameters_v1020),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasParameters_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measParameters-v1020"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_UE_EUTRA_Capability_v1020_IEs, featureGroupIndRel10_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_featureGroupIndRel10_r10_constr_6,  memb_LTE_featureGroupIndRel10_r10_constraint_1 },
		0, 0, /* No default value */
		"featureGroupIndRel10-r10"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_UE_EUTRA_Capability_v1020_IEs, interRAT_ParametersCDMA2000_v1020),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-ParametersCDMA2000-v1020"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_UE_EUTRA_Capability_v1020_IEs, ue_BasedNetwPerfMeasParameters_r10),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-BasedNetwPerfMeasParameters-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_EUTRA_Capability_v1020_IEs, interRAT_ParametersUTRA_TDD_v1020),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IRAT_ParametersUTRA_TDD_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-ParametersUTRA-TDD-v1020"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_EUTRA_Capability_v1020_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_EUTRA_Capability_v1060_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_UE_EUTRA_Capability_v1020_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_EUTRA_Capability_v1020_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_EUTRA_Capability_v1020_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Category-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* phyLayerParameters-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rf-Parameters-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measParameters-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* featureGroupIndRel10-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* interRAT-ParametersCDMA2000-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ue-BasedNetwPerfMeasParameters-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* interRAT-ParametersUTRA-TDD-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1020_IEs_specs_1 = {
	sizeof(struct LTE_UE_EUTRA_Capability_v1020_IEs),
	offsetof(struct LTE_UE_EUTRA_Capability_v1020_IEs, _asn_ctx),
	asn_MAP_LTE_UE_EUTRA_Capability_v1020_IEs_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_LTE_UE_EUTRA_Capability_v1020_IEs_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1020_IEs = {
	"UE-EUTRA-Capability-v1020-IEs",
	"UE-EUTRA-Capability-v1020-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_EUTRA_Capability_v1020_IEs_tags_1,
	sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1020_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1020_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_EUTRA_Capability_v1020_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1020_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1020_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UE_EUTRA_Capability_v1020_IEs_1,
	9,	/* Elements count */
	&asn_SPC_LTE_UE_EUTRA_Capability_v1020_IEs_specs_1	/* Additional specs */
};

