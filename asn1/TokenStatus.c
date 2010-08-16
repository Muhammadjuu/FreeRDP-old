/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#include <asn_internal.h>

#include "TokenStatus.h"

static asn_per_constraints_t asn_PER_type_TokenStatus_constr_1 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_TokenStatus_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TokenStatus, choice.notInUse),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notInUse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenStatus, choice.selfGrabbed),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"selfGrabbed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenStatus, choice.otherGrabbed),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"otherGrabbed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenStatus, choice.selfInhibited),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"selfInhibited"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenStatus, choice.otherInhibited),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"otherInhibited"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenStatus, choice.selfRecipient),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"selfRecipient"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenStatus, choice.selfGiving),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"selfGiving"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenStatus, choice.otherGiving),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"otherGiving"
		},
};
static asn_TYPE_tag2member_t asn_MAP_TokenStatus_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notInUse at 45 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* selfGrabbed at 46 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* otherGrabbed at 47 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* selfInhibited at 48 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* otherInhibited at 49 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* selfRecipient at 50 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* selfGiving at 51 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* otherGiving at 52 */
};
static asn_CHOICE_specifics_t asn_SPC_TokenStatus_specs_1 = {
	sizeof(struct TokenStatus),
	offsetof(struct TokenStatus, _asn_ctx),
	offsetof(struct TokenStatus, present),
	sizeof(((struct TokenStatus *)0)->present),
	asn_MAP_TokenStatus_tag2el_1,
	8,	/* Count of tags in the map */
	0,
	8	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TokenStatus = {
	"TokenStatus",
	"TokenStatus",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_TokenStatus_constr_1,
	asn_MBR_TokenStatus_1,
	8,	/* Elements count */
	&asn_SPC_TokenStatus_specs_1	/* Additional specs */
};

