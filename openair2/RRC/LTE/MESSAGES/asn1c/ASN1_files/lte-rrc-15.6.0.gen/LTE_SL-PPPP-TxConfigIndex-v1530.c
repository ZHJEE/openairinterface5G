/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_SL-PPPP-TxConfigIndex-v1530.h"

static int
memb_LTE_mcs_PSSCH_RangeList_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_mcs_PSSCH_RangeList_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_mcs_PSSCH_RangeList_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_mcs_PSSCH_RangeList_r15_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_MCS_PSSCH_Range_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_mcs_PSSCH_RangeList_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_mcs_PSSCH_RangeList_r15_specs_2 = {
	sizeof(struct LTE_SL_PPPP_TxConfigIndex_v1530__mcs_PSSCH_RangeList_r15),
	offsetof(struct LTE_SL_PPPP_TxConfigIndex_v1530__mcs_PSSCH_RangeList_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mcs_PSSCH_RangeList_r15_2 = {
	"mcs-PSSCH-RangeList-r15",
	"mcs-PSSCH-RangeList-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_mcs_PSSCH_RangeList_r15_tags_2,
	sizeof(asn_DEF_LTE_mcs_PSSCH_RangeList_r15_tags_2)
		/sizeof(asn_DEF_LTE_mcs_PSSCH_RangeList_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_mcs_PSSCH_RangeList_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_mcs_PSSCH_RangeList_r15_tags_2)
		/sizeof(asn_DEF_LTE_mcs_PSSCH_RangeList_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mcs_PSSCH_RangeList_r15_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_LTE_mcs_PSSCH_RangeList_r15_2,
	1,	/* Single element */
	&asn_SPC_LTE_mcs_PSSCH_RangeList_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_PPPP_TxConfigIndex_v1530_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_PPPP_TxConfigIndex_v1530, mcs_PSSCH_RangeList_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_mcs_PSSCH_RangeList_r15_2,
		0,
		{ 0, &asn_PER_memb_LTE_mcs_PSSCH_RangeList_r15_constr_2,  memb_LTE_mcs_PSSCH_RangeList_r15_constraint_1 },
		0, 0, /* No default value */
		"mcs-PSSCH-RangeList-r15"
		},
};
static const int asn_MAP_LTE_SL_PPPP_TxConfigIndex_v1530_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_PPPP_TxConfigIndex_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_PPPP_TxConfigIndex_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mcs-PSSCH-RangeList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_PPPP_TxConfigIndex_v1530_specs_1 = {
	sizeof(struct LTE_SL_PPPP_TxConfigIndex_v1530),
	offsetof(struct LTE_SL_PPPP_TxConfigIndex_v1530, _asn_ctx),
	asn_MAP_LTE_SL_PPPP_TxConfigIndex_v1530_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_SL_PPPP_TxConfigIndex_v1530_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_PPPP_TxConfigIndex_v1530 = {
	"SL-PPPP-TxConfigIndex-v1530",
	"SL-PPPP-TxConfigIndex-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_PPPP_TxConfigIndex_v1530_tags_1,
	sizeof(asn_DEF_LTE_SL_PPPP_TxConfigIndex_v1530_tags_1)
		/sizeof(asn_DEF_LTE_SL_PPPP_TxConfigIndex_v1530_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_PPPP_TxConfigIndex_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_PPPP_TxConfigIndex_v1530_tags_1)
		/sizeof(asn_DEF_LTE_SL_PPPP_TxConfigIndex_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_PPPP_TxConfigIndex_v1530_1,
	1,	/* Elements count */
	&asn_SPC_LTE_SL_PPPP_TxConfigIndex_v1530_specs_1	/* Additional specs */
};

