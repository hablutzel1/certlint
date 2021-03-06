/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "asn1/rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "DomainParameters.h"

static asn_TYPE_member_t asn_MBR_DomainParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DomainParameters, p),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"p"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainParameters, g),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"g"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainParameters, q),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"q"
		},
	{ ATF_POINTER, 2, offsetof(struct DomainParameters, j),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"j"
		},
	{ ATF_POINTER, 1, offsetof(struct DomainParameters, validationParms),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ValidationParms,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"validationParms"
		},
};
static const ber_tlv_tag_t asn_DEF_DomainParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DomainParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 3 }, /* p */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 2 }, /* g */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -2, 1 }, /* q */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -3, 0 }, /* j */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, 0, 0 } /* validationParms */
};
static asn_SEQUENCE_specifics_t asn_SPC_DomainParameters_specs_1 = {
	sizeof(struct DomainParameters),
	offsetof(struct DomainParameters, _asn_ctx),
	asn_MAP_DomainParameters_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DomainParameters = {
	"DomainParameters",
	"DomainParameters",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_DomainParameters_tags_1,
	sizeof(asn_DEF_DomainParameters_tags_1)
		/sizeof(asn_DEF_DomainParameters_tags_1[0]), /* 1 */
	asn_DEF_DomainParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_DomainParameters_tags_1)
		/sizeof(asn_DEF_DomainParameters_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_DomainParameters_1,
	5,	/* Elements count */
	&asn_SPC_DomainParameters_specs_1	/* Additional specs */
};

