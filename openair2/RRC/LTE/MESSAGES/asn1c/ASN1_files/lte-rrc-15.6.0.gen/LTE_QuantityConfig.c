/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_QuantityConfig.h"

static asn_TYPE_member_t asn_MBR_LTE_ext1_7[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_QuantityConfig__ext1, quantityConfigUTRA_v1020),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfigUTRA_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigUTRA-v1020"
		},
};
static const int asn_MAP_LTE_ext1_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* quantityConfigUTRA-v1020 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_7 = {
	sizeof(struct LTE_QuantityConfig__ext1),
	offsetof(struct LTE_QuantityConfig__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_7,
	sizeof(asn_DEF_LTE_ext1_tags_7)
		/sizeof(asn_DEF_LTE_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_7)
		/sizeof(asn_DEF_LTE_ext1_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_7,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_9[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_QuantityConfig__ext2, quantityConfigEUTRA_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfigEUTRA_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigEUTRA-v1250"
		},
};
static const int asn_MAP_LTE_ext2_oms_9[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* quantityConfigEUTRA-v1250 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_9 = {
	sizeof(struct LTE_QuantityConfig__ext2),
	offsetof(struct LTE_QuantityConfig__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_9,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_9 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_9,
	sizeof(asn_DEF_LTE_ext2_tags_9)
		/sizeof(asn_DEF_LTE_ext2_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_9)
		/sizeof(asn_DEF_LTE_ext2_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_9,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_11[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_QuantityConfig__ext3, quantityConfigEUTRA_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfigEUTRA_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigEUTRA-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_QuantityConfig__ext3, quantityConfigWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfigWLAN_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigWLAN-r13"
		},
};
static const int asn_MAP_LTE_ext3_oms_11[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* quantityConfigEUTRA-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* quantityConfigWLAN-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_11 = {
	sizeof(struct LTE_QuantityConfig__ext3),
	offsetof(struct LTE_QuantityConfig__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_11,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_11 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_11,
	sizeof(asn_DEF_LTE_ext3_tags_11)
		/sizeof(asn_DEF_LTE_ext3_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_11)
		/sizeof(asn_DEF_LTE_ext3_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_11,
	2,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext4_14[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_QuantityConfig__ext4, quantityConfigNRList_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfigNRList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigNRList-r15"
		},
};
static const int asn_MAP_LTE_ext4_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext4_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext4_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* quantityConfigNRList-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext4_specs_14 = {
	sizeof(struct LTE_QuantityConfig__ext4),
	offsetof(struct LTE_QuantityConfig__ext4, _asn_ctx),
	asn_MAP_LTE_ext4_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext4_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext4_14 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext4_tags_14,
	sizeof(asn_DEF_LTE_ext4_tags_14)
		/sizeof(asn_DEF_LTE_ext4_tags_14[0]) - 1, /* 1 */
	asn_DEF_LTE_ext4_tags_14,	/* Same as above */
	sizeof(asn_DEF_LTE_ext4_tags_14)
		/sizeof(asn_DEF_LTE_ext4_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext4_14,
	1,	/* Elements count */
	&asn_SPC_LTE_ext4_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_QuantityConfig_1[] = {
	{ ATF_POINTER, 8, offsetof(struct LTE_QuantityConfig, quantityConfigEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfigEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigEUTRA"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_QuantityConfig, quantityConfigUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfigUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigUTRA"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_QuantityConfig, quantityConfigGERAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfigGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigGERAN"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_QuantityConfig, quantityConfigCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfigCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfigCDMA2000"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_QuantityConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext1_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_QuantityConfig, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext2_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_QuantityConfig, ext3),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext3_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_QuantityConfig, ext4),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_ext4_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext4"
		},
};
static const int asn_MAP_LTE_QuantityConfig_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_LTE_QuantityConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_QuantityConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* quantityConfigEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* quantityConfigUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* quantityConfigGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* quantityConfigCDMA2000 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ext4 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_QuantityConfig_specs_1 = {
	sizeof(struct LTE_QuantityConfig),
	offsetof(struct LTE_QuantityConfig, _asn_ctx),
	asn_MAP_LTE_QuantityConfig_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_LTE_QuantityConfig_oms_1,	/* Optional members */
	4, 4,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_QuantityConfig = {
	"QuantityConfig",
	"QuantityConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_QuantityConfig_tags_1,
	sizeof(asn_DEF_LTE_QuantityConfig_tags_1)
		/sizeof(asn_DEF_LTE_QuantityConfig_tags_1[0]), /* 1 */
	asn_DEF_LTE_QuantityConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_QuantityConfig_tags_1)
		/sizeof(asn_DEF_LTE_QuantityConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_QuantityConfig_1,
	8,	/* Elements count */
	&asn_SPC_LTE_QuantityConfig_specs_1	/* Additional specs */
};

