/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-PDU-Contents"
 * 	found in "R14/m2ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m2ap-14.0.0.gen/`
 */

#include "M2AP_MbmsOverloadNotification.h"

asn_TYPE_member_t asn_MBR_M2AP_MbmsOverloadNotification_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_MbmsOverloadNotification, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_ProtocolIE_Container_1820P29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_M2AP_MbmsOverloadNotification_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_MbmsOverloadNotification_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_M2AP_MbmsOverloadNotification_specs_1 = {
	sizeof(struct M2AP_MbmsOverloadNotification),
	offsetof(struct M2AP_MbmsOverloadNotification, _asn_ctx),
	asn_MAP_M2AP_MbmsOverloadNotification_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M2AP_MbmsOverloadNotification = {
	"MbmsOverloadNotification",
	"MbmsOverloadNotification",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_MbmsOverloadNotification_tags_1,
	sizeof(asn_DEF_M2AP_MbmsOverloadNotification_tags_1)
		/sizeof(asn_DEF_M2AP_MbmsOverloadNotification_tags_1[0]), /* 1 */
	asn_DEF_M2AP_MbmsOverloadNotification_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_MbmsOverloadNotification_tags_1)
		/sizeof(asn_DEF_M2AP_MbmsOverloadNotification_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M2AP_MbmsOverloadNotification_1,
	1,	/* Elements count */
	&asn_SPC_M2AP_MbmsOverloadNotification_specs_1	/* Additional specs */
};

