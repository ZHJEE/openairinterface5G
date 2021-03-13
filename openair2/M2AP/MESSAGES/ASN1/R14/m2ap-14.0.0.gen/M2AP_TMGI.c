/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "R14/m2ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m2ap-14.0.0.gen/`
 */

#include "M2AP_TMGI.h"

#include "M2AP_ProtocolExtensionContainer.h"
static int
memb_M2AP_serviceID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_M2AP_serviceID_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_M2AP_TMGI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_TMGI, pLMNidentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMNidentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_TMGI, serviceID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_M2AP_serviceID_constr_3,  memb_M2AP_serviceID_constraint_1 },
		0, 0, /* No default value */
		"serviceID"
		},
	{ ATF_POINTER, 1, offsetof(struct M2AP_TMGI, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_ProtocolExtensionContainer_1871P21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_M2AP_TMGI_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_M2AP_TMGI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_TMGI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNidentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* serviceID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_M2AP_TMGI_specs_1 = {
	sizeof(struct M2AP_TMGI),
	offsetof(struct M2AP_TMGI, _asn_ctx),
	asn_MAP_M2AP_TMGI_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_M2AP_TMGI_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M2AP_TMGI = {
	"TMGI",
	"TMGI",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_TMGI_tags_1,
	sizeof(asn_DEF_M2AP_TMGI_tags_1)
		/sizeof(asn_DEF_M2AP_TMGI_tags_1[0]), /* 1 */
	asn_DEF_M2AP_TMGI_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_TMGI_tags_1)
		/sizeof(asn_DEF_M2AP_TMGI_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_TMGI_1,
	3,	/* Elements count */
	&asn_SPC_M2AP_TMGI_specs_1	/* Additional specs */
};

