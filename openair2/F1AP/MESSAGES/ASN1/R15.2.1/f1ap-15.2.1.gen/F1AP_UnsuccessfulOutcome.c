/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Descriptions"
 * 	found in "R15.2.1/F1AP-PDU-Descriptions.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#include "F1AP_UnsuccessfulOutcome.h"

static const long asn_VAL_1_F1AP_id_Reset = 0;
static const long asn_VAL_1_F1AP_reject = 0;
static const long asn_VAL_2_F1AP_id_F1Setup = 1;
static const long asn_VAL_2_F1AP_reject = 0;
static const long asn_VAL_3_F1AP_id_gNBDUConfigurationUpdate = 3;
static const long asn_VAL_3_F1AP_reject = 0;
static const long asn_VAL_4_F1AP_id_gNBCUConfigurationUpdate = 4;
static const long asn_VAL_4_F1AP_reject = 0;
static const long asn_VAL_5_F1AP_id_UEContextSetup = 5;
static const long asn_VAL_5_F1AP_reject = 0;
static const long asn_VAL_6_F1AP_id_UEContextRelease = 6;
static const long asn_VAL_6_F1AP_reject = 0;
static const long asn_VAL_7_F1AP_id_UEContextModification = 7;
static const long asn_VAL_7_F1AP_reject = 0;
static const long asn_VAL_8_F1AP_id_UEContextModificationRequired = 8;
static const long asn_VAL_8_F1AP_reject = 0;
static const long asn_VAL_9_F1AP_id_WriteReplaceWarning = 20;
static const long asn_VAL_9_F1AP_reject = 0;
static const long asn_VAL_10_F1AP_id_PWSCancel = 21;
static const long asn_VAL_10_F1AP_reject = 0;
static const long asn_VAL_11_F1AP_id_GNBDUResourceCoordination = 16;
static const long asn_VAL_11_F1AP_reject = 0;
static const long asn_VAL_12_F1AP_id_ErrorIndication = 2;
static const long asn_VAL_12_F1AP_ignore = 1;
static const long asn_VAL_13_F1AP_id_UEContextReleaseRequest = 10;
static const long asn_VAL_13_F1AP_ignore = 1;
static const long asn_VAL_14_F1AP_id_DLRRCMessageTransfer = 12;
static const long asn_VAL_14_F1AP_ignore = 1;
static const long asn_VAL_15_F1AP_id_ULRRCMessageTransfer = 13;
static const long asn_VAL_15_F1AP_ignore = 1;
static const long asn_VAL_16_F1AP_id_UEInactivityNotification = 15;
static const long asn_VAL_16_F1AP_ignore = 1;
static const long asn_VAL_17_F1AP_id_privateMessage = 14;
static const long asn_VAL_17_F1AP_ignore = 1;
static const long asn_VAL_18_F1AP_id_InitialULRRCMessageTransfer = 11;
static const long asn_VAL_18_F1AP_ignore = 1;
static const long asn_VAL_19_F1AP_id_SystemInformationDeliveryCommand = 17;
static const long asn_VAL_19_F1AP_ignore = 1;
static const long asn_VAL_20_F1AP_id_Paging = 18;
static const long asn_VAL_20_F1AP_ignore = 1;
static const long asn_VAL_21_F1AP_id_Notify = 19;
static const long asn_VAL_21_F1AP_ignore = 1;
static const long asn_VAL_22_F1AP_id_PWSRestartIndication = 22;
static const long asn_VAL_22_F1AP_ignore = 1;
static const long asn_VAL_23_F1AP_id_PWSFailureIndication = 23;
static const long asn_VAL_23_F1AP_ignore = 1;
static const asn_ioc_cell_t asn_IOS_F1AP_F1AP_ELEMENTARY_PROCEDURES_1_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_Reset },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_ResetAcknowledge },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_1_F1AP_id_Reset },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_1_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_F1SetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_F1SetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_F1AP_F1SetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_2_F1AP_id_F1Setup },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_2_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_GNBDUConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_GNBDUConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_F1AP_GNBDUConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_3_F1AP_id_gNBDUConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_3_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_GNBCUConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_GNBCUConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_F1AP_GNBCUConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_4_F1AP_id_gNBCUConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_4_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_UEContextSetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_UEContextSetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_F1AP_UEContextSetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_5_F1AP_id_UEContextSetup },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_5_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_UEContextReleaseCommand },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_UEContextReleaseComplete },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_6_F1AP_id_UEContextRelease },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_6_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_UEContextModificationRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_UEContextModificationResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_F1AP_UEContextModificationFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_7_F1AP_id_UEContextModification },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_7_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_UEContextModificationRequired },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_UEContextModificationConfirm },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_8_F1AP_id_UEContextModificationRequired },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_8_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_WriteReplaceWarningRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_WriteReplaceWarningResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_9_F1AP_id_WriteReplaceWarning },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_9_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_PWSCancelRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_PWSCancelResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_10_F1AP_id_PWSCancel },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_10_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_GNBDUResourceCoordinationRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_F1AP_GNBDUResourceCoordinationResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_11_F1AP_id_GNBDUResourceCoordination },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_11_F1AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_ErrorIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_12_F1AP_id_ErrorIndication },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_12_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_UEContextReleaseRequest },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_13_F1AP_id_UEContextReleaseRequest },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_13_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_DLRRCMessageTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_14_F1AP_id_DLRRCMessageTransfer },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_14_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_ULRRCMessageTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_15_F1AP_id_ULRRCMessageTransfer },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_15_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_UEInactivityNotification },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_16_F1AP_id_UEInactivityNotification },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_16_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_PrivateMessage },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_17_F1AP_id_privateMessage },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_17_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_InitialULRRCMessageTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_18_F1AP_id_InitialULRRCMessageTransfer },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_18_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_SystemInformationDeliveryCommand },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_19_F1AP_id_SystemInformationDeliveryCommand },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_19_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_Paging },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_20_F1AP_id_Paging },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_20_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_Notify },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_21_F1AP_id_Notify },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_21_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_PWSRestartIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_22_F1AP_id_PWSRestartIndication },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_22_F1AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_F1AP_PWSFailureIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_F1AP_ProcedureCode, &asn_VAL_23_F1AP_id_PWSFailureIndication },
	{ "&criticality", aioc__value, &asn_DEF_F1AP_Criticality, &asn_VAL_23_F1AP_ignore }
};
static const asn_ioc_set_t asn_IOS_F1AP_F1AP_ELEMENTARY_PROCEDURES_1[] = {
	{ 23, 5, asn_IOS_F1AP_F1AP_ELEMENTARY_PROCEDURES_1_rows }
};
static int
memb_F1AP_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
select_UnsuccessfulOutcome_F1AP_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_F1AP_F1AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct F1AP_UnsuccessfulOutcome, procedureCode));
	
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
memb_F1AP_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
select_UnsuccessfulOutcome_F1AP_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_F1AP_F1AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 2; /* &UnsuccessfulOutcome */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct F1AP_UnsuccessfulOutcome, procedureCode));
	
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
memb_F1AP_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_F1AP_procedureCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_F1AP_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_F1AP_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_F1AP_value_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_UnsuccessfulOutcome__value, choice.F1SetupFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_F1AP_F1SetupFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"F1SetupFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_UnsuccessfulOutcome__value, choice.GNBDUConfigurationUpdateFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_F1AP_GNBDUConfigurationUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"GNBDUConfigurationUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_UnsuccessfulOutcome__value, choice.GNBCUConfigurationUpdateFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_F1AP_GNBCUConfigurationUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"GNBCUConfigurationUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_UnsuccessfulOutcome__value, choice.UEContextSetupFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_F1AP_UEContextSetupFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"UEContextSetupFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_UnsuccessfulOutcome__value, choice.UEContextModificationFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_F1AP_UEContextModificationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"UEContextModificationFailure"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_value_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 4 }, /* F1SetupFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 3 }, /* GNBDUConfigurationUpdateFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 2 }, /* GNBCUConfigurationUpdateFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 1 }, /* UEContextSetupFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 0 } /* UEContextModificationFailure */
};
static asn_CHOICE_specifics_t asn_SPC_F1AP_value_specs_4 = {
	sizeof(struct F1AP_UnsuccessfulOutcome__value),
	offsetof(struct F1AP_UnsuccessfulOutcome__value, _asn_ctx),
	offsetof(struct F1AP_UnsuccessfulOutcome__value, present),
	sizeof(((struct F1AP_UnsuccessfulOutcome__value *)0)->present),
	asn_MAP_F1AP_value_tag2el_4,
	5,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_F1AP_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	asn_MBR_F1AP_value_4,
	5,	/* Elements count */
	&asn_SPC_F1AP_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_F1AP_UnsuccessfulOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_UnsuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProcedureCode,
		0,
		{ 0, &asn_PER_memb_F1AP_procedureCode_constr_2,  memb_F1AP_procedureCode_constraint_1 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_UnsuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_Criticality,
		select_UnsuccessfulOutcome_F1AP_criticality_type,
		{ 0, &asn_PER_memb_F1AP_criticality_constr_3,  memb_F1AP_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct F1AP_UnsuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_F1AP_value_4,
		select_UnsuccessfulOutcome_F1AP_value_type,
		{ 0, &asn_PER_memb_F1AP_value_constr_4,  memb_F1AP_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_F1AP_UnsuccessfulOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_UnsuccessfulOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_UnsuccessfulOutcome_specs_1 = {
	sizeof(struct F1AP_UnsuccessfulOutcome),
	offsetof(struct F1AP_UnsuccessfulOutcome, _asn_ctx),
	asn_MAP_F1AP_UnsuccessfulOutcome_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_UnsuccessfulOutcome = {
	"UnsuccessfulOutcome",
	"UnsuccessfulOutcome",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_UnsuccessfulOutcome_tags_1,
	sizeof(asn_DEF_F1AP_UnsuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_F1AP_UnsuccessfulOutcome_tags_1[0]), /* 1 */
	asn_DEF_F1AP_UnsuccessfulOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_UnsuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_F1AP_UnsuccessfulOutcome_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_UnsuccessfulOutcome_1,
	3,	/* Elements count */
	&asn_SPC_F1AP_UnsuccessfulOutcome_specs_1	/* Additional specs */
};

