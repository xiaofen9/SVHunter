/* Generated automatically; do not modify!     -*- buffer-read-only: t -*- */

#define OFPERR_N_ERRORS 177

struct ofperr_domain {
    const char *name;
    uint8_t version;
    enum ofperr (*decode)(uint32_t vendor, uint16_t type, uint16_t code);
    struct triplet errors[OFPERR_N_ERRORS];
};

static const char *error_names[OFPERR_N_ERRORS] = {
    "OFPHFC_INCOMPATIBLE",
    "OFPHFC_EPERM",
    "OFPBRC_BAD_VERSION",
    "OFPBRC_BAD_TYPE",
    "OFPBRC_BAD_STAT",
    "OFPBRC_BAD_VENDOR",
    "OFPBRC_BAD_SUBTYPE",
    "OFPBRC_EPERM",
    "OFPBRC_BAD_LEN",
    "OFPBRC_BUFFER_EMPTY",
    "OFPBRC_BUFFER_UNKNOWN",
    "OFPBRC_BAD_TABLE_ID",
    "OFPBRC_IS_SLAVE",
    "OFPBRC_BAD_PORT",
    "OFPBRC_BAD_PACKET",
    "OFPBRC_MULTIPART_BUFFER_OVERFLOW",
    "OFPBRC_PIPELINE_FIELDS_ONLY",
    "NXBRC_NXM_INVALID",
    "NXBRC_NXM_BAD_TYPE",
    "NXBRC_MUST_BE_ZERO",
    "NXBRC_BAD_REASON",
    "NXBRC_FM_BAD_EVENT",
    "NXBRC_UNENCODABLE_ERROR",
    "OFPBAC_BAD_TYPE",
    "OFPBAC_BAD_LEN",
    "OFPBAC_BAD_VENDOR",
    "OFPBAC_BAD_VENDOR_TYPE",
    "OFPBAC_BAD_OUT_PORT",
    "OFPBAC_BAD_ARGUMENT",
    "OFPBAC_EPERM",
    "OFPBAC_TOO_MANY",
    "OFPBAC_BAD_QUEUE",
    "OFPBAC_BAD_OUT_GROUP",
    "OFPBAC_MATCH_INCONSISTENT",
    "OFPBAC_UNSUPPORTED_ORDER",
    "OFPBAC_BAD_TAG",
    "OFPBAC_BAD_SET_TYPE",
    "OFPBAC_BAD_SET_LEN",
    "OFPBAC_BAD_SET_ARGUMENT",
    "OFPBAC_BAD_SET_MASK",
    "NXBAC_MUST_BE_ZERO",
    "NXBAC_BAD_CONJUNCTION",
    "NXBAC_BAD_HEADER_TYPE",
    "NXBAC_UNKNOWN_ED_PROP",
    "NXBAC_BAD_ED_PROP",
    "OFPBIC_UNKNOWN_INST",
    "OFPBIC_UNSUP_INST",
    "OFPBIC_BAD_TABLE_ID",
    "OFPBIC_UNSUP_METADATA",
    "OFPBIC_UNSUP_METADATA_MASK",
    "OFPBIC_BAD_EXPERIMENTER",
    "OFPBIC_BAD_EXP_TYPE",
    "OFPBIC_BAD_LEN",
    "OFPBIC_EPERM",
    "OFPBIC_DUP_INST",
    "OFPBMC_BAD_TYPE",
    "OFPBMC_BAD_LEN",
    "OFPBMC_BAD_TAG",
    "OFPBMC_BAD_DL_ADDR_MASK",
    "OFPBMC_BAD_NW_ADDR_MASK",
    "OFPBMC_BAD_WILDCARDS",
    "OFPBMC_BAD_FIELD",
    "OFPBMC_BAD_VALUE",
    "OFPBMC_BAD_MASK",
    "OFPBMC_BAD_PREREQ",
    "OFPBMC_DUP_FIELD",
    "OFPBMC_EPERM",
    "OFPFMFC_UNKNOWN",
    "OFPFMFC_TABLE_FULL",
    "OFPFMFC_BAD_TABLE_ID",
    "OFPFMFC_OVERLAP",
    "OFPFMFC_EPERM",
    "OFPFMFC_BAD_TIMEOUT",
    "OFPFMFC_BAD_EMERG_TIMEOUT",
    "OFPFMFC_BAD_COMMAND",
    "OFPFMFC_BAD_FLAGS",
    "OFPFMFC_UNSUPPORTED",
    "NXFMFC_HARDWARE",
    "NXFMFC_BAD_TABLE_ID",
    "NXFMFC_INVALID_TLV_FIELD",
    "OFPGMFC_GROUP_EXISTS",
    "OFPGMFC_INVALID_GROUP",
    "OFPGMFC_WEIGHT_UNSUPPORTED",
    "OFPGMFC_OUT_OF_GROUPS",
    "OFPGMFC_OUT_OF_BUCKETS",
    "OFPGMFC_CHAINING_UNSUPPORTED",
    "OFPGMFC_WATCH_UNSUPPORTED",
    "OFPGMFC_LOOP",
    "OFPGMFC_UNKNOWN_GROUP",
    "OFPGMFC_CHAINED_GROUP",
    "OFPGMFC_BAD_TYPE",
    "OFPGMFC_BAD_COMMAND",
    "OFPGMFC_BAD_BUCKET",
    "OFPGMFC_BAD_WATCH",
    "OFPGMFC_EPERM",
    "OFPGMFC_UNKNOWN_BUCKET",
    "OFPGMFC_BUCKET_EXISTS",
    "OFPPMFC_BAD_PORT",
    "OFPPMFC_BAD_HW_ADDR",
    "OFPPMFC_BAD_CONFIG",
    "OFPPMFC_BAD_ADVERTISE",
    "OFPPMFC_EPERM",
    "OFPTMFC_BAD_TABLE",
    "OFPTMFC_BAD_CONFIG",
    "OFPTMFC_EPERM",
    "OFPQOFC_BAD_PORT",
    "OFPQOFC_BAD_QUEUE",
    "OFPQOFC_EPERM",
    "NXQOFC_QUEUE_ERROR",
    "OFPSCFC_BAD_FLAGS",
    "OFPSCFC_BAD_LEN",
    "OFPSCFC_EPERM",
    "OFPRRFC_STALE",
    "OFPRRFC_UNSUP",
    "OFPRRFC_BAD_ROLE",
    "OFPMMFC_UNKNOWN",
    "OFPMMFC_METER_EXISTS",
    "OFPMMFC_INVALID_METER",
    "OFPMMFC_UNKNOWN_METER",
    "OFPMMFC_BAD_COMMAND",
    "OFPMMFC_BAD_FLAGS",
    "OFPMMFC_BAD_RATE",
    "OFPMMFC_BAD_BURST",
    "OFPMMFC_BAD_BAND",
    "OFPMMFC_BAD_BAND_VALUE",
    "OFPMMFC_OUT_OF_METERS",
    "OFPMMFC_OUT_OF_BANDS",
    "OFPTFFC_BAD_TABLE",
    "OFPTFFC_BAD_METADATA",
    "OFPTFFC_EPERM",
    "OFPBPC_BAD_TYPE",
    "OFPBPC_BAD_LEN",
    "OFPBPC_BAD_VALUE",
    "OFPBPC_TOO_MANY",
    "OFPBPC_DUP_TYPE",
    "OFPBPC_BAD_EXPERIMENTER",
    "OFPBPC_BAD_EXP_TYPE",
    "OFPBPC_BAD_EXP_VALUE",
    "OFPBPC_EPERM",
    "OFPACFC_INVALID",
    "OFPACFC_UNSUPPORTED",
    "OFPACFC_EPERM",
    "OFPBFC_UNKNOWN",
    "OFPBFC_EPERM",
    "OFPBFC_BAD_ID",
    "OFPBFC_BUNDLE_EXIST",
    "OFPBFC_BUNDLE_CLOSED",
    "OFPBFC_OUT_OF_BUNDLES",
    "OFPBFC_BAD_TYPE",
    "OFPBFC_BAD_FLAGS",
    "OFPBFC_MSG_BAD_LEN",
    "OFPBFC_MSG_BAD_XID",
    "OFPBFC_MSG_UNSUP",
    "OFPBFC_MSG_CONFLICT",
    "OFPBFC_MSG_TOO_MANY",
    "OFPBFC_MSG_FAILED",
    "OFPBFC_TIMEOUT",
    "OFPBFC_BUNDLE_IN_PROGRESS",
    "OFPBFC_BAD_VERSION",
    "OFPMOFC_UNKNOWN",
    "OFPMOFC_MONITOR_EXISTS",
    "OFPMOFC_INVALID_MONITOR",
    "OFPMOFC_UNKNOWN_MONITOR",
    "OFPMOFC_BAD_COMMAND",
    "OFPMOFC_BAD_FLAGS",
    "OFPMOFC_BAD_TABLE_ID",
    "OFPMOFC_BAD_OUT",
    "NXTTMFC_BAD_COMMAND",
    "NXTTMFC_BAD_OPT_LEN",
    "NXTTMFC_BAD_FIELD_IDX",
    "NXTTMFC_TABLE_FULL",
    "NXTTMFC_ALREADY_MAPPED",
    "NXTTMFC_DUP_ENTRY",
    "NXTTMFC_INVALID_TLV_DEL",
    "NXR_NOT_SUPPORTED",
    "NXR_STALE",
    "NXST_NOT_CONFIGURED",
};

static const char *error_comments[OFPERR_N_ERRORS] = {
    "No compatible version.",
    "Permissions error.",
    "ofp_header.version not supported.",
    "ofp_header.type not supported.",
    "ofp_stats_msg.type not supported.",
    "Vendor not supported (in ofp_vendor_header or ofp_stats_msg).",
    "Vendor subtype not supported.",
    "Permissions error.",
    "Wrong request length for type.",
    "Specified buffer has already been used.",
    "Specified buffer does not exist.",
    "Specified table-id invalid or does not exist. ",
    "Denied because controller is slave.",
    "Invalid port.  ",
    "Invalid packet in packet-out.",
    "Multipart request overflowed the assigned buffer.",
    "Match fields must include only pipeline fields.",
    "Invalid NXM flow match.",
    "The nxm_type, or nxm_type taken in combination with nxm_hasmask or nxm_length or both, is invalid or not implemented.",
    "Must-be-zero field had nonzero value.",
    "The reason in an ofp_port_status message is not valid.",
    "The 'event' in an NXST_FLOW_MONITOR reply does not specify one of the NXFME_ABBREV, NXFME_ADD, NXFME_DELETE, or NXFME_MODIFY.",
    "The error that occurred cannot be represented in this OpenFlow version.",
    "Unknown action type.",
    "Length problem in actions.",
    "Unknown experimenter id specified.",
    "Unknown action type for experimenter id.",
    "Problem validating output port.",
    "Bad action argument.",
    "Permissions error.",
    "Can't handle this many actions.",
    "Problem validating output queue.",
    "Invalid group id in forward action.",
    "Action can't apply for this match or a prerequisite for use of this field is unmet.",
    "Action order is unsupported for the action list in an Apply-Actions instruction",
    "Actions uses an unsupported tag/encap.",
    "Action uses unknown or unsupported OXM or NXM field.",
    "Action references past the end of an OXM or NXM field, or uses a length of zero.",
    "Action sets a field to an invalid or unsupported value, or modifies a read-only field.",
    "Field in Set-Field action has Has-Mask bit set to 1.",
    "Must-be-zero action argument had nonzero value.",
    "Conjunction action must be only action present.  conjunction(id, k/n) must satisfy 1 <= k <= n and 2 <= n <= 64.",
    "Unsupported packet type in encap or decap.",
    "Unrecognized encap or decap property.",
    "Error in encap or decap property.",
    "Unknown instruction.",
    "Switch or table does not support the instruction.",
    "Invalid Table-ID specified.",
    "Metadata value unsupported by datapath.",
    "Metadata mask value unsupported by datapath.",
    "Unknown experimenter id specified.",
    "Unknown instruction for experimenter id.",
    "Length problem in instructions.",
    "Permissions error.",
    "Duplicate instruction.",
    "Unsupported match type specified by the match",
    "Length problem in match.",
    "Match uses an unsupported tag/encap.",
    "Unsupported datalink addr mask - switch does not support arbitrary datalink address mask.",
    "Unsupported network addr mask - switch does not support arbitrary network address mask.",
    "Unsupported wildcard specified in the match.",
    "Unsupported field in the match.",
    "Unsupported value in a match field.",
    "Unsupported mask specified in the match, field is not dl-address or nw-address.",
    "A prerequisite was not met.",
    "A field type was duplicated.",
    "Permissions error.",
    "Unspecified error.",
    "Flow not added because of full table(s).",
    "Table does not exist",
    "Attempted to add overlapping flow with CHECK_OVERLAP flag set.",
    "Permissions error.",
    "Flow not added because of unsupported idle/hard timeout.",
    "Flow not added because of non-zero idle/hard timeout.",
    "Unsupported or unknown command.",
    "Unsupported or unknown flags.",
    "Unsupported action list - cannot process in the order specified.",
    "Generic hardware error.",
    "A nonexistent table ID was specified in the \"command\" field of struct ofp_flow_mod, when the nxt_flow_mod_table_id extension is enabled.",
    "Attempted to add a flow with an invalid variable length meta-flow field.",
    "Group not added because a group ADD attempted to replace an already-present group.",
    "Group not added because Group specified is invalid.",
    "Switch does not support unequal load sharing with select groups.",
    "The group table is full.",
    "The maximum number of action buckets for a group has been exceeded.",
    "Switch does not support groups that forward to groups.",
    "This group cannot watch the watch_port or watch_group specified.",
    "Group entry would cause a loop.",
    "Group not modified because a group MODIFY attempted to modify a non-existent group.",
    "Group not deleted because another group is forwarding to it.",
    "Unsupported or unknown group type.",
    "Unsupported or unknown command.",
    "Error in bucket.",
    "Error in watch port/group.",
    "Permissions error.",
    "Invalid bucket identifier used in INSERT BUCKET or REMOVE BUCKET command.",
    "Can't insert bucket because a bucket already exist with that bucket-id.",
    "Specified port does not exist.",
    "Specified hardware address does not match the port number.",
    "Specified config is invalid.",
    "Specified advertise is invalid.",
    "Permissions error.",
    "Specified table does not exist.",
    "Specified config is invalid.",
    "Permissions error.",
    "Invalid port (or port does not exist).",
    "Queue does not exist.",
    "Permissions error.",
    "System error retrieving queue details.",
    "Specified flags is invalid.",
    "Specified len is invalid.",
    "Permissions error.",
    "Stale Message: old generation_id.",
    "Controller role change unsupported.",
    "Invalid role.",
    "Unspecified error.",
    "Meter not added because a Meter ADD attempted to replace an existing Meter.",
    "Meter not added because Meter specified is invalid.",
    "Meter not modified because a Meter MODIFY attempted to modify a non-existent Meter.",
    "Unsupported or unknown command.",
    "Flag configuration unsupported.",
    "Rate unsupported.",
    "Burst size unsupported.",
    "Band unsupported.",
    "Band value unsupported.",
    "No more meters available.",
    "The maximum number of properties for a meter has been exceeded.",
    "Specified table does not exist.",
    "Invalid metadata mask.",
    "Permissions error.",
    "Unknown property type.  ",
    "Length problem in property.  ",
    "Unsupported property value.  ",
    "Can't handle this many properties.",
    "A property type was duplicated.",
    "Unknown experimenter id specified.",
    "Unknown exp_type for experimenter id.",
    "Unknown value for experimenter id.",
    "Permissions error.",
    "One mask is invalid.",
    "Requested configuration not supported.",
    "Permissions error.",
    "Unspecified error.",
    "Permissions error.",
    "Bundle ID doesn't exist.",
    "Bundle ID already exists.",
    "Bundle ID is closed.",
    "Too many bundle IDs.",
    "Unsupported of unknown message control type.",
    "Unsupported, unknown, or inconsistent flags.",
    "Length problem in included message.",
    "Inconsistent or duplicate XID.",
    "Unsupported message in this bundle.",
    "Unsupported message combination in this bundle.",
    "Cant handle this many messages in bundle.",
    "One message in bundle failed.",
    "Bundle is taking too long.",
    "Bundle is locking the resource.",
    "In an OFPT_BUNDLE_ADD_MESSAGE, the OpenFlow version in the inner and outer messages differ.",
    "Unspecified error.",
    "Monitor not added because a Monitor ADD attempted to replace an existing Monitor.",
    "Monitor not added because Monitor specified is invalid.",
    "Monitor not modified because a Monitor MODIFY attempted to modify a non-existent Monitor.",
    "Unsupported or unknown command.",
    "Flag configuration unsupported.",
    "Specified table does not exist.",
    "Error in output port/group.",
    "The TLV table mod command is not recognized as a valid operation.",
    "The option length is not a valid option size for TLVs.",
    "The field index is out of range for the supported NX_TUN_METADATA<n> match.",
    "The total set of configured options exceeds the maximum supported by the switch.",
    "The controller issued an NXTTMC_ADD command for a field index that is already mapped.",
    "The option TLV that is attempting to be mapped is the same as one assigned to a different field.",
    "Attempted to delete a TLV mapping that is used by any active flow.",
    "This datapath doesn't support NXT_RESUME.",
    "Continuation is stale: Open vSwitch process has been restarted or bridge has been destroyed since continuation was generated, or continuation was not generated by this Open vSwitch instance.",
    "Protocol is not configured on this Open vSwitch instance.",
};

