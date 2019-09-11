/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#ifndef VTEPREC_IDL_HEADER
#define VTEPREC_IDL_HEADER 1

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "ovsdb-data.h"
#include "ovsdb-idl-provider.h"
#include "smap.h"
#include "uuid.h"

/* ACL table. */
struct vteprec_acl {
	struct ovsdb_idl_row header_;

	/* acl_entries column. */
	struct vteprec_acl_entry **acl_entries;
	size_t n_acl_entries;

	/* acl_fault_status column. */
	char **acl_fault_status;
	size_t n_acl_fault_status;

	/* acl_name column. */
	char *acl_name;	/* Always nonnull. */
};

enum vteprec_acl_column_id {
    VTEPREC_ACL_COL_ACL_ENTRIES,
    VTEPREC_ACL_COL_ACL_FAULT_STATUS,
    VTEPREC_ACL_COL_ACL_NAME,
    VTEPREC_ACL_N_COLUMNS
};

#define vteprec_acl_col_acl_fault_status (vteprec_acl_columns[VTEPREC_ACL_COL_ACL_FAULT_STATUS])
#define vteprec_acl_col_acl_entries (vteprec_acl_columns[VTEPREC_ACL_COL_ACL_ENTRIES])
#define vteprec_acl_col_acl_name (vteprec_acl_columns[VTEPREC_ACL_COL_ACL_NAME])

extern struct ovsdb_idl_column vteprec_acl_columns[VTEPREC_ACL_N_COLUMNS];

const struct vteprec_acl *vteprec_acl_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_acl *vteprec_acl_first(const struct ovsdb_idl *);
const struct vteprec_acl *vteprec_acl_next(const struct vteprec_acl *);
#define VTEPREC_ACL_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_acl_first(IDL); \
             (ROW); \
             (ROW) = vteprec_acl_next(ROW))
#define VTEPREC_ACL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_acl_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_acl_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_acl_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_acl_row_get_seqno(const struct vteprec_acl *row, enum ovsdb_idl_change change);
const struct vteprec_acl *vteprec_acl_track_get_first(const struct ovsdb_idl *);
const struct vteprec_acl *vteprec_acl_track_get_next(const struct vteprec_acl *);
#define VTEPREC_ACL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_acl_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_acl_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_acl_is_new(const struct vteprec_acl *row)
{
    return vteprec_acl_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_acl_is_deleted(const struct vteprec_acl *row)
{
    return vteprec_acl_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_acl_index_destroy_row(const struct vteprec_acl *);
int vteprec_acl_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_acl *, const struct vteprec_acl *);
const struct vteprec_acl *vteprec_acl_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_acl *vteprec_acl_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_acl *vteprec_acl_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_acl *);
const struct vteprec_acl *vteprec_acl_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_acl *);
const struct vteprec_acl *vteprec_acl_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_ACL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_acl_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_acl_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_acl_index_next(CURSOR))
#define VTEPREC_ACL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_acl_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_acl_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_acl_index_next(CURSOR))
#define VTEPREC_ACL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_acl_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_acl_index_next(CURSOR))

void vteprec_acl_init(struct vteprec_acl *);
void vteprec_acl_delete(const struct vteprec_acl *);
struct vteprec_acl *vteprec_acl_insert(struct ovsdb_idl_txn *);
bool vteprec_acl_is_updated(const struct vteprec_acl *, enum vteprec_acl_column_id);

void vteprec_acl_verify_acl_entries(const struct vteprec_acl *);
void vteprec_acl_verify_acl_fault_status(const struct vteprec_acl *);
void vteprec_acl_verify_acl_name(const struct vteprec_acl *);

const struct ovsdb_datum *vteprec_acl_get_acl_entries(const struct vteprec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_get_acl_fault_status(const struct vteprec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_get_acl_name(const struct vteprec_acl *, enum ovsdb_atomic_type key_type);

void vteprec_acl_set_acl_entries(const struct vteprec_acl *, struct vteprec_acl_entry **acl_entries, size_t n_acl_entries);
void vteprec_acl_set_acl_fault_status(const struct vteprec_acl *, const char **acl_fault_status, size_t n_acl_fault_status);
void vteprec_acl_set_acl_name(const struct vteprec_acl *, const char *acl_name);

void vteprec_acl_update_acl_entries_addvalue(const struct vteprec_acl *,  const struct vteprec_acl_entry *);
void vteprec_acl_update_acl_entries_delvalue(const struct vteprec_acl *,  const struct vteprec_acl_entry *);
void vteprec_acl_add_clause_acl_entries(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **acl_entries, size_t n_acl_entries);
void vteprec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_update_acl_fault_status_addvalue(const struct vteprec_acl *,  const char *);
void vteprec_acl_update_acl_fault_status_delvalue(const struct vteprec_acl *,  const char *);
void vteprec_acl_add_clause_acl_fault_status(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **acl_fault_status, size_t n_acl_fault_status);
void vteprec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_add_clause_acl_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *acl_name);
void vteprec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_acl * vteprec_acl_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_acl_index_set_acl_entries(const struct vteprec_acl *,
struct vteprec_acl_entry **acl_entries, size_t n_acl_entries);
void vteprec_acl_index_set_acl_fault_status(const struct vteprec_acl *,
const char **acl_fault_status, size_t n_acl_fault_status);
void vteprec_acl_index_set_acl_name(const struct vteprec_acl *,
const char *acl_name);

/* ACL_entry table. */
struct vteprec_acl_entry {
	struct ovsdb_idl_row header_;

	/* acle_fault_status column. */
	char **acle_fault_status;
	size_t n_acle_fault_status;

	/* action column. */
	char *action;	/* Always nonnull. */

	/* dest_ip column. */
	char *dest_ip;

	/* dest_mac column. */
	char *dest_mac;

	/* dest_mask column. */
	char *dest_mask;

	/* dest_port_max column. */
	int64_t *dest_port_max;
	size_t n_dest_port_max;

	/* dest_port_min column. */
	int64_t *dest_port_min;
	size_t n_dest_port_min;

	/* direction column. */
	char *direction;	/* Always nonnull. */

	/* ethertype column. */
	char *ethertype;

	/* icmp_code column. */
	int64_t *icmp_code;
	size_t n_icmp_code;

	/* icmp_type column. */
	int64_t *icmp_type;
	size_t n_icmp_type;

	/* protocol column. */
	int64_t *protocol;
	size_t n_protocol;

	/* sequence column. */
	int64_t sequence;

	/* source_ip column. */
	char *source_ip;

	/* source_mac column. */
	char *source_mac;

	/* source_mask column. */
	char *source_mask;

	/* source_port_max column. */
	int64_t *source_port_max;
	size_t n_source_port_max;

	/* source_port_min column. */
	int64_t *source_port_min;
	size_t n_source_port_min;

	/* tcp_flags column. */
	int64_t *tcp_flags;
	size_t n_tcp_flags;

	/* tcp_flags_mask column. */
	int64_t *tcp_flags_mask;
	size_t n_tcp_flags_mask;
};

enum vteprec_acl_entry_column_id {
    VTEPREC_ACL_ENTRY_COL_ACLE_FAULT_STATUS,
    VTEPREC_ACL_ENTRY_COL_ACTION,
    VTEPREC_ACL_ENTRY_COL_DEST_IP,
    VTEPREC_ACL_ENTRY_COL_DEST_MAC,
    VTEPREC_ACL_ENTRY_COL_DEST_MASK,
    VTEPREC_ACL_ENTRY_COL_DEST_PORT_MAX,
    VTEPREC_ACL_ENTRY_COL_DEST_PORT_MIN,
    VTEPREC_ACL_ENTRY_COL_DIRECTION,
    VTEPREC_ACL_ENTRY_COL_ETHERTYPE,
    VTEPREC_ACL_ENTRY_COL_ICMP_CODE,
    VTEPREC_ACL_ENTRY_COL_ICMP_TYPE,
    VTEPREC_ACL_ENTRY_COL_PROTOCOL,
    VTEPREC_ACL_ENTRY_COL_SEQUENCE,
    VTEPREC_ACL_ENTRY_COL_SOURCE_IP,
    VTEPREC_ACL_ENTRY_COL_SOURCE_MAC,
    VTEPREC_ACL_ENTRY_COL_SOURCE_MASK,
    VTEPREC_ACL_ENTRY_COL_SOURCE_PORT_MAX,
    VTEPREC_ACL_ENTRY_COL_SOURCE_PORT_MIN,
    VTEPREC_ACL_ENTRY_COL_TCP_FLAGS,
    VTEPREC_ACL_ENTRY_COL_TCP_FLAGS_MASK,
    VTEPREC_ACL_ENTRY_N_COLUMNS
};

#define vteprec_acl_entry_col_icmp_code (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ICMP_CODE])
#define vteprec_acl_entry_col_source_mask (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_MASK])
#define vteprec_acl_entry_col_direction (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DIRECTION])
#define vteprec_acl_entry_col_source_port_max (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_PORT_MAX])
#define vteprec_acl_entry_col_protocol (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_PROTOCOL])
#define vteprec_acl_entry_col_dest_mask (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_MASK])
#define vteprec_acl_entry_col_sequence (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SEQUENCE])
#define vteprec_acl_entry_col_ethertype (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ETHERTYPE])
#define vteprec_acl_entry_col_acle_fault_status (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ACLE_FAULT_STATUS])
#define vteprec_acl_entry_col_source_ip (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_IP])
#define vteprec_acl_entry_col_action (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ACTION])
#define vteprec_acl_entry_col_tcp_flags (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_TCP_FLAGS])
#define vteprec_acl_entry_col_dest_mac (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_MAC])
#define vteprec_acl_entry_col_dest_port_min (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_PORT_MIN])
#define vteprec_acl_entry_col_dest_port_max (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_PORT_MAX])
#define vteprec_acl_entry_col_source_mac (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_MAC])
#define vteprec_acl_entry_col_tcp_flags_mask (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_TCP_FLAGS_MASK])
#define vteprec_acl_entry_col_icmp_type (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ICMP_TYPE])
#define vteprec_acl_entry_col_source_port_min (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_PORT_MIN])
#define vteprec_acl_entry_col_dest_ip (vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_IP])

extern struct ovsdb_idl_column vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_N_COLUMNS];

const struct vteprec_acl_entry *vteprec_acl_entry_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_acl_entry *vteprec_acl_entry_first(const struct ovsdb_idl *);
const struct vteprec_acl_entry *vteprec_acl_entry_next(const struct vteprec_acl_entry *);
#define VTEPREC_ACL_ENTRY_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_acl_entry_first(IDL); \
             (ROW); \
             (ROW) = vteprec_acl_entry_next(ROW))
#define VTEPREC_ACL_ENTRY_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_acl_entry_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_acl_entry_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_acl_entry_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_acl_entry_row_get_seqno(const struct vteprec_acl_entry *row, enum ovsdb_idl_change change);
const struct vteprec_acl_entry *vteprec_acl_entry_track_get_first(const struct ovsdb_idl *);
const struct vteprec_acl_entry *vteprec_acl_entry_track_get_next(const struct vteprec_acl_entry *);
#define VTEPREC_ACL_ENTRY_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_acl_entry_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_acl_entry_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_acl_entry_is_new(const struct vteprec_acl_entry *row)
{
    return vteprec_acl_entry_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_acl_entry_is_deleted(const struct vteprec_acl_entry *row)
{
    return vteprec_acl_entry_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_acl_entry_index_destroy_row(const struct vteprec_acl_entry *);
int vteprec_acl_entry_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_acl_entry *, const struct vteprec_acl_entry *);
const struct vteprec_acl_entry *vteprec_acl_entry_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_acl_entry *vteprec_acl_entry_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_acl_entry *vteprec_acl_entry_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_acl_entry *);
const struct vteprec_acl_entry *vteprec_acl_entry_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_acl_entry *);
const struct vteprec_acl_entry *vteprec_acl_entry_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_ACL_ENTRY_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_acl_entry_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_acl_entry_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_acl_entry_index_next(CURSOR))
#define VTEPREC_ACL_ENTRY_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_acl_entry_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_acl_entry_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_acl_entry_index_next(CURSOR))
#define VTEPREC_ACL_ENTRY_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_acl_entry_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_acl_entry_index_next(CURSOR))

void vteprec_acl_entry_init(struct vteprec_acl_entry *);
void vteprec_acl_entry_delete(const struct vteprec_acl_entry *);
struct vteprec_acl_entry *vteprec_acl_entry_insert(struct ovsdb_idl_txn *);
bool vteprec_acl_entry_is_updated(const struct vteprec_acl_entry *, enum vteprec_acl_entry_column_id);

