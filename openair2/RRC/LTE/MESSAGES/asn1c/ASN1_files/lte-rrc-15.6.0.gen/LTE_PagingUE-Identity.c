/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_PagingUE-Identity.h"

asn_per_constraints_t asn_PER_type_LTE_PagingUE_Identity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_PagingUE_Identity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PagingUE_Identity, choice.s_TMSI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_S_TMSI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-TMSI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PagingUE_Identity, choice.imsi),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IMSI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"imsi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PagingUE_Identity, choice.ng_5G_S_TMSI_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NG_5G_S_TMSI_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-5G-S-TMSI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PagingUE_Identity, choice.fullI_RNTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_I_RNTI_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fullI-RNTI-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PagingUE_Identity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s-TMSI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* imsi */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ng-5G-S-TMSI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* fullI-RNTI-r15 */
};
asn_CHOICE_specifics_t asn_SPC_LTE_PagingUE_Identity_specs_1 = {
	sizeof(struct LTE_PagingUE_Identity),
	offsetof(struct LTE_PagingUE_Identity, _asn_ctx),
	offsetof(struct LTE_PagingUE_Identity, present),
	sizeof(((struct LTE_PagingUE_Identity *)0)->present),
	asn_MAP_LTE_PagingUE_Identity_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PagingUE_Identity = {
	"PagingUE-Identity",
	"PagingUE-Identity",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_PagingUE_Identity_constr_1, CHOICE_constraint },
	asn_MBR_LTE_PagingUE_Identity_1,
	4,	/* Elements count */
	&asn_SPC_LTE_PagingUE_Identity_specs_1	/* Additional specs */
};

