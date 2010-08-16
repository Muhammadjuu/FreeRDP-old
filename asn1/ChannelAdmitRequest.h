/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#ifndef	_ChannelAdmitRequest_H_
#define	_ChannelAdmitRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UserId.h"
#include "PrivateChannelId.h"
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NonStandardParameter;

/* ChannelAdmitRequest */
typedef struct ChannelAdmitRequest {
	UserId_t	 initiator;
	PrivateChannelId_t	 channelId;
	struct ChannelAdmitRequest__userIds {
		A_SET_OF(UserId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} userIds;
	struct ChannelAdmitRequest__nonStandard {
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
} ChannelAdmitRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChannelAdmitRequest;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NonStandardParameter.h"

#endif	/* _ChannelAdmitRequest_H_ */
