/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#include <config.h>
#include "tests/idltest.h"
#include <limits.h>
#include "ovs-thread.h"
#include "ovsdb-data.h"
#include "ovsdb-error.h"
#include "util.h"



static struct idltest_link1 *
idltest_link1_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct idltest_link1, header_) : NULL;
}

static struct idltest_link2 *
idltest_link2_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct idltest_link2, header_) : NULL;
}

static struct idltest_simple *
idltest_simple_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct idltest_simple, header_) : NULL;
}

static struct idltest_simple2 *
idltest_simple2_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct idltest_simple2, header_) : NULL;
}

static struct idltest_simple3 *
idltest_simple3_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct idltest_simple3, header_) : NULL;
}

static struct idltest_simple4 *
idltest_simple4_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct idltest_simple4, header_) : NULL;
}

/* link1 table. */

static void
idltest_link1_parse_i(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link1 *row = idltest_link1_cast(row_);

    if (datum->n >= 1) {
        row->i = datum->keys[0].integer;
    } else {
        row->i = 0;
    }
}

static void
idltest_link1_parse_k(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link1 *row = idltest_link1_cast(row_);

    if (datum->n >= 1) {
        row->k = idltest_link1_cast(ovsdb_idl_get_row_arc(row_, &idltest_table_link1, &datum->keys[0].uuid));
    } else {
        row->k = NULL;
    }
}

static void
idltest_link1_parse_ka(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link1 *row = idltest_link1_cast(row_);
    row->ka = NULL;
    row->n_ka = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct idltest_link1 *keyRow = idltest_link1_cast(ovsdb_idl_get_row_arc(row_, &idltest_table_link1, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_ka) {
            row->ka = xmalloc(datum->n * sizeof *row->ka);
        }
        row->ka[row->n_ka] = keyRow;
        row->n_ka++;
    }
}

static void
idltest_link1_parse_l2(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link1 *row = idltest_link1_cast(row_);

    if (datum->n >= 1) {
        row->l2 = idltest_link2_cast(ovsdb_idl_get_row_arc(row_, &idltest_table_link2, &datum->keys[0].uuid));
    } else {
        row->l2 = NULL;
    }
}

static void
idltest_link1_unparse_i(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_link1_unparse_k(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_link1_unparse_ka(struct ovsdb_idl_row *row_)
{
    struct idltest_link1 *row = idltest_link1_cast(row_);
    free(row->ka);
}

static void
idltest_link1_unparse_l2(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_link1_init__(struct ovsdb_idl_row *row)
{
    idltest_link1_init(idltest_link1_cast(row));
}

/* Clears the contents of 'row' in table "link1". */
void
idltest_link1_init(struct idltest_link1 *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "link1" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct idltest_link1 *
idltest_link1_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return idltest_link1_cast(ovsdb_idl_get_row_for_uuid(idl, &idltest_table_link1, uuid));
}

/* Returns a row in table "link1" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct idltest_link1 *
idltest_link1_first(const struct ovsdb_idl *idl)
{
    return idltest_link1_cast(ovsdb_idl_first_row(idl, &idltest_table_link1));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct idltest_link1 *
idltest_link1_next(const struct idltest_link1 *row)
{
    return idltest_link1_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int idltest_link1_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &idltest_table_link1);
}

unsigned int idltest_link1_row_get_seqno(const struct idltest_link1 *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct idltest_link1 *
idltest_link1_track_get_first(const struct ovsdb_idl *idl)
{
    return idltest_link1_cast(ovsdb_idl_track_get_first(idl, &idltest_table_link1));
}

const struct idltest_link1
*idltest_link1_track_get_next(const struct idltest_link1 *row)
{
    return idltest_link1_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "link1".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link1_delete(const struct idltest_link1 *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "link1" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct idltest_link1 *
idltest_link1_insert(struct ovsdb_idl_txn *txn)
{
    return idltest_link1_cast(ovsdb_idl_txn_insert(txn, &idltest_table_link1, NULL));
}

bool
idltest_link1_is_updated(const struct idltest_link1 *row, enum idltest_link1_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &idltest_link1_columns[column]);
}

/* Causes the original contents of column "i" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "i" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "i" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "i" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link1_insert()).
 *
 *   - If "i" has already been modified (with
 *     idltest_link1_set_i()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link1_set_i() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link1_verify_i(const struct idltest_link1 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_link1_col_i);
}

/* Causes the original contents of column "k" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "k" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "k" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "k" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link1_insert()).
 *
 *   - If "k" has already been modified (with
 *     idltest_link1_set_k()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link1_set_k() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link1_verify_k(const struct idltest_link1 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_link1_col_k);
}

/* Causes the original contents of column "ka" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ka" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ka" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ka" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link1_insert()).
 *
 *   - If "ka" has already been modified (with
 *     idltest_link1_set_ka()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link1_set_ka() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link1_verify_ka(const struct idltest_link1 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_link1_col_ka);
}

/* Causes the original contents of column "l2" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "l2" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "l2" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "l2" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link1_insert()).
 *
 *   - If "l2" has already been modified (with
 *     idltest_link1_set_l2()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link1_set_l2() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link1_verify_l2(const struct idltest_link1 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_link1_col_l2);
}

/* Returns the "i" column's value from the "link1" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes i's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "i" member in idltest_link1. */
const struct ovsdb_datum *
idltest_link1_get_i(const struct idltest_link1 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &idltest_link1_col_i);
}

/* Returns the "k" column's value from the "link1" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes k's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "k" member in idltest_link1. */
const struct ovsdb_datum *
idltest_link1_get_k(const struct idltest_link1 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_link1_col_k);
}

/* Returns the "ka" column's value from the "link1" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ka's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ka" member in idltest_link1. */
const struct ovsdb_datum *
idltest_link1_get_ka(const struct idltest_link1 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_link1_col_ka);
}

/* Returns the "l2" column's value from the "link1" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes l2's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "l2" member in idltest_link1. */
const struct ovsdb_datum *
idltest_link1_get_l2(const struct idltest_link1 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_link1_col_l2);
}

/* Sets the "i" column from the "link1" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_set_i(const struct idltest_link1 *row, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = i;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_link1_col_i, &datum);
}

/* Sets the "k" column from the "link1" table in 'row' to
 * 'k'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_set_k(const struct idltest_link1 *row, const struct idltest_link1 *k)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.uuid = k->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_link1_col_k, &datum);
}

/* Sets the "ka" column from the "link1" table in 'row' to
 * the 'ka' set with 'n_ka' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_set_ka(const struct idltest_link1 *row, struct idltest_link1 **ka, size_t n_ka)
{
    struct ovsdb_datum datum;

    datum.n = n_ka;
    datum.keys = n_ka ? xmalloc(n_ka * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ka; i++) {
        datum.keys[i].uuid = ka[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &idltest_link1_col_ka, &datum);
}

/* Sets the "l2" column from the "link1" table in 'row' to
 * the 'l2' set.
 *
 * If "l2" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_set_l2(const struct idltest_link1 *row, const struct idltest_link2 *l2)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (l2) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = l2->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_link1_col_l2, &datum);
}

/* Adds the value 'new_value' to the "ka" set column from the "link1" table
 * in 'row'.
 *
 */
void
idltest_link1_update_ka_addvalue(const struct idltest_link1 *row, const struct idltest_link1 *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &idltest_link1_col_ka,
                                    datum);
}

/* Deletes the value 'delete_value' from the "ka" set column from the
 * "link1" table in 'row'.
 *
 */
void
idltest_link1_update_ka_delvalue(const struct idltest_link1 *row, const struct idltest_link1 *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &idltest_link1_col_ka,
                                    datum);
}

/* Adds the value 'new_value' to the "l2" set column from the "link1" table
 * in 'row'.
 *
 */
void
idltest_link1_update_l2_addvalue(const struct idltest_link1 *row, const struct idltest_link2 *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &idltest_link1_col_l2,
                                    datum);
}

/* Deletes the value 'delete_value' from the "l2" set column from the
 * "link1" table in 'row'.
 *
 */
void
idltest_link1_update_l2_delvalue(const struct idltest_link1 *row, const struct idltest_link2 *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &idltest_link1_col_l2,
                                    datum);
}

