/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#ifndef	_ChannelDisbandIndication_H_
#define	_ChannelDisbandIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrivateChannelId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NonStandardParameter;

/* ChannelDisbandIndication */
typedef struct ChannelDisbandIndication {
	PrivateChannelId_t	 channelId;
	struct ChannelDisbandIndication__nonStandard {
		A_SEQUENCE_OF(struct NonStandardParameter) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonStandard;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ChannelDisbandIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChannelDisbandIndication;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NonStandardParameter.h"

#endif	/* _ChannelDisbandIndication_H_ */
