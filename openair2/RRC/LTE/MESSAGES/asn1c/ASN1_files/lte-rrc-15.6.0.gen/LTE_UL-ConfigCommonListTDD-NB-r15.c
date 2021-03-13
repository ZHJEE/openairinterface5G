/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_UL-ConfigCommonListTDD-NB-r15.h"

asn_per_constraints_t asn_PER_type_LTE_UL_ConfigCommonListTDD_NB_r15_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (SIZE(1..15)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_UL_ConfigCommonListTDD_NB_r15_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_UL_ConfigCommonTDD_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_UL_ConfigCommonListTDD_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_LTE_UL_ConfigCommonListTDD_NB_r15_specs_1 = {
	sizeof(struct LTE_UL_ConfigCommonListTDD_NB_r15),
	offsetof(struct LTE_UL_ConfigCommonListTDD_NB_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UL_ConfigCommonListTDD_NB_r15 = {
	"UL-ConfigCommonListTDD-NB-r15",
	"UL-ConfigCommonListTDD-NB-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_UL_ConfigCommonListTDD_NB_r15_tags_1,
	sizeof(asn_DEF_LTE_UL_ConfigCommonListTDD_NB_r15_tags_1)
		/sizeof(asn_DEF_LTE_UL_ConfigCommonListTDD_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_UL_ConfigCommonListTDD_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UL_ConfigCommonListTDD_NB_r15_tags_1)
		/sizeof(asn_DEF_LTE_UL_ConfigCommonListTDD_NB_r15_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_UL_ConfigCommonListTDD_NB_r15_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_LTE_UL_ConfigCommonListTDD_NB_r15_1,
	1,	/* Single element */
	&asn_SPC_LTE_UL_ConfigCommonListTDD_NB_r15_specs_1	/* Additional specs */
};

