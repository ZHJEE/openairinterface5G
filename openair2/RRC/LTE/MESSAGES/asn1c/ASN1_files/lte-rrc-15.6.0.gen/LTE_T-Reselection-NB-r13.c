/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_T-Reselection-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_T_Reselection_NB_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_T_Reselection_NB_r13_value2enum_1[] = {
	{ 0,	2,	"s0" },
	{ 1,	2,	"s3" },
	{ 2,	2,	"s6" },
	{ 3,	2,	"s9" },
	{ 4,	3,	"s12" },
	{ 5,	3,	"s15" },
	{ 6,	3,	"s18" },
	{ 7,	3,	"s21" }
};
static const unsigned int asn_MAP_LTE_T_Reselection_NB_r13_enum2value_1[] = {
	0,	/* s0(0) */
	4,	/* s12(4) */
	5,	/* s15(5) */
	6,	/* s18(6) */
	7,	/* s21(7) */
	1,	/* s3(1) */
	2,	/* s6(2) */
	3	/* s9(3) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_T_Reselection_NB_r13_specs_1 = {
	asn_MAP_LTE_T_Reselection_NB_r13_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_T_Reselection_NB_r13_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_T_Reselection_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_T_Reselection_NB_r13 = {
	"T-Reselection-NB-r13",
	"T-Reselection-NB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_T_Reselection_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_T_Reselection_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_T_Reselection_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_T_Reselection_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_T_Reselection_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_T_Reselection_NB_r13_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_T_Reselection_NB_r13_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_T_Reselection_NB_r13_specs_1	/* Additional specs */
};

