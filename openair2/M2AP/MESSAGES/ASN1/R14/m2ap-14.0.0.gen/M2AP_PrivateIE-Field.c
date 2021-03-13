/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Containers"
 * 	found in "R14/m2ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m2ap-14.0.0.gen/`
 */

#include "M2AP_PrivateIE-Field.h"

static int
memb_M2AP_id_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_M2AP_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_M2AP_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_M2AP_id_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_M2AP_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_M2AP_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_CHOICE_specifics_t asn_SPC_M2AP_value_specs_4 = {
	sizeof(struct M2AP_PrivateMessage_Ies__value),
	offsetof(struct M2AP_PrivateMessage_Ies__value, _asn_ctx),
	offsetof(struct M2AP_PrivateMessage_Ies__value, present),
	sizeof(((struct M2AP_PrivateMessage_Ies__value *)0)->present),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_M2AP_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	0, 0,	/* No members */
	&asn_SPC_M2AP_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_M2AP_PrivateMessage_Ies_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_PrivateMessage_Ies, id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_M2AP_PrivateIE_ID,
		0,
		{ 0, &asn_PER_memb_M2AP_id_constr_2,  memb_M2AP_id_constraint_1 },
		0, 0, /* No default value */
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_PrivateMessage_Ies, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_Criticality,
		0,
		{ 0, &asn_PER_memb_M2AP_criticality_constr_3,  memb_M2AP_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct M2AP_PrivateMessage_Ies, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_M2AP_value_4,
		0,
		{ 0, &asn_PER_memb_M2AP_value_constr_4,  memb_M2AP_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_M2AP_PrivateMessage_Ies_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_PrivateMessage_Ies_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_M2AP_PrivateMessage_Ies_specs_1 = {
	sizeof(struct M2AP_PrivateMessage_Ies),
	offsetof(struct M2AP_PrivateMessage_Ies, _asn_ctx),
	asn_MAP_M2AP_PrivateMessage_Ies_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M2AP_PrivateMessage_Ies = {
	"PrivateMessage-Ies",
	"PrivateMessage-Ies",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_PrivateMessage_Ies_tags_1,
	sizeof(asn_DEF_M2AP_PrivateMessage_Ies_tags_1)
		/sizeof(asn_DEF_M2AP_PrivateMessage_Ies_tags_1[0]), /* 1 */
	asn_DEF_M2AP_PrivateMessage_Ies_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_PrivateMessage_Ies_tags_1)
		/sizeof(asn_DEF_M2AP_PrivateMessage_Ies_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_PrivateMessage_Ies_1,
	3,	/* Elements count */
	&asn_SPC_M2AP_PrivateMessage_Ies_specs_1	/* Additional specs */
};