static enum ofperr
ofperr_of14_decode(uint32_t vendor, uint16_t type, uint16_t code)
{
    switch (((uint64_t) vendor << 32) | (uint32_t) (type << 16) | code) {
    case (uint32_t) (0 << 16) | 0:
        return OFPERR_OFPHFC_INCOMPATIBLE;
    case (uint32_t) (0 << 16) | 1:
        return OFPERR_OFPHFC_EPERM;
    case (uint32_t) (1 << 16) | 0:
        return OFPERR_OFPBRC_BAD_VERSION;
    case (uint32_t) (1 << 16) | 1:
        return OFPERR_OFPBRC_BAD_TYPE;
    case (uint32_t) (1 << 16) | 2:
        return OFPERR_OFPBRC_BAD_STAT;
    case (uint32_t) (1 << 16) | 3:
        return OFPERR_OFPBRC_BAD_VENDOR;
    case (uint32_t) (1 << 16) | 4:
        return OFPERR_OFPBRC_BAD_SUBTYPE;
    case (uint32_t) (1 << 16) | 5:
        return OFPERR_OFPBRC_EPERM;
    case (uint32_t) (1 << 16) | 6:
        return OFPERR_OFPBRC_BAD_LEN;
    case (uint32_t) (1 << 16) | 7:
        return OFPERR_OFPBRC_BUFFER_EMPTY;
    case (uint32_t) (1 << 16) | 8:
        return OFPERR_OFPBRC_BUFFER_UNKNOWN;
    case (uint32_t) (1 << 16) | 9:
        return OFPERR_OFPBRC_BAD_TABLE_ID;
    case (uint32_t) (1 << 16) | 10:
        return OFPERR_OFPBRC_IS_SLAVE;
    case (uint32_t) (1 << 16) | 11:
        return OFPERR_OFPBRC_BAD_PORT;
    case (uint32_t) (1 << 16) | 12:
        return OFPERR_OFPBRC_BAD_PACKET;
    case (uint32_t) (1 << 16) | 13:
        return OFPERR_OFPBRC_MULTIPART_BUFFER_OVERFLOW;
    case (0x2320ULL << 32) | (uint32_t) (2 << 16) | 0:
        return OFPERR_NXBRC_NXM_INVALID;
    case (0x2320ULL << 32) | (uint32_t) (3 << 16) | 0:
        return OFPERR_NXBRC_NXM_BAD_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (4 << 16) | 0:
        return OFPERR_NXBRC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (5 << 16) | 0:
        return OFPERR_NXBRC_BAD_REASON;
    case (0x2320ULL << 32) | (uint32_t) (9 << 16) | 0:
        return OFPERR_NXBRC_FM_BAD_EVENT;
    case (0x2320ULL << 32) | (uint32_t) (10 << 16) | 0:
        return OFPERR_NXBRC_UNENCODABLE_ERROR;
    case (uint32_t) (2 << 16) | 0:
        return OFPERR_OFPBAC_BAD_TYPE;
    case (uint32_t) (2 << 16) | 1:
        return OFPERR_OFPBAC_BAD_LEN;
    case (uint32_t) (2 << 16) | 2:
        return OFPERR_OFPBAC_BAD_VENDOR;
    case (uint32_t) (2 << 16) | 3:
        return OFPERR_OFPBAC_BAD_VENDOR_TYPE;
    case (uint32_t) (2 << 16) | 4:
        return OFPERR_OFPBAC_BAD_OUT_PORT;
    case (uint32_t) (2 << 16) | 5:
        return OFPERR_OFPBAC_BAD_ARGUMENT;
    case (uint32_t) (2 << 16) | 6:
        return OFPERR_OFPBAC_EPERM;
    case (uint32_t) (2 << 16) | 7:
        return OFPERR_OFPBAC_TOO_MANY;
    case (uint32_t) (2 << 16) | 8:
        return OFPERR_OFPBAC_BAD_QUEUE;
    case (uint32_t) (2 << 16) | 9:
        return OFPERR_OFPBAC_BAD_OUT_GROUP;
    case (uint32_t) (2 << 16) | 10:
        return OFPERR_OFPBAC_MATCH_INCONSISTENT;
    case (uint32_t) (2 << 16) | 11:
        return OFPERR_OFPBAC_UNSUPPORTED_ORDER;
    case (uint32_t) (2 << 16) | 12:
        return OFPERR_OFPBAC_BAD_TAG;
    case (uint32_t) (2 << 16) | 13:
        return OFPERR_OFPBAC_BAD_SET_TYPE;
    case (uint32_t) (2 << 16) | 14:
        return OFPERR_OFPBAC_BAD_SET_LEN;
    case (uint32_t) (2 << 16) | 15:
        return OFPERR_OFPBAC_BAD_SET_ARGUMENT;
    case (0x4f4e4600ULL << 32) | (uint32_t) (4250 << 16) | 0:
        return OFPERR_OFPBAC_BAD_SET_MASK;
    case (0x2320ULL << 32) | (uint32_t) (11 << 16) | 0:
        return OFPERR_NXBAC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (15 << 16) | 0:
        return OFPERR_NXBAC_BAD_CONJUNCTION;
    case (0x2320ULL << 32) | (uint32_t) (39 << 16) | 0:
        return OFPERR_NXBAC_BAD_HEADER_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (40 << 16) | 0:
        return OFPERR_NXBAC_UNKNOWN_ED_PROP;
    case (0x2320ULL << 32) | (uint32_t) (41 << 16) | 0:
        return OFPERR_NXBAC_BAD_ED_PROP;
    case (uint32_t) (3 << 16) | 0:
        return OFPERR_OFPBIC_UNKNOWN_INST;
    case (uint32_t) (3 << 16) | 1:
        return OFPERR_OFPBIC_UNSUP_INST;
    case (uint32_t) (3 << 16) | 2:
        return OFPERR_OFPBIC_BAD_TABLE_ID;
    case (uint32_t) (3 << 16) | 3:
        return OFPERR_OFPBIC_UNSUP_METADATA;
    case (uint32_t) (3 << 16) | 4:
        return OFPERR_OFPBIC_UNSUP_METADATA_MASK;
    case (uint32_t) (3 << 16) | 5:
        return OFPERR_OFPBIC_BAD_EXPERIMENTER;
    case (uint32_t) (3 << 16) | 6:
        return OFPERR_OFPBIC_BAD_EXP_TYPE;
    case (uint32_t) (3 << 16) | 7:
        return OFPERR_OFPBIC_BAD_LEN;
    case (uint32_t) (3 << 16) | 8:
        return OFPERR_OFPBIC_EPERM;
    case (uint32_t) (3 << 16) | 9:
        return OFPERR_OFPBIC_DUP_INST;
    case (uint32_t) (4 << 16) | 0:
        return OFPERR_OFPBMC_BAD_TYPE;
    case (uint32_t) (4 << 16) | 1:
        return OFPERR_OFPBMC_BAD_LEN;
    case (uint32_t) (4 << 16) | 2:
        return OFPERR_OFPBMC_BAD_TAG;
    case (uint32_t) (4 << 16) | 3:
        return OFPERR_OFPBMC_BAD_DL_ADDR_MASK;
    case (uint32_t) (4 << 16) | 4:
        return OFPERR_OFPBMC_BAD_NW_ADDR_MASK;
    case (uint32_t) (4 << 16) | 5:
        return OFPERR_OFPBMC_BAD_WILDCARDS;
    case (uint32_t) (4 << 16) | 6:
        return OFPERR_OFPBMC_BAD_FIELD;
    case (uint32_t) (4 << 16) | 7:
        return OFPERR_OFPBMC_BAD_VALUE;
    case (uint32_t) (4 << 16) | 8:
        return OFPERR_OFPBMC_BAD_MASK;
    case (uint32_t) (4 << 16) | 9:
        return OFPERR_OFPBMC_BAD_PREREQ;
    case (uint32_t) (4 << 16) | 10:
        return OFPERR_OFPBMC_DUP_FIELD;
    case (uint32_t) (4 << 16) | 11:
        return OFPERR_OFPBMC_EPERM;
    case (uint32_t) (5 << 16) | 0:
        return OFPERR_OFPFMFC_UNKNOWN;
    case (uint32_t) (5 << 16) | 1:
        return OFPERR_OFPFMFC_TABLE_FULL;
    case (uint32_t) (5 << 16) | 2:
        return OFPERR_OFPFMFC_BAD_TABLE_ID;
    case (uint32_t) (5 << 16) | 3:
        return OFPERR_OFPFMFC_OVERLAP;
    case (uint32_t) (5 << 16) | 4:
        return OFPERR_OFPFMFC_EPERM;
    case (uint32_t) (5 << 16) | 5:
        return OFPERR_OFPFMFC_BAD_TIMEOUT;
    case (uint32_t) (5 << 16) | 6:
        return OFPERR_OFPFMFC_BAD_COMMAND;
    case (uint32_t) (5 << 16) | 7:
        return OFPERR_OFPFMFC_BAD_FLAGS;
    case (0x2320ULL << 32) | (uint32_t) (12 << 16) | 0:
        return OFPERR_NXFMFC_HARDWARE;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 0:
        return OFPERR_NXFMFC_BAD_TABLE_ID;
    case (0x2320ULL << 32) | (uint32_t) (37 << 16) | 0:
        return OFPERR_NXFMFC_INVALID_TLV_FIELD;
    case (uint32_t) (6 << 16) | 0:
        return OFPERR_OFPGMFC_GROUP_EXISTS;
    case (uint32_t) (6 << 16) | 1:
        return OFPERR_OFPGMFC_INVALID_GROUP;
    case (uint32_t) (6 << 16) | 2:
        return OFPERR_OFPGMFC_WEIGHT_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 3:
        return OFPERR_OFPGMFC_OUT_OF_GROUPS;
    case (uint32_t) (6 << 16) | 4:
        return OFPERR_OFPGMFC_OUT_OF_BUCKETS;
    case (uint32_t) (6 << 16) | 5:
        return OFPERR_OFPGMFC_CHAINING_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 6:
        return OFPERR_OFPGMFC_WATCH_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 7:
        return OFPERR_OFPGMFC_LOOP;
    case (uint32_t) (6 << 16) | 8:
        return OFPERR_OFPGMFC_UNKNOWN_GROUP;
    case (uint32_t) (6 << 16) | 9:
        return OFPERR_OFPGMFC_CHAINED_GROUP;
    case (uint32_t) (6 << 16) | 10:
        return OFPERR_OFPGMFC_BAD_TYPE;
    case (uint32_t) (6 << 16) | 11:
        return OFPERR_OFPGMFC_BAD_COMMAND;
    case (uint32_t) (6 << 16) | 12:
        return OFPERR_OFPGMFC_BAD_BUCKET;
    case (uint32_t) (6 << 16) | 13:
        return OFPERR_OFPGMFC_BAD_WATCH;
    case (uint32_t) (6 << 16) | 14:
        return OFPERR_OFPGMFC_EPERM;
    case (uint32_t) (7 << 16) | 0:
        return OFPERR_OFPPMFC_BAD_PORT;
    case (uint32_t) (7 << 16) | 1:
        return OFPERR_OFPPMFC_BAD_HW_ADDR;
    case (uint32_t) (7 << 16) | 2:
        return OFPERR_OFPPMFC_BAD_CONFIG;
    case (uint32_t) (7 << 16) | 3:
        return OFPERR_OFPPMFC_BAD_ADVERTISE;
    case (uint32_t) (7 << 16) | 4:
        return OFPERR_OFPPMFC_EPERM;
    case (uint32_t) (8 << 16) | 0:
        return OFPERR_OFPTMFC_BAD_TABLE;
    case (uint32_t) (8 << 16) | 1:
        return OFPERR_OFPTMFC_BAD_CONFIG;
    case (uint32_t) (8 << 16) | 2:
        return OFPERR_OFPTMFC_EPERM;
    case (uint32_t) (9 << 16) | 0:
        return OFPERR_OFPQOFC_BAD_PORT;
    case (uint32_t) (9 << 16) | 1:
        return OFPERR_OFPQOFC_BAD_QUEUE;
    case (uint32_t) (9 << 16) | 2:
        return OFPERR_OFPQOFC_EPERM;
    case (0x2320ULL << 32) | (uint32_t) (23 << 16) | 0:
        return OFPERR_NXQOFC_QUEUE_ERROR;
    case (uint32_t) (10 << 16) | 0:
        return OFPERR_OFPSCFC_BAD_FLAGS;
    case (uint32_t) (10 << 16) | 1:
        return OFPERR_OFPSCFC_BAD_LEN;
    case (uint32_t) (10 << 16) | 2:
        return OFPERR_OFPSCFC_EPERM;
    case (uint32_t) (11 << 16) | 0:
        return OFPERR_OFPRRFC_STALE;
    case (uint32_t) (11 << 16) | 1:
        return OFPERR_OFPRRFC_UNSUP;
    case (uint32_t) (11 << 16) | 2:
        return OFPERR_OFPRRFC_BAD_ROLE;
    case (uint32_t) (12 << 16) | 0:
        return OFPERR_OFPMMFC_UNKNOWN;
    case (uint32_t) (12 << 16) | 1:
        return OFPERR_OFPMMFC_METER_EXISTS;
    case (uint32_t) (12 << 16) | 2:
        return OFPERR_OFPMMFC_INVALID_METER;
    case (uint32_t) (12 << 16) | 3:
        return OFPERR_OFPMMFC_UNKNOWN_METER;
    case (uint32_t) (12 << 16) | 4:
        return OFPERR_OFPMMFC_BAD_COMMAND;
    case (uint32_t) (12 << 16) | 5:
        return OFPERR_OFPMMFC_BAD_FLAGS;
    case (uint32_t) (12 << 16) | 6:
        return OFPERR_OFPMMFC_BAD_RATE;
    case (uint32_t) (12 << 16) | 7:
        return OFPERR_OFPMMFC_BAD_BURST;
    case (uint32_t) (12 << 16) | 8:
        return OFPERR_OFPMMFC_BAD_BAND;
    case (uint32_t) (12 << 16) | 9:
        return OFPERR_OFPMMFC_BAD_BAND_VALUE;
    case (uint32_t) (12 << 16) | 10:
        return OFPERR_OFPMMFC_OUT_OF_METERS;
    case (uint32_t) (12 << 16) | 11:
        return OFPERR_OFPMMFC_OUT_OF_BANDS;
    case (uint32_t) (13 << 16) | 0:
        return OFPERR_OFPTFFC_BAD_TABLE;
    case (uint32_t) (13 << 16) | 1:
        return OFPERR_OFPTFFC_BAD_METADATA;
    case (uint32_t) (13 << 16) | 5:
        return OFPERR_OFPTFFC_EPERM;
    case (uint32_t) (14 << 16) | 0:
        return OFPERR_OFPBPC_BAD_TYPE;
    case (uint32_t) (14 << 16) | 1:
        return OFPERR_OFPBPC_BAD_LEN;
    case (uint32_t) (14 << 16) | 2:
        return OFPERR_OFPBPC_BAD_VALUE;
    case (uint32_t) (14 << 16) | 3:
        return OFPERR_OFPBPC_TOO_MANY;
    case (uint32_t) (14 << 16) | 4:
        return OFPERR_OFPBPC_DUP_TYPE;
    case (uint32_t) (14 << 16) | 5:
        return OFPERR_OFPBPC_BAD_EXPERIMENTER;
    case (uint32_t) (14 << 16) | 6:
        return OFPERR_OFPBPC_BAD_EXP_TYPE;
    case (uint32_t) (14 << 16) | 7:
        return OFPERR_OFPBPC_BAD_EXP_VALUE;
    case (uint32_t) (14 << 16) | 8:
        return OFPERR_OFPBPC_EPERM;
    case (uint32_t) (15 << 16) | 0:
        return OFPERR_OFPACFC_INVALID;
    case (uint32_t) (15 << 16) | 1:
        return OFPERR_OFPACFC_UNSUPPORTED;
    case (uint32_t) (15 << 16) | 2:
        return OFPERR_OFPACFC_EPERM;
    case (uint32_t) (17 << 16) | 0:
        return OFPERR_OFPBFC_UNKNOWN;
    case (uint32_t) (17 << 16) | 1:
        return OFPERR_OFPBFC_EPERM;
    case (uint32_t) (17 << 16) | 2:
        return OFPERR_OFPBFC_BAD_ID;
    case (uint32_t) (17 << 16) | 3:
        return OFPERR_OFPBFC_BUNDLE_EXIST;
    case (uint32_t) (17 << 16) | 4:
        return OFPERR_OFPBFC_BUNDLE_CLOSED;
    case (uint32_t) (17 << 16) | 5:
        return OFPERR_OFPBFC_OUT_OF_BUNDLES;
    case (uint32_t) (17 << 16) | 6:
        return OFPERR_OFPBFC_BAD_TYPE;
    case (uint32_t) (17 << 16) | 7:
        return OFPERR_OFPBFC_BAD_FLAGS;
    case (uint32_t) (17 << 16) | 8:
        return OFPERR_OFPBFC_MSG_BAD_LEN;
    case (uint32_t) (17 << 16) | 9:
        return OFPERR_OFPBFC_MSG_BAD_XID;
    case (uint32_t) (17 << 16) | 10:
        return OFPERR_OFPBFC_MSG_UNSUP;
    case (uint32_t) (17 << 16) | 11:
        return OFPERR_OFPBFC_MSG_CONFLICT;
    case (uint32_t) (17 << 16) | 12:
        return OFPERR_OFPBFC_MSG_TOO_MANY;
    case (uint32_t) (17 << 16) | 13:
        return OFPERR_OFPBFC_MSG_FAILED;
    case (uint32_t) (17 << 16) | 14:
        return OFPERR_OFPBFC_TIMEOUT;
    case (uint32_t) (17 << 16) | 15:
        return OFPERR_OFPBFC_BUNDLE_IN_PROGRESS;
    case (0x2320ULL << 32) | (uint32_t) (22 << 16) | 0:
        return OFPERR_OFPBFC_BAD_VERSION;
    case (uint32_t) (16 << 16) | 0:
        return OFPERR_OFPMOFC_UNKNOWN;
    case (uint32_t) (16 << 16) | 1:
        return OFPERR_OFPMOFC_MONITOR_EXISTS;
    case (uint32_t) (16 << 16) | 2:
        return OFPERR_OFPMOFC_INVALID_MONITOR;
    case (uint32_t) (16 << 16) | 3:
        return OFPERR_OFPMOFC_UNKNOWN_MONITOR;
    case (uint32_t) (16 << 16) | 4:
        return OFPERR_OFPMOFC_BAD_COMMAND;
    case (uint32_t) (16 << 16) | 5:
        return OFPERR_OFPMOFC_BAD_FLAGS;
    case (uint32_t) (16 << 16) | 6:
        return OFPERR_OFPMOFC_BAD_TABLE_ID;
    case (uint32_t) (16 << 16) | 7:
        return OFPERR_OFPMOFC_BAD_OUT;
    case (0x2320ULL << 32) | (uint32_t) (16 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_COMMAND;
    case (0x2320ULL << 32) | (uint32_t) (17 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_OPT_LEN;
    case (0x2320ULL << 32) | (uint32_t) (18 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_FIELD_IDX;
    case (0x2320ULL << 32) | (uint32_t) (19 << 16) | 0:
        return OFPERR_NXTTMFC_TABLE_FULL;
    case (0x2320ULL << 32) | (uint32_t) (20 << 16) | 0:
        return OFPERR_NXTTMFC_ALREADY_MAPPED;
    case (0x2320ULL << 32) | (uint32_t) (21 << 16) | 0:
        return OFPERR_NXTTMFC_DUP_ENTRY;
    case (0x2320ULL << 32) | (uint32_t) (38 << 16) | 0:
        return OFPERR_NXTTMFC_INVALID_TLV_DEL;
    case (0x2320ULL << 32) | (uint32_t) (34 << 16) | 0:
        return OFPERR_NXR_NOT_SUPPORTED;
    case (0x2320ULL << 32) | (uint32_t) (35 << 16) | 0:
        return OFPERR_NXR_STALE;
    case (0x2320ULL << 32) | (uint32_t) (36 << 16) | 0:
        return OFPERR_NXST_NOT_CONFIGURED;
    }

    return 0;
}

static const struct ofperr_domain ofperr_of14 = {
    "OpenFlow 1.4",
    5,
    ofperr_of14_decode,
    {
        {      0x0,  0,   0 }, /* OFPHFC_INCOMPATIBLE */
        {      0x0,  0,   1 }, /* OFPHFC_EPERM */
        {      0x0,  1,   0 }, /* OFPBRC_BAD_VERSION */
        {      0x0,  1,   1 }, /* OFPBRC_BAD_TYPE */
        {      0x0,  1,   2 }, /* OFPBRC_BAD_STAT */
        {      0x0,  1,   3 }, /* OFPBRC_BAD_VENDOR */
        {      0x0,  1,   4 }, /* OFPBRC_BAD_SUBTYPE */
        {      0x0,  1,   5 }, /* OFPBRC_EPERM */
        {      0x0,  1,   6 }, /* OFPBRC_BAD_LEN */
        {      0x0,  1,   7 }, /* OFPBRC_BUFFER_EMPTY */
        {      0x0,  1,   8 }, /* OFPBRC_BUFFER_UNKNOWN */
        {      0x0,  1,   9 }, /* OFPBRC_BAD_TABLE_ID */
        {      0x0,  1,  10 }, /* OFPBRC_IS_SLAVE */
        {      0x0,  1,  11 }, /* OFPBRC_BAD_PORT */
        {      0x0,  1,  12 }, /* OFPBRC_BAD_PACKET */
        {      0x0,  1,  13 }, /* OFPBRC_MULTIPART_BUFFER_OVERFLOW */
        {       -1, -1,  -1 }, /* OFPBRC_PIPELINE_FIELDS_ONLY */
        {   0x2320,  2,   0 }, /* NXBRC_NXM_INVALID */
        {   0x2320,  3,   0 }, /* NXBRC_NXM_BAD_TYPE */
        {   0x2320,  4,   0 }, /* NXBRC_MUST_BE_ZERO */
        {   0x2320,  5,   0 }, /* NXBRC_BAD_REASON */
        {   0x2320,  9,   0 }, /* NXBRC_FM_BAD_EVENT */
        {   0x2320, 10,   0 }, /* NXBRC_UNENCODABLE_ERROR */
        {      0x0,  2,   0 }, /* OFPBAC_BAD_TYPE */
        {      0x0,  2,   1 }, /* OFPBAC_BAD_LEN */
        {      0x0,  2,   2 }, /* OFPBAC_BAD_VENDOR */
        {      0x0,  2,   3 }, /* OFPBAC_BAD_VENDOR_TYPE */
        {      0x0,  2,   4 }, /* OFPBAC_BAD_OUT_PORT */
        {      0x0,  2,   5 }, /* OFPBAC_BAD_ARGUMENT */
        {      0x0,  2,   6 }, /* OFPBAC_EPERM */
        {      0x0,  2,   7 }, /* OFPBAC_TOO_MANY */
        {      0x0,  2,   8 }, /* OFPBAC_BAD_QUEUE */
        {      0x0,  2,   9 }, /* OFPBAC_BAD_OUT_GROUP */
        {      0x0,  2,  10 }, /* OFPBAC_MATCH_INCONSISTENT */
        {      0x0,  2,  11 }, /* OFPBAC_UNSUPPORTED_ORDER */
        {      0x0,  2,  12 }, /* OFPBAC_BAD_TAG */
        {      0x0,  2,  13 }, /* OFPBAC_BAD_SET_TYPE */
        {      0x0,  2,  14 }, /* OFPBAC_BAD_SET_LEN */
        {      0x0,  2,  15 }, /* OFPBAC_BAD_SET_ARGUMENT */
        { 0x4f4e4600, 4250,   0 }, /* OFPBAC_BAD_SET_MASK */
        {   0x2320, 11,   0 }, /* NXBAC_MUST_BE_ZERO */
        {   0x2320, 15,   0 }, /* NXBAC_BAD_CONJUNCTION */
        {   0x2320, 39,   0 }, /* NXBAC_BAD_HEADER_TYPE */
        {   0x2320, 40,   0 }, /* NXBAC_UNKNOWN_ED_PROP */
        {   0x2320, 41,   0 }, /* NXBAC_BAD_ED_PROP */
        {      0x0,  3,   0 }, /* OFPBIC_UNKNOWN_INST */
        {      0x0,  3,   1 }, /* OFPBIC_UNSUP_INST */
        {      0x0,  3,   2 }, /* OFPBIC_BAD_TABLE_ID */
        {      0x0,  3,   3 }, /* OFPBIC_UNSUP_METADATA */
        {      0x0,  3,   4 }, /* OFPBIC_UNSUP_METADATA_MASK */
        {      0x0,  3,   5 }, /* OFPBIC_BAD_EXPERIMENTER */
        {      0x0,  3,   6 }, /* OFPBIC_BAD_EXP_TYPE */
        {      0x0,  3,   7 }, /* OFPBIC_BAD_LEN */
        {      0x0,  3,   8 }, /* OFPBIC_EPERM */
        {      0x0,  3,   9 }, /* OFPBIC_DUP_INST */
        {      0x0,  4,   0 }, /* OFPBMC_BAD_TYPE */
        {      0x0,  4,   1 }, /* OFPBMC_BAD_LEN */
        {      0x0,  4,   2 }, /* OFPBMC_BAD_TAG */
        {      0x0,  4,   3 }, /* OFPBMC_BAD_DL_ADDR_MASK */
        {      0x0,  4,   4 }, /* OFPBMC_BAD_NW_ADDR_MASK */
        {      0x0,  4,   5 }, /* OFPBMC_BAD_WILDCARDS */
        {      0x0,  4,   6 }, /* OFPBMC_BAD_FIELD */
        {      0x0,  4,   7 }, /* OFPBMC_BAD_VALUE */
        {      0x0,  4,   8 }, /* OFPBMC_BAD_MASK */
        {      0x0,  4,   9 }, /* OFPBMC_BAD_PREREQ */
        {      0x0,  4,  10 }, /* OFPBMC_DUP_FIELD */
        {      0x0,  4,  11 }, /* OFPBMC_EPERM */
        {      0x0,  5,   0 }, /* OFPFMFC_UNKNOWN */
        {      0x0,  5,   1 }, /* OFPFMFC_TABLE_FULL */
        {      0x0,  5,   2 }, /* OFPFMFC_BAD_TABLE_ID */
        {      0x0,  5,   3 }, /* OFPFMFC_OVERLAP */
        {      0x0,  5,   4 }, /* OFPFMFC_EPERM */
        {      0x0,  5,   5 }, /* OFPFMFC_BAD_TIMEOUT */
        {       -1, -1,  -1 }, /* OFPFMFC_BAD_EMERG_TIMEOUT */
        {      0x0,  5,   6 }, /* OFPFMFC_BAD_COMMAND */
        {      0x0,  5,   7 }, /* OFPFMFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPFMFC_UNSUPPORTED */
        {   0x2320, 12,   0 }, /* NXFMFC_HARDWARE */
        {   0x2320, 13,   0 }, /* NXFMFC_BAD_TABLE_ID */
        {   0x2320, 37,   0 }, /* NXFMFC_INVALID_TLV_FIELD */
        {      0x0,  6,   0 }, /* OFPGMFC_GROUP_EXISTS */
        {      0x0,  6,   1 }, /* OFPGMFC_INVALID_GROUP */
        {      0x0,  6,   2 }, /* OFPGMFC_WEIGHT_UNSUPPORTED */
        {      0x0,  6,   3 }, /* OFPGMFC_OUT_OF_GROUPS */
        {      0x0,  6,   4 }, /* OFPGMFC_OUT_OF_BUCKETS */
        {      0x0,  6,   5 }, /* OFPGMFC_CHAINING_UNSUPPORTED */
        {      0x0,  6,   6 }, /* OFPGMFC_WATCH_UNSUPPORTED */
        {      0x0,  6,   7 }, /* OFPGMFC_LOOP */
        {      0x0,  6,   8 }, /* OFPGMFC_UNKNOWN_GROUP */
        {      0x0,  6,   9 }, /* OFPGMFC_CHAINED_GROUP */
        {      0x0,  6,  10 }, /* OFPGMFC_BAD_TYPE */
        {      0x0,  6,  11 }, /* OFPGMFC_BAD_COMMAND */
        {      0x0,  6,  12 }, /* OFPGMFC_BAD_BUCKET */
        {      0x0,  6,  13 }, /* OFPGMFC_BAD_WATCH */
        {      0x0,  6,  14 }, /* OFPGMFC_EPERM */
        {       -1, -1,  -1 }, /* OFPGMFC_UNKNOWN_BUCKET */
        {       -1, -1,  -1 }, /* OFPGMFC_BUCKET_EXISTS */
        {      0x0,  7,   0 }, /* OFPPMFC_BAD_PORT */
        {      0x0,  7,   1 }, /* OFPPMFC_BAD_HW_ADDR */
        {      0x0,  7,   2 }, /* OFPPMFC_BAD_CONFIG */
        {      0x0,  7,   3 }, /* OFPPMFC_BAD_ADVERTISE */
        {      0x0,  7,   4 }, /* OFPPMFC_EPERM */
        {      0x0,  8,   0 }, /* OFPTMFC_BAD_TABLE */
        {      0x0,  8,   1 }, /* OFPTMFC_BAD_CONFIG */
        {      0x0,  8,   2 }, /* OFPTMFC_EPERM */
        {      0x0,  9,   0 }, /* OFPQOFC_BAD_PORT */
        {      0x0,  9,   1 }, /* OFPQOFC_BAD_QUEUE */
        {      0x0,  9,   2 }, /* OFPQOFC_EPERM */
        {   0x2320, 23,   0 }, /* NXQOFC_QUEUE_ERROR */
        {      0x0, 10,   0 }, /* OFPSCFC_BAD_FLAGS */
        {      0x0, 10,   1 }, /* OFPSCFC_BAD_LEN */
        {      0x0, 10,   2 }, /* OFPSCFC_EPERM */
        {      0x0, 11,   0 }, /* OFPRRFC_STALE */
        {      0x0, 11,   1 }, /* OFPRRFC_UNSUP */
        {      0x0, 11,   2 }, /* OFPRRFC_BAD_ROLE */
        {      0x0, 12,   0 }, /* OFPMMFC_UNKNOWN */
        {      0x0, 12,   1 }, /* OFPMMFC_METER_EXISTS */
        {      0x0, 12,   2 }, /* OFPMMFC_INVALID_METER */
        {      0x0, 12,   3 }, /* OFPMMFC_UNKNOWN_METER */
        {      0x0, 12,   4 }, /* OFPMMFC_BAD_COMMAND */
        {      0x0, 12,   5 }, /* OFPMMFC_BAD_FLAGS */
        {      0x0, 12,   6 }, /* OFPMMFC_BAD_RATE */
        {      0x0, 12,   7 }, /* OFPMMFC_BAD_BURST */
        {      0x0, 12,   8 }, /* OFPMMFC_BAD_BAND */
        {      0x0, 12,   9 }, /* OFPMMFC_BAD_BAND_VALUE */
        {      0x0, 12,  10 }, /* OFPMMFC_OUT_OF_METERS */
        {      0x0, 12,  11 }, /* OFPMMFC_OUT_OF_BANDS */
        {      0x0, 13,   0 }, /* OFPTFFC_BAD_TABLE */
        {      0x0, 13,   1 }, /* OFPTFFC_BAD_METADATA */
        {      0x0, 13,   5 }, /* OFPTFFC_EPERM */
        {      0x0, 14,   0 }, /* OFPBPC_BAD_TYPE */
        {      0x0, 14,   1 }, /* OFPBPC_BAD_LEN */
        {      0x0, 14,   2 }, /* OFPBPC_BAD_VALUE */
        {      0x0, 14,   3 }, /* OFPBPC_TOO_MANY */
        {      0x0, 14,   4 }, /* OFPBPC_DUP_TYPE */
        {      0x0, 14,   5 }, /* OFPBPC_BAD_EXPERIMENTER */
        {      0x0, 14,   6 }, /* OFPBPC_BAD_EXP_TYPE */
        {      0x0, 14,   7 }, /* OFPBPC_BAD_EXP_VALUE */
        {      0x0, 14,   8 }, /* OFPBPC_EPERM */
        {      0x0, 15,   0 }, /* OFPACFC_INVALID */
        {      0x0, 15,   1 }, /* OFPACFC_UNSUPPORTED */
        {      0x0, 15,   2 }, /* OFPACFC_EPERM */
        {      0x0, 17,   0 }, /* OFPBFC_UNKNOWN */
        {      0x0, 17,   1 }, /* OFPBFC_EPERM */
        {      0x0, 17,   2 }, /* OFPBFC_BAD_ID */
        {      0x0, 17,   3 }, /* OFPBFC_BUNDLE_EXIST */
        {      0x0, 17,   4 }, /* OFPBFC_BUNDLE_CLOSED */
        {      0x0, 17,   5 }, /* OFPBFC_OUT_OF_BUNDLES */
        {      0x0, 17,   6 }, /* OFPBFC_BAD_TYPE */
        {      0x0, 17,   7 }, /* OFPBFC_BAD_FLAGS */
        {      0x0, 17,   8 }, /* OFPBFC_MSG_BAD_LEN */
        {      0x0, 17,   9 }, /* OFPBFC_MSG_BAD_XID */
        {      0x0, 17,  10 }, /* OFPBFC_MSG_UNSUP */
        {      0x0, 17,  11 }, /* OFPBFC_MSG_CONFLICT */
        {      0x0, 17,  12 }, /* OFPBFC_MSG_TOO_MANY */
        {      0x0, 17,  13 }, /* OFPBFC_MSG_FAILED */
        {      0x0, 17,  14 }, /* OFPBFC_TIMEOUT */
        {      0x0, 17,  15 }, /* OFPBFC_BUNDLE_IN_PROGRESS */
        {   0x2320, 22,   0 }, /* OFPBFC_BAD_VERSION */
        {      0x0, 16,   0 }, /* OFPMOFC_UNKNOWN */
        {      0x0, 16,   1 }, /* OFPMOFC_MONITOR_EXISTS */
        {      0x0, 16,   2 }, /* OFPMOFC_INVALID_MONITOR */
        {      0x0, 16,   3 }, /* OFPMOFC_UNKNOWN_MONITOR */
        {      0x0, 16,   4 }, /* OFPMOFC_BAD_COMMAND */
        {      0x0, 16,   5 }, /* OFPMOFC_BAD_FLAGS */
        {      0x0, 16,   6 }, /* OFPMOFC_BAD_TABLE_ID */
        {      0x0, 16,   7 }, /* OFPMOFC_BAD_OUT */
        {   0x2320, 16,   0 }, /* NXTTMFC_BAD_COMMAND */
        {   0x2320, 17,   0 }, /* NXTTMFC_BAD_OPT_LEN */
        {   0x2320, 18,   0 }, /* NXTTMFC_BAD_FIELD_IDX */
        {   0x2320, 19,   0 }, /* NXTTMFC_TABLE_FULL */
        {   0x2320, 20,   0 }, /* NXTTMFC_ALREADY_MAPPED */
        {   0x2320, 21,   0 }, /* NXTTMFC_DUP_ENTRY */
        {   0x2320, 38,   0 }, /* NXTTMFC_INVALID_TLV_DEL */
        {   0x2320, 34,   0 }, /* NXR_NOT_SUPPORTED */
        {   0x2320, 35,   0 }, /* NXR_STALE */
        {   0x2320, 36,   0 }, /* NXST_NOT_CONFIGURED */
    },
};

static enum ofperr
ofperr_of15_decode(uint32_t vendor, uint16_t type, uint16_t code)
{
    switch (((uint64_t) vendor << 32) | (uint32_t) (type << 16) | code) {
    case (uint32_t) (0 << 16) | 0:
        return OFPERR_OFPHFC_INCOMPATIBLE;
    case (uint32_t) (0 << 16) | 1:
        return OFPERR_OFPHFC_EPERM;
    case (uint32_t) (1 << 16) | 0:
        return OFPERR_OFPBRC_BAD_VERSION;
    case (uint32_t) (1 << 16) | 1:
        return OFPERR_OFPBRC_BAD_TYPE;
    case (uint32_t) (1 << 16) | 2:
        return OFPERR_OFPBRC_BAD_STAT;
    case (uint32_t) (1 << 16) | 3:
        return OFPERR_OFPBRC_BAD_VENDOR;
    case (uint32_t) (1 << 16) | 4:
        return OFPERR_OFPBRC_BAD_SUBTYPE;
    case (uint32_t) (1 << 16) | 5:
        return OFPERR_OFPBRC_EPERM;
    case (uint32_t) (1 << 16) | 6:
        return OFPERR_OFPBRC_BAD_LEN;
    case (uint32_t) (1 << 16) | 7:
        return OFPERR_OFPBRC_BUFFER_EMPTY;
    case (uint32_t) (1 << 16) | 8:
        return OFPERR_OFPBRC_BUFFER_UNKNOWN;
    case (uint32_t) (1 << 16) | 9:
        return OFPERR_OFPBRC_BAD_TABLE_ID;
    case (uint32_t) (1 << 16) | 10:
        return OFPERR_OFPBRC_IS_SLAVE;
    case (uint32_t) (1 << 16) | 11:
        return OFPERR_OFPBRC_BAD_PORT;
    case (uint32_t) (1 << 16) | 12:
        return OFPERR_OFPBRC_BAD_PACKET;
    case (uint32_t) (1 << 16) | 13:
        return OFPERR_OFPBRC_MULTIPART_BUFFER_OVERFLOW;
    case (uint32_t) (1 << 16) | 17:
        return OFPERR_OFPBRC_PIPELINE_FIELDS_ONLY;
    case (0x2320ULL << 32) | (uint32_t) (2 << 16) | 0:
        return OFPERR_NXBRC_NXM_INVALID;
    case (0x2320ULL << 32) | (uint32_t) (3 << 16) | 0:
        return OFPERR_NXBRC_NXM_BAD_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (4 << 16) | 0:
        return OFPERR_NXBRC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (5 << 16) | 0:
        return OFPERR_NXBRC_BAD_REASON;
    case (0x2320ULL << 32) | (uint32_t) (9 << 16) | 0:
        return OFPERR_NXBRC_FM_BAD_EVENT;
    case (0x2320ULL << 32) | (uint32_t) (10 << 16) | 0:
        return OFPERR_NXBRC_UNENCODABLE_ERROR;
    case (uint32_t) (2 << 16) | 0:
        return OFPERR_OFPBAC_BAD_TYPE;
    case (uint32_t) (2 << 16) | 1:
        return OFPERR_OFPBAC_BAD_LEN;
    case (uint32_t) (2 << 16) | 2:
        return OFPERR_OFPBAC_BAD_VENDOR;
    case (uint32_t) (2 << 16) | 3:
        return OFPERR_OFPBAC_BAD_VENDOR_TYPE;
    case (uint32_t) (2 << 16) | 4:
        return OFPERR_OFPBAC_BAD_OUT_PORT;
    case (uint32_t) (2 << 16) | 5:
        return OFPERR_OFPBAC_BAD_ARGUMENT;
    case (uint32_t) (2 << 16) | 6:
        return OFPERR_OFPBAC_EPERM;
    case (uint32_t) (2 << 16) | 7:
        return OFPERR_OFPBAC_TOO_MANY;
    case (uint32_t) (2 << 16) | 8:
        return OFPERR_OFPBAC_BAD_QUEUE;
    case (uint32_t) (2 << 16) | 9:
        return OFPERR_OFPBAC_BAD_OUT_GROUP;
    case (uint32_t) (2 << 16) | 10:
        return OFPERR_OFPBAC_MATCH_INCONSISTENT;
    case (uint32_t) (2 << 16) | 11:
        return OFPERR_OFPBAC_UNSUPPORTED_ORDER;
    case (uint32_t) (2 << 16) | 12:
        return OFPERR_OFPBAC_BAD_TAG;
    case (uint32_t) (2 << 16) | 13:
        return OFPERR_OFPBAC_BAD_SET_TYPE;
    case (uint32_t) (2 << 16) | 14:
        return OFPERR_OFPBAC_BAD_SET_LEN;
    case (uint32_t) (2 << 16) | 15:
        return OFPERR_OFPBAC_BAD_SET_ARGUMENT;
    case (uint32_t) (2 << 16) | 16:
        return OFPERR_OFPBAC_BAD_SET_MASK;
    case (0x2320ULL << 32) | (uint32_t) (11 << 16) | 0:
        return OFPERR_NXBAC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (15 << 16) | 0:
        return OFPERR_NXBAC_BAD_CONJUNCTION;
    case (0x2320ULL << 32) | (uint32_t) (39 << 16) | 0:
        return OFPERR_NXBAC_BAD_HEADER_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (40 << 16) | 0:
        return OFPERR_NXBAC_UNKNOWN_ED_PROP;
    case (0x2320ULL << 32) | (uint32_t) (41 << 16) | 0:
        return OFPERR_NXBAC_BAD_ED_PROP;
    case (uint32_t) (3 << 16) | 0:
        return OFPERR_OFPBIC_UNKNOWN_INST;
    case (uint32_t) (3 << 16) | 1:
        return OFPERR_OFPBIC_UNSUP_INST;
    case (uint32_t) (3 << 16) | 2:
        return OFPERR_OFPBIC_BAD_TABLE_ID;
    case (uint32_t) (3 << 16) | 3:
        return OFPERR_OFPBIC_UNSUP_METADATA;
    case (uint32_t) (3 << 16) | 4:
        return OFPERR_OFPBIC_UNSUP_METADATA_MASK;
    case (uint32_t) (3 << 16) | 5:
        return OFPERR_OFPBIC_BAD_EXPERIMENTER;
    case (uint32_t) (3 << 16) | 6:
        return OFPERR_OFPBIC_BAD_EXP_TYPE;
    case (uint32_t) (3 << 16) | 7:
        return OFPERR_OFPBIC_BAD_LEN;
    case (uint32_t) (3 << 16) | 8:
        return OFPERR_OFPBIC_EPERM;
    case (uint32_t) (3 << 16) | 9:
        return OFPERR_OFPBIC_DUP_INST;
    case (uint32_t) (4 << 16) | 0:
        return OFPERR_OFPBMC_BAD_TYPE;
    case (uint32_t) (4 << 16) | 1:
        return OFPERR_OFPBMC_BAD_LEN;
    case (uint32_t) (4 << 16) | 2:
        return OFPERR_OFPBMC_BAD_TAG;
    case (uint32_t) (4 << 16) | 3:
        return OFPERR_OFPBMC_BAD_DL_ADDR_MASK;
    case (uint32_t) (4 << 16) | 4:
        return OFPERR_OFPBMC_BAD_NW_ADDR_MASK;
    case (uint32_t) (4 << 16) | 5:
        return OFPERR_OFPBMC_BAD_WILDCARDS;
    case (uint32_t) (4 << 16) | 6:
        return OFPERR_OFPBMC_BAD_FIELD;
    case (uint32_t) (4 << 16) | 7:
        return OFPERR_OFPBMC_BAD_VALUE;
    case (uint32_t) (4 << 16) | 8:
        return OFPERR_OFPBMC_BAD_MASK;
    case (uint32_t) (4 << 16) | 9:
        return OFPERR_OFPBMC_BAD_PREREQ;
    case (uint32_t) (4 << 16) | 10:
        return OFPERR_OFPBMC_DUP_FIELD;
    case (uint32_t) (4 << 16) | 11:
        return OFPERR_OFPBMC_EPERM;
    case (uint32_t) (5 << 16) | 0:
        return OFPERR_OFPFMFC_UNKNOWN;
    case (uint32_t) (5 << 16) | 1:
        return OFPERR_OFPFMFC_TABLE_FULL;
    case (uint32_t) (5 << 16) | 2:
        return OFPERR_OFPFMFC_BAD_TABLE_ID;
    case (uint32_t) (5 << 16) | 3:
        return OFPERR_OFPFMFC_OVERLAP;
    case (uint32_t) (5 << 16) | 4:
        return OFPERR_OFPFMFC_EPERM;
    case (uint32_t) (5 << 16) | 5:
        return OFPERR_OFPFMFC_BAD_TIMEOUT;
    case (uint32_t) (5 << 16) | 6:
        return OFPERR_OFPFMFC_BAD_COMMAND;
    case (uint32_t) (5 << 16) | 7:
        return OFPERR_OFPFMFC_BAD_FLAGS;
    case (0x2320ULL << 32) | (uint32_t) (12 << 16) | 0:
        return OFPERR_NXFMFC_HARDWARE;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 0:
        return OFPERR_NXFMFC_BAD_TABLE_ID;
    case (0x2320ULL << 32) | (uint32_t) (37 << 16) | 0:
        return OFPERR_NXFMFC_INVALID_TLV_FIELD;
    case (uint32_t) (6 << 16) | 0:
        return OFPERR_OFPGMFC_GROUP_EXISTS;
    case (uint32_t) (6 << 16) | 1:
        return OFPERR_OFPGMFC_INVALID_GROUP;
    case (uint32_t) (6 << 16) | 2:
        return OFPERR_OFPGMFC_WEIGHT_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 3:
        return OFPERR_OFPGMFC_OUT_OF_GROUPS;
    case (uint32_t) (6 << 16) | 4:
        return OFPERR_OFPGMFC_OUT_OF_BUCKETS;
    case (uint32_t) (6 << 16) | 5:
        return OFPERR_OFPGMFC_CHAINING_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 6:
        return OFPERR_OFPGMFC_WATCH_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 7:
        return OFPERR_OFPGMFC_LOOP;
    case (uint32_t) (6 << 16) | 8:
        return OFPERR_OFPGMFC_UNKNOWN_GROUP;
    case (uint32_t) (6 << 16) | 9:
        return OFPERR_OFPGMFC_CHAINED_GROUP;
    case (uint32_t) (6 << 16) | 10:
        return OFPERR_OFPGMFC_BAD_TYPE;
    case (uint32_t) (6 << 16) | 11:
        return OFPERR_OFPGMFC_BAD_COMMAND;
    case (uint32_t) (6 << 16) | 12:
        return OFPERR_OFPGMFC_BAD_BUCKET;
    case (uint32_t) (6 << 16) | 13:
        return OFPERR_OFPGMFC_BAD_WATCH;
    case (uint32_t) (6 << 16) | 14:
        return OFPERR_OFPGMFC_EPERM;
    case (uint32_t) (6 << 16) | 15:
        return OFPERR_OFPGMFC_UNKNOWN_BUCKET;
    case (uint32_t) (6 << 16) | 16:
        return OFPERR_OFPGMFC_BUCKET_EXISTS;
    case (uint32_t) (7 << 16) | 0:
        return OFPERR_OFPPMFC_BAD_PORT;
    case (uint32_t) (7 << 16) | 1:
        return OFPERR_OFPPMFC_BAD_HW_ADDR;
    case (uint32_t) (7 << 16) | 2:
        return OFPERR_OFPPMFC_BAD_CONFIG;
    case (uint32_t) (7 << 16) | 3:
        return OFPERR_OFPPMFC_BAD_ADVERTISE;
    case (uint32_t) (7 << 16) | 4:
        return OFPERR_OFPPMFC_EPERM;
    case (uint32_t) (8 << 16) | 0:
        return OFPERR_OFPTMFC_BAD_TABLE;
    case (uint32_t) (8 << 16) | 1:
        return OFPERR_OFPTMFC_BAD_CONFIG;
    case (uint32_t) (8 << 16) | 2:
        return OFPERR_OFPTMFC_EPERM;
    case (uint32_t) (9 << 16) | 0:
        return OFPERR_OFPQOFC_BAD_PORT;
    case (uint32_t) (9 << 16) | 1:
        return OFPERR_OFPQOFC_BAD_QUEUE;
    case (uint32_t) (9 << 16) | 2:
        return OFPERR_OFPQOFC_EPERM;
    case (0x2320ULL << 32) | (uint32_t) (23 << 16) | 0:
        return OFPERR_NXQOFC_QUEUE_ERROR;
    case (uint32_t) (10 << 16) | 0:
        return OFPERR_OFPSCFC_BAD_FLAGS;
    case (uint32_t) (10 << 16) | 1:
        return OFPERR_OFPSCFC_BAD_LEN;
    case (uint32_t) (10 << 16) | 2:
        return OFPERR_OFPSCFC_EPERM;
    case (uint32_t) (11 << 16) | 0:
        return OFPERR_OFPRRFC_STALE;
    case (uint32_t) (11 << 16) | 1:
        return OFPERR_OFPRRFC_UNSUP;
    case (uint32_t) (11 << 16) | 2:
        return OFPERR_OFPRRFC_BAD_ROLE;
    case (uint32_t) (12 << 16) | 0:
        return OFPERR_OFPMMFC_UNKNOWN;
    case (uint32_t) (12 << 16) | 1:
        return OFPERR_OFPMMFC_METER_EXISTS;
    case (uint32_t) (12 << 16) | 2:
        return OFPERR_OFPMMFC_INVALID_METER;
    case (uint32_t) (12 << 16) | 3:
        return OFPERR_OFPMMFC_UNKNOWN_METER;
    case (uint32_t) (12 << 16) | 4:
        return OFPERR_OFPMMFC_BAD_COMMAND;
    case (uint32_t) (12 << 16) | 5:
        return OFPERR_OFPMMFC_BAD_FLAGS;
    case (uint32_t) (12 << 16) | 6:
        return OFPERR_OFPMMFC_BAD_RATE;
    case (uint32_t) (12 << 16) | 7:
        return OFPERR_OFPMMFC_BAD_BURST;
    case (uint32_t) (12 << 16) | 8:
        return OFPERR_OFPMMFC_BAD_BAND;
    case (uint32_t) (12 << 16) | 9:
        return OFPERR_OFPMMFC_BAD_BAND_VALUE;
    case (uint32_t) (12 << 16) | 10:
        return OFPERR_OFPMMFC_OUT_OF_METERS;
    case (uint32_t) (12 << 16) | 11:
        return OFPERR_OFPMMFC_OUT_OF_BANDS;
    case (uint32_t) (13 << 16) | 0:
        return OFPERR_OFPTFFC_BAD_TABLE;
    case (uint32_t) (13 << 16) | 1:
        return OFPERR_OFPTFFC_BAD_METADATA;
    case (uint32_t) (13 << 16) | 5:
        return OFPERR_OFPTFFC_EPERM;
    case (uint32_t) (14 << 16) | 0:
        return OFPERR_OFPBPC_BAD_TYPE;
    case (uint32_t) (14 << 16) | 1:
        return OFPERR_OFPBPC_BAD_LEN;
    case (uint32_t) (14 << 16) | 2:
        return OFPERR_OFPBPC_BAD_VALUE;
    case (uint32_t) (14 << 16) | 3:
        return OFPERR_OFPBPC_TOO_MANY;
    case (uint32_t) (14 << 16) | 4:
        return OFPERR_OFPBPC_DUP_TYPE;
    case (uint32_t) (14 << 16) | 5:
        return OFPERR_OFPBPC_BAD_EXPERIMENTER;
    case (uint32_t) (14 << 16) | 6:
        return OFPERR_OFPBPC_BAD_EXP_TYPE;
    case (uint32_t) (14 << 16) | 7:
        return OFPERR_OFPBPC_BAD_EXP_VALUE;
    case (uint32_t) (14 << 16) | 8:
        return OFPERR_OFPBPC_EPERM;
    case (uint32_t) (15 << 16) | 0:
        return OFPERR_OFPACFC_INVALID;
    case (uint32_t) (15 << 16) | 1:
        return OFPERR_OFPACFC_UNSUPPORTED;
    case (uint32_t) (15 << 16) | 2:
        return OFPERR_OFPACFC_EPERM;
    case (uint32_t) (17 << 16) | 0:
        return OFPERR_OFPBFC_UNKNOWN;
    case (uint32_t) (17 << 16) | 1:
        return OFPERR_OFPBFC_EPERM;
    case (uint32_t) (17 << 16) | 2:
        return OFPERR_OFPBFC_BAD_ID;
    case (uint32_t) (17 << 16) | 3:
        return OFPERR_OFPBFC_BUNDLE_EXIST;
    case (uint32_t) (17 << 16) | 4:
        return OFPERR_OFPBFC_BUNDLE_CLOSED;
    case (uint32_t) (17 << 16) | 5:
        return OFPERR_OFPBFC_OUT_OF_BUNDLES;
    case (uint32_t) (17 << 16) | 6:
        return OFPERR_OFPBFC_BAD_TYPE;
    case (uint32_t) (17 << 16) | 7:
        return OFPERR_OFPBFC_BAD_FLAGS;
    case (uint32_t) (17 << 16) | 8:
        return OFPERR_OFPBFC_MSG_BAD_LEN;
    case (uint32_t) (17 << 16) | 9:
        return OFPERR_OFPBFC_MSG_BAD_XID;
    case (uint32_t) (17 << 16) | 10:
        return OFPERR_OFPBFC_MSG_UNSUP;
    case (uint32_t) (17 << 16) | 11:
        return OFPERR_OFPBFC_MSG_CONFLICT;
    case (uint32_t) (17 << 16) | 12:
        return OFPERR_OFPBFC_MSG_TOO_MANY;
    case (uint32_t) (17 << 16) | 13:
        return OFPERR_OFPBFC_MSG_FAILED;
    case (uint32_t) (17 << 16) | 14:
        return OFPERR_OFPBFC_TIMEOUT;
    case (uint32_t) (17 << 16) | 15:
        return OFPERR_OFPBFC_BUNDLE_IN_PROGRESS;
    case (0x2320ULL << 32) | (uint32_t) (22 << 16) | 0:
        return OFPERR_OFPBFC_BAD_VERSION;
    case (uint32_t) (16 << 16) | 0:
        return OFPERR_OFPMOFC_UNKNOWN;
    case (uint32_t) (16 << 16) | 1:
        return OFPERR_OFPMOFC_MONITOR_EXISTS;
    case (uint32_t) (16 << 16) | 2:
        return OFPERR_OFPMOFC_INVALID_MONITOR;
    case (uint32_t) (16 << 16) | 3:
        return OFPERR_OFPMOFC_UNKNOWN_MONITOR;
    case (uint32_t) (16 << 16) | 4:
        return OFPERR_OFPMOFC_BAD_COMMAND;
    case (uint32_t) (16 << 16) | 5:
        return OFPERR_OFPMOFC_BAD_FLAGS;
    case (uint32_t) (16 << 16) | 6:
        return OFPERR_OFPMOFC_BAD_TABLE_ID;
    case (uint32_t) (16 << 16) | 7:
        return OFPERR_OFPMOFC_BAD_OUT;
    case (0x2320ULL << 32) | (uint32_t) (16 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_COMMAND;
    case (0x2320ULL << 32) | (uint32_t) (17 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_OPT_LEN;
    case (0x2320ULL << 32) | (uint32_t) (18 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_FIELD_IDX;
    case (0x2320ULL << 32) | (uint32_t) (19 << 16) | 0:
        return OFPERR_NXTTMFC_TABLE_FULL;
    case (0x2320ULL << 32) | (uint32_t) (20 << 16) | 0:
        return OFPERR_NXTTMFC_ALREADY_MAPPED;
    case (0x2320ULL << 32) | (uint32_t) (21 << 16) | 0:
        return OFPERR_NXTTMFC_DUP_ENTRY;
    case (0x2320ULL << 32) | (uint32_t) (38 << 16) | 0:
        return OFPERR_NXTTMFC_INVALID_TLV_DEL;
    case (0x2320ULL << 32) | (uint32_t) (34 << 16) | 0:
        return OFPERR_NXR_NOT_SUPPORTED;
    case (0x2320ULL << 32) | (uint32_t) (35 << 16) | 0:
        return OFPERR_NXR_STALE;
    case (0x2320ULL << 32) | (uint32_t) (36 << 16) | 0:
        return OFPERR_NXST_NOT_CONFIGURED;
    }

    return 0;
}

static const struct ofperr_domain ofperr_of15 = {
    "OpenFlow 1.5",
    6,
    ofperr_of15_decode,
    {
        {      0x0,  0,   0 }, /* OFPHFC_INCOMPATIBLE */
        {      0x0,  0,   1 }, /* OFPHFC_EPERM */
        {      0x0,  1,   0 }, /* OFPBRC_BAD_VERSION */
        {      0x0,  1,   1 }, /* OFPBRC_BAD_TYPE */
        {      0x0,  1,   2 }, /* OFPBRC_BAD_STAT */
        {      0x0,  1,   3 }, /* OFPBRC_BAD_VENDOR */
        {      0x0,  1,   4 }, /* OFPBRC_BAD_SUBTYPE */
        {      0x0,  1,   5 }, /* OFPBRC_EPERM */
        {      0x0,  1,   6 }, /* OFPBRC_BAD_LEN */
        {      0x0,  1,   7 }, /* OFPBRC_BUFFER_EMPTY */
        {      0x0,  1,   8 }, /* OFPBRC_BUFFER_UNKNOWN */
        {      0x0,  1,   9 }, /* OFPBRC_BAD_TABLE_ID */
        {      0x0,  1,  10 }, /* OFPBRC_IS_SLAVE */
        {      0x0,  1,  11 }, /* OFPBRC_BAD_PORT */
        {      0x0,  1,  12 }, /* OFPBRC_BAD_PACKET */
        {      0x0,  1,  13 }, /* OFPBRC_MULTIPART_BUFFER_OVERFLOW */
        {      0x0,  1,  17 }, /* OFPBRC_PIPELINE_FIELDS_ONLY */
        {   0x2320,  2,   0 }, /* NXBRC_NXM_INVALID */
        {   0x2320,  3,   0 }, /* NXBRC_NXM_BAD_TYPE */
        {   0x2320,  4,   0 }, /* NXBRC_MUST_BE_ZERO */
        {   0x2320,  5,   0 }, /* NXBRC_BAD_REASON */
        {   0x2320,  9,   0 }, /* NXBRC_FM_BAD_EVENT */
        {   0x2320, 10,   0 }, /* NXBRC_UNENCODABLE_ERROR */
        {      0x0,  2,   0 }, /* OFPBAC_BAD_TYPE */
        {      0x0,  2,   1 }, /* OFPBAC_BAD_LEN */
        {      0x0,  2,   2 }, /* OFPBAC_BAD_VENDOR */
        {      0x0,  2,   3 }, /* OFPBAC_BAD_VENDOR_TYPE */
        {      0x0,  2,   4 }, /* OFPBAC_BAD_OUT_PORT */
        {      0x0,  2,   5 }, /* OFPBAC_BAD_ARGUMENT */
        {      0x0,  2,   6 }, /* OFPBAC_EPERM */
        {      0x0,  2,   7 }, /* OFPBAC_TOO_MANY */
        {      0x0,  2,   8 }, /* OFPBAC_BAD_QUEUE */
        {      0x0,  2,   9 }, /* OFPBAC_BAD_OUT_GROUP */
        {      0x0,  2,  10 }, /* OFPBAC_MATCH_INCONSISTENT */
        {      0x0,  2,  11 }, /* OFPBAC_UNSUPPORTED_ORDER */
        {      0x0,  2,  12 }, /* OFPBAC_BAD_TAG */
        {      0x0,  2,  13 }, /* OFPBAC_BAD_SET_TYPE */
        {      0x0,  2,  14 }, /* OFPBAC_BAD_SET_LEN */
        {      0x0,  2,  15 }, /* OFPBAC_BAD_SET_ARGUMENT */
        {      0x0,  2,  16 }, /* OFPBAC_BAD_SET_MASK */
        {   0x2320, 11,   0 }, /* NXBAC_MUST_BE_ZERO */
        {   0x2320, 15,   0 }, /* NXBAC_BAD_CONJUNCTION */
        {   0x2320, 39,   0 }, /* NXBAC_BAD_HEADER_TYPE */
        {   0x2320, 40,   0 }, /* NXBAC_UNKNOWN_ED_PROP */
        {   0x2320, 41,   0 }, /* NXBAC_BAD_ED_PROP */
        {      0x0,  3,   0 }, /* OFPBIC_UNKNOWN_INST */
        {      0x0,  3,   1 }, /* OFPBIC_UNSUP_INST */
        {      0x0,  3,   2 }, /* OFPBIC_BAD_TABLE_ID */
        {      0x0,  3,   3 }, /* OFPBIC_UNSUP_METADATA */
        {      0x0,  3,   4 }, /* OFPBIC_UNSUP_METADATA_MASK */
        {      0x0,  3,   5 }, /* OFPBIC_BAD_EXPERIMENTER */
        {      0x0,  3,   6 }, /* OFPBIC_BAD_EXP_TYPE */
        {      0x0,  3,   7 }, /* OFPBIC_BAD_LEN */
        {      0x0,  3,   8 }, /* OFPBIC_EPERM */
        {      0x0,  3,   9 }, /* OFPBIC_DUP_INST */
        {      0x0,  4,   0 }, /* OFPBMC_BAD_TYPE */
        {      0x0,  4,   1 }, /* OFPBMC_BAD_LEN */
        {      0x0,  4,   2 }, /* OFPBMC_BAD_TAG */
        {      0x0,  4,   3 }, /* OFPBMC_BAD_DL_ADDR_MASK */
        {      0x0,  4,   4 }, /* OFPBMC_BAD_NW_ADDR_MASK */
        {      0x0,  4,   5 }, /* OFPBMC_BAD_WILDCARDS */
        {      0x0,  4,   6 }, /* OFPBMC_BAD_FIELD */
        {      0x0,  4,   7 }, /* OFPBMC_BAD_VALUE */
        {      0x0,  4,   8 }, /* OFPBMC_BAD_MASK */
        {      0x0,  4,   9 }, /* OFPBMC_BAD_PREREQ */
        {      0x0,  4,  10 }, /* OFPBMC_DUP_FIELD */
        {      0x0,  4,  11 }, /* OFPBMC_EPERM */
        {      0x0,  5,   0 }, /* OFPFMFC_UNKNOWN */
        {      0x0,  5,   1 }, /* OFPFMFC_TABLE_FULL */
        {      0x0,  5,   2 }, /* OFPFMFC_BAD_TABLE_ID */
        {      0x0,  5,   3 }, /* OFPFMFC_OVERLAP */
        {      0x0,  5,   4 }, /* OFPFMFC_EPERM */
        {      0x0,  5,   5 }, /* OFPFMFC_BAD_TIMEOUT */
        {       -1, -1,  -1 }, /* OFPFMFC_BAD_EMERG_TIMEOUT */
        {      0x0,  5,   6 }, /* OFPFMFC_BAD_COMMAND */
        {      0x0,  5,   7 }, /* OFPFMFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPFMFC_UNSUPPORTED */
        {   0x2320, 12,   0 }, /* NXFMFC_HARDWARE */
        {   0x2320, 13,   0 }, /* NXFMFC_BAD_TABLE_ID */
        {   0x2320, 37,   0 }, /* NXFMFC_INVALID_TLV_FIELD */
        {      0x0,  6,   0 }, /* OFPGMFC_GROUP_EXISTS */
        {      0x0,  6,   1 }, /* OFPGMFC_INVALID_GROUP */
        {      0x0,  6,   2 }, /* OFPGMFC_WEIGHT_UNSUPPORTED */
        {      0x0,  6,   3 }, /* OFPGMFC_OUT_OF_GROUPS */
        {      0x0,  6,   4 }, /* OFPGMFC_OUT_OF_BUCKETS */
        {      0x0,  6,   5 }, /* OFPGMFC_CHAINING_UNSUPPORTED */
        {      0x0,  6,   6 }, /* OFPGMFC_WATCH_UNSUPPORTED */
        {      0x0,  6,   7 }, /* OFPGMFC_LOOP */
        {      0x0,  6,   8 }, /* OFPGMFC_UNKNOWN_GROUP */
        {      0x0,  6,   9 }, /* OFPGMFC_CHAINED_GROUP */
        {      0x0,  6,  10 }, /* OFPGMFC_BAD_TYPE */
        {      0x0,  6,  11 }, /* OFPGMFC_BAD_COMMAND */
        {      0x0,  6,  12 }, /* OFPGMFC_BAD_BUCKET */
        {      0x0,  6,  13 }, /* OFPGMFC_BAD_WATCH */
        {      0x0,  6,  14 }, /* OFPGMFC_EPERM */
        {      0x0,  6,  15 }, /* OFPGMFC_UNKNOWN_BUCKET */
        {      0x0,  6,  16 }, /* OFPGMFC_BUCKET_EXISTS */
        {      0x0,  7,   0 }, /* OFPPMFC_BAD_PORT */
        {      0x0,  7,   1 }, /* OFPPMFC_BAD_HW_ADDR */
        {      0x0,  7,   2 }, /* OFPPMFC_BAD_CONFIG */
        {      0x0,  7,   3 }, /* OFPPMFC_BAD_ADVERTISE */
        {      0x0,  7,   4 }, /* OFPPMFC_EPERM */
        {      0x0,  8,   0 }, /* OFPTMFC_BAD_TABLE */
        {      0x0,  8,   1 }, /* OFPTMFC_BAD_CONFIG */
        {      0x0,  8,   2 }, /* OFPTMFC_EPERM */
        {      0x0,  9,   0 }, /* OFPQOFC_BAD_PORT */
        {      0x0,  9,   1 }, /* OFPQOFC_BAD_QUEUE */
        {      0x0,  9,   2 }, /* OFPQOFC_EPERM */
        {   0x2320, 23,   0 }, /* NXQOFC_QUEUE_ERROR */
        {      0x0, 10,   0 }, /* OFPSCFC_BAD_FLAGS */
        {      0x0, 10,   1 }, /* OFPSCFC_BAD_LEN */
        {      0x0, 10,   2 }, /* OFPSCFC_EPERM */
        {      0x0, 11,   0 }, /* OFPRRFC_STALE */
        {      0x0, 11,   1 }, /* OFPRRFC_UNSUP */
        {      0x0, 11,   2 }, /* OFPRRFC_BAD_ROLE */
        {      0x0, 12,   0 }, /* OFPMMFC_UNKNOWN */
        {      0x0, 12,   1 }, /* OFPMMFC_METER_EXISTS */
        {      0x0, 12,   2 }, /* OFPMMFC_INVALID_METER */
        {      0x0, 12,   3 }, /* OFPMMFC_UNKNOWN_METER */
        {      0x0, 12,   4 }, /* OFPMMFC_BAD_COMMAND */
        {      0x0, 12,   5 }, /* OFPMMFC_BAD_FLAGS */
        {      0x0, 12,   6 }, /* OFPMMFC_BAD_RATE */
        {      0x0, 12,   7 }, /* OFPMMFC_BAD_BURST */
        {      0x0, 12,   8 }, /* OFPMMFC_BAD_BAND */
        {      0x0, 12,   9 }, /* OFPMMFC_BAD_BAND_VALUE */
        {      0x0, 12,  10 }, /* OFPMMFC_OUT_OF_METERS */
        {      0x0, 12,  11 }, /* OFPMMFC_OUT_OF_BANDS */
        {      0x0, 13,   0 }, /* OFPTFFC_BAD_TABLE */
        {      0x0, 13,   1 }, /* OFPTFFC_BAD_METADATA */
        {      0x0, 13,   5 }, /* OFPTFFC_EPERM */
        {      0x0, 14,   0 }, /* OFPBPC_BAD_TYPE */
        {      0x0, 14,   1 }, /* OFPBPC_BAD_LEN */
        {      0x0, 14,   2 }, /* OFPBPC_BAD_VALUE */
        {      0x0, 14,   3 }, /* OFPBPC_TOO_MANY */
        {      0x0, 14,   4 }, /* OFPBPC_DUP_TYPE */
        {      0x0, 14,   5 }, /* OFPBPC_BAD_EXPERIMENTER */
        {      0x0, 14,   6 }, /* OFPBPC_BAD_EXP_TYPE */
        {      0x0, 14,   7 }, /* OFPBPC_BAD_EXP_VALUE */
        {      0x0, 14,   8 }, /* OFPBPC_EPERM */
        {      0x0, 15,   0 }, /* OFPACFC_INVALID */
        {      0x0, 15,   1 }, /* OFPACFC_UNSUPPORTED */
        {      0x0, 15,   2 }, /* OFPACFC_EPERM */
        {      0x0, 17,   0 }, /* OFPBFC_UNKNOWN */
        {      0x0, 17,   1 }, /* OFPBFC_EPERM */
        {      0x0, 17,   2 }, /* OFPBFC_BAD_ID */
        {      0x0, 17,   3 }, /* OFPBFC_BUNDLE_EXIST */
        {      0x0, 17,   4 }, /* OFPBFC_BUNDLE_CLOSED */
        {      0x0, 17,   5 }, /* OFPBFC_OUT_OF_BUNDLES */
        {      0x0, 17,   6 }, /* OFPBFC_BAD_TYPE */
        {      0x0, 17,   7 }, /* OFPBFC_BAD_FLAGS */
        {      0x0, 17,   8 }, /* OFPBFC_MSG_BAD_LEN */
        {      0x0, 17,   9 }, /* OFPBFC_MSG_BAD_XID */
        {      0x0, 17,  10 }, /* OFPBFC_MSG_UNSUP */
        {      0x0, 17,  11 }, /* OFPBFC_MSG_CONFLICT */
        {      0x0, 17,  12 }, /* OFPBFC_MSG_TOO_MANY */
        {      0x0, 17,  13 }, /* OFPBFC_MSG_FAILED */
        {      0x0, 17,  14 }, /* OFPBFC_TIMEOUT */
        {      0x0, 17,  15 }, /* OFPBFC_BUNDLE_IN_PROGRESS */
        {   0x2320, 22,   0 }, /* OFPBFC_BAD_VERSION */
        {      0x0, 16,   0 }, /* OFPMOFC_UNKNOWN */
        {      0x0, 16,   1 }, /* OFPMOFC_MONITOR_EXISTS */
        {      0x0, 16,   2 }, /* OFPMOFC_INVALID_MONITOR */
        {      0x0, 16,   3 }, /* OFPMOFC_UNKNOWN_MONITOR */
        {      0x0, 16,   4 }, /* OFPMOFC_BAD_COMMAND */
        {      0x0, 16,   5 }, /* OFPMOFC_BAD_FLAGS */
        {      0x0, 16,   6 }, /* OFPMOFC_BAD_TABLE_ID */
        {      0x0, 16,   7 }, /* OFPMOFC_BAD_OUT */
        {   0x2320, 16,   0 }, /* NXTTMFC_BAD_COMMAND */
        {   0x2320, 17,   0 }, /* NXTTMFC_BAD_OPT_LEN */
        {   0x2320, 18,   0 }, /* NXTTMFC_BAD_FIELD_IDX */
        {   0x2320, 19,   0 }, /* NXTTMFC_TABLE_FULL */
        {   0x2320, 20,   0 }, /* NXTTMFC_ALREADY_MAPPED */
        {   0x2320, 21,   0 }, /* NXTTMFC_DUP_ENTRY */
        {   0x2320, 38,   0 }, /* NXTTMFC_INVALID_TLV_DEL */
        {   0x2320, 34,   0 }, /* NXR_NOT_SUPPORTED */
        {   0x2320, 35,   0 }, /* NXR_STALE */
        {   0x2320, 36,   0 }, /* NXST_NOT_CONFIGURED */
    },
};

static enum ofperr
ofperr_of16_decode(uint32_t vendor, uint16_t type, uint16_t code)
{
    switch (((uint64_t) vendor << 32) | (uint32_t) (type << 16) | code) {
    case (uint32_t) (0 << 16) | 0:
        return OFPERR_OFPHFC_INCOMPATIBLE;
    case (uint32_t) (0 << 16) | 1:
        return OFPERR_OFPHFC_EPERM;
    case (uint32_t) (1 << 16) | 0:
        return OFPERR_OFPBRC_BAD_VERSION;
    case (uint32_t) (1 << 16) | 1:
        return OFPERR_OFPBRC_BAD_TYPE;
    case (uint32_t) (1 << 16) | 2:
        return OFPERR_OFPBRC_BAD_STAT;
    case (uint32_t) (1 << 16) | 3:
        return OFPERR_OFPBRC_BAD_VENDOR;
    case (uint32_t) (1 << 16) | 4:
        return OFPERR_OFPBRC_BAD_SUBTYPE;
    case (uint32_t) (1 << 16) | 5:
        return OFPERR_OFPBRC_EPERM;
    case (uint32_t) (1 << 16) | 6:
        return OFPERR_OFPBRC_BAD_LEN;
    case (uint32_t) (1 << 16) | 7:
        return OFPERR_OFPBRC_BUFFER_EMPTY;
    case (uint32_t) (1 << 16) | 8:
        return OFPERR_OFPBRC_BUFFER_UNKNOWN;
    case (uint32_t) (1 << 16) | 9:
        return OFPERR_OFPBRC_BAD_TABLE_ID;
    case (uint32_t) (1 << 16) | 10:
        return OFPERR_OFPBRC_IS_SLAVE;
    case (uint32_t) (1 << 16) | 11:
        return OFPERR_OFPBRC_BAD_PORT;
    case (uint32_t) (1 << 16) | 12:
        return OFPERR_OFPBRC_BAD_PACKET;
    case (uint32_t) (1 << 16) | 13:
        return OFPERR_OFPBRC_MULTIPART_BUFFER_OVERFLOW;
    case (uint32_t) (1 << 16) | 17:
        return OFPERR_OFPBRC_PIPELINE_FIELDS_ONLY;
    case (0x2320ULL << 32) | (uint32_t) (2 << 16) | 0:
        return OFPERR_NXBRC_NXM_INVALID;
    case (0x2320ULL << 32) | (uint32_t) (3 << 16) | 0:
        return OFPERR_NXBRC_NXM_BAD_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (4 << 16) | 0:
        return OFPERR_NXBRC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (5 << 16) | 0:
        return OFPERR_NXBRC_BAD_REASON;
    case (0x2320ULL << 32) | (uint32_t) (9 << 16) | 0:
        return OFPERR_NXBRC_FM_BAD_EVENT;
    case (0x2320ULL << 32) | (uint32_t) (10 << 16) | 0:
        return OFPERR_NXBRC_UNENCODABLE_ERROR;
    case (uint32_t) (2 << 16) | 0:
        return OFPERR_OFPBAC_BAD_TYPE;
    case (uint32_t) (2 << 16) | 1:
        return OFPERR_OFPBAC_BAD_LEN;
    case (uint32_t) (2 << 16) | 2:
        return OFPERR_OFPBAC_BAD_VENDOR;
    case (uint32_t) (2 << 16) | 3:
        return OFPERR_OFPBAC_BAD_VENDOR_TYPE;
    case (uint32_t) (2 << 16) | 4:
        return OFPERR_OFPBAC_BAD_OUT_PORT;
    case (uint32_t) (2 << 16) | 5:
        return OFPERR_OFPBAC_BAD_ARGUMENT;
    case (uint32_t) (2 << 16) | 6:
        return OFPERR_OFPBAC_EPERM;
    case (uint32_t) (2 << 16) | 7:
        return OFPERR_OFPBAC_TOO_MANY;
    case (uint32_t) (2 << 16) | 8:
        return OFPERR_OFPBAC_BAD_QUEUE;
    case (uint32_t) (2 << 16) | 9:
        return OFPERR_OFPBAC_BAD_OUT_GROUP;
    case (uint32_t) (2 << 16) | 10:
        return OFPERR_OFPBAC_MATCH_INCONSISTENT;
    case (uint32_t) (2 << 16) | 11:
        return OFPERR_OFPBAC_UNSUPPORTED_ORDER;
    case (uint32_t) (2 << 16) | 12:
        return OFPERR_OFPBAC_BAD_TAG;
    case (uint32_t) (2 << 16) | 13:
        return OFPERR_OFPBAC_BAD_SET_TYPE;
    case (uint32_t) (2 << 16) | 14:
        return OFPERR_OFPBAC_BAD_SET_LEN;
    case (uint32_t) (2 << 16) | 15:
        return OFPERR_OFPBAC_BAD_SET_ARGUMENT;
    case (uint32_t) (2 << 16) | 16:
        return OFPERR_OFPBAC_BAD_SET_MASK;
    case (0x2320ULL << 32) | (uint32_t) (11 << 16) | 0:
        return OFPERR_NXBAC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (15 << 16) | 0:
        return OFPERR_NXBAC_BAD_CONJUNCTION;
    case (0x2320ULL << 32) | (uint32_t) (39 << 16) | 0:
        return OFPERR_NXBAC_BAD_HEADER_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (40 << 16) | 0:
        return OFPERR_NXBAC_UNKNOWN_ED_PROP;
    case (0x2320ULL << 32) | (uint32_t) (41 << 16) | 0:
        return OFPERR_NXBAC_BAD_ED_PROP;
    case (uint32_t) (3 << 16) | 0:
        return OFPERR_OFPBIC_UNKNOWN_INST;
    case (uint32_t) (3 << 16) | 1:
        return OFPERR_OFPBIC_UNSUP_INST;
    case (uint32_t) (3 << 16) | 2:
        return OFPERR_OFPBIC_BAD_TABLE_ID;
    case (uint32_t) (3 << 16) | 3:
        return OFPERR_OFPBIC_UNSUP_METADATA;
    case (uint32_t) (3 << 16) | 4:
        return OFPERR_OFPBIC_UNSUP_METADATA_MASK;
    case (uint32_t) (3 << 16) | 5:
        return OFPERR_OFPBIC_BAD_EXPERIMENTER;
    case (uint32_t) (3 << 16) | 6:
        return OFPERR_OFPBIC_BAD_EXP_TYPE;
    case (uint32_t) (3 << 16) | 7:
        return OFPERR_OFPBIC_BAD_LEN;
    case (uint32_t) (3 << 16) | 8:
        return OFPERR_OFPBIC_EPERM;
    case (uint32_t) (3 << 16) | 9:
        return OFPERR_OFPBIC_DUP_INST;
    case (uint32_t) (4 << 16) | 0:
        return OFPERR_OFPBMC_BAD_TYPE;
    case (uint32_t) (4 << 16) | 1:
        return OFPERR_OFPBMC_BAD_LEN;
    case (uint32_t) (4 << 16) | 2:
        return OFPERR_OFPBMC_BAD_TAG;
    case (uint32_t) (4 << 16) | 3:
        return OFPERR_OFPBMC_BAD_DL_ADDR_MASK;
    case (uint32_t) (4 << 16) | 4:
        return OFPERR_OFPBMC_BAD_NW_ADDR_MASK;
    case (uint32_t) (4 << 16) | 5:
        return OFPERR_OFPBMC_BAD_WILDCARDS;
    case (uint32_t) (4 << 16) | 6:
        return OFPERR_OFPBMC_BAD_FIELD;
    case (uint32_t) (4 << 16) | 7:
        return OFPERR_OFPBMC_BAD_VALUE;
    case (uint32_t) (4 << 16) | 8:
        return OFPERR_OFPBMC_BAD_MASK;
    case (uint32_t) (4 << 16) | 9:
        return OFPERR_OFPBMC_BAD_PREREQ;
    case (uint32_t) (4 << 16) | 10:
        return OFPERR_OFPBMC_DUP_FIELD;
    case (uint32_t) (4 << 16) | 11:
        return OFPERR_OFPBMC_EPERM;
    case (uint32_t) (5 << 16) | 0:
        return OFPERR_OFPFMFC_UNKNOWN;
    case (uint32_t) (5 << 16) | 1:
        return OFPERR_OFPFMFC_TABLE_FULL;
    case (uint32_t) (5 << 16) | 2:
        return OFPERR_OFPFMFC_BAD_TABLE_ID;
    case (uint32_t) (5 << 16) | 3:
        return OFPERR_OFPFMFC_OVERLAP;
    case (uint32_t) (5 << 16) | 4:
        return OFPERR_OFPFMFC_EPERM;
    case (uint32_t) (5 << 16) | 5:
        return OFPERR_OFPFMFC_BAD_TIMEOUT;
    case (uint32_t) (5 << 16) | 6:
        return OFPERR_OFPFMFC_BAD_COMMAND;
    case (uint32_t) (5 << 16) | 7:
        return OFPERR_OFPFMFC_BAD_FLAGS;
    case (0x2320ULL << 32) | (uint32_t) (12 << 16) | 0:
        return OFPERR_NXFMFC_HARDWARE;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 0:
        return OFPERR_NXFMFC_BAD_TABLE_ID;
    case (0x2320ULL << 32) | (uint32_t) (37 << 16) | 0:
        return OFPERR_NXFMFC_INVALID_TLV_FIELD;
    case (uint32_t) (6 << 16) | 0:
        return OFPERR_OFPGMFC_GROUP_EXISTS;
    case (uint32_t) (6 << 16) | 1:
        return OFPERR_OFPGMFC_INVALID_GROUP;
    case (uint32_t) (6 << 16) | 2:
        return OFPERR_OFPGMFC_WEIGHT_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 3:
        return OFPERR_OFPGMFC_OUT_OF_GROUPS;
    case (uint32_t) (6 << 16) | 4:
        return OFPERR_OFPGMFC_OUT_OF_BUCKETS;
    case (uint32_t) (6 << 16) | 5:
        return OFPERR_OFPGMFC_CHAINING_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 6:
        return OFPERR_OFPGMFC_WATCH_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 7:
        return OFPERR_OFPGMFC_LOOP;
    case (uint32_t) (6 << 16) | 8:
        return OFPERR_OFPGMFC_UNKNOWN_GROUP;
    case (uint32_t) (6 << 16) | 9:
        return OFPERR_OFPGMFC_CHAINED_GROUP;
    case (uint32_t) (6 << 16) | 10:
        return OFPERR_OFPGMFC_BAD_TYPE;
    case (uint32_t) (6 << 16) | 11:
        return OFPERR_OFPGMFC_BAD_COMMAND;
    case (uint32_t) (6 << 16) | 12:
        return OFPERR_OFPGMFC_BAD_BUCKET;
    case (uint32_t) (6 << 16) | 13:
        return OFPERR_OFPGMFC_BAD_WATCH;
    case (uint32_t) (6 << 16) | 14:
        return OFPERR_OFPGMFC_EPERM;
    case (uint32_t) (6 << 16) | 15:
        return OFPERR_OFPGMFC_UNKNOWN_BUCKET;
    case (uint32_t) (6 << 16) | 16:
        return OFPERR_OFPGMFC_BUCKET_EXISTS;
    case (uint32_t) (7 << 16) | 0:
        return OFPERR_OFPPMFC_BAD_PORT;
    case (uint32_t) (7 << 16) | 1:
        return OFPERR_OFPPMFC_BAD_HW_ADDR;
    case (uint32_t) (7 << 16) | 2:
        return OFPERR_OFPPMFC_BAD_CONFIG;
    case (uint32_t) (7 << 16) | 3:
        return OFPERR_OFPPMFC_BAD_ADVERTISE;
    case (uint32_t) (7 << 16) | 4:
        return OFPERR_OFPPMFC_EPERM;
    case (uint32_t) (8 << 16) | 0:
        return OFPERR_OFPTMFC_BAD_TABLE;
    case (uint32_t) (8 << 16) | 1:
        return OFPERR_OFPTMFC_BAD_CONFIG;
    case (uint32_t) (8 << 16) | 2:
        return OFPERR_OFPTMFC_EPERM;
    case (uint32_t) (9 << 16) | 0:
        return OFPERR_OFPQOFC_BAD_PORT;
    case (uint32_t) (9 << 16) | 1:
        return OFPERR_OFPQOFC_BAD_QUEUE;
    case (uint32_t) (9 << 16) | 2:
        return OFPERR_OFPQOFC_EPERM;
    case (0x2320ULL << 32) | (uint32_t) (23 << 16) | 0:
        return OFPERR_NXQOFC_QUEUE_ERROR;
    case (uint32_t) (10 << 16) | 0:
        return OFPERR_OFPSCFC_BAD_FLAGS;
    case (uint32_t) (10 << 16) | 1:
        return OFPERR_OFPSCFC_BAD_LEN;
    case (uint32_t) (10 << 16) | 2:
        return OFPERR_OFPSCFC_EPERM;
    case (uint32_t) (11 << 16) | 0:
        return OFPERR_OFPRRFC_STALE;
    case (uint32_t) (11 << 16) | 1:
        return OFPERR_OFPRRFC_UNSUP;
    case (uint32_t) (11 << 16) | 2:
        return OFPERR_OFPRRFC_BAD_ROLE;
    case (uint32_t) (12 << 16) | 0:
        return OFPERR_OFPMMFC_UNKNOWN;
    case (uint32_t) (12 << 16) | 1:
        return OFPERR_OFPMMFC_METER_EXISTS;
    case (uint32_t) (12 << 16) | 2:
        return OFPERR_OFPMMFC_INVALID_METER;
    case (uint32_t) (12 << 16) | 3:
        return OFPERR_OFPMMFC_UNKNOWN_METER;
    case (uint32_t) (12 << 16) | 4:
        return OFPERR_OFPMMFC_BAD_COMMAND;
    case (uint32_t) (12 << 16) | 5:
        return OFPERR_OFPMMFC_BAD_FLAGS;
    case (uint32_t) (12 << 16) | 6:
        return OFPERR_OFPMMFC_BAD_RATE;
    case (uint32_t) (12 << 16) | 7:
        return OFPERR_OFPMMFC_BAD_BURST;
    case (uint32_t) (12 << 16) | 8:
        return OFPERR_OFPMMFC_BAD_BAND;
    case (uint32_t) (12 << 16) | 9:
        return OFPERR_OFPMMFC_BAD_BAND_VALUE;
    case (uint32_t) (12 << 16) | 10:
        return OFPERR_OFPMMFC_OUT_OF_METERS;
    case (uint32_t) (12 << 16) | 11:
        return OFPERR_OFPMMFC_OUT_OF_BANDS;
    case (uint32_t) (13 << 16) | 0:
        return OFPERR_OFPTFFC_BAD_TABLE;
    case (uint32_t) (13 << 16) | 1:
        return OFPERR_OFPTFFC_BAD_METADATA;
    case (uint32_t) (13 << 16) | 5:
        return OFPERR_OFPTFFC_EPERM;
    case (uint32_t) (14 << 16) | 0:
        return OFPERR_OFPBPC_BAD_TYPE;
    case (uint32_t) (14 << 16) | 1:
        return OFPERR_OFPBPC_BAD_LEN;
    case (uint32_t) (14 << 16) | 2:
        return OFPERR_OFPBPC_BAD_VALUE;
    case (uint32_t) (14 << 16) | 3:
        return OFPERR_OFPBPC_TOO_MANY;
    case (uint32_t) (14 << 16) | 4:
        return OFPERR_OFPBPC_DUP_TYPE;
    case (uint32_t) (14 << 16) | 5:
        return OFPERR_OFPBPC_BAD_EXPERIMENTER;
    case (uint32_t) (14 << 16) | 6:
        return OFPERR_OFPBPC_BAD_EXP_TYPE;
    case (uint32_t) (14 << 16) | 7:
        return OFPERR_OFPBPC_BAD_EXP_VALUE;
    case (uint32_t) (14 << 16) | 8:
        return OFPERR_OFPBPC_EPERM;
    case (uint32_t) (15 << 16) | 0:
        return OFPERR_OFPACFC_INVALID;
    case (uint32_t) (15 << 16) | 1:
        return OFPERR_OFPACFC_UNSUPPORTED;
    case (uint32_t) (15 << 16) | 2:
        return OFPERR_OFPACFC_EPERM;
    case (uint32_t) (17 << 16) | 0:
        return OFPERR_OFPBFC_UNKNOWN;
    case (uint32_t) (17 << 16) | 1:
        return OFPERR_OFPBFC_EPERM;
    case (uint32_t) (17 << 16) | 2:
        return OFPERR_OFPBFC_BAD_ID;
    case (uint32_t) (17 << 16) | 3:
        return OFPERR_OFPBFC_BUNDLE_EXIST;
    case (uint32_t) (17 << 16) | 4:
        return OFPERR_OFPBFC_BUNDLE_CLOSED;
    case (uint32_t) (17 << 16) | 5:
        return OFPERR_OFPBFC_OUT_OF_BUNDLES;
    case (uint32_t) (17 << 16) | 6:
        return OFPERR_OFPBFC_BAD_TYPE;
    case (uint32_t) (17 << 16) | 7:
        return OFPERR_OFPBFC_BAD_FLAGS;
    case (uint32_t) (17 << 16) | 8:
        return OFPERR_OFPBFC_MSG_BAD_LEN;
    case (uint32_t) (17 << 16) | 9:
        return OFPERR_OFPBFC_MSG_BAD_XID;
    case (uint32_t) (17 << 16) | 10:
        return OFPERR_OFPBFC_MSG_UNSUP;
    case (uint32_t) (17 << 16) | 11:
        return OFPERR_OFPBFC_MSG_CONFLICT;
    case (uint32_t) (17 << 16) | 12:
        return OFPERR_OFPBFC_MSG_TOO_MANY;
    case (uint32_t) (17 << 16) | 13:
        return OFPERR_OFPBFC_MSG_FAILED;
    case (uint32_t) (17 << 16) | 14:
        return OFPERR_OFPBFC_TIMEOUT;
    case (uint32_t) (17 << 16) | 15:
        return OFPERR_OFPBFC_BUNDLE_IN_PROGRESS;
    case (uint32_t) (17 << 16) | 19:
        return OFPERR_OFPBFC_BAD_VERSION;
    case (uint32_t) (16 << 16) | 0:
        return OFPERR_OFPMOFC_UNKNOWN;
    case (uint32_t) (16 << 16) | 1:
        return OFPERR_OFPMOFC_MONITOR_EXISTS;
    case (uint32_t) (16 << 16) | 2:
        return OFPERR_OFPMOFC_INVALID_MONITOR;
    case (uint32_t) (16 << 16) | 3:
        return OFPERR_OFPMOFC_UNKNOWN_MONITOR;
    case (uint32_t) (16 << 16) | 4:
        return OFPERR_OFPMOFC_BAD_COMMAND;
    case (uint32_t) (16 << 16) | 5:
        return OFPERR_OFPMOFC_BAD_FLAGS;
    case (uint32_t) (16 << 16) | 6:
        return OFPERR_OFPMOFC_BAD_TABLE_ID;
    case (uint32_t) (16 << 16) | 7:
        return OFPERR_OFPMOFC_BAD_OUT;
    case (0x2320ULL << 32) | (uint32_t) (16 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_COMMAND;
    case (0x2320ULL << 32) | (uint32_t) (17 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_OPT_LEN;
    case (0x2320ULL << 32) | (uint32_t) (18 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_FIELD_IDX;
    case (0x2320ULL << 32) | (uint32_t) (19 << 16) | 0:
        return OFPERR_NXTTMFC_TABLE_FULL;
    case (0x2320ULL << 32) | (uint32_t) (20 << 16) | 0:
        return OFPERR_NXTTMFC_ALREADY_MAPPED;
    case (0x2320ULL << 32) | (uint32_t) (21 << 16) | 0:
        return OFPERR_NXTTMFC_DUP_ENTRY;
    case (0x2320ULL << 32) | (uint32_t) (38 << 16) | 0:
        return OFPERR_NXTTMFC_INVALID_TLV_DEL;
    case (0x2320ULL << 32) | (uint32_t) (34 << 16) | 0:
        return OFPERR_NXR_NOT_SUPPORTED;
    case (0x2320ULL << 32) | (uint32_t) (35 << 16) | 0:
        return OFPERR_NXR_STALE;
    case (0x2320ULL << 32) | (uint32_t) (36 << 16) | 0:
        return OFPERR_NXST_NOT_CONFIGURED;
    }

    return 0;
}

static const struct ofperr_domain ofperr_of16 = {
    "OpenFlow 1.6",
    7,
    ofperr_of16_decode,
    {
        {      0x0,  0,   0 }, /* OFPHFC_INCOMPATIBLE */
        {      0x0,  0,   1 }, /* OFPHFC_EPERM */
        {      0x0,  1,   0 }, /* OFPBRC_BAD_VERSION */
        {      0x0,  1,   1 }, /* OFPBRC_BAD_TYPE */
        {      0x0,  1,   2 }, /* OFPBRC_BAD_STAT */
        {      0x0,  1,   3 }, /* OFPBRC_BAD_VENDOR */
        {      0x0,  1,   4 }, /* OFPBRC_BAD_SUBTYPE */
        {      0x0,  1,   5 }, /* OFPBRC_EPERM */
        {      0x0,  1,   6 }, /* OFPBRC_BAD_LEN */
        {      0x0,  1,   7 }, /* OFPBRC_BUFFER_EMPTY */
        {      0x0,  1,   8 }, /* OFPBRC_BUFFER_UNKNOWN */
        {      0x0,  1,   9 }, /* OFPBRC_BAD_TABLE_ID */
        {      0x0,  1,  10 }, /* OFPBRC_IS_SLAVE */
        {      0x0,  1,  11 }, /* OFPBRC_BAD_PORT */
        {      0x0,  1,  12 }, /* OFPBRC_BAD_PACKET */
        {      0x0,  1,  13 }, /* OFPBRC_MULTIPART_BUFFER_OVERFLOW */
        {      0x0,  1,  17 }, /* OFPBRC_PIPELINE_FIELDS_ONLY */
        {   0x2320,  2,   0 }, /* NXBRC_NXM_INVALID */
        {   0x2320,  3,   0 }, /* NXBRC_NXM_BAD_TYPE */
        {   0x2320,  4,   0 }, /* NXBRC_MUST_BE_ZERO */
        {   0x2320,  5,   0 }, /* NXBRC_BAD_REASON */
        {   0x2320,  9,   0 }, /* NXBRC_FM_BAD_EVENT */
        {   0x2320, 10,   0 }, /* NXBRC_UNENCODABLE_ERROR */
        {      0x0,  2,   0 }, /* OFPBAC_BAD_TYPE */
        {      0x0,  2,   1 }, /* OFPBAC_BAD_LEN */
        {      0x0,  2,   2 }, /* OFPBAC_BAD_VENDOR */
        {      0x0,  2,   3 }, /* OFPBAC_BAD_VENDOR_TYPE */
        {      0x0,  2,   4 }, /* OFPBAC_BAD_OUT_PORT */
        {      0x0,  2,   5 }, /* OFPBAC_BAD_ARGUMENT */
        {      0x0,  2,   6 }, /* OFPBAC_EPERM */
        {      0x0,  2,   7 }, /* OFPBAC_TOO_MANY */
        {      0x0,  2,   8 }, /* OFPBAC_BAD_QUEUE */
        {      0x0,  2,   9 }, /* OFPBAC_BAD_OUT_GROUP */
        {      0x0,  2,  10 }, /* OFPBAC_MATCH_INCONSISTENT */
        {      0x0,  2,  11 }, /* OFPBAC_UNSUPPORTED_ORDER */
        {      0x0,  2,  12 }, /* OFPBAC_BAD_TAG */
        {      0x0,  2,  13 }, /* OFPBAC_BAD_SET_TYPE */
        {      0x0,  2,  14 }, /* OFPBAC_BAD_SET_LEN */
        {      0x0,  2,  15 }, /* OFPBAC_BAD_SET_ARGUMENT */
        {      0x0,  2,  16 }, /* OFPBAC_BAD_SET_MASK */
        {   0x2320, 11,   0 }, /* NXBAC_MUST_BE_ZERO */
        {   0x2320, 15,   0 }, /* NXBAC_BAD_CONJUNCTION */
        {   0x2320, 39,   0 }, /* NXBAC_BAD_HEADER_TYPE */
        {   0x2320, 40,   0 }, /* NXBAC_UNKNOWN_ED_PROP */
        {   0x2320, 41,   0 }, /* NXBAC_BAD_ED_PROP */
        {      0x0,  3,   0 }, /* OFPBIC_UNKNOWN_INST */
        {      0x0,  3,   1 }, /* OFPBIC_UNSUP_INST */
        {      0x0,  3,   2 }, /* OFPBIC_BAD_TABLE_ID */
        {      0x0,  3,   3 }, /* OFPBIC_UNSUP_METADATA */
        {      0x0,  3,   4 }, /* OFPBIC_UNSUP_METADATA_MASK */
        {      0x0,  3,   5 }, /* OFPBIC_BAD_EXPERIMENTER */
        {      0x0,  3,   6 }, /* OFPBIC_BAD_EXP_TYPE */
        {      0x0,  3,   7 }, /* OFPBIC_BAD_LEN */
        {      0x0,  3,   8 }, /* OFPBIC_EPERM */
        {      0x0,  3,   9 }, /* OFPBIC_DUP_INST */
        {      0x0,  4,   0 }, /* OFPBMC_BAD_TYPE */
        {      0x0,  4,   1 }, /* OFPBMC_BAD_LEN */
        {      0x0,  4,   2 }, /* OFPBMC_BAD_TAG */
        {      0x0,  4,   3 }, /* OFPBMC_BAD_DL_ADDR_MASK */
        {      0x0,  4,   4 }, /* OFPBMC_BAD_NW_ADDR_MASK */
        {      0x0,  4,   5 }, /* OFPBMC_BAD_WILDCARDS */
        {      0x0,  4,   6 }, /* OFPBMC_BAD_FIELD */
        {      0x0,  4,   7 }, /* OFPBMC_BAD_VALUE */
        {      0x0,  4,   8 }, /* OFPBMC_BAD_MASK */
        {      0x0,  4,   9 }, /* OFPBMC_BAD_PREREQ */
        {      0x0,  4,  10 }, /* OFPBMC_DUP_FIELD */
        {      0x0,  4,  11 }, /* OFPBMC_EPERM */
        {      0x0,  5,   0 }, /* OFPFMFC_UNKNOWN */
        {      0x0,  5,   1 }, /* OFPFMFC_TABLE_FULL */
        {      0x0,  5,   2 }, /* OFPFMFC_BAD_TABLE_ID */
        {      0x0,  5,   3 }, /* OFPFMFC_OVERLAP */
        {      0x0,  5,   4 }, /* OFPFMFC_EPERM */
        {      0x0,  5,   5 }, /* OFPFMFC_BAD_TIMEOUT */
        {       -1, -1,  -1 }, /* OFPFMFC_BAD_EMERG_TIMEOUT */
        {      0x0,  5,   6 }, /* OFPFMFC_BAD_COMMAND */
        {      0x0,  5,   7 }, /* OFPFMFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPFMFC_UNSUPPORTED */
        {   0x2320, 12,   0 }, /* NXFMFC_HARDWARE */
        {   0x2320, 13,   0 }, /* NXFMFC_BAD_TABLE_ID */
        {   0x2320, 37,   0 }, /* NXFMFC_INVALID_TLV_FIELD */
        {      0x0,  6,   0 }, /* OFPGMFC_GROUP_EXISTS */
        {      0x0,  6,   1 }, /* OFPGMFC_INVALID_GROUP */
        {      0x0,  6,   2 }, /* OFPGMFC_WEIGHT_UNSUPPORTED */
        {      0x0,  6,   3 }, /* OFPGMFC_OUT_OF_GROUPS */
        {      0x0,  6,   4 }, /* OFPGMFC_OUT_OF_BUCKETS */
        {      0x0,  6,   5 }, /* OFPGMFC_CHAINING_UNSUPPORTED */
        {      0x0,  6,   6 }, /* OFPGMFC_WATCH_UNSUPPORTED */
        {      0x0,  6,   7 }, /* OFPGMFC_LOOP */
        {      0x0,  6,   8 }, /* OFPGMFC_UNKNOWN_GROUP */
        {      0x0,  6,   9 }, /* OFPGMFC_CHAINED_GROUP */
        {      0x0,  6,  10 }, /* OFPGMFC_BAD_TYPE */
        {      0x0,  6,  11 }, /* OFPGMFC_BAD_COMMAND */
        {      0x0,  6,  12 }, /* OFPGMFC_BAD_BUCKET */
        {      0x0,  6,  13 }, /* OFPGMFC_BAD_WATCH */
        {      0x0,  6,  14 }, /* OFPGMFC_EPERM */
        {      0x0,  6,  15 }, /* OFPGMFC_UNKNOWN_BUCKET */
        {      0x0,  6,  16 }, /* OFPGMFC_BUCKET_EXISTS */
        {      0x0,  7,   0 }, /* OFPPMFC_BAD_PORT */
        {      0x0,  7,   1 }, /* OFPPMFC_BAD_HW_ADDR */
        {      0x0,  7,   2 }, /* OFPPMFC_BAD_CONFIG */
        {      0x0,  7,   3 }, /* OFPPMFC_BAD_ADVERTISE */
        {      0x0,  7,   4 }, /* OFPPMFC_EPERM */
        {      0x0,  8,   0 }, /* OFPTMFC_BAD_TABLE */
        {      0x0,  8,   1 }, /* OFPTMFC_BAD_CONFIG */
        {      0x0,  8,   2 }, /* OFPTMFC_EPERM */
        {      0x0,  9,   0 }, /* OFPQOFC_BAD_PORT */
        {      0x0,  9,   1 }, /* OFPQOFC_BAD_QUEUE */
        {      0x0,  9,   2 }, /* OFPQOFC_EPERM */
        {   0x2320, 23,   0 }, /* NXQOFC_QUEUE_ERROR */
        {      0x0, 10,   0 }, /* OFPSCFC_BAD_FLAGS */
        {      0x0, 10,   1 }, /* OFPSCFC_BAD_LEN */
        {      0x0, 10,   2 }, /* OFPSCFC_EPERM */
        {      0x0, 11,   0 }, /* OFPRRFC_STALE */
        {      0x0, 11,   1 }, /* OFPRRFC_UNSUP */
        {      0x0, 11,   2 }, /* OFPRRFC_BAD_ROLE */
        {      0x0, 12,   0 }, /* OFPMMFC_UNKNOWN */
        {      0x0, 12,   1 }, /* OFPMMFC_METER_EXISTS */
        {      0x0, 12,   2 }, /* OFPMMFC_INVALID_METER */
        {      0x0, 12,   3 }, /* OFPMMFC_UNKNOWN_METER */
        {      0x0, 12,   4 }, /* OFPMMFC_BAD_COMMAND */
        {      0x0, 12,   5 }, /* OFPMMFC_BAD_FLAGS */
        {      0x0, 12,   6 }, /* OFPMMFC_BAD_RATE */
        {      0x0, 12,   7 }, /* OFPMMFC_BAD_BURST */
        {      0x0, 12,   8 }, /* OFPMMFC_BAD_BAND */
        {      0x0, 12,   9 }, /* OFPMMFC_BAD_BAND_VALUE */
        {      0x0, 12,  10 }, /* OFPMMFC_OUT_OF_METERS */
        {      0x0, 12,  11 }, /* OFPMMFC_OUT_OF_BANDS */
        {      0x0, 13,   0 }, /* OFPTFFC_BAD_TABLE */
        {      0x0, 13,   1 }, /* OFPTFFC_BAD_METADATA */
        {      0x0, 13,   5 }, /* OFPTFFC_EPERM */
        {      0x0, 14,   0 }, /* OFPBPC_BAD_TYPE */
        {      0x0, 14,   1 }, /* OFPBPC_BAD_LEN */
        {      0x0, 14,   2 }, /* OFPBPC_BAD_VALUE */
        {      0x0, 14,   3 }, /* OFPBPC_TOO_MANY */
        {      0x0, 14,   4 }, /* OFPBPC_DUP_TYPE */
        {      0x0, 14,   5 }, /* OFPBPC_BAD_EXPERIMENTER */
        {      0x0, 14,   6 }, /* OFPBPC_BAD_EXP_TYPE */
        {      0x0, 14,   7 }, /* OFPBPC_BAD_EXP_VALUE */
        {      0x0, 14,   8 }, /* OFPBPC_EPERM */
        {      0x0, 15,   0 }, /* OFPACFC_INVALID */
        {      0x0, 15,   1 }, /* OFPACFC_UNSUPPORTED */
        {      0x0, 15,   2 }, /* OFPACFC_EPERM */
        {      0x0, 17,   0 }, /* OFPBFC_UNKNOWN */
        {      0x0, 17,   1 }, /* OFPBFC_EPERM */
        {      0x0, 17,   2 }, /* OFPBFC_BAD_ID */
        {      0x0, 17,   3 }, /* OFPBFC_BUNDLE_EXIST */
        {      0x0, 17,   4 }, /* OFPBFC_BUNDLE_CLOSED */
        {      0x0, 17,   5 }, /* OFPBFC_OUT_OF_BUNDLES */
        {      0x0, 17,   6 }, /* OFPBFC_BAD_TYPE */
        {      0x0, 17,   7 }, /* OFPBFC_BAD_FLAGS */
        {      0x0, 17,   8 }, /* OFPBFC_MSG_BAD_LEN */
        {      0x0, 17,   9 }, /* OFPBFC_MSG_BAD_XID */
        {      0x0, 17,  10 }, /* OFPBFC_MSG_UNSUP */
        {      0x0, 17,  11 }, /* OFPBFC_MSG_CONFLICT */
        {      0x0, 17,  12 }, /* OFPBFC_MSG_TOO_MANY */
        {      0x0, 17,  13 }, /* OFPBFC_MSG_FAILED */
        {      0x0, 17,  14 }, /* OFPBFC_TIMEOUT */
        {      0x0, 17,  15 }, /* OFPBFC_BUNDLE_IN_PROGRESS */
        {      0x0, 17,  19 }, /* OFPBFC_BAD_VERSION */
        {      0x0, 16,   0 }, /* OFPMOFC_UNKNOWN */
        {      0x0, 16,   1 }, /* OFPMOFC_MONITOR_EXISTS */
        {      0x0, 16,   2 }, /* OFPMOFC_INVALID_MONITOR */
        {      0x0, 16,   3 }, /* OFPMOFC_UNKNOWN_MONITOR */
        {      0x0, 16,   4 }, /* OFPMOFC_BAD_COMMAND */
        {      0x0, 16,   5 }, /* OFPMOFC_BAD_FLAGS */
        {      0x0, 16,   6 }, /* OFPMOFC_BAD_TABLE_ID */
        {      0x0, 16,   7 }, /* OFPMOFC_BAD_OUT */
        {   0x2320, 16,   0 }, /* NXTTMFC_BAD_COMMAND */
        {   0x2320, 17,   0 }, /* NXTTMFC_BAD_OPT_LEN */
        {   0x2320, 18,   0 }, /* NXTTMFC_BAD_FIELD_IDX */
        {   0x2320, 19,   0 }, /* NXTTMFC_TABLE_FULL */
        {   0x2320, 20,   0 }, /* NXTTMFC_ALREADY_MAPPED */
        {   0x2320, 21,   0 }, /* NXTTMFC_DUP_ENTRY */
        {   0x2320, 38,   0 }, /* NXTTMFC_INVALID_TLV_DEL */
        {   0x2320, 34,   0 }, /* NXR_NOT_SUPPORTED */
        {   0x2320, 35,   0 }, /* NXR_STALE */
        {   0x2320, 36,   0 }, /* NXST_NOT_CONFIGURED */
    },
};

static enum ofperr
ofperr_of10_decode(uint32_t vendor, uint16_t type, uint16_t code)
{
    switch (((uint64_t) vendor << 32) | (uint32_t) (type << 16) | code) {
    case (uint32_t) (0 << 16) | 0:
        return OFPERR_OFPHFC_INCOMPATIBLE;
    case (uint32_t) (0 << 16) | 1:
        return OFPERR_OFPHFC_EPERM;
    case (uint32_t) (1 << 16) | 0:
        return OFPERR_OFPBRC_BAD_VERSION;
    case (uint32_t) (1 << 16) | 1:
        return OFPERR_OFPBRC_BAD_TYPE;
    case (uint32_t) (1 << 16) | 2:
        return OFPERR_OFPBRC_BAD_STAT;
    case (uint32_t) (1 << 16) | 3:
        return OFPERR_OFPBRC_BAD_VENDOR;
    case (uint32_t) (1 << 16) | 4:
        return OFPERR_OFPBRC_BAD_SUBTYPE;
    case (uint32_t) (1 << 16) | 5:
        return OFPERR_OFPBRC_EPERM;
    case (uint32_t) (1 << 16) | 6:
        return OFPERR_OFPBRC_BAD_LEN;
    case (uint32_t) (1 << 16) | 7:
        return OFPERR_OFPBRC_BUFFER_EMPTY;
    case (uint32_t) (1 << 16) | 8:
        return OFPERR_OFPBRC_BUFFER_UNKNOWN;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 512:
        return OFPERR_OFPBRC_BAD_TABLE_ID;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 514:
        return OFPERR_OFPBRC_BAD_PORT;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 256:
        return OFPERR_NXBRC_NXM_INVALID;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 257:
        return OFPERR_NXBRC_NXM_BAD_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 515:
        return OFPERR_NXBRC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 516:
        return OFPERR_NXBRC_BAD_REASON;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 520:
        return OFPERR_NXBRC_FM_BAD_EVENT;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 521:
        return OFPERR_NXBRC_UNENCODABLE_ERROR;
    case (uint32_t) (2 << 16) | 0:
        return OFPERR_OFPBAC_BAD_TYPE;
    case (uint32_t) (2 << 16) | 1:
        return OFPERR_OFPBAC_BAD_LEN;
    case (uint32_t) (2 << 16) | 2:
        return OFPERR_OFPBAC_BAD_VENDOR;
    case (uint32_t) (2 << 16) | 3:
        return OFPERR_OFPBAC_BAD_VENDOR_TYPE;
    case (uint32_t) (2 << 16) | 4:
        return OFPERR_OFPBAC_BAD_OUT_PORT;
    case (uint32_t) (2 << 16) | 5:
        return OFPERR_OFPBAC_BAD_ARGUMENT;
    case (uint32_t) (2 << 16) | 6:
        return OFPERR_OFPBAC_EPERM;
    case (uint32_t) (2 << 16) | 7:
        return OFPERR_OFPBAC_TOO_MANY;
    case (uint32_t) (2 << 16) | 8:
        return OFPERR_OFPBAC_BAD_QUEUE;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 522:
        return OFPERR_OFPBAC_MATCH_INCONSISTENT;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 523:
        return OFPERR_OFPBAC_BAD_SET_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 524:
        return OFPERR_OFPBAC_BAD_SET_LEN;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 525:
        return OFPERR_OFPBAC_BAD_SET_ARGUMENT;
    case (0x2320ULL << 32) | (uint32_t) (2 << 16) | 256:
        return OFPERR_NXBAC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (2 << 16) | 526:
        return OFPERR_NXBAC_BAD_CONJUNCTION;
    case (0x2320ULL << 32) | (uint32_t) (2 << 16) | 257:
        return OFPERR_OFPBIC_UNSUP_INST;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 262:
        return OFPERR_OFPBMC_BAD_WILDCARDS;
    case (0x2320ULL << 32) | (uint32_t) (0 << 16) | 263:
        return OFPERR_OFPBMC_BAD_FIELD;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 258:
        return OFPERR_OFPBMC_BAD_VALUE;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 259:
        return OFPERR_OFPBMC_BAD_MASK;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 260:
        return OFPERR_OFPBMC_BAD_PREREQ;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 261:
        return OFPERR_OFPBMC_DUP_FIELD;
    case (uint32_t) (3 << 16) | 0:
        return OFPERR_OFPFMFC_TABLE_FULL;
    case (uint32_t) (3 << 16) | 1:
        return OFPERR_OFPFMFC_OVERLAP;
    case (uint32_t) (3 << 16) | 2:
        return OFPERR_OFPFMFC_EPERM;
    case (uint32_t) (3 << 16) | 3:
        return OFPERR_OFPFMFC_BAD_EMERG_TIMEOUT;
    case (uint32_t) (3 << 16) | 4:
        return OFPERR_OFPFMFC_BAD_COMMAND;
    case (0x2320ULL << 32) | (uint32_t) (3 << 16) | 258:
        return OFPERR_OFPFMFC_BAD_FLAGS;
    case (uint32_t) (3 << 16) | 5:
        return OFPERR_OFPFMFC_UNSUPPORTED;
    case (0x2320ULL << 32) | (uint32_t) (5 << 16) | 256:
        return OFPERR_NXFMFC_HARDWARE;
    case (0x2320ULL << 32) | (uint32_t) (5 << 16) | 257:
        return OFPERR_NXFMFC_BAD_TABLE_ID;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 536:
        return OFPERR_NXFMFC_INVALID_TLV_FIELD;
    case (uint32_t) (4 << 16) | 0:
        return OFPERR_OFPPMFC_BAD_PORT;
    case (uint32_t) (4 << 16) | 1:
        return OFPERR_OFPPMFC_BAD_HW_ADDR;
    case (uint32_t) (5 << 16) | 0:
        return OFPERR_OFPQOFC_BAD_PORT;
    case (uint32_t) (5 << 16) | 1:
        return OFPERR_OFPQOFC_BAD_QUEUE;
    case (uint32_t) (5 << 16) | 2:
        return OFPERR_OFPQOFC_EPERM;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 513:
        return OFPERR_OFPRRFC_BAD_ROLE;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 2:
        return OFPERR_OFPBPC_BAD_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 3:
        return OFPERR_OFPBPC_BAD_LEN;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 4:
        return OFPERR_OFPBPC_BAD_VALUE;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 3:
        return OFPERR_OFPBPC_TOO_MANY;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 4:
        return OFPERR_OFPBPC_DUP_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 5:
        return OFPERR_OFPBPC_BAD_EXPERIMENTER;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 6:
        return OFPERR_OFPBPC_BAD_EXP_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 7:
        return OFPERR_OFPBPC_BAD_EXP_VALUE;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 8:
        return OFPERR_OFPBPC_EPERM;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 517:
        return OFPERR_OFPMOFC_MONITOR_EXISTS;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 519:
        return OFPERR_OFPMOFC_UNKNOWN_MONITOR;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 518:
        return OFPERR_OFPMOFC_BAD_FLAGS;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 527:
        return OFPERR_NXTTMFC_BAD_COMMAND;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 528:
        return OFPERR_NXTTMFC_BAD_OPT_LEN;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 529:
        return OFPERR_NXTTMFC_BAD_FIELD_IDX;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 530:
        return OFPERR_NXTTMFC_TABLE_FULL;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 531:
        return OFPERR_NXTTMFC_ALREADY_MAPPED;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 532:
        return OFPERR_NXTTMFC_DUP_ENTRY;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 537:
        return OFPERR_NXTTMFC_INVALID_TLV_DEL;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 533:
        return OFPERR_NXR_NOT_SUPPORTED;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 534:
        return OFPERR_NXR_STALE;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 535:
        return OFPERR_NXST_NOT_CONFIGURED;
    }

    return 0;
}

static const struct ofperr_domain ofperr_of10 = {
    "OpenFlow 1.0",
    1,
    ofperr_of10_decode,
    {
        {      0x0,  0,   0 }, /* OFPHFC_INCOMPATIBLE */
        {      0x0,  0,   1 }, /* OFPHFC_EPERM */
        {      0x0,  1,   0 }, /* OFPBRC_BAD_VERSION */
        {      0x0,  1,   1 }, /* OFPBRC_BAD_TYPE */
        {      0x0,  1,   2 }, /* OFPBRC_BAD_STAT */
        {      0x0,  1,   3 }, /* OFPBRC_BAD_VENDOR */
        {      0x0,  1,   4 }, /* OFPBRC_BAD_SUBTYPE */
        {      0x0,  1,   5 }, /* OFPBRC_EPERM */
        {      0x0,  1,   6 }, /* OFPBRC_BAD_LEN */
        {      0x0,  1,   7 }, /* OFPBRC_BUFFER_EMPTY */
        {      0x0,  1,   8 }, /* OFPBRC_BUFFER_UNKNOWN */
        {   0x2320,  1, 512 }, /* OFPBRC_BAD_TABLE_ID */
        {      0x0,  1,   5 }, /* OFPBRC_IS_SLAVE */
        {   0x2320,  1, 514 }, /* OFPBRC_BAD_PORT */
        {       -1, -1,  -1 }, /* OFPBRC_BAD_PACKET */
        {       -1, -1,  -1 }, /* OFPBRC_MULTIPART_BUFFER_OVERFLOW */
        {       -1, -1,  -1 }, /* OFPBRC_PIPELINE_FIELDS_ONLY */
        {   0x2320,  1, 256 }, /* NXBRC_NXM_INVALID */
        {   0x2320,  1, 257 }, /* NXBRC_NXM_BAD_TYPE */
        {   0x2320,  1, 515 }, /* NXBRC_MUST_BE_ZERO */
        {   0x2320,  1, 516 }, /* NXBRC_BAD_REASON */
        {   0x2320,  1, 520 }, /* NXBRC_FM_BAD_EVENT */
        {   0x2320,  1, 521 }, /* NXBRC_UNENCODABLE_ERROR */
        {      0x0,  2,   0 }, /* OFPBAC_BAD_TYPE */
        {      0x0,  2,   1 }, /* OFPBAC_BAD_LEN */
        {      0x0,  2,   2 }, /* OFPBAC_BAD_VENDOR */
        {      0x0,  2,   3 }, /* OFPBAC_BAD_VENDOR_TYPE */
        {      0x0,  2,   4 }, /* OFPBAC_BAD_OUT_PORT */
        {      0x0,  2,   5 }, /* OFPBAC_BAD_ARGUMENT */
        {      0x0,  2,   6 }, /* OFPBAC_EPERM */
        {      0x0,  2,   7 }, /* OFPBAC_TOO_MANY */
        {      0x0,  2,   8 }, /* OFPBAC_BAD_QUEUE */
        {       -1, -1,  -1 }, /* OFPBAC_BAD_OUT_GROUP */
        {   0x2320,  1, 522 }, /* OFPBAC_MATCH_INCONSISTENT */
        {       -1, -1,  -1 }, /* OFPBAC_UNSUPPORTED_ORDER */
        {       -1, -1,  -1 }, /* OFPBAC_BAD_TAG */
        {   0x2320,  1, 523 }, /* OFPBAC_BAD_SET_TYPE */
        {   0x2320,  1, 524 }, /* OFPBAC_BAD_SET_LEN */
        {   0x2320,  1, 525 }, /* OFPBAC_BAD_SET_ARGUMENT */
        {       -1, -1,  -1 }, /* OFPBAC_BAD_SET_MASK */
        {   0x2320,  2, 256 }, /* NXBAC_MUST_BE_ZERO */
        {   0x2320,  2, 526 }, /* NXBAC_BAD_CONJUNCTION */
        {       -1, -1,  -1 }, /* NXBAC_BAD_HEADER_TYPE */
        {       -1, -1,  -1 }, /* NXBAC_UNKNOWN_ED_PROP */
        {       -1, -1,  -1 }, /* NXBAC_BAD_ED_PROP */
        {       -1, -1,  -1 }, /* OFPBIC_UNKNOWN_INST */
        {   0x2320,  2, 257 }, /* OFPBIC_UNSUP_INST */
        {       -1, -1,  -1 }, /* OFPBIC_BAD_TABLE_ID */
        {       -1, -1,  -1 }, /* OFPBIC_UNSUP_METADATA */
        {       -1, -1,  -1 }, /* OFPBIC_UNSUP_METADATA_MASK */
        {       -1, -1,  -1 }, /* OFPBIC_BAD_EXPERIMENTER */
        {       -1, -1,  -1 }, /* OFPBIC_BAD_EXP_TYPE */
        {       -1, -1,  -1 }, /* OFPBIC_BAD_LEN */
        {       -1, -1,  -1 }, /* OFPBIC_EPERM */
        {       -1, -1,  -1 }, /* OFPBIC_DUP_INST */
        {       -1, -1,  -1 }, /* OFPBMC_BAD_TYPE */
        {       -1, -1,  -1 }, /* OFPBMC_BAD_LEN */
        {       -1, -1,  -1 }, /* OFPBMC_BAD_TAG */
        {       -1, -1,  -1 }, /* OFPBMC_BAD_DL_ADDR_MASK */
        {       -1, -1,  -1 }, /* OFPBMC_BAD_NW_ADDR_MASK */
        {   0x2320,  1, 262 }, /* OFPBMC_BAD_WILDCARDS */
        {   0x2320,  0, 263 }, /* OFPBMC_BAD_FIELD */
        {   0x2320,  1, 258 }, /* OFPBMC_BAD_VALUE */
        {   0x2320,  1, 259 }, /* OFPBMC_BAD_MASK */
        {   0x2320,  1, 260 }, /* OFPBMC_BAD_PREREQ */
        {   0x2320,  1, 261 }, /* OFPBMC_DUP_FIELD */
        {       -1, -1,  -1 }, /* OFPBMC_EPERM */
        {       -1, -1,  -1 }, /* OFPFMFC_UNKNOWN */
        {      0x0,  3,   0 }, /* OFPFMFC_TABLE_FULL */
        {       -1, -1,  -1 }, /* OFPFMFC_BAD_TABLE_ID */
        {      0x0,  3,   1 }, /* OFPFMFC_OVERLAP */
        {      0x0,  3,   2 }, /* OFPFMFC_EPERM */
        {       -1, -1,  -1 }, /* OFPFMFC_BAD_TIMEOUT */
        {      0x0,  3,   3 }, /* OFPFMFC_BAD_EMERG_TIMEOUT */
        {      0x0,  3,   4 }, /* OFPFMFC_BAD_COMMAND */
        {   0x2320,  3, 258 }, /* OFPFMFC_BAD_FLAGS */
        {      0x0,  3,   5 }, /* OFPFMFC_UNSUPPORTED */
        {   0x2320,  5, 256 }, /* NXFMFC_HARDWARE */
        {   0x2320,  5, 257 }, /* NXFMFC_BAD_TABLE_ID */
        {   0x2320,  1, 536 }, /* NXFMFC_INVALID_TLV_FIELD */
        {       -1, -1,  -1 }, /* OFPGMFC_GROUP_EXISTS */
        {       -1, -1,  -1 }, /* OFPGMFC_INVALID_GROUP */
        {       -1, -1,  -1 }, /* OFPGMFC_WEIGHT_UNSUPPORTED */
        {       -1, -1,  -1 }, /* OFPGMFC_OUT_OF_GROUPS */
        {       -1, -1,  -1 }, /* OFPGMFC_OUT_OF_BUCKETS */
        {       -1, -1,  -1 }, /* OFPGMFC_CHAINING_UNSUPPORTED */
        {       -1, -1,  -1 }, /* OFPGMFC_WATCH_UNSUPPORTED */
        {       -1, -1,  -1 }, /* OFPGMFC_LOOP */
        {       -1, -1,  -1 }, /* OFPGMFC_UNKNOWN_GROUP */
        {       -1, -1,  -1 }, /* OFPGMFC_CHAINED_GROUP */
        {       -1, -1,  -1 }, /* OFPGMFC_BAD_TYPE */
        {       -1, -1,  -1 }, /* OFPGMFC_BAD_COMMAND */
        {       -1, -1,  -1 }, /* OFPGMFC_BAD_BUCKET */
        {       -1, -1,  -1 }, /* OFPGMFC_BAD_WATCH */
        {       -1, -1,  -1 }, /* OFPGMFC_EPERM */
        {       -1, -1,  -1 }, /* OFPGMFC_UNKNOWN_BUCKET */
        {       -1, -1,  -1 }, /* OFPGMFC_BUCKET_EXISTS */
        {      0x0,  4,   0 }, /* OFPPMFC_BAD_PORT */
        {      0x0,  4,   1 }, /* OFPPMFC_BAD_HW_ADDR */
        {       -1, -1,  -1 }, /* OFPPMFC_BAD_CONFIG */
        {       -1, -1,  -1 }, /* OFPPMFC_BAD_ADVERTISE */
        {       -1, -1,  -1 }, /* OFPPMFC_EPERM */
        {       -1, -1,  -1 }, /* OFPTMFC_BAD_TABLE */
        {       -1, -1,  -1 }, /* OFPTMFC_BAD_CONFIG */
        {       -1, -1,  -1 }, /* OFPTMFC_EPERM */
        {      0x0,  5,   0 }, /* OFPQOFC_BAD_PORT */
        {      0x0,  5,   1 }, /* OFPQOFC_BAD_QUEUE */
        {      0x0,  5,   2 }, /* OFPQOFC_EPERM */
        {       -1, -1,  -1 }, /* NXQOFC_QUEUE_ERROR */
        {       -1, -1,  -1 }, /* OFPSCFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPSCFC_BAD_LEN */
        {       -1, -1,  -1 }, /* OFPSCFC_EPERM */
        {       -1, -1,  -1 }, /* OFPRRFC_STALE */
        {       -1, -1,  -1 }, /* OFPRRFC_UNSUP */
        {   0x2320,  1, 513 }, /* OFPRRFC_BAD_ROLE */
        {       -1, -1,  -1 }, /* OFPMMFC_UNKNOWN */
        {       -1, -1,  -1 }, /* OFPMMFC_METER_EXISTS */
        {       -1, -1,  -1 }, /* OFPMMFC_INVALID_METER */
        {       -1, -1,  -1 }, /* OFPMMFC_UNKNOWN_METER */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_COMMAND */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_RATE */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_BURST */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_BAND */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_BAND_VALUE */
        {       -1, -1,  -1 }, /* OFPMMFC_OUT_OF_METERS */
        {       -1, -1,  -1 }, /* OFPMMFC_OUT_OF_BANDS */
        {       -1, -1,  -1 }, /* OFPTFFC_BAD_TABLE */
        {       -1, -1,  -1 }, /* OFPTFFC_BAD_METADATA */
        {       -1, -1,  -1 }, /* OFPTFFC_EPERM */
        {   0x2320, 13,   2 }, /* OFPBPC_BAD_TYPE */
        {   0x2320, 13,   3 }, /* OFPBPC_BAD_LEN */
        {   0x2320, 13,   4 }, /* OFPBPC_BAD_VALUE */
        {   0x2320, 14,   3 }, /* OFPBPC_TOO_MANY */
        {   0x2320, 14,   4 }, /* OFPBPC_DUP_TYPE */
        {   0x2320, 14,   5 }, /* OFPBPC_BAD_EXPERIMENTER */
        {   0x2320, 14,   6 }, /* OFPBPC_BAD_EXP_TYPE */
        {   0x2320, 14,   7 }, /* OFPBPC_BAD_EXP_VALUE */
        {   0x2320, 14,   8 }, /* OFPBPC_EPERM */
        {       -1, -1,  -1 }, /* OFPACFC_INVALID */
        {       -1, -1,  -1 }, /* OFPACFC_UNSUPPORTED */
        {       -1, -1,  -1 }, /* OFPACFC_EPERM */
        {       -1, -1,  -1 }, /* OFPBFC_UNKNOWN */
        {       -1, -1,  -1 }, /* OFPBFC_EPERM */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_ID */
        {       -1, -1,  -1 }, /* OFPBFC_BUNDLE_EXIST */
        {       -1, -1,  -1 }, /* OFPBFC_BUNDLE_CLOSED */
        {       -1, -1,  -1 }, /* OFPBFC_OUT_OF_BUNDLES */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_TYPE */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_BAD_LEN */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_BAD_XID */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_UNSUP */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_CONFLICT */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_TOO_MANY */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_FAILED */
        {       -1, -1,  -1 }, /* OFPBFC_TIMEOUT */
        {       -1, -1,  -1 }, /* OFPBFC_BUNDLE_IN_PROGRESS */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_VERSION */
        {       -1, -1,  -1 }, /* OFPMOFC_UNKNOWN */
        {   0x2320,  1, 517 }, /* OFPMOFC_MONITOR_EXISTS */
        {       -1, -1,  -1 }, /* OFPMOFC_INVALID_MONITOR */
        {   0x2320,  1, 519 }, /* OFPMOFC_UNKNOWN_MONITOR */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_COMMAND */
        {   0x2320,  1, 518 }, /* OFPMOFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_TABLE_ID */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_OUT */
        {   0x2320,  1, 527 }, /* NXTTMFC_BAD_COMMAND */
        {   0x2320,  1, 528 }, /* NXTTMFC_BAD_OPT_LEN */
        {   0x2320,  1, 529 }, /* NXTTMFC_BAD_FIELD_IDX */
        {   0x2320,  1, 530 }, /* NXTTMFC_TABLE_FULL */
        {   0x2320,  1, 531 }, /* NXTTMFC_ALREADY_MAPPED */
        {   0x2320,  1, 532 }, /* NXTTMFC_DUP_ENTRY */
        {   0x2320,  1, 537 }, /* NXTTMFC_INVALID_TLV_DEL */
        {   0x2320,  1, 533 }, /* NXR_NOT_SUPPORTED */
        {   0x2320,  1, 534 }, /* NXR_STALE */
        {   0x2320,  1, 535 }, /* NXST_NOT_CONFIGURED */
    },
};

static enum ofperr
ofperr_of11_decode(uint32_t vendor, uint16_t type, uint16_t code)
{
    switch (((uint64_t) vendor << 32) | (uint32_t) (type << 16) | code) {
    case (uint32_t) (0 << 16) | 0:
        return OFPERR_OFPHFC_INCOMPATIBLE;
    case (uint32_t) (0 << 16) | 1:
        return OFPERR_OFPHFC_EPERM;
    case (uint32_t) (1 << 16) | 0:
        return OFPERR_OFPBRC_BAD_VERSION;
    case (uint32_t) (1 << 16) | 1:
        return OFPERR_OFPBRC_BAD_TYPE;
    case (uint32_t) (1 << 16) | 2:
        return OFPERR_OFPBRC_BAD_STAT;
    case (uint32_t) (1 << 16) | 3:
        return OFPERR_OFPBRC_BAD_VENDOR;
    case (uint32_t) (1 << 16) | 4:
        return OFPERR_OFPBRC_BAD_SUBTYPE;
    case (uint32_t) (1 << 16) | 5:
        return OFPERR_OFPBRC_EPERM;
    case (uint32_t) (1 << 16) | 6:
        return OFPERR_OFPBRC_BAD_LEN;
    case (uint32_t) (1 << 16) | 7:
        return OFPERR_OFPBRC_BUFFER_EMPTY;
    case (uint32_t) (1 << 16) | 8:
        return OFPERR_OFPBRC_BUFFER_UNKNOWN;
    case (uint32_t) (1 << 16) | 9:
        return OFPERR_OFPBRC_BAD_TABLE_ID;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 514:
        return OFPERR_OFPBRC_BAD_PORT;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 256:
        return OFPERR_NXBRC_NXM_INVALID;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 257:
        return OFPERR_NXBRC_NXM_BAD_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 515:
        return OFPERR_NXBRC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 516:
        return OFPERR_NXBRC_BAD_REASON;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 520:
        return OFPERR_NXBRC_FM_BAD_EVENT;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 521:
        return OFPERR_NXBRC_UNENCODABLE_ERROR;
    case (uint32_t) (2 << 16) | 0:
        return OFPERR_OFPBAC_BAD_TYPE;
    case (uint32_t) (2 << 16) | 1:
        return OFPERR_OFPBAC_BAD_LEN;
    case (uint32_t) (2 << 16) | 2:
        return OFPERR_OFPBAC_BAD_VENDOR;
    case (uint32_t) (2 << 16) | 3:
        return OFPERR_OFPBAC_BAD_VENDOR_TYPE;
    case (uint32_t) (2 << 16) | 4:
        return OFPERR_OFPBAC_BAD_OUT_PORT;
    case (uint32_t) (2 << 16) | 5:
        return OFPERR_OFPBAC_BAD_ARGUMENT;
    case (uint32_t) (2 << 16) | 6:
        return OFPERR_OFPBAC_EPERM;
    case (uint32_t) (2 << 16) | 7:
        return OFPERR_OFPBAC_TOO_MANY;
    case (uint32_t) (2 << 16) | 8:
        return OFPERR_OFPBAC_BAD_QUEUE;
    case (uint32_t) (2 << 16) | 9:
        return OFPERR_OFPBAC_BAD_OUT_GROUP;
    case (uint32_t) (2 << 16) | 10:
        return OFPERR_OFPBAC_MATCH_INCONSISTENT;
    case (uint32_t) (2 << 16) | 11:
        return OFPERR_OFPBAC_UNSUPPORTED_ORDER;
    case (uint32_t) (2 << 16) | 12:
        return OFPERR_OFPBAC_BAD_TAG;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 523:
        return OFPERR_OFPBAC_BAD_SET_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 524:
        return OFPERR_OFPBAC_BAD_SET_LEN;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 525:
        return OFPERR_OFPBAC_BAD_SET_ARGUMENT;
    case (0x2320ULL << 32) | (uint32_t) (2 << 16) | 256:
        return OFPERR_NXBAC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (2 << 16) | 526:
        return OFPERR_NXBAC_BAD_CONJUNCTION;
    case (uint32_t) (3 << 16) | 0:
        return OFPERR_OFPBIC_UNKNOWN_INST;
    case (uint32_t) (3 << 16) | 1:
        return OFPERR_OFPBIC_UNSUP_INST;
    case (uint32_t) (3 << 16) | 2:
        return OFPERR_OFPBIC_BAD_TABLE_ID;
    case (uint32_t) (3 << 16) | 3:
        return OFPERR_OFPBIC_UNSUP_METADATA;
    case (uint32_t) (3 << 16) | 4:
        return OFPERR_OFPBIC_UNSUP_METADATA_MASK;
    case (uint32_t) (3 << 16) | 5:
        return OFPERR_OFPBIC_BAD_EXPERIMENTER;
    case (0x2320ULL << 32) | (uint32_t) (3 << 16) | 256:
        return OFPERR_OFPBIC_DUP_INST;
    case (uint32_t) (4 << 16) | 0:
        return OFPERR_OFPBMC_BAD_TYPE;
    case (uint32_t) (4 << 16) | 1:
        return OFPERR_OFPBMC_BAD_LEN;
    case (uint32_t) (4 << 16) | 2:
        return OFPERR_OFPBMC_BAD_TAG;
    case (uint32_t) (4 << 16) | 3:
        return OFPERR_OFPBMC_BAD_DL_ADDR_MASK;
    case (uint32_t) (4 << 16) | 4:
        return OFPERR_OFPBMC_BAD_NW_ADDR_MASK;
    case (uint32_t) (4 << 16) | 5:
        return OFPERR_OFPBMC_BAD_WILDCARDS;
    case (uint32_t) (4 << 16) | 6:
        return OFPERR_OFPBMC_BAD_FIELD;
    case (uint32_t) (4 << 16) | 7:
        return OFPERR_OFPBMC_BAD_VALUE;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 259:
        return OFPERR_OFPBMC_BAD_MASK;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 260:
        return OFPERR_OFPBMC_BAD_PREREQ;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 261:
        return OFPERR_OFPBMC_DUP_FIELD;
    case (uint32_t) (5 << 16) | 0:
        return OFPERR_OFPFMFC_UNKNOWN;
    case (uint32_t) (5 << 16) | 1:
        return OFPERR_OFPFMFC_TABLE_FULL;
    case (uint32_t) (5 << 16) | 2:
        return OFPERR_OFPFMFC_BAD_TABLE_ID;
    case (uint32_t) (5 << 16) | 3:
        return OFPERR_OFPFMFC_OVERLAP;
    case (uint32_t) (5 << 16) | 4:
        return OFPERR_OFPFMFC_EPERM;
    case (uint32_t) (5 << 16) | 5:
        return OFPERR_OFPFMFC_BAD_TIMEOUT;
    case (uint32_t) (5 << 16) | 6:
        return OFPERR_OFPFMFC_BAD_COMMAND;
    case (0x2320ULL << 32) | (uint32_t) (5 << 16) | 258:
        return OFPERR_OFPFMFC_BAD_FLAGS;
    case (0x2320ULL << 32) | (uint32_t) (5 << 16) | 256:
        return OFPERR_NXFMFC_HARDWARE;
    case (0x2320ULL << 32) | (uint32_t) (5 << 16) | 257:
        return OFPERR_NXFMFC_BAD_TABLE_ID;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 536:
        return OFPERR_NXFMFC_INVALID_TLV_FIELD;
    case (uint32_t) (6 << 16) | 0:
        return OFPERR_OFPGMFC_GROUP_EXISTS;
    case (uint32_t) (6 << 16) | 1:
        return OFPERR_OFPGMFC_INVALID_GROUP;
    case (uint32_t) (6 << 16) | 2:
        return OFPERR_OFPGMFC_WEIGHT_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 3:
        return OFPERR_OFPGMFC_OUT_OF_GROUPS;
    case (uint32_t) (6 << 16) | 4:
        return OFPERR_OFPGMFC_OUT_OF_BUCKETS;
    case (uint32_t) (6 << 16) | 5:
        return OFPERR_OFPGMFC_CHAINING_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 6:
        return OFPERR_OFPGMFC_WATCH_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 7:
        return OFPERR_OFPGMFC_LOOP;
    case (uint32_t) (6 << 16) | 8:
        return OFPERR_OFPGMFC_UNKNOWN_GROUP;
    case (uint32_t) (7 << 16) | 0:
        return OFPERR_OFPPMFC_BAD_PORT;
    case (uint32_t) (7 << 16) | 1:
        return OFPERR_OFPPMFC_BAD_HW_ADDR;
    case (uint32_t) (7 << 16) | 2:
        return OFPERR_OFPPMFC_BAD_CONFIG;
    case (uint32_t) (7 << 16) | 3:
        return OFPERR_OFPPMFC_BAD_ADVERTISE;
    case (uint32_t) (8 << 16) | 0:
        return OFPERR_OFPTMFC_BAD_TABLE;
    case (uint32_t) (8 << 16) | 1:
        return OFPERR_OFPTMFC_BAD_CONFIG;
    case (uint32_t) (9 << 16) | 0:
        return OFPERR_OFPQOFC_BAD_PORT;
    case (uint32_t) (9 << 16) | 1:
        return OFPERR_OFPQOFC_BAD_QUEUE;
    case (uint32_t) (9 << 16) | 2:
        return OFPERR_OFPQOFC_EPERM;
    case (uint32_t) (10 << 16) | 0:
        return OFPERR_OFPSCFC_BAD_FLAGS;
    case (uint32_t) (10 << 16) | 1:
        return OFPERR_OFPSCFC_BAD_LEN;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 513:
        return OFPERR_OFPRRFC_BAD_ROLE;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 2:
        return OFPERR_OFPBPC_BAD_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 3:
        return OFPERR_OFPBPC_BAD_LEN;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 4:
        return OFPERR_OFPBPC_BAD_VALUE;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 3:
        return OFPERR_OFPBPC_TOO_MANY;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 4:
        return OFPERR_OFPBPC_DUP_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 5:
        return OFPERR_OFPBPC_BAD_EXPERIMENTER;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 6:
        return OFPERR_OFPBPC_BAD_EXP_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 7:
        return OFPERR_OFPBPC_BAD_EXP_VALUE;
    case (0x2320ULL << 32) | (uint32_t) (14 << 16) | 8:
        return OFPERR_OFPBPC_EPERM;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 517:
        return OFPERR_OFPMOFC_MONITOR_EXISTS;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 519:
        return OFPERR_OFPMOFC_UNKNOWN_MONITOR;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 518:
        return OFPERR_OFPMOFC_BAD_FLAGS;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 527:
        return OFPERR_NXTTMFC_BAD_COMMAND;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 528:
        return OFPERR_NXTTMFC_BAD_OPT_LEN;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 529:
        return OFPERR_NXTTMFC_BAD_FIELD_IDX;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 530:
        return OFPERR_NXTTMFC_TABLE_FULL;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 531:
        return OFPERR_NXTTMFC_ALREADY_MAPPED;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 532:
        return OFPERR_NXTTMFC_DUP_ENTRY;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 537:
        return OFPERR_NXTTMFC_INVALID_TLV_DEL;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 533:
        return OFPERR_NXR_NOT_SUPPORTED;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 534:
        return OFPERR_NXR_STALE;
    case (0x2320ULL << 32) | (uint32_t) (1 << 16) | 535:
        return OFPERR_NXST_NOT_CONFIGURED;
    }

    return 0;
}

static const struct ofperr_domain ofperr_of11 = {
    "OpenFlow 1.1",
    2,
    ofperr_of11_decode,
    {
        {      0x0,  0,   0 }, /* OFPHFC_INCOMPATIBLE */
        {      0x0,  0,   1 }, /* OFPHFC_EPERM */
        {      0x0,  1,   0 }, /* OFPBRC_BAD_VERSION */
        {      0x0,  1,   1 }, /* OFPBRC_BAD_TYPE */
        {      0x0,  1,   2 }, /* OFPBRC_BAD_STAT */
        {      0x0,  1,   3 }, /* OFPBRC_BAD_VENDOR */
        {      0x0,  1,   4 }, /* OFPBRC_BAD_SUBTYPE */
        {      0x0,  1,   5 }, /* OFPBRC_EPERM */
        {      0x0,  1,   6 }, /* OFPBRC_BAD_LEN */
        {      0x0,  1,   7 }, /* OFPBRC_BUFFER_EMPTY */
        {      0x0,  1,   8 }, /* OFPBRC_BUFFER_UNKNOWN */
        {      0x0,  1,   9 }, /* OFPBRC_BAD_TABLE_ID */
        {      0x0,  1,   5 }, /* OFPBRC_IS_SLAVE */
        {   0x2320,  1, 514 }, /* OFPBRC_BAD_PORT */
        {       -1, -1,  -1 }, /* OFPBRC_BAD_PACKET */
        {       -1, -1,  -1 }, /* OFPBRC_MULTIPART_BUFFER_OVERFLOW */
        {       -1, -1,  -1 }, /* OFPBRC_PIPELINE_FIELDS_ONLY */
        {   0x2320,  1, 256 }, /* NXBRC_NXM_INVALID */
        {   0x2320,  1, 257 }, /* NXBRC_NXM_BAD_TYPE */
        {   0x2320,  1, 515 }, /* NXBRC_MUST_BE_ZERO */
        {   0x2320,  1, 516 }, /* NXBRC_BAD_REASON */
        {   0x2320,  1, 520 }, /* NXBRC_FM_BAD_EVENT */
        {   0x2320,  1, 521 }, /* NXBRC_UNENCODABLE_ERROR */
        {      0x0,  2,   0 }, /* OFPBAC_BAD_TYPE */
        {      0x0,  2,   1 }, /* OFPBAC_BAD_LEN */
        {      0x0,  2,   2 }, /* OFPBAC_BAD_VENDOR */
        {      0x0,  2,   3 }, /* OFPBAC_BAD_VENDOR_TYPE */
        {      0x0,  2,   4 }, /* OFPBAC_BAD_OUT_PORT */
        {      0x0,  2,   5 }, /* OFPBAC_BAD_ARGUMENT */
        {      0x0,  2,   6 }, /* OFPBAC_EPERM */
        {      0x0,  2,   7 }, /* OFPBAC_TOO_MANY */
        {      0x0,  2,   8 }, /* OFPBAC_BAD_QUEUE */
        {      0x0,  2,   9 }, /* OFPBAC_BAD_OUT_GROUP */
        {      0x0,  2,  10 }, /* OFPBAC_MATCH_INCONSISTENT */
        {      0x0,  2,  11 }, /* OFPBAC_UNSUPPORTED_ORDER */
        {      0x0,  2,  12 }, /* OFPBAC_BAD_TAG */
        {   0x2320,  1, 523 }, /* OFPBAC_BAD_SET_TYPE */
        {   0x2320,  1, 524 }, /* OFPBAC_BAD_SET_LEN */
        {   0x2320,  1, 525 }, /* OFPBAC_BAD_SET_ARGUMENT */
        {       -1, -1,  -1 }, /* OFPBAC_BAD_SET_MASK */
        {   0x2320,  2, 256 }, /* NXBAC_MUST_BE_ZERO */
        {   0x2320,  2, 526 }, /* NXBAC_BAD_CONJUNCTION */
        {       -1, -1,  -1 }, /* NXBAC_BAD_HEADER_TYPE */
        {       -1, -1,  -1 }, /* NXBAC_UNKNOWN_ED_PROP */
        {       -1, -1,  -1 }, /* NXBAC_BAD_ED_PROP */
        {      0x0,  3,   0 }, /* OFPBIC_UNKNOWN_INST */
        {      0x0,  3,   1 }, /* OFPBIC_UNSUP_INST */
        {      0x0,  3,   2 }, /* OFPBIC_BAD_TABLE_ID */
        {      0x0,  3,   3 }, /* OFPBIC_UNSUP_METADATA */
        {      0x0,  3,   4 }, /* OFPBIC_UNSUP_METADATA_MASK */
        {      0x0,  3,   5 }, /* OFPBIC_BAD_EXPERIMENTER */
        {      0x0,  3,   5 }, /* OFPBIC_BAD_EXP_TYPE */
        {       -1, -1,  -1 }, /* OFPBIC_BAD_LEN */
        {       -1, -1,  -1 }, /* OFPBIC_EPERM */
        {   0x2320,  3, 256 }, /* OFPBIC_DUP_INST */
        {      0x0,  4,   0 }, /* OFPBMC_BAD_TYPE */
        {      0x0,  4,   1 }, /* OFPBMC_BAD_LEN */
        {      0x0,  4,   2 }, /* OFPBMC_BAD_TAG */
        {      0x0,  4,   3 }, /* OFPBMC_BAD_DL_ADDR_MASK */
        {      0x0,  4,   4 }, /* OFPBMC_BAD_NW_ADDR_MASK */
        {      0x0,  4,   5 }, /* OFPBMC_BAD_WILDCARDS */
        {      0x0,  4,   6 }, /* OFPBMC_BAD_FIELD */
        {      0x0,  4,   7 }, /* OFPBMC_BAD_VALUE */
        {   0x2320,  1, 259 }, /* OFPBMC_BAD_MASK */
        {   0x2320,  1, 260 }, /* OFPBMC_BAD_PREREQ */
        {   0x2320,  1, 261 }, /* OFPBMC_DUP_FIELD */
        {       -1, -1,  -1 }, /* OFPBMC_EPERM */
        {      0x0,  5,   0 }, /* OFPFMFC_UNKNOWN */
        {      0x0,  5,   1 }, /* OFPFMFC_TABLE_FULL */
        {      0x0,  5,   2 }, /* OFPFMFC_BAD_TABLE_ID */
        {      0x0,  5,   3 }, /* OFPFMFC_OVERLAP */
        {      0x0,  5,   4 }, /* OFPFMFC_EPERM */
        {      0x0,  5,   5 }, /* OFPFMFC_BAD_TIMEOUT */
        {       -1, -1,  -1 }, /* OFPFMFC_BAD_EMERG_TIMEOUT */
        {      0x0,  5,   6 }, /* OFPFMFC_BAD_COMMAND */
        {   0x2320,  5, 258 }, /* OFPFMFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPFMFC_UNSUPPORTED */
        {   0x2320,  5, 256 }, /* NXFMFC_HARDWARE */
        {   0x2320,  5, 257 }, /* NXFMFC_BAD_TABLE_ID */
        {   0x2320,  1, 536 }, /* NXFMFC_INVALID_TLV_FIELD */
        {      0x0,  6,   0 }, /* OFPGMFC_GROUP_EXISTS */
        {      0x0,  6,   1 }, /* OFPGMFC_INVALID_GROUP */
        {      0x0,  6,   2 }, /* OFPGMFC_WEIGHT_UNSUPPORTED */
        {      0x0,  6,   3 }, /* OFPGMFC_OUT_OF_GROUPS */
        {      0x0,  6,   4 }, /* OFPGMFC_OUT_OF_BUCKETS */
        {      0x0,  6,   5 }, /* OFPGMFC_CHAINING_UNSUPPORTED */
        {      0x0,  6,   6 }, /* OFPGMFC_WATCH_UNSUPPORTED */
        {      0x0,  6,   7 }, /* OFPGMFC_LOOP */
        {      0x0,  6,   8 }, /* OFPGMFC_UNKNOWN_GROUP */
        {       -1, -1,  -1 }, /* OFPGMFC_CHAINED_GROUP */
        {       -1, -1,  -1 }, /* OFPGMFC_BAD_TYPE */
        {       -1, -1,  -1 }, /* OFPGMFC_BAD_COMMAND */
        {       -1, -1,  -1 }, /* OFPGMFC_BAD_BUCKET */
        {       -1, -1,  -1 }, /* OFPGMFC_BAD_WATCH */
        {       -1, -1,  -1 }, /* OFPGMFC_EPERM */
        {       -1, -1,  -1 }, /* OFPGMFC_UNKNOWN_BUCKET */
        {       -1, -1,  -1 }, /* OFPGMFC_BUCKET_EXISTS */
        {      0x0,  7,   0 }, /* OFPPMFC_BAD_PORT */
        {      0x0,  7,   1 }, /* OFPPMFC_BAD_HW_ADDR */
        {      0x0,  7,   2 }, /* OFPPMFC_BAD_CONFIG */
        {      0x0,  7,   3 }, /* OFPPMFC_BAD_ADVERTISE */
        {       -1, -1,  -1 }, /* OFPPMFC_EPERM */
        {      0x0,  8,   0 }, /* OFPTMFC_BAD_TABLE */
        {      0x0,  8,   1 }, /* OFPTMFC_BAD_CONFIG */
        {       -1, -1,  -1 }, /* OFPTMFC_EPERM */
        {      0x0,  9,   0 }, /* OFPQOFC_BAD_PORT */
        {      0x0,  9,   1 }, /* OFPQOFC_BAD_QUEUE */
        {      0x0,  9,   2 }, /* OFPQOFC_EPERM */
        {       -1, -1,  -1 }, /* NXQOFC_QUEUE_ERROR */
        {      0x0, 10,   0 }, /* OFPSCFC_BAD_FLAGS */
        {      0x0, 10,   1 }, /* OFPSCFC_BAD_LEN */
        {       -1, -1,  -1 }, /* OFPSCFC_EPERM */
        {       -1, -1,  -1 }, /* OFPRRFC_STALE */
        {       -1, -1,  -1 }, /* OFPRRFC_UNSUP */
        {   0x2320,  1, 513 }, /* OFPRRFC_BAD_ROLE */
        {       -1, -1,  -1 }, /* OFPMMFC_UNKNOWN */
        {       -1, -1,  -1 }, /* OFPMMFC_METER_EXISTS */
        {       -1, -1,  -1 }, /* OFPMMFC_INVALID_METER */
        {       -1, -1,  -1 }, /* OFPMMFC_UNKNOWN_METER */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_COMMAND */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_RATE */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_BURST */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_BAND */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_BAND_VALUE */
        {       -1, -1,  -1 }, /* OFPMMFC_OUT_OF_METERS */
        {       -1, -1,  -1 }, /* OFPMMFC_OUT_OF_BANDS */
        {       -1, -1,  -1 }, /* OFPTFFC_BAD_TABLE */
        {       -1, -1,  -1 }, /* OFPTFFC_BAD_METADATA */
        {       -1, -1,  -1 }, /* OFPTFFC_EPERM */
        {   0x2320, 13,   2 }, /* OFPBPC_BAD_TYPE */
        {   0x2320, 13,   3 }, /* OFPBPC_BAD_LEN */
        {   0x2320, 13,   4 }, /* OFPBPC_BAD_VALUE */
        {   0x2320, 14,   3 }, /* OFPBPC_TOO_MANY */
        {   0x2320, 14,   4 }, /* OFPBPC_DUP_TYPE */
        {   0x2320, 14,   5 }, /* OFPBPC_BAD_EXPERIMENTER */
        {   0x2320, 14,   6 }, /* OFPBPC_BAD_EXP_TYPE */
        {   0x2320, 14,   7 }, /* OFPBPC_BAD_EXP_VALUE */
        {   0x2320, 14,   8 }, /* OFPBPC_EPERM */
        {       -1, -1,  -1 }, /* OFPACFC_INVALID */
        {       -1, -1,  -1 }, /* OFPACFC_UNSUPPORTED */
        {       -1, -1,  -1 }, /* OFPACFC_EPERM */
        {       -1, -1,  -1 }, /* OFPBFC_UNKNOWN */
        {       -1, -1,  -1 }, /* OFPBFC_EPERM */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_ID */
        {       -1, -1,  -1 }, /* OFPBFC_BUNDLE_EXIST */
        {       -1, -1,  -1 }, /* OFPBFC_BUNDLE_CLOSED */
        {       -1, -1,  -1 }, /* OFPBFC_OUT_OF_BUNDLES */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_TYPE */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_BAD_LEN */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_BAD_XID */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_UNSUP */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_CONFLICT */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_TOO_MANY */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_FAILED */
        {       -1, -1,  -1 }, /* OFPBFC_TIMEOUT */
        {       -1, -1,  -1 }, /* OFPBFC_BUNDLE_IN_PROGRESS */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_VERSION */
        {       -1, -1,  -1 }, /* OFPMOFC_UNKNOWN */
        {   0x2320,  1, 517 }, /* OFPMOFC_MONITOR_EXISTS */
        {       -1, -1,  -1 }, /* OFPMOFC_INVALID_MONITOR */
        {   0x2320,  1, 519 }, /* OFPMOFC_UNKNOWN_MONITOR */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_COMMAND */
        {   0x2320,  1, 518 }, /* OFPMOFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_TABLE_ID */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_OUT */
        {   0x2320,  1, 527 }, /* NXTTMFC_BAD_COMMAND */
        {   0x2320,  1, 528 }, /* NXTTMFC_BAD_OPT_LEN */
        {   0x2320,  1, 529 }, /* NXTTMFC_BAD_FIELD_IDX */
        {   0x2320,  1, 530 }, /* NXTTMFC_TABLE_FULL */
        {   0x2320,  1, 531 }, /* NXTTMFC_ALREADY_MAPPED */
        {   0x2320,  1, 532 }, /* NXTTMFC_DUP_ENTRY */
        {   0x2320,  1, 537 }, /* NXTTMFC_INVALID_TLV_DEL */
        {   0x2320,  1, 533 }, /* NXR_NOT_SUPPORTED */
        {   0x2320,  1, 534 }, /* NXR_STALE */
        {   0x2320,  1, 535 }, /* NXST_NOT_CONFIGURED */
    },
};

static enum ofperr
ofperr_of12_decode(uint32_t vendor, uint16_t type, uint16_t code)
{
    switch (((uint64_t) vendor << 32) | (uint32_t) (type << 16) | code) {
    case (uint32_t) (0 << 16) | 0:
        return OFPERR_OFPHFC_INCOMPATIBLE;
    case (uint32_t) (0 << 16) | 1:
        return OFPERR_OFPHFC_EPERM;
    case (uint32_t) (1 << 16) | 0:
        return OFPERR_OFPBRC_BAD_VERSION;
    case (uint32_t) (1 << 16) | 1:
        return OFPERR_OFPBRC_BAD_TYPE;
    case (uint32_t) (1 << 16) | 2:
        return OFPERR_OFPBRC_BAD_STAT;
    case (uint32_t) (1 << 16) | 3:
        return OFPERR_OFPBRC_BAD_VENDOR;
    case (uint32_t) (1 << 16) | 4:
        return OFPERR_OFPBRC_BAD_SUBTYPE;
    case (uint32_t) (1 << 16) | 5:
        return OFPERR_OFPBRC_EPERM;
    case (uint32_t) (1 << 16) | 6:
        return OFPERR_OFPBRC_BAD_LEN;
    case (uint32_t) (1 << 16) | 7:
        return OFPERR_OFPBRC_BUFFER_EMPTY;
    case (uint32_t) (1 << 16) | 8:
        return OFPERR_OFPBRC_BUFFER_UNKNOWN;
    case (uint32_t) (1 << 16) | 9:
        return OFPERR_OFPBRC_BAD_TABLE_ID;
    case (uint32_t) (1 << 16) | 10:
        return OFPERR_OFPBRC_IS_SLAVE;
    case (uint32_t) (1 << 16) | 11:
        return OFPERR_OFPBRC_BAD_PORT;
    case (uint32_t) (1 << 16) | 12:
        return OFPERR_OFPBRC_BAD_PACKET;
    case (0x2320ULL << 32) | (uint32_t) (2 << 16) | 0:
        return OFPERR_NXBRC_NXM_INVALID;
    case (0x2320ULL << 32) | (uint32_t) (3 << 16) | 0:
        return OFPERR_NXBRC_NXM_BAD_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (4 << 16) | 0:
        return OFPERR_NXBRC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (5 << 16) | 0:
        return OFPERR_NXBRC_BAD_REASON;
    case (0x2320ULL << 32) | (uint32_t) (9 << 16) | 0:
        return OFPERR_NXBRC_FM_BAD_EVENT;
    case (0x2320ULL << 32) | (uint32_t) (10 << 16) | 0:
        return OFPERR_NXBRC_UNENCODABLE_ERROR;
    case (uint32_t) (2 << 16) | 0:
        return OFPERR_OFPBAC_BAD_TYPE;
    case (uint32_t) (2 << 16) | 1:
        return OFPERR_OFPBAC_BAD_LEN;
    case (uint32_t) (2 << 16) | 2:
        return OFPERR_OFPBAC_BAD_VENDOR;
    case (uint32_t) (2 << 16) | 3:
        return OFPERR_OFPBAC_BAD_VENDOR_TYPE;
    case (uint32_t) (2 << 16) | 4:
        return OFPERR_OFPBAC_BAD_OUT_PORT;
    case (uint32_t) (2 << 16) | 5:
        return OFPERR_OFPBAC_BAD_ARGUMENT;
    case (uint32_t) (2 << 16) | 6:
        return OFPERR_OFPBAC_EPERM;
    case (uint32_t) (2 << 16) | 7:
        return OFPERR_OFPBAC_TOO_MANY;
    case (uint32_t) (2 << 16) | 8:
        return OFPERR_OFPBAC_BAD_QUEUE;
    case (uint32_t) (2 << 16) | 9:
        return OFPERR_OFPBAC_BAD_OUT_GROUP;
    case (uint32_t) (2 << 16) | 10:
        return OFPERR_OFPBAC_MATCH_INCONSISTENT;
    case (uint32_t) (2 << 16) | 11:
        return OFPERR_OFPBAC_UNSUPPORTED_ORDER;
    case (uint32_t) (2 << 16) | 12:
        return OFPERR_OFPBAC_BAD_TAG;
    case (uint32_t) (2 << 16) | 13:
        return OFPERR_OFPBAC_BAD_SET_TYPE;
    case (uint32_t) (2 << 16) | 14:
        return OFPERR_OFPBAC_BAD_SET_LEN;
    case (uint32_t) (2 << 16) | 15:
        return OFPERR_OFPBAC_BAD_SET_ARGUMENT;
    case (0x2320ULL << 32) | (uint32_t) (11 << 16) | 0:
        return OFPERR_NXBAC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (15 << 16) | 0:
        return OFPERR_NXBAC_BAD_CONJUNCTION;
    case (uint32_t) (3 << 16) | 0:
        return OFPERR_OFPBIC_UNKNOWN_INST;
    case (uint32_t) (3 << 16) | 1:
        return OFPERR_OFPBIC_UNSUP_INST;
    case (uint32_t) (3 << 16) | 2:
        return OFPERR_OFPBIC_BAD_TABLE_ID;
    case (uint32_t) (3 << 16) | 3:
        return OFPERR_OFPBIC_UNSUP_METADATA;
    case (uint32_t) (3 << 16) | 4:
        return OFPERR_OFPBIC_UNSUP_METADATA_MASK;
    case (uint32_t) (3 << 16) | 5:
        return OFPERR_OFPBIC_BAD_EXPERIMENTER;
    case (uint32_t) (3 << 16) | 6:
        return OFPERR_OFPBIC_BAD_EXP_TYPE;
    case (uint32_t) (3 << 16) | 7:
        return OFPERR_OFPBIC_BAD_LEN;
    case (uint32_t) (3 << 16) | 8:
        return OFPERR_OFPBIC_EPERM;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2600 << 16) | 0:
        return OFPERR_OFPBIC_DUP_INST;
    case (uint32_t) (4 << 16) | 0:
        return OFPERR_OFPBMC_BAD_TYPE;
    case (uint32_t) (4 << 16) | 1:
        return OFPERR_OFPBMC_BAD_LEN;
    case (uint32_t) (4 << 16) | 2:
        return OFPERR_OFPBMC_BAD_TAG;
    case (uint32_t) (4 << 16) | 3:
        return OFPERR_OFPBMC_BAD_DL_ADDR_MASK;
    case (uint32_t) (4 << 16) | 4:
        return OFPERR_OFPBMC_BAD_NW_ADDR_MASK;
    case (uint32_t) (4 << 16) | 5:
        return OFPERR_OFPBMC_BAD_WILDCARDS;
    case (uint32_t) (4 << 16) | 6:
        return OFPERR_OFPBMC_BAD_FIELD;
    case (uint32_t) (4 << 16) | 7:
        return OFPERR_OFPBMC_BAD_VALUE;
    case (uint32_t) (4 << 16) | 8:
        return OFPERR_OFPBMC_BAD_MASK;
    case (uint32_t) (4 << 16) | 9:
        return OFPERR_OFPBMC_BAD_PREREQ;
    case (uint32_t) (4 << 16) | 10:
        return OFPERR_OFPBMC_DUP_FIELD;
    case (uint32_t) (4 << 16) | 11:
        return OFPERR_OFPBMC_EPERM;
    case (uint32_t) (5 << 16) | 0:
        return OFPERR_OFPFMFC_UNKNOWN;
    case (uint32_t) (5 << 16) | 1:
        return OFPERR_OFPFMFC_TABLE_FULL;
    case (uint32_t) (5 << 16) | 2:
        return OFPERR_OFPFMFC_BAD_TABLE_ID;
    case (uint32_t) (5 << 16) | 3:
        return OFPERR_OFPFMFC_OVERLAP;
    case (uint32_t) (5 << 16) | 4:
        return OFPERR_OFPFMFC_EPERM;
    case (uint32_t) (5 << 16) | 5:
        return OFPERR_OFPFMFC_BAD_TIMEOUT;
    case (uint32_t) (5 << 16) | 6:
        return OFPERR_OFPFMFC_BAD_COMMAND;
    case (uint32_t) (5 << 16) | 7:
        return OFPERR_OFPFMFC_BAD_FLAGS;
    case (0x2320ULL << 32) | (uint32_t) (12 << 16) | 0:
        return OFPERR_NXFMFC_HARDWARE;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 0:
        return OFPERR_NXFMFC_BAD_TABLE_ID;
    case (0x2320ULL << 32) | (uint32_t) (37 << 16) | 0:
        return OFPERR_NXFMFC_INVALID_TLV_FIELD;
    case (uint32_t) (6 << 16) | 0:
        return OFPERR_OFPGMFC_GROUP_EXISTS;
    case (uint32_t) (6 << 16) | 1:
        return OFPERR_OFPGMFC_INVALID_GROUP;
    case (uint32_t) (6 << 16) | 2:
        return OFPERR_OFPGMFC_WEIGHT_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 3:
        return OFPERR_OFPGMFC_OUT_OF_GROUPS;
    case (uint32_t) (6 << 16) | 4:
        return OFPERR_OFPGMFC_OUT_OF_BUCKETS;
    case (uint32_t) (6 << 16) | 5:
        return OFPERR_OFPGMFC_CHAINING_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 6:
        return OFPERR_OFPGMFC_WATCH_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 7:
        return OFPERR_OFPGMFC_LOOP;
    case (uint32_t) (6 << 16) | 8:
        return OFPERR_OFPGMFC_UNKNOWN_GROUP;
    case (uint32_t) (6 << 16) | 9:
        return OFPERR_OFPGMFC_CHAINED_GROUP;
    case (uint32_t) (6 << 16) | 10:
        return OFPERR_OFPGMFC_BAD_TYPE;
    case (uint32_t) (6 << 16) | 11:
        return OFPERR_OFPGMFC_BAD_COMMAND;
    case (uint32_t) (6 << 16) | 12:
        return OFPERR_OFPGMFC_BAD_BUCKET;
    case (uint32_t) (6 << 16) | 13:
        return OFPERR_OFPGMFC_BAD_WATCH;
    case (uint32_t) (6 << 16) | 14:
        return OFPERR_OFPGMFC_EPERM;
    case (uint32_t) (7 << 16) | 0:
        return OFPERR_OFPPMFC_BAD_PORT;
    case (uint32_t) (7 << 16) | 1:
        return OFPERR_OFPPMFC_BAD_HW_ADDR;
    case (uint32_t) (7 << 16) | 2:
        return OFPERR_OFPPMFC_BAD_CONFIG;
    case (uint32_t) (7 << 16) | 3:
        return OFPERR_OFPPMFC_BAD_ADVERTISE;
    case (uint32_t) (7 << 16) | 4:
        return OFPERR_OFPPMFC_EPERM;
    case (uint32_t) (8 << 16) | 0:
        return OFPERR_OFPTMFC_BAD_TABLE;
    case (uint32_t) (8 << 16) | 1:
        return OFPERR_OFPTMFC_BAD_CONFIG;
    case (uint32_t) (8 << 16) | 2:
        return OFPERR_OFPTMFC_EPERM;
    case (uint32_t) (9 << 16) | 0:
        return OFPERR_OFPQOFC_BAD_PORT;
    case (uint32_t) (9 << 16) | 1:
        return OFPERR_OFPQOFC_BAD_QUEUE;
    case (uint32_t) (9 << 16) | 2:
        return OFPERR_OFPQOFC_EPERM;
    case (uint32_t) (10 << 16) | 0:
        return OFPERR_OFPSCFC_BAD_FLAGS;
    case (uint32_t) (10 << 16) | 1:
        return OFPERR_OFPSCFC_BAD_LEN;
    case (uint32_t) (10 << 16) | 2:
        return OFPERR_OFPSCFC_EPERM;
    case (uint32_t) (11 << 16) | 0:
        return OFPERR_OFPRRFC_STALE;
    case (uint32_t) (11 << 16) | 1:
        return OFPERR_OFPRRFC_UNSUP;
    case (uint32_t) (11 << 16) | 2:
        return OFPERR_OFPRRFC_BAD_ROLE;
    case (0x2320ULL << 32) | (uint32_t) (25 << 16) | 0:
        return OFPERR_OFPBPC_BAD_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (26 << 16) | 0:
        return OFPERR_OFPBPC_BAD_LEN;
    case (0x2320ULL << 32) | (uint32_t) (27 << 16) | 0:
        return OFPERR_OFPBPC_BAD_VALUE;
    case (0x2320ULL << 32) | (uint32_t) (28 << 16) | 0:
        return OFPERR_OFPBPC_TOO_MANY;
    case (0x2320ULL << 32) | (uint32_t) (29 << 16) | 0:
        return OFPERR_OFPBPC_DUP_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (30 << 16) | 0:
        return OFPERR_OFPBPC_BAD_EXPERIMENTER;
    case (0x2320ULL << 32) | (uint32_t) (31 << 16) | 0:
        return OFPERR_OFPBPC_BAD_EXP_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (32 << 16) | 0:
        return OFPERR_OFPBPC_BAD_EXP_VALUE;
    case (0x2320ULL << 32) | (uint32_t) (33 << 16) | 0:
        return OFPERR_OFPBPC_EPERM;
    case (0x2320ULL << 32) | (uint32_t) (6 << 16) | 0:
        return OFPERR_OFPMOFC_MONITOR_EXISTS;
    case (0x2320ULL << 32) | (uint32_t) (8 << 16) | 0:
        return OFPERR_OFPMOFC_UNKNOWN_MONITOR;
    case (0x2320ULL << 32) | (uint32_t) (7 << 16) | 0:
        return OFPERR_OFPMOFC_BAD_FLAGS;
    case (0x2320ULL << 32) | (uint32_t) (16 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_COMMAND;
    case (0x2320ULL << 32) | (uint32_t) (17 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_OPT_LEN;
    case (0x2320ULL << 32) | (uint32_t) (18 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_FIELD_IDX;
    case (0x2320ULL << 32) | (uint32_t) (19 << 16) | 0:
        return OFPERR_NXTTMFC_TABLE_FULL;
    case (0x2320ULL << 32) | (uint32_t) (20 << 16) | 0:
        return OFPERR_NXTTMFC_ALREADY_MAPPED;
    case (0x2320ULL << 32) | (uint32_t) (21 << 16) | 0:
        return OFPERR_NXTTMFC_DUP_ENTRY;
    case (0x2320ULL << 32) | (uint32_t) (38 << 16) | 0:
        return OFPERR_NXTTMFC_INVALID_TLV_DEL;
    case (0x2320ULL << 32) | (uint32_t) (34 << 16) | 0:
        return OFPERR_NXR_NOT_SUPPORTED;
    case (0x2320ULL << 32) | (uint32_t) (35 << 16) | 0:
        return OFPERR_NXR_STALE;
    case (0x2320ULL << 32) | (uint32_t) (36 << 16) | 0:
        return OFPERR_NXST_NOT_CONFIGURED;
    }

    return 0;
}

static const struct ofperr_domain ofperr_of12 = {
    "OpenFlow 1.2",
    3,
    ofperr_of12_decode,
    {
        {      0x0,  0,   0 }, /* OFPHFC_INCOMPATIBLE */
        {      0x0,  0,   1 }, /* OFPHFC_EPERM */
        {      0x0,  1,   0 }, /* OFPBRC_BAD_VERSION */
        {      0x0,  1,   1 }, /* OFPBRC_BAD_TYPE */
        {      0x0,  1,   2 }, /* OFPBRC_BAD_STAT */
        {      0x0,  1,   3 }, /* OFPBRC_BAD_VENDOR */
        {      0x0,  1,   4 }, /* OFPBRC_BAD_SUBTYPE */
        {      0x0,  1,   5 }, /* OFPBRC_EPERM */
        {      0x0,  1,   6 }, /* OFPBRC_BAD_LEN */
        {      0x0,  1,   7 }, /* OFPBRC_BUFFER_EMPTY */
        {      0x0,  1,   8 }, /* OFPBRC_BUFFER_UNKNOWN */
        {      0x0,  1,   9 }, /* OFPBRC_BAD_TABLE_ID */
        {      0x0,  1,  10 }, /* OFPBRC_IS_SLAVE */
        {      0x0,  1,  11 }, /* OFPBRC_BAD_PORT */
        {      0x0,  1,  12 }, /* OFPBRC_BAD_PACKET */
        {       -1, -1,  -1 }, /* OFPBRC_MULTIPART_BUFFER_OVERFLOW */
        {       -1, -1,  -1 }, /* OFPBRC_PIPELINE_FIELDS_ONLY */
        {   0x2320,  2,   0 }, /* NXBRC_NXM_INVALID */
        {   0x2320,  3,   0 }, /* NXBRC_NXM_BAD_TYPE */
        {   0x2320,  4,   0 }, /* NXBRC_MUST_BE_ZERO */
        {   0x2320,  5,   0 }, /* NXBRC_BAD_REASON */
        {   0x2320,  9,   0 }, /* NXBRC_FM_BAD_EVENT */
        {   0x2320, 10,   0 }, /* NXBRC_UNENCODABLE_ERROR */
        {      0x0,  2,   0 }, /* OFPBAC_BAD_TYPE */
        {      0x0,  2,   1 }, /* OFPBAC_BAD_LEN */
        {      0x0,  2,   2 }, /* OFPBAC_BAD_VENDOR */
        {      0x0,  2,   3 }, /* OFPBAC_BAD_VENDOR_TYPE */
        {      0x0,  2,   4 }, /* OFPBAC_BAD_OUT_PORT */
        {      0x0,  2,   5 }, /* OFPBAC_BAD_ARGUMENT */
        {      0x0,  2,   6 }, /* OFPBAC_EPERM */
        {      0x0,  2,   7 }, /* OFPBAC_TOO_MANY */
        {      0x0,  2,   8 }, /* OFPBAC_BAD_QUEUE */
        {      0x0,  2,   9 }, /* OFPBAC_BAD_OUT_GROUP */
        {      0x0,  2,  10 }, /* OFPBAC_MATCH_INCONSISTENT */
        {      0x0,  2,  11 }, /* OFPBAC_UNSUPPORTED_ORDER */
        {      0x0,  2,  12 }, /* OFPBAC_BAD_TAG */
        {      0x0,  2,  13 }, /* OFPBAC_BAD_SET_TYPE */
        {      0x0,  2,  14 }, /* OFPBAC_BAD_SET_LEN */
        {      0x0,  2,  15 }, /* OFPBAC_BAD_SET_ARGUMENT */
        {       -1, -1,  -1 }, /* OFPBAC_BAD_SET_MASK */
        {   0x2320, 11,   0 }, /* NXBAC_MUST_BE_ZERO */
        {   0x2320, 15,   0 }, /* NXBAC_BAD_CONJUNCTION */
        {       -1, -1,  -1 }, /* NXBAC_BAD_HEADER_TYPE */
        {       -1, -1,  -1 }, /* NXBAC_UNKNOWN_ED_PROP */
        {       -1, -1,  -1 }, /* NXBAC_BAD_ED_PROP */
        {      0x0,  3,   0 }, /* OFPBIC_UNKNOWN_INST */
        {      0x0,  3,   1 }, /* OFPBIC_UNSUP_INST */
        {      0x0,  3,   2 }, /* OFPBIC_BAD_TABLE_ID */
        {      0x0,  3,   3 }, /* OFPBIC_UNSUP_METADATA */
        {      0x0,  3,   4 }, /* OFPBIC_UNSUP_METADATA_MASK */
        {      0x0,  3,   5 }, /* OFPBIC_BAD_EXPERIMENTER */
        {      0x0,  3,   6 }, /* OFPBIC_BAD_EXP_TYPE */
        {      0x0,  3,   7 }, /* OFPBIC_BAD_LEN */
        {      0x0,  3,   8 }, /* OFPBIC_EPERM */
        { 0x4f4e4600, 2600,   0 }, /* OFPBIC_DUP_INST */
        {      0x0,  4,   0 }, /* OFPBMC_BAD_TYPE */
        {      0x0,  4,   1 }, /* OFPBMC_BAD_LEN */
        {      0x0,  4,   2 }, /* OFPBMC_BAD_TAG */
        {      0x0,  4,   3 }, /* OFPBMC_BAD_DL_ADDR_MASK */
        {      0x0,  4,   4 }, /* OFPBMC_BAD_NW_ADDR_MASK */
        {      0x0,  4,   5 }, /* OFPBMC_BAD_WILDCARDS */
        {      0x0,  4,   6 }, /* OFPBMC_BAD_FIELD */
        {      0x0,  4,   7 }, /* OFPBMC_BAD_VALUE */
        {      0x0,  4,   8 }, /* OFPBMC_BAD_MASK */
        {      0x0,  4,   9 }, /* OFPBMC_BAD_PREREQ */
        {      0x0,  4,  10 }, /* OFPBMC_DUP_FIELD */
        {      0x0,  4,  11 }, /* OFPBMC_EPERM */
        {      0x0,  5,   0 }, /* OFPFMFC_UNKNOWN */
        {      0x0,  5,   1 }, /* OFPFMFC_TABLE_FULL */
        {      0x0,  5,   2 }, /* OFPFMFC_BAD_TABLE_ID */
        {      0x0,  5,   3 }, /* OFPFMFC_OVERLAP */
        {      0x0,  5,   4 }, /* OFPFMFC_EPERM */
        {      0x0,  5,   5 }, /* OFPFMFC_BAD_TIMEOUT */
        {       -1, -1,  -1 }, /* OFPFMFC_BAD_EMERG_TIMEOUT */
        {      0x0,  5,   6 }, /* OFPFMFC_BAD_COMMAND */
        {      0x0,  5,   7 }, /* OFPFMFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPFMFC_UNSUPPORTED */
        {   0x2320, 12,   0 }, /* NXFMFC_HARDWARE */
        {   0x2320, 13,   0 }, /* NXFMFC_BAD_TABLE_ID */
        {   0x2320, 37,   0 }, /* NXFMFC_INVALID_TLV_FIELD */
        {      0x0,  6,   0 }, /* OFPGMFC_GROUP_EXISTS */
        {      0x0,  6,   1 }, /* OFPGMFC_INVALID_GROUP */
        {      0x0,  6,   2 }, /* OFPGMFC_WEIGHT_UNSUPPORTED */
        {      0x0,  6,   3 }, /* OFPGMFC_OUT_OF_GROUPS */
        {      0x0,  6,   4 }, /* OFPGMFC_OUT_OF_BUCKETS */
        {      0x0,  6,   5 }, /* OFPGMFC_CHAINING_UNSUPPORTED */
        {      0x0,  6,   6 }, /* OFPGMFC_WATCH_UNSUPPORTED */
        {      0x0,  6,   7 }, /* OFPGMFC_LOOP */
        {      0x0,  6,   8 }, /* OFPGMFC_UNKNOWN_GROUP */
        {      0x0,  6,   9 }, /* OFPGMFC_CHAINED_GROUP */
        {      0x0,  6,  10 }, /* OFPGMFC_BAD_TYPE */
        {      0x0,  6,  11 }, /* OFPGMFC_BAD_COMMAND */
        {      0x0,  6,  12 }, /* OFPGMFC_BAD_BUCKET */
        {      0x0,  6,  13 }, /* OFPGMFC_BAD_WATCH */
        {      0x0,  6,  14 }, /* OFPGMFC_EPERM */
        {       -1, -1,  -1 }, /* OFPGMFC_UNKNOWN_BUCKET */
        {       -1, -1,  -1 }, /* OFPGMFC_BUCKET_EXISTS */
        {      0x0,  7,   0 }, /* OFPPMFC_BAD_PORT */
        {      0x0,  7,   1 }, /* OFPPMFC_BAD_HW_ADDR */
        {      0x0,  7,   2 }, /* OFPPMFC_BAD_CONFIG */
        {      0x0,  7,   3 }, /* OFPPMFC_BAD_ADVERTISE */
        {      0x0,  7,   4 }, /* OFPPMFC_EPERM */
        {      0x0,  8,   0 }, /* OFPTMFC_BAD_TABLE */
        {      0x0,  8,   1 }, /* OFPTMFC_BAD_CONFIG */
        {      0x0,  8,   2 }, /* OFPTMFC_EPERM */
        {      0x0,  9,   0 }, /* OFPQOFC_BAD_PORT */
        {      0x0,  9,   1 }, /* OFPQOFC_BAD_QUEUE */
        {      0x0,  9,   2 }, /* OFPQOFC_EPERM */
        {       -1, -1,  -1 }, /* NXQOFC_QUEUE_ERROR */
        {      0x0, 10,   0 }, /* OFPSCFC_BAD_FLAGS */
        {      0x0, 10,   1 }, /* OFPSCFC_BAD_LEN */
        {      0x0, 10,   2 }, /* OFPSCFC_EPERM */
        {      0x0, 11,   0 }, /* OFPRRFC_STALE */
        {      0x0, 11,   1 }, /* OFPRRFC_UNSUP */
        {      0x0, 11,   2 }, /* OFPRRFC_BAD_ROLE */
        {       -1, -1,  -1 }, /* OFPMMFC_UNKNOWN */
        {       -1, -1,  -1 }, /* OFPMMFC_METER_EXISTS */
        {       -1, -1,  -1 }, /* OFPMMFC_INVALID_METER */
        {       -1, -1,  -1 }, /* OFPMMFC_UNKNOWN_METER */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_COMMAND */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_RATE */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_BURST */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_BAND */
        {       -1, -1,  -1 }, /* OFPMMFC_BAD_BAND_VALUE */
        {       -1, -1,  -1 }, /* OFPMMFC_OUT_OF_METERS */
        {       -1, -1,  -1 }, /* OFPMMFC_OUT_OF_BANDS */
        {       -1, -1,  -1 }, /* OFPTFFC_BAD_TABLE */
        {       -1, -1,  -1 }, /* OFPTFFC_BAD_METADATA */
        {       -1, -1,  -1 }, /* OFPTFFC_EPERM */
        {   0x2320, 25,   0 }, /* OFPBPC_BAD_TYPE */
        {   0x2320, 26,   0 }, /* OFPBPC_BAD_LEN */
        {   0x2320, 27,   0 }, /* OFPBPC_BAD_VALUE */
        {   0x2320, 28,   0 }, /* OFPBPC_TOO_MANY */
        {   0x2320, 29,   0 }, /* OFPBPC_DUP_TYPE */
        {   0x2320, 30,   0 }, /* OFPBPC_BAD_EXPERIMENTER */
        {   0x2320, 31,   0 }, /* OFPBPC_BAD_EXP_TYPE */
        {   0x2320, 32,   0 }, /* OFPBPC_BAD_EXP_VALUE */
        {   0x2320, 33,   0 }, /* OFPBPC_EPERM */
        {       -1, -1,  -1 }, /* OFPACFC_INVALID */
        {       -1, -1,  -1 }, /* OFPACFC_UNSUPPORTED */
        {       -1, -1,  -1 }, /* OFPACFC_EPERM */
        {       -1, -1,  -1 }, /* OFPBFC_UNKNOWN */
        {       -1, -1,  -1 }, /* OFPBFC_EPERM */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_ID */
        {       -1, -1,  -1 }, /* OFPBFC_BUNDLE_EXIST */
        {       -1, -1,  -1 }, /* OFPBFC_BUNDLE_CLOSED */
        {       -1, -1,  -1 }, /* OFPBFC_OUT_OF_BUNDLES */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_TYPE */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_BAD_LEN */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_BAD_XID */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_UNSUP */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_CONFLICT */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_TOO_MANY */
        {       -1, -1,  -1 }, /* OFPBFC_MSG_FAILED */
        {       -1, -1,  -1 }, /* OFPBFC_TIMEOUT */
        {       -1, -1,  -1 }, /* OFPBFC_BUNDLE_IN_PROGRESS */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_VERSION */
        {       -1, -1,  -1 }, /* OFPMOFC_UNKNOWN */
        {   0x2320,  6,   0 }, /* OFPMOFC_MONITOR_EXISTS */
        {       -1, -1,  -1 }, /* OFPMOFC_INVALID_MONITOR */
        {   0x2320,  8,   0 }, /* OFPMOFC_UNKNOWN_MONITOR */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_COMMAND */
        {   0x2320,  7,   0 }, /* OFPMOFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_TABLE_ID */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_OUT */
        {   0x2320, 16,   0 }, /* NXTTMFC_BAD_COMMAND */
        {   0x2320, 17,   0 }, /* NXTTMFC_BAD_OPT_LEN */
        {   0x2320, 18,   0 }, /* NXTTMFC_BAD_FIELD_IDX */
        {   0x2320, 19,   0 }, /* NXTTMFC_TABLE_FULL */
        {   0x2320, 20,   0 }, /* NXTTMFC_ALREADY_MAPPED */
        {   0x2320, 21,   0 }, /* NXTTMFC_DUP_ENTRY */
        {   0x2320, 38,   0 }, /* NXTTMFC_INVALID_TLV_DEL */
        {   0x2320, 34,   0 }, /* NXR_NOT_SUPPORTED */
        {   0x2320, 35,   0 }, /* NXR_STALE */
        {   0x2320, 36,   0 }, /* NXST_NOT_CONFIGURED */
    },
};

static enum ofperr
ofperr_of13_decode(uint32_t vendor, uint16_t type, uint16_t code)
{
    switch (((uint64_t) vendor << 32) | (uint32_t) (type << 16) | code) {
    case (uint32_t) (0 << 16) | 0:
        return OFPERR_OFPHFC_INCOMPATIBLE;
    case (uint32_t) (0 << 16) | 1:
        return OFPERR_OFPHFC_EPERM;
    case (uint32_t) (1 << 16) | 0:
        return OFPERR_OFPBRC_BAD_VERSION;
    case (uint32_t) (1 << 16) | 1:
        return OFPERR_OFPBRC_BAD_TYPE;
    case (uint32_t) (1 << 16) | 2:
        return OFPERR_OFPBRC_BAD_STAT;
    case (uint32_t) (1 << 16) | 3:
        return OFPERR_OFPBRC_BAD_VENDOR;
    case (uint32_t) (1 << 16) | 4:
        return OFPERR_OFPBRC_BAD_SUBTYPE;
    case (uint32_t) (1 << 16) | 5:
        return OFPERR_OFPBRC_EPERM;
    case (uint32_t) (1 << 16) | 6:
        return OFPERR_OFPBRC_BAD_LEN;
    case (uint32_t) (1 << 16) | 7:
        return OFPERR_OFPBRC_BUFFER_EMPTY;
    case (uint32_t) (1 << 16) | 8:
        return OFPERR_OFPBRC_BUFFER_UNKNOWN;
    case (uint32_t) (1 << 16) | 9:
        return OFPERR_OFPBRC_BAD_TABLE_ID;
    case (uint32_t) (1 << 16) | 10:
        return OFPERR_OFPBRC_IS_SLAVE;
    case (uint32_t) (1 << 16) | 11:
        return OFPERR_OFPBRC_BAD_PORT;
    case (uint32_t) (1 << 16) | 12:
        return OFPERR_OFPBRC_BAD_PACKET;
    case (uint32_t) (1 << 16) | 13:
        return OFPERR_OFPBRC_MULTIPART_BUFFER_OVERFLOW;
    case (0x2320ULL << 32) | (uint32_t) (2 << 16) | 0:
        return OFPERR_NXBRC_NXM_INVALID;
    case (0x2320ULL << 32) | (uint32_t) (3 << 16) | 0:
        return OFPERR_NXBRC_NXM_BAD_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (4 << 16) | 0:
        return OFPERR_NXBRC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (5 << 16) | 0:
        return OFPERR_NXBRC_BAD_REASON;
    case (0x2320ULL << 32) | (uint32_t) (9 << 16) | 0:
        return OFPERR_NXBRC_FM_BAD_EVENT;
    case (0x2320ULL << 32) | (uint32_t) (10 << 16) | 0:
        return OFPERR_NXBRC_UNENCODABLE_ERROR;
    case (uint32_t) (2 << 16) | 0:
        return OFPERR_OFPBAC_BAD_TYPE;
    case (uint32_t) (2 << 16) | 1:
        return OFPERR_OFPBAC_BAD_LEN;
    case (uint32_t) (2 << 16) | 2:
        return OFPERR_OFPBAC_BAD_VENDOR;
    case (uint32_t) (2 << 16) | 3:
        return OFPERR_OFPBAC_BAD_VENDOR_TYPE;
    case (uint32_t) (2 << 16) | 4:
        return OFPERR_OFPBAC_BAD_OUT_PORT;
    case (uint32_t) (2 << 16) | 5:
        return OFPERR_OFPBAC_BAD_ARGUMENT;
    case (uint32_t) (2 << 16) | 6:
        return OFPERR_OFPBAC_EPERM;
    case (uint32_t) (2 << 16) | 7:
        return OFPERR_OFPBAC_TOO_MANY;
    case (uint32_t) (2 << 16) | 8:
        return OFPERR_OFPBAC_BAD_QUEUE;
    case (uint32_t) (2 << 16) | 9:
        return OFPERR_OFPBAC_BAD_OUT_GROUP;
    case (uint32_t) (2 << 16) | 10:
        return OFPERR_OFPBAC_MATCH_INCONSISTENT;
    case (uint32_t) (2 << 16) | 11:
        return OFPERR_OFPBAC_UNSUPPORTED_ORDER;
    case (uint32_t) (2 << 16) | 12:
        return OFPERR_OFPBAC_BAD_TAG;
    case (uint32_t) (2 << 16) | 13:
        return OFPERR_OFPBAC_BAD_SET_TYPE;
    case (uint32_t) (2 << 16) | 14:
        return OFPERR_OFPBAC_BAD_SET_LEN;
    case (uint32_t) (2 << 16) | 15:
        return OFPERR_OFPBAC_BAD_SET_ARGUMENT;
    case (0x4f4e4600ULL << 32) | (uint32_t) (4250 << 16) | 0:
        return OFPERR_OFPBAC_BAD_SET_MASK;
    case (0x2320ULL << 32) | (uint32_t) (11 << 16) | 0:
        return OFPERR_NXBAC_MUST_BE_ZERO;
    case (0x2320ULL << 32) | (uint32_t) (15 << 16) | 0:
        return OFPERR_NXBAC_BAD_CONJUNCTION;
    case (0x2320ULL << 32) | (uint32_t) (39 << 16) | 0:
        return OFPERR_NXBAC_BAD_HEADER_TYPE;
    case (0x2320ULL << 32) | (uint32_t) (40 << 16) | 0:
        return OFPERR_NXBAC_UNKNOWN_ED_PROP;
    case (0x2320ULL << 32) | (uint32_t) (41 << 16) | 0:
        return OFPERR_NXBAC_BAD_ED_PROP;
    case (uint32_t) (3 << 16) | 0:
        return OFPERR_OFPBIC_UNKNOWN_INST;
    case (uint32_t) (3 << 16) | 1:
        return OFPERR_OFPBIC_UNSUP_INST;
    case (uint32_t) (3 << 16) | 2:
        return OFPERR_OFPBIC_BAD_TABLE_ID;
    case (uint32_t) (3 << 16) | 3:
        return OFPERR_OFPBIC_UNSUP_METADATA;
    case (uint32_t) (3 << 16) | 4:
        return OFPERR_OFPBIC_UNSUP_METADATA_MASK;
    case (uint32_t) (3 << 16) | 5:
        return OFPERR_OFPBIC_BAD_EXPERIMENTER;
    case (uint32_t) (3 << 16) | 6:
        return OFPERR_OFPBIC_BAD_EXP_TYPE;
    case (uint32_t) (3 << 16) | 7:
        return OFPERR_OFPBIC_BAD_LEN;
    case (uint32_t) (3 << 16) | 8:
        return OFPERR_OFPBIC_EPERM;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2600 << 16) | 0:
        return OFPERR_OFPBIC_DUP_INST;
    case (uint32_t) (4 << 16) | 0:
        return OFPERR_OFPBMC_BAD_TYPE;
    case (uint32_t) (4 << 16) | 1:
        return OFPERR_OFPBMC_BAD_LEN;
    case (uint32_t) (4 << 16) | 2:
        return OFPERR_OFPBMC_BAD_TAG;
    case (uint32_t) (4 << 16) | 3:
        return OFPERR_OFPBMC_BAD_DL_ADDR_MASK;
    case (uint32_t) (4 << 16) | 4:
        return OFPERR_OFPBMC_BAD_NW_ADDR_MASK;
    case (uint32_t) (4 << 16) | 5:
        return OFPERR_OFPBMC_BAD_WILDCARDS;
    case (uint32_t) (4 << 16) | 6:
        return OFPERR_OFPBMC_BAD_FIELD;
    case (uint32_t) (4 << 16) | 7:
        return OFPERR_OFPBMC_BAD_VALUE;
    case (uint32_t) (4 << 16) | 8:
        return OFPERR_OFPBMC_BAD_MASK;
    case (uint32_t) (4 << 16) | 9:
        return OFPERR_OFPBMC_BAD_PREREQ;
    case (uint32_t) (4 << 16) | 10:
        return OFPERR_OFPBMC_DUP_FIELD;
    case (uint32_t) (4 << 16) | 11:
        return OFPERR_OFPBMC_EPERM;
    case (uint32_t) (5 << 16) | 0:
        return OFPERR_OFPFMFC_UNKNOWN;
    case (uint32_t) (5 << 16) | 1:
        return OFPERR_OFPFMFC_TABLE_FULL;
    case (uint32_t) (5 << 16) | 2:
        return OFPERR_OFPFMFC_BAD_TABLE_ID;
    case (uint32_t) (5 << 16) | 3:
        return OFPERR_OFPFMFC_OVERLAP;
    case (uint32_t) (5 << 16) | 4:
        return OFPERR_OFPFMFC_EPERM;
    case (uint32_t) (5 << 16) | 5:
        return OFPERR_OFPFMFC_BAD_TIMEOUT;
    case (uint32_t) (5 << 16) | 6:
        return OFPERR_OFPFMFC_BAD_COMMAND;
    case (uint32_t) (5 << 16) | 7:
        return OFPERR_OFPFMFC_BAD_FLAGS;
    case (0x2320ULL << 32) | (uint32_t) (12 << 16) | 0:
        return OFPERR_NXFMFC_HARDWARE;
    case (0x2320ULL << 32) | (uint32_t) (13 << 16) | 0:
        return OFPERR_NXFMFC_BAD_TABLE_ID;
    case (0x2320ULL << 32) | (uint32_t) (37 << 16) | 0:
        return OFPERR_NXFMFC_INVALID_TLV_FIELD;
    case (uint32_t) (6 << 16) | 0:
        return OFPERR_OFPGMFC_GROUP_EXISTS;
    case (uint32_t) (6 << 16) | 1:
        return OFPERR_OFPGMFC_INVALID_GROUP;
    case (uint32_t) (6 << 16) | 2:
        return OFPERR_OFPGMFC_WEIGHT_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 3:
        return OFPERR_OFPGMFC_OUT_OF_GROUPS;
    case (uint32_t) (6 << 16) | 4:
        return OFPERR_OFPGMFC_OUT_OF_BUCKETS;
    case (uint32_t) (6 << 16) | 5:
        return OFPERR_OFPGMFC_CHAINING_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 6:
        return OFPERR_OFPGMFC_WATCH_UNSUPPORTED;
    case (uint32_t) (6 << 16) | 7:
        return OFPERR_OFPGMFC_LOOP;
    case (uint32_t) (6 << 16) | 8:
        return OFPERR_OFPGMFC_UNKNOWN_GROUP;
    case (uint32_t) (6 << 16) | 9:
        return OFPERR_OFPGMFC_CHAINED_GROUP;
    case (uint32_t) (6 << 16) | 10:
        return OFPERR_OFPGMFC_BAD_TYPE;
    case (uint32_t) (6 << 16) | 11:
        return OFPERR_OFPGMFC_BAD_COMMAND;
    case (uint32_t) (6 << 16) | 12:
        return OFPERR_OFPGMFC_BAD_BUCKET;
    case (uint32_t) (6 << 16) | 13:
        return OFPERR_OFPGMFC_BAD_WATCH;
    case (uint32_t) (6 << 16) | 14:
        return OFPERR_OFPGMFC_EPERM;
    case (uint32_t) (7 << 16) | 0:
        return OFPERR_OFPPMFC_BAD_PORT;
    case (uint32_t) (7 << 16) | 1:
        return OFPERR_OFPPMFC_BAD_HW_ADDR;
    case (uint32_t) (7 << 16) | 2:
        return OFPERR_OFPPMFC_BAD_CONFIG;
    case (uint32_t) (7 << 16) | 3:
        return OFPERR_OFPPMFC_BAD_ADVERTISE;
    case (uint32_t) (7 << 16) | 4:
        return OFPERR_OFPPMFC_EPERM;
    case (uint32_t) (8 << 16) | 0:
        return OFPERR_OFPTMFC_BAD_TABLE;
    case (uint32_t) (8 << 16) | 1:
        return OFPERR_OFPTMFC_BAD_CONFIG;
    case (uint32_t) (8 << 16) | 2:
        return OFPERR_OFPTMFC_EPERM;
    case (uint32_t) (9 << 16) | 0:
        return OFPERR_OFPQOFC_BAD_PORT;
    case (uint32_t) (9 << 16) | 1:
        return OFPERR_OFPQOFC_BAD_QUEUE;
    case (uint32_t) (9 << 16) | 2:
        return OFPERR_OFPQOFC_EPERM;
    case (uint32_t) (10 << 16) | 0:
        return OFPERR_OFPSCFC_BAD_FLAGS;
    case (uint32_t) (10 << 16) | 1:
        return OFPERR_OFPSCFC_BAD_LEN;
    case (uint32_t) (10 << 16) | 2:
        return OFPERR_OFPSCFC_EPERM;
    case (uint32_t) (11 << 16) | 0:
        return OFPERR_OFPRRFC_STALE;
    case (uint32_t) (11 << 16) | 1:
        return OFPERR_OFPRRFC_UNSUP;
    case (uint32_t) (11 << 16) | 2:
        return OFPERR_OFPRRFC_BAD_ROLE;
    case (uint32_t) (12 << 16) | 0:
        return OFPERR_OFPMMFC_UNKNOWN;
    case (uint32_t) (12 << 16) | 1:
        return OFPERR_OFPMMFC_METER_EXISTS;
    case (uint32_t) (12 << 16) | 2:
        return OFPERR_OFPMMFC_INVALID_METER;
    case (uint32_t) (12 << 16) | 3:
        return OFPERR_OFPMMFC_UNKNOWN_METER;
    case (uint32_t) (12 << 16) | 4:
        return OFPERR_OFPMMFC_BAD_COMMAND;
    case (uint32_t) (12 << 16) | 5:
        return OFPERR_OFPMMFC_BAD_FLAGS;
    case (uint32_t) (12 << 16) | 6:
        return OFPERR_OFPMMFC_BAD_RATE;
    case (uint32_t) (12 << 16) | 7:
        return OFPERR_OFPMMFC_BAD_BURST;
    case (uint32_t) (12 << 16) | 8:
        return OFPERR_OFPMMFC_BAD_BAND;
    case (uint32_t) (12 << 16) | 9:
        return OFPERR_OFPMMFC_BAD_BAND_VALUE;
    case (uint32_t) (12 << 16) | 10:
        return OFPERR_OFPMMFC_OUT_OF_METERS;
    case (uint32_t) (12 << 16) | 11:
        return OFPERR_OFPMMFC_OUT_OF_BANDS;
    case (uint32_t) (13 << 16) | 0:
        return OFPERR_OFPTFFC_BAD_TABLE;
    case (uint32_t) (13 << 16) | 1:
        return OFPERR_OFPTFFC_BAD_METADATA;
    case (uint32_t) (13 << 16) | 5:
        return OFPERR_OFPTFFC_EPERM;
    case (uint32_t) (13 << 16) | 2:
        return OFPERR_OFPBPC_BAD_TYPE;
    case (uint32_t) (13 << 16) | 3:
        return OFPERR_OFPBPC_BAD_LEN;
    case (uint32_t) (13 << 16) | 4:
        return OFPERR_OFPBPC_BAD_VALUE;
    case (0x4f4e4600ULL << 32) | (uint32_t) (4443 << 16) | 0:
        return OFPERR_OFPBPC_TOO_MANY;
    case (0x4f4e4600ULL << 32) | (uint32_t) (4444 << 16) | 0:
        return OFPERR_OFPBPC_DUP_TYPE;
    case (0x4f4e4600ULL << 32) | (uint32_t) (4445 << 16) | 0:
        return OFPERR_OFPBPC_BAD_EXPERIMENTER;
    case (0x4f4e4600ULL << 32) | (uint32_t) (4446 << 16) | 0:
        return OFPERR_OFPBPC_BAD_EXP_TYPE;
    case (0x4f4e4600ULL << 32) | (uint32_t) (4447 << 16) | 0:
        return OFPERR_OFPBPC_BAD_EXP_VALUE;
    case (0x4f4e4600ULL << 32) | (uint32_t) (4448 << 16) | 0:
        return OFPERR_OFPBPC_EPERM;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2300 << 16) | 0:
        return OFPERR_OFPBFC_UNKNOWN;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2301 << 16) | 0:
        return OFPERR_OFPBFC_EPERM;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2302 << 16) | 0:
        return OFPERR_OFPBFC_BAD_ID;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2303 << 16) | 0:
        return OFPERR_OFPBFC_BUNDLE_EXIST;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2304 << 16) | 0:
        return OFPERR_OFPBFC_BUNDLE_CLOSED;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2305 << 16) | 0:
        return OFPERR_OFPBFC_OUT_OF_BUNDLES;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2306 << 16) | 0:
        return OFPERR_OFPBFC_BAD_TYPE;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2307 << 16) | 0:
        return OFPERR_OFPBFC_BAD_FLAGS;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2308 << 16) | 0:
        return OFPERR_OFPBFC_MSG_BAD_LEN;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2309 << 16) | 0:
        return OFPERR_OFPBFC_MSG_BAD_XID;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2310 << 16) | 0:
        return OFPERR_OFPBFC_MSG_UNSUP;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2311 << 16) | 0:
        return OFPERR_OFPBFC_MSG_CONFLICT;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2312 << 16) | 0:
        return OFPERR_OFPBFC_MSG_TOO_MANY;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2313 << 16) | 0:
        return OFPERR_OFPBFC_MSG_FAILED;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2314 << 16) | 0:
        return OFPERR_OFPBFC_TIMEOUT;
    case (0x4f4e4600ULL << 32) | (uint32_t) (2315 << 16) | 0:
        return OFPERR_OFPBFC_BUNDLE_IN_PROGRESS;
    case (0x2320ULL << 32) | (uint32_t) (6 << 16) | 0:
        return OFPERR_OFPMOFC_MONITOR_EXISTS;
    case (0x2320ULL << 32) | (uint32_t) (8 << 16) | 0:
        return OFPERR_OFPMOFC_UNKNOWN_MONITOR;
    case (0x2320ULL << 32) | (uint32_t) (7 << 16) | 0:
        return OFPERR_OFPMOFC_BAD_FLAGS;
    case (0x2320ULL << 32) | (uint32_t) (16 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_COMMAND;
    case (0x2320ULL << 32) | (uint32_t) (17 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_OPT_LEN;
    case (0x2320ULL << 32) | (uint32_t) (18 << 16) | 0:
        return OFPERR_NXTTMFC_BAD_FIELD_IDX;
    case (0x2320ULL << 32) | (uint32_t) (19 << 16) | 0:
        return OFPERR_NXTTMFC_TABLE_FULL;
    case (0x2320ULL << 32) | (uint32_t) (20 << 16) | 0:
        return OFPERR_NXTTMFC_ALREADY_MAPPED;
    case (0x2320ULL << 32) | (uint32_t) (21 << 16) | 0:
        return OFPERR_NXTTMFC_DUP_ENTRY;
    case (0x2320ULL << 32) | (uint32_t) (38 << 16) | 0:
        return OFPERR_NXTTMFC_INVALID_TLV_DEL;
    case (0x2320ULL << 32) | (uint32_t) (34 << 16) | 0:
        return OFPERR_NXR_NOT_SUPPORTED;
    case (0x2320ULL << 32) | (uint32_t) (35 << 16) | 0:
        return OFPERR_NXR_STALE;
    case (0x2320ULL << 32) | (uint32_t) (36 << 16) | 0:
        return OFPERR_NXST_NOT_CONFIGURED;
    }

    return 0;
}

