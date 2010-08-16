/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#include <asn_internal.h>

#include "IndicationCapability.h"

static asn_TYPE_member_t asn_MBR_nonStandard_6[] = {
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
static ber_tlv_tag_t asn_DEF_nonStandard_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nonStandard_specs_6 = {
	sizeof(struct IndicationCapability__nonStandard),
	offsetof(struct IndicationCapability__nonStandard, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonStandard_6 = {
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
	asn_DEF_nonStandard_tags_6,
	sizeof(asn_DEF_nonStandard_tags_6)
		/sizeof(asn_DEF_nonStandard_tags_6[0]) - 1, /* 1 */
	asn_DEF_nonStandard_tags_6,	/* Same as above */
	sizeof(asn_DEF_nonStandard_tags_6)
		/sizeof(asn_DEF_nonStandard_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_nonStandard_6,
	1,	/* Single element */
	&asn_SPC_nonStandard_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_IndicationCapability_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IndicationCapability, capabilityID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CapabilityID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"capabilityID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndicationCapability, capabilityClass),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CapabilityClass,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"capabilityClass"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndicationCapability, summitProviderSupported),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"summitProviderSupported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndicationCapability, intermediateNodeSupported),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intermediateNodeSupported"
		},
	{ ATF_POINTER, 1, offsetof(struct IndicationCapability, nonStandard),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonStandard_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonStandard"
		},
};
static int asn_MAP_IndicationCapability_oms_1[] = { 4 };
static ber_tlv_tag_t asn_DEF_IndicationCapability_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IndicationCapability_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* capabilityID at 606 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* capabilityClass at 607 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* summitProviderSupported at 608 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* intermediateNodeSupported at 609 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonStandard at 610 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IndicationCapability_specs_1 = {
	sizeof(struct IndicationCapability),
	offsetof(struct IndicationCapability, _asn_ctx),
	asn_MAP_IndicationCapability_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_IndicationCapability_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IndicationCapability = {
	"IndicationCapability",
	"IndicationCapability",
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
	asn_DEF_IndicationCapability_tags_1,
	sizeof(asn_DEF_IndicationCapability_tags_1)
		/sizeof(asn_DEF_IndicationCapability_tags_1[0]), /* 1 */
	asn_DEF_IndicationCapability_tags_1,	/* Same as above */
	sizeof(asn_DEF_IndicationCapability_tags_1)
		/sizeof(asn_DEF_IndicationCapability_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IndicationCapability_1,
	5,	/* Elements count */
	&asn_SPC_IndicationCapability_specs_1	/* Additional specs */
};

