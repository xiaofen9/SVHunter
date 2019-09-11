/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#ifndef NBREC_IDL_HEADER
#define NBREC_IDL_HEADER 1

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "ovsdb-data.h"
#include "ovsdb-idl-provider.h"
#include "smap.h"
#include "uuid.h"

/* ACL table. */
struct nbrec_acl {
	struct ovsdb_idl_row header_;

	/* action column. */
	char *action;	/* Always nonnull. */

	/* direction column. */
	char *direction;	/* Always nonnull. */

	/* external_ids column. */
	struct smap external_ids;

	/* log column. */
	bool log;

	/* match column. */
	char *match;	/* Always nonnull. */

	/* name column. */
	char *name;

	/* priority column. */
	int64_t priority;

	/* severity column. */
	char *severity;
};

enum nbrec_acl_column_id {
    NBREC_ACL_COL_ACTION,
    NBREC_ACL_COL_DIRECTION,
    NBREC_ACL_COL_EXTERNAL_IDS,
    NBREC_ACL_COL_LOG,
    NBREC_ACL_COL_MATCH,
    NBREC_ACL_COL_NAME,
    NBREC_ACL_COL_PRIORITY,
    NBREC_ACL_COL_SEVERITY,
    NBREC_ACL_N_COLUMNS
};

#define nbrec_acl_col_direction (nbrec_acl_columns[NBREC_ACL_COL_DIRECTION])
#define nbrec_acl_col_name (nbrec_acl_columns[NBREC_ACL_COL_NAME])
#define nbrec_acl_col_priority (nbrec_acl_columns[NBREC_ACL_COL_PRIORITY])
#define nbrec_acl_col_log (nbrec_acl_columns[NBREC_ACL_COL_LOG])
#define nbrec_acl_col_action (nbrec_acl_columns[NBREC_ACL_COL_ACTION])
#define nbrec_acl_col_external_ids (nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS])
#define nbrec_acl_col_match (nbrec_acl_columns[NBREC_ACL_COL_MATCH])
#define nbrec_acl_col_severity (nbrec_acl_columns[NBREC_ACL_COL_SEVERITY])

extern struct ovsdb_idl_column nbrec_acl_columns[NBREC_ACL_N_COLUMNS];

const struct nbrec_acl *nbrec_acl_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_acl *nbrec_acl_first(const struct ovsdb_idl *);
const struct nbrec_acl *nbrec_acl_next(const struct nbrec_acl *);
#define NBREC_ACL_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_acl_first(IDL); \
             (ROW); \
             (ROW) = nbrec_acl_next(ROW))
#define NBREC_ACL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_acl_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_acl_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_acl_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_acl_row_get_seqno(const struct nbrec_acl *row, enum ovsdb_idl_change change);
const struct nbrec_acl *nbrec_acl_track_get_first(const struct ovsdb_idl *);
const struct nbrec_acl *nbrec_acl_track_get_next(const struct nbrec_acl *);
#define NBREC_ACL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_acl_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_acl_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_acl_is_new(const struct nbrec_acl *row)
{
    return nbrec_acl_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_acl_is_deleted(const struct nbrec_acl *row)
{
    return nbrec_acl_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_acl_index_destroy_row(const struct nbrec_acl *);
int nbrec_acl_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_acl *, const struct nbrec_acl *);
const struct nbrec_acl *nbrec_acl_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_acl *nbrec_acl_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_acl *nbrec_acl_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_acl *);
const struct nbrec_acl *nbrec_acl_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_acl *);
const struct nbrec_acl *nbrec_acl_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_ACL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_acl_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_acl_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_acl_index_next(CURSOR))
#define NBREC_ACL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_acl_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_acl_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_acl_index_next(CURSOR))
#define NBREC_ACL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_acl_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_acl_index_next(CURSOR))

void nbrec_acl_init(struct nbrec_acl *);
void nbrec_acl_delete(const struct nbrec_acl *);
struct nbrec_acl *nbrec_acl_insert(struct ovsdb_idl_txn *);
bool nbrec_acl_is_updated(const struct nbrec_acl *, enum nbrec_acl_column_id);

void nbrec_acl_verify_action(const struct nbrec_acl *);
void nbrec_acl_verify_direction(const struct nbrec_acl *);
void nbrec_acl_verify_external_ids(const struct nbrec_acl *);
void nbrec_acl_verify_log(const struct nbrec_acl *);
void nbrec_acl_verify_match(const struct nbrec_acl *);
void nbrec_acl_verify_name(const struct nbrec_acl *);
void nbrec_acl_verify_priority(const struct nbrec_acl *);
void nbrec_acl_verify_severity(const struct nbrec_acl *);

