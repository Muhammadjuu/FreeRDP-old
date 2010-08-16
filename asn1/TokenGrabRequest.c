/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#include <asn_internal.h>

#include "TokenGrabRequest.h"

static asn_TYPE_member_t asn_MBR_nonStandard_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NonStandardParameter,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_nonStandard_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nonStandard_specs_4 = {
	sizeof(struct TokenGrabRequest__nonStandard),
	offsetof(struct TokenGrabRequest__nonStandard, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonStandard_4 = {
	"nonStandard",
	"nonStandard",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_nonStandard_tags_4,
	sizeof(asn_DEF_nonStandard_tags_4)
		/sizeof(asn_DEF_nonStandard_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonStandard_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonStandard_tags_4)
		/sizeof(asn_DEF_nonStandard_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_nonStandard_4,
	1,	/* Single element */
	&asn_SPC_nonStandard_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_TokenGrabRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TokenGrabRequest, initiator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UserId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"initiator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenGrabRequest, tokenId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenId"
		},
	{ ATF_POINTER, 1, offsetof(struct TokenGrabRequest, nonStandard),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonStandard_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonStandard"
		},
};
static int asn_MAP_TokenGrabRequest_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_TokenGrabRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_TokenGrabRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* initiator at 450 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tokenId at 451 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonStandard at 452 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TokenGrabRequest_specs_1 = {
	sizeof(struct TokenGrabRequest),
	offsetof(struct TokenGrabRequest, _asn_ctx),
	asn_MAP_TokenGrabRequest_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_TokenGrabRequest_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TokenGrabRequest = {
	"TokenGrabRequest",
	"TokenGrabRequest",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TokenGrabRequest_tags_1,
	sizeof(asn_DEF_TokenGrabRequest_tags_1)
		/sizeof(asn_DEF_TokenGrabRequest_tags_1[0]), /* 1 */
	asn_DEF_TokenGrabRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_TokenGrabRequest_tags_1)
		/sizeof(asn_DEF_TokenGrabRequest_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TokenGrabRequest_1,
	3,	/* Elements count */
	&asn_SPC_TokenGrabRequest_specs_1	/* Additional specs */
};

