/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-PDU-Descriptions"
 * 	found in "R14/m2ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m2ap-14.0.0.gen/`
 */

#include "M2AP_UnsuccessfulOutcome.h"

static const long asn_VAL_1_M2AP_id_sessionStart = 0;
static const long asn_VAL_1_M2AP_reject = 0;
static const long asn_VAL_2_M2AP_id_sessionStop = 1;
static const long asn_VAL_2_M2AP_reject = 0;
static const long asn_VAL_3_M2AP_id_sessionUpdate = 9;
static const long asn_VAL_3_M2AP_reject = 0;
static const long asn_VAL_4_M2AP_id_mbmsSchedulingInformation = 2;
static const long asn_VAL_4_M2AP_reject = 0;
static const long asn_VAL_5_M2AP_id_reset = 4;
static const long asn_VAL_5_M2AP_reject = 0;
static const long asn_VAL_6_M2AP_id_m2Setup = 5;
static const long asn_VAL_6_M2AP_reject = 0;
static const long asn_VAL_7_M2AP_id_eNBConfigurationUpdate = 6;
static const long asn_VAL_7_M2AP_reject = 0;
static const long asn_VAL_8_M2AP_id_mCEConfigurationUpdate = 7;
static const long asn_VAL_8_M2AP_reject = 0;
static const long asn_VAL_9_M2AP_id_mbmsServiceCounting = 10;
static const long asn_VAL_9_M2AP_reject = 0;
static const long asn_VAL_10_M2AP_id_errorIndication = 3;
static const long asn_VAL_10_M2AP_ignore = 1;
static const long asn_VAL_11_M2AP_id_privateMessage = 8;
static const long asn_VAL_11_M2AP_ignore = 1;
static const long asn_VAL_12_M2AP_id_mbmsServiceCountingResultsReport = 11;
static const long asn_VAL_12_M2AP_reject = 0;
static const long asn_VAL_13_M2AP_id_mbmsOverloadNotification = 12;
static const long asn_VAL_13_M2AP_reject = 0;
static const asn_ioc_cell_t asn_IOS_M2AP_M2AP_ELEMENTARY_PROCEDURES_1_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_SessionStartRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_SessionStartResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_SessionStartFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_1_M2AP_id_sessionStart },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_1_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_SessionStopRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_SessionStopResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_2_M2AP_id_sessionStop },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_2_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_SessionUpdateRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_SessionUpdateResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_SessionUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_3_M2AP_id_sessionUpdate },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_3_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_MbmsSchedulingInformation },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_MbmsSchedulingInformationResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_4_M2AP_id_mbmsSchedulingInformation },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_4_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_Reset },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_ResetAcknowledge },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_5_M2AP_id_reset },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_5_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_M2SetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_M2SetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_M2SetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_6_M2AP_id_m2Setup },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_6_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_ENBConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_ENBConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_ENBConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_7_M2AP_id_eNBConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_7_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_MCEConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_MCEConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_MCEConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_8_M2AP_id_mCEConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_8_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_MbmsServiceCountingRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_MbmsServiceCountingResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_MbmsServiceCountingFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_9_M2AP_id_mbmsServiceCounting },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_9_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_ErrorIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_10_M2AP_id_errorIndication },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_10_M2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_PrivateMessage },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_11_M2AP_id_privateMessage },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_11_M2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_MbmsServiceCountingResultsReport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_12_M2AP_id_mbmsServiceCountingResultsReport },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_12_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_MbmsOverloadNotification },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_13_M2AP_id_mbmsOverloadNotification },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_13_M2AP_reject }
};
static const asn_ioc_set_t asn_IOS_M2AP_M2AP_ELEMENTARY_PROCEDURES_1[] = {
	{ 13, 5, asn_IOS_M2AP_M2AP_ELEMENTARY_PROCEDURES_1_rows }
};
static int
memb_M2AP_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_UnsuccessfulOutcome_M2AP_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_M2AP_M2AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct M2AP_UnsuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_M2AP_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_UnsuccessfulOutcome_M2AP_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_M2AP_M2AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 2; /* &UnsuccessfulOutcome */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct M2AP_UnsuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_M2AP_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_M2AP_procedureCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_M2AP_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_M2AP_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_M2AP_value_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_UnsuccessfulOutcome__value, choice.SessionStartFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_SessionStartFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"SessionStartFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_UnsuccessfulOutcome__value, choice.SessionUpdateFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_SessionUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"SessionUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_UnsuccessfulOutcome__value, choice.M2SetupFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_M2SetupFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"M2SetupFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_UnsuccessfulOutcome__value, choice.ENBConfigurationUpdateFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_ENBConfigurationUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ENBConfigurationUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_UnsuccessfulOutcome__value, choice.MCEConfigurationUpdateFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_MCEConfigurationUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"MCEConfigurationUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_UnsuccessfulOutcome__value, choice.MbmsServiceCountingFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_MbmsServiceCountingFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"MbmsServiceCountingFailure"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_value_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 5 }, /* SessionStartFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 4 }, /* SessionUpdateFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 3 }, /* M2SetupFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 2 }, /* ENBConfigurationUpdateFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 1 }, /* MCEConfigurationUpdateFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 0 } /* MbmsServiceCountingFailure */
};
static asn_CHOICE_specifics_t asn_SPC_M2AP_value_specs_4 = {
	sizeof(struct M2AP_UnsuccessfulOutcome__value),
	offsetof(struct M2AP_UnsuccessfulOutcome__value, _asn_ctx),
	offsetof(struct M2AP_UnsuccessfulOutcome__value, present),
	sizeof(((struct M2AP_UnsuccessfulOutcome__value *)0)->present),
	asn_MAP_M2AP_value_tag2el_4,
	6,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_M2AP_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	asn_MBR_M2AP_value_4,
	6,	/* Elements count */
	&asn_SPC_M2AP_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_M2AP_UnsuccessfulOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_UnsuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_ProcedureCode,
		0,
		{ 0, &asn_PER_memb_M2AP_procedureCode_constr_2,  memb_M2AP_procedureCode_constraint_1 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_UnsuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_Criticality,
		select_UnsuccessfulOutcome_M2AP_criticality_type,
		{ 0, &asn_PER_memb_M2AP_criticality_constr_3,  memb_M2AP_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct M2AP_UnsuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_M2AP_value_4,
		select_UnsuccessfulOutcome_M2AP_value_type,
		{ 0, &asn_PER_memb_M2AP_value_constr_4,  memb_M2AP_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_M2AP_UnsuccessfulOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_UnsuccessfulOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_M2AP_UnsuccessfulOutcome_specs_1 = {
	sizeof(struct M2AP_UnsuccessfulOutcome),
	offsetof(struct M2AP_UnsuccessfulOutcome, _asn_ctx),
	asn_MAP_M2AP_UnsuccessfulOutcome_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M2AP_UnsuccessfulOutcome = {
	"UnsuccessfulOutcome",
	"UnsuccessfulOutcome",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_UnsuccessfulOutcome_tags_1,
	sizeof(asn_DEF_M2AP_UnsuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_M2AP_UnsuccessfulOutcome_tags_1[0]), /* 1 */
	asn_DEF_M2AP_UnsuccessfulOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_UnsuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_M2AP_UnsuccessfulOutcome_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_UnsuccessfulOutcome_1,
	3,	/* Elements count */
	&asn_SPC_M2AP_UnsuccessfulOutcome_specs_1	/* Additional specs */
};

