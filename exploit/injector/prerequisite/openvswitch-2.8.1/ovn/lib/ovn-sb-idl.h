/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#ifndef SBREC_IDL_HEADER
#define SBREC_IDL_HEADER 1

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "ovsdb-data.h"
#include "ovsdb-idl-provider.h"
#include "smap.h"
#include "uuid.h"

/* Address_Set table. */
struct sbrec_address_set {
	struct ovsdb_idl_row header_;

	/* addresses column. */
	char **addresses;
	size_t n_addresses;

	/* name column. */
	char *name;	/* Always nonnull. */
};

enum sbrec_address_set_column_id {
    SBREC_ADDRESS_SET_COL_ADDRESSES,
    SBREC_ADDRESS_SET_COL_NAME,
    SBREC_ADDRESS_SET_N_COLUMNS
};

#define sbrec_address_set_col_addresses (sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_ADDRESSES])
#define sbrec_address_set_col_name (sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_NAME])

extern struct ovsdb_idl_column sbrec_address_set_columns[SBREC_ADDRESS_SET_N_COLUMNS];

const struct sbrec_address_set *sbrec_address_set_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_address_set *sbrec_address_set_first(const struct ovsdb_idl *);
const struct sbrec_address_set *sbrec_address_set_next(const struct sbrec_address_set *);
#define SBREC_ADDRESS_SET_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_address_set_first(IDL); \
             (ROW); \
             (ROW) = sbrec_address_set_next(ROW))
#define SBREC_ADDRESS_SET_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_address_set_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_address_set_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_address_set_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_address_set_row_get_seqno(const struct sbrec_address_set *row, enum ovsdb_idl_change change);
const struct sbrec_address_set *sbrec_address_set_track_get_first(const struct ovsdb_idl *);
const struct sbrec_address_set *sbrec_address_set_track_get_next(const struct sbrec_address_set *);
#define SBREC_ADDRESS_SET_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_address_set_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_address_set_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_address_set_is_new(const struct sbrec_address_set *row)
{
    return sbrec_address_set_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_address_set_is_deleted(const struct sbrec_address_set *row)
{
    return sbrec_address_set_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_address_set_index_destroy_row(const struct sbrec_address_set *);
int sbrec_address_set_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_address_set *, const struct sbrec_address_set *);
const struct sbrec_address_set *sbrec_address_set_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_address_set *sbrec_address_set_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_address_set *sbrec_address_set_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_address_set *);
const struct sbrec_address_set *sbrec_address_set_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_address_set *);
const struct sbrec_address_set *sbrec_address_set_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_ADDRESS_SET_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_address_set_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_address_set_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_address_set_index_next(CURSOR))
#define SBREC_ADDRESS_SET_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_address_set_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_address_set_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_address_set_index_next(CURSOR))
#define SBREC_ADDRESS_SET_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_address_set_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_address_set_index_next(CURSOR))

void sbrec_address_set_init(struct sbrec_address_set *);
void sbrec_address_set_delete(const struct sbrec_address_set *);
struct sbrec_address_set *sbrec_address_set_insert(struct ovsdb_idl_txn *);
bool sbrec_address_set_is_updated(const struct sbrec_address_set *, enum sbrec_address_set_column_id);

void sbrec_address_set_verify_addresses(const struct sbrec_address_set *);
void sbrec_address_set_verify_name(const struct sbrec_address_set *);

const struct ovsdb_datum *sbrec_address_set_get_addresses(const struct sbrec_address_set *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_address_set_get_name(const struct sbrec_address_set *, enum ovsdb_atomic_type key_type);

void sbrec_address_set_set_addresses(const struct sbrec_address_set *, const char **addresses, size_t n_addresses);
void sbrec_address_set_set_name(const struct sbrec_address_set *, const char *name);

void sbrec_address_set_update_addresses_addvalue(const struct sbrec_address_set *,  const char *);
void sbrec_address_set_update_addresses_delvalue(const struct sbrec_address_set *,  const char *);
void sbrec_address_set_add_clause_addresses(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **addresses, size_t n_addresses);
void sbrec_address_set_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_address_set_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void sbrec_address_set_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_address_set * sbrec_address_set_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_address_set_index_set_addresses(const struct sbrec_address_set *,
const char **addresses, size_t n_addresses);
void sbrec_address_set_index_set_name(const struct sbrec_address_set *,
const char *name);

/* Chassis table. */
struct sbrec_chassis {
	struct ovsdb_idl_row header_;

	/* encaps column. */
	struct sbrec_encap **encaps;
	size_t n_encaps;

	/* external_ids column. */
	struct smap external_ids;

	/* hostname column. */
	char *hostname;	/* Always nonnull. */

	/* name column. */
	char *name;	/* Always nonnull. */

	/* nb_cfg column. */
	int64_t nb_cfg;

	/* vtep_logical_switches column. */
	char **vtep_logical_switches;
	size_t n_vtep_logical_switches;
};

enum sbrec_chassis_column_id {
    SBREC_CHASSIS_COL_ENCAPS,
    SBREC_CHASSIS_COL_EXTERNAL_IDS,
    SBREC_CHASSIS_COL_HOSTNAME,
    SBREC_CHASSIS_COL_NAME,
    SBREC_CHASSIS_COL_NB_CFG,
    SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES,
    SBREC_CHASSIS_N_COLUMNS
};

#define sbrec_chassis_col_name (sbrec_chassis_columns[SBREC_CHASSIS_COL_NAME])
#define sbrec_chassis_col_hostname (sbrec_chassis_columns[SBREC_CHASSIS_COL_HOSTNAME])
#define sbrec_chassis_col_encaps (sbrec_chassis_columns[SBREC_CHASSIS_COL_ENCAPS])
#define sbrec_chassis_col_nb_cfg (sbrec_chassis_columns[SBREC_CHASSIS_COL_NB_CFG])
#define sbrec_chassis_col_vtep_logical_switches (sbrec_chassis_columns[SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES])
#define sbrec_chassis_col_external_ids (sbrec_chassis_columns[SBREC_CHASSIS_COL_EXTERNAL_IDS])

extern struct ovsdb_idl_column sbrec_chassis_columns[SBREC_CHASSIS_N_COLUMNS];

const struct sbrec_chassis *sbrec_chassis_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_chassis *sbrec_chassis_first(const struct ovsdb_idl *);
const struct sbrec_chassis *sbrec_chassis_next(const struct sbrec_chassis *);
#define SBREC_CHASSIS_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_chassis_first(IDL); \
             (ROW); \
             (ROW) = sbrec_chassis_next(ROW))
#define SBREC_CHASSIS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_chassis_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_chassis_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_chassis_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_chassis_row_get_seqno(const struct sbrec_chassis *row, enum ovsdb_idl_change change);
const struct sbrec_chassis *sbrec_chassis_track_get_first(const struct ovsdb_idl *);
const struct sbrec_chassis *sbrec_chassis_track_get_next(const struct sbrec_chassis *);
#define SBREC_CHASSIS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_chassis_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_chassis_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_chassis_is_new(const struct sbrec_chassis *row)
{
    return sbrec_chassis_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_chassis_is_deleted(const struct sbrec_chassis *row)
{
    return sbrec_chassis_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_chassis_index_destroy_row(const struct sbrec_chassis *);
int sbrec_chassis_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_chassis *, const struct sbrec_chassis *);
const struct sbrec_chassis *sbrec_chassis_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_chassis *sbrec_chassis_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_chassis *sbrec_chassis_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_chassis *);
const struct sbrec_chassis *sbrec_chassis_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_chassis *);
const struct sbrec_chassis *sbrec_chassis_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_CHASSIS_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_chassis_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_chassis_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_chassis_index_next(CURSOR))
#define SBREC_CHASSIS_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_chassis_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_chassis_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_chassis_index_next(CURSOR))
#define SBREC_CHASSIS_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_chassis_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_chassis_index_next(CURSOR))

void sbrec_chassis_init(struct sbrec_chassis *);
void sbrec_chassis_delete(const struct sbrec_chassis *);
struct sbrec_chassis *sbrec_chassis_insert(struct ovsdb_idl_txn *);
bool sbrec_chassis_is_updated(const struct sbrec_chassis *, enum sbrec_chassis_column_id);

void sbrec_chassis_verify_encaps(const struct sbrec_chassis *);
void sbrec_chassis_verify_external_ids(const struct sbrec_chassis *);
void sbrec_chassis_verify_hostname(const struct sbrec_chassis *);
void sbrec_chassis_verify_name(const struct sbrec_chassis *);
void sbrec_chassis_verify_nb_cfg(const struct sbrec_chassis *);
void sbrec_chassis_verify_vtep_logical_switches(const struct sbrec_chassis *);