/* Sets the "i" column from the "link1" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_add_clause_i(struct ovsdb_idl_condition *cond, enum ovsdb_function function, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = i;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_link1_col_i,
                          &datum);
}

/* Sets the "k" column from the "link1" table in 'row' to
 * 'k'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_add_clause_k(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct uuid *k)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.uuid = *k;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_link1_col_k,
                          &datum);
}

/* Sets the "ka" column from the "link1" table in 'row' to
 * the 'ka' set with 'n_ka' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_add_clause_ka(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **ka, size_t n_ka)
{
    struct ovsdb_datum datum;
    datum.n = n_ka;
    datum.keys = n_ka ? xmalloc(n_ka * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ka; i++) {
        datum.keys[i].uuid = *ka[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_link1_col_ka,
                          &datum);
    free(datum.keys);
}

/* Sets the "l2" column from the "link1" table in 'row' to
 * the 'l2' set.
 *
 * If "l2" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_add_clause_l2(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct uuid *l2)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (l2) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *l2;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_link1_col_l2,
                          &datum);
}

/* Destroy 'row' of kind "link1". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
idltest_link1_index_destroy_row(const struct idltest_link1 *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "link1". */
struct idltest_link1 *
idltest_link1_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct idltest_link1 *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "idltest_link1" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "idltest_link1" *const_data1,  const struct "idltest_link1" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
idltest_link1_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct idltest_link1 *const_data1,  const struct idltest_link1 *const_data2)
{
    struct idltest_link1 *data1 = CONST_CAST(struct idltest_link1 *, const_data1);
    struct idltest_link1 *data2 = CONST_CAST(struct idltest_link1 *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "idltest_link1" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct idltest_link1 *
idltest_link1_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_link1_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "idltest_link1" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct idltest_link1 *
idltest_link1_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_link1_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "idltest_link1" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_link1 *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_link1 *
idltest_link1_index_find(struct ovsdb_idl_index_cursor *cursor, const struct idltest_link1 *const_data)
{
    struct idltest_link1 *data = CONST_CAST(struct idltest_link1 *, const_data);
    return idltest_link1_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "idltest_link1" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_link1 *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct idltest_link1 *
idltest_link1_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct idltest_link1 *const_data)
{
    struct idltest_link1 *data = CONST_CAST(struct idltest_link1 *, const_data);
    return idltest_link1_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "idltest_link1" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_link1 *
idltest_link1_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_link1_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "i" column from the "link1" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_index_set_i(const struct idltest_link1 *row, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->integer = i;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_link1_columns[ IDLTEST_LINK1_COL_I ], &datum, &idltest_table_classes[IDLTEST_TABLE_LINK1]);
}

/* Sets the "k" column from the "link1" table in 'row' to
 * 'k'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_index_set_k(const struct idltest_link1 *row, const struct idltest_link1 *k)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->uuid = k->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_link1_columns[ IDLTEST_LINK1_COL_K ], &datum, &idltest_table_classes[IDLTEST_TABLE_LINK1]);
}

/* Sets the "ka" column from the "link1" table in 'row' to
 * the 'ka' set with 'n_ka' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_index_set_ka(const struct idltest_link1 *row, struct idltest_link1 **ka, size_t n_ka)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_ka;
    datum.keys = n_ka ? xmalloc(n_ka * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ka; i++) {
        datum.keys[i].uuid = ka[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_link1_columns[ IDLTEST_LINK1_COL_KA ], &datum, &idltest_table_classes[IDLTEST_TABLE_LINK1]);
}

/* Sets the "l2" column from the "link1" table in 'row' to
 * the 'l2' set.
 *
 * If "l2" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_index_set_l2(const struct idltest_link1 *row, const struct idltest_link2 *l2)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (l2) {
        datum.n = 1;
        datum.keys = key;
        key->uuid = l2->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_link1_columns[ IDLTEST_LINK1_COL_L2 ], &datum, &idltest_table_classes[IDLTEST_TABLE_LINK1]);
}

struct ovsdb_idl_column idltest_link1_columns[IDLTEST_LINK1_N_COLUMNS];

void
idltest_link1_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &idltest_table_link1, condition);
}

struct ovsdb_idl_column idltest_link1_columns[IDLTEST_LINK1_N_COLUMNS] = {
    [IDLTEST_LINK1_COL_I] = {
         .name = "i",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_MIN, .max = INT64_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_link1_parse_i,
         .unparse = idltest_link1_unparse_i,
    },

    [IDLTEST_LINK1_COL_K] = {
         .name = "k",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "link1", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_link1_parse_k,
         .unparse = idltest_link1_unparse_k,
    },

    [IDLTEST_LINK1_COL_KA] = {
         .name = "ka",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "link1", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = idltest_link1_parse_ka,
         .unparse = idltest_link1_unparse_ka,
    },

    [IDLTEST_LINK1_COL_L2] = {
         .name = "l2",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "link2", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_link1_parse_l2,
         .unparse = idltest_link1_unparse_l2,
    },

};

/* link2 table. */

static void
idltest_link2_parse_i(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link2 *row = idltest_link2_cast(row_);

    if (datum->n >= 1) {
        row->i = datum->keys[0].integer;
    } else {
        row->i = 0;
    }
}

static void
idltest_link2_parse_l1(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link2 *row = idltest_link2_cast(row_);

    if (datum->n >= 1) {
        row->l1 = idltest_link1_cast(ovsdb_idl_get_row_arc(row_, &idltest_table_link1, &datum->keys[0].uuid));
    } else {
        row->l1 = NULL;
    }
}

static void
idltest_link2_unparse_i(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_link2_unparse_l1(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_link2_init__(struct ovsdb_idl_row *row)
{
    idltest_link2_init(idltest_link2_cast(row));
}

/* Clears the contents of 'row' in table "link2". */
void
idltest_link2_init(struct idltest_link2 *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "link2" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct idltest_link2 *
idltest_link2_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return idltest_link2_cast(ovsdb_idl_get_row_for_uuid(idl, &idltest_table_link2, uuid));
}

/* Returns a row in table "link2" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct idltest_link2 *
idltest_link2_first(const struct ovsdb_idl *idl)
{
    return idltest_link2_cast(ovsdb_idl_first_row(idl, &idltest_table_link2));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct idltest_link2 *
idltest_link2_next(const struct idltest_link2 *row)
{
    return idltest_link2_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int idltest_link2_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &idltest_table_link2);
}

unsigned int idltest_link2_row_get_seqno(const struct idltest_link2 *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct idltest_link2 *
idltest_link2_track_get_first(const struct ovsdb_idl *idl)
{
    return idltest_link2_cast(ovsdb_idl_track_get_first(idl, &idltest_table_link2));
}

const struct idltest_link2
*idltest_link2_track_get_next(const struct idltest_link2 *row)
{
    return idltest_link2_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "link2".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link2_delete(const struct idltest_link2 *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "link2" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct idltest_link2 *
idltest_link2_insert(struct ovsdb_idl_txn *txn)
{
    return idltest_link2_cast(ovsdb_idl_txn_insert(txn, &idltest_table_link2, NULL));
}

bool
idltest_link2_is_updated(const struct idltest_link2 *row, enum idltest_link2_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &idltest_link2_columns[column]);
}

/* Causes the original contents of column "i" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "i" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "i" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "i" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link2_insert()).
 *
 *   - If "i" has already been modified (with
 *     idltest_link2_set_i()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link2_set_i() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link2_verify_i(const struct idltest_link2 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_link2_col_i);
}

/* Causes the original contents of column "l1" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "l1" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "l1" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "l1" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link2_insert()).
 *
 *   - If "l1" has already been modified (with
 *     idltest_link2_set_l1()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link2_set_l1() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link2_verify_l1(const struct idltest_link2 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_link2_col_l1);
}

/* Returns the "i" column's value from the "link2" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes i's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "i" member in idltest_link2. */
const struct ovsdb_datum *
idltest_link2_get_i(const struct idltest_link2 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &idltest_link2_col_i);
}

/* Returns the "l1" column's value from the "link2" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes l1's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "l1" member in idltest_link2. */
const struct ovsdb_datum *
idltest_link2_get_l1(const struct idltest_link2 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_link2_col_l1);
}

/* Sets the "i" column from the "link2" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link2_set_i(const struct idltest_link2 *row, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = i;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_link2_col_i, &datum);
}

/* Sets the "l1" column from the "link2" table in 'row' to
 * the 'l1' set.
 *
 * If "l1" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link2_set_l1(const struct idltest_link2 *row, const struct idltest_link1 *l1)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (l1) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = l1->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_link2_col_l1, &datum);
}

/* Adds the value 'new_value' to the "l1" set column from the "link2" table
 * in 'row'.
 *
 */
void
idltest_link2_update_l1_addvalue(const struct idltest_link2 *row, const struct idltest_link1 *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &idltest_link2_col_l1,
                                    datum);
}

/* Deletes the value 'delete_value' from the "l1" set column from the
 * "link2" table in 'row'.
 *
 */
void
idltest_link2_update_l1_delvalue(const struct idltest_link2 *row, const struct idltest_link1 *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &idltest_link2_col_l1,
                                    datum);
}

