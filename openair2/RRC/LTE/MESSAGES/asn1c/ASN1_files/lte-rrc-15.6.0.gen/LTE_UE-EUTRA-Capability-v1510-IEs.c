/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_UE-EUTRA-Capability-v1510-IEs.h"

asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1510_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_UE_EUTRA_Capability_v1510_IEs, irat_ParametersNR_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IRAT_ParametersNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"irat-ParametersNR-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_UE_EUTRA_Capability_v1510_IEs, featureSetsEUTRA_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FeatureSetsEUTRA_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"featureSetsEUTRA-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_UE_EUTRA_Capability_v1510_IEs, pdcp_ParametersNR_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDCP_ParametersNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-ParametersNR-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_UE_EUTRA_Capability_v1510_IEs, fdd_Add_UE_EUTRA_Capabilities_v1510),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1510,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-EUTRA-Capabilities-v1510"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_EUTRA_Capability_v1510_IEs, tdd_Add_UE_EUTRA_Capabilities_v1510),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1510,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-EUTRA-Capabilities-v1510"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_EUTRA_Capability_v1510_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_EUTRA_Capability_v1520_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_UE_EUTRA_Capability_v1510_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_EUTRA_Capability_v1510_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_EUTRA_Capability_v1510_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* irat-ParametersNR-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* featureSetsEUTRA-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-ParametersNR-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* fdd-Add-UE-EUTRA-Capabilities-v1510 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tdd-Add-UE-EUTRA-Capabilities-v1510 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1510_IEs_specs_1 = {
	sizeof(struct LTE_UE_EUTRA_Capability_v1510_IEs),
	offsetof(struct LTE_UE_EUTRA_Capability_v1510_IEs, _asn_ctx),
	asn_MAP_LTE_UE_EUTRA_Capability_v1510_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_UE_EUTRA_Capability_v1510_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1510_IEs = {
	"UE-EUTRA-Capability-v1510-IEs",
	"UE-EUTRA-Capability-v1510-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_EUTRA_Capability_v1510_IEs_tags_1,
	sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1510_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1510_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_EUTRA_Capability_v1510_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1510_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1510_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UE_EUTRA_Capability_v1510_IEs_1,
	6,	/* Elements count */
	&asn_SPC_LTE_UE_EUTRA_Capability_v1510_IEs_specs_1	/* Additional specs */
};

