/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#include <asn_internal.h>

#include "TokenAttributes.h"

static asn_per_constraints_t asn_PER_type_TokenAttributes_constr_1 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_nonStandard_5[] = {
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
static ber_tlv_tag_t asn_DEF_nonStandard_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nonStandard_specs_5 = {
	sizeof(struct TokenAttributes__grabbed__nonStandard),
	offsetof(struct TokenAttributes__grabbed__nonStandard, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonStandard_5 = {
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
	asn_DEF_nonStandard_tags_5,
	sizeof(asn_DEF_nonStandard_tags_5)
		/sizeof(asn_DEF_nonStandard_tags_5[0]) - 1, /* 1 */
	asn_DEF_nonStandard_tags_5,	/* Same as above */
	sizeof(asn_DEF_nonStandard_tags_5)
		/sizeof(asn_DEF_nonStandard_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_nonStandard_5,
	1,	/* Single element */
	&asn_SPC_nonStandard_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_grabbed_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__grabbed, tokenId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__grabbed, grabber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UserId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"grabber"
		},
	{ ATF_POINTER, 1, offsetof(struct TokenAttributes__grabbed, nonStandard),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonStandard_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonStandard"
		},
};
static int asn_MAP_grabbed_oms_2[] = { 2 };
static ber_tlv_tag_t asn_DEF_grabbed_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_grabbed_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tokenId at 185 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* grabber at 186 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonStandard at 187 */
};
static asn_SEQUENCE_specifics_t asn_SPC_grabbed_specs_2 = {
	sizeof(struct TokenAttributes__grabbed),
	offsetof(struct TokenAttributes__grabbed, _asn_ctx),
	asn_MAP_grabbed_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_grabbed_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_grabbed_2 = {
	"grabbed",
	"grabbed",
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
	asn_DEF_grabbed_tags_2,
	sizeof(asn_DEF_grabbed_tags_2)
		/sizeof(asn_DEF_grabbed_tags_2[0]) - 1, /* 1 */
	asn_DEF_grabbed_tags_2,	/* Same as above */
	sizeof(asn_DEF_grabbed_tags_2)
		/sizeof(asn_DEF_grabbed_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_grabbed_2,
	3,	/* Elements count */
	&asn_SPC_grabbed_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_inhibitors_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_UserId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_inhibitors_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_inhibitors_specs_10 = {
	sizeof(struct TokenAttributes__inhibited__inhibitors),
	offsetof(struct TokenAttributes__inhibited__inhibitors, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_inhibitors_10 = {
	"inhibitors",
	"inhibitors",
	SET_OF_free,
	SET_OF_print,
	SET_OF_constraint,
	SET_OF_decode_ber,
	SET_OF_encode_der,
	SET_OF_decode_xer,
	SET_OF_encode_xer,
	SET_OF_decode_uper,
	SET_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_inhibitors_tags_10,
	sizeof(asn_DEF_inhibitors_tags_10)
		/sizeof(asn_DEF_inhibitors_tags_10[0]) - 1, /* 1 */
	asn_DEF_inhibitors_tags_10,	/* Same as above */
	sizeof(asn_DEF_inhibitors_tags_10)
		/sizeof(asn_DEF_inhibitors_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_inhibitors_10,
	1,	/* Single element */
	&asn_SPC_inhibitors_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nonStandard_12[] = {
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
static ber_tlv_tag_t asn_DEF_nonStandard_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nonStandard_specs_12 = {
	sizeof(struct TokenAttributes__inhibited__nonStandard),
	offsetof(struct TokenAttributes__inhibited__nonStandard, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonStandard_12 = {
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
	asn_DEF_nonStandard_tags_12,
	sizeof(asn_DEF_nonStandard_tags_12)
		/sizeof(asn_DEF_nonStandard_tags_12[0]) - 1, /* 1 */
	asn_DEF_nonStandard_tags_12,	/* Same as above */
	sizeof(asn_DEF_nonStandard_tags_12)
		/sizeof(asn_DEF_nonStandard_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_nonStandard_12,
	1,	/* Single element */
	&asn_SPC_nonStandard_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_inhibited_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__inhibited, tokenId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__inhibited, inhibitors),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_inhibitors_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"inhibitors"
		},
	{ ATF_POINTER, 1, offsetof(struct TokenAttributes__inhibited, nonStandard),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonStandard_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonStandard"
		},
};
static int asn_MAP_inhibited_oms_8[] = { 2 };
static ber_tlv_tag_t asn_DEF_inhibited_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_inhibited_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tokenId at 192 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* inhibitors at 193 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonStandard at 195 */
};
static asn_SEQUENCE_specifics_t asn_SPC_inhibited_specs_8 = {
	sizeof(struct TokenAttributes__inhibited),
	offsetof(struct TokenAttributes__inhibited, _asn_ctx),
	asn_MAP_inhibited_tag2el_8,
	3,	/* Count of tags in the map */
	asn_MAP_inhibited_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_inhibited_8 = {
	"inhibited",
	"inhibited",
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
	asn_DEF_inhibited_tags_8,
	sizeof(asn_DEF_inhibited_tags_8)
		/sizeof(asn_DEF_inhibited_tags_8[0]) - 1, /* 1 */
	asn_DEF_inhibited_tags_8,	/* Same as above */
	sizeof(asn_DEF_inhibited_tags_8)
		/sizeof(asn_DEF_inhibited_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_inhibited_8,
	3,	/* Elements count */
	&asn_SPC_inhibited_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nonStandard_19[] = {
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
static ber_tlv_tag_t asn_DEF_nonStandard_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nonStandard_specs_19 = {
	sizeof(struct TokenAttributes__giving__nonStandard),
	offsetof(struct TokenAttributes__giving__nonStandard, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonStandard_19 = {
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
	asn_DEF_nonStandard_tags_19,
	sizeof(asn_DEF_nonStandard_tags_19)
		/sizeof(asn_DEF_nonStandard_tags_19[0]) - 1, /* 1 */
	asn_DEF_nonStandard_tags_19,	/* Same as above */
	sizeof(asn_DEF_nonStandard_tags_19)
		/sizeof(asn_DEF_nonStandard_tags_19[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_nonStandard_19,
	1,	/* Single element */
	&asn_SPC_nonStandard_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_giving_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__giving, tokenId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__giving, grabber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UserId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"grabber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__giving, recipient),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UserId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"recipient"
		},
	{ ATF_POINTER, 1, offsetof(struct TokenAttributes__giving, nonStandard),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_nonStandard_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonStandard"
		},
};
static int asn_MAP_giving_oms_15[] = { 3 };
static ber_tlv_tag_t asn_DEF_giving_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_giving_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tokenId at 200 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* grabber at 201 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* recipient at 202 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonStandard at 203 */
};
static asn_SEQUENCE_specifics_t asn_SPC_giving_specs_15 = {
	sizeof(struct TokenAttributes__giving),
	offsetof(struct TokenAttributes__giving, _asn_ctx),
	asn_MAP_giving_tag2el_15,
	4,	/* Count of tags in the map */
	asn_MAP_giving_oms_15,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_giving_15 = {
	"giving",
	"giving",
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
	asn_DEF_giving_tags_15,
	sizeof(asn_DEF_giving_tags_15)
		/sizeof(asn_DEF_giving_tags_15[0]) - 1, /* 1 */
	asn_DEF_giving_tags_15,	/* Same as above */
	sizeof(asn_DEF_giving_tags_15)
		/sizeof(asn_DEF_giving_tags_15[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_giving_15,
	4,	/* Elements count */
	&asn_SPC_giving_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nonStandard_25[] = {
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
static ber_tlv_tag_t asn_DEF_nonStandard_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nonStandard_specs_25 = {
	sizeof(struct TokenAttributes__ungivable__nonStandard),
	offsetof(struct TokenAttributes__ungivable__nonStandard, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonStandard_25 = {
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
	asn_DEF_nonStandard_tags_25,
	sizeof(asn_DEF_nonStandard_tags_25)
		/sizeof(asn_DEF_nonStandard_tags_25[0]) - 1, /* 1 */
	asn_DEF_nonStandard_tags_25,	/* Same as above */
	sizeof(asn_DEF_nonStandard_tags_25)
		/sizeof(asn_DEF_nonStandard_tags_25[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_nonStandard_25,
	1,	/* Single element */
	&asn_SPC_nonStandard_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ungivable_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__ungivable, tokenId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__ungivable, grabber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UserId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"grabber"
		},
	{ ATF_POINTER, 1, offsetof(struct TokenAttributes__ungivable, nonStandard),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonStandard_25,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonStandard"
		},
};
static int asn_MAP_ungivable_oms_22[] = { 2 };
static ber_tlv_tag_t asn_DEF_ungivable_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ungivable_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tokenId at 208 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* grabber at 209 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonStandard at 211 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ungivable_specs_22 = {
	sizeof(struct TokenAttributes__ungivable),
	offsetof(struct TokenAttributes__ungivable, _asn_ctx),
	asn_MAP_ungivable_tag2el_22,
	3,	/* Count of tags in the map */
	asn_MAP_ungivable_oms_22,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ungivable_22 = {
	"ungivable",
	"ungivable",
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
	asn_DEF_ungivable_tags_22,
	sizeof(asn_DEF_ungivable_tags_22)
		/sizeof(asn_DEF_ungivable_tags_22[0]) - 1, /* 1 */
	asn_DEF_ungivable_tags_22,	/* Same as above */
	sizeof(asn_DEF_ungivable_tags_22)
		/sizeof(asn_DEF_ungivable_tags_22[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ungivable_22,
	3,	/* Elements count */
	&asn_SPC_ungivable_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nonStandard_31[] = {
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
static ber_tlv_tag_t asn_DEF_nonStandard_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nonStandard_specs_31 = {
	sizeof(struct TokenAttributes__given__nonStandard),
	offsetof(struct TokenAttributes__given__nonStandard, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonStandard_31 = {
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
	asn_DEF_nonStandard_tags_31,
	sizeof(asn_DEF_nonStandard_tags_31)
		/sizeof(asn_DEF_nonStandard_tags_31[0]) - 1, /* 1 */
	asn_DEF_nonStandard_tags_31,	/* Same as above */
	sizeof(asn_DEF_nonStandard_tags_31)
		/sizeof(asn_DEF_nonStandard_tags_31[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_nonStandard_31,
	1,	/* Single element */
	&asn_SPC_nonStandard_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_given_28[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__given, tokenId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TokenId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tokenId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes__given, recipient),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UserId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"recipient"
		},
	{ ATF_POINTER, 1, offsetof(struct TokenAttributes__given, nonStandard),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonStandard_31,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonStandard"
		},
};
static int asn_MAP_given_oms_28[] = { 2 };
static ber_tlv_tag_t asn_DEF_given_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_given_tag2el_28[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tokenId at 216 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* recipient at 217 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonStandard at 219 */
};
static asn_SEQUENCE_specifics_t asn_SPC_given_specs_28 = {
	sizeof(struct TokenAttributes__given),
	offsetof(struct TokenAttributes__given, _asn_ctx),
	asn_MAP_given_tag2el_28,
	3,	/* Count of tags in the map */
	asn_MAP_given_oms_28,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_given_28 = {
	"given",
	"given",
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
	asn_DEF_given_tags_28,
	sizeof(asn_DEF_given_tags_28)
		/sizeof(asn_DEF_given_tags_28[0]) - 1, /* 1 */
	asn_DEF_given_tags_28,	/* Same as above */
	sizeof(asn_DEF_given_tags_28)
		/sizeof(asn_DEF_given_tags_28[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_given_28,
	3,	/* Elements count */
	&asn_SPC_given_specs_28	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_TokenAttributes_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes, choice.grabbed),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_grabbed_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"grabbed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes, choice.inhibited),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_inhibited_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"inhibited"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes, choice.giving),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_giving_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"giving"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes, choice.ungivable),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ungivable_22,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ungivable"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TokenAttributes, choice.given),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_given_28,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"given"
		},
};
static asn_TYPE_tag2member_t asn_MAP_TokenAttributes_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* grabbed at 185 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* inhibited at 192 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* giving at 200 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ungivable at 208 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* given at 216 */
};
static asn_CHOICE_specifics_t asn_SPC_TokenAttributes_specs_1 = {
	sizeof(struct TokenAttributes),
	offsetof(struct TokenAttributes, _asn_ctx),
	offsetof(struct TokenAttributes, present),
	sizeof(((struct TokenAttributes *)0)->present),
	asn_MAP_TokenAttributes_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TokenAttributes = {
	"TokenAttributes",
	"TokenAttributes",
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
	&asn_PER_type_TokenAttributes_constr_1,
	asn_MBR_TokenAttributes_1,
	5,	/* Elements count */
	&asn_SPC_TokenAttributes_specs_1	/* Additional specs */
};