/* Sets the "i" column from the "link2" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link2_add_clause_i(struct ovsdb_idl_condition *cond, enum ovsdb_function function, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = i;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_link2_col_i,
                          &datum);
}

/* Sets the "l1" column from the "link2" table in 'row' to
 * the 'l1' set.
 *
 * If "l1" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link2_add_clause_l1(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct uuid *l1)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (l1) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *l1;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_link2_col_l1,
                          &datum);
}

/* Destroy 'row' of kind "link2". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
idltest_link2_index_destroy_row(const struct idltest_link2 *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "link2". */
struct idltest_link2 *
idltest_link2_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct idltest_link2 *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "idltest_link2" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "idltest_link2" *const_data1,  const struct "idltest_link2" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
idltest_link2_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct idltest_link2 *const_data1,  const struct idltest_link2 *const_data2)
{
    struct idltest_link2 *data1 = CONST_CAST(struct idltest_link2 *, const_data1);
    struct idltest_link2 *data2 = CONST_CAST(struct idltest_link2 *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "idltest_link2" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct idltest_link2 *
idltest_link2_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_link2_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "idltest_link2" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct idltest_link2 *
idltest_link2_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_link2_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "idltest_link2" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_link2 *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_link2 *
idltest_link2_index_find(struct ovsdb_idl_index_cursor *cursor, const struct idltest_link2 *const_data)
{
    struct idltest_link2 *data = CONST_CAST(struct idltest_link2 *, const_data);
    return idltest_link2_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "idltest_link2" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_link2 *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct idltest_link2 *
idltest_link2_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct idltest_link2 *const_data)
{
    struct idltest_link2 *data = CONST_CAST(struct idltest_link2 *, const_data);
    return idltest_link2_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "idltest_link2" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_link2 *
idltest_link2_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_link2_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "i" column from the "link2" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link2_index_set_i(const struct idltest_link2 *row, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->integer = i;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_link2_columns[ IDLTEST_LINK2_COL_I ], &datum, &idltest_table_classes[IDLTEST_TABLE_LINK2]);
}

/* Sets the "l1" column from the "link2" table in 'row' to
 * the 'l1' set.
 *
 * If "l1" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link2_index_set_l1(const struct idltest_link2 *row, const struct idltest_link1 *l1)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof (union ovsdb_atom));

    if (l1) {
        datum.n = 1;
        datum.keys = key;
        key->uuid = l1->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_link2_columns[ IDLTEST_LINK2_COL_L1 ], &datum, &idltest_table_classes[IDLTEST_TABLE_LINK2]);
}

struct ovsdb_idl_column idltest_link2_columns[IDLTEST_LINK2_N_COLUMNS];

void
idltest_link2_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &idltest_table_link2, condition);
}

struct ovsdb_idl_column idltest_link2_columns[IDLTEST_LINK2_N_COLUMNS] = {
    [IDLTEST_LINK2_COL_I] = {
         .name = "i",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_MIN, .max = INT64_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_link2_parse_i,
         .unparse = idltest_link2_unparse_i,
    },

    [IDLTEST_LINK2_COL_L1] = {
         .name = "l1",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "link1", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_link2_parse_l1,
         .unparse = idltest_link2_unparse_l1,
    },

};

/* simple table. */

static void
idltest_simple_parse_b(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    if (datum->n >= 1) {
        row->b = datum->keys[0].boolean;
    } else {
        row->b = false;
    }
}

static void
idltest_simple_parse_ba(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    size_t n = MIN(1, datum->n);
    row->ba = NULL;
    row->n_ba = 0;
    for (size_t i = 0; i < n; i++) {
        if (!row->n_ba) {
            row->ba = xmalloc(n * sizeof *row->ba);
        }
        row->ba[row->n_ba] = datum->keys[i].boolean;
        row->n_ba++;
    }
}

static void
idltest_simple_parse_i(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    if (datum->n >= 1) {
        row->i = datum->keys[0].integer;
    } else {
        row->i = 0;
    }
}

static void
idltest_simple_parse_ia(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    row->ia = NULL;
    row->n_ia = 0;
    for (size_t i = 0; i < datum->n; i++) {
        if (!row->n_ia) {
            row->ia = xmalloc(datum->n * sizeof *row->ia);
        }
        row->ia[row->n_ia] = datum->keys[i].integer;
        row->n_ia++;
    }
}

static void
idltest_simple_parse_r(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    if (datum->n >= 1) {
        row->r = datum->keys[0].real;
    } else {
        row->r = 0.0;
    }
}

static void
idltest_simple_parse_ra(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    row->ra = NULL;
    row->n_ra = 0;
    for (size_t i = 0; i < datum->n; i++) {
        if (!row->n_ra) {
            row->ra = xmalloc(datum->n * sizeof *row->ra);
        }
        row->ra[row->n_ra] = datum->keys[i].real;
        row->n_ra++;
    }
}

static void
idltest_simple_parse_s(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    if (datum->n >= 1) {
        row->s = datum->keys[0].string;
    } else {
        row->s = "";
    }
}

static void
idltest_simple_parse_sa(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    row->sa = NULL;
    row->n_sa = 0;
    for (size_t i = 0; i < datum->n; i++) {
        if (!row->n_sa) {
            row->sa = xmalloc(datum->n * sizeof *row->sa);
        }
        row->sa[row->n_sa] = datum->keys[i].string;
        row->n_sa++;
    }
}

static void
idltest_simple_parse_u(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    if (datum->n >= 1) {
        row->u = datum->keys[0].uuid;
    } else {
        uuid_zero(&row->u);
    }
}

static void
idltest_simple_parse_ua(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    row->ua = NULL;
    row->n_ua = 0;
    for (size_t i = 0; i < datum->n; i++) {
        if (!row->n_ua) {
            row->ua = xmalloc(datum->n * sizeof *row->ua);
        }
        row->ua[row->n_ua] = datum->keys[i].uuid;
        row->n_ua++;
    }
}

static void
idltest_simple_unparse_b(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple_unparse_ba(struct ovsdb_idl_row *row_)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    free(row->ba);
}

static void
idltest_simple_unparse_i(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple_unparse_ia(struct ovsdb_idl_row *row_)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    free(row->ia);
}

static void
idltest_simple_unparse_r(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple_unparse_ra(struct ovsdb_idl_row *row_)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    free(row->ra);
}

static void
idltest_simple_unparse_s(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple_unparse_sa(struct ovsdb_idl_row *row_)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    free(row->sa);
}

static void
idltest_simple_unparse_u(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple_unparse_ua(struct ovsdb_idl_row *row_)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    free(row->ua);
}

static void
idltest_simple_init__(struct ovsdb_idl_row *row)
{
    idltest_simple_init(idltest_simple_cast(row));
}

/* Clears the contents of 'row' in table "simple". */
void
idltest_simple_init(struct idltest_simple *row)
{
    memset(row, 0, sizeof *row); 
    row->s = "";
}

/* Searches table "simple" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct idltest_simple *
idltest_simple_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return idltest_simple_cast(ovsdb_idl_get_row_for_uuid(idl, &idltest_table_simple, uuid));
}

/* Returns a row in table "simple" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct idltest_simple *
idltest_simple_first(const struct ovsdb_idl *idl)
{
    return idltest_simple_cast(ovsdb_idl_first_row(idl, &idltest_table_simple));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct idltest_simple *
idltest_simple_next(const struct idltest_simple *row)
{
    return idltest_simple_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int idltest_simple_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &idltest_table_simple);
}

unsigned int idltest_simple_row_get_seqno(const struct idltest_simple *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct idltest_simple *
idltest_simple_track_get_first(const struct ovsdb_idl *idl)
{
    return idltest_simple_cast(ovsdb_idl_track_get_first(idl, &idltest_table_simple));
}

const struct idltest_simple
*idltest_simple_track_get_next(const struct idltest_simple *row)
{
    return idltest_simple_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "simple".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_delete(const struct idltest_simple *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "simple" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct idltest_simple *
idltest_simple_insert(struct ovsdb_idl_txn *txn)
{
    return idltest_simple_cast(ovsdb_idl_txn_insert(txn, &idltest_table_simple, NULL));
}

bool
idltest_simple_is_updated(const struct idltest_simple *row, enum idltest_simple_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &idltest_simple_columns[column]);
}

/* Causes the original contents of column "b" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "b" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "b" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "b" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "b" has already been modified (with
 *     idltest_simple_set_b()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_b() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_b(const struct idltest_simple *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_col_b);
}

/* Causes the original contents of column "ba" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ba" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ba" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ba" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "ba" has already been modified (with
 *     idltest_simple_set_ba()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_ba() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_ba(const struct idltest_simple *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_col_ba);
}

/* Causes the original contents of column "i" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "i" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "i" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "i" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "i" has already been modified (with
 *     idltest_simple_set_i()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_i() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_i(const struct idltest_simple *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_col_i);
}

/* Causes the original contents of column "ia" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ia" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ia" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ia" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "ia" has already been modified (with
 *     idltest_simple_set_ia()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_ia() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_ia(const struct idltest_simple *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_col_ia);
}

/* Causes the original contents of column "r" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "r" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "r" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "r" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "r" has already been modified (with
 *     idltest_simple_set_r()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_r() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_r(const struct idltest_simple *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_col_r);
}

/* Causes the original contents of column "ra" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ra" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ra" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ra" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "ra" has already been modified (with
 *     idltest_simple_set_ra()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_ra() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_ra(const struct idltest_simple *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_col_ra);
}

/* Causes the original contents of column "s" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "s" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "s" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "s" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "s" has already been modified (with
 *     idltest_simple_set_s()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_s() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_s(const struct idltest_simple *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_col_s);
}

/* Causes the original contents of column "sa" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "sa" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "sa" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "sa" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "sa" has already been modified (with
 *     idltest_simple_set_sa()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_sa() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_sa(const struct idltest_simple *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_col_sa);
}

/* Causes the original contents of column "u" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "u" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "u" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "u" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "u" has already been modified (with
 *     idltest_simple_set_u()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_u() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_u(const struct idltest_simple *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_col_u);
}

/* Causes the original contents of column "ua" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ua" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ua" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ua" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "ua" has already been modified (with
 *     idltest_simple_set_ua()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_ua() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_ua(const struct idltest_simple *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_col_ua);
}

/* Returns the "b" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes b's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "b" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_b(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_b);
}

/* Returns the "ba" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes ba's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ba" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_ba(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_ba);
}

/* Returns the "i" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes i's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "i" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_i(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_i);
}

/* Returns the "ia" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes ia's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ia" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_ia(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_ia);
}

/* Returns the "r" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_REAL.
 * (This helps to avoid silent bugs if someone changes r's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "r" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_r(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_REAL);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_r);
}

/* Returns the "ra" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_REAL.
 * (This helps to avoid silent bugs if someone changes ra's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ra" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_ra(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_REAL);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_ra);
}

/* Returns the "s" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes s's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "s" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_s(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_s);
}

/* Returns the "sa" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes sa's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "sa" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_sa(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_sa);
}

/* Returns the "u" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes u's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "u" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_u(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_u);
}

/* Returns the "ua" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ua's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ua" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_ua(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_ua);
}

/* Sets the "b" column from the "simple" table in 'row' to
 * 'b'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_b(const struct idltest_simple *row, bool b)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.boolean = b;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_col_b, &datum);
}

/* Sets the "ba" column from the "simple" table in 'row' to
 * the 'ba' set with 'n_ba' entries.
 *
 * 'n_ba' may be 0 or 1; if it is 0, then 'ba'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_ba(const struct idltest_simple *row, const bool *ba, size_t n_ba)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_ba) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *ba;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_col_ba, &datum);
}

/* Sets the "i" column from the "simple" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_i(const struct idltest_simple *row, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = i;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_col_i, &datum);
}

/* Sets the "ia" column from the "simple" table in 'row' to
 * the 'ia' set with 'n_ia' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_ia(const struct idltest_simple *row, const int64_t *ia, size_t n_ia)
{
    struct ovsdb_datum datum;

    datum.n = n_ia;
    datum.keys = n_ia ? xmalloc(n_ia * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ia; i++) {
        datum.keys[i].integer = ia[i];
    }
    ovsdb_idl_txn_write(&row->header_, &idltest_simple_col_ia, &datum);
}

/* Sets the "r" column from the "simple" table in 'row' to
 * 'r'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_r(const struct idltest_simple *row, double r)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.real = r;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_col_r, &datum);
}

/* Sets the "ra" column from the "simple" table in 'row' to
 * the 'ra' set with 'n_ra' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_ra(const struct idltest_simple *row, const double *ra, size_t n_ra)
{
    struct ovsdb_datum datum;

    datum.n = n_ra;
    datum.keys = n_ra ? xmalloc(n_ra * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ra; i++) {
        datum.keys[i].real = ra[i];
    }
    ovsdb_idl_txn_write(&row->header_, &idltest_simple_col_ra, &datum);
}

/* Sets the "s" column from the "simple" table in 'row' to
 * 's'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_s(const struct idltest_simple *row, const char *s)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, s);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_col_s, &datum);
}

/* Sets the "sa" column from the "simple" table in 'row' to
 * the 'sa' set with 'n_sa' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_sa(const struct idltest_simple *row, const char **sa, size_t n_sa)
{
    struct ovsdb_datum datum;

    datum.n = n_sa;
    datum.keys = n_sa ? xmalloc(n_sa * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_sa; i++) {
        datum.keys[i].string = xstrdup(sa[i]);
    }
    ovsdb_idl_txn_write(&row->header_, &idltest_simple_col_sa, &datum);
}

/* Sets the "u" column from the "simple" table in 'row' to
 * 'u'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_u(const struct idltest_simple *row, struct uuid u)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.uuid = u;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_col_u, &datum);
}

/* Sets the "ua" column from the "simple" table in 'row' to
 * the 'ua' set with 'n_ua' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_ua(const struct idltest_simple *row, const struct uuid *ua, size_t n_ua)
{
    struct ovsdb_datum datum;

    datum.n = n_ua;
    datum.keys = n_ua ? xmalloc(n_ua * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ua; i++) {
        datum.keys[i].uuid = ua[i];
    }
    ovsdb_idl_txn_write(&row->header_, &idltest_simple_col_ua, &datum);
}

/* Adds the value 'new_value' to the "ba" set column from the "simple" table
 * in 'row'.
 *
 */
void
idltest_simple_update_ba_addvalue(const struct idltest_simple *row, bool new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &idltest_simple_col_ba,
                                    datum);
}

/* Deletes the value 'delete_value' from the "ba" set column from the
 * "simple" table in 'row'.
 *
 */
void
idltest_simple_update_ba_delvalue(const struct idltest_simple *row, bool delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &idltest_simple_col_ba,
                                    datum);
}

