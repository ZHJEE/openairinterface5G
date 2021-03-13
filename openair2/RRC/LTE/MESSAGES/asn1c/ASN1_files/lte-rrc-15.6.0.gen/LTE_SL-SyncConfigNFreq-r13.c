/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#include "LTE_SL-SyncConfigNFreq-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_syncInfoReserved_r13_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 19)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

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
static asn_per_constraints_t asn_PER_type_LTE_syncTxPeriodic_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_syncInfoReserved_r13_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  19,  19 }	/* (SIZE(19..19)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_discSyncWindow_r13_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_gnss_Sync_r14_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_slss_TxDisabled_r15_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_asyncParameters_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfigNFreq_r13__asyncParameters_r13, syncCP_Len_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CP_Len_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncCP-Len-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfigNFreq_r13__asyncParameters_r13, syncOffsetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfigNFreq_r13__asyncParameters_r13, slssid_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SLSSID_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slssid-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_asyncParameters_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_asyncParameters_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncCP-Len-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* syncOffsetIndicator-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* slssid-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_asyncParameters_r13_specs_2 = {
	sizeof(struct LTE_SL_SyncConfigNFreq_r13__asyncParameters_r13),
	offsetof(struct LTE_SL_SyncConfigNFreq_r13__asyncParameters_r13, _asn_ctx),
	asn_MAP_LTE_asyncParameters_r13_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_asyncParameters_r13_2 = {
	"asyncParameters-r13",
	"asyncParameters-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_asyncParameters_r13_tags_2,
	sizeof(asn_DEF_LTE_asyncParameters_r13_tags_2)
		/sizeof(asn_DEF_LTE_asyncParameters_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_asyncParameters_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_asyncParameters_r13_tags_2)
		/sizeof(asn_DEF_LTE_asyncParameters_r13_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_asyncParameters_r13_2,
	3,	/* Elements count */
	&asn_SPC_LTE_asyncParameters_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_syncTxPeriodic_r13_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_syncTxPeriodic_r13_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_syncTxPeriodic_r13_specs_10 = {
	asn_MAP_LTE_syncTxPeriodic_r13_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_syncTxPeriodic_r13_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_syncTxPeriodic_r13_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_syncTxPeriodic_r13_10 = {
	"syncTxPeriodic-r13",
	"syncTxPeriodic-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_syncTxPeriodic_r13_tags_10,
	sizeof(asn_DEF_LTE_syncTxPeriodic_r13_tags_10)
		/sizeof(asn_DEF_LTE_syncTxPeriodic_r13_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_syncTxPeriodic_r13_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_syncTxPeriodic_r13_tags_10)
		/sizeof(asn_DEF_LTE_syncTxPeriodic_r13_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_syncTxPeriodic_r13_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_syncTxPeriodic_r13_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_txParameters_r13_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfigNFreq_r13__txParameters_r13, syncTxParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_TxParameters_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncTxParameters-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfigNFreq_r13__txParameters_r13, syncTxThreshIC_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRP_RangeSL_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncTxThreshIC-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_SyncConfigNFreq_r13__txParameters_r13, syncInfoReserved_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_syncInfoReserved_r13_constr_9,  memb_LTE_syncInfoReserved_r13_constraint_6 },
		0, 0, /* No default value */
		"syncInfoReserved-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfigNFreq_r13__txParameters_r13, syncTxPeriodic_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_syncTxPeriodic_r13_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncTxPeriodic-r13"
		},
};
static const int asn_MAP_LTE_txParameters_r13_oms_6[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_txParameters_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_txParameters_r13_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncTxParameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* syncTxThreshIC-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* syncInfoReserved-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* syncTxPeriodic-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_txParameters_r13_specs_6 = {
	sizeof(struct LTE_SL_SyncConfigNFreq_r13__txParameters_r13),
	offsetof(struct LTE_SL_SyncConfigNFreq_r13__txParameters_r13, _asn_ctx),
	asn_MAP_LTE_txParameters_r13_tag2el_6,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_txParameters_r13_oms_6,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_txParameters_r13_6 = {
	"txParameters-r13",
	"txParameters-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_txParameters_r13_tags_6,
	sizeof(asn_DEF_LTE_txParameters_r13_tags_6)
		/sizeof(asn_DEF_LTE_txParameters_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_txParameters_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_txParameters_r13_tags_6)
		/sizeof(asn_DEF_LTE_txParameters_r13_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_txParameters_r13_6,
	4,	/* Elements count */
	&asn_SPC_LTE_txParameters_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_discSyncWindow_r13_value2enum_13[] = {
	{ 0,	2,	"w1" },
	{ 1,	2,	"w2" }
};
static const unsigned int asn_MAP_LTE_discSyncWindow_r13_enum2value_13[] = {
	0,	/* w1(0) */
	1	/* w2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_discSyncWindow_r13_specs_13 = {
	asn_MAP_LTE_discSyncWindow_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_discSyncWindow_r13_enum2value_13,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_discSyncWindow_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discSyncWindow_r13_13 = {
	"discSyncWindow-r13",
	"discSyncWindow-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_discSyncWindow_r13_tags_13,
	sizeof(asn_DEF_LTE_discSyncWindow_r13_tags_13)
		/sizeof(asn_DEF_LTE_discSyncWindow_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_discSyncWindow_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_discSyncWindow_r13_tags_13)
		/sizeof(asn_DEF_LTE_discSyncWindow_r13_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_discSyncWindow_r13_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_discSyncWindow_r13_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_rxParameters_r13_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfigNFreq_r13__rxParameters_r13, discSyncWindow_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_discSyncWindow_r13_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discSyncWindow-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_rxParameters_r13_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_rxParameters_r13_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* discSyncWindow-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_rxParameters_r13_specs_12 = {
	sizeof(struct LTE_SL_SyncConfigNFreq_r13__rxParameters_r13),
	offsetof(struct LTE_SL_SyncConfigNFreq_r13__rxParameters_r13, _asn_ctx),
	asn_MAP_LTE_rxParameters_r13_tag2el_12,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rxParameters_r13_12 = {
	"rxParameters-r13",
	"rxParameters-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_rxParameters_r13_tags_12,
	sizeof(asn_DEF_LTE_rxParameters_r13_tags_12)
		/sizeof(asn_DEF_LTE_rxParameters_r13_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_rxParameters_r13_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_rxParameters_r13_tags_12)
		/sizeof(asn_DEF_LTE_rxParameters_r13_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_rxParameters_r13_12,
	1,	/* Elements count */
	&asn_SPC_LTE_rxParameters_r13_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_gnss_Sync_r14_value2enum_19[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_gnss_Sync_r14_enum2value_19[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_gnss_Sync_r14_specs_19 = {
	asn_MAP_LTE_gnss_Sync_r14_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_gnss_Sync_r14_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_gnss_Sync_r14_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_gnss_Sync_r14_19 = {
	"gnss-Sync-r14",
	"gnss-Sync-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_gnss_Sync_r14_tags_19,
	sizeof(asn_DEF_LTE_gnss_Sync_r14_tags_19)
		/sizeof(asn_DEF_LTE_gnss_Sync_r14_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_gnss_Sync_r14_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_gnss_Sync_r14_tags_19)
		/sizeof(asn_DEF_LTE_gnss_Sync_r14_tags_19[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_gnss_Sync_r14_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_gnss_Sync_r14_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_17[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_SyncConfigNFreq_r13__ext1, syncOffsetIndicator_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfigNFreq_r13__ext1, gnss_Sync_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_gnss_Sync_r14_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-Sync-r14"
		},
};
static const int asn_MAP_LTE_ext1_oms_17[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncOffsetIndicator-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gnss-Sync-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_17 = {
	sizeof(struct LTE_SL_SyncConfigNFreq_r13__ext1),
	offsetof(struct LTE_SL_SyncConfigNFreq_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_17,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_17,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_17 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_17,
	sizeof(asn_DEF_LTE_ext1_tags_17)
		/sizeof(asn_DEF_LTE_ext1_tags_17[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_17,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_17)
		/sizeof(asn_DEF_LTE_ext1_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_17,
	2,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_21[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_SyncConfigNFreq_r13__ext2, syncOffsetIndicator2_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator2-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfigNFreq_r13__ext2, syncOffsetIndicator3_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator3-r14"
		},
};
static const int asn_MAP_LTE_ext2_oms_21[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncOffsetIndicator2-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* syncOffsetIndicator3-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_21 = {
	sizeof(struct LTE_SL_SyncConfigNFreq_r13__ext2),
	offsetof(struct LTE_SL_SyncConfigNFreq_r13__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_21,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_21,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_21 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_21,
	sizeof(asn_DEF_LTE_ext2_tags_21)
		/sizeof(asn_DEF_LTE_ext2_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_21)
		/sizeof(asn_DEF_LTE_ext2_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_21,
	2,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_slss_TxDisabled_r15_value2enum_25[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_slss_TxDisabled_r15_enum2value_25[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_slss_TxDisabled_r15_specs_25 = {
	asn_MAP_LTE_slss_TxDisabled_r15_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_slss_TxDisabled_r15_enum2value_25,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_slss_TxDisabled_r15_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_slss_TxDisabled_r15_25 = {
	"slss-TxDisabled-r15",
	"slss-TxDisabled-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_slss_TxDisabled_r15_tags_25,
	sizeof(asn_DEF_LTE_slss_TxDisabled_r15_tags_25)
		/sizeof(asn_DEF_LTE_slss_TxDisabled_r15_tags_25[0]) - 1, /* 1 */
	asn_DEF_LTE_slss_TxDisabled_r15_tags_25,	/* Same as above */
	sizeof(asn_DEF_LTE_slss_TxDisabled_r15_tags_25)
		/sizeof(asn_DEF_LTE_slss_TxDisabled_r15_tags_25[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_slss_TxDisabled_r15_constr_25, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_slss_TxDisabled_r15_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_24[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfigNFreq_r13__ext3, slss_TxDisabled_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_slss_TxDisabled_r15_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slss-TxDisabled-r15"
		},
};
static const int asn_MAP_LTE_ext3_oms_24[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* slss-TxDisabled-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_24 = {
	sizeof(struct LTE_SL_SyncConfigNFreq_r13__ext3),
	offsetof(struct LTE_SL_SyncConfigNFreq_r13__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_24,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_24,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_24 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_24,
	sizeof(asn_DEF_LTE_ext3_tags_24)
		/sizeof(asn_DEF_LTE_ext3_tags_24[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_24,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_24)
		/sizeof(asn_DEF_LTE_ext3_tags_24[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_24,
	1,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_24	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_SyncConfigNFreq_r13_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_SL_SyncConfigNFreq_r13, asyncParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_asyncParameters_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"asyncParameters-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SL_SyncConfigNFreq_r13, txParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_txParameters_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"txParameters-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SL_SyncConfigNFreq_r13, rxParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_rxParameters_r13_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rxParameters-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SL_SyncConfigNFreq_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext1_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_SyncConfigNFreq_r13, ext2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext2_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfigNFreq_r13, ext3),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext3_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_LTE_SL_SyncConfigNFreq_r13_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_SyncConfigNFreq_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_SyncConfigNFreq_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* asyncParameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* txParameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rxParameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_SyncConfigNFreq_r13_specs_1 = {
	sizeof(struct LTE_SL_SyncConfigNFreq_r13),
	offsetof(struct LTE_SL_SyncConfigNFreq_r13, _asn_ctx),
	asn_MAP_LTE_SL_SyncConfigNFreq_r13_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_SL_SyncConfigNFreq_r13_oms_1,	/* Optional members */
	3, 3,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_SyncConfigNFreq_r13 = {
	"SL-SyncConfigNFreq-r13",
	"SL-SyncConfigNFreq-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_SyncConfigNFreq_r13_tags_1,
	sizeof(asn_DEF_LTE_SL_SyncConfigNFreq_r13_tags_1)
		/sizeof(asn_DEF_LTE_SL_SyncConfigNFreq_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_SyncConfigNFreq_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_SyncConfigNFreq_r13_tags_1)
		/sizeof(asn_DEF_LTE_SL_SyncConfigNFreq_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_SyncConfigNFreq_r13_1,
	6,	/* Elements count */
	&asn_SPC_LTE_SL_SyncConfigNFreq_r13_specs_1	/* Additional specs */
};