void vteprec_acl_entry_verify_acle_fault_status(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_action(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_dest_ip(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_dest_mac(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_dest_mask(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_dest_port_max(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_dest_port_min(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_direction(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_ethertype(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_icmp_code(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_icmp_type(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_protocol(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_sequence(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_source_ip(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_source_mac(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_source_mask(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_source_port_max(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_source_port_min(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_tcp_flags(const struct vteprec_acl_entry *);
void vteprec_acl_entry_verify_tcp_flags_mask(const struct vteprec_acl_entry *);

const struct ovsdb_datum *vteprec_acl_entry_get_acle_fault_status(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_action(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_dest_ip(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_dest_mac(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_dest_mask(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_dest_port_max(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_dest_port_min(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_direction(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_ethertype(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_icmp_code(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_icmp_type(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_protocol(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_sequence(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_source_ip(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_source_mac(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_source_mask(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_source_port_max(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_source_port_min(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_tcp_flags(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_acl_entry_get_tcp_flags_mask(const struct vteprec_acl_entry *, enum ovsdb_atomic_type key_type);

void vteprec_acl_entry_set_acle_fault_status(const struct vteprec_acl_entry *, const char **acle_fault_status, size_t n_acle_fault_status);
void vteprec_acl_entry_set_action(const struct vteprec_acl_entry *, const char *action);
void vteprec_acl_entry_set_dest_ip(const struct vteprec_acl_entry *, const char *dest_ip);
void vteprec_acl_entry_set_dest_mac(const struct vteprec_acl_entry *, const char *dest_mac);
void vteprec_acl_entry_set_dest_mask(const struct vteprec_acl_entry *, const char *dest_mask);
void vteprec_acl_entry_set_dest_port_max(const struct vteprec_acl_entry *, const int64_t *dest_port_max, size_t n_dest_port_max);
void vteprec_acl_entry_set_dest_port_min(const struct vteprec_acl_entry *, const int64_t *dest_port_min, size_t n_dest_port_min);
void vteprec_acl_entry_set_direction(const struct vteprec_acl_entry *, const char *direction);
void vteprec_acl_entry_set_ethertype(const struct vteprec_acl_entry *, const char *ethertype);
void vteprec_acl_entry_set_icmp_code(const struct vteprec_acl_entry *, const int64_t *icmp_code, size_t n_icmp_code);
void vteprec_acl_entry_set_icmp_type(const struct vteprec_acl_entry *, const int64_t *icmp_type, size_t n_icmp_type);
void vteprec_acl_entry_set_protocol(const struct vteprec_acl_entry *, const int64_t *protocol, size_t n_protocol);
void vteprec_acl_entry_set_sequence(const struct vteprec_acl_entry *, int64_t sequence);
void vteprec_acl_entry_set_source_ip(const struct vteprec_acl_entry *, const char *source_ip);
void vteprec_acl_entry_set_source_mac(const struct vteprec_acl_entry *, const char *source_mac);
void vteprec_acl_entry_set_source_mask(const struct vteprec_acl_entry *, const char *source_mask);
void vteprec_acl_entry_set_source_port_max(const struct vteprec_acl_entry *, const int64_t *source_port_max, size_t n_source_port_max);
void vteprec_acl_entry_set_source_port_min(const struct vteprec_acl_entry *, const int64_t *source_port_min, size_t n_source_port_min);
void vteprec_acl_entry_set_tcp_flags(const struct vteprec_acl_entry *, const int64_t *tcp_flags, size_t n_tcp_flags);
void vteprec_acl_entry_set_tcp_flags_mask(const struct vteprec_acl_entry *, const int64_t *tcp_flags_mask, size_t n_tcp_flags_mask);

void vteprec_acl_entry_update_acle_fault_status_addvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_update_acle_fault_status_delvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_add_clause_acle_fault_status(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **acle_fault_status, size_t n_acle_fault_status);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_add_clause_action(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *action);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_dest_ip_addvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_update_dest_ip_delvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_add_clause_dest_ip(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *dest_ip);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_dest_mac_addvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_update_dest_mac_delvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_add_clause_dest_mac(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *dest_mac);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_dest_mask_addvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_update_dest_mask_delvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_add_clause_dest_mask(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *dest_mask);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_dest_port_max_addvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_update_dest_port_max_delvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_add_clause_dest_port_max(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *dest_port_max, size_t n_dest_port_max);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_dest_port_min_addvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_update_dest_port_min_delvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_add_clause_dest_port_min(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *dest_port_min, size_t n_dest_port_min);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_add_clause_direction(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *direction);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_ethertype_addvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_update_ethertype_delvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_add_clause_ethertype(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ethertype);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_icmp_code_addvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_update_icmp_code_delvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_add_clause_icmp_code(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *icmp_code, size_t n_icmp_code);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_icmp_type_addvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_update_icmp_type_delvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_add_clause_icmp_type(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *icmp_type, size_t n_icmp_type);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_protocol_addvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_update_protocol_delvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_add_clause_protocol(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *protocol, size_t n_protocol);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_add_clause_sequence(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t sequence);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_source_ip_addvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_update_source_ip_delvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_add_clause_source_ip(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *source_ip);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_source_mac_addvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_update_source_mac_delvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_add_clause_source_mac(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *source_mac);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_source_mask_addvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_update_source_mask_delvalue(const struct vteprec_acl_entry *,  const char *);
void vteprec_acl_entry_add_clause_source_mask(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *source_mask);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_source_port_max_addvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_update_source_port_max_delvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_add_clause_source_port_max(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *source_port_max, size_t n_source_port_max);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_source_port_min_addvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_update_source_port_min_delvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_add_clause_source_port_min(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *source_port_min, size_t n_source_port_min);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_tcp_flags_addvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_update_tcp_flags_delvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_add_clause_tcp_flags(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *tcp_flags, size_t n_tcp_flags);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_acl_entry_update_tcp_flags_mask_addvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_update_tcp_flags_mask_delvalue(const struct vteprec_acl_entry *,  int64_t );
void vteprec_acl_entry_add_clause_tcp_flags_mask(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *tcp_flags_mask, size_t n_tcp_flags_mask);
void vteprec_acl_entry_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_acl_entry * vteprec_acl_entry_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_acl_entry_index_set_acle_fault_status(const struct vteprec_acl_entry *,
const char **acle_fault_status, size_t n_acle_fault_status);
void vteprec_acl_entry_index_set_action(const struct vteprec_acl_entry *,
const char *action);
void vteprec_acl_entry_index_set_dest_ip(const struct vteprec_acl_entry *,
const char *dest_ip);
void vteprec_acl_entry_index_set_dest_mac(const struct vteprec_acl_entry *,
const char *dest_mac);
void vteprec_acl_entry_index_set_dest_mask(const struct vteprec_acl_entry *,
const char *dest_mask);
void vteprec_acl_entry_index_set_dest_port_max(const struct vteprec_acl_entry *,
const int64_t *dest_port_max, size_t n_dest_port_max);
void vteprec_acl_entry_index_set_dest_port_min(const struct vteprec_acl_entry *,
const int64_t *dest_port_min, size_t n_dest_port_min);
void vteprec_acl_entry_index_set_direction(const struct vteprec_acl_entry *,
const char *direction);
void vteprec_acl_entry_index_set_ethertype(const struct vteprec_acl_entry *,
const char *ethertype);
void vteprec_acl_entry_index_set_icmp_code(const struct vteprec_acl_entry *,
const int64_t *icmp_code, size_t n_icmp_code);
void vteprec_acl_entry_index_set_icmp_type(const struct vteprec_acl_entry *,
const int64_t *icmp_type, size_t n_icmp_type);
void vteprec_acl_entry_index_set_protocol(const struct vteprec_acl_entry *,
const int64_t *protocol, size_t n_protocol);
void vteprec_acl_entry_index_set_sequence(const struct vteprec_acl_entry *,
int64_t sequence);
void vteprec_acl_entry_index_set_source_ip(const struct vteprec_acl_entry *,
const char *source_ip);
void vteprec_acl_entry_index_set_source_mac(const struct vteprec_acl_entry *,
const char *source_mac);
void vteprec_acl_entry_index_set_source_mask(const struct vteprec_acl_entry *,
const char *source_mask);
void vteprec_acl_entry_index_set_source_port_max(const struct vteprec_acl_entry *,
const int64_t *source_port_max, size_t n_source_port_max);
void vteprec_acl_entry_index_set_source_port_min(const struct vteprec_acl_entry *,
const int64_t *source_port_min, size_t n_source_port_min);
void vteprec_acl_entry_index_set_tcp_flags(const struct vteprec_acl_entry *,
const int64_t *tcp_flags, size_t n_tcp_flags);
void vteprec_acl_entry_index_set_tcp_flags_mask(const struct vteprec_acl_entry *,
const int64_t *tcp_flags_mask, size_t n_tcp_flags_mask);

/* Arp_Sources_Local table. */
struct vteprec_arp_sources_local {
	struct ovsdb_idl_row header_;

	/* locator column. */
	struct vteprec_physical_locator *locator;

	/* src_mac column. */
	char *src_mac;	/* Always nonnull. */
};

enum vteprec_arp_sources_local_column_id {
    VTEPREC_ARP_SOURCES_LOCAL_COL_LOCATOR,
    VTEPREC_ARP_SOURCES_LOCAL_COL_SRC_MAC,
    VTEPREC_ARP_SOURCES_LOCAL_N_COLUMNS
};

#define vteprec_arp_sources_local_col_locator (vteprec_arp_sources_local_columns[VTEPREC_ARP_SOURCES_LOCAL_COL_LOCATOR])
#define vteprec_arp_sources_local_col_src_mac (vteprec_arp_sources_local_columns[VTEPREC_ARP_SOURCES_LOCAL_COL_SRC_MAC])

extern struct ovsdb_idl_column vteprec_arp_sources_local_columns[VTEPREC_ARP_SOURCES_LOCAL_N_COLUMNS];

const struct vteprec_arp_sources_local *vteprec_arp_sources_local_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_arp_sources_local *vteprec_arp_sources_local_first(const struct ovsdb_idl *);
const struct vteprec_arp_sources_local *vteprec_arp_sources_local_next(const struct vteprec_arp_sources_local *);
#define VTEPREC_ARP_SOURCES_LOCAL_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_arp_sources_local_first(IDL); \
             (ROW); \
             (ROW) = vteprec_arp_sources_local_next(ROW))
#define VTEPREC_ARP_SOURCES_LOCAL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_arp_sources_local_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_arp_sources_local_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_arp_sources_local_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_arp_sources_local_row_get_seqno(const struct vteprec_arp_sources_local *row, enum ovsdb_idl_change change);
const struct vteprec_arp_sources_local *vteprec_arp_sources_local_track_get_first(const struct ovsdb_idl *);
const struct vteprec_arp_sources_local *vteprec_arp_sources_local_track_get_next(const struct vteprec_arp_sources_local *);
#define VTEPREC_ARP_SOURCES_LOCAL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_arp_sources_local_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_arp_sources_local_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_arp_sources_local_is_new(const struct vteprec_arp_sources_local *row)
{
    return vteprec_arp_sources_local_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_arp_sources_local_is_deleted(const struct vteprec_arp_sources_local *row)
{
    return vteprec_arp_sources_local_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_arp_sources_local_index_destroy_row(const struct vteprec_arp_sources_local *);
int vteprec_arp_sources_local_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_arp_sources_local *, const struct vteprec_arp_sources_local *);
const struct vteprec_arp_sources_local *vteprec_arp_sources_local_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_arp_sources_local *vteprec_arp_sources_local_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_arp_sources_local *vteprec_arp_sources_local_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_arp_sources_local *);
const struct vteprec_arp_sources_local *vteprec_arp_sources_local_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_arp_sources_local *);
const struct vteprec_arp_sources_local *vteprec_arp_sources_local_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_ARP_SOURCES_LOCAL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_arp_sources_local_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_arp_sources_local_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_arp_sources_local_index_next(CURSOR))
#define VTEPREC_ARP_SOURCES_LOCAL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_arp_sources_local_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_arp_sources_local_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_arp_sources_local_index_next(CURSOR))
#define VTEPREC_ARP_SOURCES_LOCAL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_arp_sources_local_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_arp_sources_local_index_next(CURSOR))

void vteprec_arp_sources_local_init(struct vteprec_arp_sources_local *);
void vteprec_arp_sources_local_delete(const struct vteprec_arp_sources_local *);
struct vteprec_arp_sources_local *vteprec_arp_sources_local_insert(struct ovsdb_idl_txn *);
bool vteprec_arp_sources_local_is_updated(const struct vteprec_arp_sources_local *, enum vteprec_arp_sources_local_column_id);

void vteprec_arp_sources_local_verify_locator(const struct vteprec_arp_sources_local *);
void vteprec_arp_sources_local_verify_src_mac(const struct vteprec_arp_sources_local *);

const struct ovsdb_datum *vteprec_arp_sources_local_get_locator(const struct vteprec_arp_sources_local *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_arp_sources_local_get_src_mac(const struct vteprec_arp_sources_local *, enum ovsdb_atomic_type key_type);

void vteprec_arp_sources_local_set_locator(const struct vteprec_arp_sources_local *, const struct vteprec_physical_locator *locator);
void vteprec_arp_sources_local_set_src_mac(const struct vteprec_arp_sources_local *, const char *src_mac);

void vteprec_arp_sources_local_add_clause_locator(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *locator);
void vteprec_arp_sources_local_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_arp_sources_local_add_clause_src_mac(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *src_mac);
void vteprec_arp_sources_local_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_arp_sources_local * vteprec_arp_sources_local_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_arp_sources_local_index_set_locator(const struct vteprec_arp_sources_local *,
const struct vteprec_physical_locator *locator);
void vteprec_arp_sources_local_index_set_src_mac(const struct vteprec_arp_sources_local *,
const char *src_mac);

/* Arp_Sources_Remote table. */
struct vteprec_arp_sources_remote {
	struct ovsdb_idl_row header_;

	/* locator column. */
	struct vteprec_physical_locator *locator;

	/* src_mac column. */
	char *src_mac;	/* Always nonnull. */
};

enum vteprec_arp_sources_remote_column_id {
    VTEPREC_ARP_SOURCES_REMOTE_COL_LOCATOR,
    VTEPREC_ARP_SOURCES_REMOTE_COL_SRC_MAC,
    VTEPREC_ARP_SOURCES_REMOTE_N_COLUMNS
};

#define vteprec_arp_sources_remote_col_locator (vteprec_arp_sources_remote_columns[VTEPREC_ARP_SOURCES_REMOTE_COL_LOCATOR])
#define vteprec_arp_sources_remote_col_src_mac (vteprec_arp_sources_remote_columns[VTEPREC_ARP_SOURCES_REMOTE_COL_SRC_MAC])

extern struct ovsdb_idl_column vteprec_arp_sources_remote_columns[VTEPREC_ARP_SOURCES_REMOTE_N_COLUMNS];

const struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_first(const struct ovsdb_idl *);
const struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_next(const struct vteprec_arp_sources_remote *);
#define VTEPREC_ARP_SOURCES_REMOTE_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_arp_sources_remote_first(IDL); \
             (ROW); \
             (ROW) = vteprec_arp_sources_remote_next(ROW))
#define VTEPREC_ARP_SOURCES_REMOTE_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_arp_sources_remote_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_arp_sources_remote_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_arp_sources_remote_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_arp_sources_remote_row_get_seqno(const struct vteprec_arp_sources_remote *row, enum ovsdb_idl_change change);
const struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_track_get_first(const struct ovsdb_idl *);
const struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_track_get_next(const struct vteprec_arp_sources_remote *);
#define VTEPREC_ARP_SOURCES_REMOTE_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_arp_sources_remote_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_arp_sources_remote_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_arp_sources_remote_is_new(const struct vteprec_arp_sources_remote *row)
{
    return vteprec_arp_sources_remote_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_arp_sources_remote_is_deleted(const struct vteprec_arp_sources_remote *row)
{
    return vteprec_arp_sources_remote_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_arp_sources_remote_index_destroy_row(const struct vteprec_arp_sources_remote *);
int vteprec_arp_sources_remote_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_arp_sources_remote *, const struct vteprec_arp_sources_remote *);
const struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_arp_sources_remote *);
const struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_arp_sources_remote *);
const struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_ARP_SOURCES_REMOTE_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_arp_sources_remote_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_arp_sources_remote_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_arp_sources_remote_index_next(CURSOR))
#define VTEPREC_ARP_SOURCES_REMOTE_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_arp_sources_remote_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_arp_sources_remote_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_arp_sources_remote_index_next(CURSOR))
#define VTEPREC_ARP_SOURCES_REMOTE_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_arp_sources_remote_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_arp_sources_remote_index_next(CURSOR))

void vteprec_arp_sources_remote_init(struct vteprec_arp_sources_remote *);
void vteprec_arp_sources_remote_delete(const struct vteprec_arp_sources_remote *);
struct vteprec_arp_sources_remote *vteprec_arp_sources_remote_insert(struct ovsdb_idl_txn *);
bool vteprec_arp_sources_remote_is_updated(const struct vteprec_arp_sources_remote *, enum vteprec_arp_sources_remote_column_id);

void vteprec_arp_sources_remote_verify_locator(const struct vteprec_arp_sources_remote *);
void vteprec_arp_sources_remote_verify_src_mac(const struct vteprec_arp_sources_remote *);

const struct ovsdb_datum *vteprec_arp_sources_remote_get_locator(const struct vteprec_arp_sources_remote *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_arp_sources_remote_get_src_mac(const struct vteprec_arp_sources_remote *, enum ovsdb_atomic_type key_type);

void vteprec_arp_sources_remote_set_locator(const struct vteprec_arp_sources_remote *, const struct vteprec_physical_locator *locator);
void vteprec_arp_sources_remote_set_src_mac(const struct vteprec_arp_sources_remote *, const char *src_mac);

void vteprec_arp_sources_remote_add_clause_locator(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *locator);
void vteprec_arp_sources_remote_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_arp_sources_remote_add_clause_src_mac(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *src_mac);
void vteprec_arp_sources_remote_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_arp_sources_remote * vteprec_arp_sources_remote_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_arp_sources_remote_index_set_locator(const struct vteprec_arp_sources_remote *,
const struct vteprec_physical_locator *locator);
void vteprec_arp_sources_remote_index_set_src_mac(const struct vteprec_arp_sources_remote *,
const char *src_mac);

/* Global table. */
struct vteprec_global {
	struct ovsdb_idl_row header_;

	/* managers column. */
	struct vteprec_manager **managers;
	size_t n_managers;

	/* other_config column. */
	struct smap other_config;

	/* switches column. */
	struct vteprec_physical_switch **switches;
	size_t n_switches;
};

enum vteprec_global_column_id {
    VTEPREC_GLOBAL_COL_MANAGERS,
    VTEPREC_GLOBAL_COL_OTHER_CONFIG,
    VTEPREC_GLOBAL_COL_SWITCHES,
    VTEPREC_GLOBAL_N_COLUMNS
};

#define vteprec_global_col_switches (vteprec_global_columns[VTEPREC_GLOBAL_COL_SWITCHES])
#define vteprec_global_col_other_config (vteprec_global_columns[VTEPREC_GLOBAL_COL_OTHER_CONFIG])
#define vteprec_global_col_managers (vteprec_global_columns[VTEPREC_GLOBAL_COL_MANAGERS])

extern struct ovsdb_idl_column vteprec_global_columns[VTEPREC_GLOBAL_N_COLUMNS];

const struct vteprec_global *vteprec_global_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_global *vteprec_global_first(const struct ovsdb_idl *);
const struct vteprec_global *vteprec_global_next(const struct vteprec_global *);
#define VTEPREC_GLOBAL_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_global_first(IDL); \
             (ROW); \
             (ROW) = vteprec_global_next(ROW))
#define VTEPREC_GLOBAL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_global_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_global_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_global_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_global_row_get_seqno(const struct vteprec_global *row, enum ovsdb_idl_change change);
const struct vteprec_global *vteprec_global_track_get_first(const struct ovsdb_idl *);
const struct vteprec_global *vteprec_global_track_get_next(const struct vteprec_global *);
#define VTEPREC_GLOBAL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_global_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_global_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_global_is_new(const struct vteprec_global *row)
{
    return vteprec_global_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_global_is_deleted(const struct vteprec_global *row)
{
    return vteprec_global_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_global_index_destroy_row(const struct vteprec_global *);
int vteprec_global_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_global *, const struct vteprec_global *);
const struct vteprec_global *vteprec_global_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_global *vteprec_global_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_global *vteprec_global_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_global *);
const struct vteprec_global *vteprec_global_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_global *);
const struct vteprec_global *vteprec_global_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_GLOBAL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_global_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_global_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_global_index_next(CURSOR))
#define VTEPREC_GLOBAL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_global_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_global_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_global_index_next(CURSOR))
#define VTEPREC_GLOBAL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_global_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_global_index_next(CURSOR))

void vteprec_global_init(struct vteprec_global *);
void vteprec_global_delete(const struct vteprec_global *);
struct vteprec_global *vteprec_global_insert(struct ovsdb_idl_txn *);
bool vteprec_global_is_updated(const struct vteprec_global *, enum vteprec_global_column_id);

void vteprec_global_verify_managers(const struct vteprec_global *);
void vteprec_global_verify_other_config(const struct vteprec_global *);
void vteprec_global_verify_switches(const struct vteprec_global *);

const struct ovsdb_datum *vteprec_global_get_managers(const struct vteprec_global *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_global_get_other_config(const struct vteprec_global *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_global_get_switches(const struct vteprec_global *, enum ovsdb_atomic_type key_type);

void vteprec_global_set_managers(const struct vteprec_global *, struct vteprec_manager **managers, size_t n_managers);
void vteprec_global_set_other_config(const struct vteprec_global *, const struct smap *);
void vteprec_global_set_switches(const struct vteprec_global *, struct vteprec_physical_switch **switches, size_t n_switches);

void vteprec_global_update_managers_addvalue(const struct vteprec_global *,  const struct vteprec_manager *);
void vteprec_global_update_managers_delvalue(const struct vteprec_global *,  const struct vteprec_manager *);
void vteprec_global_add_clause_managers(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **managers, size_t n_managers);
void vteprec_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_global_update_other_config_setkey(const struct vteprec_global *,  const char *, const char *);
void vteprec_global_update_other_config_delkey(const struct vteprec_global *,  const char *);
void vteprec_global_add_clause_other_config(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_global_update_switches_addvalue(const struct vteprec_global *,  const struct vteprec_physical_switch *);
void vteprec_global_update_switches_delvalue(const struct vteprec_global *,  const struct vteprec_physical_switch *);
void vteprec_global_add_clause_switches(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **switches, size_t n_switches);
void vteprec_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_global * vteprec_global_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_global_index_set_managers(const struct vteprec_global *,
struct vteprec_manager **managers, size_t n_managers);
void vteprec_global_index_set_other_config(const struct vteprec_global *,
const struct smap *);
void vteprec_global_index_set_switches(const struct vteprec_global *,
struct vteprec_physical_switch **switches, size_t n_switches);

/* Logical_Binding_Stats table. */
struct vteprec_logical_binding_stats {
	struct ovsdb_idl_row header_;

	/* bytes_from_local column. */
	int64_t bytes_from_local;

	/* bytes_to_local column. */
	int64_t bytes_to_local;

	/* packets_from_local column. */
	int64_t packets_from_local;

	/* packets_to_local column. */
	int64_t packets_to_local;
};

enum vteprec_logical_binding_stats_column_id {
    VTEPREC_LOGICAL_BINDING_STATS_COL_BYTES_FROM_LOCAL,
    VTEPREC_LOGICAL_BINDING_STATS_COL_BYTES_TO_LOCAL,
    VTEPREC_LOGICAL_BINDING_STATS_COL_PACKETS_FROM_LOCAL,
    VTEPREC_LOGICAL_BINDING_STATS_COL_PACKETS_TO_LOCAL,
    VTEPREC_LOGICAL_BINDING_STATS_N_COLUMNS
};

#define vteprec_logical_binding_stats_col_bytes_to_local (vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_BYTES_TO_LOCAL])
#define vteprec_logical_binding_stats_col_bytes_from_local (vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_BYTES_FROM_LOCAL])
#define vteprec_logical_binding_stats_col_packets_from_local (vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_PACKETS_FROM_LOCAL])
#define vteprec_logical_binding_stats_col_packets_to_local (vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_PACKETS_TO_LOCAL])

extern struct ovsdb_idl_column vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_N_COLUMNS];

const struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_first(const struct ovsdb_idl *);
const struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_next(const struct vteprec_logical_binding_stats *);
#define VTEPREC_LOGICAL_BINDING_STATS_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_logical_binding_stats_first(IDL); \
             (ROW); \
             (ROW) = vteprec_logical_binding_stats_next(ROW))
#define VTEPREC_LOGICAL_BINDING_STATS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_logical_binding_stats_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_logical_binding_stats_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_logical_binding_stats_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_logical_binding_stats_row_get_seqno(const struct vteprec_logical_binding_stats *row, enum ovsdb_idl_change change);
const struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_track_get_first(const struct ovsdb_idl *);
const struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_track_get_next(const struct vteprec_logical_binding_stats *);
#define VTEPREC_LOGICAL_BINDING_STATS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_logical_binding_stats_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_logical_binding_stats_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_logical_binding_stats_is_new(const struct vteprec_logical_binding_stats *row)
{
    return vteprec_logical_binding_stats_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_logical_binding_stats_is_deleted(const struct vteprec_logical_binding_stats *row)
{
    return vteprec_logical_binding_stats_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_logical_binding_stats_index_destroy_row(const struct vteprec_logical_binding_stats *);
int vteprec_logical_binding_stats_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_logical_binding_stats *, const struct vteprec_logical_binding_stats *);
const struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_logical_binding_stats *);
const struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_logical_binding_stats *);
const struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_LOGICAL_BINDING_STATS_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_logical_binding_stats_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_logical_binding_stats_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_logical_binding_stats_index_next(CURSOR))
#define VTEPREC_LOGICAL_BINDING_STATS_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_logical_binding_stats_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_logical_binding_stats_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_logical_binding_stats_index_next(CURSOR))
#define VTEPREC_LOGICAL_BINDING_STATS_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_logical_binding_stats_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_logical_binding_stats_index_next(CURSOR))

void vteprec_logical_binding_stats_init(struct vteprec_logical_binding_stats *);
void vteprec_logical_binding_stats_delete(const struct vteprec_logical_binding_stats *);
struct vteprec_logical_binding_stats *vteprec_logical_binding_stats_insert(struct ovsdb_idl_txn *);
bool vteprec_logical_binding_stats_is_updated(const struct vteprec_logical_binding_stats *, enum vteprec_logical_binding_stats_column_id);

void vteprec_logical_binding_stats_verify_bytes_from_local(const struct vteprec_logical_binding_stats *);
void vteprec_logical_binding_stats_verify_bytes_to_local(const struct vteprec_logical_binding_stats *);
void vteprec_logical_binding_stats_verify_packets_from_local(const struct vteprec_logical_binding_stats *);
void vteprec_logical_binding_stats_verify_packets_to_local(const struct vteprec_logical_binding_stats *);

const struct ovsdb_datum *vteprec_logical_binding_stats_get_bytes_from_local(const struct vteprec_logical_binding_stats *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_logical_binding_stats_get_bytes_to_local(const struct vteprec_logical_binding_stats *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_logical_binding_stats_get_packets_from_local(const struct vteprec_logical_binding_stats *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_logical_binding_stats_get_packets_to_local(const struct vteprec_logical_binding_stats *, enum ovsdb_atomic_type key_type);

void vteprec_logical_binding_stats_set_bytes_from_local(const struct vteprec_logical_binding_stats *, int64_t bytes_from_local);
void vteprec_logical_binding_stats_set_bytes_to_local(const struct vteprec_logical_binding_stats *, int64_t bytes_to_local);
void vteprec_logical_binding_stats_set_packets_from_local(const struct vteprec_logical_binding_stats *, int64_t packets_from_local);
void vteprec_logical_binding_stats_set_packets_to_local(const struct vteprec_logical_binding_stats *, int64_t packets_to_local);

void vteprec_logical_binding_stats_add_clause_bytes_from_local(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t bytes_from_local);
void vteprec_logical_binding_stats_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_binding_stats_add_clause_bytes_to_local(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t bytes_to_local);
void vteprec_logical_binding_stats_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_binding_stats_add_clause_packets_from_local(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t packets_from_local);
void vteprec_logical_binding_stats_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_binding_stats_add_clause_packets_to_local(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t packets_to_local);
void vteprec_logical_binding_stats_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_logical_binding_stats * vteprec_logical_binding_stats_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_logical_binding_stats_index_set_bytes_from_local(const struct vteprec_logical_binding_stats *,
int64_t bytes_from_local);
void vteprec_logical_binding_stats_index_set_bytes_to_local(const struct vteprec_logical_binding_stats *,
int64_t bytes_to_local);
void vteprec_logical_binding_stats_index_set_packets_from_local(const struct vteprec_logical_binding_stats *,
int64_t packets_from_local);
void vteprec_logical_binding_stats_index_set_packets_to_local(const struct vteprec_logical_binding_stats *,
int64_t packets_to_local);

/* Logical_Router table. */
struct vteprec_logical_router {
	struct ovsdb_idl_row header_;

	/* LR_fault_status column. */
	char **LR_fault_status;
	size_t n_LR_fault_status;

	/* acl_binding column. */
	char **key_acl_binding;
	struct vteprec_acl **value_acl_binding;
	size_t n_acl_binding;

	/* description column. */
	char *description;	/* Always nonnull. */

	/* name column. */
	char *name;	/* Always nonnull. */

	/* other_config column. */
	struct smap other_config;

	/* static_routes column. */
	struct smap static_routes;

	/* switch_binding column. */
	char **key_switch_binding;
	struct vteprec_logical_switch **value_switch_binding;
	size_t n_switch_binding;
};

enum vteprec_logical_router_column_id {
    VTEPREC_LOGICAL_ROUTER_COL_LR_FAULT_STATUS,
    VTEPREC_LOGICAL_ROUTER_COL_ACL_BINDING,
    VTEPREC_LOGICAL_ROUTER_COL_DESCRIPTION,
    VTEPREC_LOGICAL_ROUTER_COL_NAME,
    VTEPREC_LOGICAL_ROUTER_COL_OTHER_CONFIG,
    VTEPREC_LOGICAL_ROUTER_COL_STATIC_ROUTES,
    VTEPREC_LOGICAL_ROUTER_COL_SWITCH_BINDING,
    VTEPREC_LOGICAL_ROUTER_N_COLUMNS
};

#define vteprec_logical_router_col_LR_fault_status (vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_LR_FAULT_STATUS])
#define vteprec_logical_router_col_description (vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_DESCRIPTION])
#define vteprec_logical_router_col_static_routes (vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_STATIC_ROUTES])
#define vteprec_logical_router_col_acl_binding (vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_ACL_BINDING])
#define vteprec_logical_router_col_other_config (vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_OTHER_CONFIG])
#define vteprec_logical_router_col_switch_binding (vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_SWITCH_BINDING])
#define vteprec_logical_router_col_name (vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_NAME])

extern struct ovsdb_idl_column vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_N_COLUMNS];

const struct vteprec_logical_router *vteprec_logical_router_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_logical_router *vteprec_logical_router_first(const struct ovsdb_idl *);
const struct vteprec_logical_router *vteprec_logical_router_next(const struct vteprec_logical_router *);
#define VTEPREC_LOGICAL_ROUTER_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_logical_router_first(IDL); \
             (ROW); \
             (ROW) = vteprec_logical_router_next(ROW))
#define VTEPREC_LOGICAL_ROUTER_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_logical_router_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_logical_router_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_logical_router_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_logical_router_row_get_seqno(const struct vteprec_logical_router *row, enum ovsdb_idl_change change);
const struct vteprec_logical_router *vteprec_logical_router_track_get_first(const struct ovsdb_idl *);
const struct vteprec_logical_router *vteprec_logical_router_track_get_next(const struct vteprec_logical_router *);
#define VTEPREC_LOGICAL_ROUTER_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_logical_router_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_logical_router_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_logical_router_is_new(const struct vteprec_logical_router *row)
{
    return vteprec_logical_router_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_logical_router_is_deleted(const struct vteprec_logical_router *row)
{
    return vteprec_logical_router_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_logical_router_index_destroy_row(const struct vteprec_logical_router *);
int vteprec_logical_router_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_logical_router *, const struct vteprec_logical_router *);
const struct vteprec_logical_router *vteprec_logical_router_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_logical_router *vteprec_logical_router_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_logical_router *vteprec_logical_router_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_logical_router *);
const struct vteprec_logical_router *vteprec_logical_router_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_logical_router *);
const struct vteprec_logical_router *vteprec_logical_router_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_LOGICAL_ROUTER_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_logical_router_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_logical_router_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_logical_router_index_next(CURSOR))
#define VTEPREC_LOGICAL_ROUTER_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_logical_router_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_logical_router_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_logical_router_index_next(CURSOR))
#define VTEPREC_LOGICAL_ROUTER_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_logical_router_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_logical_router_index_next(CURSOR))

void vteprec_logical_router_init(struct vteprec_logical_router *);
void vteprec_logical_router_delete(const struct vteprec_logical_router *);
struct vteprec_logical_router *vteprec_logical_router_insert(struct ovsdb_idl_txn *);
bool vteprec_logical_router_is_updated(const struct vteprec_logical_router *, enum vteprec_logical_router_column_id);

void vteprec_logical_router_verify_LR_fault_status(const struct vteprec_logical_router *);
void vteprec_logical_router_verify_acl_binding(const struct vteprec_logical_router *);
void vteprec_logical_router_verify_description(const struct vteprec_logical_router *);
void vteprec_logical_router_verify_name(const struct vteprec_logical_router *);
void vteprec_logical_router_verify_other_config(const struct vteprec_logical_router *);
void vteprec_logical_router_verify_static_routes(const struct vteprec_logical_router *);
void vteprec_logical_router_verify_switch_binding(const struct vteprec_logical_router *);

const struct ovsdb_datum *vteprec_logical_router_get_LR_fault_status(const struct vteprec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_logical_router_get_acl_binding(const struct vteprec_logical_router *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_logical_router_get_description(const struct vteprec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_logical_router_get_name(const struct vteprec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_logical_router_get_other_config(const struct vteprec_logical_router *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_logical_router_get_static_routes(const struct vteprec_logical_router *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_logical_router_get_switch_binding(const struct vteprec_logical_router *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);

void vteprec_logical_router_set_LR_fault_status(const struct vteprec_logical_router *, const char **LR_fault_status, size_t n_LR_fault_status);
void vteprec_logical_router_set_acl_binding(const struct vteprec_logical_router *, const char **key_acl_binding, struct vteprec_acl **value_acl_binding, size_t n_acl_binding);
void vteprec_logical_router_set_description(const struct vteprec_logical_router *, const char *description);
void vteprec_logical_router_set_name(const struct vteprec_logical_router *, const char *name);
void vteprec_logical_router_set_other_config(const struct vteprec_logical_router *, const struct smap *);
void vteprec_logical_router_set_static_routes(const struct vteprec_logical_router *, const struct smap *);
void vteprec_logical_router_set_switch_binding(const struct vteprec_logical_router *, const char **key_switch_binding, struct vteprec_logical_switch **value_switch_binding, size_t n_switch_binding);

void vteprec_logical_router_update_LR_fault_status_addvalue(const struct vteprec_logical_router *,  const char *);
void vteprec_logical_router_update_LR_fault_status_delvalue(const struct vteprec_logical_router *,  const char *);
void vteprec_logical_router_add_clause_LR_fault_status(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **LR_fault_status, size_t n_LR_fault_status);
void vteprec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_router_update_acl_binding_setkey(const struct vteprec_logical_router *,  const char *, const struct vteprec_acl *);
void vteprec_logical_router_update_acl_binding_delkey(const struct vteprec_logical_router *,  const char *);
void vteprec_logical_router_add_clause_acl_binding(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **key_acl_binding, struct uuid **value_acl_binding, size_t n_acl_binding);
void vteprec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_router_add_clause_description(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *description);
void vteprec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_router_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void vteprec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_router_update_other_config_setkey(const struct vteprec_logical_router *,  const char *, const char *);
void vteprec_logical_router_update_other_config_delkey(const struct vteprec_logical_router *,  const char *);
void vteprec_logical_router_add_clause_other_config(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_router_update_static_routes_setkey(const struct vteprec_logical_router *,  const char *, const char *);
void vteprec_logical_router_update_static_routes_delkey(const struct vteprec_logical_router *,  const char *);
void vteprec_logical_router_add_clause_static_routes(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_router_update_switch_binding_setkey(const struct vteprec_logical_router *,  const char *, const struct vteprec_logical_switch *);
void vteprec_logical_router_update_switch_binding_delkey(const struct vteprec_logical_router *,  const char *);
void vteprec_logical_router_add_clause_switch_binding(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **key_switch_binding, struct uuid **value_switch_binding, size_t n_switch_binding);
void vteprec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_logical_router * vteprec_logical_router_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_logical_router_index_set_LR_fault_status(const struct vteprec_logical_router *,
const char **LR_fault_status, size_t n_LR_fault_status);
void vteprec_logical_router_index_set_acl_binding(const struct vteprec_logical_router *,
const char **key_acl_binding, struct vteprec_acl **value_acl_binding, size_t n_acl_binding);
void vteprec_logical_router_index_set_description(const struct vteprec_logical_router *,
const char *description);
void vteprec_logical_router_index_set_name(const struct vteprec_logical_router *,
const char *name);
void vteprec_logical_router_index_set_other_config(const struct vteprec_logical_router *,
const struct smap *);
void vteprec_logical_router_index_set_static_routes(const struct vteprec_logical_router *,
const struct smap *);
void vteprec_logical_router_index_set_switch_binding(const struct vteprec_logical_router *,
const char **key_switch_binding, struct vteprec_logical_switch **value_switch_binding, size_t n_switch_binding);

/* Logical_Switch table. */
struct vteprec_logical_switch {
	struct ovsdb_idl_row header_;

	/* description column. */
	char *description;	/* Always nonnull. */

	/* name column. */
	char *name;	/* Always nonnull. */

	/* other_config column. */
	struct smap other_config;

	/* replication_mode column. */
	char *replication_mode;

	/* tunnel_key column. */
	int64_t *tunnel_key;
	size_t n_tunnel_key;
};

enum vteprec_logical_switch_column_id {
    VTEPREC_LOGICAL_SWITCH_COL_DESCRIPTION,
    VTEPREC_LOGICAL_SWITCH_COL_NAME,
    VTEPREC_LOGICAL_SWITCH_COL_OTHER_CONFIG,
    VTEPREC_LOGICAL_SWITCH_COL_REPLICATION_MODE,
    VTEPREC_LOGICAL_SWITCH_COL_TUNNEL_KEY,
    VTEPREC_LOGICAL_SWITCH_N_COLUMNS
};

#define vteprec_logical_switch_col_tunnel_key (vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_TUNNEL_KEY])
#define vteprec_logical_switch_col_other_config (vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_OTHER_CONFIG])
#define vteprec_logical_switch_col_replication_mode (vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_REPLICATION_MODE])
#define vteprec_logical_switch_col_description (vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_DESCRIPTION])
#define vteprec_logical_switch_col_name (vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_NAME])

extern struct ovsdb_idl_column vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_N_COLUMNS];

const struct vteprec_logical_switch *vteprec_logical_switch_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_logical_switch *vteprec_logical_switch_first(const struct ovsdb_idl *);
const struct vteprec_logical_switch *vteprec_logical_switch_next(const struct vteprec_logical_switch *);
#define VTEPREC_LOGICAL_SWITCH_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_logical_switch_first(IDL); \
             (ROW); \
             (ROW) = vteprec_logical_switch_next(ROW))
#define VTEPREC_LOGICAL_SWITCH_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_logical_switch_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_logical_switch_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_logical_switch_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_logical_switch_row_get_seqno(const struct vteprec_logical_switch *row, enum ovsdb_idl_change change);
const struct vteprec_logical_switch *vteprec_logical_switch_track_get_first(const struct ovsdb_idl *);
const struct vteprec_logical_switch *vteprec_logical_switch_track_get_next(const struct vteprec_logical_switch *);
#define VTEPREC_LOGICAL_SWITCH_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_logical_switch_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_logical_switch_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_logical_switch_is_new(const struct vteprec_logical_switch *row)
{
    return vteprec_logical_switch_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_logical_switch_is_deleted(const struct vteprec_logical_switch *row)
{
    return vteprec_logical_switch_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_logical_switch_index_destroy_row(const struct vteprec_logical_switch *);
int vteprec_logical_switch_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_logical_switch *, const struct vteprec_logical_switch *);
const struct vteprec_logical_switch *vteprec_logical_switch_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_logical_switch *vteprec_logical_switch_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_logical_switch *vteprec_logical_switch_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_logical_switch *);
const struct vteprec_logical_switch *vteprec_logical_switch_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_logical_switch *);
const struct vteprec_logical_switch *vteprec_logical_switch_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_LOGICAL_SWITCH_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_logical_switch_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_logical_switch_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_logical_switch_index_next(CURSOR))
#define VTEPREC_LOGICAL_SWITCH_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_logical_switch_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_logical_switch_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_logical_switch_index_next(CURSOR))
#define VTEPREC_LOGICAL_SWITCH_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_logical_switch_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_logical_switch_index_next(CURSOR))

void vteprec_logical_switch_init(struct vteprec_logical_switch *);
void vteprec_logical_switch_delete(const struct vteprec_logical_switch *);
struct vteprec_logical_switch *vteprec_logical_switch_insert(struct ovsdb_idl_txn *);
bool vteprec_logical_switch_is_updated(const struct vteprec_logical_switch *, enum vteprec_logical_switch_column_id);

void vteprec_logical_switch_verify_description(const struct vteprec_logical_switch *);
void vteprec_logical_switch_verify_name(const struct vteprec_logical_switch *);
void vteprec_logical_switch_verify_other_config(const struct vteprec_logical_switch *);
void vteprec_logical_switch_verify_replication_mode(const struct vteprec_logical_switch *);
void vteprec_logical_switch_verify_tunnel_key(const struct vteprec_logical_switch *);

const struct ovsdb_datum *vteprec_logical_switch_get_description(const struct vteprec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_logical_switch_get_name(const struct vteprec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_logical_switch_get_other_config(const struct vteprec_logical_switch *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_logical_switch_get_replication_mode(const struct vteprec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_logical_switch_get_tunnel_key(const struct vteprec_logical_switch *, enum ovsdb_atomic_type key_type);

void vteprec_logical_switch_set_description(const struct vteprec_logical_switch *, const char *description);
void vteprec_logical_switch_set_name(const struct vteprec_logical_switch *, const char *name);
void vteprec_logical_switch_set_other_config(const struct vteprec_logical_switch *, const struct smap *);
void vteprec_logical_switch_set_replication_mode(const struct vteprec_logical_switch *, const char *replication_mode);
void vteprec_logical_switch_set_tunnel_key(const struct vteprec_logical_switch *, const int64_t *tunnel_key, size_t n_tunnel_key);

void vteprec_logical_switch_add_clause_description(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *description);
void vteprec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_switch_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void vteprec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_switch_update_other_config_setkey(const struct vteprec_logical_switch *,  const char *, const char *);
void vteprec_logical_switch_update_other_config_delkey(const struct vteprec_logical_switch *,  const char *);
void vteprec_logical_switch_add_clause_other_config(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_switch_update_replication_mode_addvalue(const struct vteprec_logical_switch *,  const char *);
void vteprec_logical_switch_update_replication_mode_delvalue(const struct vteprec_logical_switch *,  const char *);
void vteprec_logical_switch_add_clause_replication_mode(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *replication_mode);
void vteprec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_logical_switch_update_tunnel_key_addvalue(const struct vteprec_logical_switch *,  int64_t );
void vteprec_logical_switch_update_tunnel_key_delvalue(const struct vteprec_logical_switch *,  int64_t );
void vteprec_logical_switch_add_clause_tunnel_key(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *tunnel_key, size_t n_tunnel_key);
void vteprec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_logical_switch * vteprec_logical_switch_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_logical_switch_index_set_description(const struct vteprec_logical_switch *,
const char *description);
void vteprec_logical_switch_index_set_name(const struct vteprec_logical_switch *,
const char *name);
void vteprec_logical_switch_index_set_other_config(const struct vteprec_logical_switch *,
const struct smap *);
void vteprec_logical_switch_index_set_replication_mode(const struct vteprec_logical_switch *,
const char *replication_mode);
void vteprec_logical_switch_index_set_tunnel_key(const struct vteprec_logical_switch *,
const int64_t *tunnel_key, size_t n_tunnel_key);

/* Manager table. */
struct vteprec_manager {
	struct ovsdb_idl_row header_;

	/* inactivity_probe column. */
	int64_t *inactivity_probe;
	size_t n_inactivity_probe;

	/* is_connected column. */
	bool is_connected;

	/* max_backoff column. */
	int64_t *max_backoff;
	size_t n_max_backoff;

	/* other_config column. */
	struct smap other_config;

	/* status column. */
	struct smap status;

	/* target column. */
	char *target;	/* Always nonnull. */
};

enum vteprec_manager_column_id {
    VTEPREC_MANAGER_COL_INACTIVITY_PROBE,
    VTEPREC_MANAGER_COL_IS_CONNECTED,
    VTEPREC_MANAGER_COL_MAX_BACKOFF,
    VTEPREC_MANAGER_COL_OTHER_CONFIG,
    VTEPREC_MANAGER_COL_STATUS,
    VTEPREC_MANAGER_COL_TARGET,
    VTEPREC_MANAGER_N_COLUMNS
};

#define vteprec_manager_col_max_backoff (vteprec_manager_columns[VTEPREC_MANAGER_COL_MAX_BACKOFF])
#define vteprec_manager_col_status (vteprec_manager_columns[VTEPREC_MANAGER_COL_STATUS])
#define vteprec_manager_col_target (vteprec_manager_columns[VTEPREC_MANAGER_COL_TARGET])
#define vteprec_manager_col_other_config (vteprec_manager_columns[VTEPREC_MANAGER_COL_OTHER_CONFIG])
#define vteprec_manager_col_inactivity_probe (vteprec_manager_columns[VTEPREC_MANAGER_COL_INACTIVITY_PROBE])
#define vteprec_manager_col_is_connected (vteprec_manager_columns[VTEPREC_MANAGER_COL_IS_CONNECTED])

extern struct ovsdb_idl_column vteprec_manager_columns[VTEPREC_MANAGER_N_COLUMNS];

const struct vteprec_manager *vteprec_manager_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_manager *vteprec_manager_first(const struct ovsdb_idl *);
const struct vteprec_manager *vteprec_manager_next(const struct vteprec_manager *);
#define VTEPREC_MANAGER_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_manager_first(IDL); \
             (ROW); \
             (ROW) = vteprec_manager_next(ROW))
#define VTEPREC_MANAGER_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_manager_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_manager_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_manager_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_manager_row_get_seqno(const struct vteprec_manager *row, enum ovsdb_idl_change change);
const struct vteprec_manager *vteprec_manager_track_get_first(const struct ovsdb_idl *);
const struct vteprec_manager *vteprec_manager_track_get_next(const struct vteprec_manager *);
#define VTEPREC_MANAGER_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_manager_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_manager_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_manager_is_new(const struct vteprec_manager *row)
{
    return vteprec_manager_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_manager_is_deleted(const struct vteprec_manager *row)
{
    return vteprec_manager_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_manager_index_destroy_row(const struct vteprec_manager *);
int vteprec_manager_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_manager *, const struct vteprec_manager *);
const struct vteprec_manager *vteprec_manager_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_manager *vteprec_manager_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_manager *vteprec_manager_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_manager *);
const struct vteprec_manager *vteprec_manager_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_manager *);
const struct vteprec_manager *vteprec_manager_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_MANAGER_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_manager_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_manager_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_manager_index_next(CURSOR))
#define VTEPREC_MANAGER_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_manager_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_manager_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_manager_index_next(CURSOR))
#define VTEPREC_MANAGER_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_manager_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_manager_index_next(CURSOR))

void vteprec_manager_init(struct vteprec_manager *);
void vteprec_manager_delete(const struct vteprec_manager *);
struct vteprec_manager *vteprec_manager_insert(struct ovsdb_idl_txn *);
bool vteprec_manager_is_updated(const struct vteprec_manager *, enum vteprec_manager_column_id);

void vteprec_manager_verify_inactivity_probe(const struct vteprec_manager *);
void vteprec_manager_verify_is_connected(const struct vteprec_manager *);
void vteprec_manager_verify_max_backoff(const struct vteprec_manager *);
void vteprec_manager_verify_other_config(const struct vteprec_manager *);
void vteprec_manager_verify_status(const struct vteprec_manager *);
void vteprec_manager_verify_target(const struct vteprec_manager *);

const struct ovsdb_datum *vteprec_manager_get_inactivity_probe(const struct vteprec_manager *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_manager_get_is_connected(const struct vteprec_manager *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_manager_get_max_backoff(const struct vteprec_manager *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_manager_get_other_config(const struct vteprec_manager *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_manager_get_status(const struct vteprec_manager *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_manager_get_target(const struct vteprec_manager *, enum ovsdb_atomic_type key_type);

void vteprec_manager_set_inactivity_probe(const struct vteprec_manager *, const int64_t *inactivity_probe, size_t n_inactivity_probe);
void vteprec_manager_set_is_connected(const struct vteprec_manager *, bool is_connected);
void vteprec_manager_set_max_backoff(const struct vteprec_manager *, const int64_t *max_backoff, size_t n_max_backoff);
void vteprec_manager_set_other_config(const struct vteprec_manager *, const struct smap *);
void vteprec_manager_set_status(const struct vteprec_manager *, const struct smap *);
void vteprec_manager_set_target(const struct vteprec_manager *, const char *target);

void vteprec_manager_update_inactivity_probe_addvalue(const struct vteprec_manager *,  int64_t );
void vteprec_manager_update_inactivity_probe_delvalue(const struct vteprec_manager *,  int64_t );
void vteprec_manager_add_clause_inactivity_probe(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *inactivity_probe, size_t n_inactivity_probe);
void vteprec_manager_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_manager_add_clause_is_connected(struct ovsdb_idl_condition *, enum ovsdb_function function, bool is_connected);
void vteprec_manager_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_manager_update_max_backoff_addvalue(const struct vteprec_manager *,  int64_t );
void vteprec_manager_update_max_backoff_delvalue(const struct vteprec_manager *,  int64_t );
void vteprec_manager_add_clause_max_backoff(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *max_backoff, size_t n_max_backoff);
void vteprec_manager_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_manager_update_other_config_setkey(const struct vteprec_manager *,  const char *, const char *);
void vteprec_manager_update_other_config_delkey(const struct vteprec_manager *,  const char *);
void vteprec_manager_add_clause_other_config(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_manager_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_manager_update_status_setkey(const struct vteprec_manager *,  const char *, const char *);
void vteprec_manager_update_status_delkey(const struct vteprec_manager *,  const char *);
void vteprec_manager_add_clause_status(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_manager_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_manager_add_clause_target(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *target);
void vteprec_manager_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_manager * vteprec_manager_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_manager_index_set_inactivity_probe(const struct vteprec_manager *,
const int64_t *inactivity_probe, size_t n_inactivity_probe);
void vteprec_manager_index_set_is_connected(const struct vteprec_manager *,
bool is_connected);
void vteprec_manager_index_set_max_backoff(const struct vteprec_manager *,
const int64_t *max_backoff, size_t n_max_backoff);
void vteprec_manager_index_set_other_config(const struct vteprec_manager *,
const struct smap *);
void vteprec_manager_index_set_status(const struct vteprec_manager *,
const struct smap *);
void vteprec_manager_index_set_target(const struct vteprec_manager *,
const char *target);

/* Mcast_Macs_Local table. */
struct vteprec_mcast_macs_local {
	struct ovsdb_idl_row header_;

	/* MAC column. */
	char *MAC;	/* Always nonnull. */

	/* ipaddr column. */
	char *ipaddr;	/* Always nonnull. */

	/* locator_set column. */
	struct vteprec_physical_locator_set *locator_set;

	/* logical_switch column. */
	struct vteprec_logical_switch *logical_switch;
};

enum vteprec_mcast_macs_local_column_id {
    VTEPREC_MCAST_MACS_LOCAL_COL_MAC,
    VTEPREC_MCAST_MACS_LOCAL_COL_IPADDR,
    VTEPREC_MCAST_MACS_LOCAL_COL_LOCATOR_SET,
    VTEPREC_MCAST_MACS_LOCAL_COL_LOGICAL_SWITCH,
    VTEPREC_MCAST_MACS_LOCAL_N_COLUMNS
};

#define vteprec_mcast_macs_local_col_ipaddr (vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_IPADDR])
#define vteprec_mcast_macs_local_col_MAC (vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_MAC])
#define vteprec_mcast_macs_local_col_locator_set (vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_LOCATOR_SET])
#define vteprec_mcast_macs_local_col_logical_switch (vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_LOGICAL_SWITCH])

extern struct ovsdb_idl_column vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_N_COLUMNS];

const struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_first(const struct ovsdb_idl *);
const struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_next(const struct vteprec_mcast_macs_local *);
#define VTEPREC_MCAST_MACS_LOCAL_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_mcast_macs_local_first(IDL); \
             (ROW); \
             (ROW) = vteprec_mcast_macs_local_next(ROW))
#define VTEPREC_MCAST_MACS_LOCAL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_mcast_macs_local_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_mcast_macs_local_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_mcast_macs_local_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_mcast_macs_local_row_get_seqno(const struct vteprec_mcast_macs_local *row, enum ovsdb_idl_change change);
const struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_track_get_first(const struct ovsdb_idl *);
const struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_track_get_next(const struct vteprec_mcast_macs_local *);
#define VTEPREC_MCAST_MACS_LOCAL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_mcast_macs_local_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_mcast_macs_local_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_mcast_macs_local_is_new(const struct vteprec_mcast_macs_local *row)
{
    return vteprec_mcast_macs_local_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_mcast_macs_local_is_deleted(const struct vteprec_mcast_macs_local *row)
{
    return vteprec_mcast_macs_local_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_mcast_macs_local_index_destroy_row(const struct vteprec_mcast_macs_local *);
int vteprec_mcast_macs_local_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_mcast_macs_local *, const struct vteprec_mcast_macs_local *);
const struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_mcast_macs_local *);
const struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_mcast_macs_local *);
const struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_MCAST_MACS_LOCAL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_mcast_macs_local_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_mcast_macs_local_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_mcast_macs_local_index_next(CURSOR))
#define VTEPREC_MCAST_MACS_LOCAL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_mcast_macs_local_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_mcast_macs_local_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_mcast_macs_local_index_next(CURSOR))
#define VTEPREC_MCAST_MACS_LOCAL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_mcast_macs_local_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_mcast_macs_local_index_next(CURSOR))

void vteprec_mcast_macs_local_init(struct vteprec_mcast_macs_local *);
void vteprec_mcast_macs_local_delete(const struct vteprec_mcast_macs_local *);
struct vteprec_mcast_macs_local *vteprec_mcast_macs_local_insert(struct ovsdb_idl_txn *);
bool vteprec_mcast_macs_local_is_updated(const struct vteprec_mcast_macs_local *, enum vteprec_mcast_macs_local_column_id);

void vteprec_mcast_macs_local_verify_MAC(const struct vteprec_mcast_macs_local *);
void vteprec_mcast_macs_local_verify_ipaddr(const struct vteprec_mcast_macs_local *);
void vteprec_mcast_macs_local_verify_locator_set(const struct vteprec_mcast_macs_local *);
void vteprec_mcast_macs_local_verify_logical_switch(const struct vteprec_mcast_macs_local *);

const struct ovsdb_datum *vteprec_mcast_macs_local_get_MAC(const struct vteprec_mcast_macs_local *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_mcast_macs_local_get_ipaddr(const struct vteprec_mcast_macs_local *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_mcast_macs_local_get_locator_set(const struct vteprec_mcast_macs_local *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_mcast_macs_local_get_logical_switch(const struct vteprec_mcast_macs_local *, enum ovsdb_atomic_type key_type);

void vteprec_mcast_macs_local_set_MAC(const struct vteprec_mcast_macs_local *, const char *MAC);
void vteprec_mcast_macs_local_set_ipaddr(const struct vteprec_mcast_macs_local *, const char *ipaddr);
void vteprec_mcast_macs_local_set_locator_set(const struct vteprec_mcast_macs_local *, const struct vteprec_physical_locator_set *locator_set);
void vteprec_mcast_macs_local_set_logical_switch(const struct vteprec_mcast_macs_local *, const struct vteprec_logical_switch *logical_switch);

void vteprec_mcast_macs_local_add_clause_MAC(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *MAC);
void vteprec_mcast_macs_local_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_mcast_macs_local_add_clause_ipaddr(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ipaddr);
void vteprec_mcast_macs_local_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_mcast_macs_local_add_clause_locator_set(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *locator_set);
void vteprec_mcast_macs_local_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_mcast_macs_local_add_clause_logical_switch(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *logical_switch);
void vteprec_mcast_macs_local_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_mcast_macs_local * vteprec_mcast_macs_local_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_mcast_macs_local_index_set_MAC(const struct vteprec_mcast_macs_local *,
const char *MAC);
void vteprec_mcast_macs_local_index_set_ipaddr(const struct vteprec_mcast_macs_local *,
const char *ipaddr);
void vteprec_mcast_macs_local_index_set_locator_set(const struct vteprec_mcast_macs_local *,
const struct vteprec_physical_locator_set *locator_set);
void vteprec_mcast_macs_local_index_set_logical_switch(const struct vteprec_mcast_macs_local *,
const struct vteprec_logical_switch *logical_switch);

/* Mcast_Macs_Remote table. */
struct vteprec_mcast_macs_remote {
	struct ovsdb_idl_row header_;

	/* MAC column. */
	char *MAC;	/* Always nonnull. */

	/* ipaddr column. */
	char *ipaddr;	/* Always nonnull. */

	/* locator_set column. */
	struct vteprec_physical_locator_set *locator_set;

	/* logical_switch column. */
	struct vteprec_logical_switch *logical_switch;
};

enum vteprec_mcast_macs_remote_column_id {
    VTEPREC_MCAST_MACS_REMOTE_COL_MAC,
    VTEPREC_MCAST_MACS_REMOTE_COL_IPADDR,
    VTEPREC_MCAST_MACS_REMOTE_COL_LOCATOR_SET,
    VTEPREC_MCAST_MACS_REMOTE_COL_LOGICAL_SWITCH,
    VTEPREC_MCAST_MACS_REMOTE_N_COLUMNS
};

#define vteprec_mcast_macs_remote_col_ipaddr (vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_IPADDR])
#define vteprec_mcast_macs_remote_col_MAC (vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_MAC])
#define vteprec_mcast_macs_remote_col_locator_set (vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_LOCATOR_SET])
#define vteprec_mcast_macs_remote_col_logical_switch (vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_LOGICAL_SWITCH])

extern struct ovsdb_idl_column vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_N_COLUMNS];

const struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_first(const struct ovsdb_idl *);
const struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_next(const struct vteprec_mcast_macs_remote *);
#define VTEPREC_MCAST_MACS_REMOTE_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_mcast_macs_remote_first(IDL); \
             (ROW); \
             (ROW) = vteprec_mcast_macs_remote_next(ROW))
#define VTEPREC_MCAST_MACS_REMOTE_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_mcast_macs_remote_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_mcast_macs_remote_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_mcast_macs_remote_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_mcast_macs_remote_row_get_seqno(const struct vteprec_mcast_macs_remote *row, enum ovsdb_idl_change change);
const struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_track_get_first(const struct ovsdb_idl *);
const struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_track_get_next(const struct vteprec_mcast_macs_remote *);
#define VTEPREC_MCAST_MACS_REMOTE_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_mcast_macs_remote_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_mcast_macs_remote_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_mcast_macs_remote_is_new(const struct vteprec_mcast_macs_remote *row)
{
    return vteprec_mcast_macs_remote_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_mcast_macs_remote_is_deleted(const struct vteprec_mcast_macs_remote *row)
{
    return vteprec_mcast_macs_remote_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_mcast_macs_remote_index_destroy_row(const struct vteprec_mcast_macs_remote *);
int vteprec_mcast_macs_remote_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_mcast_macs_remote *, const struct vteprec_mcast_macs_remote *);
const struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_mcast_macs_remote *);
const struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_mcast_macs_remote *);
const struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_MCAST_MACS_REMOTE_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_mcast_macs_remote_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_mcast_macs_remote_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_mcast_macs_remote_index_next(CURSOR))
#define VTEPREC_MCAST_MACS_REMOTE_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_mcast_macs_remote_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_mcast_macs_remote_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_mcast_macs_remote_index_next(CURSOR))
#define VTEPREC_MCAST_MACS_REMOTE_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_mcast_macs_remote_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_mcast_macs_remote_index_next(CURSOR))

void vteprec_mcast_macs_remote_init(struct vteprec_mcast_macs_remote *);
void vteprec_mcast_macs_remote_delete(const struct vteprec_mcast_macs_remote *);
struct vteprec_mcast_macs_remote *vteprec_mcast_macs_remote_insert(struct ovsdb_idl_txn *);
bool vteprec_mcast_macs_remote_is_updated(const struct vteprec_mcast_macs_remote *, enum vteprec_mcast_macs_remote_column_id);

void vteprec_mcast_macs_remote_verify_MAC(const struct vteprec_mcast_macs_remote *);
void vteprec_mcast_macs_remote_verify_ipaddr(const struct vteprec_mcast_macs_remote *);
void vteprec_mcast_macs_remote_verify_locator_set(const struct vteprec_mcast_macs_remote *);
void vteprec_mcast_macs_remote_verify_logical_switch(const struct vteprec_mcast_macs_remote *);

const struct ovsdb_datum *vteprec_mcast_macs_remote_get_MAC(const struct vteprec_mcast_macs_remote *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_mcast_macs_remote_get_ipaddr(const struct vteprec_mcast_macs_remote *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_mcast_macs_remote_get_locator_set(const struct vteprec_mcast_macs_remote *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_mcast_macs_remote_get_logical_switch(const struct vteprec_mcast_macs_remote *, enum ovsdb_atomic_type key_type);

void vteprec_mcast_macs_remote_set_MAC(const struct vteprec_mcast_macs_remote *, const char *MAC);
void vteprec_mcast_macs_remote_set_ipaddr(const struct vteprec_mcast_macs_remote *, const char *ipaddr);
void vteprec_mcast_macs_remote_set_locator_set(const struct vteprec_mcast_macs_remote *, const struct vteprec_physical_locator_set *locator_set);
void vteprec_mcast_macs_remote_set_logical_switch(const struct vteprec_mcast_macs_remote *, const struct vteprec_logical_switch *logical_switch);

void vteprec_mcast_macs_remote_add_clause_MAC(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *MAC);
void vteprec_mcast_macs_remote_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_mcast_macs_remote_add_clause_ipaddr(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ipaddr);
void vteprec_mcast_macs_remote_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_mcast_macs_remote_add_clause_locator_set(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *locator_set);
void vteprec_mcast_macs_remote_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_mcast_macs_remote_add_clause_logical_switch(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *logical_switch);
void vteprec_mcast_macs_remote_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_mcast_macs_remote * vteprec_mcast_macs_remote_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_mcast_macs_remote_index_set_MAC(const struct vteprec_mcast_macs_remote *,
const char *MAC);
void vteprec_mcast_macs_remote_index_set_ipaddr(const struct vteprec_mcast_macs_remote *,
const char *ipaddr);
void vteprec_mcast_macs_remote_index_set_locator_set(const struct vteprec_mcast_macs_remote *,
const struct vteprec_physical_locator_set *locator_set);
void vteprec_mcast_macs_remote_index_set_logical_switch(const struct vteprec_mcast_macs_remote *,
const struct vteprec_logical_switch *logical_switch);

/* Physical_Locator table. */
struct vteprec_physical_locator {
	struct ovsdb_idl_row header_;

	/* dst_ip column. */
	char *dst_ip;	/* Always nonnull. */

	/* encapsulation_type column. */
	char *encapsulation_type;	/* Always nonnull. */

	/* tunnel_key column. */
	int64_t *tunnel_key;
	size_t n_tunnel_key;
};

enum vteprec_physical_locator_column_id {
    VTEPREC_PHYSICAL_LOCATOR_COL_DST_IP,
    VTEPREC_PHYSICAL_LOCATOR_COL_ENCAPSULATION_TYPE,
    VTEPREC_PHYSICAL_LOCATOR_COL_TUNNEL_KEY,
    VTEPREC_PHYSICAL_LOCATOR_N_COLUMNS
};

#define vteprec_physical_locator_col_tunnel_key (vteprec_physical_locator_columns[VTEPREC_PHYSICAL_LOCATOR_COL_TUNNEL_KEY])
#define vteprec_physical_locator_col_dst_ip (vteprec_physical_locator_columns[VTEPREC_PHYSICAL_LOCATOR_COL_DST_IP])
#define vteprec_physical_locator_col_encapsulation_type (vteprec_physical_locator_columns[VTEPREC_PHYSICAL_LOCATOR_COL_ENCAPSULATION_TYPE])

extern struct ovsdb_idl_column vteprec_physical_locator_columns[VTEPREC_PHYSICAL_LOCATOR_N_COLUMNS];

const struct vteprec_physical_locator *vteprec_physical_locator_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_physical_locator *vteprec_physical_locator_first(const struct ovsdb_idl *);
const struct vteprec_physical_locator *vteprec_physical_locator_next(const struct vteprec_physical_locator *);
#define VTEPREC_PHYSICAL_LOCATOR_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_physical_locator_first(IDL); \
             (ROW); \
             (ROW) = vteprec_physical_locator_next(ROW))
#define VTEPREC_PHYSICAL_LOCATOR_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_physical_locator_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_physical_locator_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_physical_locator_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_physical_locator_row_get_seqno(const struct vteprec_physical_locator *row, enum ovsdb_idl_change change);
const struct vteprec_physical_locator *vteprec_physical_locator_track_get_first(const struct ovsdb_idl *);
const struct vteprec_physical_locator *vteprec_physical_locator_track_get_next(const struct vteprec_physical_locator *);
#define VTEPREC_PHYSICAL_LOCATOR_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_physical_locator_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_physical_locator_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_physical_locator_is_new(const struct vteprec_physical_locator *row)
{
    return vteprec_physical_locator_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_physical_locator_is_deleted(const struct vteprec_physical_locator *row)
{
    return vteprec_physical_locator_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_physical_locator_index_destroy_row(const struct vteprec_physical_locator *);
int vteprec_physical_locator_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_locator *, const struct vteprec_physical_locator *);
const struct vteprec_physical_locator *vteprec_physical_locator_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_physical_locator *vteprec_physical_locator_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_physical_locator *vteprec_physical_locator_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_locator *);
const struct vteprec_physical_locator *vteprec_physical_locator_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_locator *);
const struct vteprec_physical_locator *vteprec_physical_locator_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_PHYSICAL_LOCATOR_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_physical_locator_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_physical_locator_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_physical_locator_index_next(CURSOR))
#define VTEPREC_PHYSICAL_LOCATOR_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_physical_locator_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_physical_locator_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_physical_locator_index_next(CURSOR))
#define VTEPREC_PHYSICAL_LOCATOR_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_physical_locator_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_physical_locator_index_next(CURSOR))

void vteprec_physical_locator_init(struct vteprec_physical_locator *);
void vteprec_physical_locator_delete(const struct vteprec_physical_locator *);
struct vteprec_physical_locator *vteprec_physical_locator_insert(struct ovsdb_idl_txn *);
bool vteprec_physical_locator_is_updated(const struct vteprec_physical_locator *, enum vteprec_physical_locator_column_id);

void vteprec_physical_locator_verify_dst_ip(const struct vteprec_physical_locator *);
void vteprec_physical_locator_verify_encapsulation_type(const struct vteprec_physical_locator *);
void vteprec_physical_locator_verify_tunnel_key(const struct vteprec_physical_locator *);

const struct ovsdb_datum *vteprec_physical_locator_get_dst_ip(const struct vteprec_physical_locator *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_locator_get_encapsulation_type(const struct vteprec_physical_locator *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_locator_get_tunnel_key(const struct vteprec_physical_locator *, enum ovsdb_atomic_type key_type);

void vteprec_physical_locator_set_dst_ip(const struct vteprec_physical_locator *, const char *dst_ip);
void vteprec_physical_locator_set_encapsulation_type(const struct vteprec_physical_locator *, const char *encapsulation_type);
void vteprec_physical_locator_set_tunnel_key(const struct vteprec_physical_locator *, const int64_t *tunnel_key, size_t n_tunnel_key);

void vteprec_physical_locator_add_clause_dst_ip(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *dst_ip);
void vteprec_physical_locator_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_locator_add_clause_encapsulation_type(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *encapsulation_type);
void vteprec_physical_locator_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_locator_update_tunnel_key_addvalue(const struct vteprec_physical_locator *,  int64_t );
void vteprec_physical_locator_update_tunnel_key_delvalue(const struct vteprec_physical_locator *,  int64_t );
void vteprec_physical_locator_add_clause_tunnel_key(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *tunnel_key, size_t n_tunnel_key);
void vteprec_physical_locator_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_physical_locator * vteprec_physical_locator_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_physical_locator_index_set_dst_ip(const struct vteprec_physical_locator *,
const char *dst_ip);
void vteprec_physical_locator_index_set_encapsulation_type(const struct vteprec_physical_locator *,
const char *encapsulation_type);
void vteprec_physical_locator_index_set_tunnel_key(const struct vteprec_physical_locator *,
const int64_t *tunnel_key, size_t n_tunnel_key);

/* Physical_Locator_Set table. */
struct vteprec_physical_locator_set {
	struct ovsdb_idl_row header_;

	/* locators column. */
	struct vteprec_physical_locator **locators;
	size_t n_locators;
};

enum vteprec_physical_locator_set_column_id {
    VTEPREC_PHYSICAL_LOCATOR_SET_COL_LOCATORS,
    VTEPREC_PHYSICAL_LOCATOR_SET_N_COLUMNS
};

#define vteprec_physical_locator_set_col_locators (vteprec_physical_locator_set_columns[VTEPREC_PHYSICAL_LOCATOR_SET_COL_LOCATORS])

extern struct ovsdb_idl_column vteprec_physical_locator_set_columns[VTEPREC_PHYSICAL_LOCATOR_SET_N_COLUMNS];

const struct vteprec_physical_locator_set *vteprec_physical_locator_set_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_physical_locator_set *vteprec_physical_locator_set_first(const struct ovsdb_idl *);
const struct vteprec_physical_locator_set *vteprec_physical_locator_set_next(const struct vteprec_physical_locator_set *);
#define VTEPREC_PHYSICAL_LOCATOR_SET_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_physical_locator_set_first(IDL); \
             (ROW); \
             (ROW) = vteprec_physical_locator_set_next(ROW))
#define VTEPREC_PHYSICAL_LOCATOR_SET_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_physical_locator_set_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_physical_locator_set_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_physical_locator_set_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_physical_locator_set_row_get_seqno(const struct vteprec_physical_locator_set *row, enum ovsdb_idl_change change);
const struct vteprec_physical_locator_set *vteprec_physical_locator_set_track_get_first(const struct ovsdb_idl *);
const struct vteprec_physical_locator_set *vteprec_physical_locator_set_track_get_next(const struct vteprec_physical_locator_set *);
#define VTEPREC_PHYSICAL_LOCATOR_SET_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_physical_locator_set_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_physical_locator_set_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_physical_locator_set_is_new(const struct vteprec_physical_locator_set *row)
{
    return vteprec_physical_locator_set_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_physical_locator_set_is_deleted(const struct vteprec_physical_locator_set *row)
{
    return vteprec_physical_locator_set_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_physical_locator_set_index_destroy_row(const struct vteprec_physical_locator_set *);
int vteprec_physical_locator_set_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_locator_set *, const struct vteprec_physical_locator_set *);
const struct vteprec_physical_locator_set *vteprec_physical_locator_set_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_physical_locator_set *vteprec_physical_locator_set_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_physical_locator_set *vteprec_physical_locator_set_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_locator_set *);
const struct vteprec_physical_locator_set *vteprec_physical_locator_set_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_locator_set *);
const struct vteprec_physical_locator_set *vteprec_physical_locator_set_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_PHYSICAL_LOCATOR_SET_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_physical_locator_set_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_physical_locator_set_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_physical_locator_set_index_next(CURSOR))
#define VTEPREC_PHYSICAL_LOCATOR_SET_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_physical_locator_set_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_physical_locator_set_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_physical_locator_set_index_next(CURSOR))
#define VTEPREC_PHYSICAL_LOCATOR_SET_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_physical_locator_set_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_physical_locator_set_index_next(CURSOR))

void vteprec_physical_locator_set_init(struct vteprec_physical_locator_set *);
void vteprec_physical_locator_set_delete(const struct vteprec_physical_locator_set *);
struct vteprec_physical_locator_set *vteprec_physical_locator_set_insert(struct ovsdb_idl_txn *);
bool vteprec_physical_locator_set_is_updated(const struct vteprec_physical_locator_set *, enum vteprec_physical_locator_set_column_id);

void vteprec_physical_locator_set_verify_locators(const struct vteprec_physical_locator_set *);

const struct ovsdb_datum *vteprec_physical_locator_set_get_locators(const struct vteprec_physical_locator_set *, enum ovsdb_atomic_type key_type);

void vteprec_physical_locator_set_set_locators(const struct vteprec_physical_locator_set *, struct vteprec_physical_locator **locators, size_t n_locators);

void vteprec_physical_locator_set_update_locators_addvalue(const struct vteprec_physical_locator_set *,  const struct vteprec_physical_locator *);
void vteprec_physical_locator_set_update_locators_delvalue(const struct vteprec_physical_locator_set *,  const struct vteprec_physical_locator *);
void vteprec_physical_locator_set_add_clause_locators(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **locators, size_t n_locators);
void vteprec_physical_locator_set_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_physical_locator_set * vteprec_physical_locator_set_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_physical_locator_set_index_set_locators(const struct vteprec_physical_locator_set *,
struct vteprec_physical_locator **locators, size_t n_locators);

/* Physical_Port table. */
struct vteprec_physical_port {
	struct ovsdb_idl_row header_;

	/* acl_bindings column. */
	int64_t *key_acl_bindings;
	struct vteprec_acl **value_acl_bindings;
	size_t n_acl_bindings;

	/* description column. */
	char *description;	/* Always nonnull. */

	/* name column. */
	char *name;	/* Always nonnull. */

	/* other_config column. */
	struct smap other_config;

	/* port_fault_status column. */
	char **port_fault_status;
	size_t n_port_fault_status;

	/* vlan_bindings column. */
	int64_t *key_vlan_bindings;
	struct vteprec_logical_switch **value_vlan_bindings;
	size_t n_vlan_bindings;

	/* vlan_stats column. */
	int64_t *key_vlan_stats;
	struct vteprec_logical_binding_stats **value_vlan_stats;
	size_t n_vlan_stats;
};

enum vteprec_physical_port_column_id {
    VTEPREC_PHYSICAL_PORT_COL_ACL_BINDINGS,
    VTEPREC_PHYSICAL_PORT_COL_DESCRIPTION,
    VTEPREC_PHYSICAL_PORT_COL_NAME,
    VTEPREC_PHYSICAL_PORT_COL_OTHER_CONFIG,
    VTEPREC_PHYSICAL_PORT_COL_PORT_FAULT_STATUS,
    VTEPREC_PHYSICAL_PORT_COL_VLAN_BINDINGS,
    VTEPREC_PHYSICAL_PORT_COL_VLAN_STATS,
    VTEPREC_PHYSICAL_PORT_N_COLUMNS
};

#define vteprec_physical_port_col_port_fault_status (vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_PORT_FAULT_STATUS])
#define vteprec_physical_port_col_description (vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_DESCRIPTION])
#define vteprec_physical_port_col_other_config (vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_OTHER_CONFIG])
#define vteprec_physical_port_col_name (vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_NAME])
#define vteprec_physical_port_col_vlan_bindings (vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_VLAN_BINDINGS])
#define vteprec_physical_port_col_acl_bindings (vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_ACL_BINDINGS])
#define vteprec_physical_port_col_vlan_stats (vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_VLAN_STATS])

extern struct ovsdb_idl_column vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_N_COLUMNS];

const struct vteprec_physical_port *vteprec_physical_port_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_physical_port *vteprec_physical_port_first(const struct ovsdb_idl *);
const struct vteprec_physical_port *vteprec_physical_port_next(const struct vteprec_physical_port *);
#define VTEPREC_PHYSICAL_PORT_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_physical_port_first(IDL); \
             (ROW); \
             (ROW) = vteprec_physical_port_next(ROW))
#define VTEPREC_PHYSICAL_PORT_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_physical_port_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_physical_port_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_physical_port_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_physical_port_row_get_seqno(const struct vteprec_physical_port *row, enum ovsdb_idl_change change);
const struct vteprec_physical_port *vteprec_physical_port_track_get_first(const struct ovsdb_idl *);
const struct vteprec_physical_port *vteprec_physical_port_track_get_next(const struct vteprec_physical_port *);
#define VTEPREC_PHYSICAL_PORT_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_physical_port_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_physical_port_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_physical_port_is_new(const struct vteprec_physical_port *row)
{
    return vteprec_physical_port_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_physical_port_is_deleted(const struct vteprec_physical_port *row)
{
    return vteprec_physical_port_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_physical_port_index_destroy_row(const struct vteprec_physical_port *);
int vteprec_physical_port_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_port *, const struct vteprec_physical_port *);
const struct vteprec_physical_port *vteprec_physical_port_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_physical_port *vteprec_physical_port_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_physical_port *vteprec_physical_port_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_port *);
const struct vteprec_physical_port *vteprec_physical_port_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_port *);
const struct vteprec_physical_port *vteprec_physical_port_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_PHYSICAL_PORT_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_physical_port_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_physical_port_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_physical_port_index_next(CURSOR))
#define VTEPREC_PHYSICAL_PORT_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_physical_port_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_physical_port_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_physical_port_index_next(CURSOR))
#define VTEPREC_PHYSICAL_PORT_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_physical_port_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_physical_port_index_next(CURSOR))

void vteprec_physical_port_init(struct vteprec_physical_port *);
void vteprec_physical_port_delete(const struct vteprec_physical_port *);
struct vteprec_physical_port *vteprec_physical_port_insert(struct ovsdb_idl_txn *);
bool vteprec_physical_port_is_updated(const struct vteprec_physical_port *, enum vteprec_physical_port_column_id);

void vteprec_physical_port_verify_acl_bindings(const struct vteprec_physical_port *);
void vteprec_physical_port_verify_description(const struct vteprec_physical_port *);
void vteprec_physical_port_verify_name(const struct vteprec_physical_port *);
void vteprec_physical_port_verify_other_config(const struct vteprec_physical_port *);
void vteprec_physical_port_verify_port_fault_status(const struct vteprec_physical_port *);
void vteprec_physical_port_verify_vlan_bindings(const struct vteprec_physical_port *);
void vteprec_physical_port_verify_vlan_stats(const struct vteprec_physical_port *);

const struct ovsdb_datum *vteprec_physical_port_get_acl_bindings(const struct vteprec_physical_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_physical_port_get_description(const struct vteprec_physical_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_port_get_name(const struct vteprec_physical_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_port_get_other_config(const struct vteprec_physical_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_physical_port_get_port_fault_status(const struct vteprec_physical_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_port_get_vlan_bindings(const struct vteprec_physical_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_physical_port_get_vlan_stats(const struct vteprec_physical_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);

void vteprec_physical_port_set_acl_bindings(const struct vteprec_physical_port *, const int64_t *key_acl_bindings, struct vteprec_acl **value_acl_bindings, size_t n_acl_bindings);
void vteprec_physical_port_set_description(const struct vteprec_physical_port *, const char *description);
void vteprec_physical_port_set_name(const struct vteprec_physical_port *, const char *name);
void vteprec_physical_port_set_other_config(const struct vteprec_physical_port *, const struct smap *);
void vteprec_physical_port_set_port_fault_status(const struct vteprec_physical_port *, const char **port_fault_status, size_t n_port_fault_status);
void vteprec_physical_port_set_vlan_bindings(const struct vteprec_physical_port *, const int64_t *key_vlan_bindings, struct vteprec_logical_switch **value_vlan_bindings, size_t n_vlan_bindings);
void vteprec_physical_port_set_vlan_stats(const struct vteprec_physical_port *, const int64_t *key_vlan_stats, struct vteprec_logical_binding_stats **value_vlan_stats, size_t n_vlan_stats);

void vteprec_physical_port_update_acl_bindings_setkey(const struct vteprec_physical_port *,  int64_t , const struct vteprec_acl *);
void vteprec_physical_port_update_acl_bindings_delkey(const struct vteprec_physical_port *,  int64_t );
void vteprec_physical_port_add_clause_acl_bindings(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *key_acl_bindings, struct uuid **value_acl_bindings, size_t n_acl_bindings);
void vteprec_physical_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_port_add_clause_description(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *description);
void vteprec_physical_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_port_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void vteprec_physical_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_port_update_other_config_setkey(const struct vteprec_physical_port *,  const char *, const char *);
void vteprec_physical_port_update_other_config_delkey(const struct vteprec_physical_port *,  const char *);
void vteprec_physical_port_add_clause_other_config(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_physical_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_port_update_port_fault_status_addvalue(const struct vteprec_physical_port *,  const char *);
void vteprec_physical_port_update_port_fault_status_delvalue(const struct vteprec_physical_port *,  const char *);
void vteprec_physical_port_add_clause_port_fault_status(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **port_fault_status, size_t n_port_fault_status);
void vteprec_physical_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_port_update_vlan_bindings_setkey(const struct vteprec_physical_port *,  int64_t , const struct vteprec_logical_switch *);
void vteprec_physical_port_update_vlan_bindings_delkey(const struct vteprec_physical_port *,  int64_t );
void vteprec_physical_port_add_clause_vlan_bindings(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *key_vlan_bindings, struct uuid **value_vlan_bindings, size_t n_vlan_bindings);
void vteprec_physical_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_port_update_vlan_stats_setkey(const struct vteprec_physical_port *,  int64_t , const struct vteprec_logical_binding_stats *);
void vteprec_physical_port_update_vlan_stats_delkey(const struct vteprec_physical_port *,  int64_t );
void vteprec_physical_port_add_clause_vlan_stats(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *key_vlan_stats, struct uuid **value_vlan_stats, size_t n_vlan_stats);
void vteprec_physical_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_physical_port * vteprec_physical_port_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_physical_port_index_set_acl_bindings(const struct vteprec_physical_port *,
const int64_t *key_acl_bindings, struct vteprec_acl **value_acl_bindings, size_t n_acl_bindings);
void vteprec_physical_port_index_set_description(const struct vteprec_physical_port *,
const char *description);
void vteprec_physical_port_index_set_name(const struct vteprec_physical_port *,
const char *name);
void vteprec_physical_port_index_set_other_config(const struct vteprec_physical_port *,
const struct smap *);
void vteprec_physical_port_index_set_port_fault_status(const struct vteprec_physical_port *,
const char **port_fault_status, size_t n_port_fault_status);
void vteprec_physical_port_index_set_vlan_bindings(const struct vteprec_physical_port *,
const int64_t *key_vlan_bindings, struct vteprec_logical_switch **value_vlan_bindings, size_t n_vlan_bindings);
void vteprec_physical_port_index_set_vlan_stats(const struct vteprec_physical_port *,
const int64_t *key_vlan_stats, struct vteprec_logical_binding_stats **value_vlan_stats, size_t n_vlan_stats);

/* Physical_Switch table. */
struct vteprec_physical_switch {
	struct ovsdb_idl_row header_;

	/* description column. */
	char *description;	/* Always nonnull. */

	/* management_ips column. */
	char **management_ips;
	size_t n_management_ips;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* other_config column. */
	struct smap other_config;

	/* ports column. */
	struct vteprec_physical_port **ports;
	size_t n_ports;

	/* switch_fault_status column. */
	char **switch_fault_status;
	size_t n_switch_fault_status;

	/* tunnel_ips column. */
	char **tunnel_ips;
	size_t n_tunnel_ips;

	/* tunnels column. */
	struct vteprec_tunnel **tunnels;
	size_t n_tunnels;
};

enum vteprec_physical_switch_column_id {
    VTEPREC_PHYSICAL_SWITCH_COL_DESCRIPTION,
    VTEPREC_PHYSICAL_SWITCH_COL_MANAGEMENT_IPS,
    VTEPREC_PHYSICAL_SWITCH_COL_NAME,
    VTEPREC_PHYSICAL_SWITCH_COL_OTHER_CONFIG,
    VTEPREC_PHYSICAL_SWITCH_COL_PORTS,
    VTEPREC_PHYSICAL_SWITCH_COL_SWITCH_FAULT_STATUS,
    VTEPREC_PHYSICAL_SWITCH_COL_TUNNEL_IPS,
    VTEPREC_PHYSICAL_SWITCH_COL_TUNNELS,
    VTEPREC_PHYSICAL_SWITCH_N_COLUMNS
};

#define vteprec_physical_switch_col_management_ips (vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_MANAGEMENT_IPS])
#define vteprec_physical_switch_col_description (vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_DESCRIPTION])
#define vteprec_physical_switch_col_other_config (vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_OTHER_CONFIG])
#define vteprec_physical_switch_col_tunnel_ips (vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_TUNNEL_IPS])
#define vteprec_physical_switch_col_switch_fault_status (vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_SWITCH_FAULT_STATUS])
#define vteprec_physical_switch_col_ports (vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_PORTS])
#define vteprec_physical_switch_col_tunnels (vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_TUNNELS])
#define vteprec_physical_switch_col_name (vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_NAME])

extern struct ovsdb_idl_column vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_N_COLUMNS];

const struct vteprec_physical_switch *vteprec_physical_switch_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_physical_switch *vteprec_physical_switch_first(const struct ovsdb_idl *);
const struct vteprec_physical_switch *vteprec_physical_switch_next(const struct vteprec_physical_switch *);
#define VTEPREC_PHYSICAL_SWITCH_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_physical_switch_first(IDL); \
             (ROW); \
             (ROW) = vteprec_physical_switch_next(ROW))
#define VTEPREC_PHYSICAL_SWITCH_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_physical_switch_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_physical_switch_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_physical_switch_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_physical_switch_row_get_seqno(const struct vteprec_physical_switch *row, enum ovsdb_idl_change change);
const struct vteprec_physical_switch *vteprec_physical_switch_track_get_first(const struct ovsdb_idl *);
const struct vteprec_physical_switch *vteprec_physical_switch_track_get_next(const struct vteprec_physical_switch *);
#define VTEPREC_PHYSICAL_SWITCH_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_physical_switch_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_physical_switch_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_physical_switch_is_new(const struct vteprec_physical_switch *row)
{
    return vteprec_physical_switch_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_physical_switch_is_deleted(const struct vteprec_physical_switch *row)
{
    return vteprec_physical_switch_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_physical_switch_index_destroy_row(const struct vteprec_physical_switch *);
int vteprec_physical_switch_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_switch *, const struct vteprec_physical_switch *);
const struct vteprec_physical_switch *vteprec_physical_switch_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_physical_switch *vteprec_physical_switch_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_physical_switch *vteprec_physical_switch_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_switch *);
const struct vteprec_physical_switch *vteprec_physical_switch_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_physical_switch *);
const struct vteprec_physical_switch *vteprec_physical_switch_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_PHYSICAL_SWITCH_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_physical_switch_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_physical_switch_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_physical_switch_index_next(CURSOR))
#define VTEPREC_PHYSICAL_SWITCH_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_physical_switch_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_physical_switch_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_physical_switch_index_next(CURSOR))
#define VTEPREC_PHYSICAL_SWITCH_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_physical_switch_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_physical_switch_index_next(CURSOR))

void vteprec_physical_switch_init(struct vteprec_physical_switch *);
void vteprec_physical_switch_delete(const struct vteprec_physical_switch *);
struct vteprec_physical_switch *vteprec_physical_switch_insert(struct ovsdb_idl_txn *);
bool vteprec_physical_switch_is_updated(const struct vteprec_physical_switch *, enum vteprec_physical_switch_column_id);

void vteprec_physical_switch_verify_description(const struct vteprec_physical_switch *);
void vteprec_physical_switch_verify_management_ips(const struct vteprec_physical_switch *);
void vteprec_physical_switch_verify_name(const struct vteprec_physical_switch *);
void vteprec_physical_switch_verify_other_config(const struct vteprec_physical_switch *);
void vteprec_physical_switch_verify_ports(const struct vteprec_physical_switch *);
void vteprec_physical_switch_verify_switch_fault_status(const struct vteprec_physical_switch *);
void vteprec_physical_switch_verify_tunnel_ips(const struct vteprec_physical_switch *);
void vteprec_physical_switch_verify_tunnels(const struct vteprec_physical_switch *);

const struct ovsdb_datum *vteprec_physical_switch_get_description(const struct vteprec_physical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_switch_get_management_ips(const struct vteprec_physical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_switch_get_name(const struct vteprec_physical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_switch_get_other_config(const struct vteprec_physical_switch *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_physical_switch_get_ports(const struct vteprec_physical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_switch_get_switch_fault_status(const struct vteprec_physical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_switch_get_tunnel_ips(const struct vteprec_physical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_physical_switch_get_tunnels(const struct vteprec_physical_switch *, enum ovsdb_atomic_type key_type);

void vteprec_physical_switch_set_description(const struct vteprec_physical_switch *, const char *description);
void vteprec_physical_switch_set_management_ips(const struct vteprec_physical_switch *, const char **management_ips, size_t n_management_ips);
void vteprec_physical_switch_set_name(const struct vteprec_physical_switch *, const char *name);
void vteprec_physical_switch_set_other_config(const struct vteprec_physical_switch *, const struct smap *);
void vteprec_physical_switch_set_ports(const struct vteprec_physical_switch *, struct vteprec_physical_port **ports, size_t n_ports);
void vteprec_physical_switch_set_switch_fault_status(const struct vteprec_physical_switch *, const char **switch_fault_status, size_t n_switch_fault_status);
void vteprec_physical_switch_set_tunnel_ips(const struct vteprec_physical_switch *, const char **tunnel_ips, size_t n_tunnel_ips);
void vteprec_physical_switch_set_tunnels(const struct vteprec_physical_switch *, struct vteprec_tunnel **tunnels, size_t n_tunnels);

void vteprec_physical_switch_add_clause_description(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *description);
void vteprec_physical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_switch_update_management_ips_addvalue(const struct vteprec_physical_switch *,  const char *);
void vteprec_physical_switch_update_management_ips_delvalue(const struct vteprec_physical_switch *,  const char *);
void vteprec_physical_switch_add_clause_management_ips(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **management_ips, size_t n_management_ips);
void vteprec_physical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_switch_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void vteprec_physical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_switch_update_other_config_setkey(const struct vteprec_physical_switch *,  const char *, const char *);
void vteprec_physical_switch_update_other_config_delkey(const struct vteprec_physical_switch *,  const char *);
void vteprec_physical_switch_add_clause_other_config(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_physical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_switch_update_ports_addvalue(const struct vteprec_physical_switch *,  const struct vteprec_physical_port *);
void vteprec_physical_switch_update_ports_delvalue(const struct vteprec_physical_switch *,  const struct vteprec_physical_port *);
void vteprec_physical_switch_add_clause_ports(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **ports, size_t n_ports);
void vteprec_physical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_switch_update_switch_fault_status_addvalue(const struct vteprec_physical_switch *,  const char *);
void vteprec_physical_switch_update_switch_fault_status_delvalue(const struct vteprec_physical_switch *,  const char *);
void vteprec_physical_switch_add_clause_switch_fault_status(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **switch_fault_status, size_t n_switch_fault_status);
void vteprec_physical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_switch_update_tunnel_ips_addvalue(const struct vteprec_physical_switch *,  const char *);
void vteprec_physical_switch_update_tunnel_ips_delvalue(const struct vteprec_physical_switch *,  const char *);
void vteprec_physical_switch_add_clause_tunnel_ips(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **tunnel_ips, size_t n_tunnel_ips);
void vteprec_physical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_physical_switch_update_tunnels_addvalue(const struct vteprec_physical_switch *,  const struct vteprec_tunnel *);
void vteprec_physical_switch_update_tunnels_delvalue(const struct vteprec_physical_switch *,  const struct vteprec_tunnel *);
void vteprec_physical_switch_add_clause_tunnels(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **tunnels, size_t n_tunnels);
void vteprec_physical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_physical_switch * vteprec_physical_switch_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_physical_switch_index_set_description(const struct vteprec_physical_switch *,
const char *description);
void vteprec_physical_switch_index_set_management_ips(const struct vteprec_physical_switch *,
const char **management_ips, size_t n_management_ips);
void vteprec_physical_switch_index_set_name(const struct vteprec_physical_switch *,
const char *name);
void vteprec_physical_switch_index_set_other_config(const struct vteprec_physical_switch *,
const struct smap *);
void vteprec_physical_switch_index_set_ports(const struct vteprec_physical_switch *,
struct vteprec_physical_port **ports, size_t n_ports);
void vteprec_physical_switch_index_set_switch_fault_status(const struct vteprec_physical_switch *,
const char **switch_fault_status, size_t n_switch_fault_status);
void vteprec_physical_switch_index_set_tunnel_ips(const struct vteprec_physical_switch *,
const char **tunnel_ips, size_t n_tunnel_ips);
void vteprec_physical_switch_index_set_tunnels(const struct vteprec_physical_switch *,
struct vteprec_tunnel **tunnels, size_t n_tunnels);

/* Tunnel table. */
struct vteprec_tunnel {
	struct ovsdb_idl_row header_;

	/* bfd_config_local column. */
	struct smap bfd_config_local;

	/* bfd_config_remote column. */
	struct smap bfd_config_remote;

	/* bfd_params column. */
	struct smap bfd_params;

	/* bfd_status column. */
	struct smap bfd_status;

	/* local column. */
	struct vteprec_physical_locator *local;

	/* remote column. */
	struct vteprec_physical_locator *remote;
};

enum vteprec_tunnel_column_id {
    VTEPREC_TUNNEL_COL_BFD_CONFIG_LOCAL,
    VTEPREC_TUNNEL_COL_BFD_CONFIG_REMOTE,
    VTEPREC_TUNNEL_COL_BFD_PARAMS,
    VTEPREC_TUNNEL_COL_BFD_STATUS,
    VTEPREC_TUNNEL_COL_LOCAL,
    VTEPREC_TUNNEL_COL_REMOTE,
    VTEPREC_TUNNEL_N_COLUMNS
};

#define vteprec_tunnel_col_remote (vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_REMOTE])
#define vteprec_tunnel_col_bfd_config_local (vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_CONFIG_LOCAL])
#define vteprec_tunnel_col_bfd_params (vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_PARAMS])
#define vteprec_tunnel_col_bfd_status (vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_STATUS])
#define vteprec_tunnel_col_local (vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_LOCAL])
#define vteprec_tunnel_col_bfd_config_remote (vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_CONFIG_REMOTE])

extern struct ovsdb_idl_column vteprec_tunnel_columns[VTEPREC_TUNNEL_N_COLUMNS];

const struct vteprec_tunnel *vteprec_tunnel_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_tunnel *vteprec_tunnel_first(const struct ovsdb_idl *);
const struct vteprec_tunnel *vteprec_tunnel_next(const struct vteprec_tunnel *);
#define VTEPREC_TUNNEL_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_tunnel_first(IDL); \
             (ROW); \
             (ROW) = vteprec_tunnel_next(ROW))
#define VTEPREC_TUNNEL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_tunnel_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_tunnel_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_tunnel_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_tunnel_row_get_seqno(const struct vteprec_tunnel *row, enum ovsdb_idl_change change);
const struct vteprec_tunnel *vteprec_tunnel_track_get_first(const struct ovsdb_idl *);
const struct vteprec_tunnel *vteprec_tunnel_track_get_next(const struct vteprec_tunnel *);
#define VTEPREC_TUNNEL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_tunnel_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_tunnel_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_tunnel_is_new(const struct vteprec_tunnel *row)
{
    return vteprec_tunnel_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_tunnel_is_deleted(const struct vteprec_tunnel *row)
{
    return vteprec_tunnel_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_tunnel_index_destroy_row(const struct vteprec_tunnel *);
int vteprec_tunnel_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_tunnel *, const struct vteprec_tunnel *);
const struct vteprec_tunnel *vteprec_tunnel_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_tunnel *vteprec_tunnel_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_tunnel *vteprec_tunnel_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_tunnel *);
const struct vteprec_tunnel *vteprec_tunnel_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_tunnel *);
const struct vteprec_tunnel *vteprec_tunnel_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_TUNNEL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_tunnel_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_tunnel_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_tunnel_index_next(CURSOR))
#define VTEPREC_TUNNEL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_tunnel_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_tunnel_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_tunnel_index_next(CURSOR))
#define VTEPREC_TUNNEL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_tunnel_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_tunnel_index_next(CURSOR))

void vteprec_tunnel_init(struct vteprec_tunnel *);
void vteprec_tunnel_delete(const struct vteprec_tunnel *);
struct vteprec_tunnel *vteprec_tunnel_insert(struct ovsdb_idl_txn *);
bool vteprec_tunnel_is_updated(const struct vteprec_tunnel *, enum vteprec_tunnel_column_id);

void vteprec_tunnel_verify_bfd_config_local(const struct vteprec_tunnel *);
void vteprec_tunnel_verify_bfd_config_remote(const struct vteprec_tunnel *);
void vteprec_tunnel_verify_bfd_params(const struct vteprec_tunnel *);
void vteprec_tunnel_verify_bfd_status(const struct vteprec_tunnel *);
void vteprec_tunnel_verify_local(const struct vteprec_tunnel *);
void vteprec_tunnel_verify_remote(const struct vteprec_tunnel *);

const struct ovsdb_datum *vteprec_tunnel_get_bfd_config_local(const struct vteprec_tunnel *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_tunnel_get_bfd_config_remote(const struct vteprec_tunnel *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_tunnel_get_bfd_params(const struct vteprec_tunnel *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_tunnel_get_bfd_status(const struct vteprec_tunnel *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *vteprec_tunnel_get_local(const struct vteprec_tunnel *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_tunnel_get_remote(const struct vteprec_tunnel *, enum ovsdb_atomic_type key_type);

void vteprec_tunnel_set_bfd_config_local(const struct vteprec_tunnel *, const struct smap *);
void vteprec_tunnel_set_bfd_config_remote(const struct vteprec_tunnel *, const struct smap *);
void vteprec_tunnel_set_bfd_params(const struct vteprec_tunnel *, const struct smap *);
void vteprec_tunnel_set_bfd_status(const struct vteprec_tunnel *, const struct smap *);
void vteprec_tunnel_set_local(const struct vteprec_tunnel *, const struct vteprec_physical_locator *local);
void vteprec_tunnel_set_remote(const struct vteprec_tunnel *, const struct vteprec_physical_locator *remote);

void vteprec_tunnel_update_bfd_config_local_setkey(const struct vteprec_tunnel *,  const char *, const char *);
void vteprec_tunnel_update_bfd_config_local_delkey(const struct vteprec_tunnel *,  const char *);
void vteprec_tunnel_add_clause_bfd_config_local(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_tunnel_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_tunnel_update_bfd_config_remote_setkey(const struct vteprec_tunnel *,  const char *, const char *);
void vteprec_tunnel_update_bfd_config_remote_delkey(const struct vteprec_tunnel *,  const char *);
void vteprec_tunnel_add_clause_bfd_config_remote(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_tunnel_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_tunnel_update_bfd_params_setkey(const struct vteprec_tunnel *,  const char *, const char *);
void vteprec_tunnel_update_bfd_params_delkey(const struct vteprec_tunnel *,  const char *);
void vteprec_tunnel_add_clause_bfd_params(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_tunnel_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_tunnel_update_bfd_status_setkey(const struct vteprec_tunnel *,  const char *, const char *);
void vteprec_tunnel_update_bfd_status_delkey(const struct vteprec_tunnel *,  const char *);
void vteprec_tunnel_add_clause_bfd_status(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void vteprec_tunnel_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_tunnel_add_clause_local(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *local);
void vteprec_tunnel_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_tunnel_add_clause_remote(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *remote);
void vteprec_tunnel_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_tunnel * vteprec_tunnel_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_tunnel_index_set_bfd_config_local(const struct vteprec_tunnel *,
const struct smap *);
void vteprec_tunnel_index_set_bfd_config_remote(const struct vteprec_tunnel *,
const struct smap *);
void vteprec_tunnel_index_set_bfd_params(const struct vteprec_tunnel *,
const struct smap *);
void vteprec_tunnel_index_set_bfd_status(const struct vteprec_tunnel *,
const struct smap *);
void vteprec_tunnel_index_set_local(const struct vteprec_tunnel *,
const struct vteprec_physical_locator *local);
void vteprec_tunnel_index_set_remote(const struct vteprec_tunnel *,
const struct vteprec_physical_locator *remote);

/* Ucast_Macs_Local table. */
struct vteprec_ucast_macs_local {
	struct ovsdb_idl_row header_;

	/* MAC column. */
	char *MAC;	/* Always nonnull. */

	/* ipaddr column. */
	char *ipaddr;	/* Always nonnull. */

	/* locator column. */
	struct vteprec_physical_locator *locator;

	/* logical_switch column. */
	struct vteprec_logical_switch *logical_switch;
};

enum vteprec_ucast_macs_local_column_id {
    VTEPREC_UCAST_MACS_LOCAL_COL_MAC,
    VTEPREC_UCAST_MACS_LOCAL_COL_IPADDR,
    VTEPREC_UCAST_MACS_LOCAL_COL_LOCATOR,
    VTEPREC_UCAST_MACS_LOCAL_COL_LOGICAL_SWITCH,
    VTEPREC_UCAST_MACS_LOCAL_N_COLUMNS
};

#define vteprec_ucast_macs_local_col_locator (vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_LOCATOR])
#define vteprec_ucast_macs_local_col_MAC (vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_MAC])
#define vteprec_ucast_macs_local_col_ipaddr (vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_IPADDR])
#define vteprec_ucast_macs_local_col_logical_switch (vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_LOGICAL_SWITCH])

extern struct ovsdb_idl_column vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_N_COLUMNS];

const struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_first(const struct ovsdb_idl *);
const struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_next(const struct vteprec_ucast_macs_local *);
#define VTEPREC_UCAST_MACS_LOCAL_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_ucast_macs_local_first(IDL); \
             (ROW); \
             (ROW) = vteprec_ucast_macs_local_next(ROW))
#define VTEPREC_UCAST_MACS_LOCAL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_ucast_macs_local_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_ucast_macs_local_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_ucast_macs_local_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_ucast_macs_local_row_get_seqno(const struct vteprec_ucast_macs_local *row, enum ovsdb_idl_change change);
const struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_track_get_first(const struct ovsdb_idl *);
const struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_track_get_next(const struct vteprec_ucast_macs_local *);
#define VTEPREC_UCAST_MACS_LOCAL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_ucast_macs_local_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_ucast_macs_local_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_ucast_macs_local_is_new(const struct vteprec_ucast_macs_local *row)
{
    return vteprec_ucast_macs_local_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_ucast_macs_local_is_deleted(const struct vteprec_ucast_macs_local *row)
{
    return vteprec_ucast_macs_local_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_ucast_macs_local_index_destroy_row(const struct vteprec_ucast_macs_local *);
int vteprec_ucast_macs_local_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_ucast_macs_local *, const struct vteprec_ucast_macs_local *);
const struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_ucast_macs_local *);
const struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_ucast_macs_local *);
const struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_UCAST_MACS_LOCAL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_ucast_macs_local_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_ucast_macs_local_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_ucast_macs_local_index_next(CURSOR))
#define VTEPREC_UCAST_MACS_LOCAL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_ucast_macs_local_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_ucast_macs_local_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_ucast_macs_local_index_next(CURSOR))
#define VTEPREC_UCAST_MACS_LOCAL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_ucast_macs_local_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_ucast_macs_local_index_next(CURSOR))

void vteprec_ucast_macs_local_init(struct vteprec_ucast_macs_local *);
void vteprec_ucast_macs_local_delete(const struct vteprec_ucast_macs_local *);
struct vteprec_ucast_macs_local *vteprec_ucast_macs_local_insert(struct ovsdb_idl_txn *);
bool vteprec_ucast_macs_local_is_updated(const struct vteprec_ucast_macs_local *, enum vteprec_ucast_macs_local_column_id);

void vteprec_ucast_macs_local_verify_MAC(const struct vteprec_ucast_macs_local *);
void vteprec_ucast_macs_local_verify_ipaddr(const struct vteprec_ucast_macs_local *);
void vteprec_ucast_macs_local_verify_locator(const struct vteprec_ucast_macs_local *);
void vteprec_ucast_macs_local_verify_logical_switch(const struct vteprec_ucast_macs_local *);

const struct ovsdb_datum *vteprec_ucast_macs_local_get_MAC(const struct vteprec_ucast_macs_local *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_ucast_macs_local_get_ipaddr(const struct vteprec_ucast_macs_local *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_ucast_macs_local_get_locator(const struct vteprec_ucast_macs_local *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_ucast_macs_local_get_logical_switch(const struct vteprec_ucast_macs_local *, enum ovsdb_atomic_type key_type);

void vteprec_ucast_macs_local_set_MAC(const struct vteprec_ucast_macs_local *, const char *MAC);
void vteprec_ucast_macs_local_set_ipaddr(const struct vteprec_ucast_macs_local *, const char *ipaddr);
void vteprec_ucast_macs_local_set_locator(const struct vteprec_ucast_macs_local *, const struct vteprec_physical_locator *locator);
void vteprec_ucast_macs_local_set_logical_switch(const struct vteprec_ucast_macs_local *, const struct vteprec_logical_switch *logical_switch);

void vteprec_ucast_macs_local_add_clause_MAC(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *MAC);
void vteprec_ucast_macs_local_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_ucast_macs_local_add_clause_ipaddr(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ipaddr);
void vteprec_ucast_macs_local_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_ucast_macs_local_add_clause_locator(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *locator);
void vteprec_ucast_macs_local_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_ucast_macs_local_add_clause_logical_switch(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *logical_switch);
void vteprec_ucast_macs_local_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_ucast_macs_local * vteprec_ucast_macs_local_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_ucast_macs_local_index_set_MAC(const struct vteprec_ucast_macs_local *,
const char *MAC);
void vteprec_ucast_macs_local_index_set_ipaddr(const struct vteprec_ucast_macs_local *,
const char *ipaddr);
void vteprec_ucast_macs_local_index_set_locator(const struct vteprec_ucast_macs_local *,
const struct vteprec_physical_locator *locator);
void vteprec_ucast_macs_local_index_set_logical_switch(const struct vteprec_ucast_macs_local *,
const struct vteprec_logical_switch *logical_switch);

/* Ucast_Macs_Remote table. */
struct vteprec_ucast_macs_remote {
	struct ovsdb_idl_row header_;

	/* MAC column. */
	char *MAC;	/* Always nonnull. */

	/* ipaddr column. */
	char *ipaddr;	/* Always nonnull. */

	/* locator column. */
	struct vteprec_physical_locator *locator;

	/* logical_switch column. */
	struct vteprec_logical_switch *logical_switch;
};

enum vteprec_ucast_macs_remote_column_id {
    VTEPREC_UCAST_MACS_REMOTE_COL_MAC,
    VTEPREC_UCAST_MACS_REMOTE_COL_IPADDR,
    VTEPREC_UCAST_MACS_REMOTE_COL_LOCATOR,
    VTEPREC_UCAST_MACS_REMOTE_COL_LOGICAL_SWITCH,
    VTEPREC_UCAST_MACS_REMOTE_N_COLUMNS
};

#define vteprec_ucast_macs_remote_col_locator (vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_LOCATOR])
#define vteprec_ucast_macs_remote_col_MAC (vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_MAC])
#define vteprec_ucast_macs_remote_col_ipaddr (vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_IPADDR])
#define vteprec_ucast_macs_remote_col_logical_switch (vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_LOGICAL_SWITCH])

extern struct ovsdb_idl_column vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_N_COLUMNS];

const struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_first(const struct ovsdb_idl *);
const struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_next(const struct vteprec_ucast_macs_remote *);
#define VTEPREC_UCAST_MACS_REMOTE_FOR_EACH(ROW, IDL) \
        for ((ROW) = vteprec_ucast_macs_remote_first(IDL); \
             (ROW); \
             (ROW) = vteprec_ucast_macs_remote_next(ROW))
#define VTEPREC_UCAST_MACS_REMOTE_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = vteprec_ucast_macs_remote_first(IDL); \
             (ROW) ? ((NEXT) = vteprec_ucast_macs_remote_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int vteprec_ucast_macs_remote_get_seqno(const struct ovsdb_idl *);
unsigned int vteprec_ucast_macs_remote_row_get_seqno(const struct vteprec_ucast_macs_remote *row, enum ovsdb_idl_change change);
const struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_track_get_first(const struct ovsdb_idl *);
const struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_track_get_next(const struct vteprec_ucast_macs_remote *);
#define VTEPREC_UCAST_MACS_REMOTE_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = vteprec_ucast_macs_remote_track_get_first(IDL); \
             (ROW); \
             (ROW) = vteprec_ucast_macs_remote_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool vteprec_ucast_macs_remote_is_new(const struct vteprec_ucast_macs_remote *row)
{
    return vteprec_ucast_macs_remote_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool vteprec_ucast_macs_remote_is_deleted(const struct vteprec_ucast_macs_remote *row)
{
    return vteprec_ucast_macs_remote_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void vteprec_ucast_macs_remote_index_destroy_row(const struct vteprec_ucast_macs_remote *);
int vteprec_ucast_macs_remote_index_compare(struct ovsdb_idl_index_cursor *, const struct vteprec_ucast_macs_remote *, const struct vteprec_ucast_macs_remote *);
const struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_index_first(struct ovsdb_idl_index_cursor *);
const struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_index_next(struct ovsdb_idl_index_cursor *);
const struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_index_find(struct ovsdb_idl_index_cursor *, const struct vteprec_ucast_macs_remote *);
const struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_index_forward_to(struct ovsdb_idl_index_cursor *, const struct vteprec_ucast_macs_remote *);
const struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_index_get_data(const struct ovsdb_idl_index_cursor *);
#define VTEPREC_UCAST_MACS_REMOTE_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = vteprec_ucast_macs_remote_index_forward_to(CURSOR, FROM); \
             ((ROW) && vteprec_ucast_macs_remote_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = vteprec_ucast_macs_remote_index_next(CURSOR))
#define VTEPREC_UCAST_MACS_REMOTE_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = vteprec_ucast_macs_remote_index_find(CURSOR, KEY); \
             ((ROW) && vteprec_ucast_macs_remote_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = vteprec_ucast_macs_remote_index_next(CURSOR))
#define VTEPREC_UCAST_MACS_REMOTE_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = vteprec_ucast_macs_remote_index_first(CURSOR); \
             (ROW); \
             (ROW) = vteprec_ucast_macs_remote_index_next(CURSOR))

void vteprec_ucast_macs_remote_init(struct vteprec_ucast_macs_remote *);
void vteprec_ucast_macs_remote_delete(const struct vteprec_ucast_macs_remote *);
struct vteprec_ucast_macs_remote *vteprec_ucast_macs_remote_insert(struct ovsdb_idl_txn *);
bool vteprec_ucast_macs_remote_is_updated(const struct vteprec_ucast_macs_remote *, enum vteprec_ucast_macs_remote_column_id);

void vteprec_ucast_macs_remote_verify_MAC(const struct vteprec_ucast_macs_remote *);
void vteprec_ucast_macs_remote_verify_ipaddr(const struct vteprec_ucast_macs_remote *);
void vteprec_ucast_macs_remote_verify_locator(const struct vteprec_ucast_macs_remote *);
void vteprec_ucast_macs_remote_verify_logical_switch(const struct vteprec_ucast_macs_remote *);

const struct ovsdb_datum *vteprec_ucast_macs_remote_get_MAC(const struct vteprec_ucast_macs_remote *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_ucast_macs_remote_get_ipaddr(const struct vteprec_ucast_macs_remote *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_ucast_macs_remote_get_locator(const struct vteprec_ucast_macs_remote *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *vteprec_ucast_macs_remote_get_logical_switch(const struct vteprec_ucast_macs_remote *, enum ovsdb_atomic_type key_type);

void vteprec_ucast_macs_remote_set_MAC(const struct vteprec_ucast_macs_remote *, const char *MAC);
void vteprec_ucast_macs_remote_set_ipaddr(const struct vteprec_ucast_macs_remote *, const char *ipaddr);
void vteprec_ucast_macs_remote_set_locator(const struct vteprec_ucast_macs_remote *, const struct vteprec_physical_locator *locator);
void vteprec_ucast_macs_remote_set_logical_switch(const struct vteprec_ucast_macs_remote *, const struct vteprec_logical_switch *logical_switch);

void vteprec_ucast_macs_remote_add_clause_MAC(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *MAC);
void vteprec_ucast_macs_remote_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_ucast_macs_remote_add_clause_ipaddr(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ipaddr);
void vteprec_ucast_macs_remote_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_ucast_macs_remote_add_clause_locator(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *locator);
void vteprec_ucast_macs_remote_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void vteprec_ucast_macs_remote_add_clause_logical_switch(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *logical_switch);
void vteprec_ucast_macs_remote_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct vteprec_ucast_macs_remote * vteprec_ucast_macs_remote_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void vteprec_ucast_macs_remote_index_set_MAC(const struct vteprec_ucast_macs_remote *,
const char *MAC);
void vteprec_ucast_macs_remote_index_set_ipaddr(const struct vteprec_ucast_macs_remote *,
const char *ipaddr);
void vteprec_ucast_macs_remote_index_set_locator(const struct vteprec_ucast_macs_remote *,
const struct vteprec_physical_locator *locator);
void vteprec_ucast_macs_remote_index_set_logical_switch(const struct vteprec_ucast_macs_remote *,
const struct vteprec_logical_switch *logical_switch);

enum vteprec_table_id {
    VTEPREC_TABLE_ACL,
    VTEPREC_TABLE_ACL_ENTRY,
    VTEPREC_TABLE_ARP_SOURCES_LOCAL,
    VTEPREC_TABLE_ARP_SOURCES_REMOTE,
    VTEPREC_TABLE_GLOBAL,
    VTEPREC_TABLE_LOGICAL_BINDING_STATS,
    VTEPREC_TABLE_LOGICAL_ROUTER,
    VTEPREC_TABLE_LOGICAL_SWITCH,
    VTEPREC_TABLE_MANAGER,
    VTEPREC_TABLE_MCAST_MACS_LOCAL,
    VTEPREC_TABLE_MCAST_MACS_REMOTE,
    VTEPREC_TABLE_PHYSICAL_LOCATOR,
    VTEPREC_TABLE_PHYSICAL_LOCATOR_SET,
    VTEPREC_TABLE_PHYSICAL_PORT,
    VTEPREC_TABLE_PHYSICAL_SWITCH,
    VTEPREC_TABLE_TUNNEL,
    VTEPREC_TABLE_UCAST_MACS_LOCAL,
    VTEPREC_TABLE_UCAST_MACS_REMOTE,
    VTEPREC_N_TABLES
};

#define vteprec_table_acl (vteprec_table_classes[VTEPREC_TABLE_ACL])
#define vteprec_table_mcast_macs_remote (vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_REMOTE])
#define vteprec_table_global (vteprec_table_classes[VTEPREC_TABLE_GLOBAL])
#define vteprec_table_physical_locator (vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR])
#define vteprec_table_physical_locator_set (vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR_SET])
#define vteprec_table_tunnel (vteprec_table_classes[VTEPREC_TABLE_TUNNEL])
#define vteprec_table_mcast_macs_local (vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_LOCAL])
#define vteprec_table_acl_entry (vteprec_table_classes[VTEPREC_TABLE_ACL_ENTRY])
#define vteprec_table_physical_switch (vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_SWITCH])
#define vteprec_table_logical_router (vteprec_table_classes[VTEPREC_TABLE_LOGICAL_ROUTER])
#define vteprec_table_manager (vteprec_table_classes[VTEPREC_TABLE_MANAGER])
#define vteprec_table_ucast_macs_local (vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_LOCAL])
#define vteprec_table_logical_switch (vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH])
#define vteprec_table_ucast_macs_remote (vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_REMOTE])
#define vteprec_table_arp_sources_remote (vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_REMOTE])
#define vteprec_table_arp_sources_local (vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_LOCAL])
#define vteprec_table_physical_port (vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_PORT])
#define vteprec_table_logical_binding_stats (vteprec_table_classes[VTEPREC_TABLE_LOGICAL_BINDING_STATS])

extern struct ovsdb_idl_table_class vteprec_table_classes[VTEPREC_N_TABLES];

extern struct ovsdb_idl_class vteprec_idl_class;

const char * vteprec_get_db_version(void);

#endif /* VTEPREC_IDL_HEADER */