/* Adds the value 'new_value' to the "ia" set column from the "simple" table
 * in 'row'.
 *
 */
void
idltest_simple_update_ia_addvalue(const struct idltest_simple *row, int64_t new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &idltest_simple_col_ia,
                                    datum);
}

/* Deletes the value 'delete_value' from the "ia" set column from the
 * "simple" table in 'row'.
 *
 */
void
idltest_simple_update_ia_delvalue(const struct idltest_simple *row, int64_t delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &idltest_simple_col_ia,
                                    datum);
}

/* Adds the value 'new_value' to the "ra" set column from the "simple" table
 * in 'row'.
 *
 */
void
idltest_simple_update_ra_addvalue(const struct idltest_simple *row, double new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].real = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &idltest_simple_col_ra,
                                    datum);
}

/* Deletes the value 'delete_value' from the "ra" set column from the
 * "simple" table in 'row'.
 *
 */
void
idltest_simple_update_ra_delvalue(const struct idltest_simple *row, double delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].real = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &idltest_simple_col_ra,
                                    datum);
}

/* Adds the value 'new_value' to the "sa" set column from the "simple" table
 * in 'row'.
 *
 */
void
idltest_simple_update_sa_addvalue(const struct idltest_simple *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &idltest_simple_col_sa,
                                    datum);
}

/* Deletes the value 'delete_value' from the "sa" set column from the
 * "simple" table in 'row'.
 *
 */
void
idltest_simple_update_sa_delvalue(const struct idltest_simple *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &idltest_simple_col_sa,
                                    datum);
}

/* Adds the value 'new_value' to the "ua" set column from the "simple" table
 * in 'row'.
 *
 */
void
idltest_simple_update_ua_addvalue(const struct idltest_simple *row, struct uuid new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &idltest_simple_col_ua,
                                    datum);
}

/* Deletes the value 'delete_value' from the "ua" set column from the
 * "simple" table in 'row'.
 *
 */
void
idltest_simple_update_ua_delvalue(const struct idltest_simple *row, struct uuid delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &idltest_simple_col_ua,
                                    datum);
}

