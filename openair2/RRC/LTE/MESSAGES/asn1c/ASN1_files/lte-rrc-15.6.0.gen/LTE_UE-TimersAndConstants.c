/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_UE-TimersAndConstants.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_t300_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t301_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t310_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_n310_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t311_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_n311_constr_45 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t300_v1310_constr_56 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t301_v1310_constr_65 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t310_v1330_constr_75 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t300_r15_constr_79 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_t300_value2enum_2[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms300" },
	{ 3,	5,	"ms400" },
	{ 4,	5,	"ms600" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms1500" },
	{ 7,	6,	"ms2000" }
};
static const unsigned int asn_MAP_LTE_t300_enum2value_2[] = {
	0,	/* ms100(0) */
	5,	/* ms1000(5) */
	6,	/* ms1500(6) */
	1,	/* ms200(1) */
	7,	/* ms2000(7) */
	2,	/* ms300(2) */
	3,	/* ms400(3) */
	4	/* ms600(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t300_specs_2 = {
	asn_MAP_LTE_t300_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t300_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t300_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t300_2 = {
	"t300",
	"t300",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t300_tags_2,
	sizeof(asn_DEF_LTE_t300_tags_2)
		/sizeof(asn_DEF_LTE_t300_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_t300_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_t300_tags_2)
		/sizeof(asn_DEF_LTE_t300_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t300_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t300_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t301_value2enum_11[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms300" },
	{ 3,	5,	"ms400" },
	{ 4,	5,	"ms600" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms1500" },
	{ 7,	6,	"ms2000" }
};
static const unsigned int asn_MAP_LTE_t301_enum2value_11[] = {
	0,	/* ms100(0) */
	5,	/* ms1000(5) */
	6,	/* ms1500(6) */
	1,	/* ms200(1) */
	7,	/* ms2000(7) */
	2,	/* ms300(2) */
	3,	/* ms400(3) */
	4	/* ms600(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t301_specs_11 = {
	asn_MAP_LTE_t301_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t301_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t301_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t301_11 = {
	"t301",
	"t301",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t301_tags_11,
	sizeof(asn_DEF_LTE_t301_tags_11)
		/sizeof(asn_DEF_LTE_t301_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_t301_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_t301_tags_11)
		/sizeof(asn_DEF_LTE_t301_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t301_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t301_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t310_value2enum_20[] = {
	{ 0,	3,	"ms0" },
	{ 1,	4,	"ms50" },
	{ 2,	5,	"ms100" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms500" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms2000" }
};
static const unsigned int asn_MAP_LTE_t310_enum2value_20[] = {
	0,	/* ms0(0) */
	2,	/* ms100(2) */
	5,	/* ms1000(5) */
	3,	/* ms200(3) */
	6,	/* ms2000(6) */
	1,	/* ms50(1) */
	4	/* ms500(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t310_specs_20 = {
	asn_MAP_LTE_t310_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t310_enum2value_20,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t310_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t310_20 = {
	"t310",
	"t310",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t310_tags_20,
	sizeof(asn_DEF_LTE_t310_tags_20)
		/sizeof(asn_DEF_LTE_t310_tags_20[0]) - 1, /* 1 */
	asn_DEF_LTE_t310_tags_20,	/* Same as above */
	sizeof(asn_DEF_LTE_t310_tags_20)
		/sizeof(asn_DEF_LTE_t310_tags_20[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t310_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t310_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_n310_value2enum_28[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n6" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n10" },
	{ 7,	3,	"n20" }
};
static const unsigned int asn_MAP_LTE_n310_enum2value_28[] = {
	0,	/* n1(0) */
	6,	/* n10(6) */
	1,	/* n2(1) */
	7,	/* n20(7) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n6(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_n310_specs_28 = {
	asn_MAP_LTE_n310_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_n310_enum2value_28,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_n310_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_n310_28 = {
	"n310",
	"n310",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_n310_tags_28,
	sizeof(asn_DEF_LTE_n310_tags_28)
		/sizeof(asn_DEF_LTE_n310_tags_28[0]) - 1, /* 1 */
	asn_DEF_LTE_n310_tags_28,	/* Same as above */
	sizeof(asn_DEF_LTE_n310_tags_28)
		/sizeof(asn_DEF_LTE_n310_tags_28[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_n310_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_n310_specs_28	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t311_value2enum_37[] = {
	{ 0,	6,	"ms1000" },
	{ 1,	6,	"ms3000" },
	{ 2,	6,	"ms5000" },
	{ 3,	7,	"ms10000" },
	{ 4,	7,	"ms15000" },
	{ 5,	7,	"ms20000" },
	{ 6,	7,	"ms30000" }
};
static const unsigned int asn_MAP_LTE_t311_enum2value_37[] = {
	0,	/* ms1000(0) */
	3,	/* ms10000(3) */
	4,	/* ms15000(4) */
	5,	/* ms20000(5) */
	1,	/* ms3000(1) */
	6,	/* ms30000(6) */
	2	/* ms5000(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t311_specs_37 = {
	asn_MAP_LTE_t311_value2enum_37,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t311_enum2value_37,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t311_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t311_37 = {
	"t311",
	"t311",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t311_tags_37,
	sizeof(asn_DEF_LTE_t311_tags_37)
		/sizeof(asn_DEF_LTE_t311_tags_37[0]) - 1, /* 1 */
	asn_DEF_LTE_t311_tags_37,	/* Same as above */
	sizeof(asn_DEF_LTE_t311_tags_37)
		/sizeof(asn_DEF_LTE_t311_tags_37[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t311_constr_37, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t311_specs_37	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_n311_value2enum_45[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n8" },
	{ 7,	3,	"n10" }
};
static const unsigned int asn_MAP_LTE_n311_enum2value_45[] = {
	0,	/* n1(0) */
	7,	/* n10(7) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6	/* n8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_n311_specs_45 = {
	asn_MAP_LTE_n311_value2enum_45,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_n311_enum2value_45,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_n311_tags_45[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_n311_45 = {
	"n311",
	"n311",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_n311_tags_45,
	sizeof(asn_DEF_LTE_n311_tags_45)
		/sizeof(asn_DEF_LTE_n311_tags_45[0]) - 1, /* 1 */
	asn_DEF_LTE_n311_tags_45,	/* Same as above */
	sizeof(asn_DEF_LTE_n311_tags_45)
		/sizeof(asn_DEF_LTE_n311_tags_45[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_n311_constr_45, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_n311_specs_45	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t300_v1310_value2enum_56[] = {
	{ 0,	6,	"ms2500" },
	{ 1,	6,	"ms3000" },
	{ 2,	6,	"ms3500" },
	{ 3,	6,	"ms4000" },
	{ 4,	6,	"ms5000" },
	{ 5,	6,	"ms6000" },
	{ 6,	6,	"ms8000" },
	{ 7,	7,	"ms10000" }
};
static const unsigned int asn_MAP_LTE_t300_v1310_enum2value_56[] = {
	7,	/* ms10000(7) */
	0,	/* ms2500(0) */
	1,	/* ms3000(1) */
	2,	/* ms3500(2) */
	3,	/* ms4000(3) */
	4,	/* ms5000(4) */
	5,	/* ms6000(5) */
	6	/* ms8000(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t300_v1310_specs_56 = {
	asn_MAP_LTE_t300_v1310_value2enum_56,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t300_v1310_enum2value_56,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t300_v1310_tags_56[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t300_v1310_56 = {
	"t300-v1310",
	"t300-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t300_v1310_tags_56,
	sizeof(asn_DEF_LTE_t300_v1310_tags_56)
		/sizeof(asn_DEF_LTE_t300_v1310_tags_56[0]) - 1, /* 1 */
	asn_DEF_LTE_t300_v1310_tags_56,	/* Same as above */
	sizeof(asn_DEF_LTE_t300_v1310_tags_56)
		/sizeof(asn_DEF_LTE_t300_v1310_tags_56[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t300_v1310_constr_56, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t300_v1310_specs_56	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t301_v1310_value2enum_65[] = {
	{ 0,	6,	"ms2500" },
	{ 1,	6,	"ms3000" },
	{ 2,	6,	"ms3500" },
	{ 3,	6,	"ms4000" },
	{ 4,	6,	"ms5000" },
	{ 5,	6,	"ms6000" },
	{ 6,	6,	"ms8000" },
	{ 7,	7,	"ms10000" }
};
static const unsigned int asn_MAP_LTE_t301_v1310_enum2value_65[] = {
	7,	/* ms10000(7) */
	0,	/* ms2500(0) */
	1,	/* ms3000(1) */
	2,	/* ms3500(2) */
	3,	/* ms4000(3) */
	4,	/* ms5000(4) */
	5,	/* ms6000(5) */
	6	/* ms8000(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t301_v1310_specs_65 = {
	asn_MAP_LTE_t301_v1310_value2enum_65,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t301_v1310_enum2value_65,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t301_v1310_tags_65[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t301_v1310_65 = {
	"t301-v1310",
	"t301-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t301_v1310_tags_65,
	sizeof(asn_DEF_LTE_t301_v1310_tags_65)
		/sizeof(asn_DEF_LTE_t301_v1310_tags_65[0]) - 1, /* 1 */
	asn_DEF_LTE_t301_v1310_tags_65,	/* Same as above */
	sizeof(asn_DEF_LTE_t301_v1310_tags_65)
		/sizeof(asn_DEF_LTE_t301_v1310_tags_65[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t301_v1310_constr_65, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t301_v1310_specs_65	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_55[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_TimersAndConstants__ext1, t300_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t300_v1310_56,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t300-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_TimersAndConstants__ext1, t301_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t301_v1310_65,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t301-v1310"
		},
};
static const int asn_MAP_LTE_ext1_oms_55[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_55[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_55[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t300-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* t301-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_55 = {
	sizeof(struct LTE_UE_TimersAndConstants__ext1),
	offsetof(struct LTE_UE_TimersAndConstants__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_55,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_55,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_55 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_55,
	sizeof(asn_DEF_LTE_ext1_tags_55)
		/sizeof(asn_DEF_LTE_ext1_tags_55[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_55,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_55)
		/sizeof(asn_DEF_LTE_ext1_tags_55[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_55,
	2,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_55	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t310_v1330_value2enum_75[] = {
	{ 0,	6,	"ms4000" },
	{ 1,	6,	"ms6000" }
};
static const unsigned int asn_MAP_LTE_t310_v1330_enum2value_75[] = {
	0,	/* ms4000(0) */
	1	/* ms6000(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t310_v1330_specs_75 = {
	asn_MAP_LTE_t310_v1330_value2enum_75,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t310_v1330_enum2value_75,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t310_v1330_tags_75[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t310_v1330_75 = {
	"t310-v1330",
	"t310-v1330",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t310_v1330_tags_75,
	sizeof(asn_DEF_LTE_t310_v1330_tags_75)
		/sizeof(asn_DEF_LTE_t310_v1330_tags_75[0]) - 1, /* 1 */
	asn_DEF_LTE_t310_v1330_tags_75,	/* Same as above */
	sizeof(asn_DEF_LTE_t310_v1330_tags_75)
		/sizeof(asn_DEF_LTE_t310_v1330_tags_75[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t310_v1330_constr_75, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t310_v1330_specs_75	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_74[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_TimersAndConstants__ext2, t310_v1330),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t310_v1330_75,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t310-v1330"
		},
};
static const int asn_MAP_LTE_ext2_oms_74[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_74[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_74[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* t310-v1330 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_74 = {
	sizeof(struct LTE_UE_TimersAndConstants__ext2),
	offsetof(struct LTE_UE_TimersAndConstants__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_74,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_74,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_74 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_74,
	sizeof(asn_DEF_LTE_ext2_tags_74)
		/sizeof(asn_DEF_LTE_ext2_tags_74[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_74,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_74)
		/sizeof(asn_DEF_LTE_ext2_tags_74[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_74,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_74	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t300_r15_value2enum_79[] = {
	{ 0,	6,	"ms4000" },
	{ 1,	6,	"ms6000" },
	{ 2,	6,	"ms8000" },
	{ 3,	7,	"ms10000" },
	{ 4,	7,	"ms15000" },
	{ 5,	7,	"ms25000" },
	{ 6,	7,	"ms40000" },
	{ 7,	7,	"ms60000" }
};
static const unsigned int asn_MAP_LTE_t300_r15_enum2value_79[] = {
	3,	/* ms10000(3) */
	4,	/* ms15000(4) */
	5,	/* ms25000(5) */
	0,	/* ms4000(0) */
	6,	/* ms40000(6) */
	1,	/* ms6000(1) */
	7,	/* ms60000(7) */
	2	/* ms8000(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t300_r15_specs_79 = {
	asn_MAP_LTE_t300_r15_value2enum_79,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t300_r15_enum2value_79,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t300_r15_tags_79[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t300_r15_79 = {
	"t300-r15",
	"t300-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t300_r15_tags_79,
	sizeof(asn_DEF_LTE_t300_r15_tags_79)
		/sizeof(asn_DEF_LTE_t300_r15_tags_79[0]) - 1, /* 1 */
	asn_DEF_LTE_t300_r15_tags_79,	/* Same as above */
	sizeof(asn_DEF_LTE_t300_r15_tags_79)
		/sizeof(asn_DEF_LTE_t300_r15_tags_79[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t300_r15_constr_79, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t300_r15_specs_79	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_78[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_TimersAndConstants__ext3, t300_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t300_r15_79,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t300-r15"
		},
};
static const int asn_MAP_LTE_ext3_oms_78[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_78[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_78[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* t300-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_78 = {
	sizeof(struct LTE_UE_TimersAndConstants__ext3),
	offsetof(struct LTE_UE_TimersAndConstants__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_78,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_78,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_78 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_78,
	sizeof(asn_DEF_LTE_ext3_tags_78)
		/sizeof(asn_DEF_LTE_ext3_tags_78[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_78,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_78)
		/sizeof(asn_DEF_LTE_ext3_tags_78[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_78,
	1,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_78	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UE_TimersAndConstants_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants, t300),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t300_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t300"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants, t301),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t301_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t301"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants, t310),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t310_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t310"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants, n310),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_n310_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n310"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants, t311),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t311_37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t311"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants, n311),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_n311_45,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n311"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_UE_TimersAndConstants, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext1_55,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_TimersAndConstants, ext2),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_ext2_74,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_TimersAndConstants, ext3),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_LTE_ext3_78,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_LTE_UE_TimersAndConstants_oms_1[] = { 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_TimersAndConstants_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_TimersAndConstants_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t300 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t301 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t310 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* n310 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* t311 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* n311 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_TimersAndConstants_specs_1 = {
	sizeof(struct LTE_UE_TimersAndConstants),
	offsetof(struct LTE_UE_TimersAndConstants, _asn_ctx),
	asn_MAP_LTE_UE_TimersAndConstants_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_LTE_UE_TimersAndConstants_oms_1,	/* Optional members */
	0, 3,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_TimersAndConstants = {
	"UE-TimersAndConstants",
	"UE-TimersAndConstants",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_TimersAndConstants_tags_1,
	sizeof(asn_DEF_LTE_UE_TimersAndConstants_tags_1)
		/sizeof(asn_DEF_LTE_UE_TimersAndConstants_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_TimersAndConstants_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_TimersAndConstants_tags_1)
		/sizeof(asn_DEF_LTE_UE_TimersAndConstants_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UE_TimersAndConstants_1,
	9,	/* Elements count */
	&asn_SPC_LTE_UE_TimersAndConstants_specs_1	/* Additional specs */
};

