/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_PollByte.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_PollByte_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_PollByte_value2enum_1[] = {
	{ 0,	4,	"kB25" },
	{ 1,	4,	"kB50" },
	{ 2,	4,	"kB75" },
	{ 3,	5,	"kB100" },
	{ 4,	5,	"kB125" },
	{ 5,	5,	"kB250" },
	{ 6,	5,	"kB375" },
	{ 7,	5,	"kB500" },
	{ 8,	5,	"kB750" },
	{ 9,	6,	"kB1000" },
	{ 10,	6,	"kB1250" },
	{ 11,	6,	"kB1500" },
	{ 12,	6,	"kB2000" },
	{ 13,	6,	"kB3000" },
	{ 14,	10,	"kBinfinity" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_PollByte_enum2value_1[] = {
	3,	/* kB100(3) */
	9,	/* kB1000(9) */
	4,	/* kB125(4) */
	10,	/* kB1250(10) */
	11,	/* kB1500(11) */
	12,	/* kB2000(12) */
	0,	/* kB25(0) */
	5,	/* kB250(5) */
	13,	/* kB3000(13) */
	6,	/* kB375(6) */
	1,	/* kB50(1) */
	7,	/* kB500(7) */
	2,	/* kB75(2) */
	8,	/* kB750(8) */
	14,	/* kBinfinity(14) */
	15	/* spare1(15) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_PollByte_specs_1 = {
	asn_MAP_LTE_PollByte_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_PollByte_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_PollByte_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_PollByte = {
	"PollByte",
	"PollByte",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_PollByte_tags_1,
	sizeof(asn_DEF_LTE_PollByte_tags_1)
		/sizeof(asn_DEF_LTE_PollByte_tags_1[0]), /* 1 */
	asn_DEF_LTE_PollByte_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PollByte_tags_1)
		/sizeof(asn_DEF_LTE_PollByte_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_PollByte_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_PollByte_specs_1	/* Additional specs */
};