/* Sets the "b" column from the "simple" table in 'row' to
 * 'b'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_add_clause_b(struct ovsdb_idl_condition *cond, enum ovsdb_function function, bool b)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.boolean = b;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple_col_b,
                          &datum);
}

/* Sets the "ba" column from the "simple" table in 'row' to
 * the 'ba' set with 'n_ba' entries.
 *
 * 'n_ba' may be 0 or 1; if it is 0, then 'ba'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_add_clause_ba(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const bool *ba, size_t n_ba)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    if (n_ba) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *ba;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple_col_ba,
                          &datum);
}

/* Sets the "i" column from the "simple" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_add_clause_i(struct ovsdb_idl_condition *cond, enum ovsdb_function function, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.integer = i;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple_col_i,
                          &datum);
}

/* Sets the "ia" column from the "simple" table in 'row' to
 * the 'ia' set with 'n_ia' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_add_clause_ia(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const int64_t *ia, size_t n_ia)
{
    struct ovsdb_datum datum;
    datum.n = n_ia;
    datum.keys = n_ia ? xmalloc(n_ia * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ia; i++) {
        datum.keys[i].integer = ia[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple_col_ia,
                          &datum);
    free(datum.keys);
}

/* Sets the "r" column from the "simple" table in 'row' to
 * 'r'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_add_clause_r(struct ovsdb_idl_condition *cond, enum ovsdb_function function, double r)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.real = r;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple_col_r,
                          &datum);
}

/* Sets the "ra" column from the "simple" table in 'row' to
 * the 'ra' set with 'n_ra' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_add_clause_ra(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const double *ra, size_t n_ra)
{
    struct ovsdb_datum datum;
    datum.n = n_ra;
    datum.keys = n_ra ? xmalloc(n_ra * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ra; i++) {
        datum.keys[i].real = ra[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_REAL, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple_col_ra,
                          &datum);
    free(datum.keys);
}

/* Sets the "s" column from the "simple" table in 'row' to
 * 's'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_add_clause_s(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *s)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, s);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple_col_s,
                          &datum);
}

/* Sets the "sa" column from the "simple" table in 'row' to
 * the 'sa' set with 'n_sa' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_add_clause_sa(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char **sa, size_t n_sa)
{
    struct ovsdb_datum datum;
    datum.n = n_sa;
    datum.keys = n_sa ? xmalloc(n_sa * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_sa; i++) {
        datum.keys[i].string = CONST_CAST(char *, sa[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple_col_sa,
                          &datum);
    free(datum.keys);
}

/* Sets the "u" column from the "simple" table in 'row' to
 * 'u'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_add_clause_u(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid u)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.uuid = u;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple_col_u,
                          &datum);
}

/* Sets the "ua" column from the "simple" table in 'row' to
 * the 'ua' set with 'n_ua' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_add_clause_ua(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct uuid *ua, size_t n_ua)
{
    struct ovsdb_datum datum;
    datum.n = n_ua;
    datum.keys = n_ua ? xmalloc(n_ua * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_ua; i++) {
        datum.keys[i].uuid = ua[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple_col_ua,
                          &datum);
    free(datum.keys);
}

/* Destroy 'row' of kind "simple". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
idltest_simple_index_destroy_row(const struct idltest_simple *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "simple". */
struct idltest_simple *
idltest_simple_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct idltest_simple *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "idltest_simple" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "idltest_simple" *const_data1,  const struct "idltest_simple" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
idltest_simple_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple *const_data1,  const struct idltest_simple *const_data2)
{
    struct idltest_simple *data1 = CONST_CAST(struct idltest_simple *, const_data1);
    struct idltest_simple *data2 = CONST_CAST(struct idltest_simple *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "idltest_simple" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct idltest_simple *
idltest_simple_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "idltest_simple" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct idltest_simple *
idltest_simple_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "idltest_simple" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_simple *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_simple *
idltest_simple_index_find(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple *const_data)
{
    struct idltest_simple *data = CONST_CAST(struct idltest_simple *, const_data);
    return idltest_simple_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "idltest_simple" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_simple *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct idltest_simple *
idltest_simple_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple *const_data)
{
    struct idltest_simple *data = CONST_CAST(struct idltest_simple *, const_data);
    return idltest_simple_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "idltest_simple" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_simple *
idltest_simple_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "b" column from the "simple" table in 'row' to
 * 'b'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_index_set_b(const struct idltest_simple *row, bool b)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->boolean = b;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple_columns[ IDLTEST_SIMPLE_COL_B ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

/* Sets the "ba" column from the "simple" table in 'row' to
 * the 'ba' set with 'n_ba' entries.
 *
 * 'n_ba' may be 0 or 1; if it is 0, then 'ba'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_index_set_ba(const struct idltest_simple *row, const bool *ba, size_t n_ba)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    if (n_ba) {
        datum.n = 1;
        datum.keys = key;
        key->boolean = *ba;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple_columns[ IDLTEST_SIMPLE_COL_BA ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

/* Sets the "i" column from the "simple" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_index_set_i(const struct idltest_simple *row, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->integer = i;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple_columns[ IDLTEST_SIMPLE_COL_I ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

/* Sets the "ia" column from the "simple" table in 'row' to
 * the 'ia' set with 'n_ia' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_index_set_ia(const struct idltest_simple *row, const int64_t *ia, size_t n_ia)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_ia;
    datum.keys = n_ia ? xmalloc(n_ia * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ia; i++) {
        datum.keys[i].integer = ia[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple_columns[ IDLTEST_SIMPLE_COL_IA ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

/* Sets the "r" column from the "simple" table in 'row' to
 * 'r'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_index_set_r(const struct idltest_simple *row, double r)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->real = r;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple_columns[ IDLTEST_SIMPLE_COL_R ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

/* Sets the "ra" column from the "simple" table in 'row' to
 * the 'ra' set with 'n_ra' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_index_set_ra(const struct idltest_simple *row, const double *ra, size_t n_ra)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_ra;
    datum.keys = n_ra ? xmalloc(n_ra * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ra; i++) {
        datum.keys[i].real = ra[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_REAL, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple_columns[ IDLTEST_SIMPLE_COL_RA ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

/* Sets the "s" column from the "simple" table in 'row' to
 * 's'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_index_set_s(const struct idltest_simple *row, const char *s)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, s);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple_columns[ IDLTEST_SIMPLE_COL_S ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

/* Sets the "sa" column from the "simple" table in 'row' to
 * the 'sa' set with 'n_sa' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_index_set_sa(const struct idltest_simple *row, const char **sa, size_t n_sa)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_sa;
    datum.keys = n_sa ? xmalloc(n_sa * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_sa; i++) {
        datum.keys[i].string = xstrdup(sa[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple_columns[ IDLTEST_SIMPLE_COL_SA ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

/* Sets the "u" column from the "simple" table in 'row' to
 * 'u'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_index_set_u(const struct idltest_simple *row, struct uuid u)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->uuid = u;
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple_columns[ IDLTEST_SIMPLE_COL_U ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

/* Sets the "ua" column from the "simple" table in 'row' to
 * the 'ua' set with 'n_ua' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_index_set_ua(const struct idltest_simple *row, const struct uuid *ua, size_t n_ua)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_ua;
    datum.keys = n_ua ? xmalloc(n_ua * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ua; i++) {
        datum.keys[i].uuid = ua[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple_columns[ IDLTEST_SIMPLE_COL_UA ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

struct ovsdb_idl_column idltest_simple_columns[IDLTEST_SIMPLE_N_COLUMNS];

void
idltest_simple_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &idltest_table_simple, condition);
}

struct ovsdb_idl_column idltest_simple_columns[IDLTEST_SIMPLE_N_COLUMNS] = {
    [IDLTEST_SIMPLE_COL_B] = {
         .name = "b",
         .type = {
            .key = {
               .type = OVSDB_TYPE_BOOLEAN,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_simple_parse_b,
         .unparse = idltest_simple_unparse_b,
    },

    [IDLTEST_SIMPLE_COL_BA] = {
         .name = "ba",
         .type = {
            .key = {
               .type = OVSDB_TYPE_BOOLEAN,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_simple_parse_ba,
         .unparse = idltest_simple_unparse_ba,
    },

    [IDLTEST_SIMPLE_COL_I] = {
         .name = "i",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_MIN, .max = INT64_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_simple_parse_i,
         .unparse = idltest_simple_unparse_i,
    },

    [IDLTEST_SIMPLE_COL_IA] = {
         .name = "ia",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_MIN, .max = INT64_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = idltest_simple_parse_ia,
         .unparse = idltest_simple_unparse_ia,
    },

    [IDLTEST_SIMPLE_COL_R] = {
         .name = "r",
         .type = {
            .key = {
               .type = OVSDB_TYPE_REAL,
               .u.real = { .min = -DBL_MAX, .max = DBL_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_simple_parse_r,
         .unparse = idltest_simple_unparse_r,
    },

    [IDLTEST_SIMPLE_COL_RA] = {
         .name = "ra",
         .type = {
            .key = {
               .type = OVSDB_TYPE_REAL,
               .u.real = { .min = -DBL_MAX, .max = DBL_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = idltest_simple_parse_ra,
         .unparse = idltest_simple_unparse_ra,
    },

    [IDLTEST_SIMPLE_COL_S] = {
         .name = "s",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_simple_parse_s,
         .unparse = idltest_simple_unparse_s,
    },

    [IDLTEST_SIMPLE_COL_SA] = {
         .name = "sa",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = idltest_simple_parse_sa,
         .unparse = idltest_simple_unparse_sa,
    },

    [IDLTEST_SIMPLE_COL_U] = {
         .name = "u",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_simple_parse_u,
         .unparse = idltest_simple_unparse_u,
    },

    [IDLTEST_SIMPLE_COL_UA] = {
         .name = "ua",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = idltest_simple_parse_ua,
         .unparse = idltest_simple_unparse_ua,
    },

};

/* simple2 table. */

static void
idltest_simple2_parse_imap(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple2 *row = idltest_simple2_cast(row_);
    row->key_imap = NULL;
    row->value_imap = NULL;
    row->n_imap = 0;
    for (size_t i = 0; i < datum->n; i++) {
        if (!row->n_imap) {
            row->key_imap = xmalloc(datum->n * sizeof *row->key_imap);
            row->value_imap = xmalloc(datum->n * sizeof *row->value_imap);
        }
        row->key_imap[row->n_imap] = datum->keys[i].integer;
        row->value_imap[row->n_imap] = datum->values[i].string;
        row->n_imap++;
    }
}

static void
idltest_simple2_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple2 *row = idltest_simple2_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
idltest_simple2_parse_smap(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple2 *row = idltest_simple2_cast(row_);
    smap_init(&row->smap);
    for (size_t i = 0; i < datum->n; i++) {
        smap_add(&row->smap,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
idltest_simple2_unparse_imap(struct ovsdb_idl_row *row_)
{
    struct idltest_simple2 *row = idltest_simple2_cast(row_);
    free(row->key_imap);
    free(row->value_imap);
}

static void
idltest_simple2_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple2_unparse_smap(struct ovsdb_idl_row *row_)
{
    struct idltest_simple2 *row = idltest_simple2_cast(row_);
    smap_destroy(&row->smap);
}

static void
idltest_simple2_init__(struct ovsdb_idl_row *row)
{
    idltest_simple2_init(idltest_simple2_cast(row));
}

/* Clears the contents of 'row' in table "simple2". */
void
idltest_simple2_init(struct idltest_simple2 *row)
{
    memset(row, 0, sizeof *row); 
    row->name = "";
    smap_init(&row->smap);
}

/* Searches table "simple2" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct idltest_simple2 *
idltest_simple2_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return idltest_simple2_cast(ovsdb_idl_get_row_for_uuid(idl, &idltest_table_simple2, uuid));
}

/* Returns a row in table "simple2" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct idltest_simple2 *
idltest_simple2_first(const struct ovsdb_idl *idl)
{
    return idltest_simple2_cast(ovsdb_idl_first_row(idl, &idltest_table_simple2));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct idltest_simple2 *
idltest_simple2_next(const struct idltest_simple2 *row)
{
    return idltest_simple2_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int idltest_simple2_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &idltest_table_simple2);
}

unsigned int idltest_simple2_row_get_seqno(const struct idltest_simple2 *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct idltest_simple2 *
idltest_simple2_track_get_first(const struct ovsdb_idl *idl)
{
    return idltest_simple2_cast(ovsdb_idl_track_get_first(idl, &idltest_table_simple2));
}

const struct idltest_simple2
*idltest_simple2_track_get_next(const struct idltest_simple2 *row)
{
    return idltest_simple2_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "simple2".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple2_delete(const struct idltest_simple2 *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "simple2" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct idltest_simple2 *
idltest_simple2_insert(struct ovsdb_idl_txn *txn)
{
    return idltest_simple2_cast(ovsdb_idl_txn_insert(txn, &idltest_table_simple2, NULL));
}

bool
idltest_simple2_is_updated(const struct idltest_simple2 *row, enum idltest_simple2_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &idltest_simple2_columns[column]);
}

/* Causes the original contents of column "imap" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "imap" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "imap" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "imap" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple2_insert()).
 *
 *   - If "imap" has already been modified (with
 *     idltest_simple2_set_imap()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple2_set_imap() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple2_verify_imap(const struct idltest_simple2 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple2_col_imap);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple2_insert()).
 *
 *   - If "name" has already been modified (with
 *     idltest_simple2_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple2_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple2_verify_name(const struct idltest_simple2 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple2_col_name);
}

/* Causes the original contents of column "smap" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "smap" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "smap" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "smap" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple2_insert()).
 *
 *   - If "smap" has already been modified (with
 *     idltest_simple2_set_smap()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple2_set_smap() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple2_verify_smap(const struct idltest_simple2 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple2_col_smap);
}

/* Returns the "imap" column's value from the "simple2" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes imap's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "imap" member in idltest_simple2. */
const struct ovsdb_datum *
idltest_simple2_get_imap(const struct idltest_simple2 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &idltest_simple2_col_imap);
}

/* Returns the "name" column's value from the "simple2" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in idltest_simple2. */
const struct ovsdb_datum *
idltest_simple2_get_name(const struct idltest_simple2 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &idltest_simple2_col_name);
}

/* Returns the "smap" column's value from the "simple2" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes smap's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "smap" member in idltest_simple2. */
const struct ovsdb_datum *
idltest_simple2_get_smap(const struct idltest_simple2 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &idltest_simple2_col_smap);
}

/* Sets the "imap" column from the "simple2" table in 'row' to
 * the map with keys 'key_imap' and values 'value_imap'
 * with 'n_imap' entries.
 *
 * Argument constraints: key in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple2_set_imap(const struct idltest_simple2 *row, const int64_t *key_imap, const char **value_imap, size_t n_imap)
{
    struct ovsdb_datum datum;

    datum.n = n_imap;
    datum.keys = n_imap ? xmalloc(n_imap * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_imap * sizeof *datum.values);
    for (size_t i = 0; i < n_imap; i++) {
        datum.keys[i].integer = key_imap[i];
        datum.values[i].string = xstrdup(value_imap[i]);
    }
    ovsdb_idl_txn_write(&row->header_, &idltest_simple2_col_imap, &datum);
}

/* Sets the "name" column from the "simple2" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple2_set_name(const struct idltest_simple2 *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple2_col_name, &datum);
}

/* Sets the "smap" column's value from the "simple2" table in 'row'
 * to 'smap'.
 *
 * The caller retains ownership of 'smap' and everything in it. */
void
idltest_simple2_set_smap(const struct idltest_simple2 *row, const struct smap *smap)
{
    struct ovsdb_datum datum;

    if (smap) {
        ovsdb_datum_from_smap(&datum, smap);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &idltest_simple2_col_smap,
                        &datum);
}


/* Sets an element of the "imap" map column from the "simple2" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
idltest_simple2_update_imap_setkey(const struct idltest_simple2 *row, int64_t new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].integer = new_key;
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &idltest_simple2_col_imap,
                                    datum);
}

/* Deletes an element of the "imap" map column from the "simple2" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
idltest_simple2_update_imap_delkey(const struct idltest_simple2 *row, int64_t delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].integer = delete_key;

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &idltest_simple2_col_imap,
                                    datum);
}

/* Sets an element of the "smap" map column from the "simple2" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
idltest_simple2_update_smap_setkey(const struct idltest_simple2 *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &idltest_simple2_col_smap,
                                    datum);
}

/* Deletes an element of the "smap" map column from the "simple2" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
idltest_simple2_update_smap_delkey(const struct idltest_simple2 *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &idltest_simple2_col_smap,
                                    datum);
}

/* Sets the "imap" column from the "simple2" table in 'row' to
 * the map with keys 'key_imap' and values 'value_imap'
 * with 'n_imap' entries.
 *
 * Argument constraints: key in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple2_add_clause_imap(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const int64_t *key_imap, const char **value_imap, size_t n_imap)
{
    struct ovsdb_datum datum;
    datum.n = n_imap;
    datum.keys = n_imap ? xmalloc(n_imap * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_imap * sizeof *datum.values);
    for (size_t i = 0; i < n_imap; i++) {
        datum.keys[i].integer = key_imap[i];
        datum.values[i].string = CONST_CAST(char *, value_imap[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_STRING);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple2_col_imap,
                          &datum);
    free(datum.keys);
    free(datum.values);
}

/* Sets the "name" column from the "simple2" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple2_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple2_col_name,
                          &datum);
}

/* Sets the "smap" column's value from the "simple2" table in 'row'
 * to 'smap'.
 *
 * The caller retains ownership of 'smap' and everything in it. */
void
idltest_simple2_add_clause_smap(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct smap *smap)
{
    struct ovsdb_datum datum;

    if (smap) {
        ovsdb_datum_from_smap(&datum, smap);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(cond,
                                   function,
                                   &idltest_simple2_col_smap,
                                   &datum);

    ovsdb_datum_destroy(&datum, &idltest_simple2_col_smap.type);
}


/* Destroy 'row' of kind "simple2". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
idltest_simple2_index_destroy_row(const struct idltest_simple2 *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "simple2". */
struct idltest_simple2 *
idltest_simple2_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct idltest_simple2 *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "idltest_simple2" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "idltest_simple2" *const_data1,  const struct "idltest_simple2" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
idltest_simple2_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple2 *const_data1,  const struct idltest_simple2 *const_data2)
{
    struct idltest_simple2 *data1 = CONST_CAST(struct idltest_simple2 *, const_data1);
    struct idltest_simple2 *data2 = CONST_CAST(struct idltest_simple2 *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "idltest_simple2" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct idltest_simple2 *
idltest_simple2_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple2_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "idltest_simple2" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct idltest_simple2 *
idltest_simple2_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple2_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "idltest_simple2" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_simple2 *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_simple2 *
idltest_simple2_index_find(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple2 *const_data)
{
    struct idltest_simple2 *data = CONST_CAST(struct idltest_simple2 *, const_data);
    return idltest_simple2_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "idltest_simple2" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_simple2 *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct idltest_simple2 *
idltest_simple2_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple2 *const_data)
{
    struct idltest_simple2 *data = CONST_CAST(struct idltest_simple2 *, const_data);
    return idltest_simple2_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "idltest_simple2" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_simple2 *
idltest_simple2_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple2_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "imap" column from the "simple2" table in 'row' to
 * the map with keys 'key_imap' and values 'value_imap'
 * with 'n_imap' entries.
 *
 * Argument constraints: key in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple2_index_set_imap(const struct idltest_simple2 *row, const int64_t *key_imap, const char **value_imap, size_t n_imap)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_imap;
    datum.keys = n_imap ? xmalloc(n_imap * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_imap * sizeof *datum.values);
    for (i = 0; i < n_imap; i++) {
        datum.keys[i].integer = key_imap[i];
        datum.values[i].string = xstrdup(value_imap[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_STRING);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple2_columns[ IDLTEST_SIMPLE2_COL_IMAP ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE2]);
}

/* Sets the "name" column from the "simple2" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple2_index_set_name(const struct idltest_simple2 *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple2_columns[ IDLTEST_SIMPLE2_COL_NAME ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE2]);
}

/* Sets the "smap" column's value from the "simple2" table in 'row'
 * to 'smap'.
 *
 * The caller retains ownership of 'smap' and everything in it. */
void
idltest_simple2_index_set_smap(const struct idltest_simple2 *row, const struct smap *smap)
{
    struct ovsdb_datum *datum = xmalloc(sizeof(struct ovsdb_datum));

    if (smap) {
        struct smap_node *node;
        size_t i;

        datum->n = smap_count(smap);
        datum->keys = xmalloc(datum->n * sizeof *datum->keys);
        datum->values = xmalloc(datum->n * sizeof *datum->values);

        i = 0;
        SMAP_FOR_EACH (node, smap) {
            datum->keys[i].string = node->key;
            datum->values[i].string = node->value;
            i++;
        }
        ovsdb_datum_sort_unique(datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(datum);
    }
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_),
                           &idltest_simple2_columns[IDLTEST_SIMPLE2_COL_SMAP],
                           datum,
                           &idltest_table_classes[IDLTEST_TABLE_SIMPLE2]);
}


struct ovsdb_idl_column idltest_simple2_columns[IDLTEST_SIMPLE2_N_COLUMNS];

void
idltest_simple2_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &idltest_table_simple2, condition);
}

struct ovsdb_idl_column idltest_simple2_columns[IDLTEST_SIMPLE2_N_COLUMNS] = {
    [IDLTEST_SIMPLE2_COL_IMAP] = {
         .name = "imap",
         .type = {
            .key = {
               .type = OVSDB_TYPE_INTEGER,
               .u.integer = { .min = INT64_C(0), .max = INT64_C(4095) },
            },
            .value = {
                .type = OVSDB_TYPE_STRING,
                .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = idltest_simple2_parse_imap,
         .unparse = idltest_simple2_unparse_imap,
    },

    [IDLTEST_SIMPLE2_COL_NAME] = {
         .name = "name",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_simple2_parse_name,
         .unparse = idltest_simple2_unparse_name,
    },

    [IDLTEST_SIMPLE2_COL_SMAP] = {
         .name = "smap",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = {
                .type = OVSDB_TYPE_STRING,
                .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = idltest_simple2_parse_smap,
         .unparse = idltest_simple2_unparse_smap,
    },

};

/* simple3 table. */

static void
idltest_simple3_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple3 *row = idltest_simple3_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
idltest_simple3_parse_uref(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple3 *row = idltest_simple3_cast(row_);
    row->uref = NULL;
    row->n_uref = 0;
    for (size_t i = 0; i < datum->n; i++) {
        struct idltest_simple4 *keyRow = idltest_simple4_cast(ovsdb_idl_get_row_arc(row_, &idltest_table_simple4, &datum->keys[i].uuid));
        if (!keyRow) {
            continue;
        }
        if (!row->n_uref) {
            row->uref = xmalloc(datum->n * sizeof *row->uref);
        }
        row->uref[row->n_uref] = keyRow;
        row->n_uref++;
    }
}

static void
idltest_simple3_parse_uset(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple3 *row = idltest_simple3_cast(row_);
    row->uset = NULL;
    row->n_uset = 0;
    for (size_t i = 0; i < datum->n; i++) {
        if (!row->n_uset) {
            row->uset = xmalloc(datum->n * sizeof *row->uset);
        }
        row->uset[row->n_uset] = datum->keys[i].uuid;
        row->n_uset++;
    }
}

static void
idltest_simple3_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple3_unparse_uref(struct ovsdb_idl_row *row_)
{
    struct idltest_simple3 *row = idltest_simple3_cast(row_);
    free(row->uref);
}

static void
idltest_simple3_unparse_uset(struct ovsdb_idl_row *row_)
{
    struct idltest_simple3 *row = idltest_simple3_cast(row_);
    free(row->uset);
}

static void
idltest_simple3_init__(struct ovsdb_idl_row *row)
{
    idltest_simple3_init(idltest_simple3_cast(row));
}

/* Clears the contents of 'row' in table "simple3". */
void
idltest_simple3_init(struct idltest_simple3 *row)
{
    memset(row, 0, sizeof *row); 
    row->name = "";
}

/* Searches table "simple3" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct idltest_simple3 *
idltest_simple3_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return idltest_simple3_cast(ovsdb_idl_get_row_for_uuid(idl, &idltest_table_simple3, uuid));
}

/* Returns a row in table "simple3" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct idltest_simple3 *
idltest_simple3_first(const struct ovsdb_idl *idl)
{
    return idltest_simple3_cast(ovsdb_idl_first_row(idl, &idltest_table_simple3));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct idltest_simple3 *
idltest_simple3_next(const struct idltest_simple3 *row)
{
    return idltest_simple3_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int idltest_simple3_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &idltest_table_simple3);
}

unsigned int idltest_simple3_row_get_seqno(const struct idltest_simple3 *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct idltest_simple3 *
idltest_simple3_track_get_first(const struct ovsdb_idl *idl)
{
    return idltest_simple3_cast(ovsdb_idl_track_get_first(idl, &idltest_table_simple3));
}

const struct idltest_simple3
*idltest_simple3_track_get_next(const struct idltest_simple3 *row)
{
    return idltest_simple3_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "simple3".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple3_delete(const struct idltest_simple3 *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "simple3" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct idltest_simple3 *
idltest_simple3_insert(struct ovsdb_idl_txn *txn)
{
    return idltest_simple3_cast(ovsdb_idl_txn_insert(txn, &idltest_table_simple3, NULL));
}

bool
idltest_simple3_is_updated(const struct idltest_simple3 *row, enum idltest_simple3_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &idltest_simple3_columns[column]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple3_insert()).
 *
 *   - If "name" has already been modified (with
 *     idltest_simple3_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple3_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple3_verify_name(const struct idltest_simple3 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple3_col_name);
}

/* Causes the original contents of column "uref" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "uref" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "uref" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "uref" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple3_insert()).
 *
 *   - If "uref" has already been modified (with
 *     idltest_simple3_set_uref()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple3_set_uref() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple3_verify_uref(const struct idltest_simple3 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple3_col_uref);
}

/* Causes the original contents of column "uset" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "uset" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "uset" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "uset" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple3_insert()).
 *
 *   - If "uset" has already been modified (with
 *     idltest_simple3_set_uset()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple3_set_uset() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple3_verify_uset(const struct idltest_simple3 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple3_col_uset);
}

/* Returns the "name" column's value from the "simple3" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in idltest_simple3. */
const struct ovsdb_datum *
idltest_simple3_get_name(const struct idltest_simple3 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &idltest_simple3_col_name);
}

/* Returns the "uref" column's value from the "simple3" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes uref's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "uref" member in idltest_simple3. */
const struct ovsdb_datum *
idltest_simple3_get_uref(const struct idltest_simple3 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_simple3_col_uref);
}

/* Returns the "uset" column's value from the "simple3" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes uset's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "uset" member in idltest_simple3. */
const struct ovsdb_datum *
idltest_simple3_get_uset(const struct idltest_simple3 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_simple3_col_uset);
}

/* Sets the "name" column from the "simple3" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple3_set_name(const struct idltest_simple3 *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple3_col_name, &datum);
}

/* Sets the "uref" column from the "simple3" table in 'row' to
 * the 'uref' set with 'n_uref' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple3_set_uref(const struct idltest_simple3 *row, struct idltest_simple4 **uref, size_t n_uref)
{
    struct ovsdb_datum datum;

    datum.n = n_uref;
    datum.keys = n_uref ? xmalloc(n_uref * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_uref; i++) {
        datum.keys[i].uuid = uref[i]->header_.uuid;
    }
    ovsdb_idl_txn_write(&row->header_, &idltest_simple3_col_uref, &datum);
}

/* Sets the "uset" column from the "simple3" table in 'row' to
 * the 'uset' set with 'n_uset' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple3_set_uset(const struct idltest_simple3 *row, const struct uuid *uset, size_t n_uset)
{
    struct ovsdb_datum datum;

    datum.n = n_uset;
    datum.keys = n_uset ? xmalloc(n_uset * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_uset; i++) {
        datum.keys[i].uuid = uset[i];
    }
    ovsdb_idl_txn_write(&row->header_, &idltest_simple3_col_uset, &datum);
}

/* Adds the value 'new_value' to the "uref" set column from the "simple3" table
 * in 'row'.
 *
 */
void
idltest_simple3_update_uref_addvalue(const struct idltest_simple3 *row, const struct idltest_simple4 *new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &idltest_simple3_col_uref,
                                    datum);
}

/* Deletes the value 'delete_value' from the "uref" set column from the
 * "simple3" table in 'row'.
 *
 */
void
idltest_simple3_update_uref_delvalue(const struct idltest_simple3 *row, const struct idltest_simple4 *delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &idltest_simple3_col_uref,
                                    datum);
}

/* Adds the value 'new_value' to the "uset" set column from the "simple3" table
 * in 'row'.
 *
 */
void
idltest_simple3_update_uset_addvalue(const struct idltest_simple3 *row, struct uuid new_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &idltest_simple3_col_uset,
                                    datum);
}

/* Deletes the value 'delete_value' from the "uset" set column from the
 * "simple3" table in 'row'.
 *
 */
void
idltest_simple3_update_uset_delvalue(const struct idltest_simple3 *row, struct uuid delete_value)
{
    struct ovsdb_datum *datum;

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &idltest_simple3_col_uset,
                                    datum);
}

