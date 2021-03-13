/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_UE-Capability-NB-Ext-r14-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_ue_Category_NB_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_ue_Category_NB_r14_value2enum_2[] = {
	{ 0,	3,	"nb2" }
};
static const unsigned int asn_MAP_LTE_ue_Category_NB_r14_enum2value_2[] = {
	0	/* nb2(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ue_Category_NB_r14_specs_2 = {
	asn_MAP_LTE_ue_Category_NB_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ue_Category_NB_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ue_Category_NB_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ue_Category_NB_r14_2 = {
	"ue-Category-NB-r14",
	"ue-Category-NB-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ue_Category_NB_r14_tags_2,
	sizeof(asn_DEF_LTE_ue_Category_NB_r14_tags_2)
		/sizeof(asn_DEF_LTE_ue_Category_NB_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_ue_Category_NB_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_ue_Category_NB_r14_tags_2)
		/sizeof(asn_DEF_LTE_ue_Category_NB_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ue_Category_NB_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ue_Category_NB_r14_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_UE_Capability_NB_Ext_r14_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_UE_Capability_NB_Ext_r14_IEs, ue_Category_NB_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ue_Category_NB_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Category-NB-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_Capability_NB_Ext_r14_IEs, mac_Parameters_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MAC_Parameters_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-Parameters-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_Capability_NB_Ext_r14_IEs, phyLayerParameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhyLayerParameters_NB_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1430"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_Capability_NB_Ext_r14_IEs, rf_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RF_Parameters_NB_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Parameters-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_Capability_NB_Ext_r14_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_Capability_NB_v1440_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_UE_Capability_NB_Ext_r14_IEs_oms_1[] = { 0, 1, 2, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_Capability_NB_Ext_r14_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_Capability_NB_Ext_r14_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Category-NB-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mac-Parameters-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* phyLayerParameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rf-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_Capability_NB_Ext_r14_IEs_specs_1 = {
	sizeof(struct LTE_UE_Capability_NB_Ext_r14_IEs),
	offsetof(struct LTE_UE_Capability_NB_Ext_r14_IEs, _asn_ctx),
	asn_MAP_LTE_UE_Capability_NB_Ext_r14_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_UE_Capability_NB_Ext_r14_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_Capability_NB_Ext_r14_IEs = {
	"UE-Capability-NB-Ext-r14-IEs",
	"UE-Capability-NB-Ext-r14-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_Capability_NB_Ext_r14_IEs_tags_1,
	sizeof(asn_DEF_LTE_UE_Capability_NB_Ext_r14_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UE_Capability_NB_Ext_r14_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_Capability_NB_Ext_r14_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_Capability_NB_Ext_r14_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UE_Capability_NB_Ext_r14_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UE_Capability_NB_Ext_r14_IEs_1,
	5,	/* Elements count */
	&asn_SPC_LTE_UE_Capability_NB_Ext_r14_IEs_specs_1	/* Additional specs */
};

