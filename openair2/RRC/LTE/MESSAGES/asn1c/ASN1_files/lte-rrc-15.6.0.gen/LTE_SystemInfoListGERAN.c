/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_SystemInfoListGERAN.h"

static int
memb_OCTET_STRING_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 23)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_Member_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  23 }	/* (SIZE(1..23)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_SystemInfoListGERAN_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_SystemInfoListGERAN_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_Member_constr_2,  memb_OCTET_STRING_constraint_1 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_SystemInfoListGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_LTE_SystemInfoListGERAN_specs_1 = {
	sizeof(struct LTE_SystemInfoListGERAN),
	offsetof(struct LTE_SystemInfoListGERAN, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInfoListGERAN = {
	"SystemInfoListGERAN",
	"SystemInfoListGERAN",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_SystemInfoListGERAN_tags_1,
	sizeof(asn_DEF_LTE_SystemInfoListGERAN_tags_1)
		/sizeof(asn_DEF_LTE_SystemInfoListGERAN_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInfoListGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInfoListGERAN_tags_1)
		/sizeof(asn_DEF_LTE_SystemInfoListGERAN_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_SystemInfoListGERAN_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_LTE_SystemInfoListGERAN_1,
	1,	/* Single element */
	&asn_SPC_LTE_SystemInfoListGERAN_specs_1	/* Additional specs */
};