/* Sets the "name" column from the "simple3" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple3_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple3_col_name,
                          &datum);
}

/* Sets the "uref" column from the "simple3" table in 'row' to
 * the 'uref' set with 'n_uref' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple3_add_clause_uref(struct ovsdb_idl_condition *cond, enum ovsdb_function function, struct uuid **uref, size_t n_uref)
{
    struct ovsdb_datum datum;
    datum.n = n_uref;
    datum.keys = n_uref ? xmalloc(n_uref * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_uref; i++) {
        datum.keys[i].uuid = *uref[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple3_col_uref,
                          &datum);
    free(datum.keys);
}

/* Sets the "uset" column from the "simple3" table in 'row' to
 * the 'uset' set with 'n_uset' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple3_add_clause_uset(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const struct uuid *uset, size_t n_uset)
{
    struct ovsdb_datum datum;
    datum.n = n_uset;
    datum.keys = n_uset ? xmalloc(n_uset * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (size_t i = 0; i < n_uset; i++) {
        datum.keys[i].uuid = uset[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple3_col_uset,
                          &datum);
    free(datum.keys);
}

/* Destroy 'row' of kind "simple3". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
idltest_simple3_index_destroy_row(const struct idltest_simple3 *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "simple3". */
struct idltest_simple3 *
idltest_simple3_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct idltest_simple3 *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "idltest_simple3" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "idltest_simple3" *const_data1,  const struct "idltest_simple3" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
idltest_simple3_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple3 *const_data1,  const struct idltest_simple3 *const_data2)
{
    struct idltest_simple3 *data1 = CONST_CAST(struct idltest_simple3 *, const_data1);
    struct idltest_simple3 *data2 = CONST_CAST(struct idltest_simple3 *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "idltest_simple3" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct idltest_simple3 *
idltest_simple3_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple3_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "idltest_simple3" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct idltest_simple3 *
idltest_simple3_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple3_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "idltest_simple3" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_simple3 *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_simple3 *
idltest_simple3_index_find(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple3 *const_data)
{
    struct idltest_simple3 *data = CONST_CAST(struct idltest_simple3 *, const_data);
    return idltest_simple3_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "idltest_simple3" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_simple3 *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct idltest_simple3 *
idltest_simple3_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple3 *const_data)
{
    struct idltest_simple3 *data = CONST_CAST(struct idltest_simple3 *, const_data);
    return idltest_simple3_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "idltest_simple3" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_simple3 *
idltest_simple3_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple3_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "name" column from the "simple3" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple3_index_set_name(const struct idltest_simple3 *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple3_columns[ IDLTEST_SIMPLE3_COL_NAME ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE3]);
}

/* Sets the "uref" column from the "simple3" table in 'row' to
 * the 'uref' set with 'n_uref' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple3_index_set_uref(const struct idltest_simple3 *row, struct idltest_simple4 **uref, size_t n_uref)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_uref;
    datum.keys = n_uref ? xmalloc(n_uref * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_uref; i++) {
        datum.keys[i].uuid = uref[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple3_columns[ IDLTEST_SIMPLE3_COL_UREF ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE3]);
}

/* Sets the "uset" column from the "simple3" table in 'row' to
 * the 'uset' set with 'n_uset' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple3_index_set_uset(const struct idltest_simple3 *row, const struct uuid *uset, size_t n_uset)
{
    struct ovsdb_datum datum;
    size_t i;

    datum.n = n_uset;
    datum.keys = n_uset ? xmalloc(n_uset * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_uset; i++) {
        datum.keys[i].uuid = uset[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple3_columns[ IDLTEST_SIMPLE3_COL_USET ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE3]);
}

struct ovsdb_idl_column idltest_simple3_columns[IDLTEST_SIMPLE3_N_COLUMNS];

void
idltest_simple3_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &idltest_table_simple3, condition);
}

struct ovsdb_idl_column idltest_simple3_columns[IDLTEST_SIMPLE3_N_COLUMNS] = {
    [IDLTEST_SIMPLE3_COL_NAME] = {
         .name = "name",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_simple3_parse_name,
         .unparse = idltest_simple3_unparse_name,
    },

    [IDLTEST_SIMPLE3_COL_UREF] = {
         .name = "uref",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
               .u.uuid = { .refTableName = "simple4", .refType = OVSDB_REF_STRONG },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = idltest_simple3_parse_uref,
         .unparse = idltest_simple3_unparse_uref,
    },

    [IDLTEST_SIMPLE3_COL_USET] = {
         .name = "uset",
         .type = {
            .key = {
               .type = OVSDB_TYPE_UUID,
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 0,
            .n_max = UINT_MAX,
         },
         .mutable = true,
         .parse = idltest_simple3_parse_uset,
         .unparse = idltest_simple3_unparse_uset,
    },

};

/* simple4 table. */

static void
idltest_simple4_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple4 *row = idltest_simple4_cast(row_);

    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
idltest_simple4_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple4_init__(struct ovsdb_idl_row *row)
{
    idltest_simple4_init(idltest_simple4_cast(row));
}

/* Clears the contents of 'row' in table "simple4". */
void
idltest_simple4_init(struct idltest_simple4 *row)
{
    memset(row, 0, sizeof *row); 
    row->name = "";
}

/* Searches table "simple4" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct idltest_simple4 *
idltest_simple4_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return idltest_simple4_cast(ovsdb_idl_get_row_for_uuid(idl, &idltest_table_simple4, uuid));
}

/* Returns a row in table "simple4" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct idltest_simple4 *
idltest_simple4_first(const struct ovsdb_idl *idl)
{
    return idltest_simple4_cast(ovsdb_idl_first_row(idl, &idltest_table_simple4));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct idltest_simple4 *
idltest_simple4_next(const struct idltest_simple4 *row)
{
    return idltest_simple4_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int idltest_simple4_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &idltest_table_simple4);
}

unsigned int idltest_simple4_row_get_seqno(const struct idltest_simple4 *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct idltest_simple4 *
idltest_simple4_track_get_first(const struct ovsdb_idl *idl)
{
    return idltest_simple4_cast(ovsdb_idl_track_get_first(idl, &idltest_table_simple4));
}

const struct idltest_simple4
*idltest_simple4_track_get_next(const struct idltest_simple4 *row)
{
    return idltest_simple4_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "simple4".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple4_delete(const struct idltest_simple4 *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "simple4" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct idltest_simple4 *
idltest_simple4_insert(struct ovsdb_idl_txn *txn)
{
    return idltest_simple4_cast(ovsdb_idl_txn_insert(txn, &idltest_table_simple4, NULL));
}

bool
idltest_simple4_is_updated(const struct idltest_simple4 *row, enum idltest_simple4_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &idltest_simple4_columns[column]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction aborts and ovsdb_idl_txn_commit() returns TXN_TRY_AGAIN.
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple4_insert()).
 *
 *   - If "name" has already been modified (with
 *     idltest_simple4_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple4_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple4_verify_name(const struct idltest_simple4 *row)
{
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple4_col_name);
}

/* Returns the "name" column's value from the "simple4" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in idltest_simple4. */
const struct ovsdb_datum *
idltest_simple4_get_name(const struct idltest_simple4 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &idltest_simple4_col_name);
}

/* Sets the "name" column from the "simple4" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple4_set_name(const struct idltest_simple4 *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple4_col_name, &datum);
}

/* Sets the "name" column from the "simple4" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple4_add_clause_name(struct ovsdb_idl_condition *cond, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(cond,
                          function,
                          &idltest_simple4_col_name,
                          &datum);
}

/* Destroy 'row' of kind "simple4". The row must have been
 * created with ovsdb_idl_index_init_row.
 */
void
idltest_simple4_index_destroy_row(const struct idltest_simple4 *row)
{
    ovsdb_idl_index_destroy_row__(&row->header_);
}
        

/* Creates a new row of kind "simple4". */
struct idltest_simple4 *
idltest_simple4_index_init_row(struct ovsdb_idl *idl, const struct ovsdb_idl_table_class *class)
{
    return (struct idltest_simple4 *) ovsdb_idl_index_init_row(idl, class);
}

/*  This function is used to compare "idltest_simple4" records on table in iteration loops for compound-index operations.
    After been called, cursor point to current position in the index
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct "idltest_simple4" *const_data1,  const struct "idltest_simple4" *const_data2. Data to be compared.
    Return value: 0 if both data values are equal, -1 if first parameter is less than second and 1 otherwise. */
int
idltest_simple4_index_compare(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple4 *const_data1,  const struct idltest_simple4 *const_data2)
{
    struct idltest_simple4 *data1 = CONST_CAST(struct idltest_simple4 *, const_data1);
    struct idltest_simple4 *data2 = CONST_CAST(struct idltest_simple4 *, const_data2);
    return ovsdb_idl_index_compare(cursor, &data1->header_, &data2->header_);
}

/*  This function is called to position the cursor at the first row in "idltest_simple4" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The first row in the corresponding index. */
const struct idltest_simple4 *
idltest_simple4_index_first(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple4_cast(ovsdb_idl_index_first(cursor));
}

/*  This function is called to position the cursor at the next row in "idltest_simple4" table on the associated compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The next row in the corresponding index. */
const struct idltest_simple4 *
idltest_simple4_index_next(struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple4_cast(ovsdb_idl_index_next(cursor));
}

/*  This function is used to find the data of the row in "idltest_simple4" table that meet criteria with the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_simple4 *const_data. Data to be searched.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_simple4 *
idltest_simple4_index_find(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple4 *const_data)
{
    struct idltest_simple4 *data = CONST_CAST(struct idltest_simple4 *, const_data);
    return idltest_simple4_cast(ovsdb_idl_index_find(cursor, &data->header_));
}

/*  This function is used to set the cursor pointing to the row in "idltest_simple4" table that meet criteria of the requested data
    associated in the compound-index.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
                const struct idltest_simple4 *const_data. Data to be searched.
    Return value: The row in the corresponding index closest to the criteria. */
const struct idltest_simple4 *
idltest_simple4_index_forward_to(struct ovsdb_idl_index_cursor *cursor, const struct idltest_simple4 *const_data)
{
    struct idltest_simple4 *data = CONST_CAST(struct idltest_simple4 *, const_data);
    return idltest_simple4_cast(ovsdb_idl_index_forward_to(cursor, &data->header_));
}

/*  This function is used to get the data of the row in the current position pointed by the cursor in
    "idltest_simple4" table.
    Parameters: struct ovsdb_idl_index_cursor *cursor. Cursor used to iterate over the indexed data on this table.
    Return value: The row in the corresponding index if found or NULL otherwise. */
const struct idltest_simple4 *
idltest_simple4_index_get_data(const struct ovsdb_idl_index_cursor *cursor)
{
    return idltest_simple4_cast(ovsdb_idl_index_data(CONST_CAST(struct ovsdb_idl_index_cursor *, cursor)));
}

/* Sets the "name" column from the "simple4" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple4_index_set_name(const struct idltest_simple4 *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom *key = xmalloc(sizeof(union ovsdb_atom));

    datum.n = 1;
    datum.keys = key;
    key->string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_index_write_(CONST_CAST(struct ovsdb_idl_row *, &row->header_), &idltest_simple4_columns[ IDLTEST_SIMPLE4_COL_NAME ], &datum, &idltest_table_classes[IDLTEST_TABLE_SIMPLE4]);
}

struct ovsdb_idl_column idltest_simple4_columns[IDLTEST_SIMPLE4_N_COLUMNS];

void
idltest_simple4_set_condition(struct ovsdb_idl *idl, struct ovsdb_idl_condition *condition)
{
    ovsdb_idl_set_condition(idl, &idltest_table_simple4, condition);
}

struct ovsdb_idl_column idltest_simple4_columns[IDLTEST_SIMPLE4_N_COLUMNS] = {
    [IDLTEST_SIMPLE4_COL_NAME] = {
         .name = "name",
         .type = {
            .key = {
               .type = OVSDB_TYPE_STRING,
               .u.string = { .minLen = 0, .maxLen = UINT_MAX },
            },
            .value = OVSDB_BASE_VOID_INIT,
            .n_min = 1,
            .n_max = 1,
         },
         .mutable = true,
         .parse = idltest_simple4_parse_name,
         .unparse = idltest_simple4_unparse_name,
    },

};

struct ovsdb_idl_table_class idltest_table_classes[IDLTEST_N_TABLES] = {
    {"link1", true,
     idltest_link1_columns, ARRAY_SIZE(idltest_link1_columns),
     sizeof(struct idltest_link1), idltest_link1_init__},
    {"link2", true,
     idltest_link2_columns, ARRAY_SIZE(idltest_link2_columns),
     sizeof(struct idltest_link2), idltest_link2_init__},
    {"simple", true,
     idltest_simple_columns, ARRAY_SIZE(idltest_simple_columns),
     sizeof(struct idltest_simple), idltest_simple_init__},
    {"simple2", true,
     idltest_simple2_columns, ARRAY_SIZE(idltest_simple2_columns),
     sizeof(struct idltest_simple2), idltest_simple2_init__},
    {"simple3", true,
     idltest_simple3_columns, ARRAY_SIZE(idltest_simple3_columns),
     sizeof(struct idltest_simple3), idltest_simple3_init__},
    {"simple4", true,
     idltest_simple4_columns, ARRAY_SIZE(idltest_simple4_columns),
     sizeof(struct idltest_simple4), idltest_simple4_init__},
};

struct ovsdb_idl_class idltest_idl_class = {
    "idltest", idltest_table_classes, ARRAY_SIZE(idltest_table_classes)
};

/* Return the schema version.  The caller must not free the returned value. */
const char *
idltest_get_db_version(void)
{
    return "1.2.3";
}