static const struct ofperr_domain ofperr_of13 = {
    "OpenFlow 1.3",
    4,
    ofperr_of13_decode,
    {
        {      0x0,  0,   0 }, /* OFPHFC_INCOMPATIBLE */
        {      0x0,  0,   1 }, /* OFPHFC_EPERM */
        {      0x0,  1,   0 }, /* OFPBRC_BAD_VERSION */
        {      0x0,  1,   1 }, /* OFPBRC_BAD_TYPE */
        {      0x0,  1,   2 }, /* OFPBRC_BAD_STAT */
        {      0x0,  1,   3 }, /* OFPBRC_BAD_VENDOR */
        {      0x0,  1,   4 }, /* OFPBRC_BAD_SUBTYPE */
        {      0x0,  1,   5 }, /* OFPBRC_EPERM */
        {      0x0,  1,   6 }, /* OFPBRC_BAD_LEN */
        {      0x0,  1,   7 }, /* OFPBRC_BUFFER_EMPTY */
        {      0x0,  1,   8 }, /* OFPBRC_BUFFER_UNKNOWN */
        {      0x0,  1,   9 }, /* OFPBRC_BAD_TABLE_ID */
        {      0x0,  1,  10 }, /* OFPBRC_IS_SLAVE */
        {      0x0,  1,  11 }, /* OFPBRC_BAD_PORT */
        {      0x0,  1,  12 }, /* OFPBRC_BAD_PACKET */
        {      0x0,  1,  13 }, /* OFPBRC_MULTIPART_BUFFER_OVERFLOW */
        {       -1, -1,  -1 }, /* OFPBRC_PIPELINE_FIELDS_ONLY */
        {   0x2320,  2,   0 }, /* NXBRC_NXM_INVALID */
        {   0x2320,  3,   0 }, /* NXBRC_NXM_BAD_TYPE */
        {   0x2320,  4,   0 }, /* NXBRC_MUST_BE_ZERO */
        {   0x2320,  5,   0 }, /* NXBRC_BAD_REASON */
        {   0x2320,  9,   0 }, /* NXBRC_FM_BAD_EVENT */
        {   0x2320, 10,   0 }, /* NXBRC_UNENCODABLE_ERROR */
        {      0x0,  2,   0 }, /* OFPBAC_BAD_TYPE */
        {      0x0,  2,   1 }, /* OFPBAC_BAD_LEN */
        {      0x0,  2,   2 }, /* OFPBAC_BAD_VENDOR */
        {      0x0,  2,   3 }, /* OFPBAC_BAD_VENDOR_TYPE */
        {      0x0,  2,   4 }, /* OFPBAC_BAD_OUT_PORT */
        {      0x0,  2,   5 }, /* OFPBAC_BAD_ARGUMENT */
        {      0x0,  2,   6 }, /* OFPBAC_EPERM */
        {      0x0,  2,   7 }, /* OFPBAC_TOO_MANY */
        {      0x0,  2,   8 }, /* OFPBAC_BAD_QUEUE */
        {      0x0,  2,   9 }, /* OFPBAC_BAD_OUT_GROUP */
        {      0x0,  2,  10 }, /* OFPBAC_MATCH_INCONSISTENT */
        {      0x0,  2,  11 }, /* OFPBAC_UNSUPPORTED_ORDER */
        {      0x0,  2,  12 }, /* OFPBAC_BAD_TAG */
        {      0x0,  2,  13 }, /* OFPBAC_BAD_SET_TYPE */
        {      0x0,  2,  14 }, /* OFPBAC_BAD_SET_LEN */
        {      0x0,  2,  15 }, /* OFPBAC_BAD_SET_ARGUMENT */
        { 0x4f4e4600, 4250,   0 }, /* OFPBAC_BAD_SET_MASK */
        {   0x2320, 11,   0 }, /* NXBAC_MUST_BE_ZERO */
        {   0x2320, 15,   0 }, /* NXBAC_BAD_CONJUNCTION */
        {   0x2320, 39,   0 }, /* NXBAC_BAD_HEADER_TYPE */
        {   0x2320, 40,   0 }, /* NXBAC_UNKNOWN_ED_PROP */
        {   0x2320, 41,   0 }, /* NXBAC_BAD_ED_PROP */
        {      0x0,  3,   0 }, /* OFPBIC_UNKNOWN_INST */
        {      0x0,  3,   1 }, /* OFPBIC_UNSUP_INST */
        {      0x0,  3,   2 }, /* OFPBIC_BAD_TABLE_ID */
        {      0x0,  3,   3 }, /* OFPBIC_UNSUP_METADATA */
        {      0x0,  3,   4 }, /* OFPBIC_UNSUP_METADATA_MASK */
        {      0x0,  3,   5 }, /* OFPBIC_BAD_EXPERIMENTER */
        {      0x0,  3,   6 }, /* OFPBIC_BAD_EXP_TYPE */
        {      0x0,  3,   7 }, /* OFPBIC_BAD_LEN */
        {      0x0,  3,   8 }, /* OFPBIC_EPERM */
        { 0x4f4e4600, 2600,   0 }, /* OFPBIC_DUP_INST */
        {      0x0,  4,   0 }, /* OFPBMC_BAD_TYPE */
        {      0x0,  4,   1 }, /* OFPBMC_BAD_LEN */
        {      0x0,  4,   2 }, /* OFPBMC_BAD_TAG */
        {      0x0,  4,   3 }, /* OFPBMC_BAD_DL_ADDR_MASK */
        {      0x0,  4,   4 }, /* OFPBMC_BAD_NW_ADDR_MASK */
        {      0x0,  4,   5 }, /* OFPBMC_BAD_WILDCARDS */
        {      0x0,  4,   6 }, /* OFPBMC_BAD_FIELD */
        {      0x0,  4,   7 }, /* OFPBMC_BAD_VALUE */
        {      0x0,  4,   8 }, /* OFPBMC_BAD_MASK */
        {      0x0,  4,   9 }, /* OFPBMC_BAD_PREREQ */
        {      0x0,  4,  10 }, /* OFPBMC_DUP_FIELD */
        {      0x0,  4,  11 }, /* OFPBMC_EPERM */
        {      0x0,  5,   0 }, /* OFPFMFC_UNKNOWN */
        {      0x0,  5,   1 }, /* OFPFMFC_TABLE_FULL */
        {      0x0,  5,   2 }, /* OFPFMFC_BAD_TABLE_ID */
        {      0x0,  5,   3 }, /* OFPFMFC_OVERLAP */
        {      0x0,  5,   4 }, /* OFPFMFC_EPERM */
        {      0x0,  5,   5 }, /* OFPFMFC_BAD_TIMEOUT */
        {       -1, -1,  -1 }, /* OFPFMFC_BAD_EMERG_TIMEOUT */
        {      0x0,  5,   6 }, /* OFPFMFC_BAD_COMMAND */
        {      0x0,  5,   7 }, /* OFPFMFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPFMFC_UNSUPPORTED */
        {   0x2320, 12,   0 }, /* NXFMFC_HARDWARE */
        {   0x2320, 13,   0 }, /* NXFMFC_BAD_TABLE_ID */
        {   0x2320, 37,   0 }, /* NXFMFC_INVALID_TLV_FIELD */
        {      0x0,  6,   0 }, /* OFPGMFC_GROUP_EXISTS */
        {      0x0,  6,   1 }, /* OFPGMFC_INVALID_GROUP */
        {      0x0,  6,   2 }, /* OFPGMFC_WEIGHT_UNSUPPORTED */
        {      0x0,  6,   3 }, /* OFPGMFC_OUT_OF_GROUPS */
        {      0x0,  6,   4 }, /* OFPGMFC_OUT_OF_BUCKETS */
        {      0x0,  6,   5 }, /* OFPGMFC_CHAINING_UNSUPPORTED */
        {      0x0,  6,   6 }, /* OFPGMFC_WATCH_UNSUPPORTED */
        {      0x0,  6,   7 }, /* OFPGMFC_LOOP */
        {      0x0,  6,   8 }, /* OFPGMFC_UNKNOWN_GROUP */
        {      0x0,  6,   9 }, /* OFPGMFC_CHAINED_GROUP */
        {      0x0,  6,  10 }, /* OFPGMFC_BAD_TYPE */
        {      0x0,  6,  11 }, /* OFPGMFC_BAD_COMMAND */
        {      0x0,  6,  12 }, /* OFPGMFC_BAD_BUCKET */
        {      0x0,  6,  13 }, /* OFPGMFC_BAD_WATCH */
        {      0x0,  6,  14 }, /* OFPGMFC_EPERM */
        {       -1, -1,  -1 }, /* OFPGMFC_UNKNOWN_BUCKET */
        {       -1, -1,  -1 }, /* OFPGMFC_BUCKET_EXISTS */
        {      0x0,  7,   0 }, /* OFPPMFC_BAD_PORT */
        {      0x0,  7,   1 }, /* OFPPMFC_BAD_HW_ADDR */
        {      0x0,  7,   2 }, /* OFPPMFC_BAD_CONFIG */
        {      0x0,  7,   3 }, /* OFPPMFC_BAD_ADVERTISE */
        {      0x0,  7,   4 }, /* OFPPMFC_EPERM */
        {      0x0,  8,   0 }, /* OFPTMFC_BAD_TABLE */
        {      0x0,  8,   1 }, /* OFPTMFC_BAD_CONFIG */
        {      0x0,  8,   2 }, /* OFPTMFC_EPERM */
        {      0x0,  9,   0 }, /* OFPQOFC_BAD_PORT */
        {      0x0,  9,   1 }, /* OFPQOFC_BAD_QUEUE */
        {      0x0,  9,   2 }, /* OFPQOFC_EPERM */
        {       -1, -1,  -1 }, /* NXQOFC_QUEUE_ERROR */
        {      0x0, 10,   0 }, /* OFPSCFC_BAD_FLAGS */
        {      0x0, 10,   1 }, /* OFPSCFC_BAD_LEN */
        {      0x0, 10,   2 }, /* OFPSCFC_EPERM */
        {      0x0, 11,   0 }, /* OFPRRFC_STALE */
        {      0x0, 11,   1 }, /* OFPRRFC_UNSUP */
        {      0x0, 11,   2 }, /* OFPRRFC_BAD_ROLE */
        {      0x0, 12,   0 }, /* OFPMMFC_UNKNOWN */
        {      0x0, 12,   1 }, /* OFPMMFC_METER_EXISTS */
        {      0x0, 12,   2 }, /* OFPMMFC_INVALID_METER */
        {      0x0, 12,   3 }, /* OFPMMFC_UNKNOWN_METER */
        {      0x0, 12,   4 }, /* OFPMMFC_BAD_COMMAND */
        {      0x0, 12,   5 }, /* OFPMMFC_BAD_FLAGS */
        {      0x0, 12,   6 }, /* OFPMMFC_BAD_RATE */
        {      0x0, 12,   7 }, /* OFPMMFC_BAD_BURST */
        {      0x0, 12,   8 }, /* OFPMMFC_BAD_BAND */
        {      0x0, 12,   9 }, /* OFPMMFC_BAD_BAND_VALUE */
        {      0x0, 12,  10 }, /* OFPMMFC_OUT_OF_METERS */
        {      0x0, 12,  11 }, /* OFPMMFC_OUT_OF_BANDS */
        {      0x0, 13,   0 }, /* OFPTFFC_BAD_TABLE */
        {      0x0, 13,   1 }, /* OFPTFFC_BAD_METADATA */
        {      0x0, 13,   5 }, /* OFPTFFC_EPERM */
        {      0x0, 13,   2 }, /* OFPBPC_BAD_TYPE */
        {      0x0, 13,   3 }, /* OFPBPC_BAD_LEN */
        {      0x0, 13,   4 }, /* OFPBPC_BAD_VALUE */
        { 0x4f4e4600, 4443,   0 }, /* OFPBPC_TOO_MANY */
        { 0x4f4e4600, 4444,   0 }, /* OFPBPC_DUP_TYPE */
        { 0x4f4e4600, 4445,   0 }, /* OFPBPC_BAD_EXPERIMENTER */
        { 0x4f4e4600, 4446,   0 }, /* OFPBPC_BAD_EXP_TYPE */
        { 0x4f4e4600, 4447,   0 }, /* OFPBPC_BAD_EXP_VALUE */
        { 0x4f4e4600, 4448,   0 }, /* OFPBPC_EPERM */
        {       -1, -1,  -1 }, /* OFPACFC_INVALID */
        {       -1, -1,  -1 }, /* OFPACFC_UNSUPPORTED */
        {       -1, -1,  -1 }, /* OFPACFC_EPERM */
        { 0x4f4e4600, 2300,   0 }, /* OFPBFC_UNKNOWN */
        { 0x4f4e4600, 2301,   0 }, /* OFPBFC_EPERM */
        { 0x4f4e4600, 2302,   0 }, /* OFPBFC_BAD_ID */
        { 0x4f4e4600, 2303,   0 }, /* OFPBFC_BUNDLE_EXIST */
        { 0x4f4e4600, 2304,   0 }, /* OFPBFC_BUNDLE_CLOSED */
        { 0x4f4e4600, 2305,   0 }, /* OFPBFC_OUT_OF_BUNDLES */
        { 0x4f4e4600, 2306,   0 }, /* OFPBFC_BAD_TYPE */
        { 0x4f4e4600, 2307,   0 }, /* OFPBFC_BAD_FLAGS */
        { 0x4f4e4600, 2308,   0 }, /* OFPBFC_MSG_BAD_LEN */
        { 0x4f4e4600, 2309,   0 }, /* OFPBFC_MSG_BAD_XID */
        { 0x4f4e4600, 2310,   0 }, /* OFPBFC_MSG_UNSUP */
        { 0x4f4e4600, 2311,   0 }, /* OFPBFC_MSG_CONFLICT */
        { 0x4f4e4600, 2312,   0 }, /* OFPBFC_MSG_TOO_MANY */
        { 0x4f4e4600, 2313,   0 }, /* OFPBFC_MSG_FAILED */
        { 0x4f4e4600, 2314,   0 }, /* OFPBFC_TIMEOUT */
        { 0x4f4e4600, 2315,   0 }, /* OFPBFC_BUNDLE_IN_PROGRESS */
        {       -1, -1,  -1 }, /* OFPBFC_BAD_VERSION */
        {       -1, -1,  -1 }, /* OFPMOFC_UNKNOWN */
        {   0x2320,  6,   0 }, /* OFPMOFC_MONITOR_EXISTS */
        {       -1, -1,  -1 }, /* OFPMOFC_INVALID_MONITOR */
        {   0x2320,  8,   0 }, /* OFPMOFC_UNKNOWN_MONITOR */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_COMMAND */
        {   0x2320,  7,   0 }, /* OFPMOFC_BAD_FLAGS */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_TABLE_ID */
        {       -1, -1,  -1 }, /* OFPMOFC_BAD_OUT */
        {   0x2320, 16,   0 }, /* NXTTMFC_BAD_COMMAND */
        {   0x2320, 17,   0 }, /* NXTTMFC_BAD_OPT_LEN */
        {   0x2320, 18,   0 }, /* NXTTMFC_BAD_FIELD_IDX */
        {   0x2320, 19,   0 }, /* NXTTMFC_TABLE_FULL */
        {   0x2320, 20,   0 }, /* NXTTMFC_ALREADY_MAPPED */
        {   0x2320, 21,   0 }, /* NXTTMFC_DUP_ENTRY */
        {   0x2320, 38,   0 }, /* NXTTMFC_INVALID_TLV_DEL */
        {   0x2320, 34,   0 }, /* NXR_NOT_SUPPORTED */
        {   0x2320, 35,   0 }, /* NXR_STALE */
        {   0x2320, 36,   0 }, /* NXST_NOT_CONFIGURED */
    },
};
