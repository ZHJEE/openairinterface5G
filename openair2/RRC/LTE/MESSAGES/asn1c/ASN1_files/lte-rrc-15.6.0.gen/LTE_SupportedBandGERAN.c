/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_SupportedBandGERAN.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_SupportedBandGERAN_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_SupportedBandGERAN_value2enum_1[] = {
	{ 0,	6,	"gsm450" },
	{ 1,	6,	"gsm480" },
	{ 2,	6,	"gsm710" },
	{ 3,	6,	"gsm750" },
	{ 4,	6,	"gsm810" },
	{ 5,	6,	"gsm850" },
	{ 6,	7,	"gsm900P" },
	{ 7,	7,	"gsm900E" },
	{ 8,	7,	"gsm900R" },
	{ 9,	7,	"gsm1800" },
	{ 10,	7,	"gsm1900" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LTE_SupportedBandGERAN_enum2value_1[] = {
	9,	/* gsm1800(9) */
	10,	/* gsm1900(10) */
	0,	/* gsm450(0) */
	1,	/* gsm480(1) */
	2,	/* gsm710(2) */
	3,	/* gsm750(3) */
	4,	/* gsm810(4) */
	5,	/* gsm850(5) */
	7,	/* gsm900E(7) */
	6,	/* gsm900P(6) */
	8,	/* gsm900R(8) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11	/* spare5(11) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_SupportedBandGERAN_specs_1 = {
	asn_MAP_LTE_SupportedBandGERAN_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_SupportedBandGERAN_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_SupportedBandGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_SupportedBandGERAN = {
	"SupportedBandGERAN",
	"SupportedBandGERAN",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_SupportedBandGERAN_tags_1,
	sizeof(asn_DEF_LTE_SupportedBandGERAN_tags_1)
		/sizeof(asn_DEF_LTE_SupportedBandGERAN_tags_1[0]), /* 1 */
	asn_DEF_LTE_SupportedBandGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SupportedBandGERAN_tags_1)
		/sizeof(asn_DEF_LTE_SupportedBandGERAN_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_SupportedBandGERAN_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_SupportedBandGERAN_specs_1	/* Additional specs */
};

