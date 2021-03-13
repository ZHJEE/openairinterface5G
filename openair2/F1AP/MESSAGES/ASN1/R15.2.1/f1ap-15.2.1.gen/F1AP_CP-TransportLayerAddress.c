/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#include "F1AP_CP-TransportLayerAddress.h"

#include "F1AP_Endpoint-IP-address-and-port.h"
#include "F1AP_ProtocolExtensionContainer.h"
asn_per_constraints_t asn_PER_type_F1AP_CP_TransportLayerAddress_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_F1AP_CP_TransportLayerAddress_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_CP_TransportLayerAddress, choice.endpoint_IP_address),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"endpoint-IP-address"
		},
	{ ATF_POINTER, 0, offsetof(struct F1AP_CP_TransportLayerAddress, choice.endpoint_IP_address_and_port),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_Endpoint_IP_address_and_port,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"endpoint-IP-address-and-port"
		},
	{ ATF_POINTER, 0, offsetof(struct F1AP_CP_TransportLayerAddress, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_160P13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_CP_TransportLayerAddress_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* endpoint-IP-address */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* endpoint-IP-address-and-port */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_F1AP_CP_TransportLayerAddress_specs_1 = {
	sizeof(struct F1AP_CP_TransportLayerAddress),
	offsetof(struct F1AP_CP_TransportLayerAddress, _asn_ctx),
	offsetof(struct F1AP_CP_TransportLayerAddress, present),
	sizeof(((struct F1AP_CP_TransportLayerAddress *)0)->present),
	asn_MAP_F1AP_CP_TransportLayerAddress_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_CP_TransportLayerAddress = {
	"CP-TransportLayerAddress",
	"CP-TransportLayerAddress",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_F1AP_CP_TransportLayerAddress_constr_1, CHOICE_constraint },
	asn_MBR_F1AP_CP_TransportLayerAddress_1,
	3,	/* Elements count */
	&asn_SPC_F1AP_CP_TransportLayerAddress_specs_1	/* Additional specs */
};

