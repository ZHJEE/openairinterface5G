/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_CellsToAddModCDMA2000.h"

static int
memb_LTE_cellIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_cellIndex_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_CellsToAddModCDMA2000_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CellsToAddModCDMA2000, cellIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_cellIndex_constr_2,  memb_LTE_cellIndex_constraint_1 },
		0, 0, /* No default value */
		"cellIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CellsToAddModCDMA2000, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellIdCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_CellsToAddModCDMA2000_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CellsToAddModCDMA2000_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* physCellId */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CellsToAddModCDMA2000_specs_1 = {
	sizeof(struct LTE_CellsToAddModCDMA2000),
	offsetof(struct LTE_CellsToAddModCDMA2000, _asn_ctx),
	asn_MAP_LTE_CellsToAddModCDMA2000_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CellsToAddModCDMA2000 = {
	"CellsToAddModCDMA2000",
	"CellsToAddModCDMA2000",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CellsToAddModCDMA2000_tags_1,
	sizeof(asn_DEF_LTE_CellsToAddModCDMA2000_tags_1)
		/sizeof(asn_DEF_LTE_CellsToAddModCDMA2000_tags_1[0]), /* 1 */
	asn_DEF_LTE_CellsToAddModCDMA2000_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CellsToAddModCDMA2000_tags_1)
		/sizeof(asn_DEF_LTE_CellsToAddModCDMA2000_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CellsToAddModCDMA2000_1,
	2,	/* Elements count */
	&asn_SPC_LTE_CellsToAddModCDMA2000_specs_1	/* Additional specs */
};

