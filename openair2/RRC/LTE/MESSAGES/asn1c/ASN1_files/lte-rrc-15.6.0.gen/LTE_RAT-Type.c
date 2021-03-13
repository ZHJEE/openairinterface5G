/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_RAT-Type.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_RAT_Type_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_RAT_Type_value2enum_1[] = {
	{ 0,	5,	"eutra" },
	{ 1,	4,	"utra" },
	{ 2,	8,	"geran-cs" },
	{ 3,	8,	"geran-ps" },
	{ 4,	14,	"cdma2000-1XRTT" },
	{ 5,	2,	"nr" },
	{ 6,	8,	"eutra-nr" },
	{ 7,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LTE_RAT_Type_enum2value_1[] = {
	4,	/* cdma2000-1XRTT(4) */
	0,	/* eutra(0) */
	6,	/* eutra-nr(6) */
	2,	/* geran-cs(2) */
	3,	/* geran-ps(3) */
	5,	/* nr(5) */
	7,	/* spare1(7) */
	1	/* utra(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_RAT_Type_specs_1 = {
	asn_MAP_LTE_RAT_Type_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_RAT_Type_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_RAT_Type_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_RAT_Type = {
	"RAT-Type",
	"RAT-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_RAT_Type_tags_1,
	sizeof(asn_DEF_LTE_RAT_Type_tags_1)
		/sizeof(asn_DEF_LTE_RAT_Type_tags_1[0]), /* 1 */
	asn_DEF_LTE_RAT_Type_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RAT_Type_tags_1)
		/sizeof(asn_DEF_LTE_RAT_Type_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_RAT_Type_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_RAT_Type_specs_1	/* Additional specs */
};