const struct ovsdb_datum *sbrec_chassis_get_encaps(const struct sbrec_chassis *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_chassis_get_external_ids(const struct sbrec_chassis *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_chassis_get_hostname(const struct sbrec_chassis *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_chassis_get_name(const struct sbrec_chassis *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_chassis_get_nb_cfg(const struct sbrec_chassis *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_chassis_get_vtep_logical_switches(const struct sbrec_chassis *, enum ovsdb_atomic_type key_type);

void sbrec_chassis_set_encaps(const struct sbrec_chassis *, struct sbrec_encap **encaps, size_t n_encaps);
void sbrec_chassis_set_external_ids(const struct sbrec_chassis *, const struct smap *);
void sbrec_chassis_set_hostname(const struct sbrec_chassis *, const char *hostname);
void sbrec_chassis_set_name(const struct sbrec_chassis *, const char *name);
void sbrec_chassis_set_nb_cfg(const struct sbrec_chassis *, int64_t nb_cfg);
void sbrec_chassis_set_vtep_logical_switches(const struct sbrec_chassis *, const char **vtep_logical_switches, size_t n_vtep_logical_switches);

void sbrec_chassis_update_encaps_addvalue(const struct sbrec_chassis *,  const struct sbrec_encap *);
void sbrec_chassis_update_encaps_delvalue(const struct sbrec_chassis *,  const struct sbrec_encap *);
void sbrec_chassis_add_clause_encaps(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **encaps, size_t n_encaps);
void sbrec_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_chassis_update_external_ids_setkey(const struct sbrec_chassis *,  const char *, const char *);
void sbrec_chassis_update_external_ids_delkey(const struct sbrec_chassis *,  const char *);
void sbrec_chassis_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_chassis_add_clause_hostname(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *hostname);
void sbrec_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_chassis_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void sbrec_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_chassis_add_clause_nb_cfg(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t nb_cfg);
void sbrec_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_chassis_update_vtep_logical_switches_addvalue(const struct sbrec_chassis *,  const char *);
void sbrec_chassis_update_vtep_logical_switches_delvalue(const struct sbrec_chassis *,  const char *);
void sbrec_chassis_add_clause_vtep_logical_switches(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **vtep_logical_switches, size_t n_vtep_logical_switches);
void sbrec_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_chassis * sbrec_chassis_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_chassis_index_set_encaps(const struct sbrec_chassis *,
struct sbrec_encap **encaps, size_t n_encaps);
void sbrec_chassis_index_set_external_ids(const struct sbrec_chassis *,
const struct smap *);
void sbrec_chassis_index_set_hostname(const struct sbrec_chassis *,
const char *hostname);
void sbrec_chassis_index_set_name(const struct sbrec_chassis *,
const char *name);
void sbrec_chassis_index_set_nb_cfg(const struct sbrec_chassis *,
int64_t nb_cfg);
void sbrec_chassis_index_set_vtep_logical_switches(const struct sbrec_chassis *,
const char **vtep_logical_switches, size_t n_vtep_logical_switches);

/* Connection table. */
struct sbrec_connection {
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

	/* read_only column. */
	bool read_only;

	/* role column. */
	char *role;	/* Always nonnull. */

	/* status column. */
	struct smap status;

	/* target column. */
	char *target;	/* Always nonnull. */
};

enum sbrec_connection_column_id {
    SBREC_CONNECTION_COL_EXTERNAL_IDS,
    SBREC_CONNECTION_COL_INACTIVITY_PROBE,
    SBREC_CONNECTION_COL_IS_CONNECTED,
    SBREC_CONNECTION_COL_MAX_BACKOFF,
    SBREC_CONNECTION_COL_OTHER_CONFIG,
    SBREC_CONNECTION_COL_READ_ONLY,
    SBREC_CONNECTION_COL_ROLE,
    SBREC_CONNECTION_COL_STATUS,
    SBREC_CONNECTION_COL_TARGET,
    SBREC_CONNECTION_N_COLUMNS
};

#define sbrec_connection_col_max_backoff (sbrec_connection_columns[SBREC_CONNECTION_COL_MAX_BACKOFF])
#define sbrec_connection_col_read_only (sbrec_connection_columns[SBREC_CONNECTION_COL_READ_ONLY])
#define sbrec_connection_col_target (sbrec_connection_columns[SBREC_CONNECTION_COL_TARGET])
#define sbrec_connection_col_other_config (sbrec_connection_columns[SBREC_CONNECTION_COL_OTHER_CONFIG])
#define sbrec_connection_col_inactivity_probe (sbrec_connection_columns[SBREC_CONNECTION_COL_INACTIVITY_PROBE])
#define sbrec_connection_col_status (sbrec_connection_columns[SBREC_CONNECTION_COL_STATUS])
#define sbrec_connection_col_role (sbrec_connection_columns[SBREC_CONNECTION_COL_ROLE])
#define sbrec_connection_col_external_ids (sbrec_connection_columns[SBREC_CONNECTION_COL_EXTERNAL_IDS])
#define sbrec_connection_col_is_connected (sbrec_connection_columns[SBREC_CONNECTION_COL_IS_CONNECTED])

extern struct ovsdb_idl_column sbrec_connection_columns[SBREC_CONNECTION_N_COLUMNS];

const struct sbrec_connection *sbrec_connection_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_connection *sbrec_connection_first(const struct ovsdb_idl *);
const struct sbrec_connection *sbrec_connection_next(const struct sbrec_connection *);
#define SBREC_CONNECTION_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_connection_first(IDL); \
             (ROW); \
             (ROW) = sbrec_connection_next(ROW))
#define SBREC_CONNECTION_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_connection_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_connection_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_connection_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_connection_row_get_seqno(const struct sbrec_connection *row, enum ovsdb_idl_change change);
const struct sbrec_connection *sbrec_connection_track_get_first(const struct ovsdb_idl *);
const struct sbrec_connection *sbrec_connection_track_get_next(const struct sbrec_connection *);
#define SBREC_CONNECTION_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_connection_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_connection_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_connection_is_new(const struct sbrec_connection *row)
{
    return sbrec_connection_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_connection_is_deleted(const struct sbrec_connection *row)
{
    return sbrec_connection_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_connection_index_destroy_row(const struct sbrec_connection *);
int sbrec_connection_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_connection *, const struct sbrec_connection *);
const struct sbrec_connection *sbrec_connection_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_connection *sbrec_connection_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_connection *sbrec_connection_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_connection *);
const struct sbrec_connection *sbrec_connection_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_connection *);
const struct sbrec_connection *sbrec_connection_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_CONNECTION_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_connection_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_connection_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_connection_index_next(CURSOR))
#define SBREC_CONNECTION_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_connection_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_connection_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_connection_index_next(CURSOR))
#define SBREC_CONNECTION_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_connection_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_connection_index_next(CURSOR))

void sbrec_connection_init(struct sbrec_connection *);
void sbrec_connection_delete(const struct sbrec_connection *);
struct sbrec_connection *sbrec_connection_insert(struct ovsdb_idl_txn *);
bool sbrec_connection_is_updated(const struct sbrec_connection *, enum sbrec_connection_column_id);

void sbrec_connection_verify_external_ids(const struct sbrec_connection *);
void sbrec_connection_verify_inactivity_probe(const struct sbrec_connection *);
void sbrec_connection_verify_is_connected(const struct sbrec_connection *);
void sbrec_connection_verify_max_backoff(const struct sbrec_connection *);
void sbrec_connection_verify_other_config(const struct sbrec_connection *);
void sbrec_connection_verify_read_only(const struct sbrec_connection *);
void sbrec_connection_verify_role(const struct sbrec_connection *);
void sbrec_connection_verify_status(const struct sbrec_connection *);
void sbrec_connection_verify_target(const struct sbrec_connection *);

const struct ovsdb_datum *sbrec_connection_get_external_ids(const struct sbrec_connection *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_connection_get_inactivity_probe(const struct sbrec_connection *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_connection_get_is_connected(const struct sbrec_connection *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_connection_get_max_backoff(const struct sbrec_connection *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_connection_get_other_config(const struct sbrec_connection *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_connection_get_read_only(const struct sbrec_connection *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_connection_get_role(const struct sbrec_connection *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_connection_get_status(const struct sbrec_connection *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_connection_get_target(const struct sbrec_connection *, enum ovsdb_atomic_type key_type);

void sbrec_connection_set_external_ids(const struct sbrec_connection *, const struct smap *);
void sbrec_connection_set_inactivity_probe(const struct sbrec_connection *, const int64_t *inactivity_probe, size_t n_inactivity_probe);
void sbrec_connection_set_is_connected(const struct sbrec_connection *, bool is_connected);
void sbrec_connection_set_max_backoff(const struct sbrec_connection *, const int64_t *max_backoff, size_t n_max_backoff);
void sbrec_connection_set_other_config(const struct sbrec_connection *, const struct smap *);
void sbrec_connection_set_read_only(const struct sbrec_connection *, bool read_only);
void sbrec_connection_set_role(const struct sbrec_connection *, const char *role);
void sbrec_connection_set_status(const struct sbrec_connection *, const struct smap *);
void sbrec_connection_set_target(const struct sbrec_connection *, const char *target);

void sbrec_connection_update_external_ids_setkey(const struct sbrec_connection *,  const char *, const char *);
void sbrec_connection_update_external_ids_delkey(const struct sbrec_connection *,  const char *);
void sbrec_connection_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_connection_update_inactivity_probe_addvalue(const struct sbrec_connection *,  int64_t );
void sbrec_connection_update_inactivity_probe_delvalue(const struct sbrec_connection *,  int64_t );
void sbrec_connection_add_clause_inactivity_probe(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *inactivity_probe, size_t n_inactivity_probe);
void sbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_connection_add_clause_is_connected(struct ovsdb_idl_condition *, enum ovsdb_function function, bool is_connected);
void sbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_connection_update_max_backoff_addvalue(const struct sbrec_connection *,  int64_t );
void sbrec_connection_update_max_backoff_delvalue(const struct sbrec_connection *,  int64_t );
void sbrec_connection_add_clause_max_backoff(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *max_backoff, size_t n_max_backoff);
void sbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_connection_update_other_config_setkey(const struct sbrec_connection *,  const char *, const char *);
void sbrec_connection_update_other_config_delkey(const struct sbrec_connection *,  const char *);
void sbrec_connection_add_clause_other_config(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_connection_add_clause_read_only(struct ovsdb_idl_condition *, enum ovsdb_function function, bool read_only);
void sbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_connection_add_clause_role(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *role);
void sbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_connection_update_status_setkey(const struct sbrec_connection *,  const char *, const char *);
void sbrec_connection_update_status_delkey(const struct sbrec_connection *,  const char *);
void sbrec_connection_add_clause_status(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_connection_add_clause_target(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *target);
void sbrec_connection_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_connection * sbrec_connection_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_connection_index_set_external_ids(const struct sbrec_connection *,
const struct smap *);
void sbrec_connection_index_set_inactivity_probe(const struct sbrec_connection *,
const int64_t *inactivity_probe, size_t n_inactivity_probe);
void sbrec_connection_index_set_is_connected(const struct sbrec_connection *,
bool is_connected);
void sbrec_connection_index_set_max_backoff(const struct sbrec_connection *,
const int64_t *max_backoff, size_t n_max_backoff);
void sbrec_connection_index_set_other_config(const struct sbrec_connection *,
const struct smap *);
void sbrec_connection_index_set_read_only(const struct sbrec_connection *,
bool read_only);
void sbrec_connection_index_set_role(const struct sbrec_connection *,
const char *role);
void sbrec_connection_index_set_status(const struct sbrec_connection *,
const struct smap *);
void sbrec_connection_index_set_target(const struct sbrec_connection *,
const char *target);

/* DHCP_Options table. */
struct sbrec_dhcp_options {
	struct ovsdb_idl_row header_;

	/* code column. */
	int64_t code;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* type column. */
	char *type;	/* Always nonnull. */
};

enum sbrec_dhcp_options_column_id {
    SBREC_DHCP_OPTIONS_COL_CODE,
    SBREC_DHCP_OPTIONS_COL_NAME,
    SBREC_DHCP_OPTIONS_COL_TYPE,
    SBREC_DHCP_OPTIONS_N_COLUMNS
};

#define sbrec_dhcp_options_col_code (sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_CODE])
#define sbrec_dhcp_options_col_type (sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_TYPE])
#define sbrec_dhcp_options_col_name (sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_NAME])

extern struct ovsdb_idl_column sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_N_COLUMNS];

const struct sbrec_dhcp_options *sbrec_dhcp_options_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_dhcp_options *sbrec_dhcp_options_first(const struct ovsdb_idl *);
const struct sbrec_dhcp_options *sbrec_dhcp_options_next(const struct sbrec_dhcp_options *);
#define SBREC_DHCP_OPTIONS_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_dhcp_options_first(IDL); \
             (ROW); \
             (ROW) = sbrec_dhcp_options_next(ROW))
#define SBREC_DHCP_OPTIONS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_dhcp_options_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_dhcp_options_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_dhcp_options_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_dhcp_options_row_get_seqno(const struct sbrec_dhcp_options *row, enum ovsdb_idl_change change);
const struct sbrec_dhcp_options *sbrec_dhcp_options_track_get_first(const struct ovsdb_idl *);
const struct sbrec_dhcp_options *sbrec_dhcp_options_track_get_next(const struct sbrec_dhcp_options *);
#define SBREC_DHCP_OPTIONS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_dhcp_options_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_dhcp_options_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_dhcp_options_is_new(const struct sbrec_dhcp_options *row)
{
    return sbrec_dhcp_options_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_dhcp_options_is_deleted(const struct sbrec_dhcp_options *row)
{
    return sbrec_dhcp_options_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_dhcp_options_index_destroy_row(const struct sbrec_dhcp_options *);
int sbrec_dhcp_options_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_dhcp_options *, const struct sbrec_dhcp_options *);
const struct sbrec_dhcp_options *sbrec_dhcp_options_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_dhcp_options *sbrec_dhcp_options_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_dhcp_options *sbrec_dhcp_options_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_dhcp_options *);
const struct sbrec_dhcp_options *sbrec_dhcp_options_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_dhcp_options *);
const struct sbrec_dhcp_options *sbrec_dhcp_options_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_DHCP_OPTIONS_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_dhcp_options_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_dhcp_options_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_dhcp_options_index_next(CURSOR))
#define SBREC_DHCP_OPTIONS_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_dhcp_options_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_dhcp_options_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_dhcp_options_index_next(CURSOR))
#define SBREC_DHCP_OPTIONS_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_dhcp_options_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_dhcp_options_index_next(CURSOR))

void sbrec_dhcp_options_init(struct sbrec_dhcp_options *);
void sbrec_dhcp_options_delete(const struct sbrec_dhcp_options *);
struct sbrec_dhcp_options *sbrec_dhcp_options_insert(struct ovsdb_idl_txn *);
bool sbrec_dhcp_options_is_updated(const struct sbrec_dhcp_options *, enum sbrec_dhcp_options_column_id);

void sbrec_dhcp_options_verify_code(const struct sbrec_dhcp_options *);
void sbrec_dhcp_options_verify_name(const struct sbrec_dhcp_options *);
void sbrec_dhcp_options_verify_type(const struct sbrec_dhcp_options *);

const struct ovsdb_datum *sbrec_dhcp_options_get_code(const struct sbrec_dhcp_options *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_dhcp_options_get_name(const struct sbrec_dhcp_options *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_dhcp_options_get_type(const struct sbrec_dhcp_options *, enum ovsdb_atomic_type key_type);

void sbrec_dhcp_options_set_code(const struct sbrec_dhcp_options *, int64_t code);
void sbrec_dhcp_options_set_name(const struct sbrec_dhcp_options *, const char *name);
void sbrec_dhcp_options_set_type(const struct sbrec_dhcp_options *, const char *type);

void sbrec_dhcp_options_add_clause_code(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t code);
void sbrec_dhcp_options_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_dhcp_options_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void sbrec_dhcp_options_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_dhcp_options_add_clause_type(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *type);
void sbrec_dhcp_options_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_dhcp_options * sbrec_dhcp_options_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_dhcp_options_index_set_code(const struct sbrec_dhcp_options *,
int64_t code);
void sbrec_dhcp_options_index_set_name(const struct sbrec_dhcp_options *,
const char *name);
void sbrec_dhcp_options_index_set_type(const struct sbrec_dhcp_options *,
const char *type);

/* DHCPv6_Options table. */
struct sbrec_dhcpv6_options {
	struct ovsdb_idl_row header_;

	/* code column. */
	int64_t code;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* type column. */
	char *type;	/* Always nonnull. */
};

enum sbrec_dhcpv6_options_column_id {
    SBREC_DHCPV6_OPTIONS_COL_CODE,
    SBREC_DHCPV6_OPTIONS_COL_NAME,
    SBREC_DHCPV6_OPTIONS_COL_TYPE,
    SBREC_DHCPV6_OPTIONS_N_COLUMNS
};

#define sbrec_dhcpv6_options_col_code (sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_CODE])
#define sbrec_dhcpv6_options_col_type (sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_TYPE])
#define sbrec_dhcpv6_options_col_name (sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_NAME])

extern struct ovsdb_idl_column sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_N_COLUMNS];

const struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_first(const struct ovsdb_idl *);
const struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_next(const struct sbrec_dhcpv6_options *);
#define SBREC_DHCPV6_OPTIONS_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_dhcpv6_options_first(IDL); \
             (ROW); \
             (ROW) = sbrec_dhcpv6_options_next(ROW))
#define SBREC_DHCPV6_OPTIONS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_dhcpv6_options_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_dhcpv6_options_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_dhcpv6_options_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_dhcpv6_options_row_get_seqno(const struct sbrec_dhcpv6_options *row, enum ovsdb_idl_change change);
const struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_track_get_first(const struct ovsdb_idl *);
const struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_track_get_next(const struct sbrec_dhcpv6_options *);
#define SBREC_DHCPV6_OPTIONS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_dhcpv6_options_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_dhcpv6_options_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_dhcpv6_options_is_new(const struct sbrec_dhcpv6_options *row)
{
    return sbrec_dhcpv6_options_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_dhcpv6_options_is_deleted(const struct sbrec_dhcpv6_options *row)
{
    return sbrec_dhcpv6_options_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_dhcpv6_options_index_destroy_row(const struct sbrec_dhcpv6_options *);
int sbrec_dhcpv6_options_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_dhcpv6_options *, const struct sbrec_dhcpv6_options *);
const struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_dhcpv6_options *);
const struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_dhcpv6_options *);
const struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_DHCPV6_OPTIONS_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_dhcpv6_options_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_dhcpv6_options_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_dhcpv6_options_index_next(CURSOR))
#define SBREC_DHCPV6_OPTIONS_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_dhcpv6_options_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_dhcpv6_options_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_dhcpv6_options_index_next(CURSOR))
#define SBREC_DHCPV6_OPTIONS_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_dhcpv6_options_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_dhcpv6_options_index_next(CURSOR))

void sbrec_dhcpv6_options_init(struct sbrec_dhcpv6_options *);
void sbrec_dhcpv6_options_delete(const struct sbrec_dhcpv6_options *);
struct sbrec_dhcpv6_options *sbrec_dhcpv6_options_insert(struct ovsdb_idl_txn *);
bool sbrec_dhcpv6_options_is_updated(const struct sbrec_dhcpv6_options *, enum sbrec_dhcpv6_options_column_id);

void sbrec_dhcpv6_options_verify_code(const struct sbrec_dhcpv6_options *);
void sbrec_dhcpv6_options_verify_name(const struct sbrec_dhcpv6_options *);
void sbrec_dhcpv6_options_verify_type(const struct sbrec_dhcpv6_options *);

const struct ovsdb_datum *sbrec_dhcpv6_options_get_code(const struct sbrec_dhcpv6_options *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_dhcpv6_options_get_name(const struct sbrec_dhcpv6_options *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_dhcpv6_options_get_type(const struct sbrec_dhcpv6_options *, enum ovsdb_atomic_type key_type);

void sbrec_dhcpv6_options_set_code(const struct sbrec_dhcpv6_options *, int64_t code);
void sbrec_dhcpv6_options_set_name(const struct sbrec_dhcpv6_options *, const char *name);
void sbrec_dhcpv6_options_set_type(const struct sbrec_dhcpv6_options *, const char *type);

void sbrec_dhcpv6_options_add_clause_code(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t code);
void sbrec_dhcpv6_options_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_dhcpv6_options_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void sbrec_dhcpv6_options_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_dhcpv6_options_add_clause_type(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *type);
void sbrec_dhcpv6_options_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_dhcpv6_options * sbrec_dhcpv6_options_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_dhcpv6_options_index_set_code(const struct sbrec_dhcpv6_options *,
int64_t code);
void sbrec_dhcpv6_options_index_set_name(const struct sbrec_dhcpv6_options *,
const char *name);
void sbrec_dhcpv6_options_index_set_type(const struct sbrec_dhcpv6_options *,
const char *type);

/* DNS table. */
struct sbrec_dns {
	struct ovsdb_idl_row header_;

	/* datapaths column. */
	struct sbrec_datapath_binding **datapaths;
	size_t n_datapaths;

	/* external_ids column. */
	struct smap external_ids;

	/* records column. */
	struct smap records;
};

enum sbrec_dns_column_id {
    SBREC_DNS_COL_DATAPATHS,
    SBREC_DNS_COL_EXTERNAL_IDS,
    SBREC_DNS_COL_RECORDS,
    SBREC_DNS_N_COLUMNS
};

#define sbrec_dns_col_records (sbrec_dns_columns[SBREC_DNS_COL_RECORDS])
#define sbrec_dns_col_external_ids (sbrec_dns_columns[SBREC_DNS_COL_EXTERNAL_IDS])
#define sbrec_dns_col_datapaths (sbrec_dns_columns[SBREC_DNS_COL_DATAPATHS])

extern struct ovsdb_idl_column sbrec_dns_columns[SBREC_DNS_N_COLUMNS];

const struct sbrec_dns *sbrec_dns_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_dns *sbrec_dns_first(const struct ovsdb_idl *);
const struct sbrec_dns *sbrec_dns_next(const struct sbrec_dns *);
#define SBREC_DNS_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_dns_first(IDL); \
             (ROW); \
             (ROW) = sbrec_dns_next(ROW))
#define SBREC_DNS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_dns_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_dns_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_dns_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_dns_row_get_seqno(const struct sbrec_dns *row, enum ovsdb_idl_change change);
const struct sbrec_dns *sbrec_dns_track_get_first(const struct ovsdb_idl *);
const struct sbrec_dns *sbrec_dns_track_get_next(const struct sbrec_dns *);
#define SBREC_DNS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_dns_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_dns_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_dns_is_new(const struct sbrec_dns *row)
{
    return sbrec_dns_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_dns_is_deleted(const struct sbrec_dns *row)
{
    return sbrec_dns_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_dns_index_destroy_row(const struct sbrec_dns *);
int sbrec_dns_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_dns *, const struct sbrec_dns *);
const struct sbrec_dns *sbrec_dns_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_dns *sbrec_dns_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_dns *sbrec_dns_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_dns *);
const struct sbrec_dns *sbrec_dns_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_dns *);
const struct sbrec_dns *sbrec_dns_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_DNS_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_dns_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_dns_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_dns_index_next(CURSOR))
#define SBREC_DNS_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_dns_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_dns_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_dns_index_next(CURSOR))
#define SBREC_DNS_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_dns_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_dns_index_next(CURSOR))

void sbrec_dns_init(struct sbrec_dns *);
void sbrec_dns_delete(const struct sbrec_dns *);
struct sbrec_dns *sbrec_dns_insert(struct ovsdb_idl_txn *);
bool sbrec_dns_is_updated(const struct sbrec_dns *, enum sbrec_dns_column_id);

void sbrec_dns_verify_datapaths(const struct sbrec_dns *);
void sbrec_dns_verify_external_ids(const struct sbrec_dns *);
void sbrec_dns_verify_records(const struct sbrec_dns *);

const struct ovsdb_datum *sbrec_dns_get_datapaths(const struct sbrec_dns *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_dns_get_external_ids(const struct sbrec_dns *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_dns_get_records(const struct sbrec_dns *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);

void sbrec_dns_set_datapaths(const struct sbrec_dns *, struct sbrec_datapath_binding **datapaths, size_t n_datapaths);
void sbrec_dns_set_external_ids(const struct sbrec_dns *, const struct smap *);
void sbrec_dns_set_records(const struct sbrec_dns *, const struct smap *);

void sbrec_dns_update_datapaths_addvalue(const struct sbrec_dns *,  const struct sbrec_datapath_binding *);
void sbrec_dns_update_datapaths_delvalue(const struct sbrec_dns *,  const struct sbrec_datapath_binding *);
void sbrec_dns_add_clause_datapaths(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **datapaths, size_t n_datapaths);
void sbrec_dns_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_dns_update_external_ids_setkey(const struct sbrec_dns *,  const char *, const char *);
void sbrec_dns_update_external_ids_delkey(const struct sbrec_dns *,  const char *);
void sbrec_dns_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_dns_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_dns_update_records_setkey(const struct sbrec_dns *,  const char *, const char *);
void sbrec_dns_update_records_delkey(const struct sbrec_dns *,  const char *);
void sbrec_dns_add_clause_records(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_dns_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_dns * sbrec_dns_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_dns_index_set_datapaths(const struct sbrec_dns *,
struct sbrec_datapath_binding **datapaths, size_t n_datapaths);
void sbrec_dns_index_set_external_ids(const struct sbrec_dns *,
const struct smap *);
void sbrec_dns_index_set_records(const struct sbrec_dns *,
const struct smap *);

/* Datapath_Binding table. */
struct sbrec_datapath_binding {
	struct ovsdb_idl_row header_;

	/* external_ids column. */
	struct smap external_ids;

	/* tunnel_key column. */
	int64_t tunnel_key;
};

enum sbrec_datapath_binding_column_id {
    SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS,
    SBREC_DATAPATH_BINDING_COL_TUNNEL_KEY,
    SBREC_DATAPATH_BINDING_N_COLUMNS
};

#define sbrec_datapath_binding_col_tunnel_key (sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_TUNNEL_KEY])
#define sbrec_datapath_binding_col_external_ids (sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS])

extern struct ovsdb_idl_column sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_N_COLUMNS];

const struct sbrec_datapath_binding *sbrec_datapath_binding_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_first(const struct ovsdb_idl *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_next(const struct sbrec_datapath_binding *);
#define SBREC_DATAPATH_BINDING_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_datapath_binding_first(IDL); \
             (ROW); \
             (ROW) = sbrec_datapath_binding_next(ROW))
#define SBREC_DATAPATH_BINDING_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_datapath_binding_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_datapath_binding_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_datapath_binding_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_datapath_binding_row_get_seqno(const struct sbrec_datapath_binding *row, enum ovsdb_idl_change change);
const struct sbrec_datapath_binding *sbrec_datapath_binding_track_get_first(const struct ovsdb_idl *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_track_get_next(const struct sbrec_datapath_binding *);
#define SBREC_DATAPATH_BINDING_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_datapath_binding_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_datapath_binding_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_datapath_binding_is_new(const struct sbrec_datapath_binding *row)
{
    return sbrec_datapath_binding_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_datapath_binding_is_deleted(const struct sbrec_datapath_binding *row)
{
    return sbrec_datapath_binding_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_datapath_binding_index_destroy_row(const struct sbrec_datapath_binding *);
int sbrec_datapath_binding_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_datapath_binding *, const struct sbrec_datapath_binding *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_datapath_binding *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_datapath_binding *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_DATAPATH_BINDING_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_datapath_binding_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_datapath_binding_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_datapath_binding_index_next(CURSOR))
#define SBREC_DATAPATH_BINDING_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_datapath_binding_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_datapath_binding_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_datapath_binding_index_next(CURSOR))
#define SBREC_DATAPATH_BINDING_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_datapath_binding_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_datapath_binding_index_next(CURSOR))

void sbrec_datapath_binding_init(struct sbrec_datapath_binding *);
void sbrec_datapath_binding_delete(const struct sbrec_datapath_binding *);
struct sbrec_datapath_binding *sbrec_datapath_binding_insert(struct ovsdb_idl_txn *);
bool sbrec_datapath_binding_is_updated(const struct sbrec_datapath_binding *, enum sbrec_datapath_binding_column_id);

void sbrec_datapath_binding_verify_external_ids(const struct sbrec_datapath_binding *);
void sbrec_datapath_binding_verify_tunnel_key(const struct sbrec_datapath_binding *);

const struct ovsdb_datum *sbrec_datapath_binding_get_external_ids(const struct sbrec_datapath_binding *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_datapath_binding_get_tunnel_key(const struct sbrec_datapath_binding *, enum ovsdb_atomic_type key_type);

void sbrec_datapath_binding_set_external_ids(const struct sbrec_datapath_binding *, const struct smap *);
void sbrec_datapath_binding_set_tunnel_key(const struct sbrec_datapath_binding *, int64_t tunnel_key);

void sbrec_datapath_binding_update_external_ids_setkey(const struct sbrec_datapath_binding *,  const char *, const char *);
void sbrec_datapath_binding_update_external_ids_delkey(const struct sbrec_datapath_binding *,  const char *);
void sbrec_datapath_binding_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_datapath_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_datapath_binding_add_clause_tunnel_key(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t tunnel_key);
void sbrec_datapath_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_datapath_binding * sbrec_datapath_binding_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_datapath_binding_index_set_external_ids(const struct sbrec_datapath_binding *,
const struct smap *);
void sbrec_datapath_binding_index_set_tunnel_key(const struct sbrec_datapath_binding *,
int64_t tunnel_key);

/* Encap table. */
struct sbrec_encap {
	struct ovsdb_idl_row header_;

	/* chassis_name column. */
	char *chassis_name;	/* Always nonnull. */

	/* ip column. */
	char *ip;	/* Always nonnull. */

	/* options column. */
	struct smap options;

	/* type column. */
	char *type;	/* Always nonnull. */
};

enum sbrec_encap_column_id {
    SBREC_ENCAP_COL_CHASSIS_NAME,
    SBREC_ENCAP_COL_IP,
    SBREC_ENCAP_COL_OPTIONS,
    SBREC_ENCAP_COL_TYPE,
    SBREC_ENCAP_N_COLUMNS
};

#define sbrec_encap_col_ip (sbrec_encap_columns[SBREC_ENCAP_COL_IP])
#define sbrec_encap_col_chassis_name (sbrec_encap_columns[SBREC_ENCAP_COL_CHASSIS_NAME])
#define sbrec_encap_col_type (sbrec_encap_columns[SBREC_ENCAP_COL_TYPE])
#define sbrec_encap_col_options (sbrec_encap_columns[SBREC_ENCAP_COL_OPTIONS])

extern struct ovsdb_idl_column sbrec_encap_columns[SBREC_ENCAP_N_COLUMNS];

const struct sbrec_encap *sbrec_encap_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_encap *sbrec_encap_first(const struct ovsdb_idl *);
const struct sbrec_encap *sbrec_encap_next(const struct sbrec_encap *);
#define SBREC_ENCAP_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_encap_first(IDL); \
             (ROW); \
             (ROW) = sbrec_encap_next(ROW))
#define SBREC_ENCAP_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_encap_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_encap_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_encap_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_encap_row_get_seqno(const struct sbrec_encap *row, enum ovsdb_idl_change change);
const struct sbrec_encap *sbrec_encap_track_get_first(const struct ovsdb_idl *);
const struct sbrec_encap *sbrec_encap_track_get_next(const struct sbrec_encap *);
#define SBREC_ENCAP_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_encap_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_encap_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_encap_is_new(const struct sbrec_encap *row)
{
    return sbrec_encap_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_encap_is_deleted(const struct sbrec_encap *row)
{
    return sbrec_encap_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_encap_index_destroy_row(const struct sbrec_encap *);
int sbrec_encap_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_encap *, const struct sbrec_encap *);
const struct sbrec_encap *sbrec_encap_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_encap *sbrec_encap_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_encap *sbrec_encap_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_encap *);
const struct sbrec_encap *sbrec_encap_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_encap *);
const struct sbrec_encap *sbrec_encap_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_ENCAP_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_encap_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_encap_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_encap_index_next(CURSOR))
#define SBREC_ENCAP_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_encap_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_encap_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_encap_index_next(CURSOR))
#define SBREC_ENCAP_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_encap_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_encap_index_next(CURSOR))

void sbrec_encap_init(struct sbrec_encap *);
void sbrec_encap_delete(const struct sbrec_encap *);
struct sbrec_encap *sbrec_encap_insert(struct ovsdb_idl_txn *);
bool sbrec_encap_is_updated(const struct sbrec_encap *, enum sbrec_encap_column_id);

void sbrec_encap_verify_chassis_name(const struct sbrec_encap *);
void sbrec_encap_verify_ip(const struct sbrec_encap *);
void sbrec_encap_verify_options(const struct sbrec_encap *);
void sbrec_encap_verify_type(const struct sbrec_encap *);

const struct ovsdb_datum *sbrec_encap_get_chassis_name(const struct sbrec_encap *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_encap_get_ip(const struct sbrec_encap *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_encap_get_options(const struct sbrec_encap *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_encap_get_type(const struct sbrec_encap *, enum ovsdb_atomic_type key_type);

void sbrec_encap_set_chassis_name(const struct sbrec_encap *, const char *chassis_name);
void sbrec_encap_set_ip(const struct sbrec_encap *, const char *ip);
void sbrec_encap_set_options(const struct sbrec_encap *, const struct smap *);
void sbrec_encap_set_type(const struct sbrec_encap *, const char *type);

void sbrec_encap_add_clause_chassis_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *chassis_name);
void sbrec_encap_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_encap_add_clause_ip(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ip);
void sbrec_encap_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_encap_update_options_setkey(const struct sbrec_encap *,  const char *, const char *);
void sbrec_encap_update_options_delkey(const struct sbrec_encap *,  const char *);
void sbrec_encap_add_clause_options(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_encap_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_encap_add_clause_type(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *type);
void sbrec_encap_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_encap * sbrec_encap_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_encap_index_set_chassis_name(const struct sbrec_encap *,
const char *chassis_name);
void sbrec_encap_index_set_ip(const struct sbrec_encap *,
const char *ip);
void sbrec_encap_index_set_options(const struct sbrec_encap *,
const struct smap *);
void sbrec_encap_index_set_type(const struct sbrec_encap *,
const char *type);

/* Gateway_Chassis table. */
struct sbrec_gateway_chassis {
	struct ovsdb_idl_row header_;

	/* chassis column. */
	struct sbrec_chassis *chassis;

	/* external_ids column. */
	struct smap external_ids;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* options column. */
	struct smap options;

	/* priority column. */
	int64_t priority;
};

enum sbrec_gateway_chassis_column_id {
    SBREC_GATEWAY_CHASSIS_COL_CHASSIS,
    SBREC_GATEWAY_CHASSIS_COL_EXTERNAL_IDS,
    SBREC_GATEWAY_CHASSIS_COL_NAME,
    SBREC_GATEWAY_CHASSIS_COL_OPTIONS,
    SBREC_GATEWAY_CHASSIS_COL_PRIORITY,
    SBREC_GATEWAY_CHASSIS_N_COLUMNS
};

#define sbrec_gateway_chassis_col_priority (sbrec_gateway_chassis_columns[SBREC_GATEWAY_CHASSIS_COL_PRIORITY])
#define sbrec_gateway_chassis_col_external_ids (sbrec_gateway_chassis_columns[SBREC_GATEWAY_CHASSIS_COL_EXTERNAL_IDS])
#define sbrec_gateway_chassis_col_chassis (sbrec_gateway_chassis_columns[SBREC_GATEWAY_CHASSIS_COL_CHASSIS])
#define sbrec_gateway_chassis_col_name (sbrec_gateway_chassis_columns[SBREC_GATEWAY_CHASSIS_COL_NAME])
#define sbrec_gateway_chassis_col_options (sbrec_gateway_chassis_columns[SBREC_GATEWAY_CHASSIS_COL_OPTIONS])

extern struct ovsdb_idl_column sbrec_gateway_chassis_columns[SBREC_GATEWAY_CHASSIS_N_COLUMNS];

const struct sbrec_gateway_chassis *sbrec_gateway_chassis_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_gateway_chassis *sbrec_gateway_chassis_first(const struct ovsdb_idl *);
const struct sbrec_gateway_chassis *sbrec_gateway_chassis_next(const struct sbrec_gateway_chassis *);
#define SBREC_GATEWAY_CHASSIS_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_gateway_chassis_first(IDL); \
             (ROW); \
             (ROW) = sbrec_gateway_chassis_next(ROW))
#define SBREC_GATEWAY_CHASSIS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_gateway_chassis_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_gateway_chassis_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_gateway_chassis_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_gateway_chassis_row_get_seqno(const struct sbrec_gateway_chassis *row, enum ovsdb_idl_change change);
const struct sbrec_gateway_chassis *sbrec_gateway_chassis_track_get_first(const struct ovsdb_idl *);
const struct sbrec_gateway_chassis *sbrec_gateway_chassis_track_get_next(const struct sbrec_gateway_chassis *);
#define SBREC_GATEWAY_CHASSIS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_gateway_chassis_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_gateway_chassis_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_gateway_chassis_is_new(const struct sbrec_gateway_chassis *row)
{
    return sbrec_gateway_chassis_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_gateway_chassis_is_deleted(const struct sbrec_gateway_chassis *row)
{
    return sbrec_gateway_chassis_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_gateway_chassis_index_destroy_row(const struct sbrec_gateway_chassis *);
int sbrec_gateway_chassis_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_gateway_chassis *, const struct sbrec_gateway_chassis *);
const struct sbrec_gateway_chassis *sbrec_gateway_chassis_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_gateway_chassis *sbrec_gateway_chassis_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_gateway_chassis *sbrec_gateway_chassis_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_gateway_chassis *);
const struct sbrec_gateway_chassis *sbrec_gateway_chassis_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_gateway_chassis *);
const struct sbrec_gateway_chassis *sbrec_gateway_chassis_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_GATEWAY_CHASSIS_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_gateway_chassis_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_gateway_chassis_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_gateway_chassis_index_next(CURSOR))
#define SBREC_GATEWAY_CHASSIS_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_gateway_chassis_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_gateway_chassis_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_gateway_chassis_index_next(CURSOR))
#define SBREC_GATEWAY_CHASSIS_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_gateway_chassis_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_gateway_chassis_index_next(CURSOR))

void sbrec_gateway_chassis_init(struct sbrec_gateway_chassis *);
void sbrec_gateway_chassis_delete(const struct sbrec_gateway_chassis *);
struct sbrec_gateway_chassis *sbrec_gateway_chassis_insert(struct ovsdb_idl_txn *);
bool sbrec_gateway_chassis_is_updated(const struct sbrec_gateway_chassis *, enum sbrec_gateway_chassis_column_id);

void sbrec_gateway_chassis_verify_chassis(const struct sbrec_gateway_chassis *);
void sbrec_gateway_chassis_verify_external_ids(const struct sbrec_gateway_chassis *);
void sbrec_gateway_chassis_verify_name(const struct sbrec_gateway_chassis *);
void sbrec_gateway_chassis_verify_options(const struct sbrec_gateway_chassis *);
void sbrec_gateway_chassis_verify_priority(const struct sbrec_gateway_chassis *);

const struct ovsdb_datum *sbrec_gateway_chassis_get_chassis(const struct sbrec_gateway_chassis *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_gateway_chassis_get_external_ids(const struct sbrec_gateway_chassis *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_gateway_chassis_get_name(const struct sbrec_gateway_chassis *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_gateway_chassis_get_options(const struct sbrec_gateway_chassis *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_gateway_chassis_get_priority(const struct sbrec_gateway_chassis *, enum ovsdb_atomic_type key_type);

void sbrec_gateway_chassis_set_chassis(const struct sbrec_gateway_chassis *, const struct sbrec_chassis *chassis);
void sbrec_gateway_chassis_set_external_ids(const struct sbrec_gateway_chassis *, const struct smap *);
void sbrec_gateway_chassis_set_name(const struct sbrec_gateway_chassis *, const char *name);
void sbrec_gateway_chassis_set_options(const struct sbrec_gateway_chassis *, const struct smap *);
void sbrec_gateway_chassis_set_priority(const struct sbrec_gateway_chassis *, int64_t priority);

void sbrec_gateway_chassis_update_chassis_addvalue(const struct sbrec_gateway_chassis *,  const struct sbrec_chassis *);
void sbrec_gateway_chassis_update_chassis_delvalue(const struct sbrec_gateway_chassis *,  const struct sbrec_chassis *);
void sbrec_gateway_chassis_add_clause_chassis(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *chassis);
void sbrec_gateway_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_gateway_chassis_update_external_ids_setkey(const struct sbrec_gateway_chassis *,  const char *, const char *);
void sbrec_gateway_chassis_update_external_ids_delkey(const struct sbrec_gateway_chassis *,  const char *);
void sbrec_gateway_chassis_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_gateway_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_gateway_chassis_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void sbrec_gateway_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_gateway_chassis_update_options_setkey(const struct sbrec_gateway_chassis *,  const char *, const char *);
void sbrec_gateway_chassis_update_options_delkey(const struct sbrec_gateway_chassis *,  const char *);
void sbrec_gateway_chassis_add_clause_options(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_gateway_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_gateway_chassis_add_clause_priority(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t priority);
void sbrec_gateway_chassis_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_gateway_chassis * sbrec_gateway_chassis_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_gateway_chassis_index_set_chassis(const struct sbrec_gateway_chassis *,
const struct sbrec_chassis *chassis);
void sbrec_gateway_chassis_index_set_external_ids(const struct sbrec_gateway_chassis *,
const struct smap *);
void sbrec_gateway_chassis_index_set_name(const struct sbrec_gateway_chassis *,
const char *name);
void sbrec_gateway_chassis_index_set_options(const struct sbrec_gateway_chassis *,
const struct smap *);
void sbrec_gateway_chassis_index_set_priority(const struct sbrec_gateway_chassis *,
int64_t priority);

/* Logical_Flow table. */
struct sbrec_logical_flow {
	struct ovsdb_idl_row header_;

	/* actions column. */
	char *actions;	/* Always nonnull. */

	/* external_ids column. */
	struct smap external_ids;

	/* logical_datapath column. */
	struct sbrec_datapath_binding *logical_datapath;

	/* match column. */
	char *match;	/* Always nonnull. */

	/* pipeline column. */
	char *pipeline;	/* Always nonnull. */

	/* priority column. */
	int64_t priority;

	/* table_id column. */
	int64_t table_id;
};

enum sbrec_logical_flow_column_id {
    SBREC_LOGICAL_FLOW_COL_ACTIONS,
    SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS,
    SBREC_LOGICAL_FLOW_COL_LOGICAL_DATAPATH,
    SBREC_LOGICAL_FLOW_COL_MATCH,
    SBREC_LOGICAL_FLOW_COL_PIPELINE,
    SBREC_LOGICAL_FLOW_COL_PRIORITY,
    SBREC_LOGICAL_FLOW_COL_TABLE_ID,
    SBREC_LOGICAL_FLOW_N_COLUMNS
};

#define sbrec_logical_flow_col_logical_datapath (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_LOGICAL_DATAPATH])
#define sbrec_logical_flow_col_pipeline (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PIPELINE])
#define sbrec_logical_flow_col_actions (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_ACTIONS])
#define sbrec_logical_flow_col_priority (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PRIORITY])
#define sbrec_logical_flow_col_table_id (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_TABLE_ID])
#define sbrec_logical_flow_col_external_ids (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS])
#define sbrec_logical_flow_col_match (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_MATCH])

extern struct ovsdb_idl_column sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_N_COLUMNS];

const struct sbrec_logical_flow *sbrec_logical_flow_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_logical_flow *sbrec_logical_flow_first(const struct ovsdb_idl *);
const struct sbrec_logical_flow *sbrec_logical_flow_next(const struct sbrec_logical_flow *);
#define SBREC_LOGICAL_FLOW_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_logical_flow_first(IDL); \
             (ROW); \
             (ROW) = sbrec_logical_flow_next(ROW))
#define SBREC_LOGICAL_FLOW_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_logical_flow_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_logical_flow_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_logical_flow_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_logical_flow_row_get_seqno(const struct sbrec_logical_flow *row, enum ovsdb_idl_change change);
const struct sbrec_logical_flow *sbrec_logical_flow_track_get_first(const struct ovsdb_idl *);
const struct sbrec_logical_flow *sbrec_logical_flow_track_get_next(const struct sbrec_logical_flow *);
#define SBREC_LOGICAL_FLOW_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_logical_flow_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_logical_flow_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_logical_flow_is_new(const struct sbrec_logical_flow *row)
{
    return sbrec_logical_flow_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_logical_flow_is_deleted(const struct sbrec_logical_flow *row)
{
    return sbrec_logical_flow_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_logical_flow_index_destroy_row(const struct sbrec_logical_flow *);
int sbrec_logical_flow_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_logical_flow *, const struct sbrec_logical_flow *);
const struct sbrec_logical_flow *sbrec_logical_flow_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_logical_flow *sbrec_logical_flow_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_logical_flow *sbrec_logical_flow_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_logical_flow *);
const struct sbrec_logical_flow *sbrec_logical_flow_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_logical_flow *);
const struct sbrec_logical_flow *sbrec_logical_flow_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_LOGICAL_FLOW_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_logical_flow_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_logical_flow_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_logical_flow_index_next(CURSOR))
#define SBREC_LOGICAL_FLOW_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_logical_flow_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_logical_flow_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_logical_flow_index_next(CURSOR))
#define SBREC_LOGICAL_FLOW_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_logical_flow_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_logical_flow_index_next(CURSOR))

void sbrec_logical_flow_init(struct sbrec_logical_flow *);
void sbrec_logical_flow_delete(const struct sbrec_logical_flow *);
struct sbrec_logical_flow *sbrec_logical_flow_insert(struct ovsdb_idl_txn *);
bool sbrec_logical_flow_is_updated(const struct sbrec_logical_flow *, enum sbrec_logical_flow_column_id);

void sbrec_logical_flow_verify_actions(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_external_ids(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_logical_datapath(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_match(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_pipeline(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_priority(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_table_id(const struct sbrec_logical_flow *);

const struct ovsdb_datum *sbrec_logical_flow_get_actions(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_logical_flow_get_external_ids(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_logical_flow_get_logical_datapath(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_logical_flow_get_match(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_logical_flow_get_pipeline(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_logical_flow_get_priority(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_logical_flow_get_table_id(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);

void sbrec_logical_flow_set_actions(const struct sbrec_logical_flow *, const char *actions);
void sbrec_logical_flow_set_external_ids(const struct sbrec_logical_flow *, const struct smap *);
void sbrec_logical_flow_set_logical_datapath(const struct sbrec_logical_flow *, const struct sbrec_datapath_binding *logical_datapath);
void sbrec_logical_flow_set_match(const struct sbrec_logical_flow *, const char *match);
void sbrec_logical_flow_set_pipeline(const struct sbrec_logical_flow *, const char *pipeline);
void sbrec_logical_flow_set_priority(const struct sbrec_logical_flow *, int64_t priority);
void sbrec_logical_flow_set_table_id(const struct sbrec_logical_flow *, int64_t table_id);

void sbrec_logical_flow_add_clause_actions(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *actions);
void sbrec_logical_flow_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_logical_flow_update_external_ids_setkey(const struct sbrec_logical_flow *,  const char *, const char *);
void sbrec_logical_flow_update_external_ids_delkey(const struct sbrec_logical_flow *,  const char *);
void sbrec_logical_flow_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_logical_flow_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_logical_flow_add_clause_logical_datapath(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *logical_datapath);
void sbrec_logical_flow_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_logical_flow_add_clause_match(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *match);
void sbrec_logical_flow_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_logical_flow_add_clause_pipeline(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *pipeline);
void sbrec_logical_flow_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_logical_flow_add_clause_priority(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t priority);
void sbrec_logical_flow_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_logical_flow_add_clause_table_id(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t table_id);
void sbrec_logical_flow_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_logical_flow * sbrec_logical_flow_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_logical_flow_index_set_actions(const struct sbrec_logical_flow *,
const char *actions);
void sbrec_logical_flow_index_set_external_ids(const struct sbrec_logical_flow *,
const struct smap *);
void sbrec_logical_flow_index_set_logical_datapath(const struct sbrec_logical_flow *,
const struct sbrec_datapath_binding *logical_datapath);
void sbrec_logical_flow_index_set_match(const struct sbrec_logical_flow *,
const char *match);
void sbrec_logical_flow_index_set_pipeline(const struct sbrec_logical_flow *,
const char *pipeline);
void sbrec_logical_flow_index_set_priority(const struct sbrec_logical_flow *,
int64_t priority);
void sbrec_logical_flow_index_set_table_id(const struct sbrec_logical_flow *,
int64_t table_id);

/* MAC_Binding table. */
struct sbrec_mac_binding {
	struct ovsdb_idl_row header_;

	/* datapath column. */
	struct sbrec_datapath_binding *datapath;

	/* ip column. */
	char *ip;	/* Always nonnull. */

	/* logical_port column. */
	char *logical_port;	/* Always nonnull. */

	/* mac column. */
	char *mac;	/* Always nonnull. */
};

enum sbrec_mac_binding_column_id {
    SBREC_MAC_BINDING_COL_DATAPATH,
    SBREC_MAC_BINDING_COL_IP,
    SBREC_MAC_BINDING_COL_LOGICAL_PORT,
    SBREC_MAC_BINDING_COL_MAC,
    SBREC_MAC_BINDING_N_COLUMNS
};

#define sbrec_mac_binding_col_ip (sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_IP])
#define sbrec_mac_binding_col_mac (sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_MAC])
#define sbrec_mac_binding_col_datapath (sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_DATAPATH])
#define sbrec_mac_binding_col_logical_port (sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_LOGICAL_PORT])

extern struct ovsdb_idl_column sbrec_mac_binding_columns[SBREC_MAC_BINDING_N_COLUMNS];

const struct sbrec_mac_binding *sbrec_mac_binding_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_mac_binding *sbrec_mac_binding_first(const struct ovsdb_idl *);
const struct sbrec_mac_binding *sbrec_mac_binding_next(const struct sbrec_mac_binding *);
#define SBREC_MAC_BINDING_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_mac_binding_first(IDL); \
             (ROW); \
             (ROW) = sbrec_mac_binding_next(ROW))
#define SBREC_MAC_BINDING_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_mac_binding_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_mac_binding_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_mac_binding_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_mac_binding_row_get_seqno(const struct sbrec_mac_binding *row, enum ovsdb_idl_change change);
const struct sbrec_mac_binding *sbrec_mac_binding_track_get_first(const struct ovsdb_idl *);
const struct sbrec_mac_binding *sbrec_mac_binding_track_get_next(const struct sbrec_mac_binding *);
#define SBREC_MAC_BINDING_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_mac_binding_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_mac_binding_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_mac_binding_is_new(const struct sbrec_mac_binding *row)
{
    return sbrec_mac_binding_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_mac_binding_is_deleted(const struct sbrec_mac_binding *row)
{
    return sbrec_mac_binding_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_mac_binding_index_destroy_row(const struct sbrec_mac_binding *);
int sbrec_mac_binding_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_mac_binding *, const struct sbrec_mac_binding *);
const struct sbrec_mac_binding *sbrec_mac_binding_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_mac_binding *sbrec_mac_binding_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_mac_binding *sbrec_mac_binding_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_mac_binding *);
const struct sbrec_mac_binding *sbrec_mac_binding_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_mac_binding *);
const struct sbrec_mac_binding *sbrec_mac_binding_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_MAC_BINDING_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_mac_binding_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_mac_binding_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_mac_binding_index_next(CURSOR))
#define SBREC_MAC_BINDING_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_mac_binding_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_mac_binding_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_mac_binding_index_next(CURSOR))
#define SBREC_MAC_BINDING_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_mac_binding_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_mac_binding_index_next(CURSOR))

void sbrec_mac_binding_init(struct sbrec_mac_binding *);
void sbrec_mac_binding_delete(const struct sbrec_mac_binding *);
struct sbrec_mac_binding *sbrec_mac_binding_insert(struct ovsdb_idl_txn *);
bool sbrec_mac_binding_is_updated(const struct sbrec_mac_binding *, enum sbrec_mac_binding_column_id);

void sbrec_mac_binding_verify_datapath(const struct sbrec_mac_binding *);
void sbrec_mac_binding_verify_ip(const struct sbrec_mac_binding *);
void sbrec_mac_binding_verify_logical_port(const struct sbrec_mac_binding *);
void sbrec_mac_binding_verify_mac(const struct sbrec_mac_binding *);

const struct ovsdb_datum *sbrec_mac_binding_get_datapath(const struct sbrec_mac_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_mac_binding_get_ip(const struct sbrec_mac_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_mac_binding_get_logical_port(const struct sbrec_mac_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_mac_binding_get_mac(const struct sbrec_mac_binding *, enum ovsdb_atomic_type key_type);

void sbrec_mac_binding_set_datapath(const struct sbrec_mac_binding *, const struct sbrec_datapath_binding *datapath);
void sbrec_mac_binding_set_ip(const struct sbrec_mac_binding *, const char *ip);
void sbrec_mac_binding_set_logical_port(const struct sbrec_mac_binding *, const char *logical_port);
void sbrec_mac_binding_set_mac(const struct sbrec_mac_binding *, const char *mac);

void sbrec_mac_binding_add_clause_datapath(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *datapath);
void sbrec_mac_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_mac_binding_add_clause_ip(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ip);
void sbrec_mac_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_mac_binding_add_clause_logical_port(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *logical_port);
void sbrec_mac_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_mac_binding_add_clause_mac(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *mac);
void sbrec_mac_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_mac_binding * sbrec_mac_binding_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_mac_binding_index_set_datapath(const struct sbrec_mac_binding *,
const struct sbrec_datapath_binding *datapath);
void sbrec_mac_binding_index_set_ip(const struct sbrec_mac_binding *,
const char *ip);
void sbrec_mac_binding_index_set_logical_port(const struct sbrec_mac_binding *,
const char *logical_port);
void sbrec_mac_binding_index_set_mac(const struct sbrec_mac_binding *,
const char *mac);

/* Multicast_Group table. */
struct sbrec_multicast_group {
	struct ovsdb_idl_row header_;

	/* datapath column. */
	struct sbrec_datapath_binding *datapath;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* ports column. */
	struct sbrec_port_binding **ports;
	size_t n_ports;

	/* tunnel_key column. */
	int64_t tunnel_key;
};

enum sbrec_multicast_group_column_id {
    SBREC_MULTICAST_GROUP_COL_DATAPATH,
    SBREC_MULTICAST_GROUP_COL_NAME,
    SBREC_MULTICAST_GROUP_COL_PORTS,
    SBREC_MULTICAST_GROUP_COL_TUNNEL_KEY,
    SBREC_MULTICAST_GROUP_N_COLUMNS
};

#define sbrec_multicast_group_col_tunnel_key (sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_TUNNEL_KEY])
#define sbrec_multicast_group_col_ports (sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_PORTS])
#define sbrec_multicast_group_col_name (sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_NAME])
#define sbrec_multicast_group_col_datapath (sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_DATAPATH])

extern struct ovsdb_idl_column sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_N_COLUMNS];

const struct sbrec_multicast_group *sbrec_multicast_group_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_multicast_group *sbrec_multicast_group_first(const struct ovsdb_idl *);
const struct sbrec_multicast_group *sbrec_multicast_group_next(const struct sbrec_multicast_group *);
#define SBREC_MULTICAST_GROUP_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_multicast_group_first(IDL); \
             (ROW); \
             (ROW) = sbrec_multicast_group_next(ROW))
#define SBREC_MULTICAST_GROUP_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_multicast_group_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_multicast_group_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_multicast_group_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_multicast_group_row_get_seqno(const struct sbrec_multicast_group *row, enum ovsdb_idl_change change);
const struct sbrec_multicast_group *sbrec_multicast_group_track_get_first(const struct ovsdb_idl *);
const struct sbrec_multicast_group *sbrec_multicast_group_track_get_next(const struct sbrec_multicast_group *);
#define SBREC_MULTICAST_GROUP_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_multicast_group_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_multicast_group_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_multicast_group_is_new(const struct sbrec_multicast_group *row)
{
    return sbrec_multicast_group_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_multicast_group_is_deleted(const struct sbrec_multicast_group *row)
{
    return sbrec_multicast_group_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_multicast_group_index_destroy_row(const struct sbrec_multicast_group *);
int sbrec_multicast_group_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_multicast_group *, const struct sbrec_multicast_group *);
const struct sbrec_multicast_group *sbrec_multicast_group_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_multicast_group *sbrec_multicast_group_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_multicast_group *sbrec_multicast_group_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_multicast_group *);
const struct sbrec_multicast_group *sbrec_multicast_group_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_multicast_group *);
const struct sbrec_multicast_group *sbrec_multicast_group_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_MULTICAST_GROUP_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_multicast_group_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_multicast_group_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_multicast_group_index_next(CURSOR))
#define SBREC_MULTICAST_GROUP_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_multicast_group_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_multicast_group_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_multicast_group_index_next(CURSOR))
#define SBREC_MULTICAST_GROUP_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_multicast_group_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_multicast_group_index_next(CURSOR))

void sbrec_multicast_group_init(struct sbrec_multicast_group *);
void sbrec_multicast_group_delete(const struct sbrec_multicast_group *);
struct sbrec_multicast_group *sbrec_multicast_group_insert(struct ovsdb_idl_txn *);
bool sbrec_multicast_group_is_updated(const struct sbrec_multicast_group *, enum sbrec_multicast_group_column_id);

void sbrec_multicast_group_verify_datapath(const struct sbrec_multicast_group *);
void sbrec_multicast_group_verify_name(const struct sbrec_multicast_group *);
void sbrec_multicast_group_verify_ports(const struct sbrec_multicast_group *);
void sbrec_multicast_group_verify_tunnel_key(const struct sbrec_multicast_group *);

const struct ovsdb_datum *sbrec_multicast_group_get_datapath(const struct sbrec_multicast_group *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_multicast_group_get_name(const struct sbrec_multicast_group *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_multicast_group_get_ports(const struct sbrec_multicast_group *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_multicast_group_get_tunnel_key(const struct sbrec_multicast_group *, enum ovsdb_atomic_type key_type);

void sbrec_multicast_group_set_datapath(const struct sbrec_multicast_group *, const struct sbrec_datapath_binding *datapath);
void sbrec_multicast_group_set_name(const struct sbrec_multicast_group *, const char *name);
void sbrec_multicast_group_set_ports(const struct sbrec_multicast_group *, struct sbrec_port_binding **ports, size_t n_ports);
void sbrec_multicast_group_set_tunnel_key(const struct sbrec_multicast_group *, int64_t tunnel_key);

void sbrec_multicast_group_add_clause_datapath(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *datapath);
void sbrec_multicast_group_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_multicast_group_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void sbrec_multicast_group_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_multicast_group_update_ports_addvalue(const struct sbrec_multicast_group *,  const struct sbrec_port_binding *);
void sbrec_multicast_group_update_ports_delvalue(const struct sbrec_multicast_group *,  const struct sbrec_port_binding *);
void sbrec_multicast_group_add_clause_ports(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **ports, size_t n_ports);
void sbrec_multicast_group_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_multicast_group_add_clause_tunnel_key(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t tunnel_key);
void sbrec_multicast_group_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_multicast_group * sbrec_multicast_group_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_multicast_group_index_set_datapath(const struct sbrec_multicast_group *,
const struct sbrec_datapath_binding *datapath);
void sbrec_multicast_group_index_set_name(const struct sbrec_multicast_group *,
const char *name);
void sbrec_multicast_group_index_set_ports(const struct sbrec_multicast_group *,
struct sbrec_port_binding **ports, size_t n_ports);
void sbrec_multicast_group_index_set_tunnel_key(const struct sbrec_multicast_group *,
int64_t tunnel_key);

/* Port_Binding table. */
struct sbrec_port_binding {
	struct ovsdb_idl_row header_;

	/* chassis column. */
	struct sbrec_chassis *chassis;

	/* datapath column. */
	struct sbrec_datapath_binding *datapath;

	/* external_ids column. */
	struct smap external_ids;

	/* gateway_chassis column. */
	struct sbrec_gateway_chassis **gateway_chassis;
	size_t n_gateway_chassis;

	/* logical_port column. */
	char *logical_port;	/* Always nonnull. */

	/* mac column. */
	char **mac;
	size_t n_mac;

	/* nat_addresses column. */
	char **nat_addresses;
	size_t n_nat_addresses;

	/* options column. */
	struct smap options;

	/* parent_port column. */
	char *parent_port;

	/* tag column. */
	int64_t *tag;
	size_t n_tag;

	/* tunnel_key column. */
	int64_t tunnel_key;

	/* type column. */
	char *type;	/* Always nonnull. */
};

enum sbrec_port_binding_column_id {
    SBREC_PORT_BINDING_COL_CHASSIS,
    SBREC_PORT_BINDING_COL_DATAPATH,
    SBREC_PORT_BINDING_COL_EXTERNAL_IDS,
    SBREC_PORT_BINDING_COL_GATEWAY_CHASSIS,
    SBREC_PORT_BINDING_COL_LOGICAL_PORT,
    SBREC_PORT_BINDING_COL_MAC,
    SBREC_PORT_BINDING_COL_NAT_ADDRESSES,
    SBREC_PORT_BINDING_COL_OPTIONS,
    SBREC_PORT_BINDING_COL_PARENT_PORT,
    SBREC_PORT_BINDING_COL_TAG,
    SBREC_PORT_BINDING_COL_TUNNEL_KEY,
    SBREC_PORT_BINDING_COL_TYPE,
    SBREC_PORT_BINDING_N_COLUMNS
};

#define sbrec_port_binding_col_nat_addresses (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_NAT_ADDRESSES])
#define sbrec_port_binding_col_gateway_chassis (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_GATEWAY_CHASSIS])
#define sbrec_port_binding_col_chassis (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_CHASSIS])
#define sbrec_port_binding_col_parent_port (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_PARENT_PORT])
#define sbrec_port_binding_col_datapath (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_DATAPATH])
#define sbrec_port_binding_col_logical_port (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_LOGICAL_PORT])
#define sbrec_port_binding_col_mac (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_MAC])
#define sbrec_port_binding_col_tag (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TAG])
#define sbrec_port_binding_col_tunnel_key (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TUNNEL_KEY])
#define sbrec_port_binding_col_external_ids (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_EXTERNAL_IDS])
#define sbrec_port_binding_col_type (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TYPE])
#define sbrec_port_binding_col_options (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_OPTIONS])

extern struct ovsdb_idl_column sbrec_port_binding_columns[SBREC_PORT_BINDING_N_COLUMNS];

const struct sbrec_port_binding *sbrec_port_binding_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_port_binding *sbrec_port_binding_first(const struct ovsdb_idl *);
const struct sbrec_port_binding *sbrec_port_binding_next(const struct sbrec_port_binding *);
#define SBREC_PORT_BINDING_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_port_binding_first(IDL); \
             (ROW); \
             (ROW) = sbrec_port_binding_next(ROW))
#define SBREC_PORT_BINDING_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_port_binding_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_port_binding_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_port_binding_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_port_binding_row_get_seqno(const struct sbrec_port_binding *row, enum ovsdb_idl_change change);
const struct sbrec_port_binding *sbrec_port_binding_track_get_first(const struct ovsdb_idl *);
const struct sbrec_port_binding *sbrec_port_binding_track_get_next(const struct sbrec_port_binding *);
#define SBREC_PORT_BINDING_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_port_binding_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_port_binding_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_port_binding_is_new(const struct sbrec_port_binding *row)
{
    return sbrec_port_binding_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_port_binding_is_deleted(const struct sbrec_port_binding *row)
{
    return sbrec_port_binding_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_port_binding_index_destroy_row(const struct sbrec_port_binding *);
int sbrec_port_binding_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_port_binding *, const struct sbrec_port_binding *);
const struct sbrec_port_binding *sbrec_port_binding_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_port_binding *sbrec_port_binding_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_port_binding *sbrec_port_binding_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_port_binding *);
const struct sbrec_port_binding *sbrec_port_binding_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_port_binding *);
const struct sbrec_port_binding *sbrec_port_binding_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_PORT_BINDING_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_port_binding_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_port_binding_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_port_binding_index_next(CURSOR))
#define SBREC_PORT_BINDING_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_port_binding_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_port_binding_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_port_binding_index_next(CURSOR))
#define SBREC_PORT_BINDING_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_port_binding_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_port_binding_index_next(CURSOR))

void sbrec_port_binding_init(struct sbrec_port_binding *);
void sbrec_port_binding_delete(const struct sbrec_port_binding *);
struct sbrec_port_binding *sbrec_port_binding_insert(struct ovsdb_idl_txn *);
bool sbrec_port_binding_is_updated(const struct sbrec_port_binding *, enum sbrec_port_binding_column_id);

void sbrec_port_binding_verify_chassis(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_datapath(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_external_ids(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_gateway_chassis(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_logical_port(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_mac(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_nat_addresses(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_options(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_parent_port(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_tag(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_tunnel_key(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_type(const struct sbrec_port_binding *);

const struct ovsdb_datum *sbrec_port_binding_get_chassis(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_datapath(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_external_ids(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_port_binding_get_gateway_chassis(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_logical_port(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_mac(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_nat_addresses(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_options(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_port_binding_get_parent_port(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_tag(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_tunnel_key(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_type(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);

void sbrec_port_binding_set_chassis(const struct sbrec_port_binding *, const struct sbrec_chassis *chassis);
void sbrec_port_binding_set_datapath(const struct sbrec_port_binding *, const struct sbrec_datapath_binding *datapath);
void sbrec_port_binding_set_external_ids(const struct sbrec_port_binding *, const struct smap *);
void sbrec_port_binding_set_gateway_chassis(const struct sbrec_port_binding *, struct sbrec_gateway_chassis **gateway_chassis, size_t n_gateway_chassis);
void sbrec_port_binding_set_logical_port(const struct sbrec_port_binding *, const char *logical_port);
void sbrec_port_binding_set_mac(const struct sbrec_port_binding *, const char **mac, size_t n_mac);
void sbrec_port_binding_set_nat_addresses(const struct sbrec_port_binding *, const char **nat_addresses, size_t n_nat_addresses);
void sbrec_port_binding_set_options(const struct sbrec_port_binding *, const struct smap *);
void sbrec_port_binding_set_parent_port(const struct sbrec_port_binding *, const char *parent_port);
void sbrec_port_binding_set_tag(const struct sbrec_port_binding *, const int64_t *tag, size_t n_tag);
void sbrec_port_binding_set_tunnel_key(const struct sbrec_port_binding *, int64_t tunnel_key);
void sbrec_port_binding_set_type(const struct sbrec_port_binding *, const char *type);

void sbrec_port_binding_update_chassis_addvalue(const struct sbrec_port_binding *,  const struct sbrec_chassis *);
void sbrec_port_binding_update_chassis_delvalue(const struct sbrec_port_binding *,  const struct sbrec_chassis *);
void sbrec_port_binding_add_clause_chassis(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *chassis);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_add_clause_datapath(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *datapath);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_update_external_ids_setkey(const struct sbrec_port_binding *,  const char *, const char *);
void sbrec_port_binding_update_external_ids_delkey(const struct sbrec_port_binding *,  const char *);
void sbrec_port_binding_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_update_gateway_chassis_addvalue(const struct sbrec_port_binding *,  const struct sbrec_gateway_chassis *);
void sbrec_port_binding_update_gateway_chassis_delvalue(const struct sbrec_port_binding *,  const struct sbrec_gateway_chassis *);
void sbrec_port_binding_add_clause_gateway_chassis(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **gateway_chassis, size_t n_gateway_chassis);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_add_clause_logical_port(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *logical_port);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_update_mac_addvalue(const struct sbrec_port_binding *,  const char *);
void sbrec_port_binding_update_mac_delvalue(const struct sbrec_port_binding *,  const char *);
void sbrec_port_binding_add_clause_mac(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **mac, size_t n_mac);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_update_nat_addresses_addvalue(const struct sbrec_port_binding *,  const char *);
void sbrec_port_binding_update_nat_addresses_delvalue(const struct sbrec_port_binding *,  const char *);
void sbrec_port_binding_add_clause_nat_addresses(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **nat_addresses, size_t n_nat_addresses);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_update_options_setkey(const struct sbrec_port_binding *,  const char *, const char *);
void sbrec_port_binding_update_options_delkey(const struct sbrec_port_binding *,  const char *);
void sbrec_port_binding_add_clause_options(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_update_parent_port_addvalue(const struct sbrec_port_binding *,  const char *);
void sbrec_port_binding_update_parent_port_delvalue(const struct sbrec_port_binding *,  const char *);
void sbrec_port_binding_add_clause_parent_port(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *parent_port);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_update_tag_addvalue(const struct sbrec_port_binding *,  int64_t );
void sbrec_port_binding_update_tag_delvalue(const struct sbrec_port_binding *,  int64_t );
void sbrec_port_binding_add_clause_tag(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *tag, size_t n_tag);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_add_clause_tunnel_key(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t tunnel_key);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_port_binding_add_clause_type(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *type);
void sbrec_port_binding_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_port_binding * sbrec_port_binding_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_port_binding_index_set_chassis(const struct sbrec_port_binding *,
const struct sbrec_chassis *chassis);
void sbrec_port_binding_index_set_datapath(const struct sbrec_port_binding *,
const struct sbrec_datapath_binding *datapath);
void sbrec_port_binding_index_set_external_ids(const struct sbrec_port_binding *,
const struct smap *);
void sbrec_port_binding_index_set_gateway_chassis(const struct sbrec_port_binding *,
struct sbrec_gateway_chassis **gateway_chassis, size_t n_gateway_chassis);
void sbrec_port_binding_index_set_logical_port(const struct sbrec_port_binding *,
const char *logical_port);
void sbrec_port_binding_index_set_mac(const struct sbrec_port_binding *,
const char **mac, size_t n_mac);
void sbrec_port_binding_index_set_nat_addresses(const struct sbrec_port_binding *,
const char **nat_addresses, size_t n_nat_addresses);
void sbrec_port_binding_index_set_options(const struct sbrec_port_binding *,
const struct smap *);
void sbrec_port_binding_index_set_parent_port(const struct sbrec_port_binding *,
const char *parent_port);
void sbrec_port_binding_index_set_tag(const struct sbrec_port_binding *,
const int64_t *tag, size_t n_tag);
void sbrec_port_binding_index_set_tunnel_key(const struct sbrec_port_binding *,
int64_t tunnel_key);
void sbrec_port_binding_index_set_type(const struct sbrec_port_binding *,
const char *type);

/* RBAC_Permission table. */
struct sbrec_rbac_permission {
	struct ovsdb_idl_row header_;

	/* authorization column. */
	char **authorization;
	size_t n_authorization;

	/* insert_delete column. */
	bool insert_delete;

	/* table column. */
	char *table;	/* Always nonnull. */

	/* update column. */
	char **update;
	size_t n_update;
};

enum sbrec_rbac_permission_column_id {
    SBREC_RBAC_PERMISSION_COL_AUTHORIZATION,
    SBREC_RBAC_PERMISSION_COL_INSERT_DELETE,
    SBREC_RBAC_PERMISSION_COL_TABLE,
    SBREC_RBAC_PERMISSION_COL_UPDATE,
    SBREC_RBAC_PERMISSION_N_COLUMNS
};

#define sbrec_rbac_permission_col_table (sbrec_rbac_permission_columns[SBREC_RBAC_PERMISSION_COL_TABLE])
#define sbrec_rbac_permission_col_authorization (sbrec_rbac_permission_columns[SBREC_RBAC_PERMISSION_COL_AUTHORIZATION])
#define sbrec_rbac_permission_col_insert_delete (sbrec_rbac_permission_columns[SBREC_RBAC_PERMISSION_COL_INSERT_DELETE])
#define sbrec_rbac_permission_col_update (sbrec_rbac_permission_columns[SBREC_RBAC_PERMISSION_COL_UPDATE])

extern struct ovsdb_idl_column sbrec_rbac_permission_columns[SBREC_RBAC_PERMISSION_N_COLUMNS];

const struct sbrec_rbac_permission *sbrec_rbac_permission_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_rbac_permission *sbrec_rbac_permission_first(const struct ovsdb_idl *);
const struct sbrec_rbac_permission *sbrec_rbac_permission_next(const struct sbrec_rbac_permission *);
#define SBREC_RBAC_PERMISSION_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_rbac_permission_first(IDL); \
             (ROW); \
             (ROW) = sbrec_rbac_permission_next(ROW))
#define SBREC_RBAC_PERMISSION_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_rbac_permission_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_rbac_permission_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_rbac_permission_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_rbac_permission_row_get_seqno(const struct sbrec_rbac_permission *row, enum ovsdb_idl_change change);
const struct sbrec_rbac_permission *sbrec_rbac_permission_track_get_first(const struct ovsdb_idl *);
const struct sbrec_rbac_permission *sbrec_rbac_permission_track_get_next(const struct sbrec_rbac_permission *);
#define SBREC_RBAC_PERMISSION_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_rbac_permission_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_rbac_permission_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_rbac_permission_is_new(const struct sbrec_rbac_permission *row)
{
    return sbrec_rbac_permission_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_rbac_permission_is_deleted(const struct sbrec_rbac_permission *row)
{
    return sbrec_rbac_permission_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_rbac_permission_index_destroy_row(const struct sbrec_rbac_permission *);
int sbrec_rbac_permission_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_rbac_permission *, const struct sbrec_rbac_permission *);
const struct sbrec_rbac_permission *sbrec_rbac_permission_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_rbac_permission *sbrec_rbac_permission_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_rbac_permission *sbrec_rbac_permission_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_rbac_permission *);
const struct sbrec_rbac_permission *sbrec_rbac_permission_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_rbac_permission *);
const struct sbrec_rbac_permission *sbrec_rbac_permission_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_RBAC_PERMISSION_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_rbac_permission_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_rbac_permission_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_rbac_permission_index_next(CURSOR))
#define SBREC_RBAC_PERMISSION_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_rbac_permission_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_rbac_permission_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_rbac_permission_index_next(CURSOR))
#define SBREC_RBAC_PERMISSION_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_rbac_permission_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_rbac_permission_index_next(CURSOR))

void sbrec_rbac_permission_init(struct sbrec_rbac_permission *);
void sbrec_rbac_permission_delete(const struct sbrec_rbac_permission *);
struct sbrec_rbac_permission *sbrec_rbac_permission_insert(struct ovsdb_idl_txn *);
bool sbrec_rbac_permission_is_updated(const struct sbrec_rbac_permission *, enum sbrec_rbac_permission_column_id);

void sbrec_rbac_permission_verify_authorization(const struct sbrec_rbac_permission *);
void sbrec_rbac_permission_verify_insert_delete(const struct sbrec_rbac_permission *);
void sbrec_rbac_permission_verify_table(const struct sbrec_rbac_permission *);
void sbrec_rbac_permission_verify_update(const struct sbrec_rbac_permission *);

const struct ovsdb_datum *sbrec_rbac_permission_get_authorization(const struct sbrec_rbac_permission *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_rbac_permission_get_insert_delete(const struct sbrec_rbac_permission *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_rbac_permission_get_table(const struct sbrec_rbac_permission *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_rbac_permission_get_update(const struct sbrec_rbac_permission *, enum ovsdb_atomic_type key_type);

void sbrec_rbac_permission_set_authorization(const struct sbrec_rbac_permission *, const char **authorization, size_t n_authorization);
void sbrec_rbac_permission_set_insert_delete(const struct sbrec_rbac_permission *, bool insert_delete);
void sbrec_rbac_permission_set_table(const struct sbrec_rbac_permission *, const char *table);
void sbrec_rbac_permission_set_update(const struct sbrec_rbac_permission *, const char **update, size_t n_update);

void sbrec_rbac_permission_update_authorization_addvalue(const struct sbrec_rbac_permission *,  const char *);
void sbrec_rbac_permission_update_authorization_delvalue(const struct sbrec_rbac_permission *,  const char *);
void sbrec_rbac_permission_add_clause_authorization(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **authorization, size_t n_authorization);
void sbrec_rbac_permission_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_rbac_permission_add_clause_insert_delete(struct ovsdb_idl_condition *, enum ovsdb_function function, bool insert_delete);
void sbrec_rbac_permission_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_rbac_permission_add_clause_table(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *table);
void sbrec_rbac_permission_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_rbac_permission_update_update_addvalue(const struct sbrec_rbac_permission *,  const char *);
void sbrec_rbac_permission_update_update_delvalue(const struct sbrec_rbac_permission *,  const char *);
void sbrec_rbac_permission_add_clause_update(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **update, size_t n_update);
void sbrec_rbac_permission_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_rbac_permission * sbrec_rbac_permission_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_rbac_permission_index_set_authorization(const struct sbrec_rbac_permission *,
const char **authorization, size_t n_authorization);
void sbrec_rbac_permission_index_set_insert_delete(const struct sbrec_rbac_permission *,
bool insert_delete);
void sbrec_rbac_permission_index_set_table(const struct sbrec_rbac_permission *,
const char *table);
void sbrec_rbac_permission_index_set_update(const struct sbrec_rbac_permission *,
const char **update, size_t n_update);

/* RBAC_Role table. */
struct sbrec_rbac_role {
	struct ovsdb_idl_row header_;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* permissions column. */
	char **key_permissions;
	struct sbrec_rbac_permission **value_permissions;
	size_t n_permissions;
};

enum sbrec_rbac_role_column_id {
    SBREC_RBAC_ROLE_COL_NAME,
    SBREC_RBAC_ROLE_COL_PERMISSIONS,
    SBREC_RBAC_ROLE_N_COLUMNS
};

#define sbrec_rbac_role_col_name (sbrec_rbac_role_columns[SBREC_RBAC_ROLE_COL_NAME])
#define sbrec_rbac_role_col_permissions (sbrec_rbac_role_columns[SBREC_RBAC_ROLE_COL_PERMISSIONS])

extern struct ovsdb_idl_column sbrec_rbac_role_columns[SBREC_RBAC_ROLE_N_COLUMNS];

const struct sbrec_rbac_role *sbrec_rbac_role_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_rbac_role *sbrec_rbac_role_first(const struct ovsdb_idl *);
const struct sbrec_rbac_role *sbrec_rbac_role_next(const struct sbrec_rbac_role *);
#define SBREC_RBAC_ROLE_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_rbac_role_first(IDL); \
             (ROW); \
             (ROW) = sbrec_rbac_role_next(ROW))
#define SBREC_RBAC_ROLE_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_rbac_role_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_rbac_role_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_rbac_role_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_rbac_role_row_get_seqno(const struct sbrec_rbac_role *row, enum ovsdb_idl_change change);
const struct sbrec_rbac_role *sbrec_rbac_role_track_get_first(const struct ovsdb_idl *);
const struct sbrec_rbac_role *sbrec_rbac_role_track_get_next(const struct sbrec_rbac_role *);
#define SBREC_RBAC_ROLE_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_rbac_role_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_rbac_role_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_rbac_role_is_new(const struct sbrec_rbac_role *row)
{
    return sbrec_rbac_role_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_rbac_role_is_deleted(const struct sbrec_rbac_role *row)
{
    return sbrec_rbac_role_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_rbac_role_index_destroy_row(const struct sbrec_rbac_role *);
int sbrec_rbac_role_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_rbac_role *, const struct sbrec_rbac_role *);
const struct sbrec_rbac_role *sbrec_rbac_role_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_rbac_role *sbrec_rbac_role_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_rbac_role *sbrec_rbac_role_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_rbac_role *);
const struct sbrec_rbac_role *sbrec_rbac_role_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_rbac_role *);
const struct sbrec_rbac_role *sbrec_rbac_role_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_RBAC_ROLE_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_rbac_role_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_rbac_role_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_rbac_role_index_next(CURSOR))
#define SBREC_RBAC_ROLE_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_rbac_role_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_rbac_role_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_rbac_role_index_next(CURSOR))
#define SBREC_RBAC_ROLE_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_rbac_role_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_rbac_role_index_next(CURSOR))

void sbrec_rbac_role_init(struct sbrec_rbac_role *);
void sbrec_rbac_role_delete(const struct sbrec_rbac_role *);
struct sbrec_rbac_role *sbrec_rbac_role_insert(struct ovsdb_idl_txn *);
bool sbrec_rbac_role_is_updated(const struct sbrec_rbac_role *, enum sbrec_rbac_role_column_id);

void sbrec_rbac_role_verify_name(const struct sbrec_rbac_role *);
void sbrec_rbac_role_verify_permissions(const struct sbrec_rbac_role *);

const struct ovsdb_datum *sbrec_rbac_role_get_name(const struct sbrec_rbac_role *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_rbac_role_get_permissions(const struct sbrec_rbac_role *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);

void sbrec_rbac_role_set_name(const struct sbrec_rbac_role *, const char *name);
void sbrec_rbac_role_set_permissions(const struct sbrec_rbac_role *, const char **key_permissions, struct sbrec_rbac_permission **value_permissions, size_t n_permissions);

void sbrec_rbac_role_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
void sbrec_rbac_role_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_rbac_role_update_permissions_setkey(const struct sbrec_rbac_role *,  const char *, const struct sbrec_rbac_permission *);
void sbrec_rbac_role_update_permissions_delkey(const struct sbrec_rbac_role *,  const char *);
void sbrec_rbac_role_add_clause_permissions(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **key_permissions, struct uuid **value_permissions, size_t n_permissions);
void sbrec_rbac_role_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_rbac_role * sbrec_rbac_role_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_rbac_role_index_set_name(const struct sbrec_rbac_role *,
const char *name);
void sbrec_rbac_role_index_set_permissions(const struct sbrec_rbac_role *,
const char **key_permissions, struct sbrec_rbac_permission **value_permissions, size_t n_permissions);

/* SB_Global table. */
struct sbrec_sb_global {
	struct ovsdb_idl_row header_;

	/* connections column. */
	struct sbrec_connection **connections;
	size_t n_connections;

	/* external_ids column. */
	struct smap external_ids;

	/* nb_cfg column. */
	int64_t nb_cfg;

	/* ssl column. */
	struct sbrec_ssl *ssl;
};

enum sbrec_sb_global_column_id {
    SBREC_SB_GLOBAL_COL_CONNECTIONS,
    SBREC_SB_GLOBAL_COL_EXTERNAL_IDS,
    SBREC_SB_GLOBAL_COL_NB_CFG,
    SBREC_SB_GLOBAL_COL_SSL,
    SBREC_SB_GLOBAL_N_COLUMNS
};

#define sbrec_sb_global_col_connections (sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_CONNECTIONS])
#define sbrec_sb_global_col_ssl (sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_SSL])
#define sbrec_sb_global_col_external_ids (sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_EXTERNAL_IDS])
#define sbrec_sb_global_col_nb_cfg (sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_NB_CFG])

extern struct ovsdb_idl_column sbrec_sb_global_columns[SBREC_SB_GLOBAL_N_COLUMNS];

const struct sbrec_sb_global *sbrec_sb_global_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_sb_global *sbrec_sb_global_first(const struct ovsdb_idl *);
const struct sbrec_sb_global *sbrec_sb_global_next(const struct sbrec_sb_global *);
#define SBREC_SB_GLOBAL_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_sb_global_first(IDL); \
             (ROW); \
             (ROW) = sbrec_sb_global_next(ROW))
#define SBREC_SB_GLOBAL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_sb_global_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_sb_global_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_sb_global_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_sb_global_row_get_seqno(const struct sbrec_sb_global *row, enum ovsdb_idl_change change);
const struct sbrec_sb_global *sbrec_sb_global_track_get_first(const struct ovsdb_idl *);
const struct sbrec_sb_global *sbrec_sb_global_track_get_next(const struct sbrec_sb_global *);
#define SBREC_SB_GLOBAL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_sb_global_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_sb_global_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_sb_global_is_new(const struct sbrec_sb_global *row)
{
    return sbrec_sb_global_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_sb_global_is_deleted(const struct sbrec_sb_global *row)
{
    return sbrec_sb_global_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_sb_global_index_destroy_row(const struct sbrec_sb_global *);
int sbrec_sb_global_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_sb_global *, const struct sbrec_sb_global *);
const struct sbrec_sb_global *sbrec_sb_global_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_sb_global *sbrec_sb_global_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_sb_global *sbrec_sb_global_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_sb_global *);
const struct sbrec_sb_global *sbrec_sb_global_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_sb_global *);
const struct sbrec_sb_global *sbrec_sb_global_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_SB_GLOBAL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_sb_global_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_sb_global_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_sb_global_index_next(CURSOR))
#define SBREC_SB_GLOBAL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_sb_global_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_sb_global_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_sb_global_index_next(CURSOR))
#define SBREC_SB_GLOBAL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_sb_global_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_sb_global_index_next(CURSOR))

void sbrec_sb_global_init(struct sbrec_sb_global *);
void sbrec_sb_global_delete(const struct sbrec_sb_global *);
struct sbrec_sb_global *sbrec_sb_global_insert(struct ovsdb_idl_txn *);
bool sbrec_sb_global_is_updated(const struct sbrec_sb_global *, enum sbrec_sb_global_column_id);

void sbrec_sb_global_verify_connections(const struct sbrec_sb_global *);
void sbrec_sb_global_verify_external_ids(const struct sbrec_sb_global *);
void sbrec_sb_global_verify_nb_cfg(const struct sbrec_sb_global *);
void sbrec_sb_global_verify_ssl(const struct sbrec_sb_global *);

const struct ovsdb_datum *sbrec_sb_global_get_connections(const struct sbrec_sb_global *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_sb_global_get_external_ids(const struct sbrec_sb_global *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_sb_global_get_nb_cfg(const struct sbrec_sb_global *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_sb_global_get_ssl(const struct sbrec_sb_global *, enum ovsdb_atomic_type key_type);

void sbrec_sb_global_set_connections(const struct sbrec_sb_global *, struct sbrec_connection **connections, size_t n_connections);
void sbrec_sb_global_set_external_ids(const struct sbrec_sb_global *, const struct smap *);
void sbrec_sb_global_set_nb_cfg(const struct sbrec_sb_global *, int64_t nb_cfg);
void sbrec_sb_global_set_ssl(const struct sbrec_sb_global *, const struct sbrec_ssl *ssl);

void sbrec_sb_global_update_connections_addvalue(const struct sbrec_sb_global *,  const struct sbrec_connection *);
void sbrec_sb_global_update_connections_delvalue(const struct sbrec_sb_global *,  const struct sbrec_connection *);
void sbrec_sb_global_add_clause_connections(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **connections, size_t n_connections);
void sbrec_sb_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_sb_global_update_external_ids_setkey(const struct sbrec_sb_global *,  const char *, const char *);
void sbrec_sb_global_update_external_ids_delkey(const struct sbrec_sb_global *,  const char *);
void sbrec_sb_global_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_sb_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_sb_global_add_clause_nb_cfg(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t nb_cfg);
void sbrec_sb_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_sb_global_update_ssl_addvalue(const struct sbrec_sb_global *,  const struct sbrec_ssl *);
void sbrec_sb_global_update_ssl_delvalue(const struct sbrec_sb_global *,  const struct sbrec_ssl *);
void sbrec_sb_global_add_clause_ssl(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *ssl);
void sbrec_sb_global_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_sb_global * sbrec_sb_global_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_sb_global_index_set_connections(const struct sbrec_sb_global *,
struct sbrec_connection **connections, size_t n_connections);
void sbrec_sb_global_index_set_external_ids(const struct sbrec_sb_global *,
const struct smap *);
void sbrec_sb_global_index_set_nb_cfg(const struct sbrec_sb_global *,
int64_t nb_cfg);
void sbrec_sb_global_index_set_ssl(const struct sbrec_sb_global *,
const struct sbrec_ssl *ssl);

/* SSL table. */
struct sbrec_ssl {
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

enum sbrec_ssl_column_id {
    SBREC_SSL_COL_BOOTSTRAP_CA_CERT,
    SBREC_SSL_COL_CA_CERT,
    SBREC_SSL_COL_CERTIFICATE,
    SBREC_SSL_COL_EXTERNAL_IDS,
    SBREC_SSL_COL_PRIVATE_KEY,
    SBREC_SSL_COL_SSL_CIPHERS,
    SBREC_SSL_COL_SSL_PROTOCOLS,
    SBREC_SSL_N_COLUMNS
};

#define sbrec_ssl_col_private_key (sbrec_ssl_columns[SBREC_SSL_COL_PRIVATE_KEY])
#define sbrec_ssl_col_ca_cert (sbrec_ssl_columns[SBREC_SSL_COL_CA_CERT])
#define sbrec_ssl_col_certificate (sbrec_ssl_columns[SBREC_SSL_COL_CERTIFICATE])
#define sbrec_ssl_col_ssl_ciphers (sbrec_ssl_columns[SBREC_SSL_COL_SSL_CIPHERS])
#define sbrec_ssl_col_bootstrap_ca_cert (sbrec_ssl_columns[SBREC_SSL_COL_BOOTSTRAP_CA_CERT])
#define sbrec_ssl_col_ssl_protocols (sbrec_ssl_columns[SBREC_SSL_COL_SSL_PROTOCOLS])
#define sbrec_ssl_col_external_ids (sbrec_ssl_columns[SBREC_SSL_COL_EXTERNAL_IDS])

extern struct ovsdb_idl_column sbrec_ssl_columns[SBREC_SSL_N_COLUMNS];

const struct sbrec_ssl *sbrec_ssl_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_ssl *sbrec_ssl_first(const struct ovsdb_idl *);
const struct sbrec_ssl *sbrec_ssl_next(const struct sbrec_ssl *);
#define SBREC_SSL_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_ssl_first(IDL); \
             (ROW); \
             (ROW) = sbrec_ssl_next(ROW))
#define SBREC_SSL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_ssl_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_ssl_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_ssl_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_ssl_row_get_seqno(const struct sbrec_ssl *row, enum ovsdb_idl_change change);
const struct sbrec_ssl *sbrec_ssl_track_get_first(const struct ovsdb_idl *);
const struct sbrec_ssl *sbrec_ssl_track_get_next(const struct sbrec_ssl *);
#define SBREC_SSL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_ssl_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_ssl_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool sbrec_ssl_is_new(const struct sbrec_ssl *row)
{
    return sbrec_ssl_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool sbrec_ssl_is_deleted(const struct sbrec_ssl *row)
{
    return sbrec_ssl_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void sbrec_ssl_index_destroy_row(const struct sbrec_ssl *);
int sbrec_ssl_index_compare(struct ovsdb_idl_index_cursor *, const struct sbrec_ssl *, const struct sbrec_ssl *);
const struct sbrec_ssl *sbrec_ssl_index_first(struct ovsdb_idl_index_cursor *);
const struct sbrec_ssl *sbrec_ssl_index_next(struct ovsdb_idl_index_cursor *);
const struct sbrec_ssl *sbrec_ssl_index_find(struct ovsdb_idl_index_cursor *, const struct sbrec_ssl *);
const struct sbrec_ssl *sbrec_ssl_index_forward_to(struct ovsdb_idl_index_cursor *, const struct sbrec_ssl *);
const struct sbrec_ssl *sbrec_ssl_index_get_data(const struct ovsdb_idl_index_cursor *);
#define SBREC_SSL_FOR_EACH_RANGE(ROW, CURSOR, FROM, TO) \
        for ((ROW) = sbrec_ssl_index_forward_to(CURSOR, FROM); \
             ((ROW) && sbrec_ssl_index_compare(CURSOR, ROW, TO) <= 0); \
             (ROW) = sbrec_ssl_index_next(CURSOR))
#define SBREC_SSL_FOR_EACH_EQUAL(ROW, CURSOR, KEY) \
        for ((ROW) = sbrec_ssl_index_find(CURSOR, KEY); \
             ((ROW) && sbrec_ssl_index_compare(CURSOR, ROW, KEY) == 0); \
             (ROW) = sbrec_ssl_index_next(CURSOR))
#define SBREC_SSL_FOR_EACH_BYINDEX(ROW, CURSOR) \
        for ((ROW) = sbrec_ssl_index_first(CURSOR); \
             (ROW); \
             (ROW) = sbrec_ssl_index_next(CURSOR))

void sbrec_ssl_init(struct sbrec_ssl *);
void sbrec_ssl_delete(const struct sbrec_ssl *);
struct sbrec_ssl *sbrec_ssl_insert(struct ovsdb_idl_txn *);
bool sbrec_ssl_is_updated(const struct sbrec_ssl *, enum sbrec_ssl_column_id);

void sbrec_ssl_verify_bootstrap_ca_cert(const struct sbrec_ssl *);
void sbrec_ssl_verify_ca_cert(const struct sbrec_ssl *);
void sbrec_ssl_verify_certificate(const struct sbrec_ssl *);
void sbrec_ssl_verify_external_ids(const struct sbrec_ssl *);
void sbrec_ssl_verify_private_key(const struct sbrec_ssl *);
void sbrec_ssl_verify_ssl_ciphers(const struct sbrec_ssl *);
void sbrec_ssl_verify_ssl_protocols(const struct sbrec_ssl *);

const struct ovsdb_datum *sbrec_ssl_get_bootstrap_ca_cert(const struct sbrec_ssl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_ssl_get_ca_cert(const struct sbrec_ssl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_ssl_get_certificate(const struct sbrec_ssl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_ssl_get_external_ids(const struct sbrec_ssl *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_ssl_get_private_key(const struct sbrec_ssl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_ssl_get_ssl_ciphers(const struct sbrec_ssl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_ssl_get_ssl_protocols(const struct sbrec_ssl *, enum ovsdb_atomic_type key_type);

void sbrec_ssl_set_bootstrap_ca_cert(const struct sbrec_ssl *, bool bootstrap_ca_cert);
void sbrec_ssl_set_ca_cert(const struct sbrec_ssl *, const char *ca_cert);
void sbrec_ssl_set_certificate(const struct sbrec_ssl *, const char *certificate);
void sbrec_ssl_set_external_ids(const struct sbrec_ssl *, const struct smap *);
void sbrec_ssl_set_private_key(const struct sbrec_ssl *, const char *private_key);
void sbrec_ssl_set_ssl_ciphers(const struct sbrec_ssl *, const char *ssl_ciphers);
void sbrec_ssl_set_ssl_protocols(const struct sbrec_ssl *, const char *ssl_protocols);

void sbrec_ssl_add_clause_bootstrap_ca_cert(struct ovsdb_idl_condition *, enum ovsdb_function function, bool bootstrap_ca_cert);
void sbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_ssl_add_clause_ca_cert(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ca_cert);
void sbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_ssl_add_clause_certificate(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *certificate);
void sbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_ssl_update_external_ids_setkey(const struct sbrec_ssl *,  const char *, const char *);
void sbrec_ssl_update_external_ids_delkey(const struct sbrec_ssl *,  const char *);
void sbrec_ssl_add_clause_external_ids(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
void sbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_ssl_add_clause_private_key(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *private_key);
void sbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_ssl_add_clause_ssl_ciphers(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ssl_ciphers);
void sbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void sbrec_ssl_add_clause_ssl_protocols(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *ssl_protocols);
void sbrec_ssl_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct sbrec_ssl * sbrec_ssl_index_init_row(struct ovsdb_idl *, const struct ovsdb_idl_table_class *);
void sbrec_ssl_index_set_bootstrap_ca_cert(const struct sbrec_ssl *,
bool bootstrap_ca_cert);
void sbrec_ssl_index_set_ca_cert(const struct sbrec_ssl *,
const char *ca_cert);
void sbrec_ssl_index_set_certificate(const struct sbrec_ssl *,
const char *certificate);
void sbrec_ssl_index_set_external_ids(const struct sbrec_ssl *,
const struct smap *);
void sbrec_ssl_index_set_private_key(const struct sbrec_ssl *,
const char *private_key);
void sbrec_ssl_index_set_ssl_ciphers(const struct sbrec_ssl *,
const char *ssl_ciphers);
void sbrec_ssl_index_set_ssl_protocols(const struct sbrec_ssl *,
const char *ssl_protocols);

enum sbrec_table_id {
    SBREC_TABLE_ADDRESS_SET,
    SBREC_TABLE_CHASSIS,
    SBREC_TABLE_CONNECTION,
    SBREC_TABLE_DHCP_OPTIONS,
    SBREC_TABLE_DHCPV6_OPTIONS,
    SBREC_TABLE_DNS,
    SBREC_TABLE_DATAPATH_BINDING,
    SBREC_TABLE_ENCAP,
    SBREC_TABLE_GATEWAY_CHASSIS,
    SBREC_TABLE_LOGICAL_FLOW,
    SBREC_TABLE_MAC_BINDING,
    SBREC_TABLE_MULTICAST_GROUP,
    SBREC_TABLE_PORT_BINDING,
    SBREC_TABLE_RBAC_PERMISSION,
    SBREC_TABLE_RBAC_ROLE,
    SBREC_TABLE_SB_GLOBAL,
    SBREC_TABLE_SSL,
    SBREC_N_TABLES
};

#define sbrec_table_address_set (sbrec_table_classes[SBREC_TABLE_ADDRESS_SET])
#define sbrec_table_gateway_chassis (sbrec_table_classes[SBREC_TABLE_GATEWAY_CHASSIS])
#define sbrec_table_dns (sbrec_table_classes[SBREC_TABLE_DNS])
#define sbrec_table_multicast_group (sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP])
#define sbrec_table_datapath_binding (sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING])
#define sbrec_table_rbac_permission (sbrec_table_classes[SBREC_TABLE_RBAC_PERMISSION])
#define sbrec_table_rbac_role (sbrec_table_classes[SBREC_TABLE_RBAC_ROLE])
#define sbrec_table_logical_flow (sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW])
#define sbrec_table_ssl (sbrec_table_classes[SBREC_TABLE_SSL])
#define sbrec_table_connection (sbrec_table_classes[SBREC_TABLE_CONNECTION])
#define sbrec_table_chassis (sbrec_table_classes[SBREC_TABLE_CHASSIS])
#define sbrec_table_dhcpv6_options (sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS])
#define sbrec_table_sb_global (sbrec_table_classes[SBREC_TABLE_SB_GLOBAL])
#define sbrec_table_encap (sbrec_table_classes[SBREC_TABLE_ENCAP])
#define sbrec_table_mac_binding (sbrec_table_classes[SBREC_TABLE_MAC_BINDING])
#define sbrec_table_port_binding (sbrec_table_classes[SBREC_TABLE_PORT_BINDING])
#define sbrec_table_dhcp_options (sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS])

extern struct ovsdb_idl_table_class sbrec_table_classes[SBREC_N_TABLES];

extern struct ovsdb_idl_class sbrec_idl_class;

const char * sbrec_get_db_version(void);

#endif /* SBREC_IDL_HEADER */
