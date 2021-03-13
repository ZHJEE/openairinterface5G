/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#include "F1AP_ShortDRXCycleTimer.h"

int
F1AP_ShortDRXCycleTimer_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
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
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_F1AP_ShortDRXCycleTimer_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_F1AP_ShortDRXCycleTimer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_ShortDRXCycleTimer = {
	"ShortDRXCycleTimer",
	"ShortDRXCycleTimer",
	&asn_OP_NativeInteger,
	asn_DEF_F1AP_ShortDRXCycleTimer_tags_1,
	sizeof(asn_DEF_F1AP_ShortDRXCycleTimer_tags_1)
		/sizeof(asn_DEF_F1AP_ShortDRXCycleTimer_tags_1[0]), /* 1 */
	asn_DEF_F1AP_ShortDRXCycleTimer_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_ShortDRXCycleTimer_tags_1)
		/sizeof(asn_DEF_F1AP_ShortDRXCycleTimer_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_F1AP_ShortDRXCycleTimer_constr_1, F1AP_ShortDRXCycleTimer_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