const struct ovsdb_datum *nbrec_acl_get_action(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_direction(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_external_ids(const struct nbrec_acl *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_acl_get_log(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_match(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_name(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_priority(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_severity(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);

void nbrec_acl_set_action(const struct nbrec_acl *, const char *action);
void nbrec_acl_set_direction(const struct nbrec_acl *, const char *direction);
void nbrec_acl_set_external_ids(const struct nbrec_acl *, const struct smap *);
void nbrec_acl_set_log(const struct nbrec_acl *, bool log);
void nbrec_acl_set_match(const struct nbrec_acl *, const char *match);
void nbrec_acl_set_name(const struct nbrec_acl *, const char *name);
void nbrec_acl_set_priority(const struct nbrec_acl *, int64_t priority);
void nbrec_acl_set_severity(const struct nbrec_acl *, const char *severity);

void nbrec_acl_add_clause_action(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *action);
void nbrec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_acl_add_clause_direction(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *direction);
void nbrec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_acl_update_external_ids_setkey(const struct nbrec_acl *,  const char *, const char *);
void nbrec_acl_update_external_ids_delkey(const struct nbrec_acl *,  const char *);
void nbrec_acl_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_acl_add_clause_log(struct ovsdb_idl_condition *, enum ovsdb_function function, bool log);
void nbrec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_acl_add_clause_match(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *match);
void nbrec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_acl_update_name_addvalue(const struct nbrec_acl *,  const char *);
void nbrec_acl_update_name_delvalue(const struct nbrec_acl *,  const char *);
void nbrec_acl_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void nbrec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_acl_add_clause_priority(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t priority);
void nbrec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_acl_update_severity_addvalue(const struct nbrec_acl *,  const char *);
void nbrec_acl_update_severity_delvalue(const struct nbrec_acl *,  const char *);
void nbrec_acl_add_clause_severity(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *severity);
void nbrec_acl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_acl * nbrec_acl_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_acl_index_set_action(const struct nbrec_acl *,
const char *action);
void nbrec_acl_index_set_direction(const struct nbrec_acl *,
const char *direction);
void nbrec_acl_index_set_external_ids(const struct nbrec_acl *,
const struct smap *);
void nbrec_acl_index_set_log(const struct nbrec_acl *,
bool log);
void nbrec_acl_index_set_match(const struct nbrec_acl *,
const char *match);
void nbrec_acl_index_set_name(const struct nbrec_acl *,
const char *name);
void nbrec_acl_index_set_priority(const struct nbrec_acl *,
int64_t priority);
void nbrec_acl_index_set_severity(const struct nbrec_acl *,
const char *severity);

/* Address_Set table. */
struct nbrec_address_set {
	struct ovsdb_idl_row header_;

	/* addresses column. */
	char **addresses;
	size_t n_addresses;

	/* external_ids column. */
	struct smap external_ids;

	/* name column. */
	char *name;	/* Always nonnull. */
};

enum nbrec_address_set_column_id {
    NBREC_ADDRESS_SET_COL_ADDRESSES,
    NBREC_ADDRESS_SET_COL_EXTERNAL_IDS,
    NBREC_ADDRESS_SET_COL_NAME,
    NBREC_ADDRESS_SET_N_COLUMNS
};

#define nbrec_address_set_col_external_ids (nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_EXTERNAL_IDS])
#define nbrec_address_set_col_addresses (nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_ADDRESSES])
#define nbrec_address_set_col_name (nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_NAME])

extern struct ovsdb_idl_column nbrec_address_set_columns[NBREC_ADDRESS_SET_N_COLUMNS];

const struct nbrec_address_set *nbrec_address_set_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_address_set *nbrec_address_set_first(const struct ovsdb_idl *);
const struct nbrec_address_set *nbrec_address_set_next(const struct nbrec_address_set *);
#define NBREC_ADDRESS_SET_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_address_set_first(IDL); \
             (ROW); \
             (ROW) = nbrec_address_set_next(ROW))
#define NBREC_ADDRESS_SET_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_address_set_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_address_set_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_address_set_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_address_set_row_get_seqno(const struct nbrec_address_set *row, enum ovsdb_idl_change change);
const struct nbrec_address_set *nbrec_address_set_track_get_first(const struct ovsdb_idl *);
const struct nbrec_address_set *nbrec_address_set_track_get_next(const struct nbrec_address_set *);
#define NBREC_ADDRESS_SET_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_address_set_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_address_set_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_address_set_is_new(const struct nbrec_address_set *row)
{
    return nbrec_address_set_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_address_set_is_deleted(const struct nbrec_address_set *row)
{
    return nbrec_address_set_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_address_set_index_destroy_row(const struct nbrec_address_set *);
int nbrec_address_set_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_address_set *, const struct nbrec_address_set *);
const struct nbrec_address_set *nbrec_address_set_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_address_set *nbrec_address_set_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_address_set *nbrec_address_set_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_address_set *);
const struct nbrec_address_set *nbrec_address_set_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_address_set *);
const struct nbrec_address_set *nbrec_address_set_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_ADDRESS_SET_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_address_set_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_address_set_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_address_set_index_next(CURSOR))
#define NBREC_ADDRESS_SET_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_address_set_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_address_set_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_address_set_index_next(CURSOR))
#define NBREC_ADDRESS_SET_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_address_set_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_address_set_index_next(CURSOR))

void nbrec_address_set_init(struct nbrec_address_set *);
void nbrec_address_set_delete(const struct nbrec_address_set *);
struct nbrec_address_set *nbrec_address_set_insert(struct ovsdb_idl_txn *);
bool nbrec_address_set_is_updated(const struct nbrec_address_set *, enum nbrec_address_set_column_id);

void nbrec_address_set_verify_addresses(const struct nbrec_address_set *);
void nbrec_address_set_verify_external_ids(const struct nbrec_address_set *);
void nbrec_address_set_verify_name(const struct nbrec_address_set *);

const struct ovsdb_datum *nbrec_address_set_get_addresses(const struct nbrec_address_set *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_address_set_get_external_ids(const struct nbrec_address_set *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_address_set_get_name(const struct nbrec_address_set *, enum ovsdb_atomic_type key_type);

void nbrec_address_set_set_addresses(const struct nbrec_address_set *, const char **addresses, size_t n_addresses);
void nbrec_address_set_set_external_ids(const struct nbrec_address_set *, const struct smap *);
void nbrec_address_set_set_name(const struct nbrec_address_set *, const char *name);

void nbrec_address_set_update_addresses_addvalue(const struct nbrec_address_set *,  const char *);
void nbrec_address_set_update_addresses_delvalue(const struct nbrec_address_set *,  const char *);
void nbrec_address_set_add_clause_addresses(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **addresses, size_t n_addresses);
void nbrec_address_set_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_address_set_update_external_ids_setkey(const struct nbrec_address_set *,  const char *, const char *);
void nbrec_address_set_update_external_ids_delkey(const struct nbrec_address_set *,  const char *);
void nbrec_address_set_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_address_set_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_address_set_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void nbrec_address_set_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_address_set * nbrec_address_set_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_address_set_index_set_addresses(const struct nbrec_address_set *,
const char **addresses, size_t n_addresses);
void nbrec_address_set_index_set_external_ids(const struct nbrec_address_set *,
const struct smap *);
void nbrec_address_set_index_set_name(const struct nbrec_address_set *,
const char *name);

/* Connection table. */
struct nbrec_connection {
	struct ovsdb_idl_row header_;

	/* external_ids column. */
	struct smap external_ids;

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

enum nbrec_connection_column_id {
    NBREC_CONNECTION_COL_EXTERNAL_IDS,
    NBREC_CONNECTION_COL_INACTIVITY_PROBE,
    NBREC_CONNECTION_COL_IS_CONNECTED,
    NBREC_CONNECTION_COL_MAX_BACKOFF,
    NBREC_CONNECTION_COL_OTHER_CONFIG,
    NBREC_CONNECTION_COL_STATUS,
    NBREC_CONNECTION_COL_TARGET,
    NBREC_CONNECTION_N_COLUMNS
};

#define nbrec_connection_col_max_backoff (nbrec_connection_columns[NBREC_CONNECTION_COL_MAX_BACKOFF])
#define nbrec_connection_col_status (nbrec_connection_columns[NBREC_CONNECTION_COL_STATUS])
#define nbrec_connection_col_target (nbrec_connection_columns[NBREC_CONNECTION_COL_TARGET])
#define nbrec_connection_col_other_config (nbrec_connection_columns[NBREC_CONNECTION_COL_OTHER_CONFIG])
#define nbrec_connection_col_inactivity_probe (nbrec_connection_columns[NBREC_CONNECTION_COL_INACTIVITY_PROBE])
#define nbrec_connection_col_external_ids (nbrec_connection_columns[NBREC_CONNECTION_COL_EXTERNAL_IDS])
#define nbrec_connection_col_is_connected (nbrec_connection_columns[NBREC_CONNECTION_COL_IS_CONNECTED])

extern struct ovsdb_idl_column nbrec_connection_columns[NBREC_CONNECTION_N_COLUMNS];

const struct nbrec_connection *nbrec_connection_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_connection *nbrec_connection_first(const struct ovsdb_idl *);
const struct nbrec_connection *nbrec_connection_next(const struct nbrec_connection *);
#define NBREC_CONNECTION_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_connection_first(IDL); \
             (ROW); \
             (ROW) = nbrec_connection_next(ROW))
#define NBREC_CONNECTION_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_connection_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_connection_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_connection_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_connection_row_get_seqno(const struct nbrec_connection *row, enum ovsdb_idl_change change);
const struct nbrec_connection *nbrec_connection_track_get_first(const struct ovsdb_idl *);
const struct nbrec_connection *nbrec_connection_track_get_next(const struct nbrec_connection *);
#define NBREC_CONNECTION_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_connection_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_connection_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_connection_is_new(const struct nbrec_connection *row)
{
    return nbrec_connection_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_connection_is_deleted(const struct nbrec_connection *row)
{
    return nbrec_connection_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_connection_index_destroy_row(const struct nbrec_connection *);
int nbrec_connection_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_connection *, const struct nbrec_connection *);
const struct nbrec_connection *nbrec_connection_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_connection *nbrec_connection_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_connection *nbrec_connection_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_connection *);
const struct nbrec_connection *nbrec_connection_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_connection *);
const struct nbrec_connection *nbrec_connection_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_CONNECTION_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_connection_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_connection_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_connection_index_next(CURSOR))
#define NBREC_CONNECTION_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_connection_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_connection_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_connection_index_next(CURSOR))
#define NBREC_CONNECTION_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_connection_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_connection_index_next(CURSOR))

void nbrec_connection_init(struct nbrec_connection *);
void nbrec_connection_delete(const struct nbrec_connection *);
struct nbrec_connection *nbrec_connection_insert(struct ovsdb_idl_txn *);
bool nbrec_connection_is_updated(const struct nbrec_connection *, enum nbrec_connection_column_id);

void nbrec_connection_verify_external_ids(const struct nbrec_connection *);
void nbrec_connection_verify_inactivity_probe(const struct nbrec_connection *);
void nbrec_connection_verify_is_connected(const struct nbrec_connection *);
void nbrec_connection_verify_max_backoff(const struct nbrec_connection *);
void nbrec_connection_verify_other_config(const struct nbrec_connection *);
void nbrec_connection_verify_status(const struct nbrec_connection *);
void nbrec_connection_verify_target(const struct nbrec_connection *);

const struct ovsdb_datum *nbrec_connection_get_external_ids(const struct nbrec_connection *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_connection_get_inactivity_probe(const struct nbrec_connection *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_connection_get_is_connected(const struct nbrec_connection *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_connection_get_max_backoff(const struct nbrec_connection *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_connection_get_other_config(const struct nbrec_connection *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_connection_get_status(const struct nbrec_connection *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_connection_get_target(const struct nbrec_connection *, enum ovsdb_atomic_type key_type);

void nbrec_connection_set_external_ids(const struct nbrec_connection *, const struct smap *);
void nbrec_connection_set_inactivity_probe(const struct nbrec_connection *, const int64_t *inactivity_probe, size_t n_inactivity_probe);
void nbrec_connection_set_is_connected(const struct nbrec_connection *, bool is_connected);
void nbrec_connection_set_max_backoff(const struct nbrec_connection *, const int64_t *max_backoff, size_t n_max_backoff);
void nbrec_connection_set_other_config(const struct nbrec_connection *, const struct smap *);
void nbrec_connection_set_status(const struct nbrec_connection *, const struct smap *);
void nbrec_connection_set_target(const struct nbrec_connection *, const char *target);

void nbrec_connection_update_external_ids_setkey(const struct nbrec_connection *,  const char *, const char *);
void nbrec_connection_update_external_ids_delkey(const struct nbrec_connection *,  const char *);
void nbrec_connection_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_connection_update_inactivity_probe_addvalue(const struct nbrec_connection *,  int64_t );
void nbrec_connection_update_inactivity_probe_delvalue(const struct nbrec_connection *,  int64_t );
void nbrec_connection_add_clause_inactivity_probe(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *inactivity_probe, size_t n_inactivity_probe);
void nbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_connection_add_clause_is_connected(struct ovsdb_idl_condition *, enum ovsdb_function function, bool is_connected);
void nbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_connection_update_max_backoff_addvalue(const struct nbrec_connection *,  int64_t );
void nbrec_connection_update_max_backoff_delvalue(const struct nbrec_connection *,  int64_t );
void nbrec_connection_add_clause_max_backoff(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *max_backoff, size_t n_max_backoff);
void nbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_connection_update_other_config_setkey(const struct nbrec_connection *,  const char *, const char *);
void nbrec_connection_update_other_config_delkey(const struct nbrec_connection *,  const char *);
void nbrec_connection_add_clause_other_config(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_connection_update_status_setkey(const struct nbrec_connection *,  const char *, const char *);
void nbrec_connection_update_status_delkey(const struct nbrec_connection *,  const char *);
void nbrec_connection_add_clause_status(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_connection_add_clause_target(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *target);
void nbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_connection * nbrec_connection_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_connection_index_set_external_ids(const struct nbrec_connection *,
const struct smap *);
void nbrec_connection_index_set_inactivity_probe(const struct nbrec_connection *,
const int64_t *inactivity_probe, size_t n_inactivity_probe);
void nbrec_connection_index_set_is_connected(const struct nbrec_connection *,
bool is_connected);
void nbrec_connection_index_set_max_backoff(const struct nbrec_connection *,
const int64_t *max_backoff, size_t n_max_backoff);
void nbrec_connection_index_set_other_config(const struct nbrec_connection *,
const struct smap *);
void nbrec_connection_index_set_status(const struct nbrec_connection *,
const struct smap *);
void nbrec_connection_index_set_target(const struct nbrec_connection *,
const char *target);

/* DHCP_Options table. */
struct nbrec_dhcp_options {
	struct ovsdb_idl_row header_;

	/* cidr column. */
	char *cidr;	/* Always nonnull. */

	/* external_ids column. */
	struct smap external_ids;

	/* options column. */
	struct smap options;
};

enum nbrec_dhcp_options_column_id {
    NBREC_DHCP_OPTIONS_COL_CIDR,
    NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS,
    NBREC_DHCP_OPTIONS_COL_OPTIONS,
    NBREC_DHCP_OPTIONS_N_COLUMNS
};

#define nbrec_dhcp_options_col_cidr (nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_CIDR])
#define nbrec_dhcp_options_col_external_ids (nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS])
#define nbrec_dhcp_options_col_options (nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_OPTIONS])

extern struct ovsdb_idl_column nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_N_COLUMNS];

const struct nbrec_dhcp_options *nbrec_dhcp_options_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_first(const struct ovsdb_idl *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_next(const struct nbrec_dhcp_options *);
#define NBREC_DHCP_OPTIONS_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_dhcp_options_first(IDL); \
             (ROW); \
             (ROW) = nbrec_dhcp_options_next(ROW))
#define NBREC_DHCP_OPTIONS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_dhcp_options_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_dhcp_options_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_dhcp_options_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_dhcp_options_row_get_seqno(const struct nbrec_dhcp_options *row, enum ovsdb_idl_change change);
const struct nbrec_dhcp_options *nbrec_dhcp_options_track_get_first(const struct ovsdb_idl *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_track_get_next(const struct nbrec_dhcp_options *);
#define NBREC_DHCP_OPTIONS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_dhcp_options_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_dhcp_options_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_dhcp_options_is_new(const struct nbrec_dhcp_options *row)
{
    return nbrec_dhcp_options_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_dhcp_options_is_deleted(const struct nbrec_dhcp_options *row)
{
    return nbrec_dhcp_options_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_dhcp_options_index_destroy_row(const struct nbrec_dhcp_options *);
int nbrec_dhcp_options_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_dhcp_options *, const struct nbrec_dhcp_options *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_dhcp_options *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_dhcp_options *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_DHCP_OPTIONS_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_dhcp_options_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_dhcp_options_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_dhcp_options_index_next(CURSOR))
#define NBREC_DHCP_OPTIONS_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_dhcp_options_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_dhcp_options_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_dhcp_options_index_next(CURSOR))
#define NBREC_DHCP_OPTIONS_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_dhcp_options_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_dhcp_options_index_next(CURSOR))

void nbrec_dhcp_options_init(struct nbrec_dhcp_options *);
void nbrec_dhcp_options_delete(const struct nbrec_dhcp_options *);
struct nbrec_dhcp_options *nbrec_dhcp_options_insert(struct ovsdb_idl_txn *);
bool nbrec_dhcp_options_is_updated(const struct nbrec_dhcp_options *, enum nbrec_dhcp_options_column_id);

void nbrec_dhcp_options_verify_cidr(const struct nbrec_dhcp_options *);
void nbrec_dhcp_options_verify_external_ids(const struct nbrec_dhcp_options *);
void nbrec_dhcp_options_verify_options(const struct nbrec_dhcp_options *);

const struct ovsdb_datum *nbrec_dhcp_options_get_cidr(const struct nbrec_dhcp_options *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_dhcp_options_get_external_ids(const struct nbrec_dhcp_options *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_dhcp_options_get_options(const struct nbrec_dhcp_options *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);

void nbrec_dhcp_options_set_cidr(const struct nbrec_dhcp_options *, const char *cidr);
void nbrec_dhcp_options_set_external_ids(const struct nbrec_dhcp_options *, const struct smap *);
void nbrec_dhcp_options_set_options(const struct nbrec_dhcp_options *, const struct smap *);

void nbrec_dhcp_options_add_clause_cidr(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *cidr);
void nbrec_dhcp_options_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_dhcp_options_update_external_ids_setkey(const struct nbrec_dhcp_options *,  const char *, const char *);
void nbrec_dhcp_options_update_external_ids_delkey(const struct nbrec_dhcp_options *,  const char *);
void nbrec_dhcp_options_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_dhcp_options_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_dhcp_options_update_options_setkey(const struct nbrec_dhcp_options *,  const char *, const char *);
void nbrec_dhcp_options_update_options_delkey(const struct nbrec_dhcp_options *,  const char *);
void nbrec_dhcp_options_add_clause_options(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_dhcp_options_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_dhcp_options * nbrec_dhcp_options_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_dhcp_options_index_set_cidr(const struct nbrec_dhcp_options *,
const char *cidr);
void nbrec_dhcp_options_index_set_external_ids(const struct nbrec_dhcp_options *,
const struct smap *);
void nbrec_dhcp_options_index_set_options(const struct nbrec_dhcp_options *,
const struct smap *);

/* DNS table. */
struct nbrec_dns {
	struct ovsdb_idl_row header_;

	/* external_ids column. */
	struct smap external_ids;

	/* records column. */
	struct smap records;
};

enum nbrec_dns_column_id {
    NBREC_DNS_COL_EXTERNAL_IDS,
    NBREC_DNS_COL_RECORDS,
    NBREC_DNS_N_COLUMNS
};

#define nbrec_dns_col_records (nbrec_dns_columns[NBREC_DNS_COL_RECORDS])
#define nbrec_dns_col_external_ids (nbrec_dns_columns[NBREC_DNS_COL_EXTERNAL_IDS])

extern struct ovsdb_idl_column nbrec_dns_columns[NBREC_DNS_N_COLUMNS];

const struct nbrec_dns *nbrec_dns_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_dns *nbrec_dns_first(const struct ovsdb_idl *);
const struct nbrec_dns *nbrec_dns_next(const struct nbrec_dns *);
#define NBREC_DNS_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_dns_first(IDL); \
             (ROW); \
             (ROW) = nbrec_dns_next(ROW))
#define NBREC_DNS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_dns_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_dns_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_dns_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_dns_row_get_seqno(const struct nbrec_dns *row, enum ovsdb_idl_change change);
const struct nbrec_dns *nbrec_dns_track_get_first(const struct ovsdb_idl *);
const struct nbrec_dns *nbrec_dns_track_get_next(const struct nbrec_dns *);
#define NBREC_DNS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_dns_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_dns_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_dns_is_new(const struct nbrec_dns *row)
{
    return nbrec_dns_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_dns_is_deleted(const struct nbrec_dns *row)
{
    return nbrec_dns_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_dns_index_destroy_row(const struct nbrec_dns *);
int nbrec_dns_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_dns *, const struct nbrec_dns *);
const struct nbrec_dns *nbrec_dns_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_dns *nbrec_dns_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_dns *nbrec_dns_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_dns *);
const struct nbrec_dns *nbrec_dns_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_dns *);
const struct nbrec_dns *nbrec_dns_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_DNS_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_dns_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_dns_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_dns_index_next(CURSOR))
#define NBREC_DNS_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_dns_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_dns_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_dns_index_next(CURSOR))
#define NBREC_DNS_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_dns_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_dns_index_next(CURSOR))

void nbrec_dns_init(struct nbrec_dns *);
void nbrec_dns_delete(const struct nbrec_dns *);
struct nbrec_dns *nbrec_dns_insert(struct ovsdb_idl_txn *);
bool nbrec_dns_is_updated(const struct nbrec_dns *, enum nbrec_dns_column_id);

void nbrec_dns_verify_external_ids(const struct nbrec_dns *);
void nbrec_dns_verify_records(const struct nbrec_dns *);

const struct ovsdb_datum *nbrec_dns_get_external_ids(const struct nbrec_dns *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_dns_get_records(const struct nbrec_dns *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);

void nbrec_dns_set_external_ids(const struct nbrec_dns *, const struct smap *);
void nbrec_dns_set_records(const struct nbrec_dns *, const struct smap *);

void nbrec_dns_update_external_ids_setkey(const struct nbrec_dns *,  const char *, const char *);
void nbrec_dns_update_external_ids_delkey(const struct nbrec_dns *,  const char *);
void nbrec_dns_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_dns_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_dns_update_records_setkey(const struct nbrec_dns *,  const char *, const char *);
void nbrec_dns_update_records_delkey(const struct nbrec_dns *,  const char *);
void nbrec_dns_add_clause_records(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_dns_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_dns * nbrec_dns_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_dns_index_set_external_ids(const struct nbrec_dns *,
const struct smap *);
void nbrec_dns_index_set_records(const struct nbrec_dns *,
const struct smap *);

/* Gateway_Chassis table. */
struct nbrec_gateway_chassis {
	struct ovsdb_idl_row header_;

	/* chassis_name column. */
	char *chassis_name;	/* Always nonnull. */

	/* external_ids column. */
	struct smap external_ids;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* options column. */
	struct smap options;

	/* priority column. */
	int64_t priority;
};

enum nbrec_gateway_chassis_column_id {
    NBREC_GATEWAY_CHASSIS_COL_CHASSIS_NAME,
    NBREC_GATEWAY_CHASSIS_COL_EXTERNAL_IDS,
    NBREC_GATEWAY_CHASSIS_COL_NAME,
    NBREC_GATEWAY_CHASSIS_COL_OPTIONS,
    NBREC_GATEWAY_CHASSIS_COL_PRIORITY,
    NBREC_GATEWAY_CHASSIS_N_COLUMNS
};

#define nbrec_gateway_chassis_col_priority (nbrec_gateway_chassis_columns[NBREC_GATEWAY_CHASSIS_COL_PRIORITY])
#define nbrec_gateway_chassis_col_chassis_name (nbrec_gateway_chassis_columns[NBREC_GATEWAY_CHASSIS_COL_CHASSIS_NAME])
#define nbrec_gateway_chassis_col_external_ids (nbrec_gateway_chassis_columns[NBREC_GATEWAY_CHASSIS_COL_EXTERNAL_IDS])
#define nbrec_gateway_chassis_col_options (nbrec_gateway_chassis_columns[NBREC_GATEWAY_CHASSIS_COL_OPTIONS])
#define nbrec_gateway_chassis_col_name (nbrec_gateway_chassis_columns[NBREC_GATEWAY_CHASSIS_COL_NAME])

extern struct ovsdb_idl_column nbrec_gateway_chassis_columns[NBREC_GATEWAY_CHASSIS_N_COLUMNS];

const struct nbrec_gateway_chassis *nbrec_gateway_chassis_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_gateway_chassis *nbrec_gateway_chassis_first(const struct ovsdb_idl *);
const struct nbrec_gateway_chassis *nbrec_gateway_chassis_next(const struct nbrec_gateway_chassis *);
#define NBREC_GATEWAY_CHASSIS_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_gateway_chassis_first(IDL); \
             (ROW); \
             (ROW) = nbrec_gateway_chassis_next(ROW))
#define NBREC_GATEWAY_CHASSIS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_gateway_chassis_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_gateway_chassis_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_gateway_chassis_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_gateway_chassis_row_get_seqno(const struct nbrec_gateway_chassis *row, enum ovsdb_idl_change change);
const struct nbrec_gateway_chassis *nbrec_gateway_chassis_track_get_first(const struct ovsdb_idl *);
const struct nbrec_gateway_chassis *nbrec_gateway_chassis_track_get_next(const struct nbrec_gateway_chassis *);
#define NBREC_GATEWAY_CHASSIS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_gateway_chassis_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_gateway_chassis_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_gateway_chassis_is_new(const struct nbrec_gateway_chassis *row)
{
    return nbrec_gateway_chassis_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_gateway_chassis_is_deleted(const struct nbrec_gateway_chassis *row)
{
    return nbrec_gateway_chassis_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_gateway_chassis_index_destroy_row(const struct nbrec_gateway_chassis *);
int nbrec_gateway_chassis_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_gateway_chassis *, const struct nbrec_gateway_chassis *);
const struct nbrec_gateway_chassis *nbrec_gateway_chassis_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_gateway_chassis *nbrec_gateway_chassis_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_gateway_chassis *nbrec_gateway_chassis_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_gateway_chassis *);
const struct nbrec_gateway_chassis *nbrec_gateway_chassis_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_gateway_chassis *);
const struct nbrec_gateway_chassis *nbrec_gateway_chassis_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_GATEWAY_CHASSIS_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_gateway_chassis_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_gateway_chassis_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_gateway_chassis_index_next(CURSOR))
#define NBREC_GATEWAY_CHASSIS_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_gateway_chassis_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_gateway_chassis_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_gateway_chassis_index_next(CURSOR))
#define NBREC_GATEWAY_CHASSIS_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_gateway_chassis_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_gateway_chassis_index_next(CURSOR))

void nbrec_gateway_chassis_init(struct nbrec_gateway_chassis *);
void nbrec_gateway_chassis_delete(const struct nbrec_gateway_chassis *);
struct nbrec_gateway_chassis *nbrec_gateway_chassis_insert(struct ovsdb_idl_txn *);
bool nbrec_gateway_chassis_is_updated(const struct nbrec_gateway_chassis *, enum nbrec_gateway_chassis_column_id);

void nbrec_gateway_chassis_verify_chassis_name(const struct nbrec_gateway_chassis *);
void nbrec_gateway_chassis_verify_external_ids(const struct nbrec_gateway_chassis *);
void nbrec_gateway_chassis_verify_name(const struct nbrec_gateway_chassis *);
void nbrec_gateway_chassis_verify_options(const struct nbrec_gateway_chassis *);
void nbrec_gateway_chassis_verify_priority(const struct nbrec_gateway_chassis *);

const struct ovsdb_datum *nbrec_gateway_chassis_get_chassis_name(const struct nbrec_gateway_chassis *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_gateway_chassis_get_external_ids(const struct nbrec_gateway_chassis *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_gateway_chassis_get_name(const struct nbrec_gateway_chassis *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_gateway_chassis_get_options(const struct nbrec_gateway_chassis *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_gateway_chassis_get_priority(const struct nbrec_gateway_chassis *, enum ovsdb_atomic_type key_type);

void nbrec_gateway_chassis_set_chassis_name(const struct nbrec_gateway_chassis *, const char *chassis_name);
void nbrec_gateway_chassis_set_external_ids(const struct nbrec_gateway_chassis *, const struct smap *);
void nbrec_gateway_chassis_set_name(const struct nbrec_gateway_chassis *, const char *name);
void nbrec_gateway_chassis_set_options(const struct nbrec_gateway_chassis *, const struct smap *);
void nbrec_gateway_chassis_set_priority(const struct nbrec_gateway_chassis *, int64_t priority);

void nbrec_gateway_chassis_add_clause_chassis_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *chassis_name);
void nbrec_gateway_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_gateway_chassis_update_external_ids_setkey(const struct nbrec_gateway_chassis *,  const char *, const char *);
void nbrec_gateway_chassis_update_external_ids_delkey(const struct nbrec_gateway_chassis *,  const char *);
void nbrec_gateway_chassis_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_gateway_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_gateway_chassis_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void nbrec_gateway_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_gateway_chassis_update_options_setkey(const struct nbrec_gateway_chassis *,  const char *, const char *);
void nbrec_gateway_chassis_update_options_delkey(const struct nbrec_gateway_chassis *,  const char *);
void nbrec_gateway_chassis_add_clause_options(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_gateway_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_gateway_chassis_add_clause_priority(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t priority);
void nbrec_gateway_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_gateway_chassis * nbrec_gateway_chassis_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_gateway_chassis_index_set_chassis_name(const struct nbrec_gateway_chassis *,
const char *chassis_name);
void nbrec_gateway_chassis_index_set_external_ids(const struct nbrec_gateway_chassis *,
const struct smap *);
void nbrec_gateway_chassis_index_set_name(const struct nbrec_gateway_chassis *,
const char *name);
void nbrec_gateway_chassis_index_set_options(const struct nbrec_gateway_chassis *,
const struct smap *);
void nbrec_gateway_chassis_index_set_priority(const struct nbrec_gateway_chassis *,
int64_t priority);

/* Load_Balancer table. */
struct nbrec_load_balancer {
	struct ovsdb_idl_row header_;

	/* external_ids column. */
	struct smap external_ids;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* protocol column. */
	char *protocol;

	/* vips column. */
	struct smap vips;
};

enum nbrec_load_balancer_column_id {
    NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS,
    NBREC_LOAD_BALANCER_COL_NAME,
    NBREC_LOAD_BALANCER_COL_PROTOCOL,
    NBREC_LOAD_BALANCER_COL_VIPS,
    NBREC_LOAD_BALANCER_N_COLUMNS
};

#define nbrec_load_balancer_col_protocol (nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_PROTOCOL])
#define nbrec_load_balancer_col_external_ids (nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS])
#define nbrec_load_balancer_col_vips (nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_VIPS])
#define nbrec_load_balancer_col_name (nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_NAME])

extern struct ovsdb_idl_column nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_N_COLUMNS];

const struct nbrec_load_balancer *nbrec_load_balancer_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_load_balancer *nbrec_load_balancer_first(const struct ovsdb_idl *);
const struct nbrec_load_balancer *nbrec_load_balancer_next(const struct nbrec_load_balancer *);
#define NBREC_LOAD_BALANCER_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_load_balancer_first(IDL); \
             (ROW); \
             (ROW) = nbrec_load_balancer_next(ROW))
#define NBREC_LOAD_BALANCER_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_load_balancer_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_load_balancer_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_load_balancer_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_load_balancer_row_get_seqno(const struct nbrec_load_balancer *row, enum ovsdb_idl_change change);
const struct nbrec_load_balancer *nbrec_load_balancer_track_get_first(const struct ovsdb_idl *);
const struct nbrec_load_balancer *nbrec_load_balancer_track_get_next(const struct nbrec_load_balancer *);
#define NBREC_LOAD_BALANCER_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_load_balancer_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_load_balancer_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_load_balancer_is_new(const struct nbrec_load_balancer *row)
{
    return nbrec_load_balancer_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_load_balancer_is_deleted(const struct nbrec_load_balancer *row)
{
    return nbrec_load_balancer_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_load_balancer_index_destroy_row(const struct nbrec_load_balancer *);
int nbrec_load_balancer_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_load_balancer *, const struct nbrec_load_balancer *);
const struct nbrec_load_balancer *nbrec_load_balancer_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_load_balancer *nbrec_load_balancer_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_load_balancer *nbrec_load_balancer_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_load_balancer *);
const struct nbrec_load_balancer *nbrec_load_balancer_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_load_balancer *);
const struct nbrec_load_balancer *nbrec_load_balancer_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_LOAD_BALANCER_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_load_balancer_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_load_balancer_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_load_balancer_index_next(CURSOR))
#define NBREC_LOAD_BALANCER_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_load_balancer_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_load_balancer_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_load_balancer_index_next(CURSOR))
#define NBREC_LOAD_BALANCER_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_load_balancer_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_load_balancer_index_next(CURSOR))

void nbrec_load_balancer_init(struct nbrec_load_balancer *);
void nbrec_load_balancer_delete(const struct nbrec_load_balancer *);
struct nbrec_load_balancer *nbrec_load_balancer_insert(struct ovsdb_idl_txn *);
bool nbrec_load_balancer_is_updated(const struct nbrec_load_balancer *, enum nbrec_load_balancer_column_id);

void nbrec_load_balancer_verify_external_ids(const struct nbrec_load_balancer *);
void nbrec_load_balancer_verify_name(const struct nbrec_load_balancer *);
void nbrec_load_balancer_verify_protocol(const struct nbrec_load_balancer *);
void nbrec_load_balancer_verify_vips(const struct nbrec_load_balancer *);

const struct ovsdb_datum *nbrec_load_balancer_get_external_ids(const struct nbrec_load_balancer *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_load_balancer_get_name(const struct nbrec_load_balancer *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_load_balancer_get_protocol(const struct nbrec_load_balancer *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_load_balancer_get_vips(const struct nbrec_load_balancer *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);

void nbrec_load_balancer_set_external_ids(const struct nbrec_load_balancer *, const struct smap *);
void nbrec_load_balancer_set_name(const struct nbrec_load_balancer *, const char *name);
void nbrec_load_balancer_set_protocol(const struct nbrec_load_balancer *, const char *protocol);
void nbrec_load_balancer_set_vips(const struct nbrec_load_balancer *, const struct smap *);

void nbrec_load_balancer_update_external_ids_setkey(const struct nbrec_load_balancer *,  const char *, const char *);
void nbrec_load_balancer_update_external_ids_delkey(const struct nbrec_load_balancer *,  const char *);
void nbrec_load_balancer_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_load_balancer_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_load_balancer_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void nbrec_load_balancer_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_load_balancer_update_protocol_addvalue(const struct nbrec_load_balancer *,  const char *);
void nbrec_load_balancer_update_protocol_delvalue(const struct nbrec_load_balancer *,  const char *);
void nbrec_load_balancer_add_clause_protocol(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *protocol);
void nbrec_load_balancer_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_load_balancer_update_vips_setkey(const struct nbrec_load_balancer *,  const char *, const char *);
void nbrec_load_balancer_update_vips_delkey(const struct nbrec_load_balancer *,  const char *);
void nbrec_load_balancer_add_clause_vips(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_load_balancer_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_load_balancer * nbrec_load_balancer_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_load_balancer_index_set_external_ids(const struct nbrec_load_balancer *,
const struct smap *);
void nbrec_load_balancer_index_set_name(const struct nbrec_load_balancer *,
const char *name);
void nbrec_load_balancer_index_set_protocol(const struct nbrec_load_balancer *,
const char *protocol);
void nbrec_load_balancer_index_set_vips(const struct nbrec_load_balancer *,
const struct smap *);

/* Logical_Router table. */
struct nbrec_logical_router {
	struct ovsdb_idl_row header_;

	/* enabled column. */
	bool *enabled;
	size_t n_enabled;

	/* external_ids column. */
	struct smap external_ids;

	/* load_balancer column. */
	struct nbrec_load_balancer **load_balancer;
	size_t n_load_balancer;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* nat column. */
	struct nbrec_nat **nat;
	size_t n_nat;

	/* options column. */
	struct smap options;

	/* ports column. */
	struct nbrec_logical_router_port **ports;
	size_t n_ports;

	/* static_routes column. */
	struct nbrec_logical_router_static_route **static_routes;
	size_t n_static_routes;
};

enum nbrec_logical_router_column_id {
    NBREC_LOGICAL_ROUTER_COL_ENABLED,
    NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER,
    NBREC_LOGICAL_ROUTER_COL_NAME,
    NBREC_LOGICAL_ROUTER_COL_NAT,
    NBREC_LOGICAL_ROUTER_COL_OPTIONS,
    NBREC_LOGICAL_ROUTER_COL_PORTS,
    NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES,
    NBREC_LOGICAL_ROUTER_N_COLUMNS
};

#define nbrec_logical_router_col_load_balancer (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER])
#define nbrec_logical_router_col_name (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAME])
#define nbrec_logical_router_col_static_routes (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES])
#define nbrec_logical_router_col_enabled (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_ENABLED])
#define nbrec_logical_router_col_options (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_OPTIONS])
#define nbrec_logical_router_col_nat (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAT])
#define nbrec_logical_router_col_external_ids (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS])
#define nbrec_logical_router_col_ports (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS])

extern struct ovsdb_idl_column nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_N_COLUMNS];

const struct nbrec_logical_router *nbrec_logical_router_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_router *nbrec_logical_router_first(const struct ovsdb_idl *);
const struct nbrec_logical_router *nbrec_logical_router_next(const struct nbrec_logical_router *);
#define NBREC_LOGICAL_ROUTER_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_next(ROW))
#define NBREC_LOGICAL_ROUTER_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_router_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_router_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_router_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_router_row_get_seqno(const struct nbrec_logical_router *row, enum ovsdb_idl_change change);
const struct nbrec_logical_router *nbrec_logical_router_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_router *nbrec_logical_router_track_get_next(const struct nbrec_logical_router *);
#define NBREC_LOGICAL_ROUTER_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_logical_router_is_new(const struct nbrec_logical_router *row)
{
    return nbrec_logical_router_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_logical_router_is_deleted(const struct nbrec_logical_router *row)
{
    return nbrec_logical_router_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_logical_router_index_destroy_row(const struct nbrec_logical_router *);
int nbrec_logical_router_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_router *, const struct nbrec_logical_router *);
const struct nbrec_logical_router *nbrec_logical_router_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_logical_router *nbrec_logical_router_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_logical_router *nbrec_logical_router_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_router *);
const struct nbrec_logical_router *nbrec_logical_router_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_router *);
const struct nbrec_logical_router *nbrec_logical_router_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_LOGICAL_ROUTER_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_logical_router_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_logical_router_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_logical_router_index_next(CURSOR))
#define NBREC_LOGICAL_ROUTER_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_logical_router_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_logical_router_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_logical_router_index_next(CURSOR))
#define NBREC_LOGICAL_ROUTER_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_logical_router_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_logical_router_index_next(CURSOR))

void nbrec_logical_router_init(struct nbrec_logical_router *);
void nbrec_logical_router_delete(const struct nbrec_logical_router *);
struct nbrec_logical_router *nbrec_logical_router_insert(struct ovsdb_idl_txn *);
bool nbrec_logical_router_is_updated(const struct nbrec_logical_router *, enum nbrec_logical_router_column_id);

void nbrec_logical_router_verify_enabled(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_external_ids(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_load_balancer(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_name(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_nat(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_options(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_ports(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_static_routes(const struct nbrec_logical_router *);

const struct ovsdb_datum *nbrec_logical_router_get_enabled(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_external_ids(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_router_get_load_balancer(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_name(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_nat(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_options(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_router_get_ports(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_static_routes(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);

void nbrec_logical_router_set_enabled(const struct nbrec_logical_router *, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_set_external_ids(const struct nbrec_logical_router *, const struct smap *);
void nbrec_logical_router_set_load_balancer(const struct nbrec_logical_router *, struct nbrec_load_balancer **load_balancer, size_t n_load_balancer);
void nbrec_logical_router_set_name(const struct nbrec_logical_router *, const char *name);
void nbrec_logical_router_set_nat(const struct nbrec_logical_router *, struct nbrec_nat **nat, size_t n_nat);
void nbrec_logical_router_set_options(const struct nbrec_logical_router *, const struct smap *);
void nbrec_logical_router_set_ports(const struct nbrec_logical_router *, struct nbrec_logical_router_port **ports, size_t n_ports);
void nbrec_logical_router_set_static_routes(const struct nbrec_logical_router *, struct nbrec_logical_router_static_route **static_routes, size_t n_static_routes);

void nbrec_logical_router_update_enabled_addvalue(const struct nbrec_logical_router *,  bool );
void nbrec_logical_router_update_enabled_delvalue(const struct nbrec_logical_router *,  bool );
void nbrec_logical_router_add_clause_enabled(struct ovsdb_idl_condition *, enum ovsdb_function function, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_update_external_ids_setkey(const struct nbrec_logical_router *,  const char *, const char *);
void nbrec_logical_router_update_external_ids_delkey(const struct nbrec_logical_router *,  const char *);
void nbrec_logical_router_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_update_load_balancer_addvalue(const struct nbrec_logical_router *,  const struct nbrec_load_balancer *);
void nbrec_logical_router_update_load_balancer_delvalue(const struct nbrec_logical_router *,  const struct nbrec_load_balancer *);
void nbrec_logical_router_add_clause_load_balancer(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer);
void nbrec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void nbrec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_update_nat_addvalue(const struct nbrec_logical_router *,  const struct nbrec_nat *);
void nbrec_logical_router_update_nat_delvalue(const struct nbrec_logical_router *,  const struct nbrec_nat *);
void nbrec_logical_router_add_clause_nat(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **nat, size_t n_nat);
void nbrec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_update_options_setkey(const struct nbrec_logical_router *,  const char *, const char *);
void nbrec_logical_router_update_options_delkey(const struct nbrec_logical_router *,  const char *);
void nbrec_logical_router_add_clause_options(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_update_ports_addvalue(const struct nbrec_logical_router *,  const struct nbrec_logical_router_port *);
void nbrec_logical_router_update_ports_delvalue(const struct nbrec_logical_router *,  const struct nbrec_logical_router_port *);
void nbrec_logical_router_add_clause_ports(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **ports, size_t n_ports);
void nbrec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_update_static_routes_addvalue(const struct nbrec_logical_router *,  const struct nbrec_logical_router_static_route *);
void nbrec_logical_router_update_static_routes_delvalue(const struct nbrec_logical_router *,  const struct nbrec_logical_router_static_route *);
void nbrec_logical_router_add_clause_static_routes(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **static_routes, size_t n_static_routes);
void nbrec_logical_router_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_logical_router * nbrec_logical_router_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_logical_router_index_set_enabled(const struct nbrec_logical_router *,
const bool *enabled, size_t n_enabled);
void nbrec_logical_router_index_set_external_ids(const struct nbrec_logical_router *,
const struct smap *);
void nbrec_logical_router_index_set_load_balancer(const struct nbrec_logical_router *,
struct nbrec_load_balancer **load_balancer, size_t n_load_balancer);
void nbrec_logical_router_index_set_name(const struct nbrec_logical_router *,
const char *name);
void nbrec_logical_router_index_set_nat(const struct nbrec_logical_router *,
struct nbrec_nat **nat, size_t n_nat);
void nbrec_logical_router_index_set_options(const struct nbrec_logical_router *,
const struct smap *);
void nbrec_logical_router_index_set_ports(const struct nbrec_logical_router *,
struct nbrec_logical_router_port **ports, size_t n_ports);
void nbrec_logical_router_index_set_static_routes(const struct nbrec_logical_router *,
struct nbrec_logical_router_static_route **static_routes, size_t n_static_routes);

/* Logical_Router_Port table. */
struct nbrec_logical_router_port {
	struct ovsdb_idl_row header_;

	/* enabled column. */
	bool *enabled;
	size_t n_enabled;

	/* external_ids column. */
	struct smap external_ids;

	/* gateway_chassis column. */
	struct nbrec_gateway_chassis **gateway_chassis;
	size_t n_gateway_chassis;

	/* mac column. */
	char *mac;	/* Always nonnull. */

	/* name column. */
	char *name;	/* Always nonnull. */

	/* networks column. */
	char **networks;
	size_t n_networks;

	/* options column. */
	struct smap options;

	/* peer column. */
	char *peer;
};

enum nbrec_logical_router_port_column_id {
    NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED,
    NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_ROUTER_PORT_COL_GATEWAY_CHASSIS,
    NBREC_LOGICAL_ROUTER_PORT_COL_MAC,
    NBREC_LOGICAL_ROUTER_PORT_COL_NAME,
    NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS,
    NBREC_LOGICAL_ROUTER_PORT_COL_OPTIONS,
    NBREC_LOGICAL_ROUTER_PORT_COL_PEER,
    NBREC_LOGICAL_ROUTER_PORT_N_COLUMNS
};

#define nbrec_logical_router_port_col_gateway_chassis (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_GATEWAY_CHASSIS])
#define nbrec_logical_router_port_col_name (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NAME])
#define nbrec_logical_router_port_col_enabled (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED])
#define nbrec_logical_router_port_col_networks (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS])
#define nbrec_logical_router_port_col_mac (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_MAC])
#define nbrec_logical_router_port_col_peer (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER])
#define nbrec_logical_router_port_col_external_ids (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS])
#define nbrec_logical_router_port_col_options (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_OPTIONS])

extern struct ovsdb_idl_column nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_N_COLUMNS];

const struct nbrec_logical_router_port *nbrec_logical_router_port_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_first(const struct ovsdb_idl *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_next(const struct nbrec_logical_router_port *);
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_port_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_port_next(ROW))
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_router_port_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_router_port_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_router_port_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_router_port_row_get_seqno(const struct nbrec_logical_router_port *row, enum ovsdb_idl_change change);
const struct nbrec_logical_router_port *nbrec_logical_router_port_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_track_get_next(const struct nbrec_logical_router_port *);
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_port_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_port_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_logical_router_port_is_new(const struct nbrec_logical_router_port *row)
{
    return nbrec_logical_router_port_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_logical_router_port_is_deleted(const struct nbrec_logical_router_port *row)
{
    return nbrec_logical_router_port_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_logical_router_port_index_destroy_row(const struct nbrec_logical_router_port *);
int nbrec_logical_router_port_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_router_port *, const struct nbrec_logical_router_port *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_router_port *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_router_port *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_logical_router_port_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_logical_router_port_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_logical_router_port_index_next(CURSOR))
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_logical_router_port_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_logical_router_port_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_logical_router_port_index_next(CURSOR))
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_logical_router_port_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_logical_router_port_index_next(CURSOR))

void nbrec_logical_router_port_init(struct nbrec_logical_router_port *);
void nbrec_logical_router_port_delete(const struct nbrec_logical_router_port *);
struct nbrec_logical_router_port *nbrec_logical_router_port_insert(struct ovsdb_idl_txn *);
bool nbrec_logical_router_port_is_updated(const struct nbrec_logical_router_port *, enum nbrec_logical_router_port_column_id);

void nbrec_logical_router_port_verify_enabled(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_external_ids(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_gateway_chassis(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_mac(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_name(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_networks(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_options(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_peer(const struct nbrec_logical_router_port *);

const struct ovsdb_datum *nbrec_logical_router_port_get_enabled(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_external_ids(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_gateway_chassis(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_mac(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_name(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_networks(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_options(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_peer(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);

void nbrec_logical_router_port_set_enabled(const struct nbrec_logical_router_port *, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_port_set_external_ids(const struct nbrec_logical_router_port *, const struct smap *);
void nbrec_logical_router_port_set_gateway_chassis(const struct nbrec_logical_router_port *, struct nbrec_gateway_chassis **gateway_chassis, size_t n_gateway_chassis);
void nbrec_logical_router_port_set_mac(const struct nbrec_logical_router_port *, const char *mac);
void nbrec_logical_router_port_set_name(const struct nbrec_logical_router_port *, const char *name);
void nbrec_logical_router_port_set_networks(const struct nbrec_logical_router_port *, const char **networks, size_t n_networks);
void nbrec_logical_router_port_set_options(const struct nbrec_logical_router_port *, const struct smap *);
void nbrec_logical_router_port_set_peer(const struct nbrec_logical_router_port *, const char *peer);

void nbrec_logical_router_port_update_enabled_addvalue(const struct nbrec_logical_router_port *,  bool );
void nbrec_logical_router_port_update_enabled_delvalue(const struct nbrec_logical_router_port *,  bool );
void nbrec_logical_router_port_add_clause_enabled(struct ovsdb_idl_condition *, enum ovsdb_function function, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_port_update_external_ids_setkey(const struct nbrec_logical_router_port *,  const char *, const char *);
void nbrec_logical_router_port_update_external_ids_delkey(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_logical_router_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_port_update_gateway_chassis_addvalue(const struct nbrec_logical_router_port *,  const struct nbrec_gateway_chassis *);
void nbrec_logical_router_port_update_gateway_chassis_delvalue(const struct nbrec_logical_router_port *,  const struct nbrec_gateway_chassis *);
void nbrec_logical_router_port_add_clause_gateway_chassis(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **gateway_chassis, size_t n_gateway_chassis);
void nbrec_logical_router_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_port_add_clause_mac(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *mac);
void nbrec_logical_router_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_port_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void nbrec_logical_router_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_port_update_networks_addvalue(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_update_networks_delvalue(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_add_clause_networks(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **networks, size_t n_networks);
void nbrec_logical_router_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_port_update_options_setkey(const struct nbrec_logical_router_port *,  const char *, const char *);
void nbrec_logical_router_port_update_options_delkey(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_add_clause_options(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_logical_router_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_port_update_peer_addvalue(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_update_peer_delvalue(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_add_clause_peer(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *peer);
void nbrec_logical_router_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_logical_router_port * nbrec_logical_router_port_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_logical_router_port_index_set_enabled(const struct nbrec_logical_router_port *,
const bool *enabled, size_t n_enabled);
void nbrec_logical_router_port_index_set_external_ids(const struct nbrec_logical_router_port *,
const struct smap *);
void nbrec_logical_router_port_index_set_gateway_chassis(const struct nbrec_logical_router_port *,
struct nbrec_gateway_chassis **gateway_chassis, size_t n_gateway_chassis);
void nbrec_logical_router_port_index_set_mac(const struct nbrec_logical_router_port *,
const char *mac);
void nbrec_logical_router_port_index_set_name(const struct nbrec_logical_router_port *,
const char *name);
void nbrec_logical_router_port_index_set_networks(const struct nbrec_logical_router_port *,
const char **networks, size_t n_networks);
void nbrec_logical_router_port_index_set_options(const struct nbrec_logical_router_port *,
const struct smap *);
void nbrec_logical_router_port_index_set_peer(const struct nbrec_logical_router_port *,
const char *peer);

/* Logical_Router_Static_Route table. */
struct nbrec_logical_router_static_route {
	struct ovsdb_idl_row header_;

	/* ip_prefix column. */
	char *ip_prefix;	/* Always nonnull. */

	/* nexthop column. */
	char *nexthop;	/* Always nonnull. */

	/* output_port column. */
	char *output_port;

	/* policy column. */
	char *policy;
};

enum nbrec_logical_router_static_route_column_id {
    NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_IP_PREFIX,
    NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_NEXTHOP,
    NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT,
    NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_POLICY,
    NBREC_LOGICAL_ROUTER_STATIC_ROUTE_N_COLUMNS
};

#define nbrec_logical_router_static_route_col_output_port (nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT])
#define nbrec_logical_router_static_route_col_policy (nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_POLICY])
#define nbrec_logical_router_static_route_col_ip_prefix (nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_IP_PREFIX])
#define nbrec_logical_router_static_route_col_nexthop (nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_NEXTHOP])

extern struct ovsdb_idl_column nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_N_COLUMNS];

const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_first(const struct ovsdb_idl *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_next(const struct nbrec_logical_router_static_route *);
#define NBREC_LOGICAL_ROUTER_STATIC_ROUTE_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_static_route_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_static_route_next(ROW))
#define NBREC_LOGICAL_ROUTER_STATIC_ROUTE_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_router_static_route_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_router_static_route_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_router_static_route_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_router_static_route_row_get_seqno(const struct nbrec_logical_router_static_route *row, enum ovsdb_idl_change change);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_track_get_next(const struct nbrec_logical_router_static_route *);
#define NBREC_LOGICAL_ROUTER_STATIC_ROUTE_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_static_route_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_static_route_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_logical_router_static_route_is_new(const struct nbrec_logical_router_static_route *row)
{
    return nbrec_logical_router_static_route_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_logical_router_static_route_is_deleted(const struct nbrec_logical_router_static_route *row)
{
    return nbrec_logical_router_static_route_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_logical_router_static_route_index_destroy_row(const struct nbrec_logical_router_static_route *);
int nbrec_logical_router_static_route_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_router_static_route *, const struct nbrec_logical_router_static_route *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_router_static_route *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_router_static_route *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_LOGICAL_ROUTER_STATIC_ROUTE_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_logical_router_static_route_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_logical_router_static_route_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_logical_router_static_route_index_next(CURSOR))
#define NBREC_LOGICAL_ROUTER_STATIC_ROUTE_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_logical_router_static_route_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_logical_router_static_route_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_logical_router_static_route_index_next(CURSOR))
#define NBREC_LOGICAL_ROUTER_STATIC_ROUTE_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_logical_router_static_route_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_logical_router_static_route_index_next(CURSOR))

void nbrec_logical_router_static_route_init(struct nbrec_logical_router_static_route *);
void nbrec_logical_router_static_route_delete(const struct nbrec_logical_router_static_route *);
struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_insert(struct ovsdb_idl_txn *);
bool nbrec_logical_router_static_route_is_updated(const struct nbrec_logical_router_static_route *, enum nbrec_logical_router_static_route_column_id);

void nbrec_logical_router_static_route_verify_ip_prefix(const struct nbrec_logical_router_static_route *);
void nbrec_logical_router_static_route_verify_nexthop(const struct nbrec_logical_router_static_route *);
void nbrec_logical_router_static_route_verify_output_port(const struct nbrec_logical_router_static_route *);
void nbrec_logical_router_static_route_verify_policy(const struct nbrec_logical_router_static_route *);

const struct ovsdb_datum *nbrec_logical_router_static_route_get_ip_prefix(const struct nbrec_logical_router_static_route *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_static_route_get_nexthop(const struct nbrec_logical_router_static_route *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_static_route_get_output_port(const struct nbrec_logical_router_static_route *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_static_route_get_policy(const struct nbrec_logical_router_static_route *, enum ovsdb_atomic_type key_type);

void nbrec_logical_router_static_route_set_ip_prefix(const struct nbrec_logical_router_static_route *, const char *ip_prefix);
void nbrec_logical_router_static_route_set_nexthop(const struct nbrec_logical_router_static_route *, const char *nexthop);
void nbrec_logical_router_static_route_set_output_port(const struct nbrec_logical_router_static_route *, const char *output_port);
void nbrec_logical_router_static_route_set_policy(const struct nbrec_logical_router_static_route *, const char *policy);

void nbrec_logical_router_static_route_add_clause_ip_prefix(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ip_prefix);
void nbrec_logical_router_static_route_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_static_route_add_clause_nexthop(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *nexthop);
void nbrec_logical_router_static_route_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_static_route_update_output_port_addvalue(const struct nbrec_logical_router_static_route *,  const char *);
void nbrec_logical_router_static_route_update_output_port_delvalue(const struct nbrec_logical_router_static_route *,  const char *);
void nbrec_logical_router_static_route_add_clause_output_port(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *output_port);
void nbrec_logical_router_static_route_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_router_static_route_update_policy_addvalue(const struct nbrec_logical_router_static_route *,  const char *);
void nbrec_logical_router_static_route_update_policy_delvalue(const struct nbrec_logical_router_static_route *,  const char *);
void nbrec_logical_router_static_route_add_clause_policy(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *policy);
void nbrec_logical_router_static_route_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_logical_router_static_route * nbrec_logical_router_static_route_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_logical_router_static_route_index_set_ip_prefix(const struct nbrec_logical_router_static_route *,
const char *ip_prefix);
void nbrec_logical_router_static_route_index_set_nexthop(const struct nbrec_logical_router_static_route *,
const char *nexthop);
void nbrec_logical_router_static_route_index_set_output_port(const struct nbrec_logical_router_static_route *,
const char *output_port);
void nbrec_logical_router_static_route_index_set_policy(const struct nbrec_logical_router_static_route *,
const char *policy);

/* Logical_Switch table. */
struct nbrec_logical_switch {
	struct ovsdb_idl_row header_;

	/* acls column. */
	struct nbrec_acl **acls;
	size_t n_acls;

	/* dns_records column. */
	struct nbrec_dns **dns_records;
	size_t n_dns_records;

	/* external_ids column. */
	struct smap external_ids;

	/* load_balancer column. */
	struct nbrec_load_balancer **load_balancer;
	size_t n_load_balancer;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* other_config column. */
	struct smap other_config;

	/* ports column. */
	struct nbrec_logical_switch_port **ports;
	size_t n_ports;

	/* qos_rules column. */
	struct nbrec_qos **qos_rules;
	size_t n_qos_rules;
};

enum nbrec_logical_switch_column_id {
    NBREC_LOGICAL_SWITCH_COL_ACLS,
    NBREC_LOGICAL_SWITCH_COL_DNS_RECORDS,
    NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER,
    NBREC_LOGICAL_SWITCH_COL_NAME,
    NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG,
    NBREC_LOGICAL_SWITCH_COL_PORTS,
    NBREC_LOGICAL_SWITCH_COL_QOS_RULES,
    NBREC_LOGICAL_SWITCH_N_COLUMNS
};

#define nbrec_logical_switch_col_load_balancer (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER])
#define nbrec_logical_switch_col_name (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_NAME])
#define nbrec_logical_switch_col_other_config (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG])
#define nbrec_logical_switch_col_dns_records (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_DNS_RECORDS])
#define nbrec_logical_switch_col_qos_rules (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_QOS_RULES])
#define nbrec_logical_switch_col_acls (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS])
#define nbrec_logical_switch_col_external_ids (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS])
#define nbrec_logical_switch_col_ports (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS])

extern struct ovsdb_idl_column nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_N_COLUMNS];

const struct nbrec_logical_switch *nbrec_logical_switch_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_switch *nbrec_logical_switch_first(const struct ovsdb_idl *);
const struct nbrec_logical_switch *nbrec_logical_switch_next(const struct nbrec_logical_switch *);
#define NBREC_LOGICAL_SWITCH_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_switch_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_switch_next(ROW))
#define NBREC_LOGICAL_SWITCH_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_switch_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_switch_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_switch_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_switch_row_get_seqno(const struct nbrec_logical_switch *row, enum ovsdb_idl_change change);
const struct nbrec_logical_switch *nbrec_logical_switch_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_switch *nbrec_logical_switch_track_get_next(const struct nbrec_logical_switch *);
#define NBREC_LOGICAL_SWITCH_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_switch_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_switch_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_logical_switch_is_new(const struct nbrec_logical_switch *row)
{
    return nbrec_logical_switch_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_logical_switch_is_deleted(const struct nbrec_logical_switch *row)
{
    return nbrec_logical_switch_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_logical_switch_index_destroy_row(const struct nbrec_logical_switch *);
int nbrec_logical_switch_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_switch *, const struct nbrec_logical_switch *);
const struct nbrec_logical_switch *nbrec_logical_switch_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_logical_switch *nbrec_logical_switch_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_logical_switch *nbrec_logical_switch_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_switch *);
const struct nbrec_logical_switch *nbrec_logical_switch_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_switch *);
const struct nbrec_logical_switch *nbrec_logical_switch_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_LOGICAL_SWITCH_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_logical_switch_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_logical_switch_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_logical_switch_index_next(CURSOR))
#define NBREC_LOGICAL_SWITCH_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_logical_switch_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_logical_switch_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_logical_switch_index_next(CURSOR))
#define NBREC_LOGICAL_SWITCH_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_logical_switch_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_logical_switch_index_next(CURSOR))

void nbrec_logical_switch_init(struct nbrec_logical_switch *);
void nbrec_logical_switch_delete(const struct nbrec_logical_switch *);
struct nbrec_logical_switch *nbrec_logical_switch_insert(struct ovsdb_idl_txn *);
bool nbrec_logical_switch_is_updated(const struct nbrec_logical_switch *, enum nbrec_logical_switch_column_id);

void nbrec_logical_switch_verify_acls(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_dns_records(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_external_ids(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_load_balancer(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_name(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_other_config(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_ports(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_qos_rules(const struct nbrec_logical_switch *);

const struct ovsdb_datum *nbrec_logical_switch_get_acls(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_get_dns_records(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_get_external_ids(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_switch_get_load_balancer(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_get_name(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_get_other_config(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_switch_get_ports(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_get_qos_rules(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);

void nbrec_logical_switch_set_acls(const struct nbrec_logical_switch *, struct nbrec_acl **acls, size_t n_acls);
void nbrec_logical_switch_set_dns_records(const struct nbrec_logical_switch *, struct nbrec_dns **dns_records, size_t n_dns_records);
void nbrec_logical_switch_set_external_ids(const struct nbrec_logical_switch *, const struct smap *);
void nbrec_logical_switch_set_load_balancer(const struct nbrec_logical_switch *, struct nbrec_load_balancer **load_balancer, size_t n_load_balancer);
void nbrec_logical_switch_set_name(const struct nbrec_logical_switch *, const char *name);
void nbrec_logical_switch_set_other_config(const struct nbrec_logical_switch *, const struct smap *);
void nbrec_logical_switch_set_ports(const struct nbrec_logical_switch *, struct nbrec_logical_switch_port **ports, size_t n_ports);
void nbrec_logical_switch_set_qos_rules(const struct nbrec_logical_switch *, struct nbrec_qos **qos_rules, size_t n_qos_rules);

void nbrec_logical_switch_update_acls_addvalue(const struct nbrec_logical_switch *,  const struct nbrec_acl *);
void nbrec_logical_switch_update_acls_delvalue(const struct nbrec_logical_switch *,  const struct nbrec_acl *);
void nbrec_logical_switch_add_clause_acls(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **acls, size_t n_acls);
void nbrec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_update_dns_records_addvalue(const struct nbrec_logical_switch *,  const struct nbrec_dns *);
void nbrec_logical_switch_update_dns_records_delvalue(const struct nbrec_logical_switch *,  const struct nbrec_dns *);
void nbrec_logical_switch_add_clause_dns_records(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **dns_records, size_t n_dns_records);
void nbrec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_update_external_ids_setkey(const struct nbrec_logical_switch *,  const char *, const char *);
void nbrec_logical_switch_update_external_ids_delkey(const struct nbrec_logical_switch *,  const char *);
void nbrec_logical_switch_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_update_load_balancer_addvalue(const struct nbrec_logical_switch *,  const struct nbrec_load_balancer *);
void nbrec_logical_switch_update_load_balancer_delvalue(const struct nbrec_logical_switch *,  const struct nbrec_load_balancer *);
void nbrec_logical_switch_add_clause_load_balancer(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer);
void nbrec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void nbrec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_update_other_config_setkey(const struct nbrec_logical_switch *,  const char *, const char *);
void nbrec_logical_switch_update_other_config_delkey(const struct nbrec_logical_switch *,  const char *);
void nbrec_logical_switch_add_clause_other_config(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_update_ports_addvalue(const struct nbrec_logical_switch *,  const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_update_ports_delvalue(const struct nbrec_logical_switch *,  const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_add_clause_ports(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **ports, size_t n_ports);
void nbrec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_update_qos_rules_addvalue(const struct nbrec_logical_switch *,  const struct nbrec_qos *);
void nbrec_logical_switch_update_qos_rules_delvalue(const struct nbrec_logical_switch *,  const struct nbrec_qos *);
void nbrec_logical_switch_add_clause_qos_rules(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **qos_rules, size_t n_qos_rules);
void nbrec_logical_switch_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_logical_switch * nbrec_logical_switch_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_logical_switch_index_set_acls(const struct nbrec_logical_switch *,
struct nbrec_acl **acls, size_t n_acls);
void nbrec_logical_switch_index_set_dns_records(const struct nbrec_logical_switch *,
struct nbrec_dns **dns_records, size_t n_dns_records);
void nbrec_logical_switch_index_set_external_ids(const struct nbrec_logical_switch *,
const struct smap *);
void nbrec_logical_switch_index_set_load_balancer(const struct nbrec_logical_switch *,
struct nbrec_load_balancer **load_balancer, size_t n_load_balancer);
void nbrec_logical_switch_index_set_name(const struct nbrec_logical_switch *,
const char *name);
void nbrec_logical_switch_index_set_other_config(const struct nbrec_logical_switch *,
const struct smap *);
void nbrec_logical_switch_index_set_ports(const struct nbrec_logical_switch *,
struct nbrec_logical_switch_port **ports, size_t n_ports);
void nbrec_logical_switch_index_set_qos_rules(const struct nbrec_logical_switch *,
struct nbrec_qos **qos_rules, size_t n_qos_rules);

/* Logical_Switch_Port table. */
struct nbrec_logical_switch_port {
	struct ovsdb_idl_row header_;

	/* addresses column. */
	char **addresses;
	size_t n_addresses;

	/* dhcpv4_options column. */
	struct nbrec_dhcp_options *dhcpv4_options;

	/* dhcpv6_options column. */
	struct nbrec_dhcp_options *dhcpv6_options;

	/* dynamic_addresses column. */
	char *dynamic_addresses;

	/* enabled column. */
	bool *enabled;
	size_t n_enabled;

	/* external_ids column. */
	struct smap external_ids;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* options column. */
	struct smap options;

	/* parent_name column. */
	char *parent_name;

	/* port_security column. */
	char **port_security;
	size_t n_port_security;

	/* tag column. */
	int64_t *tag;
	size_t n_tag;

	/* tag_request column. */
	int64_t *tag_request;
	size_t n_tag_request;

	/* type column. */
	char *type;	/* Always nonnull. */

	/* up column. */
	bool *up;
	size_t n_up;
};

enum nbrec_logical_switch_port_column_id {
    NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES,
    NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS,
    NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS,
    NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES,
    NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED,
    NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_SWITCH_PORT_COL_NAME,
    NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS,
    NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME,
    NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY,
    NBREC_LOGICAL_SWITCH_PORT_COL_TAG,
    NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST,
    NBREC_LOGICAL_SWITCH_PORT_COL_TYPE,
    NBREC_LOGICAL_SWITCH_PORT_COL_UP,
    NBREC_LOGICAL_SWITCH_PORT_N_COLUMNS
};

#define nbrec_logical_switch_port_col_parent_name (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME])
#define nbrec_logical_switch_port_col_addresses (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES])
#define nbrec_logical_switch_port_col_enabled (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED])
#define nbrec_logical_switch_port_col_up (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_UP])
#define nbrec_logical_switch_port_col_port_security (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY])
#define nbrec_logical_switch_port_col_dhcpv6_options (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS])
#define nbrec_logical_switch_port_col_tag_request (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST])
#define nbrec_logical_switch_port_col_dynamic_addresses (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES])
#define nbrec_logical_switch_port_col_external_ids (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS])
#define nbrec_logical_switch_port_col_tag (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG])
#define nbrec_logical_switch_port_col_type (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TYPE])
#define nbrec_logical_switch_port_col_options (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS])
#define nbrec_logical_switch_port_col_dhcpv4_options (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS])
#define nbrec_logical_switch_port_col_name (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_NAME])

extern struct ovsdb_idl_column nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_N_COLUMNS];

const struct nbrec_logical_switch_port *nbrec_logical_switch_port_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_first(const struct ovsdb_idl *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_next(const struct nbrec_logical_switch_port *);
#define NBREC_LOGICAL_SWITCH_PORT_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_switch_port_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_switch_port_next(ROW))
#define NBREC_LOGICAL_SWITCH_PORT_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_switch_port_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_switch_port_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_switch_port_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_switch_port_row_get_seqno(const struct nbrec_logical_switch_port *row, enum ovsdb_idl_change change);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_track_get_next(const struct nbrec_logical_switch_port *);
#define NBREC_LOGICAL_SWITCH_PORT_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_switch_port_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_switch_port_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_logical_switch_port_is_new(const struct nbrec_logical_switch_port *row)
{
    return nbrec_logical_switch_port_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_logical_switch_port_is_deleted(const struct nbrec_logical_switch_port *row)
{
    return nbrec_logical_switch_port_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_logical_switch_port_index_destroy_row(const struct nbrec_logical_switch_port *);
int nbrec_logical_switch_port_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_switch_port *, const struct nbrec_logical_switch_port *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_switch_port *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_logical_switch_port *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_LOGICAL_SWITCH_PORT_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_logical_switch_port_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_logical_switch_port_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_logical_switch_port_index_next(CURSOR))
#define NBREC_LOGICAL_SWITCH_PORT_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_logical_switch_port_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_logical_switch_port_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_logical_switch_port_index_next(CURSOR))
#define NBREC_LOGICAL_SWITCH_PORT_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_logical_switch_port_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_logical_switch_port_index_next(CURSOR))

void nbrec_logical_switch_port_init(struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_delete(const struct nbrec_logical_switch_port *);
struct nbrec_logical_switch_port *nbrec_logical_switch_port_insert(struct ovsdb_idl_txn *);
bool nbrec_logical_switch_port_is_updated(const struct nbrec_logical_switch_port *, enum nbrec_logical_switch_port_column_id);

void nbrec_logical_switch_port_verify_addresses(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_dhcpv4_options(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_dhcpv6_options(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_dynamic_addresses(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_enabled(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_external_ids(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_name(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_options(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_parent_name(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_port_security(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_tag(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_tag_request(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_type(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_up(const struct nbrec_logical_switch_port *);

const struct ovsdb_datum *nbrec_logical_switch_port_get_addresses(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_dhcpv4_options(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_dhcpv6_options(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_dynamic_addresses(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_enabled(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_external_ids(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_name(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_options(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_parent_name(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_port_security(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_tag(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_tag_request(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_type(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_up(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);

void nbrec_logical_switch_port_set_addresses(const struct nbrec_logical_switch_port *, const char **addresses, size_t n_addresses);
void nbrec_logical_switch_port_set_dhcpv4_options(const struct nbrec_logical_switch_port *, const struct nbrec_dhcp_options *dhcpv4_options);
void nbrec_logical_switch_port_set_dhcpv6_options(const struct nbrec_logical_switch_port *, const struct nbrec_dhcp_options *dhcpv6_options);
void nbrec_logical_switch_port_set_dynamic_addresses(const struct nbrec_logical_switch_port *, const char *dynamic_addresses);
void nbrec_logical_switch_port_set_enabled(const struct nbrec_logical_switch_port *, const bool *enabled, size_t n_enabled);
void nbrec_logical_switch_port_set_external_ids(const struct nbrec_logical_switch_port *, const struct smap *);
void nbrec_logical_switch_port_set_name(const struct nbrec_logical_switch_port *, const char *name);
void nbrec_logical_switch_port_set_options(const struct nbrec_logical_switch_port *, const struct smap *);
void nbrec_logical_switch_port_set_parent_name(const struct nbrec_logical_switch_port *, const char *parent_name);
void nbrec_logical_switch_port_set_port_security(const struct nbrec_logical_switch_port *, const char **port_security, size_t n_port_security);
void nbrec_logical_switch_port_set_tag(const struct nbrec_logical_switch_port *, const int64_t *tag, size_t n_tag);
void nbrec_logical_switch_port_set_tag_request(const struct nbrec_logical_switch_port *, const int64_t *tag_request, size_t n_tag_request);
void nbrec_logical_switch_port_set_type(const struct nbrec_logical_switch_port *, const char *type);
void nbrec_logical_switch_port_set_up(const struct nbrec_logical_switch_port *, const bool *up, size_t n_up);

void nbrec_logical_switch_port_update_addresses_addvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_update_addresses_delvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_addresses(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **addresses, size_t n_addresses);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_dhcpv4_options_addvalue(const struct nbrec_logical_switch_port *,  const struct nbrec_dhcp_options *);
void nbrec_logical_switch_port_update_dhcpv4_options_delvalue(const struct nbrec_logical_switch_port *,  const struct nbrec_dhcp_options *);
void nbrec_logical_switch_port_add_clause_dhcpv4_options(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *dhcpv4_options);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_dhcpv6_options_addvalue(const struct nbrec_logical_switch_port *,  const struct nbrec_dhcp_options *);
void nbrec_logical_switch_port_update_dhcpv6_options_delvalue(const struct nbrec_logical_switch_port *,  const struct nbrec_dhcp_options *);
void nbrec_logical_switch_port_add_clause_dhcpv6_options(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *dhcpv6_options);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_dynamic_addresses_addvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_update_dynamic_addresses_delvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_dynamic_addresses(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *dynamic_addresses);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_enabled_addvalue(const struct nbrec_logical_switch_port *,  bool );
void nbrec_logical_switch_port_update_enabled_delvalue(const struct nbrec_logical_switch_port *,  bool );
void nbrec_logical_switch_port_add_clause_enabled(struct ovsdb_idl_condition *, enum ovsdb_function function, const bool *enabled, size_t n_enabled);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_external_ids_setkey(const struct nbrec_logical_switch_port *,  const char *, const char *);
void nbrec_logical_switch_port_update_external_ids_delkey(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_options_setkey(const struct nbrec_logical_switch_port *,  const char *, const char *);
void nbrec_logical_switch_port_update_options_delkey(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_options(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_parent_name_addvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_update_parent_name_delvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_parent_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *parent_name);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_port_security_addvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_update_port_security_delvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_port_security(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **port_security, size_t n_port_security);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_tag_addvalue(const struct nbrec_logical_switch_port *,  int64_t );
void nbrec_logical_switch_port_update_tag_delvalue(const struct nbrec_logical_switch_port *,  int64_t );
void nbrec_logical_switch_port_add_clause_tag(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *tag, size_t n_tag);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_tag_request_addvalue(const struct nbrec_logical_switch_port *,  int64_t );
void nbrec_logical_switch_port_update_tag_request_delvalue(const struct nbrec_logical_switch_port *,  int64_t );
void nbrec_logical_switch_port_add_clause_tag_request(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *tag_request, size_t n_tag_request);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_add_clause_type(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *type);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_logical_switch_port_update_up_addvalue(const struct nbrec_logical_switch_port *,  bool );
void nbrec_logical_switch_port_update_up_delvalue(const struct nbrec_logical_switch_port *,  bool );
void nbrec_logical_switch_port_add_clause_up(struct ovsdb_idl_condition *, enum ovsdb_function function, const bool *up, size_t n_up);
void nbrec_logical_switch_port_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_logical_switch_port * nbrec_logical_switch_port_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_logical_switch_port_index_set_addresses(const struct nbrec_logical_switch_port *,
const char **addresses, size_t n_addresses);
void nbrec_logical_switch_port_index_set_dhcpv4_options(const struct nbrec_logical_switch_port *,
const struct nbrec_dhcp_options *dhcpv4_options);
void nbrec_logical_switch_port_index_set_dhcpv6_options(const struct nbrec_logical_switch_port *,
const struct nbrec_dhcp_options *dhcpv6_options);
void nbrec_logical_switch_port_index_set_dynamic_addresses(const struct nbrec_logical_switch_port *,
const char *dynamic_addresses);
void nbrec_logical_switch_port_index_set_enabled(const struct nbrec_logical_switch_port *,
const bool *enabled, size_t n_enabled);
void nbrec_logical_switch_port_index_set_external_ids(const struct nbrec_logical_switch_port *,
const struct smap *);
void nbrec_logical_switch_port_index_set_name(const struct nbrec_logical_switch_port *,
const char *name);
void nbrec_logical_switch_port_index_set_options(const struct nbrec_logical_switch_port *,
const struct smap *);
void nbrec_logical_switch_port_index_set_parent_name(const struct nbrec_logical_switch_port *,
const char *parent_name);
void nbrec_logical_switch_port_index_set_port_security(const struct nbrec_logical_switch_port *,
const char **port_security, size_t n_port_security);
void nbrec_logical_switch_port_index_set_tag(const struct nbrec_logical_switch_port *,
const int64_t *tag, size_t n_tag);
void nbrec_logical_switch_port_index_set_tag_request(const struct nbrec_logical_switch_port *,
const int64_t *tag_request, size_t n_tag_request);
void nbrec_logical_switch_port_index_set_type(const struct nbrec_logical_switch_port *,
const char *type);
void nbrec_logical_switch_port_index_set_up(const struct nbrec_logical_switch_port *,
const bool *up, size_t n_up);

/* NAT table. */
struct nbrec_nat {
	struct ovsdb_idl_row header_;

	/* external_ip column. */
	char *external_ip;	/* Always nonnull. */

	/* external_mac column. */
	char *external_mac;

	/* logical_ip column. */
	char *logical_ip;	/* Always nonnull. */

	/* logical_port column. */
	char *logical_port;

	/* type column. */
	char *type;	/* Always nonnull. */
};

enum nbrec_nat_column_id {
    NBREC_NAT_COL_EXTERNAL_IP,
    NBREC_NAT_COL_EXTERNAL_MAC,
    NBREC_NAT_COL_LOGICAL_IP,
    NBREC_NAT_COL_LOGICAL_PORT,
    NBREC_NAT_COL_TYPE,
    NBREC_NAT_N_COLUMNS
};

#define nbrec_nat_col_external_ip (nbrec_nat_columns[NBREC_NAT_COL_EXTERNAL_IP])
#define nbrec_nat_col_logical_port (nbrec_nat_columns[NBREC_NAT_COL_LOGICAL_PORT])
#define nbrec_nat_col_type (nbrec_nat_columns[NBREC_NAT_COL_TYPE])
#define nbrec_nat_col_external_mac (nbrec_nat_columns[NBREC_NAT_COL_EXTERNAL_MAC])
#define nbrec_nat_col_logical_ip (nbrec_nat_columns[NBREC_NAT_COL_LOGICAL_IP])

extern struct ovsdb_idl_column nbrec_nat_columns[NBREC_NAT_N_COLUMNS];

const struct nbrec_nat *nbrec_nat_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_nat *nbrec_nat_first(const struct ovsdb_idl *);
const struct nbrec_nat *nbrec_nat_next(const struct nbrec_nat *);
#define NBREC_NAT_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_nat_first(IDL); \
             (ROW); \
             (ROW) = nbrec_nat_next(ROW))
#define NBREC_NAT_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_nat_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_nat_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_nat_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_nat_row_get_seqno(const struct nbrec_nat *row, enum ovsdb_idl_change change);
const struct nbrec_nat *nbrec_nat_track_get_first(const struct ovsdb_idl *);
const struct nbrec_nat *nbrec_nat_track_get_next(const struct nbrec_nat *);
#define NBREC_NAT_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_nat_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_nat_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_nat_is_new(const struct nbrec_nat *row)
{
    return nbrec_nat_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_nat_is_deleted(const struct nbrec_nat *row)
{
    return nbrec_nat_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_nat_index_destroy_row(const struct nbrec_nat *);
int nbrec_nat_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_nat *, const struct nbrec_nat *);
const struct nbrec_nat *nbrec_nat_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_nat *nbrec_nat_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_nat *nbrec_nat_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_nat *);
const struct nbrec_nat *nbrec_nat_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_nat *);
const struct nbrec_nat *nbrec_nat_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_NAT_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_nat_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_nat_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_nat_index_next(CURSOR))
#define NBREC_NAT_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_nat_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_nat_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_nat_index_next(CURSOR))
#define NBREC_NAT_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_nat_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_nat_index_next(CURSOR))

void nbrec_nat_init(struct nbrec_nat *);
void nbrec_nat_delete(const struct nbrec_nat *);
struct nbrec_nat *nbrec_nat_insert(struct ovsdb_idl_txn *);
bool nbrec_nat_is_updated(const struct nbrec_nat *, enum nbrec_nat_column_id);

void nbrec_nat_verify_external_ip(const struct nbrec_nat *);
void nbrec_nat_verify_external_mac(const struct nbrec_nat *);
void nbrec_nat_verify_logical_ip(const struct nbrec_nat *);
void nbrec_nat_verify_logical_port(const struct nbrec_nat *);
void nbrec_nat_verify_type(const struct nbrec_nat *);

const struct ovsdb_datum *nbrec_nat_get_external_ip(const struct nbrec_nat *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nat_get_external_mac(const struct nbrec_nat *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nat_get_logical_ip(const struct nbrec_nat *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nat_get_logical_port(const struct nbrec_nat *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nat_get_type(const struct nbrec_nat *, enum ovsdb_atomic_type key_type);

void nbrec_nat_set_external_ip(const struct nbrec_nat *, const char *external_ip);
void nbrec_nat_set_external_mac(const struct nbrec_nat *, const char *external_mac);
void nbrec_nat_set_logical_ip(const struct nbrec_nat *, const char *logical_ip);
void nbrec_nat_set_logical_port(const struct nbrec_nat *, const char *logical_port);
void nbrec_nat_set_type(const struct nbrec_nat *, const char *type);

void nbrec_nat_add_clause_external_ip(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *external_ip);
void nbrec_nat_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_nat_update_external_mac_addvalue(const struct nbrec_nat *,  const char *);
void nbrec_nat_update_external_mac_delvalue(const struct nbrec_nat *,  const char *);
void nbrec_nat_add_clause_external_mac(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *external_mac);
void nbrec_nat_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_nat_add_clause_logical_ip(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *logical_ip);
void nbrec_nat_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_nat_update_logical_port_addvalue(const struct nbrec_nat *,  const char *);
void nbrec_nat_update_logical_port_delvalue(const struct nbrec_nat *,  const char *);
void nbrec_nat_add_clause_logical_port(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *logical_port);
void nbrec_nat_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_nat_add_clause_type(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *type);
void nbrec_nat_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_nat * nbrec_nat_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_nat_index_set_external_ip(const struct nbrec_nat *,
const char *external_ip);
void nbrec_nat_index_set_external_mac(const struct nbrec_nat *,
const char *external_mac);
void nbrec_nat_index_set_logical_ip(const struct nbrec_nat *,
const char *logical_ip);
void nbrec_nat_index_set_logical_port(const struct nbrec_nat *,
const char *logical_port);
void nbrec_nat_index_set_type(const struct nbrec_nat *,
const char *type);

/* NB_Global table. */
struct nbrec_nb_global {
	struct ovsdb_idl_row header_;

	/* connections column. */
	struct nbrec_connection **connections;
	size_t n_connections;

	/* external_ids column. */
	struct smap external_ids;

	/* hv_cfg column. */
	int64_t hv_cfg;

	/* nb_cfg column. */
	int64_t nb_cfg;

	/* sb_cfg column. */
	int64_t sb_cfg;

	/* ssl column. */
	struct nbrec_ssl *ssl;
};

enum nbrec_nb_global_column_id {
    NBREC_NB_GLOBAL_COL_CONNECTIONS,
    NBREC_NB_GLOBAL_COL_EXTERNAL_IDS,
    NBREC_NB_GLOBAL_COL_HV_CFG,
    NBREC_NB_GLOBAL_COL_NB_CFG,
    NBREC_NB_GLOBAL_COL_SB_CFG,
    NBREC_NB_GLOBAL_COL_SSL,
    NBREC_NB_GLOBAL_N_COLUMNS
};

#define nbrec_nb_global_col_nb_cfg (nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_NB_CFG])
#define nbrec_nb_global_col_connections (nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_CONNECTIONS])
#define nbrec_nb_global_col_ssl (nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_SSL])
#define nbrec_nb_global_col_sb_cfg (nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_SB_CFG])
#define nbrec_nb_global_col_hv_cfg (nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_HV_CFG])
#define nbrec_nb_global_col_external_ids (nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_EXTERNAL_IDS])

extern struct ovsdb_idl_column nbrec_nb_global_columns[NBREC_NB_GLOBAL_N_COLUMNS];

const struct nbrec_nb_global *nbrec_nb_global_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_nb_global *nbrec_nb_global_first(const struct ovsdb_idl *);
const struct nbrec_nb_global *nbrec_nb_global_next(const struct nbrec_nb_global *);
#define NBREC_NB_GLOBAL_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_nb_global_first(IDL); \
             (ROW); \
             (ROW) = nbrec_nb_global_next(ROW))
#define NBREC_NB_GLOBAL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_nb_global_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_nb_global_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_nb_global_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_nb_global_row_get_seqno(const struct nbrec_nb_global *row, enum ovsdb_idl_change change);
const struct nbrec_nb_global *nbrec_nb_global_track_get_first(const struct ovsdb_idl *);
const struct nbrec_nb_global *nbrec_nb_global_track_get_next(const struct nbrec_nb_global *);
#define NBREC_NB_GLOBAL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_nb_global_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_nb_global_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_nb_global_is_new(const struct nbrec_nb_global *row)
{
    return nbrec_nb_global_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_nb_global_is_deleted(const struct nbrec_nb_global *row)
{
    return nbrec_nb_global_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_nb_global_index_destroy_row(const struct nbrec_nb_global *);
int nbrec_nb_global_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_nb_global *, const struct nbrec_nb_global *);
const struct nbrec_nb_global *nbrec_nb_global_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_nb_global *nbrec_nb_global_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_nb_global *nbrec_nb_global_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_nb_global *);
const struct nbrec_nb_global *nbrec_nb_global_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_nb_global *);
const struct nbrec_nb_global *nbrec_nb_global_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_NB_GLOBAL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_nb_global_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_nb_global_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_nb_global_index_next(CURSOR))
#define NBREC_NB_GLOBAL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_nb_global_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_nb_global_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_nb_global_index_next(CURSOR))
#define NBREC_NB_GLOBAL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_nb_global_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_nb_global_index_next(CURSOR))

void nbrec_nb_global_init(struct nbrec_nb_global *);
void nbrec_nb_global_delete(const struct nbrec_nb_global *);
struct nbrec_nb_global *nbrec_nb_global_insert(struct ovsdb_idl_txn *);
bool nbrec_nb_global_is_updated(const struct nbrec_nb_global *, enum nbrec_nb_global_column_id);

void nbrec_nb_global_verify_connections(const struct nbrec_nb_global *);
void nbrec_nb_global_verify_external_ids(const struct nbrec_nb_global *);
void nbrec_nb_global_verify_hv_cfg(const struct nbrec_nb_global *);
void nbrec_nb_global_verify_nb_cfg(const struct nbrec_nb_global *);
void nbrec_nb_global_verify_sb_cfg(const struct nbrec_nb_global *);
void nbrec_nb_global_verify_ssl(const struct nbrec_nb_global *);

const struct ovsdb_datum *nbrec_nb_global_get_connections(const struct nbrec_nb_global *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nb_global_get_external_ids(const struct nbrec_nb_global *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_nb_global_get_hv_cfg(const struct nbrec_nb_global *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nb_global_get_nb_cfg(const struct nbrec_nb_global *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nb_global_get_sb_cfg(const struct nbrec_nb_global *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nb_global_get_ssl(const struct nbrec_nb_global *, enum ovsdb_atomic_type key_type);

void nbrec_nb_global_set_connections(const struct nbrec_nb_global *, struct nbrec_connection **connections, size_t n_connections);
void nbrec_nb_global_set_external_ids(const struct nbrec_nb_global *, const struct smap *);
void nbrec_nb_global_set_hv_cfg(const struct nbrec_nb_global *, int64_t hv_cfg);
void nbrec_nb_global_set_nb_cfg(const struct nbrec_nb_global *, int64_t nb_cfg);
void nbrec_nb_global_set_sb_cfg(const struct nbrec_nb_global *, int64_t sb_cfg);
void nbrec_nb_global_set_ssl(const struct nbrec_nb_global *, const struct nbrec_ssl *ssl);

void nbrec_nb_global_update_connections_addvalue(const struct nbrec_nb_global *,  const struct nbrec_connection *);
void nbrec_nb_global_update_connections_delvalue(const struct nbrec_nb_global *,  const struct nbrec_connection *);
void nbrec_nb_global_add_clause_connections(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **connections, size_t n_connections);
void nbrec_nb_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_nb_global_update_external_ids_setkey(const struct nbrec_nb_global *,  const char *, const char *);
void nbrec_nb_global_update_external_ids_delkey(const struct nbrec_nb_global *,  const char *);
void nbrec_nb_global_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_nb_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_nb_global_add_clause_hv_cfg(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t hv_cfg);
void nbrec_nb_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_nb_global_add_clause_nb_cfg(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t nb_cfg);
void nbrec_nb_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_nb_global_add_clause_sb_cfg(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t sb_cfg);
void nbrec_nb_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_nb_global_update_ssl_addvalue(const struct nbrec_nb_global *,  const struct nbrec_ssl *);
void nbrec_nb_global_update_ssl_delvalue(const struct nbrec_nb_global *,  const struct nbrec_ssl *);
void nbrec_nb_global_add_clause_ssl(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *ssl);
void nbrec_nb_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_nb_global * nbrec_nb_global_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_nb_global_index_set_connections(const struct nbrec_nb_global *,
struct nbrec_connection **connections, size_t n_connections);
void nbrec_nb_global_index_set_external_ids(const struct nbrec_nb_global *,
const struct smap *);
void nbrec_nb_global_index_set_hv_cfg(const struct nbrec_nb_global *,
int64_t hv_cfg);
void nbrec_nb_global_index_set_nb_cfg(const struct nbrec_nb_global *,
int64_t nb_cfg);
void nbrec_nb_global_index_set_sb_cfg(const struct nbrec_nb_global *,
int64_t sb_cfg);
void nbrec_nb_global_index_set_ssl(const struct nbrec_nb_global *,
const struct nbrec_ssl *ssl);

/* QoS table. */
struct nbrec_qos {
	struct ovsdb_idl_row header_;

	/* action column. */
	char *key_action;
	int64_t value_action;

	/* direction column. */
	char *direction;	/* Always nonnull. */

	/* external_ids column. */
	struct smap external_ids;

	/* match column. */
	char *match;	/* Always nonnull. */

	/* priority column. */
	int64_t priority;
};

enum nbrec_qos_column_id {
    NBREC_QOS_COL_ACTION,
    NBREC_QOS_COL_DIRECTION,
    NBREC_QOS_COL_EXTERNAL_IDS,
    NBREC_QOS_COL_MATCH,
    NBREC_QOS_COL_PRIORITY,
    NBREC_QOS_N_COLUMNS
};

#define nbrec_qos_col_action (nbrec_qos_columns[NBREC_QOS_COL_ACTION])
#define nbrec_qos_col_priority (nbrec_qos_columns[NBREC_QOS_COL_PRIORITY])
#define nbrec_qos_col_direction (nbrec_qos_columns[NBREC_QOS_COL_DIRECTION])
#define nbrec_qos_col_external_ids (nbrec_qos_columns[NBREC_QOS_COL_EXTERNAL_IDS])
#define nbrec_qos_col_match (nbrec_qos_columns[NBREC_QOS_COL_MATCH])

extern struct ovsdb_idl_column nbrec_qos_columns[NBREC_QOS_N_COLUMNS];

const struct nbrec_qos *nbrec_qos_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_qos *nbrec_qos_first(const struct ovsdb_idl *);
const struct nbrec_qos *nbrec_qos_next(const struct nbrec_qos *);
#define NBREC_QOS_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_qos_first(IDL); \
             (ROW); \
             (ROW) = nbrec_qos_next(ROW))
#define NBREC_QOS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_qos_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_qos_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_qos_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_qos_row_get_seqno(const struct nbrec_qos *row, enum ovsdb_idl_change change);
const struct nbrec_qos *nbrec_qos_track_get_first(const struct ovsdb_idl *);
const struct nbrec_qos *nbrec_qos_track_get_next(const struct nbrec_qos *);
#define NBREC_QOS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_qos_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_qos_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_qos_is_new(const struct nbrec_qos *row)
{
    return nbrec_qos_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_qos_is_deleted(const struct nbrec_qos *row)
{
    return nbrec_qos_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_qos_index_destroy_row(const struct nbrec_qos *);
int nbrec_qos_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_qos *, const struct nbrec_qos *);
const struct nbrec_qos *nbrec_qos_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_qos *nbrec_qos_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_qos *nbrec_qos_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_qos *);
const struct nbrec_qos *nbrec_qos_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_qos *);
const struct nbrec_qos *nbrec_qos_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_QOS_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_qos_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_qos_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_qos_index_next(CURSOR))
#define NBREC_QOS_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_qos_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_qos_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_qos_index_next(CURSOR))
#define NBREC_QOS_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_qos_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_qos_index_next(CURSOR))

void nbrec_qos_init(struct nbrec_qos *);
void nbrec_qos_delete(const struct nbrec_qos *);
struct nbrec_qos *nbrec_qos_insert(struct ovsdb_idl_txn *);
bool nbrec_qos_is_updated(const struct nbrec_qos *, enum nbrec_qos_column_id);

void nbrec_qos_verify_action(const struct nbrec_qos *);
void nbrec_qos_verify_direction(const struct nbrec_qos *);
void nbrec_qos_verify_external_ids(const struct nbrec_qos *);
void nbrec_qos_verify_match(const struct nbrec_qos *);
void nbrec_qos_verify_priority(const struct nbrec_qos *);

const struct ovsdb_datum *nbrec_qos_get_action(const struct nbrec_qos *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_qos_get_direction(const struct nbrec_qos *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_qos_get_external_ids(const struct nbrec_qos *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_qos_get_match(const struct nbrec_qos *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_qos_get_priority(const struct nbrec_qos *, enum ovsdb_atomic_type key_type);

void nbrec_qos_set_action(const struct nbrec_qos *, const char *key_action, int64_t value_action);
void nbrec_qos_set_direction(const struct nbrec_qos *, const char *direction);
void nbrec_qos_set_external_ids(const struct nbrec_qos *, const struct smap *);
void nbrec_qos_set_match(const struct nbrec_qos *, const char *match);
void nbrec_qos_set_priority(const struct nbrec_qos *, int64_t priority);

void nbrec_qos_update_action_setkey(const struct nbrec_qos *,  const char *, int64_t );
void nbrec_qos_update_action_delkey(const struct nbrec_qos *,  const char *);
void nbrec_qos_add_clause_action(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *key_action, int64_t value_action);
void nbrec_qos_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_qos_add_clause_direction(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *direction);
void nbrec_qos_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_qos_update_external_ids_setkey(const struct nbrec_qos *,  const char *, const char *);
void nbrec_qos_update_external_ids_delkey(const struct nbrec_qos *,  const char *);
void nbrec_qos_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_qos_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_qos_add_clause_match(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *match);
void nbrec_qos_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_qos_add_clause_priority(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t priority);
void nbrec_qos_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_qos * nbrec_qos_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_qos_index_set_action(const struct nbrec_qos *,
const char *key_action, int64_t value_action);
void nbrec_qos_index_set_direction(const struct nbrec_qos *,
const char *direction);
void nbrec_qos_index_set_external_ids(const struct nbrec_qos *,
const struct smap *);
void nbrec_qos_index_set_match(const struct nbrec_qos *,
const char *match);
void nbrec_qos_index_set_priority(const struct nbrec_qos *,
int64_t priority);

/* SSL table. */
struct nbrec_ssl {
	struct ovsdb_idl_row header_;

	/* bootstrap_ca_cert column. */
	bool bootstrap_ca_cert;

	/* ca_cert column. */
	char *ca_cert;	/* Always nonnull. */

	/* certificate column. */
	char *certificate;	/* Always nonnull. */

	/* external_ids column. */
	struct smap external_ids;

	/* private_key column. */
	char *private_key;	/* Always nonnull. */

	/* ssl_ciphers column. */
	char *ssl_ciphers;	/* Always nonnull. */

	/* ssl_protocols column. */
	char *ssl_protocols;	/* Always nonnull. */
};

enum nbrec_ssl_column_id {
    NBREC_SSL_COL_BOOTSTRAP_CA_CERT,
    NBREC_SSL_COL_CA_CERT,
    NBREC_SSL_COL_CERTIFICATE,
    NBREC_SSL_COL_EXTERNAL_IDS,
    NBREC_SSL_COL_PRIVATE_KEY,
    NBREC_SSL_COL_SSL_CIPHERS,
    NBREC_SSL_COL_SSL_PROTOCOLS,
    NBREC_SSL_N_COLUMNS
};

#define nbrec_ssl_col_private_key (nbrec_ssl_columns[NBREC_SSL_COL_PRIVATE_KEY])
#define nbrec_ssl_col_ca_cert (nbrec_ssl_columns[NBREC_SSL_COL_CA_CERT])
#define nbrec_ssl_col_certificate (nbrec_ssl_columns[NBREC_SSL_COL_CERTIFICATE])
#define nbrec_ssl_col_ssl_ciphers (nbrec_ssl_columns[NBREC_SSL_COL_SSL_CIPHERS])
#define nbrec_ssl_col_bootstrap_ca_cert (nbrec_ssl_columns[NBREC_SSL_COL_BOOTSTRAP_CA_CERT])
#define nbrec_ssl_col_ssl_protocols (nbrec_ssl_columns[NBREC_SSL_COL_SSL_PROTOCOLS])
#define nbrec_ssl_col_external_ids (nbrec_ssl_columns[NBREC_SSL_COL_EXTERNAL_IDS])

extern struct ovsdb_idl_column nbrec_ssl_columns[NBREC_SSL_N_COLUMNS];

const struct nbrec_ssl *nbrec_ssl_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_ssl *nbrec_ssl_first(const struct ovsdb_idl *);
const struct nbrec_ssl *nbrec_ssl_next(const struct nbrec_ssl *);
#define NBREC_SSL_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_ssl_first(IDL); \
             (ROW); \
             (ROW) = nbrec_ssl_next(ROW))
#define NBREC_SSL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_ssl_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_ssl_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_ssl_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_ssl_row_get_seqno(const struct nbrec_ssl *row, enum ovsdb_idl_change change);
const struct nbrec_ssl *nbrec_ssl_track_get_first(const struct ovsdb_idl *);
const struct nbrec_ssl *nbrec_ssl_track_get_next(const struct nbrec_ssl *);
#define NBREC_SSL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_ssl_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_ssl_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_ssl_is_new(const struct nbrec_ssl *row)
{
    return nbrec_ssl_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_ssl_is_deleted(const struct nbrec_ssl *row)
{
    return nbrec_ssl_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_ssl_index_destroy_row(const struct nbrec_ssl *);
int nbrec_ssl_index_compare(struct ovsdb_idl_index_cursor *, const struct nbrec_ssl *, const struct nbrec_ssl *);
const struct nbrec_ssl *nbrec_ssl_index_first(struct ovsdb_idl_index_cursor *);
const struct nbrec_ssl *nbrec_ssl_index_next(struct ovsdb_idl_index_cursor *);
const struct nbrec_ssl *nbrec_ssl_index_find(struct ovsdb_idl_index_cursor *, const struct nbrec_ssl *);
const struct nbrec_ssl *nbrec_ssl_index_forward_to(struct ovsdb_idl_index_cursor *, const struct nbrec_ssl *);
const struct nbrec_ssl *nbrec_ssl_index_get_data(const struct ovsdb_idl_index_cursor *);
#define NBREC_SSL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = nbrec_ssl_index_forward_to(CURSOR, FROM); \
             ((ROW) && nbrec_ssl_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = nbrec_ssl_index_next(CURSOR))
#define NBREC_SSL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = nbrec_ssl_index_find(CURSOR, KEY); \
             ((ROW) && nbrec_ssl_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = nbrec_ssl_index_next(CURSOR))
#define NBREC_SSL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = nbrec_ssl_index_first(CURSOR); \
             (ROW); \
             (ROW) = nbrec_ssl_index_next(CURSOR))

void nbrec_ssl_init(struct nbrec_ssl *);
void nbrec_ssl_delete(const struct nbrec_ssl *);
struct nbrec_ssl *nbrec_ssl_insert(struct ovsdb_idl_txn *);
bool nbrec_ssl_is_updated(const struct nbrec_ssl *, enum nbrec_ssl_column_id);

void nbrec_ssl_verify_bootstrap_ca_cert(const struct nbrec_ssl *);
void nbrec_ssl_verify_ca_cert(const struct nbrec_ssl *);
void nbrec_ssl_verify_certificate(const struct nbrec_ssl *);
void nbrec_ssl_verify_external_ids(const struct nbrec_ssl *);
void nbrec_ssl_verify_private_key(const struct nbrec_ssl *);
void nbrec_ssl_verify_ssl_ciphers(const struct nbrec_ssl *);
void nbrec_ssl_verify_ssl_protocols(const struct nbrec_ssl *);

const struct ovsdb_datum *nbrec_ssl_get_bootstrap_ca_cert(const struct nbrec_ssl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_ssl_get_ca_cert(const struct nbrec_ssl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_ssl_get_certificate(const struct nbrec_ssl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_ssl_get_external_ids(const struct nbrec_ssl *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_ssl_get_private_key(const struct nbrec_ssl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_ssl_get_ssl_ciphers(const struct nbrec_ssl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_ssl_get_ssl_protocols(const struct nbrec_ssl *, enum ovsdb_atomic_type key_type);

void nbrec_ssl_set_bootstrap_ca_cert(const struct nbrec_ssl *, bool bootstrap_ca_cert);
void nbrec_ssl_set_ca_cert(const struct nbrec_ssl *, const char *ca_cert);
void nbrec_ssl_set_certificate(const struct nbrec_ssl *, const char *certificate);
void nbrec_ssl_set_external_ids(const struct nbrec_ssl *, const struct smap *);
void nbrec_ssl_set_private_key(const struct nbrec_ssl *, const char *private_key);
void nbrec_ssl_set_ssl_ciphers(const struct nbrec_ssl *, const char *ssl_ciphers);
void nbrec_ssl_set_ssl_protocols(const struct nbrec_ssl *, const char *ssl_protocols);

void nbrec_ssl_add_clause_bootstrap_ca_cert(struct ovsdb_idl_condition *, enum ovsdb_function function, bool bootstrap_ca_cert);
void nbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_ssl_add_clause_ca_cert(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ca_cert);
void nbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_ssl_add_clause_certificate(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *certificate);
void nbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_ssl_update_external_ids_setkey(const struct nbrec_ssl *,  const char *, const char *);
void nbrec_ssl_update_external_ids_delkey(const struct nbrec_ssl *,  const char *);
void nbrec_ssl_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void nbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_ssl_add_clause_private_key(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *private_key);
void nbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_ssl_add_clause_ssl_ciphers(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ssl_ciphers);
void nbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void nbrec_ssl_add_clause_ssl_protocols(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ssl_protocols);
void nbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct nbrec_ssl * nbrec_ssl_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void nbrec_ssl_index_set_bootstrap_ca_cert(const struct nbrec_ssl *,
bool bootstrap_ca_cert);
void nbrec_ssl_index_set_ca_cert(const struct nbrec_ssl *,
const char *ca_cert);
void nbrec_ssl_index_set_certificate(const struct nbrec_ssl *,
const char *certificate);
void nbrec_ssl_index_set_external_ids(const struct nbrec_ssl *,
const struct smap *);
void nbrec_ssl_index_set_private_key(const struct nbrec_ssl *,
const char *private_key);
void nbrec_ssl_index_set_ssl_ciphers(const struct nbrec_ssl *,
const char *ssl_ciphers);
void nbrec_ssl_index_set_ssl_protocols(const struct nbrec_ssl *,
const char *ssl_protocols);

enum nbrec_table_id {
    NBREC_TABLE_ACL,
    NBREC_TABLE_ADDRESS_SET,
    NBREC_TABLE_CONNECTION,
    NBREC_TABLE_DHCP_OPTIONS,
    NBREC_TABLE_DNS,
    NBREC_TABLE_GATEWAY_CHASSIS,
    NBREC_TABLE_LOAD_BALANCER,
    NBREC_TABLE_LOGICAL_ROUTER,
    NBREC_TABLE_LOGICAL_ROUTER_PORT,
    NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE,
    NBREC_TABLE_LOGICAL_SWITCH,
    NBREC_TABLE_LOGICAL_SWITCH_PORT,
    NBREC_TABLE_NAT,
    NBREC_TABLE_NB_GLOBAL,
    NBREC_TABLE_QOS,
    NBREC_TABLE_SSL,
    NBREC_N_TABLES
};

#define nbrec_table_load_balancer (nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER])
#define nbrec_table_logical_switch_port (nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT])
#define nbrec_table_address_set (nbrec_table_classes[NBREC_TABLE_ADDRESS_SET])
#define nbrec_table_nb_global (nbrec_table_classes[NBREC_TABLE_NB_GLOBAL])
#define nbrec_table_gateway_chassis (nbrec_table_classes[NBREC_TABLE_GATEWAY_CHASSIS])
#define nbrec_table_nat (nbrec_table_classes[NBREC_TABLE_NAT])
#define nbrec_table_logical_router_static_route (nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE])
#define nbrec_table_logical_router_port (nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT])
#define nbrec_table_logical_router (nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER])
#define nbrec_table_acl (nbrec_table_classes[NBREC_TABLE_ACL])
#define nbrec_table_ssl (nbrec_table_classes[NBREC_TABLE_SSL])
#define nbrec_table_connection (nbrec_table_classes[NBREC_TABLE_CONNECTION])
#define nbrec_table_dns (nbrec_table_classes[NBREC_TABLE_DNS])
#define nbrec_table_logical_switch (nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH])
#define nbrec_table_qos (nbrec_table_classes[NBREC_TABLE_QOS])
#define nbrec_table_dhcp_options (nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS])

extern struct ovsdb_idl_table_class nbrec_table_classes[NBREC_N_TABLES];

extern struct ovsdb_idl_class nbrec_idl_class;

const char * nbrec_get_db_version(void);

#endif /* NBREC_IDL_HEADER */
